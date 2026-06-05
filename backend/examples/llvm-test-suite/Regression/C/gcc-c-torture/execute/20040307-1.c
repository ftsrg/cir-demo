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

int main()
{
  int b = 0;

  struct {
    unsigned int bit0:1;
    unsigned int bit1:1;
    unsigned int bit2:1;
    unsigned int bit3:1;
    unsigned int bit4:1;
    unsigned int bit5:1;
    unsigned int bit6:1;
    unsigned int bit7:1;
  } sdata = {0x01};

  while ( sdata.bit0-- > 0 ) {
    b++ ;
    if ( b > 100 ) break;
  }

  if (b != 1)
    abort ();
  return 0;
}
