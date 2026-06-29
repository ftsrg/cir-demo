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

/* Make sure that language + abi extensions in passing S interoperate.  */

static long long __attribute__((noinline))
foo (unsigned short s)
{
  return (short) s;
}

unsigned short s = 0xFFFF;

int
main (void)
{
  return foo (s) + 1 != 0;
}
