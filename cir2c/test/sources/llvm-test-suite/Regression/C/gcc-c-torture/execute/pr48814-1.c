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

extern void abort (void);

int arr[] = {1,2,3,4};
int count = 0;

int __attribute__((noinline))
incr (void)
{
  return ++count;
}

int main()
{
  arr[count++] = incr ();
  if (count != 2 || arr[count] != 3)
    abort ();
  return 0;
}
