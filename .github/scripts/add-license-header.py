#!/usr/bin/env python3
#
# Copyright 2025 Budapest University of Technology and Economics
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""
Script to add license headers to source files.
Usage: python add-license-header.py <license_file> [directory]
"""

import os
import sys
import argparse
from pathlib import Path
from typing import Dict, List, Tuple

# Comment styles for different file types
COMMENT_STYLES = {
    # Single-line comment style (used for block comments)
    'h': ('/*', ' * ', ' */'),
    'cpp': ('/*', ' * ', ' */'),
    'c': ('/*', ' * ', ' */'),
    'js': ('/*', ' * ', ' */'),
    'jsx': ('/*', ' * ', ' */'),
    'mlir': ('//', '//', ' //'),
    
    # Hash-style comments
    'py': ('#', '# ', '#'),
    'sh': ('#', '# ', '#'),
    'yml': ('#', '# ', '#'),
    'yaml': ('#', '# ', '#'),
    
    # HTML/XML style
    'html': ('<!--', '', '-->'),
    'xml': ('<!--', '', '-->'),
    
    # Special formats (treat as hash-style)
    'set': ('#', '# ', '#'),
    'prp': ('#', '# ', '#'),
    'txt': ('#', '# ', '#'),
    'md': ('<!--', '', '-->'),
    
    # JSON (we'll skip adding headers to JSON as it doesn't support comments in standard)
    'json': None,
    
    # Other formats (hash-style by default)
    'idx': ('#', '# ', '#'),
    'pack': ('#', '# ', '#'),
    'rev': ('#', '# ', '#'),
    'sample': ('#', '# ', '#'),
}

# Supported extensions
SUPPORTED_EXTENSIONS = {
    'h', 'html', 'idx', 'js', 'json', 'jsx', 'md', 'mlir',
    'pack', 'prp', 'py', 'rev', 'sample', 'set', 'sh', 'txt', 'yml',
    'c', 'cpp', 'yaml', 'xml'
}


def read_license_text(license_file: str) -> List[str]:
    """Read the license text from a file."""
    try:
        with open(license_file, 'r', encoding='utf-8') as f:
            return [line.rstrip() for line in f.readlines()]
    except Exception as e:
        print(f"Error reading license file: {e}", file=sys.stderr)
        sys.exit(1)


def format_license_header(license_lines: List[str], comment_style: Tuple[str, str, str]) -> str:
    """Format the license text with appropriate comment syntax."""
    if comment_style is None:
        return ""
    
    start, middle, end = comment_style
    
    # Build the header
    header_lines = []
    
    # Add start comment marker
    if start:
        header_lines.append(start)
    
    # Add license lines
    for line in license_lines:
        if line.strip():
            header_lines.append(middle + line)
        else:
            header_lines.append(middle.rstrip())
    
    # Add end comment marker
    if end and end != start:
        header_lines.append(end)
    
    return '\n'.join(header_lines) + '\n\n'


def has_license_header(content: str, license_snippet: str) -> bool:
    """Check if the file already has a license header."""
    # Check first 50 lines for license content
    lines = content.split('\n')[:50]
    first_part = '\n'.join(lines).lower()
    return license_snippet.lower() in first_part


def get_shebang(content: str) -> Tuple[str, str]:
    """Extract shebang from content if present."""
    if content.startswith('#!'):
        lines = content.split('\n', 1)
        if len(lines) == 2:
            return lines[0] + '\n', lines[1]
        else:
            return lines[0] + '\n', ''
    return '', content


def add_license_to_file(file_path: Path, license_header: str, license_snippet: str, dry_run: bool = False) -> bool:
    """Add license header to a single file."""
    try:
        # Read file content
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # Check if license already exists
        if has_license_header(content, license_snippet):
            print(f"  Skipped (already has license): {file_path}")
            return False
        
        # Get file extension
        ext = file_path.suffix.lstrip('.')
        if not ext:
            ext = file_path.name
        
        # Get comment style
        comment_style = COMMENT_STYLES.get(ext)
        if comment_style is None:
            if ext == 'json':
                print(f"  Skipped (JSON doesn't support comments): {file_path}")
            else:
                print(f"  Skipped (no comment style defined): {file_path}")
            return False
        
        # Handle shebang for scripts
        shebang = ''
        if ext in ['sh', 'py'] or file_path.name.endswith('.py') or file_path.name.endswith('.sh'):
            shebang, content = get_shebang(content)
        
        # Construct new content
        new_content = shebang + license_header + content
        
        if dry_run:
            print(f"  Would add license to: {file_path}")
            return True
        
        # Write back
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(new_content)
        
        print(f"  Added license to: {file_path}")
        return True
        
    except Exception as e:
        print(f"  Error processing {file_path}: {e}", file=sys.stderr)
        return False


def find_files(directory: Path, extensions: set) -> List[Path]:
    """Find all files with specified extensions."""
    files = []
    for ext in extensions:
        # Find files with extension
        files.extend(directory.rglob(f"*.{ext}"))
        # Also check for files without extension that match
        if ext in ['sample', 'set', 'prp', 'pack', 'idx', 'rev']:
            for file in directory.rglob(f"*.{ext}"):
                files.append(file)
    
    # Remove duplicates and sort
    return sorted(set(files))


def main():
    parser = argparse.ArgumentParser(
        description='Add license headers to source files',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog='''
Supported file extensions:
  h, html, idx, js, json, jsx, md, mlir, pack, prp,
  py, rev, sample, set, sh, txt, yml

Examples:
  # Add license from license.txt to all files in current directory
  python add-license-header.py license.txt

  # Add license to specific directory
  python add-license-header.py license.txt ./src

  # Dry run (preview changes)
  python add-license-header.py license.txt --dry-run
        '''
    )
    
    parser.add_argument('license_file', help='File containing the license text')
    parser.add_argument('directory', nargs='?', default='.',
                       help='Directory to process (default: current directory)')
    parser.add_argument('--dry-run', action='store_true',
                       help='Preview changes without modifying files')
    parser.add_argument('--extensions', nargs='+',
                       help='Specific extensions to process (default: all supported)')
    
    args = parser.parse_args()
    
    # Validate inputs
    if not os.path.isfile(args.license_file):
        print(f"Error: License file not found: {args.license_file}", file=sys.stderr)
        sys.exit(1)
    
    directory = Path(args.directory)
    if not directory.is_dir():
        print(f"Error: Directory not found: {args.directory}", file=sys.stderr)
        sys.exit(1)
    
    # Read license text
    print(f"Reading license from: {args.license_file}")
    license_lines = read_license_text(args.license_file)
    
    # Use a snippet of the license for detection (first meaningful line)
    license_snippet = ""
    for line in license_lines[:10]:
        if line.strip() and not line.strip().startswith('Copyright'):
            license_snippet = line.strip()[:50]
            break
    
    if not license_snippet:
        license_snippet = "Apache License" if "Apache" in ' '.join(license_lines[:20]) else "License"
    
    # Determine extensions to process
    extensions = set(args.extensions) if args.extensions else SUPPORTED_EXTENSIONS
    
    print(f"Searching for files in: {directory}")
    print(f"Extensions: {', '.join(sorted(extensions))}")
    if args.dry_run:
        print("DRY RUN MODE - No files will be modified\n")
    else:
        print()
    
    # Find all files
    files = find_files(directory, extensions)
    
    if not files:
        print("No files found to process.")
        return
    
    print(f"Found {len(files)} file(s) to process.\n")
    
    # Process each extension separately for better organization
    processed_count = 0
    skipped_count = 0
    
    for ext in sorted(extensions):
        ext_files = [f for f in files if f.suffix.lstrip('.') == ext or f.name.endswith(f'.{ext}')]
        if not ext_files:
            continue
        
        print(f"Processing .{ext} files:")
        
        # Get comment style for this extension
        comment_style = COMMENT_STYLES.get(ext)
        if comment_style is None:
            print(f"  Skipping {len(ext_files)} file(s) - no comment style defined\n")
            skipped_count += len(ext_files)
            continue
        
        # Format license header for this file type
        license_header = format_license_header(license_lines, comment_style)
        
        for file_path in ext_files:
            if add_license_to_file(file_path, license_header, license_snippet, args.dry_run):
                processed_count += 1
            else:
                skipped_count += 1
        
        print()
    
    # Summary
    print("=" * 60)
    if args.dry_run:
        print(f"Summary (DRY RUN):")
    else:
        print(f"Summary:")
    print(f"  Total files found: {len(files)}")
    print(f"  Files that would be modified: {processed_count}" if args.dry_run else f"  Files modified: {processed_count}")
    print(f"  Files skipped: {skipped_count}")
    print("=" * 60)


if __name__ == '__main__':
    main()
