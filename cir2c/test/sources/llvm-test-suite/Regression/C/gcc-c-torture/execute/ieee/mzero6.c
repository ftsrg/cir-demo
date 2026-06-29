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

/* Tail call optimizations would convert func() into the moral equivalent of:

       double acc = 0.0;
       for (int i = 0; i <= n; i++)
	 acc += d;
       return acc;

   which mishandles the case where 'd' is -0.  They also initialised 'acc'
   to a zero int rather than a zero double.  */

double func (double d, int n)
{
  if (n == 0)
    return d;
  else
    return d + func (d, n - 1);
}

int main ()
{
  if (__builtin_copysign (1.0, func (0.0 / -5.0, 10)) != -1.0)
    abort ();
  exit (0);
}
