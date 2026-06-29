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

   unsigned long bad(int reg, unsigned long inWord)
   {
       union {
           unsigned long word;
           unsigned char byte[4];
       } data;

       data.word = inWord;
       data.byte[reg] = 0;

       return data.word;
   }

main()
{
  /* XXX This test could be generalized.  */
  if (sizeof (long) != 4)
    exit (0);

  if (bad (0, 0xdeadbeef) == 0xdeadbeef)
    abort ();
  exit (0);
}
