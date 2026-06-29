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

/* { dg-options "-finput-charset=utf-8" } */
typedef __WCHAR_TYPE__ wchar_t;
wchar_t x[] = L"Ä";
wchar_t y = L'Ä';
extern void abort (void);
extern void exit (int);

int main (void)
{
  if (sizeof (x) / sizeof (wchar_t) != 2)
    abort ();
  if (x[0] != L'Ä' || x[1] != L'\0')
    abort ();
  if (y != L'Ä')
    abort ();
  exit (0);
}
