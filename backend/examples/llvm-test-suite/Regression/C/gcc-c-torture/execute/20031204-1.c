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

/* PR optimization/13260 */

#include <string.h>

typedef unsigned long u32;

u32 in_aton(const char* x)
{
  return 0x0a0b0c0d;
}

u32 root_nfs_parse_addr(char *name)
{
 u32 addr;
 int octets = 0;
 char *cp, *cq;

 cp = cq = name;
 while (octets < 4) {
  while (*cp >= '0' && *cp <= '9')
   cp++;
  if (cp == cq || cp - cq > 3)
   break;
  if (*cp == '.' || octets == 3)
   octets++;
  if (octets < 4)
   cp++;
  cq = cp;
 }

 if (octets == 4 && (*cp == ':' || *cp == '\0')) {
  if (*cp == ':')
   *cp++ = '\0';
  addr = in_aton(name);
  strcpy(name, cp);
 } else
  addr = (-1);

 return addr;
}

int
main()
{
  static char addr[] = "10.11.12.13:/hello";
  u32 result = root_nfs_parse_addr(addr);
  if (result != 0x0a0b0c0d) { abort(); }
  return 0;
}
