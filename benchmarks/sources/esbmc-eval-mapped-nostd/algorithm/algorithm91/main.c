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
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
char _str[9] = "*it != 0";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm91/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equal_to_iter p3, struct std__input_iterator_tag p4, struct std__forward_iterator_tag p5);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
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

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES4_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_equal_to_iter* v38, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v39, int* v40) {
bb41:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it143;
  int* __it244;
  _Bool __retval45;
  this42 = v38;
  __it143 = v39;
  __it244 = v40;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t46 = this42;
  int* r47 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it143);
  int t48 = *r47;
  int* t49 = __it244;
  int t50 = *t49;
  _Bool c51 = ((t48 == t50)) ? 1 : 0;
  __retval45 = c51;
  _Bool t52 = __retval45;
  return t52;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v53) {
bb54:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this55;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval56;
  this55 = v53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t57 = this55;
  int* t58 = t57->_M_current;
  int c59 = 1;
  int* ptr60 = &(t58)[c59];
  t57->_M_current = ptr60;
  __retval56 = t57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t61 = __retval56;
  return t61;
}

// function: _ZSt13__unique_copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops19_Iter_equal_to_iterEET0_T_SA_S9_T1_St18input_iterator_tagSt20forward_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(int* v62, int* v63, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v64, struct __gnu_cxx____ops___Iter_equal_to_iter v65, struct std__input_iterator_tag v66, struct std__forward_iterator_tag v67) {
bb68:
  int* __first69;
  int* __last70;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result71;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred72;
  struct std__input_iterator_tag unnamed73;
  struct std__forward_iterator_tag unnamed74;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval75;
  __first69 = v62;
  __last70 = v63;
  __result71 = v64;
  __binary_pred72 = v65;
  unnamed73 = v66;
  unnamed74 = v67;
  int* t76 = __first69;
  int t77 = *t76;
  int* r78 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result71);
  *r78 = t77;
    while (1) {
      int* t79 = __first69;
      int c80 = 1;
      int* ptr81 = &(t79)[c80];
      __first69 = ptr81;
      int* t82 = __last70;
      _Bool c83 = ((ptr81 != t82)) ? 1 : 0;
      if (!c83) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp084;
        agg_tmp084 = __result71; // copy
        int* t85 = __first69;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t86 = agg_tmp084;
        _Bool r87 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(&__binary_pred72, t86, t85);
        _Bool u88 = !r87;
        if (u88) {
          int* t89 = __first69;
          int t90 = *t89;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r91 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result71);
          int* r92 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r91);
          *r92 = t90;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r93 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result71);
  __retval75 = *r93; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = __retval75;
  return t94;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb95:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval96;
  struct __gnu_cxx____ops___Iter_equal_to_iter t97 = __retval96;
  return t97;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v98) {
bb99:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed100;
  struct std__random_access_iterator_tag __retval101;
  unnamed100 = v98;
  struct std__random_access_iterator_tag t102 = __retval101;
  return t102;
}

