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

/* Test to make sure strcpy works correctly. */
#define STRING "Hi!THE"

const char a[] = STRING;

void f(char *a) __attribute__((noinline));
void f(char *a)
{
  __builtin_strcpy (a, STRING);
}


int main(void)
{
  int i;
  char b[sizeof(a)] = {};
  f(b);
  for(i = 0; i < sizeof(b); i++)
    {
      if (a[i] != b[i])
	__builtin_abort ();
    }
  return 0;
}
