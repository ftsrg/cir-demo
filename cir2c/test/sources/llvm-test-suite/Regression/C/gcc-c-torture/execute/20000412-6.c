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

unsigned bug (unsigned short value, unsigned short *buffer,
              unsigned short *bufend);

unsigned short buf[] = {1, 4, 16, 64, 256};
int main()
{
  if (bug (512, buf, buf + 3) != 491)
    abort ();

  exit (0);
}

unsigned
bug (unsigned short value, unsigned short *buffer, unsigned short *bufend)
{
  unsigned short *tmp;

  for (tmp = buffer; tmp < bufend; tmp++)
    value -= *tmp;

  return value;
}
