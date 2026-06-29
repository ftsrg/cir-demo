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

void fail1(void)
{
  abort ();
}
void fail2(void)
{
  abort ();
}
void fail3(void)
{
  abort ();
}
void fail4(void)
{
  abort ();
}


void foo(long x)
{
  switch (x)
    {
    case -6:
      fail1 (); break;
    case 0:
      fail2 (); break;
    case 1: case 2:
      break;
    case 3: case 4: case 5:
      fail3 ();
      break;
    default:
      fail4 ();
      break;
    }
  switch (x)
    {

    case -3:
      fail1 (); break;
    case 0: case 4:
      fail2 (); break;
    case 1: case 3:
      break;
    case 2: case 8:
      abort ();
      break;
    default:
      fail4 ();
      break;
    }
}

int main(void)
{
  foo (1);
  exit (0);
}
