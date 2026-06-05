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

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

int
main(int argc, char** argv) {
  short s1 = (argc > 120) ? atoi(argv[1]) : -769; /* 0xf7ff = -769 */

  unsigned short us2 = (unsigned short) s1;     /* 0xf7ff = 64767 */
  printf("us2  = %u\n",   us2);
  return 0;
}
