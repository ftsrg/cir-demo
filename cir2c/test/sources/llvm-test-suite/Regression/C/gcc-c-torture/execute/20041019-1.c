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

test_store_ccp (int i)
{
  int *p, a, b, c;

  if (i < 5)
    p = &a;
  else if (i > 8)
    p = &b;
  else
    p = &c;

  *p = 10;
  b = 3;

  /* STORE-CCP was wrongfully propagating 10 into *p.  */
  return *p + 2;
}


test_store_copy_prop (int i)
{
  int *p, a, b, c;

  if (i < 5)
    p = &a;
  else if (i > 8)
    p = &b;
  else
    p = &c;

  *p = i;
  b = i + 1;

  /* STORE-COPY-PROP was wrongfully propagating i into *p.  */
  return *p;
}


main()
{
  int x;

  x = test_store_ccp (10);
  if (x == 12)
    abort ();

  x = test_store_copy_prop (9);
  if (x == 9)
    abort ();

  return 0;
}
