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

typedef struct
{
  unsigned char a  : 2;
  unsigned char b  : 3;
  unsigned char c  : 1;
  unsigned char d  : 1;
  unsigned char e  : 1;
} a_struct;

foo (flags)
     a_struct *flags;
{
  return (flags->c != 0
	  || flags->d != 1
	  || flags->e != 1
	  || flags->a != 2
	  || flags->b != 3);
}

main ()
{
  a_struct flags;

  flags.c  = 0;
  flags.d  = 1;
  flags.e  = 1;
  flags.a  = 2;
  flags.b  = 3;

  if (foo (&flags) != 0)
    abort ();
  else
    exit (0);
}
