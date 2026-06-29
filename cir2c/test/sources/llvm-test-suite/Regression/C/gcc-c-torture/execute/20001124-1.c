/*
 * Copyright 2026 LLVM Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


struct inode {
	long long		i_size;
	struct super_block	*i_sb;
};

struct file {
	long long		f_pos;
};

struct super_block {
	int			s_blocksize;
	unsigned char		s_blocksize_bits;
	int			s_hs;
};

static char *
isofs_bread(unsigned int block)
{
	if (block)
	  abort ();
	exit(0);
}

static int
do_isofs_readdir(struct inode *inode, struct file *filp)
{
	int bufsize = inode->i_sb->s_blocksize;
	unsigned char bufbits = inode->i_sb->s_blocksize_bits;
	unsigned int block, offset;
	char *bh = 0;
	int hs;

	if (filp->f_pos >= inode->i_size)
		return 0;

	offset = filp->f_pos & (bufsize - 1);
	block = filp->f_pos >> bufbits;
	hs = inode->i_sb->s_hs;

	while (filp->f_pos < inode->i_size) {
		if (!bh)
			bh = isofs_bread(block);

		hs += block << bufbits;

		if (hs == 0)
			filp->f_pos++;

		if (offset >= bufsize)
			offset &= bufsize - 1;

		if (*bh)
			filp->f_pos++;

		filp->f_pos++;
	}
	return 0;
}

struct super_block s;
struct inode i;
struct file f;

int
main(int argc, char **argv)
{
	s.s_blocksize = 512;
	s.s_blocksize_bits = 9;
	i.i_size = 2048;
	i.i_sb = &s;
	f.f_pos = 0;

	do_isofs_readdir(&i,&f);
	abort ();
}