// function: _ZSt11unique_copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v103, int* v104, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v105) {
bb106:
  int* __first107;
  int* __last108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0111;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp1112;
  struct std__input_iterator_tag agg_tmp2113;
  struct std__random_access_iterator_tag ref_tmp0114;
  struct std__forward_iterator_tag agg_tmp3115;
  struct std__random_access_iterator_tag ref_tmp1116;
  __first107 = v103;
  __last108 = v104;
  __result109 = v105;
    int* t117 = __first107;
    int* t118 = __last108;
    _Bool c119 = ((t117 == t118)) ? 1 : 0;
    if (c119) {
      __retval110 = __result109; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t120 = __retval110;
      return t120;
    }
  int* t121 = __first107;
  int* t122 = __last108;
  agg_tmp0111 = __result109; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r123 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp1112 = r123;
  struct std__random_access_iterator_tag r124 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first107);
  ref_tmp0114 = r124;
  struct std__input_iterator_tag* base125 = (struct std__input_iterator_tag*)((char *)&(ref_tmp0114) + 0);
  struct std__random_access_iterator_tag r126 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__result109);
  ref_tmp1116 = r126;
  struct std__forward_iterator_tag* base127 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp1116) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t128 = agg_tmp0111;
  struct __gnu_cxx____ops___Iter_equal_to_iter t129 = agg_tmp1112;
  struct std__input_iterator_tag t130 = agg_tmp2113;
  struct std__forward_iterator_tag t131 = agg_tmp3115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r132 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t121, t122, t128, t129, t130, t131);
  __retval110 = r132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t133 = __retval110;
  return t133;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v134, int** v135) {
bb136:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this137;
  int** __i138;
  this137 = v134;
  __i138 = v135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t139 = this137;
  int** t140 = __i138;
  int* t141 = *t140;
  t139->_M_current = t141;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v142) {
bb143:
  struct std__vector_int__std__allocator_int__* this144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval145;
  this144 = v142;
  struct std__vector_int__std__allocator_int__* t146 = this144;
  struct std___Vector_base_int__std__allocator_int__* base147 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t146 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base148 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base147->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval145, &base148->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t149 = __retval145;
  return t149;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v150, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v151) {
bb152:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval155;
  this153 = v150;
  unnamed154 = v151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t156 = this153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t157 = unnamed154;
  int* t158 = t157->_M_current;
  t156->_M_current = t158;
  __retval155 = t156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t159 = __retval155;
  return t159;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v160) {
bb161:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this162;
  int* __retval163;
  this162 = v160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t164 = this162;
  int* t165 = t164->_M_current;
  __retval163 = t165;
  int* t166 = __retval163;
  return t166;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v167, void* v168) {
bb169:
  struct std__basic_ostream_char__std__char_traits_char__* this170;
  void* __pf171;
  struct std__basic_ostream_char__std__char_traits_char__* __retval172;
  this170 = v167;
  __pf171 = v168;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = this170;
  void* t174 = __pf171;
  struct std__basic_ostream_char__std__char_traits_char__* r175 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t174)(t173);
  __retval172 = r175;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = __retval172;
  return t176;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v177) {
bb178:
  struct std__basic_ostream_char__std__char_traits_char__* __os179;
  struct std__basic_ostream_char__std__char_traits_char__* __retval180;
  __os179 = v177;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __os179;
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__ostream__flush(t181);
  __retval180 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval180;
  return t183;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v184) {
bb185:
  struct std__ctype_char_* __f186;
  struct std__ctype_char_* __retval187;
  __f186 = v184;
    struct std__ctype_char_* t188 = __f186;
    _Bool cast189 = (_Bool)t188;
    _Bool u190 = !cast189;
    if (u190) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t191 = __f186;
  __retval187 = t191;
  struct std__ctype_char_* t192 = __retval187;
  return t192;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v193, char v194) {
bb195:
  struct std__ctype_char_* this196;
  char __c197;
  char __retval198;
  this196 = v193;
  __c197 = v194;
  struct std__ctype_char_* t199 = this196;
    char t200 = t199->_M_widen_ok;
    _Bool cast201 = (_Bool)t200;
    if (cast201) {
      char t202 = __c197;
      unsigned char cast203 = (unsigned char)t202;
      unsigned long cast204 = (unsigned long)cast203;
      char t205 = t199->_M_widen[cast204];
      __retval198 = t205;
      char t206 = __retval198;
      return t206;
    }
  std__ctype_char____M_widen_init___const(t199);
  char t207 = __c197;
  void** v208 = (void**)t199;
  void* v209 = *((void**)v208);
  char vcall212 = (char)__VERIFIER_virtual_call_char_char(t199, 6, t207);
  __retval198 = vcall212;
  char t213 = __retval198;
  return t213;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v214, char v215) {
bb216:
  struct std__basic_ios_char__std__char_traits_char__* this217;
  char __c218;
  char __retval219;
  this217 = v214;
  __c218 = v215;
  struct std__basic_ios_char__std__char_traits_char__* t220 = this217;
  struct std__ctype_char_* t221 = t220->_M_ctype;
  struct std__ctype_char_* r222 = std__ctype_char__const__std____check_facet_std__ctype_char___(t221);
  char t223 = __c218;
  char r224 = std__ctype_char___widen_char__const(r222, t223);
  __retval219 = r224;
  char t225 = __retval219;
  return t225;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* __os228;
  struct std__basic_ostream_char__std__char_traits_char__* __retval229;
  __os228 = v226;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __os228;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __os228;
  void** v232 = (void**)t231;
  void* v233 = *((void**)v232);
  unsigned char* cast234 = (unsigned char*)v233;
  long c235 = -24;
  unsigned char* ptr236 = &(cast234)[c235];
  long* cast237 = (long*)ptr236;
  long t238 = *cast237;
  unsigned char* cast239 = (unsigned char*)t231;
  unsigned char* ptr240 = &(cast239)[t238];
  struct std__basic_ostream_char__std__char_traits_char__* cast241 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr240;
  struct std__basic_ios_char__std__char_traits_char__* cast242 = (struct std__basic_ios_char__std__char_traits_char__*)cast241;
  char c243 = 10;
  char r244 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast242, c243);
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__ostream__put(t230, r244);
  struct std__basic_ostream_char__std__char_traits_char__* r246 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r245);
  __retval229 = r246;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = __retval229;
  return t247;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v248) {
bb249:
  struct std__vector_int__std__allocator_int__* this250;
  this250 = v248;
  struct std__vector_int__std__allocator_int__* t251 = this250;
    struct std___Vector_base_int__std__allocator_int__* base252 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t251 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base253 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base252->_M_impl) + 0);
    int* t254 = base253->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base255 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t251 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base256 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base255->_M_impl) + 0);
    int* t257 = base256->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base258 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t251 + 0);
    struct std__allocator_int_* r259 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base258);
    void_std___Destroy_int___int_(t254, t257, r259);
  {
    struct std___Vector_base_int__std__allocator_int__* base260 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t251 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base260);
  }
  return;
}

