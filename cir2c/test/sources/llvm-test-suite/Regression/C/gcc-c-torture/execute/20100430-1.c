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

/* This used to generate unaligned accesses at -O2 because of IVOPTS.  */

struct packed_struct
{
  struct packed_struct1
  {
    unsigned char cc11;
    unsigned char cc12;
  } __attribute__ ((packed)) pst1;
  struct packed_struct2
  {
    unsigned char cc21;
    unsigned char cc22;
    unsigned short ss[104];
    unsigned char cc23[13];
  } __attribute__ ((packed)) pst2[4];
} __attribute__ ((packed));

typedef struct
{
  int ii;
  struct packed_struct buf;
} info_t;

static unsigned short g;

static void __attribute__((noinline))
dummy (unsigned short s)
{
  g = s;
}

static int
foo (info_t *info)
{
  int i, j;

  for (i = 0; i < info->buf.pst1.cc11; i++)
    for (j = 0; j < info->buf.pst2[i].cc22; j++)
      dummy (info->buf.pst2[i].ss[j]);

  return 0;
}

int main(void)
{
  info_t info;
  info.buf.pst1.cc11 = 2;
  info.buf.pst2[0].cc22 = info.buf.pst2[1].cc22 = 8;
  return foo (&info);
}
