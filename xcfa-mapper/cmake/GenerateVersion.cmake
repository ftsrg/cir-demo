# GenerateVersion.cmake
# Called at build time to produce version.h with the current git commit hash,
# optionally suffixed with "-dirty" when the working tree has uncommitted changes.
#
# Required variables (passed via -D):
#   GIT_EXECUTABLE  - path to the git binary (may be empty when Git is absent)
#   OUTPUT_FILE     - absolute path of the header file to write
#   SOURCE_DIR      - path to the source tree (used as working directory for git)

set(VERSION "unknown")

if(GIT_EXECUTABLE)
  # Detect whether SOURCE_DIR is inside any git repository (the .git directory
  # may be in a parent directory when xcfa-mapper is a subdirectory of a larger
  # repo, which is the typical layout of this project).
  execute_process(
    COMMAND "${GIT_EXECUTABLE}" rev-parse --git-dir
    WORKING_DIRECTORY "${SOURCE_DIR}"
    OUTPUT_VARIABLE GIT_DIR
    ERROR_QUIET
    OUTPUT_STRIP_TRAILING_WHITESPACE
    RESULT_VARIABLE GIT_DIR_RESULT
  )

  if(GIT_DIR_RESULT EQUAL 0)
    # Short commit hash
    execute_process(
      COMMAND "${GIT_EXECUTABLE}" rev-parse --short HEAD
      WORKING_DIRECTORY "${SOURCE_DIR}"
      OUTPUT_VARIABLE GIT_COMMIT
      ERROR_QUIET
      OUTPUT_STRIP_TRAILING_WHITESPACE
    )

    if(GIT_COMMIT)
      set(VERSION "${GIT_COMMIT}")

      # Check for uncommitted changes inside SOURCE_DIR only (tracked files only; also catches staged changes)
      execute_process(
        COMMAND "${GIT_EXECUTABLE}" status --porcelain -- "${SOURCE_DIR}"
        WORKING_DIRECTORY "${SOURCE_DIR}"
        OUTPUT_VARIABLE GIT_STATUS
        ERROR_QUIET
        OUTPUT_STRIP_TRAILING_WHITESPACE
      )

      if(GIT_STATUS)
        set(VERSION "${VERSION}-dirty")
      endif()
    endif()
  endif()
endif()

# Only rewrite the file when the content has actually changed so that
# dependent compilation units are not unnecessarily rebuilt.
set(HEADER_CONTENT "#pragma once\n#define XCFA_MAPPER_VERSION \"${VERSION}\"\n")

if(EXISTS "${OUTPUT_FILE}")
  file(READ "${OUTPUT_FILE}" EXISTING_CONTENT)
else()
  set(EXISTING_CONTENT "")
endif()

if(NOT EXISTING_CONTENT STREQUAL HEADER_CONTENT)
  file(WRITE "${OUTPUT_FILE}" "${HEADER_CONTENT}")
endif()
