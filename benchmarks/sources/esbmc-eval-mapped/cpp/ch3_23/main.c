/*
 * Copyright 2025 Budapest University of Technology and Economics
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

int square_2(int p0);
double square(double p0);
void nothing1(int p0, float p1, char p2, int* p3);
char* nothing2(char p0, int p1, float* p2, double* p3);
int main();

// function: _Z6squarei
int square_2(int v0) {
bb1:
  int x2;
  int __retval3;
  x2 = v0;
  int t4 = x2;
  int t5 = x2;
  int b6 = t4 * t5;
  __retval3 = b6;
  int t7 = __retval3;
  return t7;
}

// function: _Z6squared
double square(double v8) {
bb9:
  double y10;
  double __retval11;
  y10 = v8;
  double t12 = y10;
  double t13 = y10;
  double b14 = t12 * t13;
  __retval11 = b14;
  double t15 = __retval11;
  return t15;
}

// function: _Z8nothing1ifcPi
void nothing1(int v16, float v17, char v18, int* v19) {
bb20:
  int a21;
  float b22;
  char c23;
  int* d24;
  a21 = v16;
  b22 = v17;
  c23 = v18;
  d24 = v19;
  return;
}

// function: _Z8nothing2ciPfPd
char* nothing2(char v25, int v26, float* v27, double* v28) {
bb29:
  char a30;
  int b31;
  float* c32;
  double* d33;
  char* __retval34;
  a30 = v25;
  b31 = v26;
  c32 = v27;
  d33 = v28;
  char* c35 = ((void*)0);
  __retval34 = c35;
  char* t36 = __retval34;
  return t36;
}

// function: main
int main() {
bb37:
  int __retval38;
  int c39 = 0;
  __retval38 = c39;
  int c40 = 0;
  __retval38 = c40;
  int t41 = __retval38;
  return t41;
}

