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

#include <stdio.h>
#include <string.h>

/*
 * Test routines for testing the tracing code.
 */

struct DummyStruct {
  struct DummyStruct* next;
  int seqnum;
};

int
AddCounts(struct DummyStruct* S1,
          struct DummyStruct* S2,
          struct DummyStruct* S3, int noPrint)
{
  if (!noPrint)
    printf("&S1 = %p\t&S2 = %p\t&S3 = %p\n", S1, S2, S3);
  return S1->seqnum + S2->seqnum + S3->seqnum;
}

void
testAllocaOrder(int noPrint)
{
  static int count = 0;
  struct DummyStruct S1, S2, S3;
  
  S1.seqnum = ++count;
  S2.seqnum = ++count;
  S3.seqnum = ++count;
  
  printf("sum = %d\n", AddCounts(&S1, &S2, &S3, noPrint));
}

int
main(int argc, char** argv)
{
  unsigned int i, noPrint = 1;
  if (argc > 1 && ! strcmp(argv[1], "-d"))
    noPrint = 0;
  for (i=0; i < 10; ++i)
    testAllocaOrder(noPrint);
  return 0;
}
