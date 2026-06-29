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

// { dg-require-effective-target alloca }
/* PR middle-end/86528 */

void __attribute__((noinline, noclone))
test(char *data, __SIZE_TYPE__ len)
{
    static char const appended[] = "/./";
    char *buf = __builtin_alloca (len + sizeof appended);
    __builtin_memcpy (buf, data, len);
    __builtin_strcpy (buf + len, &appended[data[len - 1] == '/']);
    if (__builtin_strcmp(buf, "test1234/./"))
        __builtin_abort();
}

int
main()
{
   char *arg = "test1234/";
   test(arg, __builtin_strlen(arg));
   return 0;
}
