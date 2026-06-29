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
  unsigned char a __attribute__((packed));
  unsigned short b __attribute__((packed));
} three_char_t;

unsigned char
my_set_a (void)
{
  return 0xab;
}

unsigned short
my_set_b (void)
{
  return 0x1234;
}

main ()
{
  three_char_t three_char;

  three_char.a = my_set_a ();
  three_char.b = my_set_b ();
  if (three_char.a != 0xab || three_char.b != 0x1234)
    abort ();
  exit (0);
}