// function: main
int main() {
bb261:
  int __retval262;
  int myints263[9];
  struct std__vector_int__std__allocator_int__ myvector264;
  struct std__allocator_int_ ref_tmp0265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it266;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0268;
  int c269 = 0;
  __retval262 = c269;
  // array copy
  __builtin_memcpy(myints263, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  unsigned long c270 = 9;
  std__allocator_int___allocator_2(&ref_tmp0265);
    std__vector_int__std__allocator_int_____vector(&myvector264, c270, &ref_tmp0265);
  {
    std__allocator_int____allocator(&ref_tmp0265);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it266);
    int* cast271 = (int*)&(myints263);
    int* cast272 = (int*)&(myints263);
    int c273 = 9;
    int* ptr274 = &(cast272)[c273];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r275 = std__vector_int__std__allocator_int_____begin(&myvector264);
    agg_tmp0268 = r275;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t276 = agg_tmp0268;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r277 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast271, ptr274, t276);
    ref_tmp1267 = r277;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r278 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it266, &ref_tmp1267);
    int* r279 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it266);
    int t280 = *r279;
    int c281 = 0;
    _Bool c282 = ((t280 != c281)) ? 1 : 0;
    if (c282) {
    } else {
      char* cast283 = (char*)&(_str);
      char* c284 = _str_1;
      unsigned int c285 = 27;
      char* cast286 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast283, c284, c285, cast286);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r287 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c288 = 0;
    __retval262 = c288;
    int t289 = __retval262;
    int ret_val290 = t289;
    {
      std__vector_int__std__allocator_int______vector(&myvector264);
    }
    return ret_val290;
  int t291 = __retval262;
  return t291;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v292) {
bb293:
  struct std____new_allocator_int_* this294;
  this294 = v292;
  struct std____new_allocator_int_* t295 = this294;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v296, unsigned long* v297) {
bb298:
  unsigned long* __a299;
  unsigned long* __b300;
  unsigned long* __retval301;
  __a299 = v296;
  __b300 = v297;
    unsigned long* t302 = __b300;
    unsigned long t303 = *t302;
    unsigned long* t304 = __a299;
    unsigned long t305 = *t304;
    _Bool c306 = ((t303 < t305)) ? 1 : 0;
    if (c306) {
      unsigned long* t307 = __b300;
      __retval301 = t307;
      unsigned long* t308 = __retval301;
      return t308;
    }
  unsigned long* t309 = __a299;
  __retval301 = t309;
  unsigned long* t310 = __retval301;
  return t310;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v311) {
bb312:
  struct std__allocator_int_* __a313;
  unsigned long __retval314;
  unsigned long __diffmax315;
  unsigned long __allocmax316;
  __a313 = v311;
  unsigned long c317 = 2305843009213693951;
  __diffmax315 = c317;
  unsigned long c318 = 4611686018427387903;
  __allocmax316 = c318;
  unsigned long* r319 = unsigned_long_const__std__min_unsigned_long_(&__diffmax315, &__allocmax316);
  unsigned long t320 = *r319;
  __retval314 = t320;
  unsigned long t321 = __retval314;
  return t321;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v322, struct std__allocator_int_* v323) {
bb324:
  struct std__allocator_int_* this325;
  struct std__allocator_int_* __a326;
  this325 = v322;
  __a326 = v323;
  struct std__allocator_int_* t327 = this325;
  struct std____new_allocator_int_* base328 = (struct std____new_allocator_int_*)((char *)t327 + 0);
  struct std__allocator_int_* t329 = __a326;
  struct std____new_allocator_int_* base330 = (struct std____new_allocator_int_*)((char *)t329 + 0);
  std____new_allocator_int_____new_allocator(base328, base330);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v331, struct std__allocator_int_* v332) {
bb333:
  unsigned long __n334;
  struct std__allocator_int_* __a335;
  unsigned long __retval336;
  __n334 = v331;
  __a335 = v332;
    struct std__allocator_int_ ref_tmp0337;
    _Bool tmp_exprcleanup338;
    unsigned long t339 = __n334;
    struct std__allocator_int_* t340 = __a335;
    std__allocator_int___allocator(&ref_tmp0337, t340);
      unsigned long r341 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0337);
      _Bool c342 = ((t339 > r341)) ? 1 : 0;
      tmp_exprcleanup338 = c342;
    {
      std__allocator_int____allocator(&ref_tmp0337);
    }
    _Bool t343 = tmp_exprcleanup338;
    if (t343) {
      char* cast344 = (char*)&(_str_2);
      std____throw_length_error(cast344);
    }
  unsigned long t345 = __n334;
  __retval336 = t345;
  unsigned long t346 = __retval336;
  return t346;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v347, struct std__allocator_int_* v348) {
bb349:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this350;
  struct std__allocator_int_* __a351;
  this350 = v347;
  __a351 = v348;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t352 = this350;
  struct std__allocator_int_* base353 = (struct std__allocator_int_*)((char *)t352 + 0);
  struct std__allocator_int_* t354 = __a351;
  std__allocator_int___allocator(base353, t354);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base355 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t352 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base355);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb356:
  _Bool __retval357;
    _Bool c358 = 0;
    __retval357 = c358;
    _Bool t359 = __retval357;
    return t359;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v360) {
bb361:
  struct std____new_allocator_int_* this362;
  unsigned long __retval363;
  this362 = v360;
  struct std____new_allocator_int_* t364 = this362;
  unsigned long c365 = 9223372036854775807;
  unsigned long c366 = 4;
  unsigned long b367 = c365 / c366;
  __retval363 = b367;
  unsigned long t368 = __retval363;
  return t368;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v369, unsigned long v370, void* v371) {
bb372:
  struct std____new_allocator_int_* this373;
  unsigned long __n374;
  void* unnamed375;
  int* __retval376;
  this373 = v369;
  __n374 = v370;
  unnamed375 = v371;
  struct std____new_allocator_int_* t377 = this373;
    unsigned long t378 = __n374;
    unsigned long r379 = std____new_allocator_int____M_max_size___const(t377);
    _Bool c380 = ((t378 > r379)) ? 1 : 0;
    if (c380) {
        unsigned long t381 = __n374;
        unsigned long c382 = -1;
        unsigned long c383 = 4;
        unsigned long b384 = c382 / c383;
        _Bool c385 = ((t381 > b384)) ? 1 : 0;
        if (c385) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c386 = 4;
    unsigned long c387 = 16;
    _Bool c388 = ((c386 > c387)) ? 1 : 0;
    if (c388) {
      unsigned long __al389;
      unsigned long c390 = 4;
      __al389 = c390;
      unsigned long t391 = __n374;
      unsigned long c392 = 4;
      unsigned long b393 = t391 * c392;
      unsigned long t394 = __al389;
      void* r395 = operator_new_2(b393, t394);
      int* cast396 = (int*)r395;
      __retval376 = cast396;
      int* t397 = __retval376;
      return t397;
    }
  unsigned long t398 = __n374;
  unsigned long c399 = 4;
  unsigned long b400 = t398 * c399;
  void* r401 = operator_new(b400);
  int* cast402 = (int*)r401;
  __retval376 = cast402;
  int* t403 = __retval376;
  return t403;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v404, unsigned long v405) {
bb406:
  struct std__allocator_int_* this407;
  unsigned long __n408;
  int* __retval409;
  this407 = v404;
  __n408 = v405;
  struct std__allocator_int_* t410 = this407;
    _Bool r411 = std____is_constant_evaluated();
    if (r411) {
        unsigned long t412 = __n408;
        unsigned long c413 = 4;
        unsigned long ovr414;
        _Bool ovf415 = __builtin_mul_overflow(t412, c413, &ovr414);
        __n408 = ovr414;
        if (ovf415) {
          std____throw_bad_array_new_length();
        }
      unsigned long t416 = __n408;
      void* r417 = operator_new(t416);
      int* cast418 = (int*)r417;
      __retval409 = cast418;
      int* t419 = __retval409;
      return t419;
    }
  struct std____new_allocator_int_* base420 = (struct std____new_allocator_int_*)((char *)t410 + 0);
  unsigned long t421 = __n408;
  void* c422 = ((void*)0);
  int* r423 = std____new_allocator_int___allocate(base420, t421, c422);
  __retval409 = r423;
  int* t424 = __retval409;
  return t424;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v425, unsigned long v426) {
bb427:
  struct std__allocator_int_* __a428;
  unsigned long __n429;
  int* __retval430;
  __a428 = v425;
  __n429 = v426;
  struct std__allocator_int_* t431 = __a428;
  unsigned long t432 = __n429;
  int* r433 = std__allocator_int___allocate(t431, t432);
  __retval430 = r433;
  int* t434 = __retval430;
  return t434;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v435, unsigned long v436) {
bb437:
  struct std___Vector_base_int__std__allocator_int__* this438;
  unsigned long __n439;
  int* __retval440;
  this438 = v435;
  __n439 = v436;
  struct std___Vector_base_int__std__allocator_int__* t441 = this438;
  unsigned long t442 = __n439;
  unsigned long c443 = 0;
  _Bool c444 = ((t442 != c443)) ? 1 : 0;
  int* ternary445;
  if (c444) {
    struct std__allocator_int_* base446 = (struct std__allocator_int_*)((char *)&(t441->_M_impl) + 0);
    unsigned long t447 = __n439;
    int* r448 = std__allocator_traits_std__allocator_int_____allocate(base446, t447);
    ternary445 = (int*)r448;
  } else {
    int* c449 = ((void*)0);
    ternary445 = (int*)c449;
  }
  __retval440 = ternary445;
  int* t450 = __retval440;
  return t450;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v451, unsigned long v452) {
bb453:
  struct std___Vector_base_int__std__allocator_int__* this454;
  unsigned long __n455;
  this454 = v451;
  __n455 = v452;
  struct std___Vector_base_int__std__allocator_int__* t456 = this454;
  unsigned long t457 = __n455;
  int* r458 = std___Vector_base_int__std__allocator_int______M_allocate(t456, t457);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base459 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t456->_M_impl) + 0);
  base459->_M_start = r458;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base460 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t456->_M_impl) + 0);
  int* t461 = base460->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base462 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t456->_M_impl) + 0);
  base462->_M_finish = t461;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base463 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t456->_M_impl) + 0);
  int* t464 = base463->_M_start;
  unsigned long t465 = __n455;
  int* ptr466 = &(t464)[t465];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base467 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t456->_M_impl) + 0);
  base467->_M_end_of_storage = ptr466;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v468) {
bb469:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this470;
  this470 = v468;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t471 = this470;
  {
    struct std__allocator_int_* base472 = (struct std__allocator_int_*)((char *)t471 + 0);
    std__allocator_int____allocator(base472);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v473, unsigned long v474, struct std__allocator_int_* v475) {
bb476:
  struct std___Vector_base_int__std__allocator_int__* this477;
  unsigned long __n478;
  struct std__allocator_int_* __a479;
  this477 = v473;
  __n478 = v474;
  __a479 = v475;
  struct std___Vector_base_int__std__allocator_int__* t480 = this477;
  struct std__allocator_int_* t481 = __a479;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t480->_M_impl, t481);
    unsigned long t482 = __n478;
    std___Vector_base_int__std__allocator_int______M_create_storage(t480, t482);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb483:
  _Bool __retval484;
    _Bool c485 = 0;
    __retval484 = c485;
    _Bool t486 = __retval484;
    return t486;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v487, int** v488) {
bb489:
  struct std___UninitDestroyGuard_int____void_* this490;
  int** __first491;
  this490 = v487;
  __first491 = v488;
  struct std___UninitDestroyGuard_int____void_* t492 = this490;
  int** t493 = __first491;
  int* t494 = *t493;
  t492->_M_first = t494;
  int** t495 = __first491;
  t492->_M_cur = t495;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v496) {
bb497:
  int* __location498;
  int* __retval499;
  void* __loc500;
  __location498 = v496;
  int* t501 = __location498;
  void* cast502 = (void*)t501;
  __loc500 = cast502;
    void* t503 = __loc500;
    int* cast504 = (int*)t503;
    int c505 = 0;
    *cast504 = c505;
    __retval499 = cast504;
    int* t506 = __retval499;
    return t506;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v507) {
bb508:
  int* __p509;
  __p509 = v507;
    _Bool r510 = std____is_constant_evaluated();
    if (r510) {
      int* t511 = __p509;
      int* r512 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t511);
      return;
    }
  int* t513 = __p509;
  void* cast514 = (void*)t513;
  int* cast515 = (int*)cast514;
  int c516 = 0;
  *cast515 = c516;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v517) {
bb518:
  struct std___UninitDestroyGuard_int____void_* this519;
  this519 = v517;
  struct std___UninitDestroyGuard_int____void_* t520 = this519;
  int** c521 = ((void*)0);
  t520->_M_cur = c521;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v522) {
bb523:
  struct std___UninitDestroyGuard_int____void_* this524;
  this524 = v522;
  struct std___UninitDestroyGuard_int____void_* t525 = this524;
    int** t526 = t525->_M_cur;
    int** c527 = ((void*)0);
    _Bool c528 = ((t526 != c527)) ? 1 : 0;
    if (c528) {
      int* t529 = t525->_M_first;
      int** t530 = t525->_M_cur;
      int* t531 = *t530;
      void_std___Destroy_int__(t529, t531);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v532, unsigned long v533) {
bb534:
  int* __first535;
  unsigned long __n536;
  int* __retval537;
  struct std___UninitDestroyGuard_int____void_ __guard538;
  __first535 = v532;
  __n536 = v533;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard538, &__first535);
      while (1) {
        unsigned long t540 = __n536;
        unsigned long c541 = 0;
        _Bool c542 = ((t540 > c541)) ? 1 : 0;
        if (!c542) break;
        int* t543 = __first535;
        void_std___Construct_int_(t543);
      for_step539: ;
        unsigned long t544 = __n536;
        unsigned long u545 = t544 - 1;
        __n536 = u545;
        int* t546 = __first535;
        int c547 = 1;
        int* ptr548 = &(t546)[c547];
        __first535 = ptr548;
      }
    std___UninitDestroyGuard_int___void___release(&__guard538);
    int* t549 = __first535;
    __retval537 = t549;
    int* t550 = __retval537;
    int* ret_val551 = t550;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard538);
    }
    return ret_val551;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v552, int* v553, int* v554) {
bb555:
  int* __first556;
  int* __last557;
  int* __value558;
  _Bool __load_outside_loop559;
  int __val560;
  __first556 = v552;
  __last557 = v553;
  __value558 = v554;
  _Bool c561 = 1;
  __load_outside_loop559 = c561;
  int* t562 = __value558;
  int t563 = *t562;
  __val560 = t563;
    while (1) {
      int* t565 = __first556;
      int* t566 = __last557;
      _Bool c567 = ((t565 != t566)) ? 1 : 0;
      if (!c567) break;
      int t568 = __val560;
      int* t569 = __first556;
      *t569 = t568;
    for_step564: ;
      int* t570 = __first556;
      int c571 = 1;
      int* ptr572 = &(t570)[c571];
      __first556 = ptr572;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v573, int* v574, int* v575) {
bb576:
  int* __first577;
  int* __last578;
  int* __value579;
  __first577 = v573;
  __last578 = v574;
  __value579 = v575;
  int* t580 = __first577;
  int* t581 = __last578;
  int* t582 = __value579;
  void_std____fill_a1_int___int_(t580, t581, t582);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v583, unsigned long v584, int* v585, struct std__random_access_iterator_tag v586) {
bb587:
  int* __first588;
  unsigned long __n589;
  int* __value590;
  struct std__random_access_iterator_tag unnamed591;
  int* __retval592;
  __first588 = v583;
  __n589 = v584;
  __value590 = v585;
  unnamed591 = v586;
    unsigned long t593 = __n589;
    unsigned long c594 = 0;
    _Bool c595 = ((t593 <= c594)) ? 1 : 0;
    if (c595) {
      int* t596 = __first588;
      __retval592 = t596;
      int* t597 = __retval592;
      return t597;
    }
  int* t598 = __first588;
  int* t599 = __first588;
  unsigned long t600 = __n589;
  int* ptr601 = &(t599)[t600];
  int* t602 = __value590;
  void_std____fill_a_int___int_(t598, ptr601, t602);
  int* t603 = __first588;
  unsigned long t604 = __n589;
  int* ptr605 = &(t603)[t604];
  __retval592 = ptr605;
  int* t606 = __retval592;
  return t606;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v607) {
bb608:
  unsigned long __n609;
  unsigned long __retval610;
  __n609 = v607;
  unsigned long t611 = __n609;
  __retval610 = t611;
  unsigned long t612 = __retval610;
  return t612;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v613) {
bb614:
  int** unnamed615;
  struct std__random_access_iterator_tag __retval616;
  unnamed615 = v613;
  struct std__random_access_iterator_tag t617 = __retval616;
  return t617;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v618, unsigned long v619, int* v620) {
bb621:
  int* __first622;
  unsigned long __n623;
  int* __value624;
  int* __retval625;
  struct std__random_access_iterator_tag agg_tmp0626;
  __first622 = v618;
  __n623 = v619;
  __value624 = v620;
  int* t627 = __first622;
  unsigned long t628 = __n623;
  unsigned long r629 = std____size_to_integer(t628);
  int* t630 = __value624;
  struct std__random_access_iterator_tag r631 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first622);
  agg_tmp0626 = r631;
  struct std__random_access_iterator_tag t632 = agg_tmp0626;
  int* r633 = int__std____fill_n_a_int___unsigned_long__int_(t627, r629, t630, t632);
  __retval625 = r633;
  int* t634 = __retval625;
  return t634;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v635, unsigned long v636) {
bb637:
  int* __first638;
  unsigned long __n639;
  int* __retval640;
  __first638 = v635;
  __n639 = v636;
    unsigned long t641 = __n639;
    unsigned long c642 = 0;
    _Bool c643 = ((t641 > c642)) ? 1 : 0;
    if (c643) {
      int* __val644;
      int* t645 = __first638;
      __val644 = t645;
      int* t646 = __val644;
      void_std___Construct_int_(t646);
      int* t647 = __first638;
      int c648 = 1;
      int* ptr649 = &(t647)[c648];
      __first638 = ptr649;
      int* t650 = __first638;
      unsigned long t651 = __n639;
      unsigned long c652 = 1;
      unsigned long b653 = t651 - c652;
      int* t654 = __val644;
      int* r655 = int__std__fill_n_int___unsigned_long__int_(t650, b653, t654);
      __first638 = r655;
    }
  int* t656 = __first638;
  __retval640 = t656;
  int* t657 = __retval640;
  return t657;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v658, unsigned long v659) {
bb660:
  int* __first661;
  unsigned long __n662;
  int* __retval663;
  _Bool __can_fill664;
  __first661 = v658;
  __n662 = v659;
    _Bool r665 = std__is_constant_evaluated();
    if (r665) {
      int* t666 = __first661;
      unsigned long t667 = __n662;
      int* r668 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t666, t667);
      __retval663 = r668;
      int* t669 = __retval663;
      return t669;
    }
  _Bool c670 = 1;
  __can_fill664 = c670;
  int* t671 = __first661;
  unsigned long t672 = __n662;
  int* r673 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t671, t672);
  __retval663 = r673;
  int* t674 = __retval663;
  return t674;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v675, unsigned long v676, struct std__allocator_int_* v677) {
bb678:
  int* __first679;
  unsigned long __n680;
  struct std__allocator_int_* unnamed681;
  int* __retval682;
  __first679 = v675;
  __n680 = v676;
  unnamed681 = v677;
  int* t683 = __first679;
  unsigned long t684 = __n680;
  int* r685 = int__std____uninitialized_default_n_int___unsigned_long_(t683, t684);
  __retval682 = r685;
  int* t686 = __retval682;
  return t686;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v687) {
bb688:
  struct std___Vector_base_int__std__allocator_int__* this689;
  struct std__allocator_int_* __retval690;
  this689 = v687;
  struct std___Vector_base_int__std__allocator_int__* t691 = this689;
  struct std__allocator_int_* base692 = (struct std__allocator_int_*)((char *)&(t691->_M_impl) + 0);
  __retval690 = base692;
  struct std__allocator_int_* t693 = __retval690;
  return t693;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v694, unsigned long v695) {
bb696:
  struct std__vector_int__std__allocator_int__* this697;
  unsigned long __n698;
  this697 = v694;
  __n698 = v695;
  struct std__vector_int__std__allocator_int__* t699 = this697;
  struct std___Vector_base_int__std__allocator_int__* base700 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t699 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base701 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base700->_M_impl) + 0);
  int* t702 = base701->_M_start;
  unsigned long t703 = __n698;
  struct std___Vector_base_int__std__allocator_int__* base704 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t699 + 0);
  struct std__allocator_int_* r705 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base704);
  int* r706 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t702, t703, r705);
  struct std___Vector_base_int__std__allocator_int__* base707 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t699 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base708 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base707->_M_impl) + 0);
  base708->_M_finish = r706;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v709, int* v710, unsigned long v711) {
bb712:
  struct std____new_allocator_int_* this713;
  int* __p714;
  unsigned long __n715;
  this713 = v709;
  __p714 = v710;
  __n715 = v711;
  struct std____new_allocator_int_* t716 = this713;
    unsigned long c717 = 4;
    unsigned long c718 = 16;
    _Bool c719 = ((c717 > c718)) ? 1 : 0;
    if (c719) {
      int* t720 = __p714;
      void* cast721 = (void*)t720;
      unsigned long t722 = __n715;
      unsigned long c723 = 4;
      unsigned long b724 = t722 * c723;
      unsigned long c725 = 4;
      operator_delete_3(cast721, b724, c725);
      return;
    }
  int* t726 = __p714;
  void* cast727 = (void*)t726;
  unsigned long t728 = __n715;
  unsigned long c729 = 4;
  unsigned long b730 = t728 * c729;
  operator_delete_2(cast727, b730);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v731, int* v732, unsigned long v733) {
bb734:
  struct std__allocator_int_* this735;
  int* __p736;
  unsigned long __n737;
  this735 = v731;
  __p736 = v732;
  __n737 = v733;
  struct std__allocator_int_* t738 = this735;
    _Bool r739 = std____is_constant_evaluated();
    if (r739) {
      int* t740 = __p736;
      void* cast741 = (void*)t740;
      operator_delete(cast741);
      return;
    }
  struct std____new_allocator_int_* base742 = (struct std____new_allocator_int_*)((char *)t738 + 0);
  int* t743 = __p736;
  unsigned long t744 = __n737;
  std____new_allocator_int___deallocate(base742, t743, t744);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v745, int* v746, unsigned long v747) {
bb748:
  struct std__allocator_int_* __a749;
  int* __p750;
  unsigned long __n751;
  __a749 = v745;
  __p750 = v746;
  __n751 = v747;
  struct std__allocator_int_* t752 = __a749;
  int* t753 = __p750;
  unsigned long t754 = __n751;
  std__allocator_int___deallocate(t752, t753, t754);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v755, int* v756, unsigned long v757) {
bb758:
  struct std___Vector_base_int__std__allocator_int__* this759;
  int* __p760;
  unsigned long __n761;
  this759 = v755;
  __p760 = v756;
  __n761 = v757;
  struct std___Vector_base_int__std__allocator_int__* t762 = this759;
    int* t763 = __p760;
    _Bool cast764 = (_Bool)t763;
    if (cast764) {
      struct std__allocator_int_* base765 = (struct std__allocator_int_*)((char *)&(t762->_M_impl) + 0);
      int* t766 = __p760;
      unsigned long t767 = __n761;
      std__allocator_traits_std__allocator_int_____deallocate(base765, t766, t767);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v768) {
bb769:
  struct std___Vector_base_int__std__allocator_int__* this770;
  this770 = v768;
  struct std___Vector_base_int__std__allocator_int__* t771 = this770;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base772 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t771->_M_impl) + 0);
    int* t773 = base772->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base774 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t771->_M_impl) + 0);
    int* t775 = base774->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base776 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t771->_M_impl) + 0);
    int* t777 = base776->_M_start;
    long diff778 = t775 - t777;
    unsigned long cast779 = (unsigned long)diff778;
    std___Vector_base_int__std__allocator_int______M_deallocate(t771, t773, cast779);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t771->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v780, struct std____new_allocator_int_* v781) {
bb782:
  struct std____new_allocator_int_* this783;
  struct std____new_allocator_int_* unnamed784;
  this783 = v780;
  unnamed784 = v781;
  struct std____new_allocator_int_* t785 = this783;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v786) {
bb787:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this788;
  this788 = v786;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t789 = this788;
  int* c790 = ((void*)0);
  t789->_M_start = c790;
  int* c791 = ((void*)0);
  t789->_M_finish = c791;
  int* c792 = ((void*)0);
  t789->_M_end_of_storage = c792;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v793) {
bb794:
  int* __location795;
  __location795 = v793;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v796, int* v797) {
bb798:
  int* __first799;
  int* __last800;
  __first799 = v796;
  __last800 = v797;
      _Bool r801 = std____is_constant_evaluated();
      if (r801) {
          while (1) {
            int* t803 = __first799;
            int* t804 = __last800;
            _Bool c805 = ((t803 != t804)) ? 1 : 0;
            if (!c805) break;
            int* t806 = __first799;
            void_std__destroy_at_int_(t806);
          for_step802: ;
            int* t807 = __first799;
            int c808 = 1;
            int* ptr809 = &(t807)[c808];
            __first799 = ptr809;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v810, int* v811, struct std__allocator_int_* v812) {
bb813:
  int* __first814;
  int* __last815;
  struct std__allocator_int_* unnamed816;
  __first814 = v810;
  __last815 = v811;
  unnamed816 = v812;
  int* t817 = __first814;
  int* t818 = __last815;
  void_std___Destroy_int__(t817, t818);
  return;
}

