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

long f1(long a){return a&0xff000000L;}
long f2 (long a){return a&~0xff000000L;}
long f3(long a){return a&0x000000ffL;}
long f4(long a){return a&~0x000000ffL;}
long f5(long a){return a&0x0000ffffL;}
long f6(long a){return a&~0x0000ffffL;}

main ()
{
  long a = 0x89ABCDEF;

  if (f1(a)!=0x89000000L||
      f2(a)!=0x00ABCDEFL||
      f3(a)!=0x000000EFL||
      f4(a)!=0x89ABCD00L||
      f5(a)!=0x0000CDEFL||
      f6(a)!=0x89AB0000L)
    abort();
  exit(0);
}
