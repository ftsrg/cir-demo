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

foo(int *bar)
{
  *bar = 8;
}

bugger()
{
  int oldDepth, newDepth;

  foo(&oldDepth);

  switch (oldDepth)
    {
    case 8:
    case 500:
      newDepth = 8;
      break;

    case 5000:
      newDepth = 500;
      break;

    default:
      newDepth = 17;
      break;
    }

  return newDepth - oldDepth;
}

main()
{
  if (bugger() != 0)
    abort ();
  exit (0);
}
