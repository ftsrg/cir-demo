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

typedef struct {int dims[0]; } *A;

f(unsigned long obj)
{
  unsigned char y = obj >> 24;
  y &= ~4;

  if ((y==0)||(y!=251  ))
    abort();

  if(((int)obj&7)!=7)return;

  REST_OF_CODE_JUST_HERE_TO_TRIGGER_THE_BUG:

  {
    unsigned char t = obj >> 24;
    if (!(t==0)&&(t<=0x03))
      return 0;
    return ((A)(obj&0x00FFFFFFL))->dims[1];
  }
}

long g(){return 0xff000000L;}
main (){int x;f(g());exit(0);}
