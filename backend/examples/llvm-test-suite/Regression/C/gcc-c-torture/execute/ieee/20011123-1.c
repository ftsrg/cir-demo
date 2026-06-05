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

main()
{
  double db1 = 1.7976931348623157e+308;
  long double ldb1 = db1;

  if (sizeof (double) != 8 || sizeof (long double) != 16)
    exit (0);

  if (ldb1 != 1.7976931348623157e+308)
    abort ();
  exit (0);
}
