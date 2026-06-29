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

/*
 * This test stresses masking and sign-extension after int operations
 * that cause overflow, producing bogus high-order bits.
 * The basic overflow situation (x * x + y * y, for x = y = 1 << 21)
 * actually happens in Olden-perimeter, in the function CheckOutside.
 * 
 * Several things have to happen correctly:
 * -- correct constant folding if it is done at compile-time
 * -- correct sign-extensions during native code generation for -, * and /.
 * -- correct handling of high bits during native code generation for
 *    a sequence of operations involving -, * and /.
 */
#include <stdio.h>

void compareOvf(int x, int y)
{
  int sum = x * x + y * y;
  if (sum < (1 << 22))
    printf("compare after overflow is TRUE\n");
  else
    printf("compare after overflow is FALSE\n");
}

void divideOvf(int x, int y)
{
  int sum = x * x + y * y;
  int rem = (1 << 31) / sum;
  printf("divide after overflow = %d (0x%x)\n", rem, rem);
}

void divideNeg(int x, int y)
{
  int sum = x * x - y * y;
  int rem = sum / (1 << 18);
  printf("divide negative value by power-of-2 = %d (0x%x)\n", rem, rem);
}

void subtractOvf(int x, int y)
{
  int sum = x * x + y * y;
  int rem = (1u << 31) - sum;
  printf("subtract after overflow = %d (0x%x)\n", rem, rem);
}

int main()
{
  int b21 = 1 << 21;
  compareOvf(b21,       b21);
  divideOvf(b21 + 1,    b21 + 2);
  divideNeg(b21 + 1,    b21 + 2);       /* arg1 must be < arg2 */
  subtractOvf(b21 + 1,  b21 + 2);
  return 0;
}
