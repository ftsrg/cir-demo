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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 2";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm30/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[6] == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
_Bool IsOdd(int p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______remove_copy_if_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v10) {
bb11:
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v15, unsigned long v16, struct std__allocator_int_* v17) {
bb18:
  struct std__vector_int__std__allocator_int__* this19;
  unsigned long __n20;
  struct std__allocator_int_* __a21;
  this19 = v15;
  __n20 = v16;
  __a21 = v17;
  struct std__vector_int__std__allocator_int__* t22 = this19;
  struct std___Vector_base_int__std__allocator_int__* base23 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t22 + 0);
  unsigned long t24 = __n20;
  struct std__allocator_int_* t25 = __a21;
  unsigned long r26 = std__vector_int__std__allocator_int______S_check_init_len(t24, t25);
  struct std__allocator_int_* t27 = __a21;
  std___Vector_base_int__std__allocator_int______Vector_base(base23, r26, t27);
    unsigned long t28 = __n20;
    std__vector_int__std__allocator_int______M_default_initialize(t22, t28);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v29) {
bb30:
  struct std__allocator_int_* this31;
  this31 = v29;
  struct std__allocator_int_* t32 = this31;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v33) {
bb34:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this35;
  this35 = v33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t36 = this35;
  int* c37 = ((void*)0);
  t36->_M_current = c37;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v38, int v39) {
bb40:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  int unnamed42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval43;
  int* ref_tmp044;
  this41 = v38;
  unnamed42 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t45 = this41;
  int* t46 = t45->_M_current;
  int c47 = 1;
  int* ptr48 = &(t46)[c47];
  t45->_M_current = ptr48;
  ref_tmp044 = t46;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval43, &ref_tmp044);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = __retval43;
  return t49;
}

