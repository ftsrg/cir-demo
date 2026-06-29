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
#include <string.h>
#include <stdlib.h>

typedef struct{void*super;int name;int size;}t;
t*f(t*clas,int size)
{
  t*child=(t*)malloc(size);
  memcpy(child,clas,clas->size);
  child->super=clas;
  child->name=0;
  child->size=size;
  return child;
}
main()
{
  t foo,*bar;
  memset(&foo,37,sizeof(t));
  foo.size=sizeof(t);
  bar=f(&foo,sizeof(t));
  if(bar->super!=&foo||bar->name!=0||bar->size!=sizeof(t))abort();
  exit(0);
}
