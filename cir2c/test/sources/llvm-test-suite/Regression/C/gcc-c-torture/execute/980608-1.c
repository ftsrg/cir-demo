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

/* { dg-options "-fgnu89-inline" } */

#include <stdarg.h>

extern void abort(void);
extern void exit (int);

void f1(int a,int b,int c,int d,int e, int f,int g,int h,int i,int j, int k,int
l,int m,int n,int o)
{
    return;
}

inline void debug(const char *msg,...)
{
    va_list ap;
    va_start( ap, msg );

    f1(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15);

    if ( va_arg(ap,int) != 101)
        abort();
    if ( va_arg(ap,int) != 102)
        abort();
    if ( va_arg(ap,int) != 103)
        abort();
    if ( va_arg(ap,int) != 104)
        abort();
    if ( va_arg(ap,int) != 105)
        abort();
    if ( va_arg(ap,int) != 106)
        abort();

    va_end( ap );
}

int main(void)
{
  debug("%d %d %d  %d %d %d\n", 101, 102, 103, 104, 105, 106);
  exit(0);
}
