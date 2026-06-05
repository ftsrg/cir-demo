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
  unsigned char a __attribute__ ((packed));
  unsigned short b __attribute__ ((packed));
} three_byte_t;

unsigned char
f (void)
{
  return 0xab;
}

unsigned short
g (void)
{
  return 0x1234;
}

main ()
{
  three_byte_t three_byte;

  three_byte.a = f ();
  three_byte.b = g ();
  if (three_byte.a != 0xab || three_byte.b != 0x1234)
    abort ();
  exit (0);
}
