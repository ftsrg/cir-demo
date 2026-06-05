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

/* { dg-skip-if "small alignment" { pdp11-*-* } } */

extern void abort (void);

typedef struct Bar {
      char c[129];
} Bar __attribute__((__aligned__(128)));

typedef struct Foo {
      Bar bar[4];
} Foo;

Foo foo[4];

int main()
{
   int i, j;
   Foo *foop = &foo[0];

   for (i=0; i < 4; i++) {
      Bar *bar = &foop->bar[i];
      for (j=0; j < 129; j++) {
         bar->c[j] = 'a' + i;
      }
   }

   if (foo[0].bar[3].c[128] != 'd')
     abort ();
   return 0;
}
