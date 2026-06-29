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

/* PR optimization/8423.  */

#define btest(x) __builtin_constant_p(x) ? "1" : "0"

#ifdef __OPTIMIZE__
void
foo (char *i)
{
  if (*i == '0')
    abort ();
}
#else
void
foo (char *i)
{
}
#endif

int
main (void)
{
  int size = sizeof (int);
  foo (btest (size));
  foo (btest (size));
  exit (0);
}
