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

int
ts(a)
     int a;
{
  if (a < 1000 && a > 2000)
    return 1;
  else
    return 0;
}

int
tu(a)
     unsigned int a;
{
  if (a < 1000 && a > 2000)
    return 1;
  else
    return 0;
}


main()
{
  if (ts (0) || tu (0))
    abort ();
  exit (0);
}
