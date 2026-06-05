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

#include "bits.h"

int main(int argc, char**argv) {
      int54 X;
      int169 Y;
      uint250 Z = 0;
      int250 K;
      uint250 U = 0;

      X = Y = Z = K = -1;
      U = -1;
      printf("int54 X = ");
      printBits(X);
      printf("\nint169 Y = ");
      printBits(Y);
      printf("\nuint250 Z = ");
      printBits(Z);
      printf("\nuint250 U = ");
      printBits(U);
      printf("\nint250 K = ");
      printBits(K);
      printf("\n");

      K = Y = Z = X = -1;
      printf("int54 X = ");
      printBits(X);
      printf("\nint169 Y = ");
      printBits(Y);
      printf("\nuint250 Z = ");
      printBits(Z);
      printf("\nuint250 U = ");
      printBits(U);
      printf("\nint250 K = ");
      printBits(K);
      printf("\n");

      X = Y = Z = K = U = -1;
      printf("int54 X = ");
      printBits(X);
      printf("\nint169 Y = ");
      printBits(Y);
      printf("\nuint250 Z = ");
      printBits(Z);
      printf("\nuint250 U = ");
      printBits(U);
      printf("\nint250 K = ");
      printBits(K);
      printf("\n");

      return X;
}
