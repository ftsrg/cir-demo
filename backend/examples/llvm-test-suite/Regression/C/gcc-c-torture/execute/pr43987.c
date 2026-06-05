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

char B[256 * sizeof(void *)];
typedef void *FILE;
typedef struct globals {
    int c;
    FILE *l;
} __attribute__((may_alias)) T;
void add_input_file(FILE *file)
{
  (*(T*)&B).l[0] = file;
}
extern void abort (void);
int main()
{
  FILE x;
  (*(T*)&B).l = &x;
  add_input_file ((void *)-1);
  if ((*(T*)&B).l[0] != (void *)-1)
    abort ();
  return 0;
}
