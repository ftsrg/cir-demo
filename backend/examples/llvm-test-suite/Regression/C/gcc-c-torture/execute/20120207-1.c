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

/* PR middle-end/51994 */
/* Testcase by Uros Bizjak <ubizjak@gmail.com> */

extern char *strcpy (char *, const char *);
extern void abort (void);

char __attribute__((noinline))
test (int a)
{
  char buf[16];
  char *output = buf;

  strcpy (&buf[0], "0123456789");

  output += a;
  output -= 1;

  return output[0];
}

int main ()
{
  if (test (2) != '1')
    abort ();

  return 0;
}
