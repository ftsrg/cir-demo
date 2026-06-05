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

/* PR tree-optimization/86714 - tree-ssa-forwprop.c confused by too
   long initializer

   The excessively long initializer for a[0] is undefined but this
   test verifies that the excess elements are not considered a part
   of the value of the array as a matter of QoI.  */

const char a[2][3] = { "1234", "xyz" };
char b[6];

void *pb = b;

int main ()
{
   __builtin_memcpy (b, a, 4);
   __builtin_memset (b + 4, 'a', 2);

   if (b[0] != '1' || b[1] != '2' || b[2] != '3'
       || b[3] != 'x' || b[4] != 'a' || b[5] != 'a')
     __builtin_abort ();

   if (__builtin_memcmp (pb, "123xaa", 6))
     __builtin_abort ();

   return 0;
}
