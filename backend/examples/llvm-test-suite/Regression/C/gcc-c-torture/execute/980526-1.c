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

/* { dg-require-effective-target label_values } */

int expect_do1 = 1, expect_do2 = 2;

static int doit(int x){
  __label__ lbl1;
  __label__ lbl2;
  static int jtab_init = 0;
  static void *jtab[2];

  if(!jtab_init) {
    jtab[0] = &&lbl1;
    jtab[1] = &&lbl2;
    jtab_init = 1;
  }
  goto *jtab[x];
lbl1:
  return 1;
lbl2:
  return 2;
}

static void do1(void) {
  if (doit(0) != expect_do1)
    abort ();
}

static void do2(void){
  if (doit(1) != expect_do2)
    abort ();
}

int main(void){
  exit(0);
}
