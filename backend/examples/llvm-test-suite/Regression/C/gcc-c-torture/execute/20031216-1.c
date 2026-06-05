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

/* PR optimization/13313 */
/* Origin: Mike Lerwill <mike@ml-solutions.co.uk> */

extern void abort(void);

void DisplayNumber (unsigned long v)
{
  if (v != 0x9aL)
    abort();
}

unsigned long ReadNumber (void)
{
  return 0x009a0000L;
}

int main (void)
{
  unsigned long tmp;
  tmp = (ReadNumber() & 0x00ff0000L) >> 16;
  DisplayNumber (tmp);
  return 0;
}
