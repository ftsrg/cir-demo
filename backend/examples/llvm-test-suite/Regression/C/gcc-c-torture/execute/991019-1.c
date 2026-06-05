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

typedef struct {
     double epsilon;
} material_type;

material_type foo(double x)
{
     material_type m;

     m.epsilon = 1.0 + x;
     return m;
}

main()
{
  int i;
  material_type x;

  /* We must iterate enough times to overflow the FP stack on the
     x86.  */
  for (i = 0; i < 10; i++)
    {
      x = foo (1.0);
      if (x.epsilon != 1.0 + 1.0)
	abort ();
    }

  exit (0);
}
