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

static int which_alternative = 3;

static const char *i960_output_ldconst (void);

static const char *
output_25 (void)
{
  switch (which_alternative)
    {
    case 0:
      return "mov	%1,%0";
    case 1:
      return i960_output_ldconst ();
    case 2:
      return "ld	%1,%0";
    case 3:
      return "st	%1,%0";
    }
}

static const char *i960_output_ldconst (void)
{
  return "foo";
}
int main(void)
{
  const char *s = output_25 () ;
  if (s[0] != 's')
    abort ();
  exit (0);
}
