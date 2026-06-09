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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "noon is 12 p.m.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "Original string:\n";
char _str_2[29] = "\n\n(find) \"is\" was found at: ";
char _str_3[3] = "is";
char _str_4[29] = "\n(rfind) \"is\" was found at: ";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_5[6] = "misop";
char _str_6[26] = "\n\n(find_first_of) found '";
char _str_7[30] = "' from the group \"misop\" at: ";
char _str_8[25] = "\n\n(find_last_of) found '";
char _str_9[8] = "noi spm";
char _str_10[24] = "\n\n(find_first_not_of) '";
char _str_11[50] = "' is not contained in \"noi spm\" and was found at:";
char _str_12[10] = "12noi spm";
char _str_13[43] = "' is not contained in \"12noi spm\" and was ";
char _str_14[10] = "found at:";
char _str_15[38] = "\nfind_first_not_of(\"noon is 12 p.m.\")";
char _str_16[12] = " returned: ";
char _str_17[50] = "basic_string: construction from null is not valid";
char _str_18[24] = "basic_string::_M_create";
char _str_19[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_20[16] = "__pos <= size()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string12;
  struct std__allocator_char_ ref_tmp03;
  int location4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&string12, sizeof(string12));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast7 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    char* cast10 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    char* cast12 = (char*)&(_str_3);
    unsigned long c13 = 0;
    unsigned long std14 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    char* cast16 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    char* cast18 = (char*)&(_str_3);
    unsigned long t19 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    unsigned long std20 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    char* cast22 = (char*)&(_str_5);
    unsigned long c23 = 0;
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    int cast25 = (int)std24;
    location4 = cast25;
    char* cast26 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int t28 = location4;
    unsigned long cast29 = (unsigned long)t28;
    char* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    char t31 = *std30;
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    char* cast33 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = location4;
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    char* cast37 = (char*)&(_str_5);
    unsigned long t38 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    unsigned long std39 = __VERIFIER_nondet_unsigned_long();
    int cast40 = (int)std39;
    location4 = cast40;
    char* cast41 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = location4;
    unsigned long cast44 = (unsigned long)t43;
    char* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    char t46 = *std45;
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    char* cast48 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = location4;
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    char* cast52 = (char*)&(_str_9);
    unsigned long c53 = 0;
    unsigned long std54 = __VERIFIER_nondet_unsigned_long();
    int cast55 = (int)std54;
    location4 = cast55;
    char* cast56 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    int t58 = location4;
    unsigned long cast59 = (unsigned long)t58;
    char* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    char t61 = *std60;
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    char* cast63 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    int t65 = location4;
    struct std__basic_ostream_char__std__char_traits_char__* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    char* cast67 = (char*)&(_str_12);
    unsigned long c68 = 0;
    unsigned long std69 = __VERIFIER_nondet_unsigned_long();
    int cast70 = (int)std69;
    location4 = cast70;
    char* cast71 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    int t73 = location4;
    unsigned long cast74 = (unsigned long)t73;
    char* std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    char t76 = *std75;
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    char* cast78 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    char* cast80 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    int t82 = location4;
    struct std__basic_ostream_char__std__char_traits_char__* std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    struct std__basic_ostream_char__std__char_traits_char__* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    char* cast85 = (char*)&(_str);
    unsigned long c86 = 0;
    unsigned long std87 = __VERIFIER_nondet_unsigned_long();
    int cast88 = (int)std87;
    location4 = cast88;
    char* cast89 = (char*)&(_str_15);
    struct std__basic_ostream_char__std__char_traits_char__* std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    char* cast91 = (char*)&(_str_16);
    struct std__basic_ostream_char__std__char_traits_char__* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int t93 = location4;
    struct std__basic_ostream_char__std__char_traits_char__* std94;
    __VERIFIER_nondet_memory(&std94, sizeof(std94));
    struct std__basic_ostream_char__std__char_traits_char__* std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
    int c96 = 0;
    __retval1 = c96;
    int t97 = __retval1;
    int ret_val98 = t97;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&string12, sizeof(string12));
    }
    return ret_val98;
  int t99 = __retval1;
  return t99;
}

