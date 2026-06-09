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
__attribute__((weak)) long __VERIFIER_virtual_call_long_char_ptr_long(void* __obj, int __slot, char* __a0, long __a1) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((long(*)(void*, char*, long))__fn)(__obj, __a0, __a1);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_char____void_ { char* _M_first; char** _M_cur; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostreambuf_iterator_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__* _M_sbuf; _Bool _M_failed; unsigned char __field2[7]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__;
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _ZZ10nextLettervE6letter = 65;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Vector chars after filling with 5s:\n";
char _str_1[43] = "\n\nVector chars after filling five elements";
char _str_2[11] = " with As:\n";
char _str_3[46] = "\n\nVector chars after generating letters A-J:\n";
char _str_4[44] = "\n\nVector chars after generating K-O for the";
char _str_5[23] = " first five elements:\n";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char nextLetter();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10nextLetterv
char nextLetter() {
bb0:
  char __retval1;
  char t2 = _ZZ10nextLettervE6letter;
  char u3 = t2 + 1;
  *&_ZZ10nextLettervE6letter = u3;
  __retval1 = t2;
  char t4 = __retval1;
  return t4;
}

// function: main
int main() {
bb5:
  int __retval6;
  struct std__vector_char__std__allocator_char__ chars7;
  struct std__allocator_char_ ref_tmp08;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ output9;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp010;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp111;
  char ref_tmp112;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp213;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp314;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp415;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp516;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp617;
  char ref_tmp218;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp719;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp820;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp921;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp1022;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp1123;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1224;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1325;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1426;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1527;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp1628;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp1729;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1830;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1931;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2032;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2133;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp2234;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp2335;
  int c36 = 0;
  __retval6 = c36;
  unsigned long c37 = 10;
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
    // externalized std:: op: std::vector<char, std::allocator<char> >::vector(unsigned long, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&chars7, sizeof(chars7));
    __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
  }
    // externalized std:: op: std::ostreambuf_iterator<char, std::char_traits<char> >::ostreambuf_iterator(std::ostream&)
    __VERIFIER_nondet_memory(&output9, sizeof(output9));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp010 = std38;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp111 = std39;
    char c40 = 53;
    ref_tmp112 = c40;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t41 = agg_tmp010;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t42 = agg_tmp111;
    // externalized std:: op: void std::fill<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char const&)
    __VERIFIER_nondet_memory(&ref_tmp112, sizeof(ref_tmp112));
    char* cast43 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp213 = std45;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp314 = std46;
    agg_tmp415 = output9; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t47 = agg_tmp213;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t48 = agg_tmp314;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t49 = agg_tmp415;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp516 = std50;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    agg_tmp617 = std51;
    int c52 = 5;
    char c53 = 65;
    ref_tmp218 = c53;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t54 = agg_tmp617;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp719 = std55;
    char* cast56 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    char* cast58 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp820 = std60;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    agg_tmp921 = std61;
    agg_tmp1022 = output9; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t62 = agg_tmp820;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t63 = agg_tmp921;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t64 = agg_tmp1022;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    agg_tmp1123 = std65;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    agg_tmp1224 = std66;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    agg_tmp1325 = std67;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t68 = agg_tmp1224;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t69 = agg_tmp1325;
    // externalized std:: op: void std::generate<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char (*)()>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char (*)())
    char* cast70 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    agg_tmp1426 = std72;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    agg_tmp1527 = std73;
    agg_tmp1628 = output9; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t74 = agg_tmp1426;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t75 = agg_tmp1527;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t76 = agg_tmp1628;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    agg_tmp1729 = std77;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    agg_tmp1830 = std78;
    int c79 = 5;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t80 = agg_tmp1830;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    agg_tmp1931 = std81;
    char* cast82 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    char* cast84 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    agg_tmp2032 = std86;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std87;
    __VERIFIER_nondet_memory(&std87, sizeof(std87));
    agg_tmp2133 = std87;
    agg_tmp2234 = output9; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t88 = agg_tmp2032;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t89 = agg_tmp2133;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t90 = agg_tmp2234;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    agg_tmp2335 = std91;
    struct std__basic_ostream_char__std__char_traits_char__* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int c93 = 0;
    __retval6 = c93;
    int t94 = __retval6;
    int ret_val95 = t94;
    {
      // externalized std:: op: std::vector<char, std::allocator<char> >::~vector()
      __VERIFIER_nondet_memory(&chars7, sizeof(chars7));
    }
    return ret_val95;
  int t96 = __retval6;
  return t96;
}

