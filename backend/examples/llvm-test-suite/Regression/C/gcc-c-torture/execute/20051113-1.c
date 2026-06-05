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

extern void *malloc(__SIZE_TYPE__);
extern void *memset(void *, int, __SIZE_TYPE__);
typedef struct
{
  short a;
  unsigned short b;
  unsigned short c;
  unsigned long long Count;
  long long Count2;
} __attribute__((packed)) Struct1;

typedef struct
{
  short a;
  unsigned short b;
  unsigned short c;
  unsigned long long d;
  long long e;
  long long f;
} __attribute__((packed)) Struct2;

typedef union
{
  Struct1 a;
  Struct2 b;
} Union;

typedef struct
{
  int Count;
  Union List[0];
} __attribute__((packed)) Struct3;

unsigned long long Sum (Struct3 *instrs) __attribute__((noinline));
unsigned long long Sum (Struct3 *instrs)
{
    unsigned long long  count = 0;
    int     i;

    for (i = 0; i < instrs->Count; i++) {
        count += instrs->List[i].a.Count;
    }
    return count;
}
long long Sum2 (Struct3 *instrs) __attribute__((noinline));
long long Sum2 (Struct3 *instrs)
{
    long long  count = 0;
    int     i;

    for (i = 0; i < instrs->Count; i++) {
        count += instrs->List[i].a.Count2;
    }
    return count;
}
main() {
  Struct3 *p = malloc (sizeof (int) + 3 * sizeof(Union));
  memset(p, 0, sizeof(int) + 3*sizeof(Union));
  p->Count = 3;
  p->List[0].a.Count = 555;
  p->List[1].a.Count = 999;
  p->List[2].a.Count = 0x101010101ULL;
  p->List[0].a.Count2 = 555;
  p->List[1].a.Count2 = 999;
  p->List[2].a.Count2 = 0x101010101LL;
  if (Sum(p) != 555 + 999 + 0x101010101ULL)
    abort();
  if (Sum2(p) != 555 + 999 + 0x101010101LL)
    abort();
  return 0;
}
