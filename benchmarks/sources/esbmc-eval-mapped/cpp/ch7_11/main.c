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
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Implementation { unsigned char __placeholder; };
struct Interface { struct Implementation* __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[21] = "Interface contains: ";
char _str_1[17] = " before setValue";
char _str_2[16] = " after setValue";
extern void Interface__Interface(struct Interface* p0, int p1);
extern int Interface__getValue___const(struct Interface* p0);
extern void Interface__setValue(struct Interface* p0, int p1);
void Interface___Interface(struct Interface* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Interface i2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 5;
  Interface__Interface(&i2, c4);
    char* cast5 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
    int r7 = Interface__getValue___const(&i2);
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    char* cast9 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    int c12 = 10;
    Interface__setValue(&i2, c12);
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    int r15 = Interface__getValue___const(&i2);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    char* cast17 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int c20 = 0;
    __retval1 = c20;
    int t21 = __retval1;
    int ret_val22 = t21;
    {
      Interface___Interface(&i2);
    }
    return ret_val22;
  int t23 = __retval1;
  return t23;
}

