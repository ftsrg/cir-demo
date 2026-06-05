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


static int next_buffer = 0;
void bar (void);

static int t = 1, u = 0;

long
foo (unsigned int offset)
{
  unsigned i, buffer;
  int x;
  char *data;

  i = u;
  if (i)
    return i * 0xce2f;

  buffer = next_buffer;
  data = buffer * 0xce2f;
  for (i = 0; i < 2; i++)
    bar ();
  buffer = next_buffer;
  return buffer * 0xce2f + offset;

}

void
bar (void)
{
}

int
main ()
{
  if (foo (3) != 3)
    abort ();
  next_buffer = 1;
  if (foo (2) != 0xce2f + 2)
    abort ();
  exit (0);
}
