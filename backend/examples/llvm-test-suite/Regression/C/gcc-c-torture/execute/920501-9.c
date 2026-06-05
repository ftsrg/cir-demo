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

long long proc1(){return 1LL;}
long long proc2(){return 0x12345678LL;}
long long proc3(){return 0xaabbccdd12345678LL;}
long long proc4(){return -1LL;}
long long proc5(){return 0xaabbccddLL;}

print_longlong(x,buf)
     long long x;
     char *buf;
{
  unsigned long l;
  l= (x >> 32) & 0xffffffff;
  if (l != 0)
    sprintf(buf,"%lx%08.lx",l,((unsigned long)x & 0xffffffff));
  else
    sprintf(buf,"%lx",((unsigned long)x & 0xffffffff));
}

main(){char buf[100];
print_longlong(proc1(),buf);if(strcmp("1",buf))abort();
print_longlong(proc2(),buf);if(strcmp("12345678",buf))abort();
print_longlong(proc3(),buf);if(strcmp("aabbccdd12345678",buf))abort();
print_longlong(proc4(),buf);if(strcmp("ffffffffffffffff",buf))abort();
print_longlong(proc5(),buf);if(strcmp("aabbccdd",buf))abort();
exit(0);}
