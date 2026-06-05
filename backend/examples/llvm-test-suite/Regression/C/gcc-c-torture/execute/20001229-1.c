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

/* This testcase originally provoked an unaligned access fault on Alpha.

   Since Digital Unix and Linux (and probably others) by default fix
   these up in the kernel, the failure was not visible unless one
   is sitting at the console examining logs.

   So: If we know how, ask the kernel to deliver SIGBUS instead so
   that the test case visibly fails.  */

#if defined(__alpha__) && defined(__linux__)
#include <asm/sysinfo.h>
#include <asm/unistd.h>

static inline int
setsysinfo(unsigned long op, void *buffer, unsigned long size,
           int *start, void *arg, unsigned long flag)
{
  syscall(__NR_osf_setsysinfo, op, buffer, size, start, arg, flag);
}

static void __attribute__((constructor))
trap_unaligned(void)
{
  unsigned int buf[2];
  buf[0] = SSIN_UACPROC;
  buf[1] = UAC_SIGBUS | UAC_NOPRINT;
  setsysinfo(SSI_NVPAIRS, buf, 1, 0, 0, 0);
}
#endif /* alpha */

void foo(char *a, char *b) { }

void showinfo()
{
    char uname[33] = "", tty[38] = "/dev/";
    foo(uname, tty);
}

int main()
{
  showinfo ();
  exit (0);
}