// function: _Z14remove_copy_ifIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEET0_PT_SB_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______remove_copy_if_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(int* v50, int* v51, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v52, void* v53) {
bb54:
  int* first55;
  int* last56;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest57;
  void* pred58;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval59;
  first55 = v50;
  last56 = v51;
  dest57 = v52;
  pred58 = v53;
    while (1) {
      int* t61 = first55;
      int* t62 = last56;
      _Bool c63 = ((t61 != t62)) ? 1 : 0;
      if (!c63) break;
        void* t64 = pred58;
        int* t65 = first55;
        int t66 = *t65;
        _Bool r67 = ((_Bool (*)(int))t64)(t66);
        _Bool u68 = !r67;
        if (u68) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp069;
          int* t70 = first55;
          int t71 = *t70;
          int c72 = 0;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r73 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest57, c72);
          ref_tmp069 = r73;
          int* r74 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp069);
          *r74 = t71;
        }
    for_step60: ;
      int* t75 = first55;
      int c76 = 1;
      int* ptr77 = &(t75)[c76];
      first55 = ptr77;
    }
  __retval59 = dest57; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t78 = __retval59;
  return t78;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v79, int** v80) {
bb81:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this82;
  int** __i83;
  this82 = v79;
  __i83 = v80;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t84 = this82;
  int** t85 = __i83;
  int* t86 = *t85;
  t84->_M_current = t86;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v87) {
bb88:
  struct std__vector_int__std__allocator_int__* this89;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval90;
  this89 = v87;
  struct std__vector_int__std__allocator_int__* t91 = this89;
  struct std___Vector_base_int__std__allocator_int__* base92 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base93 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base92->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval90, &base93->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = __retval90;
  return t94;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v95) {
bb96:
  struct std__vector_int__std__allocator_int__* this97;
  unsigned long __retval98;
  long __dif99;
  this97 = v95;
  struct std__vector_int__std__allocator_int__* t100 = this97;
  struct std___Vector_base_int__std__allocator_int__* base101 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t100 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base102 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base101->_M_impl) + 0);
  int* t103 = base102->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t100 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base105 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base104->_M_impl) + 0);
  int* t106 = base105->_M_start;
  long diff107 = t103 - t106;
  __dif99 = diff107;
    long t108 = __dif99;
    long c109 = 0;
    _Bool c110 = ((t108 < c109)) ? 1 : 0;
    if (c110) {
      __builtin_unreachable();
    }
  long t111 = __dif99;
  unsigned long cast112 = (unsigned long)t111;
  __retval98 = cast112;
  unsigned long t113 = __retval98;
  return t113;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v114, unsigned long v115) {
bb116:
  struct std__vector_int__std__allocator_int__* this117;
  unsigned long __n118;
  int* __retval119;
  this117 = v114;
  __n118 = v115;
  struct std__vector_int__std__allocator_int__* t120 = this117;
    do {
          unsigned long t121 = __n118;
          unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t120);
          _Bool c123 = ((t121 < r122)) ? 1 : 0;
          _Bool u124 = !c123;
          if (u124) {
            char* cast125 = (char*)&(_str_6);
            int c126 = 1263;
            char* cast127 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast128 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast125, c126, cast127, cast128);
          }
      _Bool c129 = 0;
      if (!c129) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base130 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base131 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base130->_M_impl) + 0);
  int* t132 = base131->_M_start;
  unsigned long t133 = __n118;
  int* ptr134 = &(t132)[t133];
  __retval119 = ptr134;
  int* t135 = __retval119;
  return t135;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v136, int v137) {
bb138:
  int __a139;
  int __b140;
  int __retval141;
  __a139 = v136;
  __b140 = v137;
  int t142 = __a139;
  int t143 = __b140;
  int b144 = t142 | t143;
  __retval141 = b144;
  int t145 = __retval141;
  return t145;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v146) {
bb147:
  struct std__basic_ios_char__std__char_traits_char__* this148;
  int __retval149;
  this148 = v146;
  struct std__basic_ios_char__std__char_traits_char__* t150 = this148;
  struct std__ios_base* base151 = (struct std__ios_base*)((char *)t150 + 0);
  int t152 = base151->_M_streambuf_state;
  __retval149 = t152;
  int t153 = __retval149;
  return t153;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v154, int v155) {
bb156:
  struct std__basic_ios_char__std__char_traits_char__* this157;
  int __state158;
  this157 = v154;
  __state158 = v155;
  struct std__basic_ios_char__std__char_traits_char__* t159 = this157;
  int r160 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t159);
  int t161 = __state158;
  int r162 = std__operator_(r160, t161);
  std__basic_ios_char__std__char_traits_char_____clear(t159, r162);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v163, char* v164) {
bb165:
  char* __c1166;
  char* __c2167;
  _Bool __retval168;
  __c1166 = v163;
  __c2167 = v164;
  char* t169 = __c1166;
  char t170 = *t169;
  int cast171 = (int)t170;
  char* t172 = __c2167;
  char t173 = *t172;
  int cast174 = (int)t173;
  _Bool c175 = ((cast171 == cast174)) ? 1 : 0;
  __retval168 = c175;
  _Bool t176 = __retval168;
  return t176;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v177) {
bb178:
  char* __p179;
  unsigned long __retval180;
  unsigned long __i181;
  __p179 = v177;
  unsigned long c182 = 0;
  __i181 = c182;
    char ref_tmp0183;
    while (1) {
      unsigned long t184 = __i181;
      char* t185 = __p179;
      char* ptr186 = &(t185)[t184];
      char c187 = 0;
      ref_tmp0183 = c187;
      _Bool r188 = __gnu_cxx__char_traits_char___eq(ptr186, &ref_tmp0183);
      _Bool u189 = !r188;
      if (!u189) break;
      unsigned long t190 = __i181;
      unsigned long u191 = t190 + 1;
      __i181 = u191;
    }
  unsigned long t192 = __i181;
  __retval180 = t192;
  unsigned long t193 = __retval180;
  return t193;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v194) {
bb195:
  char* __s196;
  unsigned long __retval197;
  __s196 = v194;
    _Bool r198 = std____is_constant_evaluated();
    if (r198) {
      char* t199 = __s196;
      unsigned long r200 = __gnu_cxx__char_traits_char___length(t199);
      __retval197 = r200;
      unsigned long t201 = __retval197;
      return t201;
    }
  char* t202 = __s196;
  unsigned long r203 = strlen(t202);
  __retval197 = r203;
  unsigned long t204 = __retval197;
  return t204;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v205, char* v206) {
bb207:
  struct std__basic_ostream_char__std__char_traits_char__* __out208;
  char* __s209;
  struct std__basic_ostream_char__std__char_traits_char__* __retval210;
  __out208 = v205;
  __s209 = v206;
    char* t211 = __s209;
    _Bool cast212 = (_Bool)t211;
    _Bool u213 = !cast212;
    if (u213) {
      struct std__basic_ostream_char__std__char_traits_char__* t214 = __out208;
      void** v215 = (void**)t214;
      void* v216 = *((void**)v215);
      unsigned char* cast217 = (unsigned char*)v216;
      long c218 = -24;
      unsigned char* ptr219 = &(cast217)[c218];
      long* cast220 = (long*)ptr219;
      long t221 = *cast220;
      unsigned char* cast222 = (unsigned char*)t214;
      unsigned char* ptr223 = &(cast222)[t221];
      struct std__basic_ostream_char__std__char_traits_char__* cast224 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr223;
      struct std__basic_ios_char__std__char_traits_char__* cast225 = (struct std__basic_ios_char__std__char_traits_char__*)cast224;
      int t226 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast225, t226);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t227 = __out208;
      char* t228 = __s209;
      char* t229 = __s209;
      unsigned long r230 = std__char_traits_char___length(t229);
      long cast231 = (long)r230;
      struct std__basic_ostream_char__std__char_traits_char__* r232 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t227, t228, cast231);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t233 = __out208;
  __retval210 = t233;
  struct std__basic_ostream_char__std__char_traits_char__* t234 = __retval210;
  return t234;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v235, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v236) {
bb237:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this238;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval240;
  this238 = v235;
  unnamed239 = v236;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t241 = this238;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t242 = unnamed239;
  int* t243 = t242->_M_current;
  t241->_M_current = t243;
  __retval240 = t241;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t244 = __retval240;
  return t244;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v245) {
bb246:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this247;
  int** __retval248;
  this247 = v245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t249 = this247;
  __retval248 = &t249->_M_current;
  int** t250 = __retval248;
  return t250;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v251, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v252) {
bb253:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs254;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs255;
  _Bool __retval256;
  __lhs254 = v251;
  __rhs255 = v252;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t257 = __lhs254;
  int** r258 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t257);
  int* t259 = *r258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t260 = __rhs255;
  int** r261 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t260);
  int* t262 = *r261;
  _Bool c263 = ((t259 == t262)) ? 1 : 0;
  __retval256 = c263;
  _Bool t264 = __retval256;
  return t264;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v265) {
bb266:
  struct std__vector_int__std__allocator_int__* this267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval268;
  this267 = v265;
  struct std__vector_int__std__allocator_int__* t269 = this267;
  struct std___Vector_base_int__std__allocator_int__* base270 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t269 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base271 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base270->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval268, &base271->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t272 = __retval268;
  return t272;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v273) {
bb274:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this275;
  int* __retval276;
  this275 = v273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t277 = this275;
  int* t278 = t277->_M_current;
  __retval276 = t278;
  int* t279 = __retval276;
  return t279;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v280) {
bb281:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this282;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval283;
  this282 = v280;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t284 = this282;
  int* t285 = t284->_M_current;
  int c286 = 1;
  int* ptr287 = &(t285)[c286];
  t284->_M_current = ptr287;
  __retval283 = t284;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t288 = __retval283;
  return t288;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v289, void* v290) {
bb291:
  struct std__basic_ostream_char__std__char_traits_char__* this292;
  void* __pf293;
  struct std__basic_ostream_char__std__char_traits_char__* __retval294;
  this292 = v289;
  __pf293 = v290;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = this292;
  void* t296 = __pf293;
  struct std__basic_ostream_char__std__char_traits_char__* r297 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t296)(t295);
  __retval294 = r297;
  struct std__basic_ostream_char__std__char_traits_char__* t298 = __retval294;
  return t298;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v299) {
bb300:
  struct std__basic_ostream_char__std__char_traits_char__* __os301;
  struct std__basic_ostream_char__std__char_traits_char__* __retval302;
  __os301 = v299;
  struct std__basic_ostream_char__std__char_traits_char__* t303 = __os301;
  struct std__basic_ostream_char__std__char_traits_char__* r304 = std__ostream__flush(t303);
  __retval302 = r304;
  struct std__basic_ostream_char__std__char_traits_char__* t305 = __retval302;
  return t305;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v306) {
bb307:
  struct std__ctype_char_* __f308;
  struct std__ctype_char_* __retval309;
  __f308 = v306;
    struct std__ctype_char_* t310 = __f308;
    _Bool cast311 = (_Bool)t310;
    _Bool u312 = !cast311;
    if (u312) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t313 = __f308;
  __retval309 = t313;
  struct std__ctype_char_* t314 = __retval309;
  return t314;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v315, char v316) {
bb317:
  struct std__ctype_char_* this318;
  char __c319;
  char __retval320;
  this318 = v315;
  __c319 = v316;
  struct std__ctype_char_* t321 = this318;
    char t322 = t321->_M_widen_ok;
    _Bool cast323 = (_Bool)t322;
    if (cast323) {
      char t324 = __c319;
      unsigned char cast325 = (unsigned char)t324;
      unsigned long cast326 = (unsigned long)cast325;
      char t327 = t321->_M_widen[cast326];
      __retval320 = t327;
      char t328 = __retval320;
      return t328;
    }
  std__ctype_char____M_widen_init___const(t321);
  char t329 = __c319;
  void** v330 = (void**)t321;
  void* v331 = *((void**)v330);
  char vcall334 = (char)__VERIFIER_virtual_call_char_char(t321, 6, t329);
  __retval320 = vcall334;
  char t335 = __retval320;
  return t335;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v336, char v337) {
bb338:
  struct std__basic_ios_char__std__char_traits_char__* this339;
  char __c340;
  char __retval341;
  this339 = v336;
  __c340 = v337;
  struct std__basic_ios_char__std__char_traits_char__* t342 = this339;
  struct std__ctype_char_* t343 = t342->_M_ctype;
  struct std__ctype_char_* r344 = std__ctype_char__const__std____check_facet_std__ctype_char___(t343);
  char t345 = __c340;
  char r346 = std__ctype_char___widen_char__const(r344, t345);
  __retval341 = r346;
  char t347 = __retval341;
  return t347;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v348) {
bb349:
  struct std__basic_ostream_char__std__char_traits_char__* __os350;
  struct std__basic_ostream_char__std__char_traits_char__* __retval351;
  __os350 = v348;
  struct std__basic_ostream_char__std__char_traits_char__* t352 = __os350;
  struct std__basic_ostream_char__std__char_traits_char__* t353 = __os350;
  void** v354 = (void**)t353;
  void* v355 = *((void**)v354);
  unsigned char* cast356 = (unsigned char*)v355;
  long c357 = -24;
  unsigned char* ptr358 = &(cast356)[c357];
  long* cast359 = (long*)ptr358;
  long t360 = *cast359;
  unsigned char* cast361 = (unsigned char*)t353;
  unsigned char* ptr362 = &(cast361)[t360];
  struct std__basic_ostream_char__std__char_traits_char__* cast363 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr362;
  struct std__basic_ios_char__std__char_traits_char__* cast364 = (struct std__basic_ios_char__std__char_traits_char__*)cast363;
  char c365 = 10;
  char r366 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast364, c365);
  struct std__basic_ostream_char__std__char_traits_char__* r367 = std__ostream__put(t352, r366);
  struct std__basic_ostream_char__std__char_traits_char__* r368 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r367);
  __retval351 = r368;
  struct std__basic_ostream_char__std__char_traits_char__* t369 = __retval351;
  return t369;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v370) {
bb371:
  struct std__vector_int__std__allocator_int__* this372;
  this372 = v370;
  struct std__vector_int__std__allocator_int__* t373 = this372;
    struct std___Vector_base_int__std__allocator_int__* base374 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base375 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base374->_M_impl) + 0);
    int* t376 = base375->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base377 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base378 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base377->_M_impl) + 0);
    int* t379 = base378->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base380 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
    struct std__allocator_int_* r381 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base380);
    void_std___Destroy_int___int_(t376, t379, r381);
  {
    struct std___Vector_base_int__std__allocator_int__* base382 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base382);
  }
  return;
}

