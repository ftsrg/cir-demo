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

/* PR rtl-optimization/34628 */
/* Origin: Martin Michlmayr <tbm@cyrius.com> */

typedef unsigned short u16;
typedef unsigned char u8;

static void
do_segfault(u8 in_buf[], const u8 out_buf[], const int len)
{
  int i;

  for (i = 0; i < len; i++) {
    asm("");

    in_buf[2*i] = (   out_buf[2*i] | out_buf[(2*i)+1]<<8  ) & 0xFF;

    asm("");

    in_buf[(2*i)+1] =  ( out_buf[2*i] | out_buf[(2*i)+1]<<8 ) >> 8;

    asm("");
  }
}

int main(int argc, char *argv[])
{
  u8 outbuf[32] = "buffer     ";
  u8 inbuf[32] = "\f";

  asm("");
  do_segfault(inbuf, outbuf, 12);
  asm("");

  return 0;
}
