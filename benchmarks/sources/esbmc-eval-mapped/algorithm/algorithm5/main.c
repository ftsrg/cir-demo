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
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_char____void_ { char* _M_first; char** _M_cur; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int __const_main_match[3] = {65, 66, 67};
int __const_main_mychars[6] = {97, 98, 99, 65, 66, 67};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "first match is: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_1[49] = "cannot create std::vector larger than max_size()";
extern int tolower(int p0);
_Bool comp_case_insensitive(char p0, char p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z21comp_case_insensitivecc
_Bool comp_case_insensitive(char v0, char v1) {
bb2:
  char c13;
  char c24;
  _Bool __retval5;
  c13 = v0;
  c24 = v1;
  char t6 = c13;
  int cast7 = (int)t6;
  int r8 = tolower(cast7);
  char t9 = c24;
  int cast10 = (int)t9;
  int r11 = tolower(cast10);
  _Bool c12 = ((r8 == r11)) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: main
int main() {
bb14:
  int __retval15;
  int mychars16[6];
  struct std__vector_char__std__allocator_char__ myvector17;
  struct std__allocator_char_ ref_tmp018;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ it19;
  int match20[3];
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp121;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp022;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp123;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp324;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp225;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp326;
  int c27 = 0;
  __retval15 = c27;
  // array copy
  __builtin_memcpy(mychars16, __const_main_mychars, (unsigned long)6 * sizeof(__const_main_mychars[0]));
  int* cast28 = (int*)&(mychars16);
  int* cast29 = (int*)&(mychars16);
  int c30 = 6;
  int* ptr31 = &(cast29)[c30];
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp018, sizeof(ref_tmp018));
    // externalized std:: op: std::vector<char, std::allocator<char> >::vector<int*, void>(int*, int*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&myvector17, sizeof(myvector17));
    __VERIFIER_nondet_memory(cast28, sizeof(*cast28));
    __VERIFIER_nondet_memory(ptr31, sizeof(*ptr31));
    __VERIFIER_nondet_memory(&ref_tmp018, sizeof(ref_tmp018));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp018, sizeof(ref_tmp018));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it19, sizeof(it19));
    // array copy
    __builtin_memcpy(match20, __const_main_match, (unsigned long)3 * sizeof(__const_main_match[0]));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp022 = std32;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp123 = std33;
    int* cast34 = (int*)&(match20);
    int* cast35 = (int*)&(match20);
    int c36 = 3;
    int* ptr37 = &(cast35)[c36];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t38 = agg_tmp022;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t39 = agg_tmp123;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    ref_tmp121 = std40;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp242;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      ref_tmp242 = std43;
      _Bool std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      _Bool u45 = !std44;
      if (u45) {
        char* cast46 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        char* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        char t49 = *std48;
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
      }
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp225 = std52;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    agg_tmp326 = std53;
    int* cast54 = (int*)&(match20);
    int* cast55 = (int*)&(match20);
    int c56 = 3;
    int* ptr57 = &(cast55)[c56];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t58 = agg_tmp225;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t59 = agg_tmp326;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    ref_tmp324 = std60;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp462;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      ref_tmp462 = std63;
      _Bool std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      _Bool u65 = !std64;
      if (u65) {
        char* cast66 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        char* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        char t69 = *std68;
        struct std__basic_ostream_char__std__char_traits_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        struct std__basic_ostream_char__std__char_traits_char__* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
      }
    int c72 = 0;
    __retval15 = c72;
    int t73 = __retval15;
    int ret_val74 = t73;
    {
      // externalized std:: op: std::vector<char, std::allocator<char> >::~vector()
      __VERIFIER_nondet_memory(&myvector17, sizeof(myvector17));
    }
    return ret_val74;
  int t75 = __retval15;
  return t75;
}

