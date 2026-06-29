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

unsigned
sat_add (unsigned i)
{
  unsigned ret = i + 1;
  if (ret < i)
    ret = i;
  return ret;
}

unsigned
sat_add2 (unsigned i)
{
  unsigned ret = i + 1;
  if (ret > i)
    return ret;
  return i;
}

unsigned
sat_add3 (unsigned i)
{
  unsigned ret = i - 1;
  if (ret > i)
    ret = i;
  return ret;
}

unsigned
sat_add4 (unsigned i)
{
  unsigned ret = i - 1;
  if (ret < i)
    return ret;
  return i;
}
main ()
{
  if (sat_add (~0U) != ~0U)
    abort ();
  if (sat_add2 (~0U) != ~0U)
    abort ();
  if (sat_add3 (0U) != 0U)
    abort ();
  if (sat_add4 (0U) != 0U)
    abort ();
  exit (0);
}
