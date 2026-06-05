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
 * This file is used to the C calling conventions with signless
 * LLVM. Integer arguments in this convention are promoted to at
 * least a 32-bit size. Consequently signed values must be 
 * sign extended and unsigned values must be zero extended to
 * at least a 32-bit integer type. 
 */

#include <stdio.h>
#include <stdlib.h>

int Y = 0;

int ubyteArg( unsigned char X) {
  return X + 2 + Y;
}

int sbyteArg( signed char X ) {
  return X + 3 + Y;
}

int ushortArg( unsigned short X ) {
  return X + 4 + Y;
}

int sshortArg( signed short X) {
  return X + 5 + Y;
}

int F1, F2, F3, F4;

int main(int argc, char**argv) {
  int TestVal;
  short sh;
  unsigned short ush;

  if (argc < 2) {
    printf("Program requires integer parameter");
    exit (1);
  }

  F1 = (int)(void*)ubyteArg;
  F2 = (int)(void*)sbyteArg;
  F3 = (int)(void*)ushortArg;
  F4 = (int)(void*)sshortArg;

  TestVal = atoi(argv[1]);
  sh = (short)-1;
  ush = (unsigned short) -1;

  printf("%d %hd %hu\n", TestVal, sh, ush);

  return 0;
}
