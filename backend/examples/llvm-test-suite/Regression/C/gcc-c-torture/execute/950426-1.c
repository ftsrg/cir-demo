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


struct tag {
  int m1;
  char *m2[5];
} s1, *p1;

int i;

main()
{
  s1.m1 = -1;
  p1 = &s1;

  if ( func1( &p1->m1 ) == -1 )
    foo ("ok");
  else
    abort ();

  i = 3;
  s1.m2[3]= "123";

  if ( strlen( (p1->m2[i])++ ) == 3 )
    foo ("ok");
  else
    abort ();

  exit (0);
}

func1(int *p) { return(*p); }

foo (char *s) {}