// function: main
int main() {
bb383:
  int __retval384;
  int myints385[9];
  struct std__vector_int__std__allocator_int__ myvector386;
  struct std__allocator_int_ ref_tmp0387;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it388;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0389;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1390;
  int c391 = 0;
  __retval384 = c391;
  // array copy
  __builtin_memcpy(myints385, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  unsigned long c392 = 9;
  std__allocator_int___allocator_2(&ref_tmp0387);
    std__vector_int__std__allocator_int_____vector(&myvector386, c392, &ref_tmp0387);
  {
    std__allocator_int____allocator(&ref_tmp0387);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it388);
    int* cast393 = (int*)&(myints385);
    int* cast394 = (int*)&(myints385);
    int c395 = 9;
    int* ptr396 = &(cast394)[c395];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r397 = std__vector_int__std__allocator_int_____begin(&myvector386);
    agg_tmp0389 = r397;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t398 = agg_tmp0389;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r399 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______remove_copy_if_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(cast393, ptr396, t398, &IsOdd);
    agg_tmp1390 = r399;
    unsigned long c400 = 0;
    int* r401 = std__vector_int__std__allocator_int_____operator__(&myvector386, c400);
    int t402 = *r401;
    int c403 = 2;
    _Bool c404 = ((t402 == c403)) ? 1 : 0;
    if (c404) {
    } else {
      char* cast405 = (char*)&(_str);
      char* c406 = _str_1;
      unsigned int c407 = 38;
      char* cast408 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast405, c406, c407, cast408);
    }
    unsigned long c409 = 6;
    int* r410 = std__vector_int__std__allocator_int_____operator__(&myvector386, c409);
    int t411 = *r410;
    int c412 = 0;
    _Bool c413 = ((t411 == c412)) ? 1 : 0;
    if (c413) {
    } else {
      char* cast414 = (char*)&(_str_2);
      char* c415 = _str_1;
      unsigned int c416 = 39;
      char* cast417 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast414, c415, c416, cast417);
    }
    char* cast418 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r419 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast418);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1420;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2421;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r422 = std__vector_int__std__allocator_int_____begin(&myvector386);
      ref_tmp1420 = r422;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r423 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it388, &ref_tmp1420);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r425 = std__vector_int__std__allocator_int_____end(&myvector386);
        ref_tmp2421 = r425;
        _Bool r426 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it388, &ref_tmp2421);
        _Bool u427 = !r426;
        if (!u427) break;
        char* cast428 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r429 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast428);
        int* r430 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it388);
        int t431 = *r430;
        struct std__basic_ostream_char__std__char_traits_char__* r432 = std__ostream__operator__(r429, t431);
      for_step424: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r433 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it388);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r434 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c435 = 0;
    __retval384 = c435;
    int t436 = __retval384;
    int ret_val437 = t436;
    {
      std__vector_int__std__allocator_int______vector(&myvector386);
    }
    return ret_val437;
  int t438 = __retval384;
  return t438;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v439) {
bb440:
  struct std____new_allocator_int_* this441;
  this441 = v439;
  struct std____new_allocator_int_* t442 = this441;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v443, unsigned long* v444) {
bb445:
  unsigned long* __a446;
  unsigned long* __b447;
  unsigned long* __retval448;
  __a446 = v443;
  __b447 = v444;
    unsigned long* t449 = __b447;
    unsigned long t450 = *t449;
    unsigned long* t451 = __a446;
    unsigned long t452 = *t451;
    _Bool c453 = ((t450 < t452)) ? 1 : 0;
    if (c453) {
      unsigned long* t454 = __b447;
      __retval448 = t454;
      unsigned long* t455 = __retval448;
      return t455;
    }
  unsigned long* t456 = __a446;
  __retval448 = t456;
  unsigned long* t457 = __retval448;
  return t457;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v458) {
bb459:
  struct std__allocator_int_* __a460;
  unsigned long __retval461;
  unsigned long __diffmax462;
  unsigned long __allocmax463;
  __a460 = v458;
  unsigned long c464 = 2305843009213693951;
  __diffmax462 = c464;
  unsigned long c465 = 4611686018427387903;
  __allocmax463 = c465;
  unsigned long* r466 = unsigned_long_const__std__min_unsigned_long_(&__diffmax462, &__allocmax463);
  unsigned long t467 = *r466;
  __retval461 = t467;
  unsigned long t468 = __retval461;
  return t468;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v469, struct std__allocator_int_* v470) {
bb471:
  struct std__allocator_int_* this472;
  struct std__allocator_int_* __a473;
  this472 = v469;
  __a473 = v470;
  struct std__allocator_int_* t474 = this472;
  struct std____new_allocator_int_* base475 = (struct std____new_allocator_int_*)((char *)t474 + 0);
  struct std__allocator_int_* t476 = __a473;
  struct std____new_allocator_int_* base477 = (struct std____new_allocator_int_*)((char *)t476 + 0);
  std____new_allocator_int_____new_allocator(base475, base477);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v478, struct std__allocator_int_* v479) {
bb480:
  unsigned long __n481;
  struct std__allocator_int_* __a482;
  unsigned long __retval483;
  __n481 = v478;
  __a482 = v479;
    struct std__allocator_int_ ref_tmp0484;
    _Bool tmp_exprcleanup485;
    unsigned long t486 = __n481;
    struct std__allocator_int_* t487 = __a482;
    std__allocator_int___allocator(&ref_tmp0484, t487);
      unsigned long r488 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0484);
      _Bool c489 = ((t486 > r488)) ? 1 : 0;
      tmp_exprcleanup485 = c489;
    {
      std__allocator_int____allocator(&ref_tmp0484);
    }
    _Bool t490 = tmp_exprcleanup485;
    if (t490) {
      char* cast491 = (char*)&(_str_5);
      std____throw_length_error(cast491);
    }
  unsigned long t492 = __n481;
  __retval483 = t492;
  unsigned long t493 = __retval483;
  return t493;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v494, struct std__allocator_int_* v495) {
bb496:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this497;
  struct std__allocator_int_* __a498;
  this497 = v494;
  __a498 = v495;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t499 = this497;
  struct std__allocator_int_* base500 = (struct std__allocator_int_*)((char *)t499 + 0);
  struct std__allocator_int_* t501 = __a498;
  std__allocator_int___allocator(base500, t501);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base502 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t499 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base502);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb503:
  _Bool __retval504;
    _Bool c505 = 0;
    __retval504 = c505;
    _Bool t506 = __retval504;
    return t506;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v507) {
bb508:
  struct std____new_allocator_int_* this509;
  unsigned long __retval510;
  this509 = v507;
  struct std____new_allocator_int_* t511 = this509;
  unsigned long c512 = 9223372036854775807;
  unsigned long c513 = 4;
  unsigned long b514 = c512 / c513;
  __retval510 = b514;
  unsigned long t515 = __retval510;
  return t515;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v516, unsigned long v517, void* v518) {
bb519:
  struct std____new_allocator_int_* this520;
  unsigned long __n521;
  void* unnamed522;
  int* __retval523;
  this520 = v516;
  __n521 = v517;
  unnamed522 = v518;
  struct std____new_allocator_int_* t524 = this520;
    unsigned long t525 = __n521;
    unsigned long r526 = std____new_allocator_int____M_max_size___const(t524);
    _Bool c527 = ((t525 > r526)) ? 1 : 0;
    if (c527) {
        unsigned long t528 = __n521;
        unsigned long c529 = -1;
        unsigned long c530 = 4;
        unsigned long b531 = c529 / c530;
        _Bool c532 = ((t528 > b531)) ? 1 : 0;
        if (c532) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c533 = 4;
    unsigned long c534 = 16;
    _Bool c535 = ((c533 > c534)) ? 1 : 0;
    if (c535) {
      unsigned long __al536;
      unsigned long c537 = 4;
      __al536 = c537;
      unsigned long t538 = __n521;
      unsigned long c539 = 4;
      unsigned long b540 = t538 * c539;
      unsigned long t541 = __al536;
      void* r542 = operator_new_2(b540, t541);
      int* cast543 = (int*)r542;
      __retval523 = cast543;
      int* t544 = __retval523;
      return t544;
    }
  unsigned long t545 = __n521;
  unsigned long c546 = 4;
  unsigned long b547 = t545 * c546;
  void* r548 = operator_new(b547);
  int* cast549 = (int*)r548;
  __retval523 = cast549;
  int* t550 = __retval523;
  return t550;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v551, unsigned long v552) {
bb553:
  struct std__allocator_int_* this554;
  unsigned long __n555;
  int* __retval556;
  this554 = v551;
  __n555 = v552;
  struct std__allocator_int_* t557 = this554;
    _Bool r558 = std____is_constant_evaluated();
    if (r558) {
        unsigned long t559 = __n555;
        unsigned long c560 = 4;
        unsigned long ovr561;
        _Bool ovf562 = __builtin_mul_overflow(t559, c560, &ovr561);
        __n555 = ovr561;
        if (ovf562) {
          std____throw_bad_array_new_length();
        }
      unsigned long t563 = __n555;
      void* r564 = operator_new(t563);
      int* cast565 = (int*)r564;
      __retval556 = cast565;
      int* t566 = __retval556;
      return t566;
    }
  struct std____new_allocator_int_* base567 = (struct std____new_allocator_int_*)((char *)t557 + 0);
  unsigned long t568 = __n555;
  void* c569 = ((void*)0);
  int* r570 = std____new_allocator_int___allocate(base567, t568, c569);
  __retval556 = r570;
  int* t571 = __retval556;
  return t571;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v572, unsigned long v573) {
bb574:
  struct std__allocator_int_* __a575;
  unsigned long __n576;
  int* __retval577;
  __a575 = v572;
  __n576 = v573;
  struct std__allocator_int_* t578 = __a575;
  unsigned long t579 = __n576;
  int* r580 = std__allocator_int___allocate(t578, t579);
  __retval577 = r580;
  int* t581 = __retval577;
  return t581;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v582, unsigned long v583) {
bb584:
  struct std___Vector_base_int__std__allocator_int__* this585;
  unsigned long __n586;
  int* __retval587;
  this585 = v582;
  __n586 = v583;
  struct std___Vector_base_int__std__allocator_int__* t588 = this585;
  unsigned long t589 = __n586;
  unsigned long c590 = 0;
  _Bool c591 = ((t589 != c590)) ? 1 : 0;
  int* ternary592;
  if (c591) {
    struct std__allocator_int_* base593 = (struct std__allocator_int_*)((char *)&(t588->_M_impl) + 0);
    unsigned long t594 = __n586;
    int* r595 = std__allocator_traits_std__allocator_int_____allocate(base593, t594);
    ternary592 = (int*)r595;
  } else {
    int* c596 = ((void*)0);
    ternary592 = (int*)c596;
  }
  __retval587 = ternary592;
  int* t597 = __retval587;
  return t597;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v598, unsigned long v599) {
bb600:
  struct std___Vector_base_int__std__allocator_int__* this601;
  unsigned long __n602;
  this601 = v598;
  __n602 = v599;
  struct std___Vector_base_int__std__allocator_int__* t603 = this601;
  unsigned long t604 = __n602;
  int* r605 = std___Vector_base_int__std__allocator_int______M_allocate(t603, t604);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base606 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  base606->_M_start = r605;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base607 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  int* t608 = base607->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base609 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  base609->_M_finish = t608;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base610 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  int* t611 = base610->_M_start;
  unsigned long t612 = __n602;
  int* ptr613 = &(t611)[t612];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base614 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  base614->_M_end_of_storage = ptr613;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v615) {
bb616:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this617;
  this617 = v615;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t618 = this617;
  {
    struct std__allocator_int_* base619 = (struct std__allocator_int_*)((char *)t618 + 0);
    std__allocator_int____allocator(base619);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v620, unsigned long v621, struct std__allocator_int_* v622) {
bb623:
  struct std___Vector_base_int__std__allocator_int__* this624;
  unsigned long __n625;
  struct std__allocator_int_* __a626;
  this624 = v620;
  __n625 = v621;
  __a626 = v622;
  struct std___Vector_base_int__std__allocator_int__* t627 = this624;
  struct std__allocator_int_* t628 = __a626;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t627->_M_impl, t628);
    unsigned long t629 = __n625;
    std___Vector_base_int__std__allocator_int______M_create_storage(t627, t629);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb630:
  _Bool __retval631;
    _Bool c632 = 0;
    __retval631 = c632;
    _Bool t633 = __retval631;
    return t633;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v634, int** v635) {
bb636:
  struct std___UninitDestroyGuard_int____void_* this637;
  int** __first638;
  this637 = v634;
  __first638 = v635;
  struct std___UninitDestroyGuard_int____void_* t639 = this637;
  int** t640 = __first638;
  int* t641 = *t640;
  t639->_M_first = t641;
  int** t642 = __first638;
  t639->_M_cur = t642;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v643) {
bb644:
  int* __location645;
  int* __retval646;
  void* __loc647;
  __location645 = v643;
  int* t648 = __location645;
  void* cast649 = (void*)t648;
  __loc647 = cast649;
    void* t650 = __loc647;
    int* cast651 = (int*)t650;
    int c652 = 0;
    *cast651 = c652;
    __retval646 = cast651;
    int* t653 = __retval646;
    return t653;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v654) {
bb655:
  int* __p656;
  __p656 = v654;
    _Bool r657 = std____is_constant_evaluated();
    if (r657) {
      int* t658 = __p656;
      int* r659 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t658);
      return;
    }
  int* t660 = __p656;
  void* cast661 = (void*)t660;
  int* cast662 = (int*)cast661;
  int c663 = 0;
  *cast662 = c663;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v664) {
bb665:
  struct std___UninitDestroyGuard_int____void_* this666;
  this666 = v664;
  struct std___UninitDestroyGuard_int____void_* t667 = this666;
  int** c668 = ((void*)0);
  t667->_M_cur = c668;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v669) {
bb670:
  struct std___UninitDestroyGuard_int____void_* this671;
  this671 = v669;
  struct std___UninitDestroyGuard_int____void_* t672 = this671;
    int** t673 = t672->_M_cur;
    int** c674 = ((void*)0);
    _Bool c675 = ((t673 != c674)) ? 1 : 0;
    if (c675) {
      int* t676 = t672->_M_first;
      int** t677 = t672->_M_cur;
      int* t678 = *t677;
      void_std___Destroy_int__(t676, t678);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v679, unsigned long v680) {
bb681:
  int* __first682;
  unsigned long __n683;
  int* __retval684;
  struct std___UninitDestroyGuard_int____void_ __guard685;
  __first682 = v679;
  __n683 = v680;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard685, &__first682);
      while (1) {
        unsigned long t687 = __n683;
        unsigned long c688 = 0;
        _Bool c689 = ((t687 > c688)) ? 1 : 0;
        if (!c689) break;
        int* t690 = __first682;
        void_std___Construct_int_(t690);
      for_step686: ;
        unsigned long t691 = __n683;
        unsigned long u692 = t691 - 1;
        __n683 = u692;
        int* t693 = __first682;
        int c694 = 1;
        int* ptr695 = &(t693)[c694];
        __first682 = ptr695;
      }
    std___UninitDestroyGuard_int___void___release(&__guard685);
    int* t696 = __first682;
    __retval684 = t696;
    int* t697 = __retval684;
    int* ret_val698 = t697;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard685);
    }
    return ret_val698;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v699, int* v700, int* v701) {
bb702:
  int* __first703;
  int* __last704;
  int* __value705;
  _Bool __load_outside_loop706;
  int __val707;
  __first703 = v699;
  __last704 = v700;
  __value705 = v701;
  _Bool c708 = 1;
  __load_outside_loop706 = c708;
  int* t709 = __value705;
  int t710 = *t709;
  __val707 = t710;
    while (1) {
      int* t712 = __first703;
      int* t713 = __last704;
      _Bool c714 = ((t712 != t713)) ? 1 : 0;
      if (!c714) break;
      int t715 = __val707;
      int* t716 = __first703;
      *t716 = t715;
    for_step711: ;
      int* t717 = __first703;
      int c718 = 1;
      int* ptr719 = &(t717)[c718];
      __first703 = ptr719;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v720, int* v721, int* v722) {
bb723:
  int* __first724;
  int* __last725;
  int* __value726;
  __first724 = v720;
  __last725 = v721;
  __value726 = v722;
  int* t727 = __first724;
  int* t728 = __last725;
  int* t729 = __value726;
  void_std____fill_a1_int___int_(t727, t728, t729);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v730, unsigned long v731, int* v732, struct std__random_access_iterator_tag v733) {
bb734:
  int* __first735;
  unsigned long __n736;
  int* __value737;
  struct std__random_access_iterator_tag unnamed738;
  int* __retval739;
  __first735 = v730;
  __n736 = v731;
  __value737 = v732;
  unnamed738 = v733;
    unsigned long t740 = __n736;
    unsigned long c741 = 0;
    _Bool c742 = ((t740 <= c741)) ? 1 : 0;
    if (c742) {
      int* t743 = __first735;
      __retval739 = t743;
      int* t744 = __retval739;
      return t744;
    }
  int* t745 = __first735;
  int* t746 = __first735;
  unsigned long t747 = __n736;
  int* ptr748 = &(t746)[t747];
  int* t749 = __value737;
  void_std____fill_a_int___int_(t745, ptr748, t749);
  int* t750 = __first735;
  unsigned long t751 = __n736;
  int* ptr752 = &(t750)[t751];
  __retval739 = ptr752;
  int* t753 = __retval739;
  return t753;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v754) {
bb755:
  unsigned long __n756;
  unsigned long __retval757;
  __n756 = v754;
  unsigned long t758 = __n756;
  __retval757 = t758;
  unsigned long t759 = __retval757;
  return t759;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v760) {
bb761:
  int** unnamed762;
  struct std__random_access_iterator_tag __retval763;
  unnamed762 = v760;
  struct std__random_access_iterator_tag t764 = __retval763;
  return t764;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v765, unsigned long v766, int* v767) {
bb768:
  int* __first769;
  unsigned long __n770;
  int* __value771;
  int* __retval772;
  struct std__random_access_iterator_tag agg_tmp0773;
  __first769 = v765;
  __n770 = v766;
  __value771 = v767;
  int* t774 = __first769;
  unsigned long t775 = __n770;
  unsigned long r776 = std____size_to_integer(t775);
  int* t777 = __value771;
  struct std__random_access_iterator_tag r778 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first769);
  agg_tmp0773 = r778;
  struct std__random_access_iterator_tag t779 = agg_tmp0773;
  int* r780 = int__std____fill_n_a_int___unsigned_long__int_(t774, r776, t777, t779);
  __retval772 = r780;
  int* t781 = __retval772;
  return t781;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v782, unsigned long v783) {
bb784:
  int* __first785;
  unsigned long __n786;
  int* __retval787;
  __first785 = v782;
  __n786 = v783;
    unsigned long t788 = __n786;
    unsigned long c789 = 0;
    _Bool c790 = ((t788 > c789)) ? 1 : 0;
    if (c790) {
      int* __val791;
      int* t792 = __first785;
      __val791 = t792;
      int* t793 = __val791;
      void_std___Construct_int_(t793);
      int* t794 = __first785;
      int c795 = 1;
      int* ptr796 = &(t794)[c795];
      __first785 = ptr796;
      int* t797 = __first785;
      unsigned long t798 = __n786;
      unsigned long c799 = 1;
      unsigned long b800 = t798 - c799;
      int* t801 = __val791;
      int* r802 = int__std__fill_n_int___unsigned_long__int_(t797, b800, t801);
      __first785 = r802;
    }
  int* t803 = __first785;
  __retval787 = t803;
  int* t804 = __retval787;
  return t804;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v805, unsigned long v806) {
bb807:
  int* __first808;
  unsigned long __n809;
  int* __retval810;
  _Bool __can_fill811;
  __first808 = v805;
  __n809 = v806;
    _Bool r812 = std__is_constant_evaluated();
    if (r812) {
      int* t813 = __first808;
      unsigned long t814 = __n809;
      int* r815 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t813, t814);
      __retval810 = r815;
      int* t816 = __retval810;
      return t816;
    }
  _Bool c817 = 1;
  __can_fill811 = c817;
  int* t818 = __first808;
  unsigned long t819 = __n809;
  int* r820 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t818, t819);
  __retval810 = r820;
  int* t821 = __retval810;
  return t821;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v822, unsigned long v823, struct std__allocator_int_* v824) {
bb825:
  int* __first826;
  unsigned long __n827;
  struct std__allocator_int_* unnamed828;
  int* __retval829;
  __first826 = v822;
  __n827 = v823;
  unnamed828 = v824;
  int* t830 = __first826;
  unsigned long t831 = __n827;
  int* r832 = int__std____uninitialized_default_n_int___unsigned_long_(t830, t831);
  __retval829 = r832;
  int* t833 = __retval829;
  return t833;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v834) {
bb835:
  struct std___Vector_base_int__std__allocator_int__* this836;
  struct std__allocator_int_* __retval837;
  this836 = v834;
  struct std___Vector_base_int__std__allocator_int__* t838 = this836;
  struct std__allocator_int_* base839 = (struct std__allocator_int_*)((char *)&(t838->_M_impl) + 0);
  __retval837 = base839;
  struct std__allocator_int_* t840 = __retval837;
  return t840;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v841, unsigned long v842) {
bb843:
  struct std__vector_int__std__allocator_int__* this844;
  unsigned long __n845;
  this844 = v841;
  __n845 = v842;
  struct std__vector_int__std__allocator_int__* t846 = this844;
  struct std___Vector_base_int__std__allocator_int__* base847 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t846 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base848 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base847->_M_impl) + 0);
  int* t849 = base848->_M_start;
  unsigned long t850 = __n845;
  struct std___Vector_base_int__std__allocator_int__* base851 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t846 + 0);
  struct std__allocator_int_* r852 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base851);
  int* r853 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t849, t850, r852);
  struct std___Vector_base_int__std__allocator_int__* base854 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t846 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base855 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base854->_M_impl) + 0);
  base855->_M_finish = r853;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v856, int* v857, unsigned long v858) {
bb859:
  struct std____new_allocator_int_* this860;
  int* __p861;
  unsigned long __n862;
  this860 = v856;
  __p861 = v857;
  __n862 = v858;
  struct std____new_allocator_int_* t863 = this860;
    unsigned long c864 = 4;
    unsigned long c865 = 16;
    _Bool c866 = ((c864 > c865)) ? 1 : 0;
    if (c866) {
      int* t867 = __p861;
      void* cast868 = (void*)t867;
      unsigned long t869 = __n862;
      unsigned long c870 = 4;
      unsigned long b871 = t869 * c870;
      unsigned long c872 = 4;
      operator_delete_3(cast868, b871, c872);
      return;
    }
  int* t873 = __p861;
  void* cast874 = (void*)t873;
  unsigned long t875 = __n862;
  unsigned long c876 = 4;
  unsigned long b877 = t875 * c876;
  operator_delete_2(cast874, b877);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v878, int* v879, unsigned long v880) {
bb881:
  struct std__allocator_int_* this882;
  int* __p883;
  unsigned long __n884;
  this882 = v878;
  __p883 = v879;
  __n884 = v880;
  struct std__allocator_int_* t885 = this882;
    _Bool r886 = std____is_constant_evaluated();
    if (r886) {
      int* t887 = __p883;
      void* cast888 = (void*)t887;
      operator_delete(cast888);
      return;
    }
  struct std____new_allocator_int_* base889 = (struct std____new_allocator_int_*)((char *)t885 + 0);
  int* t890 = __p883;
  unsigned long t891 = __n884;
  std____new_allocator_int___deallocate(base889, t890, t891);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v892, int* v893, unsigned long v894) {
bb895:
  struct std__allocator_int_* __a896;
  int* __p897;
  unsigned long __n898;
  __a896 = v892;
  __p897 = v893;
  __n898 = v894;
  struct std__allocator_int_* t899 = __a896;
  int* t900 = __p897;
  unsigned long t901 = __n898;
  std__allocator_int___deallocate(t899, t900, t901);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v902, int* v903, unsigned long v904) {
bb905:
  struct std___Vector_base_int__std__allocator_int__* this906;
  int* __p907;
  unsigned long __n908;
  this906 = v902;
  __p907 = v903;
  __n908 = v904;
  struct std___Vector_base_int__std__allocator_int__* t909 = this906;
    int* t910 = __p907;
    _Bool cast911 = (_Bool)t910;
    if (cast911) {
      struct std__allocator_int_* base912 = (struct std__allocator_int_*)((char *)&(t909->_M_impl) + 0);
      int* t913 = __p907;
      unsigned long t914 = __n908;
      std__allocator_traits_std__allocator_int_____deallocate(base912, t913, t914);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v915) {
bb916:
  struct std___Vector_base_int__std__allocator_int__* this917;
  this917 = v915;
  struct std___Vector_base_int__std__allocator_int__* t918 = this917;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base919 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t918->_M_impl) + 0);
    int* t920 = base919->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base921 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t918->_M_impl) + 0);
    int* t922 = base921->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base923 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t918->_M_impl) + 0);
    int* t924 = base923->_M_start;
    long diff925 = t922 - t924;
    unsigned long cast926 = (unsigned long)diff925;
    std___Vector_base_int__std__allocator_int______M_deallocate(t918, t920, cast926);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t918->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v927, struct std____new_allocator_int_* v928) {
bb929:
  struct std____new_allocator_int_* this930;
  struct std____new_allocator_int_* unnamed931;
  this930 = v927;
  unnamed931 = v928;
  struct std____new_allocator_int_* t932 = this930;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v933) {
bb934:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this935;
  this935 = v933;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t936 = this935;
  int* c937 = ((void*)0);
  t936->_M_start = c937;
  int* c938 = ((void*)0);
  t936->_M_finish = c938;
  int* c939 = ((void*)0);
  t936->_M_end_of_storage = c939;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v940) {
bb941:
  int* __location942;
  __location942 = v940;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v943, int* v944) {
bb945:
  int* __first946;
  int* __last947;
  __first946 = v943;
  __last947 = v944;
      _Bool r948 = std____is_constant_evaluated();
      if (r948) {
          while (1) {
            int* t950 = __first946;
            int* t951 = __last947;
            _Bool c952 = ((t950 != t951)) ? 1 : 0;
            if (!c952) break;
            int* t953 = __first946;
            void_std__destroy_at_int_(t953);
          for_step949: ;
            int* t954 = __first946;
            int c955 = 1;
            int* ptr956 = &(t954)[c955];
            __first946 = ptr956;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v957, int* v958, struct std__allocator_int_* v959) {
bb960:
  int* __first961;
  int* __last962;
  struct std__allocator_int_* unnamed963;
  __first961 = v957;
  __last962 = v958;
  unnamed963 = v959;
  int* t964 = __first961;
  int* t965 = __last962;
  void_std___Destroy_int__(t964, t965);
  return;
}

