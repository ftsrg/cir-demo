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

typedef struct {
  char name [80];
  int val;
  unsigned uval;
} data;

static int callback(void *d);
static void iter(int (*)(void*), void *);

static int callback(void *d)
{
  data *iter_data = (data *)d;

  printf("%u\n", iter_data->uval);
  return iter_data->uval == 0;
}

static void iter(int (*cb)(void*), void *d)
{
  cb(d);
}

int main()
{
  data d;

  d.uval = 0;
  iter(callback, &d);
  return 0;
}
