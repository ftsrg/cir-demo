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

/* Reduced from PR optimization/5076, PR optimization/2847 */

static int count = 0;

static void
inc (void)
{
  count++;
}

int
main (void)
{
  int iNbr = 1;
  int test = 0;
  while (test == 0)
    {
      inc ();
      if (iNbr == 0)
        break;
      else
        {
          inc ();
          iNbr--;
        }
      test = 1;
    }
  if (count != 2)
    abort ();
  return 0;
}
