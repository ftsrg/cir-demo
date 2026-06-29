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

/* The bit-field below would have a problem if __INT_MAX__ is too
   small.  */
#if __INT_MAX__ < 2147483647
int
main (void)
{
  exit (0);
}
#else
struct S
{
  int a:3;
  unsigned b:1, c:28;
};

struct S x = {1, 1, 1};

main ()
{
  x = (struct S) {b:0, a:0, c:({ struct S o = x; o.a == 1 ? 10 : 20;})};
  if (x.c != 10)
    abort ();
  exit (0);
}
#endif
