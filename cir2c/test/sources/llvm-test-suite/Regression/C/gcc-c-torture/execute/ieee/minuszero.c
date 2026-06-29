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

main ()
{
  union
    {
      double d;
      unsigned short i[sizeof (double) / sizeof (short)];
    } u;
  int a = 0;
  int b = -5;
  int j;

  u.d = (double) a / b;

  /* Look for the right pattern, but be sloppy since
     we don't know the byte order.  */
  for (j = 0; j < sizeof (double) / sizeof (short); j++)
    {
      if (u.i[j] == 0x8000)
	exit (0);
    }
  abort ();
}
