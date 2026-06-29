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

int i;
double d;

/* Make sure we return a constant.  */
float rootbeer[__builtin_types_compatible_p (int, typeof(i))];

typedef enum { hot, dog, poo, bear } dingos;
typedef enum { janette, laura, amanda } cranberry;

typedef float same1;
typedef float same2;

int main (void);

int main (void)
{
  /* Compatible types.  */
  if (!(__builtin_types_compatible_p (int, const int)
	&& __builtin_types_compatible_p (typeof (hot), int)
	&& __builtin_types_compatible_p (typeof (hot), typeof (laura))
	&& __builtin_types_compatible_p (int[5], int[])
	&& __builtin_types_compatible_p (same1, same2)))
    abort ();

  /* Incompatible types.  */
  if (__builtin_types_compatible_p (char *, int)
      || __builtin_types_compatible_p (char *, const char *)
      || __builtin_types_compatible_p (long double, double)
      || __builtin_types_compatible_p (typeof (i), typeof (d))
      || __builtin_types_compatible_p (typeof (dingos), typeof (cranberry))
      || __builtin_types_compatible_p (char, int)
      || __builtin_types_compatible_p (char *, char **))
    abort ();
  exit (0);
}
