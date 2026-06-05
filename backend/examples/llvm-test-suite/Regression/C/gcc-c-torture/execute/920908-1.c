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

/* REPRODUCED:RUN:SIGNAL MACHINE:mips OPTIONS: */

#include <stdarg.h>

typedef struct{int A;}T;

T f(int x,...)
{
va_list ap;
T X;
va_start(ap,x);
X=va_arg(ap,T);
if(X.A!=10)abort();
X=va_arg(ap,T);
if(X.A!=20)abort();
va_end(ap);
return X;
}

main()
{
T X,Y;
int i;
X.A=10;
Y.A=20;
f(2,X,Y);
exit(0);
}
