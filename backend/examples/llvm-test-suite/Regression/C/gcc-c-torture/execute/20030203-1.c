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

void f(int);
int do_layer3(int single)
{
  int stereo1;

  if(single >= 0) /* stream is stereo, but force to mono */
    stereo1 = 1;
  else
    stereo1 = 2;
  f(single);

  return stereo1;
}

extern void abort ();
int main()
{
  if (do_layer3(-1) != 2)
    abort ();
  return 0;
}

void f(int i) {}
