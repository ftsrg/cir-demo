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

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[1] == 30";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm29/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[7] == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______remove_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, int* p3);
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

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v23) {
bb24:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this25;
  this25 = v23;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t26 = this25;
  int* c27 = ((void*)0);
  t26->_M_current = c27;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v28, int v29) {
bb30:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this31;
  int unnamed32;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval33;
  int* ref_tmp034;
  this31 = v28;
  unnamed32 = v29;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t35 = this31;
  int* t36 = t35->_M_current;
  int c37 = 1;
  int* ptr38 = &(t36)[c37];
  t35->_M_current = ptr38;
  ref_tmp034 = t36;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval33, &ref_tmp034);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t39 = __retval33;
  return t39;
}

// function: _Z11remove_copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET0_PT_S9_S7_RKT1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______remove_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* v40, int* v41, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v42, int* v43) {
bb44:
  int* first45;
  int* last46;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest47;
  int* val48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval49;
  first45 = v40;
  last46 = v41;
  dest47 = v42;
  val48 = v43;
    while (1) {
      int* t51 = first45;
      int* t52 = last46;
      _Bool c53 = ((t51 != t52)) ? 1 : 0;
      if (!c53) break;
        int* t54 = first45;
        int t55 = *t54;
        int* t56 = val48;
        int t57 = *t56;
        _Bool c58 = ((t55 == t57)) ? 1 : 0;
        _Bool u59 = !c58;
        if (u59) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp060;
          int* t61 = first45;
          int t62 = *t61;
          int c63 = 0;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r64 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest47, c63);
          ref_tmp060 = r64;
          int* r65 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp060);
          *r65 = t62;
        }
    for_step50: ;
      int* t66 = first45;
      int c67 = 1;
      int* ptr68 = &(t66)[c67];
      first45 = ptr68;
    }
  __retval49 = dest47; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t69 = __retval49;
  return t69;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v70, int** v71) {
bb72:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this73;
  int** __i74;
  this73 = v70;
  __i74 = v71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t75 = this73;
  int** t76 = __i74;
  int* t77 = *t76;
  t75->_M_current = t77;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v78) {
bb79:
  struct std__vector_int__std__allocator_int__* this80;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval81;
  this80 = v78;
  struct std__vector_int__std__allocator_int__* t82 = this80;
  struct std___Vector_base_int__std__allocator_int__* base83 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t82 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base84 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base83->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval81, &base84->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t85 = __retval81;
  return t85;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v86) {
bb87:
  struct std__vector_int__std__allocator_int__* this88;
  unsigned long __retval89;
  long __dif90;
  this88 = v86;
  struct std__vector_int__std__allocator_int__* t91 = this88;
  struct std___Vector_base_int__std__allocator_int__* base92 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base93 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base92->_M_impl) + 0);
  int* t94 = base93->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base95 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base96 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base95->_M_impl) + 0);
  int* t97 = base96->_M_start;
  long diff98 = t94 - t97;
  __dif90 = diff98;
    long t99 = __dif90;
    long c100 = 0;
    _Bool c101 = ((t99 < c100)) ? 1 : 0;
    if (c101) {
      __builtin_unreachable();
    }
  long t102 = __dif90;
  unsigned long cast103 = (unsigned long)t102;
  __retval89 = cast103;
  unsigned long t104 = __retval89;
  return t104;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v105, unsigned long v106) {
bb107:
  struct std__vector_int__std__allocator_int__* this108;
  unsigned long __n109;
  int* __retval110;
  this108 = v105;
  __n109 = v106;
  struct std__vector_int__std__allocator_int__* t111 = this108;
    do {
          unsigned long t112 = __n109;
          unsigned long r113 = std__vector_int__std__allocator_int_____size___const(t111);
          _Bool c114 = ((t112 < r113)) ? 1 : 0;
          _Bool u115 = !c114;
          if (u115) {
            char* cast116 = (char*)&(_str_6);
            int c117 = 1263;
            char* cast118 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast119 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast116, c117, cast118, cast119);
          }
      _Bool c120 = 0;
      if (!c120) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t111 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base121->_M_impl) + 0);
  int* t123 = base122->_M_start;
  unsigned long t124 = __n109;
  int* ptr125 = &(t123)[t124];
  __retval110 = ptr125;
  int* t126 = __retval110;
  return t126;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v127, int v128) {
bb129:
  int __a130;
  int __b131;
  int __retval132;
  __a130 = v127;
  __b131 = v128;
  int t133 = __a130;
  int t134 = __b131;
  int b135 = t133 | t134;
  __retval132 = b135;
  int t136 = __retval132;
  return t136;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v137) {
bb138:
  struct std__basic_ios_char__std__char_traits_char__* this139;
  int __retval140;
  this139 = v137;
  struct std__basic_ios_char__std__char_traits_char__* t141 = this139;
  struct std__ios_base* base142 = (struct std__ios_base*)((char *)t141 + 0);
  int t143 = base142->_M_streambuf_state;
  __retval140 = t143;
  int t144 = __retval140;
  return t144;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v145, int v146) {
bb147:
  struct std__basic_ios_char__std__char_traits_char__* this148;
  int __state149;
  this148 = v145;
  __state149 = v146;
  struct std__basic_ios_char__std__char_traits_char__* t150 = this148;
  int r151 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t150);
  int t152 = __state149;
  int r153 = std__operator_(r151, t152);
  std__basic_ios_char__std__char_traits_char_____clear(t150, r153);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v154, char* v155) {
bb156:
  char* __c1157;
  char* __c2158;
  _Bool __retval159;
  __c1157 = v154;
  __c2158 = v155;
  char* t160 = __c1157;
  char t161 = *t160;
  int cast162 = (int)t161;
  char* t163 = __c2158;
  char t164 = *t163;
  int cast165 = (int)t164;
  _Bool c166 = ((cast162 == cast165)) ? 1 : 0;
  __retval159 = c166;
  _Bool t167 = __retval159;
  return t167;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v168) {
bb169:
  char* __p170;
  unsigned long __retval171;
  unsigned long __i172;
  __p170 = v168;
  unsigned long c173 = 0;
  __i172 = c173;
    char ref_tmp0174;
    while (1) {
      unsigned long t175 = __i172;
      char* t176 = __p170;
      char* ptr177 = &(t176)[t175];
      char c178 = 0;
      ref_tmp0174 = c178;
      _Bool r179 = __gnu_cxx__char_traits_char___eq(ptr177, &ref_tmp0174);
      _Bool u180 = !r179;
      if (!u180) break;
      unsigned long t181 = __i172;
      unsigned long u182 = t181 + 1;
      __i172 = u182;
    }
  unsigned long t183 = __i172;
  __retval171 = t183;
  unsigned long t184 = __retval171;
  return t184;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v185) {
bb186:
  char* __s187;
  unsigned long __retval188;
  __s187 = v185;
    _Bool r189 = std____is_constant_evaluated();
    if (r189) {
      char* t190 = __s187;
      unsigned long r191 = __gnu_cxx__char_traits_char___length(t190);
      __retval188 = r191;
      unsigned long t192 = __retval188;
      return t192;
    }
  char* t193 = __s187;
  unsigned long r194 = strlen(t193);
  __retval188 = r194;
  unsigned long t195 = __retval188;
  return t195;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v196, char* v197) {
bb198:
  struct std__basic_ostream_char__std__char_traits_char__* __out199;
  char* __s200;
  struct std__basic_ostream_char__std__char_traits_char__* __retval201;
  __out199 = v196;
  __s200 = v197;
    char* t202 = __s200;
    _Bool cast203 = (_Bool)t202;
    _Bool u204 = !cast203;
    if (u204) {
      struct std__basic_ostream_char__std__char_traits_char__* t205 = __out199;
      void** v206 = (void**)t205;
      void* v207 = *((void**)v206);
      unsigned char* cast208 = (unsigned char*)v207;
      long c209 = -24;
      unsigned char* ptr210 = &(cast208)[c209];
      long* cast211 = (long*)ptr210;
      long t212 = *cast211;
      unsigned char* cast213 = (unsigned char*)t205;
      unsigned char* ptr214 = &(cast213)[t212];
      struct std__basic_ostream_char__std__char_traits_char__* cast215 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr214;
      struct std__basic_ios_char__std__char_traits_char__* cast216 = (struct std__basic_ios_char__std__char_traits_char__*)cast215;
      int t217 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast216, t217);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t218 = __out199;
      char* t219 = __s200;
      char* t220 = __s200;
      unsigned long r221 = std__char_traits_char___length(t220);
      long cast222 = (long)r221;
      struct std__basic_ostream_char__std__char_traits_char__* r223 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t218, t219, cast222);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t224 = __out199;
  __retval201 = t224;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = __retval201;
  return t225;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v226, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v227) {
bb228:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this229;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed230;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval231;
  this229 = v226;
  unnamed230 = v227;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t232 = this229;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t233 = unnamed230;
  int* t234 = t233->_M_current;
  t232->_M_current = t234;
  __retval231 = t232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t235 = __retval231;
  return t235;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v236) {
bb237:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this238;
  int** __retval239;
  this238 = v236;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t240 = this238;
  __retval239 = &t240->_M_current;
  int** t241 = __retval239;
  return t241;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v242, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v243) {
bb244:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs246;
  _Bool __retval247;
  __lhs245 = v242;
  __rhs246 = v243;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t248 = __lhs245;
  int** r249 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t248);
  int* t250 = *r249;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t251 = __rhs246;
  int** r252 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t251);
  int* t253 = *r252;
  _Bool c254 = ((t250 == t253)) ? 1 : 0;
  __retval247 = c254;
  _Bool t255 = __retval247;
  return t255;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v256) {
bb257:
  struct std__vector_int__std__allocator_int__* this258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval259;
  this258 = v256;
  struct std__vector_int__std__allocator_int__* t260 = this258;
  struct std___Vector_base_int__std__allocator_int__* base261 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t260 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base262 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base261->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval259, &base262->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t263 = __retval259;
  return t263;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v264) {
bb265:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this266;
  int* __retval267;
  this266 = v264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t268 = this266;
  int* t269 = t268->_M_current;
  __retval267 = t269;
  int* t270 = __retval267;
  return t270;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v271) {
bb272:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval274;
  this273 = v271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t275 = this273;
  int* t276 = t275->_M_current;
  int c277 = 1;
  int* ptr278 = &(t276)[c277];
  t275->_M_current = ptr278;
  __retval274 = t275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t279 = __retval274;
  return t279;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v280, void* v281) {
bb282:
  struct std__basic_ostream_char__std__char_traits_char__* this283;
  void* __pf284;
  struct std__basic_ostream_char__std__char_traits_char__* __retval285;
  this283 = v280;
  __pf284 = v281;
  struct std__basic_ostream_char__std__char_traits_char__* t286 = this283;
  void* t287 = __pf284;
  struct std__basic_ostream_char__std__char_traits_char__* r288 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t287)(t286);
  __retval285 = r288;
  struct std__basic_ostream_char__std__char_traits_char__* t289 = __retval285;
  return t289;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v290) {
bb291:
  struct std__basic_ostream_char__std__char_traits_char__* __os292;
  struct std__basic_ostream_char__std__char_traits_char__* __retval293;
  __os292 = v290;
  struct std__basic_ostream_char__std__char_traits_char__* t294 = __os292;
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__flush(t294);
  __retval293 = r295;
  struct std__basic_ostream_char__std__char_traits_char__* t296 = __retval293;
  return t296;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v297) {
bb298:
  struct std__ctype_char_* __f299;
  struct std__ctype_char_* __retval300;
  __f299 = v297;
    struct std__ctype_char_* t301 = __f299;
    _Bool cast302 = (_Bool)t301;
    _Bool u303 = !cast302;
    if (u303) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t304 = __f299;
  __retval300 = t304;
  struct std__ctype_char_* t305 = __retval300;
  return t305;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v306, char v307) {
bb308:
  struct std__ctype_char_* this309;
  char __c310;
  char __retval311;
  this309 = v306;
  __c310 = v307;
  struct std__ctype_char_* t312 = this309;
    char t313 = t312->_M_widen_ok;
    _Bool cast314 = (_Bool)t313;
    if (cast314) {
      char t315 = __c310;
      unsigned char cast316 = (unsigned char)t315;
      unsigned long cast317 = (unsigned long)cast316;
      char t318 = t312->_M_widen[cast317];
      __retval311 = t318;
      char t319 = __retval311;
      return t319;
    }
  std__ctype_char____M_widen_init___const(t312);
  char t320 = __c310;
  void** v321 = (void**)t312;
  void* v322 = *((void**)v321);
  char vcall325 = (char)__VERIFIER_virtual_call_char_char(t312, 6, t320);
  __retval311 = vcall325;
  char t326 = __retval311;
  return t326;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v327, char v328) {
bb329:
  struct std__basic_ios_char__std__char_traits_char__* this330;
  char __c331;
  char __retval332;
  this330 = v327;
  __c331 = v328;
  struct std__basic_ios_char__std__char_traits_char__* t333 = this330;
  struct std__ctype_char_* t334 = t333->_M_ctype;
  struct std__ctype_char_* r335 = std__ctype_char__const__std____check_facet_std__ctype_char___(t334);
  char t336 = __c331;
  char r337 = std__ctype_char___widen_char__const(r335, t336);
  __retval332 = r337;
  char t338 = __retval332;
  return t338;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v339) {
bb340:
  struct std__basic_ostream_char__std__char_traits_char__* __os341;
  struct std__basic_ostream_char__std__char_traits_char__* __retval342;
  __os341 = v339;
  struct std__basic_ostream_char__std__char_traits_char__* t343 = __os341;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __os341;
  void** v345 = (void**)t344;
  void* v346 = *((void**)v345);
  unsigned char* cast347 = (unsigned char*)v346;
  long c348 = -24;
  unsigned char* ptr349 = &(cast347)[c348];
  long* cast350 = (long*)ptr349;
  long t351 = *cast350;
  unsigned char* cast352 = (unsigned char*)t344;
  unsigned char* ptr353 = &(cast352)[t351];
  struct std__basic_ostream_char__std__char_traits_char__* cast354 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr353;
  struct std__basic_ios_char__std__char_traits_char__* cast355 = (struct std__basic_ios_char__std__char_traits_char__*)cast354;
  char c356 = 10;
  char r357 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast355, c356);
  struct std__basic_ostream_char__std__char_traits_char__* r358 = std__ostream__put(t343, r357);
  struct std__basic_ostream_char__std__char_traits_char__* r359 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r358);
  __retval342 = r359;
  struct std__basic_ostream_char__std__char_traits_char__* t360 = __retval342;
  return t360;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v361) {
bb362:
  struct std__vector_int__std__allocator_int__* this363;
  this363 = v361;
  struct std__vector_int__std__allocator_int__* t364 = this363;
    struct std___Vector_base_int__std__allocator_int__* base365 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t364 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base366 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base365->_M_impl) + 0);
    int* t367 = base366->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base368 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t364 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base369 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base368->_M_impl) + 0);
    int* t370 = base369->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base371 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t364 + 0);
    struct std__allocator_int_* r372 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base371);
    void_std___Destroy_int___int_(t367, t370, r372);
  {
    struct std___Vector_base_int__std__allocator_int__* base373 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t364 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base373);
  }
  return;
}

