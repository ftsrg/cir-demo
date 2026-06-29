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

static int ap(int i);
static void testit(void){
  int ir[4] = {0,1,2,3};
  int ix,n,m;
  n=1; m=3;
  for (ix=1;ix<=4;ix++) {
    if (n == 1) m = 4;
    else        m = n-1;
    ap(ir[n-1]);
    n = m;
  }
}

static int t = 0;
static int a[4];

static int ap(int i){
  if (t > 3)
    abort();
  a[t++] = i;
  return 1;
}

int main(void)
{
  testit();
  if (a[0] != 0)
    abort();
  if (a[1] != 3)
    abort();
  if (a[2] != 2)
    abort();
  if (a[3] != 1)
    abort();
  exit(0);
}
