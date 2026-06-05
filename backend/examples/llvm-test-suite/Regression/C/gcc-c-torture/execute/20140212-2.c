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

/* This used to fail as we would convert f into just return (unsigned int)usVlanID
   which is wrong. */

int f(unsigned short usVlanID) __attribute__((noinline,noclone));
int f(unsigned short usVlanID)
{
  unsigned int uiVlanID = 0xffffffff;
  int i;
  if ((unsigned short)0xffff != usVlanID)
    uiVlanID = (unsigned int)usVlanID;
  return uiVlanID;
}

int main(void)
{
  if (f(1) != 1)
    __builtin_abort ();
  if (f(0xffff) != -1)
    __builtin_abort ();
  return 0;
}