// function: main
int main() {
bb374:
  int __retval375;
  int myints376[8];
  struct std__vector_int__std__allocator_int__ myvector377;
  struct std__allocator_int_ ref_tmp0378;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it379;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0380;
  int ref_tmp1381;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1382;
  int c383 = 0;
  __retval375 = c383;
  // array copy
  __builtin_memcpy(myints376, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  unsigned long c384 = 8;
  std__allocator_int___allocator_2(&ref_tmp0378);
    std__vector_int__std__allocator_int_____vector(&myvector377, c384, &ref_tmp0378);
  {
    std__allocator_int____allocator(&ref_tmp0378);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it379);
    int* cast385 = (int*)&(myints376);
    int* cast386 = (int*)&(myints376);
    int c387 = 8;
    int* ptr388 = &(cast386)[c387];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r389 = std__vector_int__std__allocator_int_____begin(&myvector377);
    agg_tmp0380 = r389;
    int c390 = 20;
    ref_tmp1381 = c390;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t391 = agg_tmp0380;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r392 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______remove_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(cast385, ptr388, t391, &ref_tmp1381);
    agg_tmp1382 = r392;
    unsigned long c393 = 1;
    int* r394 = std__vector_int__std__allocator_int_____operator__(&myvector377, c393);
    int t395 = *r394;
    int c396 = 30;
    _Bool c397 = ((t395 == c396)) ? 1 : 0;
    if (c397) {
    } else {
      char* cast398 = (char*)&(_str);
      char* c399 = _str_1;
      unsigned int c400 = 36;
      char* cast401 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast398, c399, c400, cast401);
    }
    unsigned long c402 = 7;
    int* r403 = std__vector_int__std__allocator_int_____operator__(&myvector377, c402);
    int t404 = *r403;
    int c405 = 0;
    _Bool c406 = ((t404 == c405)) ? 1 : 0;
    if (c406) {
    } else {
      char* cast407 = (char*)&(_str_2);
      char* c408 = _str_1;
      unsigned int c409 = 37;
      char* cast410 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast407, c408, c409, cast410);
    }
    char* cast411 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r412 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast411);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2413;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3414;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r415 = std__vector_int__std__allocator_int_____begin(&myvector377);
      ref_tmp2413 = r415;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r416 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it379, &ref_tmp2413);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r418 = std__vector_int__std__allocator_int_____end(&myvector377);
        ref_tmp3414 = r418;
        _Bool r419 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it379, &ref_tmp3414);
        _Bool u420 = !r419;
        if (!u420) break;
        char* cast421 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r422 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast421);
        int* r423 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it379);
        int t424 = *r423;
        struct std__basic_ostream_char__std__char_traits_char__* r425 = std__ostream__operator__(r422, t424);
      for_step417: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r426 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it379);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r427 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c428 = 0;
    __retval375 = c428;
    int t429 = __retval375;
    int ret_val430 = t429;
    {
      std__vector_int__std__allocator_int______vector(&myvector377);
    }
    return ret_val430;
  int t431 = __retval375;
  return t431;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v432) {
bb433:
  struct std____new_allocator_int_* this434;
  this434 = v432;
  struct std____new_allocator_int_* t435 = this434;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v436, unsigned long* v437) {
bb438:
  unsigned long* __a439;
  unsigned long* __b440;
  unsigned long* __retval441;
  __a439 = v436;
  __b440 = v437;
    unsigned long* t442 = __b440;
    unsigned long t443 = *t442;
    unsigned long* t444 = __a439;
    unsigned long t445 = *t444;
    _Bool c446 = ((t443 < t445)) ? 1 : 0;
    if (c446) {
      unsigned long* t447 = __b440;
      __retval441 = t447;
      unsigned long* t448 = __retval441;
      return t448;
    }
  unsigned long* t449 = __a439;
  __retval441 = t449;
  unsigned long* t450 = __retval441;
  return t450;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v451) {
bb452:
  struct std__allocator_int_* __a453;
  unsigned long __retval454;
  unsigned long __diffmax455;
  unsigned long __allocmax456;
  __a453 = v451;
  unsigned long c457 = 2305843009213693951;
  __diffmax455 = c457;
  unsigned long c458 = 4611686018427387903;
  __allocmax456 = c458;
  unsigned long* r459 = unsigned_long_const__std__min_unsigned_long_(&__diffmax455, &__allocmax456);
  unsigned long t460 = *r459;
  __retval454 = t460;
  unsigned long t461 = __retval454;
  return t461;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v462, struct std__allocator_int_* v463) {
bb464:
  struct std__allocator_int_* this465;
  struct std__allocator_int_* __a466;
  this465 = v462;
  __a466 = v463;
  struct std__allocator_int_* t467 = this465;
  struct std____new_allocator_int_* base468 = (struct std____new_allocator_int_*)((char *)t467 + 0);
  struct std__allocator_int_* t469 = __a466;
  struct std____new_allocator_int_* base470 = (struct std____new_allocator_int_*)((char *)t469 + 0);
  std____new_allocator_int_____new_allocator(base468, base470);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v471, struct std__allocator_int_* v472) {
bb473:
  unsigned long __n474;
  struct std__allocator_int_* __a475;
  unsigned long __retval476;
  __n474 = v471;
  __a475 = v472;
    struct std__allocator_int_ ref_tmp0477;
    _Bool tmp_exprcleanup478;
    unsigned long t479 = __n474;
    struct std__allocator_int_* t480 = __a475;
    std__allocator_int___allocator(&ref_tmp0477, t480);
      unsigned long r481 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0477);
      _Bool c482 = ((t479 > r481)) ? 1 : 0;
      tmp_exprcleanup478 = c482;
    {
      std__allocator_int____allocator(&ref_tmp0477);
    }
    _Bool t483 = tmp_exprcleanup478;
    if (t483) {
      char* cast484 = (char*)&(_str_5);
      std____throw_length_error(cast484);
    }
  unsigned long t485 = __n474;
  __retval476 = t485;
  unsigned long t486 = __retval476;
  return t486;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v487, struct std__allocator_int_* v488) {
bb489:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this490;
  struct std__allocator_int_* __a491;
  this490 = v487;
  __a491 = v488;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t492 = this490;
  struct std__allocator_int_* base493 = (struct std__allocator_int_*)((char *)t492 + 0);
  struct std__allocator_int_* t494 = __a491;
  std__allocator_int___allocator(base493, t494);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base495 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t492 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base495);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb496:
  _Bool __retval497;
    _Bool c498 = 0;
    __retval497 = c498;
    _Bool t499 = __retval497;
    return t499;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v500) {
bb501:
  struct std____new_allocator_int_* this502;
  unsigned long __retval503;
  this502 = v500;
  struct std____new_allocator_int_* t504 = this502;
  unsigned long c505 = 9223372036854775807;
  unsigned long c506 = 4;
  unsigned long b507 = c505 / c506;
  __retval503 = b507;
  unsigned long t508 = __retval503;
  return t508;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v509, unsigned long v510, void* v511) {
bb512:
  struct std____new_allocator_int_* this513;
  unsigned long __n514;
  void* unnamed515;
  int* __retval516;
  this513 = v509;
  __n514 = v510;
  unnamed515 = v511;
  struct std____new_allocator_int_* t517 = this513;
    unsigned long t518 = __n514;
    unsigned long r519 = std____new_allocator_int____M_max_size___const(t517);
    _Bool c520 = ((t518 > r519)) ? 1 : 0;
    if (c520) {
        unsigned long t521 = __n514;
        unsigned long c522 = -1;
        unsigned long c523 = 4;
        unsigned long b524 = c522 / c523;
        _Bool c525 = ((t521 > b524)) ? 1 : 0;
        if (c525) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c526 = 4;
    unsigned long c527 = 16;
    _Bool c528 = ((c526 > c527)) ? 1 : 0;
    if (c528) {
      unsigned long __al529;
      unsigned long c530 = 4;
      __al529 = c530;
      unsigned long t531 = __n514;
      unsigned long c532 = 4;
      unsigned long b533 = t531 * c532;
      unsigned long t534 = __al529;
      void* r535 = operator_new_2(b533, t534);
      int* cast536 = (int*)r535;
      __retval516 = cast536;
      int* t537 = __retval516;
      return t537;
    }
  unsigned long t538 = __n514;
  unsigned long c539 = 4;
  unsigned long b540 = t538 * c539;
  void* r541 = operator_new(b540);
  int* cast542 = (int*)r541;
  __retval516 = cast542;
  int* t543 = __retval516;
  return t543;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v544, unsigned long v545) {
bb546:
  struct std__allocator_int_* this547;
  unsigned long __n548;
  int* __retval549;
  this547 = v544;
  __n548 = v545;
  struct std__allocator_int_* t550 = this547;
    _Bool r551 = std____is_constant_evaluated();
    if (r551) {
        unsigned long t552 = __n548;
        unsigned long c553 = 4;
        unsigned long ovr554;
        _Bool ovf555 = __builtin_mul_overflow(t552, c553, &ovr554);
        __n548 = ovr554;
        if (ovf555) {
          std____throw_bad_array_new_length();
        }
      unsigned long t556 = __n548;
      void* r557 = operator_new(t556);
      int* cast558 = (int*)r557;
      __retval549 = cast558;
      int* t559 = __retval549;
      return t559;
    }
  struct std____new_allocator_int_* base560 = (struct std____new_allocator_int_*)((char *)t550 + 0);
  unsigned long t561 = __n548;
  void* c562 = ((void*)0);
  int* r563 = std____new_allocator_int___allocate(base560, t561, c562);
  __retval549 = r563;
  int* t564 = __retval549;
  return t564;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v565, unsigned long v566) {
bb567:
  struct std__allocator_int_* __a568;
  unsigned long __n569;
  int* __retval570;
  __a568 = v565;
  __n569 = v566;
  struct std__allocator_int_* t571 = __a568;
  unsigned long t572 = __n569;
  int* r573 = std__allocator_int___allocate(t571, t572);
  __retval570 = r573;
  int* t574 = __retval570;
  return t574;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v575, unsigned long v576) {
bb577:
  struct std___Vector_base_int__std__allocator_int__* this578;
  unsigned long __n579;
  int* __retval580;
  this578 = v575;
  __n579 = v576;
  struct std___Vector_base_int__std__allocator_int__* t581 = this578;
  unsigned long t582 = __n579;
  unsigned long c583 = 0;
  _Bool c584 = ((t582 != c583)) ? 1 : 0;
  int* ternary585;
  if (c584) {
    struct std__allocator_int_* base586 = (struct std__allocator_int_*)((char *)&(t581->_M_impl) + 0);
    unsigned long t587 = __n579;
    int* r588 = std__allocator_traits_std__allocator_int_____allocate(base586, t587);
    ternary585 = (int*)r588;
  } else {
    int* c589 = ((void*)0);
    ternary585 = (int*)c589;
  }
  __retval580 = ternary585;
  int* t590 = __retval580;
  return t590;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v591, unsigned long v592) {
bb593:
  struct std___Vector_base_int__std__allocator_int__* this594;
  unsigned long __n595;
  this594 = v591;
  __n595 = v592;
  struct std___Vector_base_int__std__allocator_int__* t596 = this594;
  unsigned long t597 = __n595;
  int* r598 = std___Vector_base_int__std__allocator_int______M_allocate(t596, t597);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base599 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t596->_M_impl) + 0);
  base599->_M_start = r598;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base600 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t596->_M_impl) + 0);
  int* t601 = base600->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base602 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t596->_M_impl) + 0);
  base602->_M_finish = t601;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base603 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t596->_M_impl) + 0);
  int* t604 = base603->_M_start;
  unsigned long t605 = __n595;
  int* ptr606 = &(t604)[t605];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base607 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t596->_M_impl) + 0);
  base607->_M_end_of_storage = ptr606;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v608) {
bb609:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this610;
  this610 = v608;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t611 = this610;
  {
    struct std__allocator_int_* base612 = (struct std__allocator_int_*)((char *)t611 + 0);
    std__allocator_int____allocator(base612);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v613, unsigned long v614, struct std__allocator_int_* v615) {
bb616:
  struct std___Vector_base_int__std__allocator_int__* this617;
  unsigned long __n618;
  struct std__allocator_int_* __a619;
  this617 = v613;
  __n618 = v614;
  __a619 = v615;
  struct std___Vector_base_int__std__allocator_int__* t620 = this617;
  struct std__allocator_int_* t621 = __a619;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t620->_M_impl, t621);
    unsigned long t622 = __n618;
    std___Vector_base_int__std__allocator_int______M_create_storage(t620, t622);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb623:
  _Bool __retval624;
    _Bool c625 = 0;
    __retval624 = c625;
    _Bool t626 = __retval624;
    return t626;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v627, int** v628) {
bb629:
  struct std___UninitDestroyGuard_int____void_* this630;
  int** __first631;
  this630 = v627;
  __first631 = v628;
  struct std___UninitDestroyGuard_int____void_* t632 = this630;
  int** t633 = __first631;
  int* t634 = *t633;
  t632->_M_first = t634;
  int** t635 = __first631;
  t632->_M_cur = t635;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v636) {
bb637:
  int* __location638;
  int* __retval639;
  void* __loc640;
  __location638 = v636;
  int* t641 = __location638;
  void* cast642 = (void*)t641;
  __loc640 = cast642;
    void* t643 = __loc640;
    int* cast644 = (int*)t643;
    int c645 = 0;
    *cast644 = c645;
    __retval639 = cast644;
    int* t646 = __retval639;
    return t646;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v647) {
bb648:
  int* __p649;
  __p649 = v647;
    _Bool r650 = std____is_constant_evaluated();
    if (r650) {
      int* t651 = __p649;
      int* r652 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t651);
      return;
    }
  int* t653 = __p649;
  void* cast654 = (void*)t653;
  int* cast655 = (int*)cast654;
  int c656 = 0;
  *cast655 = c656;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v657) {
bb658:
  struct std___UninitDestroyGuard_int____void_* this659;
  this659 = v657;
  struct std___UninitDestroyGuard_int____void_* t660 = this659;
  int** c661 = ((void*)0);
  t660->_M_cur = c661;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v662) {
bb663:
  struct std___UninitDestroyGuard_int____void_* this664;
  this664 = v662;
  struct std___UninitDestroyGuard_int____void_* t665 = this664;
    int** t666 = t665->_M_cur;
    int** c667 = ((void*)0);
    _Bool c668 = ((t666 != c667)) ? 1 : 0;
    if (c668) {
      int* t669 = t665->_M_first;
      int** t670 = t665->_M_cur;
      int* t671 = *t670;
      void_std___Destroy_int__(t669, t671);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v672, unsigned long v673) {
bb674:
  int* __first675;
  unsigned long __n676;
  int* __retval677;
  struct std___UninitDestroyGuard_int____void_ __guard678;
  __first675 = v672;
  __n676 = v673;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard678, &__first675);
      while (1) {
        unsigned long t680 = __n676;
        unsigned long c681 = 0;
        _Bool c682 = ((t680 > c681)) ? 1 : 0;
        if (!c682) break;
        int* t683 = __first675;
        void_std___Construct_int_(t683);
      for_step679: ;
        unsigned long t684 = __n676;
        unsigned long u685 = t684 - 1;
        __n676 = u685;
        int* t686 = __first675;
        int c687 = 1;
        int* ptr688 = &(t686)[c687];
        __first675 = ptr688;
      }
    std___UninitDestroyGuard_int___void___release(&__guard678);
    int* t689 = __first675;
    __retval677 = t689;
    int* t690 = __retval677;
    int* ret_val691 = t690;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard678);
    }
    return ret_val691;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v692, int* v693, int* v694) {
bb695:
  int* __first696;
  int* __last697;
  int* __value698;
  _Bool __load_outside_loop699;
  int __val700;
  __first696 = v692;
  __last697 = v693;
  __value698 = v694;
  _Bool c701 = 1;
  __load_outside_loop699 = c701;
  int* t702 = __value698;
  int t703 = *t702;
  __val700 = t703;
    while (1) {
      int* t705 = __first696;
      int* t706 = __last697;
      _Bool c707 = ((t705 != t706)) ? 1 : 0;
      if (!c707) break;
      int t708 = __val700;
      int* t709 = __first696;
      *t709 = t708;
    for_step704: ;
      int* t710 = __first696;
      int c711 = 1;
      int* ptr712 = &(t710)[c711];
      __first696 = ptr712;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v713, int* v714, int* v715) {
bb716:
  int* __first717;
  int* __last718;
  int* __value719;
  __first717 = v713;
  __last718 = v714;
  __value719 = v715;
  int* t720 = __first717;
  int* t721 = __last718;
  int* t722 = __value719;
  void_std____fill_a1_int___int_(t720, t721, t722);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v723, unsigned long v724, int* v725, struct std__random_access_iterator_tag v726) {
bb727:
  int* __first728;
  unsigned long __n729;
  int* __value730;
  struct std__random_access_iterator_tag unnamed731;
  int* __retval732;
  __first728 = v723;
  __n729 = v724;
  __value730 = v725;
  unnamed731 = v726;
    unsigned long t733 = __n729;
    unsigned long c734 = 0;
    _Bool c735 = ((t733 <= c734)) ? 1 : 0;
    if (c735) {
      int* t736 = __first728;
      __retval732 = t736;
      int* t737 = __retval732;
      return t737;
    }
  int* t738 = __first728;
  int* t739 = __first728;
  unsigned long t740 = __n729;
  int* ptr741 = &(t739)[t740];
  int* t742 = __value730;
  void_std____fill_a_int___int_(t738, ptr741, t742);
  int* t743 = __first728;
  unsigned long t744 = __n729;
  int* ptr745 = &(t743)[t744];
  __retval732 = ptr745;
  int* t746 = __retval732;
  return t746;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v747) {
bb748:
  unsigned long __n749;
  unsigned long __retval750;
  __n749 = v747;
  unsigned long t751 = __n749;
  __retval750 = t751;
  unsigned long t752 = __retval750;
  return t752;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v753) {
bb754:
  int** unnamed755;
  struct std__random_access_iterator_tag __retval756;
  unnamed755 = v753;
  struct std__random_access_iterator_tag t757 = __retval756;
  return t757;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v758, unsigned long v759, int* v760) {
bb761:
  int* __first762;
  unsigned long __n763;
  int* __value764;
  int* __retval765;
  struct std__random_access_iterator_tag agg_tmp0766;
  __first762 = v758;
  __n763 = v759;
  __value764 = v760;
  int* t767 = __first762;
  unsigned long t768 = __n763;
  unsigned long r769 = std____size_to_integer(t768);
  int* t770 = __value764;
  struct std__random_access_iterator_tag r771 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first762);
  agg_tmp0766 = r771;
  struct std__random_access_iterator_tag t772 = agg_tmp0766;
  int* r773 = int__std____fill_n_a_int___unsigned_long__int_(t767, r769, t770, t772);
  __retval765 = r773;
  int* t774 = __retval765;
  return t774;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v775, unsigned long v776) {
bb777:
  int* __first778;
  unsigned long __n779;
  int* __retval780;
  __first778 = v775;
  __n779 = v776;
    unsigned long t781 = __n779;
    unsigned long c782 = 0;
    _Bool c783 = ((t781 > c782)) ? 1 : 0;
    if (c783) {
      int* __val784;
      int* t785 = __first778;
      __val784 = t785;
      int* t786 = __val784;
      void_std___Construct_int_(t786);
      int* t787 = __first778;
      int c788 = 1;
      int* ptr789 = &(t787)[c788];
      __first778 = ptr789;
      int* t790 = __first778;
      unsigned long t791 = __n779;
      unsigned long c792 = 1;
      unsigned long b793 = t791 - c792;
      int* t794 = __val784;
      int* r795 = int__std__fill_n_int___unsigned_long__int_(t790, b793, t794);
      __first778 = r795;
    }
  int* t796 = __first778;
  __retval780 = t796;
  int* t797 = __retval780;
  return t797;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v798, unsigned long v799) {
bb800:
  int* __first801;
  unsigned long __n802;
  int* __retval803;
  _Bool __can_fill804;
  __first801 = v798;
  __n802 = v799;
    _Bool r805 = std__is_constant_evaluated();
    if (r805) {
      int* t806 = __first801;
      unsigned long t807 = __n802;
      int* r808 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t806, t807);
      __retval803 = r808;
      int* t809 = __retval803;
      return t809;
    }
  _Bool c810 = 1;
  __can_fill804 = c810;
  int* t811 = __first801;
  unsigned long t812 = __n802;
  int* r813 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t811, t812);
  __retval803 = r813;
  int* t814 = __retval803;
  return t814;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v815, unsigned long v816, struct std__allocator_int_* v817) {
bb818:
  int* __first819;
  unsigned long __n820;
  struct std__allocator_int_* unnamed821;
  int* __retval822;
  __first819 = v815;
  __n820 = v816;
  unnamed821 = v817;
  int* t823 = __first819;
  unsigned long t824 = __n820;
  int* r825 = int__std____uninitialized_default_n_int___unsigned_long_(t823, t824);
  __retval822 = r825;
  int* t826 = __retval822;
  return t826;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v827) {
bb828:
  struct std___Vector_base_int__std__allocator_int__* this829;
  struct std__allocator_int_* __retval830;
  this829 = v827;
  struct std___Vector_base_int__std__allocator_int__* t831 = this829;
  struct std__allocator_int_* base832 = (struct std__allocator_int_*)((char *)&(t831->_M_impl) + 0);
  __retval830 = base832;
  struct std__allocator_int_* t833 = __retval830;
  return t833;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v834, unsigned long v835) {
bb836:
  struct std__vector_int__std__allocator_int__* this837;
  unsigned long __n838;
  this837 = v834;
  __n838 = v835;
  struct std__vector_int__std__allocator_int__* t839 = this837;
  struct std___Vector_base_int__std__allocator_int__* base840 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base841 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base840->_M_impl) + 0);
  int* t842 = base841->_M_start;
  unsigned long t843 = __n838;
  struct std___Vector_base_int__std__allocator_int__* base844 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
  struct std__allocator_int_* r845 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base844);
  int* r846 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t842, t843, r845);
  struct std___Vector_base_int__std__allocator_int__* base847 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base848 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base847->_M_impl) + 0);
  base848->_M_finish = r846;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v849, int* v850, unsigned long v851) {
bb852:
  struct std____new_allocator_int_* this853;
  int* __p854;
  unsigned long __n855;
  this853 = v849;
  __p854 = v850;
  __n855 = v851;
  struct std____new_allocator_int_* t856 = this853;
    unsigned long c857 = 4;
    unsigned long c858 = 16;
    _Bool c859 = ((c857 > c858)) ? 1 : 0;
    if (c859) {
      int* t860 = __p854;
      void* cast861 = (void*)t860;
      unsigned long t862 = __n855;
      unsigned long c863 = 4;
      unsigned long b864 = t862 * c863;
      unsigned long c865 = 4;
      operator_delete_3(cast861, b864, c865);
      return;
    }
  int* t866 = __p854;
  void* cast867 = (void*)t866;
  unsigned long t868 = __n855;
  unsigned long c869 = 4;
  unsigned long b870 = t868 * c869;
  operator_delete_2(cast867, b870);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v871, int* v872, unsigned long v873) {
bb874:
  struct std__allocator_int_* this875;
  int* __p876;
  unsigned long __n877;
  this875 = v871;
  __p876 = v872;
  __n877 = v873;
  struct std__allocator_int_* t878 = this875;
    _Bool r879 = std____is_constant_evaluated();
    if (r879) {
      int* t880 = __p876;
      void* cast881 = (void*)t880;
      operator_delete(cast881);
      return;
    }
  struct std____new_allocator_int_* base882 = (struct std____new_allocator_int_*)((char *)t878 + 0);
  int* t883 = __p876;
  unsigned long t884 = __n877;
  std____new_allocator_int___deallocate(base882, t883, t884);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v885, int* v886, unsigned long v887) {
bb888:
  struct std__allocator_int_* __a889;
  int* __p890;
  unsigned long __n891;
  __a889 = v885;
  __p890 = v886;
  __n891 = v887;
  struct std__allocator_int_* t892 = __a889;
  int* t893 = __p890;
  unsigned long t894 = __n891;
  std__allocator_int___deallocate(t892, t893, t894);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v895, int* v896, unsigned long v897) {
bb898:
  struct std___Vector_base_int__std__allocator_int__* this899;
  int* __p900;
  unsigned long __n901;
  this899 = v895;
  __p900 = v896;
  __n901 = v897;
  struct std___Vector_base_int__std__allocator_int__* t902 = this899;
    int* t903 = __p900;
    _Bool cast904 = (_Bool)t903;
    if (cast904) {
      struct std__allocator_int_* base905 = (struct std__allocator_int_*)((char *)&(t902->_M_impl) + 0);
      int* t906 = __p900;
      unsigned long t907 = __n901;
      std__allocator_traits_std__allocator_int_____deallocate(base905, t906, t907);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v908) {
bb909:
  struct std___Vector_base_int__std__allocator_int__* this910;
  this910 = v908;
  struct std___Vector_base_int__std__allocator_int__* t911 = this910;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base912 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t911->_M_impl) + 0);
    int* t913 = base912->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base914 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t911->_M_impl) + 0);
    int* t915 = base914->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base916 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t911->_M_impl) + 0);
    int* t917 = base916->_M_start;
    long diff918 = t915 - t917;
    unsigned long cast919 = (unsigned long)diff918;
    std___Vector_base_int__std__allocator_int______M_deallocate(t911, t913, cast919);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t911->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v920, struct std____new_allocator_int_* v921) {
bb922:
  struct std____new_allocator_int_* this923;
  struct std____new_allocator_int_* unnamed924;
  this923 = v920;
  unnamed924 = v921;
  struct std____new_allocator_int_* t925 = this923;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v926) {
bb927:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this928;
  this928 = v926;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t929 = this928;
  int* c930 = ((void*)0);
  t929->_M_start = c930;
  int* c931 = ((void*)0);
  t929->_M_finish = c931;
  int* c932 = ((void*)0);
  t929->_M_end_of_storage = c932;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v933) {
bb934:
  int* __location935;
  __location935 = v933;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v936, int* v937) {
bb938:
  int* __first939;
  int* __last940;
  __first939 = v936;
  __last940 = v937;
      _Bool r941 = std____is_constant_evaluated();
      if (r941) {
          while (1) {
            int* t943 = __first939;
            int* t944 = __last940;
            _Bool c945 = ((t943 != t944)) ? 1 : 0;
            if (!c945) break;
            int* t946 = __first939;
            void_std__destroy_at_int_(t946);
          for_step942: ;
            int* t947 = __first939;
            int c948 = 1;
            int* ptr949 = &(t947)[c948];
            __first939 = ptr949;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v950, int* v951, struct std__allocator_int_* v952) {
bb953:
  int* __first954;
  int* __last955;
  struct std__allocator_int_* unnamed956;
  __first954 = v950;
  __last955 = v951;
  unnamed956 = v952;
  int* t957 = __first954;
  int* t958 = __last955;
  void_std___Destroy_int__(t957, t958);
  return;
}

