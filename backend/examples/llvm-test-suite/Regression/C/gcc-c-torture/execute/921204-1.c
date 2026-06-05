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
typedef struct {
  unsigned b0:1, f1:17, b18:1, b19:1, b20:1, f2:11;
} bf;

typedef union {
  bf b;
  unsigned w;
} bu;

bu
f(bu i)
{
  bu o = i;

  if (o.b.b0)
    o.b.b18 = 1,
    o.b.b20 = 1;
  else
    o.b.b18 = 0,
    o.b.b20 = 0;

  return o;
}

main()
{
  bu a;
  bu r;

  a.w = 0x4000000;
  a.b.b0 = 0;
  r = f(a);
  if (a.w != r.w)
    abort();
  exit(0);
}
#endif
