/*
 * Copyright 2025 Budapest University of Technology and Economics
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

extern void abort(void);
// Struct definitions (auto-parsed)
struct std__basic_string_view_char__std__char_traits_char__ { unsigned long _M_len; char* _M_str; };

char _str[14] = "Hello, World!";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__basic_string_view_char__std__char_traits_char__ message2;
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  // externalized std:: op: std::basic_string_view<char, std::char_traits<char> >::basic_string_view(char const*)
  __VERIFIER_nondet_memory(&message2, sizeof(message2));
  __VERIFIER_nondet_memory(cast4, sizeof(*cast4));
  int c5 = 0;
  __retval1 = c5;
  int t6 = __retval1;
  return t6;
}

