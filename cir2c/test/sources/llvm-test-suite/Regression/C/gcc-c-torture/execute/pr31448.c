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

/* PR middle-end/31448, this used to ICE during expand because
   reduce_to_bit_field_precision was not ready to handle constants. */
/* { dg-require-effective-target int32plus } */

typedef struct _st {
    int iIndex : 24;
    int iIndex1 : 24;
} st;
st *next;
void g(void)
{
    st *next = 0;
    int nIndx;
    const static int constreg[] = { 0,};
    nIndx = 0;
    next->iIndex = constreg[nIndx];
}
void f(void)
{
    int nIndx;
    const static int constreg[] = { 0xFEFEFEFE,};
    nIndx = 0;
    next->iIndex = constreg[nIndx];
    next->iIndex1 = constreg[nIndx];
}
int main(void)
{
  st a;
  next = &a;
  f();
  if (next->iIndex != 0xFFFEFEFE)
    __builtin_abort ();
  if (next->iIndex1 != 0xFFFEFEFE)
    __builtin_abort ();
  return 0;
}
