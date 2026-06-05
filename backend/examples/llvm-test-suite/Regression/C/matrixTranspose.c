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

typedef float fftw_real;

void complex_transpose(fftw_real *rA, fftw_real *iA, int n, int is, int js)
{
     int i, j;

     for (i = 1; i < n; ++i) {
       for (j = 0; j < i; ++j) {
         fftw_real ar, ai, br, bi;

         ar = rA[i * is + j * js];
         ai = iA[i * is + j * js];
         br = rA[j * is + i * js];
         bi = iA[j * is + i * js];

         rA[j * is + i * js] = ar;
         iA[j * is + i * js] = ai;
         rA[i * is + j * js] = br;
         iA[i * is + j * js] = bi;
       }
     }
}

extern int printf(const char *str, ...);

fftw_real A[2048];
int main(int argc, char **argv)
{
     int i;

     fftw_real sum = 0.0;
     for (i = 0; i < 2048; ++i) {
       A[i] = i;
       sum = sum + A[i];
     }
     printf("Checksum before = %lf\n", sum);
    
     for (i = 0; i < 10; ++i) {
       complex_transpose(A, A+1, 32, 2, 64);
     }
    
     sum = 0.0;
     for (i = 0; i < 2048; ++i)
       sum = sum + A[i];
     printf("Checksum  after = %lf\n", sum);

     return 0;
}

