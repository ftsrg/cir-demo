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

/* { dg-additional-options "-Wl,-u,_printf_float" { target newlib_nano_io } } */

#include <stdio.h>
#include <stdarg.h>

char buf[50];
int
va (int a, double b, int c, ...)
{
  va_list ap;
  int d, e, f, g, h, i, j, k, l, m, n, o, p;
  va_start (ap, c);

  d = va_arg (ap, int);
  e = va_arg (ap, int);
  f = va_arg (ap, int);
  g = va_arg (ap, int);
  h = va_arg (ap, int);
  i = va_arg (ap, int);
  j = va_arg (ap, int);
  k = va_arg (ap, int);
  l = va_arg (ap, int);
  m = va_arg (ap, int);
  n = va_arg (ap, int);
  o = va_arg (ap, int);
  p = va_arg (ap, int);

  sprintf (buf,
	   "%d,%f,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	   a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
  va_end (ap);
}

main()
{
  va (1, 1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  if (strcmp ("1,1.000000,2,3,4,5,6,7,8,9,10,11,12,13,14,15", buf))
    abort();
  exit(0);
}
