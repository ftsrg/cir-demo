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

/* PR optimization/8726 */
/* Originator: Paul Eggert <eggert@twinsun.com> */

/* Verify that GCC doesn't miscompile tail calls on Sparc. */

extern void abort(void);

int fcntl_lock(int fd, int op, long long offset, long long count, int type);

int vfswrap_lock(char *fsp, int fd, int op, long long offset, long long count, int type)
{
  return fcntl_lock(fd, op, offset, count, type);
}

int fcntl_lock(int fd, int op, long long offset, long long count, int type)
{
  return type;
}

int main(void)
{
  if (vfswrap_lock (0, 1, 2, 3, 4, 5) != 5)
    abort();

  return 0;
}
