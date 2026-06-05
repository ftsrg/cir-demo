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

/* PR tree-optimization/86492 */

union U
{
  unsigned int r;
  struct S
  {
    unsigned int a:12;
    unsigned int b:4;
    unsigned int c:16;
  } f;
};

__attribute__((noipa)) unsigned int
foo (unsigned int x)
{
  union U u;
  u.r = 0;
  u.f.c = x;
  u.f.b = 0xe;
  return u.r;
}

int
main ()
{
  union U u;
  if (__CHAR_BIT__ * __SIZEOF_INT__ != 32 || sizeof (u.r) != sizeof (u.f))
    return 0;
  u.r = foo (0x72);
  if (u.f.a != 0 || u.f.b != 0xe || u.f.c != 0x72)
    __builtin_abort ();
  return 0;
}
