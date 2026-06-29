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

/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */
extern void abort (void);

extern __SIZE_TYPE__ strlen (const char *);
void foo(char *str)
{
  int len2 = strlen (str);
  char *a = (char *) __builtin_alloca (0);
  char *b = (char *) __builtin_alloca (len2*3);

  if ((int) (a-b) < (len2*3))
    {
#ifdef _WIN32
      abort ();
#endif
      return;
    }
}

static char * volatile argp = "pr36321.x";

int main(int argc, char **argv)
{
  foo (argp);
  return 0;
}
