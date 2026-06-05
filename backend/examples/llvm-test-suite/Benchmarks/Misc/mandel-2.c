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

#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int max_i = 65536;

double sqr(double x) { return x*x; }

double cnorm2(complex double z) { return sqr(creal(z)) + sqr(cimag(z)); }

int loop(complex double c) {
    complex double z=c;
    int i=1;
    while (cnorm2(z) <= 4.0 && i++ < max_i)
        z = z*z + c;
    return i;
}

int main() {
  int i, j;
    for (j = -39; j < 39; ++j) {
        for (i = -39; i < 39; ++i)
            printf(loop(j/40.0-0.5 + i/40.0*I) > max_i ? "*" : " ");
        printf("\n");
    }
    return 0;
}

