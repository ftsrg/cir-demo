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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "first[1] == 100";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector57/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "first contains:";
char _str_3[2] = " ";
char _str_4[18] = "\nsecond contains:";
char _str_5[16] = "first[1] != 200";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  unsigned long t16 = __n11;
  struct std__allocator_int_* t17 = __a13;
  unsigned long r18 = std__vector_int__std__allocator_int______S_check_init_len(t16, t17);
  struct std__allocator_int_* t19 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, r18, t19);
    unsigned long t20 = __n11;
    int* t21 = __value12;
    std__vector_int__std__allocator_int______M_fill_initialize(t14, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v26, unsigned long v27) {
bb28:
  struct std__vector_int__std__allocator_int__* this29;
  unsigned long __n30;
  int* __retval31;
  this29 = v26;
  __n30 = v27;
  struct std__vector_int__std__allocator_int__* t32 = this29;
    do {
          unsigned long t33 = __n30;
          unsigned long r34 = std__vector_int__std__allocator_int_____size___const(t32);
          _Bool c35 = ((t33 < r34)) ? 1 : 0;
          _Bool u36 = !c35;
          if (u36) {
            char* cast37 = (char*)&(_str_9);
            int c38 = 1263;
            char* cast39 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast40 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast37, c38, cast39, cast40);
          }
      _Bool c41 = 0;
      if (!c41) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base42 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t32 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base43 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base42->_M_impl) + 0);
  int* t44 = base43->_M_start;
  unsigned long t45 = __n30;
  int* ptr46 = &(t44)[t45];
  __retval31 = ptr46;
  int* t47 = __retval31;
  return t47;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v48, struct std__allocator_int_* v49) {
bb50:
  struct std__allocator_int_* unnamed51;
  struct std__allocator_int_* unnamed52;
  _Bool __retval53;
  unnamed51 = v48;
  unnamed52 = v49;
  _Bool c54 = 1;
  __retval53 = c54;
  _Bool t55 = __retval53;
  return t55;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v56) {
bb57:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this58;
  this58 = v56;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t59 = this58;
  int* c60 = ((void*)0);
  t59->_M_start = c60;
  int* c61 = ((void*)0);
  t59->_M_finish = c61;
  int* c62 = ((void*)0);
  t59->_M_end_of_storage = c62;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v63, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v64) {
bb65:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this66;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x67;
  this66 = v63;
  __x67 = v64;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t68 = this66;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t69 = __x67;
  int* t70 = t69->_M_start;
  t68->_M_start = t70;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t71 = __x67;
  int* t72 = t71->_M_finish;
  t68->_M_finish = t72;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t73 = __x67;
  int* t74 = t73->_M_end_of_storage;
  t68->_M_end_of_storage = t74;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v75, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v76) {
bb77:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this78;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x79;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp80;
  this78 = v75;
  __x79 = v76;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t81 = this78;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp80);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp80, t81);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t82 = __x79;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t81, t82);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t83 = __x79;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t83, &__tmp80);
  return;
}

// function: _ZSt15__alloc_on_swapISaIiEEvRT_S2_
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* v84, struct std__allocator_int_* v85) {
bb86:
  struct std__allocator_int_* __one87;
  struct std__allocator_int_* __two88;
  __one87 = v84;
  __two88 = v85;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE10_S_on_swapERS1_S3_
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* v89, struct std__allocator_int_* v90) {
bb91:
  struct std__allocator_int_* __a92;
  struct std__allocator_int_* __b93;
  __a92 = v89;
  __b93 = v90;
  struct std__allocator_int_* t94 = __a92;
  struct std__allocator_int_* t95 = __b93;
  void_std____alloc_on_swap_std__allocator_int___(t94, t95);
  return;
}

// function: _ZNSt6vectorIiSaIiEE4swapERS1_
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* v96, struct std__vector_int__std__allocator_int__* v97) {
bb98:
  struct std__vector_int__std__allocator_int__* this99;
  struct std__vector_int__std__allocator_int__* __x100;
  this99 = v96;
  __x100 = v97;
  struct std__vector_int__std__allocator_int__* t101 = this99;
    do {
          _Bool t102 = _ZNSt17integral_constantIbLb0EE5valueE;
          _Bool ternary103;
          if (t102) {
            _Bool c104 = 1;
            ternary103 = (_Bool)c104;
          } else {
            struct std___Vector_base_int__std__allocator_int__* base105 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t101 + 0);
            struct std__allocator_int_* r106 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base105);
            struct std__vector_int__std__allocator_int__* t107 = __x100;
            struct std___Vector_base_int__std__allocator_int__* base108 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t107 + 0);
            struct std__allocator_int_* r109 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base108);
            _Bool r110 = std__operator__(r106, r109);
            ternary103 = (_Bool)r110;
          }
          _Bool u111 = !ternary103;
          if (u111) {
            char* cast112 = (char*)&(_str_9);
            int c113 = 1848;
            char* cast114 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_);
            char* cast115 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast112, c113, cast114, cast115);
          }
      _Bool c116 = 0;
      if (!c116) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base117 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t101 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base118 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base117->_M_impl) + 0);
  struct std__vector_int__std__allocator_int__* t119 = __x100;
  struct std___Vector_base_int__std__allocator_int__* base120 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t119 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base121 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base120->_M_impl) + 0);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base118, base121);
  struct std___Vector_base_int__std__allocator_int__* base122 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t101 + 0);
  struct std__allocator_int_* r123 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base122);
  struct std__vector_int__std__allocator_int__* t124 = __x100;
  struct std___Vector_base_int__std__allocator_int__* base125 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t124 + 0);
  struct std__allocator_int_* r126 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base125);
  __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(r123, r126);
  return;
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v226) {
bb227:
  struct std__vector_int__std__allocator_int__* this228;
  unsigned long __retval229;
  long __dif230;
  this228 = v226;
  struct std__vector_int__std__allocator_int__* t231 = this228;
  struct std___Vector_base_int__std__allocator_int__* base232 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t231 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base233 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base232->_M_impl) + 0);
  int* t234 = base233->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base235 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t231 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base236 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base235->_M_impl) + 0);
  int* t237 = base236->_M_start;
  long diff238 = t234 - t237;
  __dif230 = diff238;
    long t239 = __dif230;
    long c240 = 0;
    _Bool c241 = ((t239 < c240)) ? 1 : 0;
    if (c241) {
      __builtin_unreachable();
    }
  long t242 = __dif230;
  unsigned long cast243 = (unsigned long)t242;
  __retval229 = cast243;
  unsigned long t244 = __retval229;
  return t244;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v245, void* v246) {
bb247:
  struct std__basic_ostream_char__std__char_traits_char__* this248;
  void* __pf249;
  struct std__basic_ostream_char__std__char_traits_char__* __retval250;
  this248 = v245;
  __pf249 = v246;
  struct std__basic_ostream_char__std__char_traits_char__* t251 = this248;
  void* t252 = __pf249;
  struct std__basic_ostream_char__std__char_traits_char__* r253 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t252)(t251);
  __retval250 = r253;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = __retval250;
  return t254;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v255) {
bb256:
  struct std__basic_ostream_char__std__char_traits_char__* __os257;
  struct std__basic_ostream_char__std__char_traits_char__* __retval258;
  __os257 = v255;
  struct std__basic_ostream_char__std__char_traits_char__* t259 = __os257;
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__ostream__flush(t259);
  __retval258 = r260;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __retval258;
  return t261;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v262) {
bb263:
  struct std__ctype_char_* __f264;
  struct std__ctype_char_* __retval265;
  __f264 = v262;
    struct std__ctype_char_* t266 = __f264;
    _Bool cast267 = (_Bool)t266;
    _Bool u268 = !cast267;
    if (u268) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t269 = __f264;
  __retval265 = t269;
  struct std__ctype_char_* t270 = __retval265;
  return t270;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v271, char v272) {
bb273:
  struct std__ctype_char_* this274;
  char __c275;
  char __retval276;
  this274 = v271;
  __c275 = v272;
  struct std__ctype_char_* t277 = this274;
    char t278 = t277->_M_widen_ok;
    _Bool cast279 = (_Bool)t278;
    if (cast279) {
      char t280 = __c275;
      unsigned char cast281 = (unsigned char)t280;
      unsigned long cast282 = (unsigned long)cast281;
      char t283 = t277->_M_widen[cast282];
      __retval276 = t283;
      char t284 = __retval276;
      return t284;
    }
  std__ctype_char____M_widen_init___const(t277);
  char t285 = __c275;
  void** v286 = (void**)t277;
  void* v287 = *((void**)v286);
  char vcall290 = (char)__VERIFIER_virtual_call_char_char(t277, 6, t285);
  __retval276 = vcall290;
  char t291 = __retval276;
  return t291;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v292, char v293) {
bb294:
  struct std__basic_ios_char__std__char_traits_char__* this295;
  char __c296;
  char __retval297;
  this295 = v292;
  __c296 = v293;
  struct std__basic_ios_char__std__char_traits_char__* t298 = this295;
  struct std__ctype_char_* t299 = t298->_M_ctype;
  struct std__ctype_char_* r300 = std__ctype_char__const__std____check_facet_std__ctype_char___(t299);
  char t301 = __c296;
  char r302 = std__ctype_char___widen_char__const(r300, t301);
  __retval297 = r302;
  char t303 = __retval297;
  return t303;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v304) {
bb305:
  struct std__basic_ostream_char__std__char_traits_char__* __os306;
  struct std__basic_ostream_char__std__char_traits_char__* __retval307;
  __os306 = v304;
  struct std__basic_ostream_char__std__char_traits_char__* t308 = __os306;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = __os306;
  void** v310 = (void**)t309;
  void* v311 = *((void**)v310);
  unsigned char* cast312 = (unsigned char*)v311;
  long c313 = -24;
  unsigned char* ptr314 = &(cast312)[c313];
  long* cast315 = (long*)ptr314;
  long t316 = *cast315;
  unsigned char* cast317 = (unsigned char*)t309;
  unsigned char* ptr318 = &(cast317)[t316];
  struct std__basic_ostream_char__std__char_traits_char__* cast319 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr318;
  struct std__basic_ios_char__std__char_traits_char__* cast320 = (struct std__basic_ios_char__std__char_traits_char__*)cast319;
  char c321 = 10;
  char r322 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast320, c321);
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__ostream__put(t308, r322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r323);
  __retval307 = r324;
  struct std__basic_ostream_char__std__char_traits_char__* t325 = __retval307;
  return t325;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v326) {
bb327:
  struct std__vector_int__std__allocator_int__* this328;
  this328 = v326;
  struct std__vector_int__std__allocator_int__* t329 = this328;
    struct std___Vector_base_int__std__allocator_int__* base330 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base331 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base330->_M_impl) + 0);
    int* t332 = base331->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base333 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base334 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base333->_M_impl) + 0);
    int* t335 = base334->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base336 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    struct std__allocator_int_* r337 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base336);
    void_std___Destroy_int___int_(t332, t335, r337);
  {
    struct std___Vector_base_int__std__allocator_int__* base338 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base338);
  }
  return;
}

// function: main
int main() {
bb339:
  int __retval340;
  unsigned int i341;
  struct std__vector_int__std__allocator_int__ first342;
  int ref_tmp0343;
  struct std__allocator_int_ ref_tmp1344;
  struct std__vector_int__std__allocator_int__ second345;
  int ref_tmp2346;
  struct std__allocator_int_ ref_tmp3347;
  int c348 = 0;
  __retval340 = c348;
  unsigned long c349 = 3;
  int c350 = 100;
  ref_tmp0343 = c350;
  std__allocator_int___allocator_2(&ref_tmp1344);
    std__vector_int__std__allocator_int_____vector(&first342, c349, &ref_tmp0343, &ref_tmp1344);
  {
    std__allocator_int____allocator(&ref_tmp1344);
  }
    unsigned long c351 = 5;
    int c352 = 200;
    ref_tmp2346 = c352;
    std__allocator_int___allocator_2(&ref_tmp3347);
      std__vector_int__std__allocator_int_____vector(&second345, c351, &ref_tmp2346, &ref_tmp3347);
    {
      std__allocator_int____allocator(&ref_tmp3347);
    }
      unsigned long c353 = 1;
      int* r354 = std__vector_int__std__allocator_int_____operator__(&first342, c353);
      int t355 = *r354;
      int c356 = 100;
      _Bool c357 = ((t355 == c356)) ? 1 : 0;
      if (c357) {
      } else {
        char* cast358 = (char*)&(_str);
        char* c359 = _str_1;
        unsigned int c360 = 19;
        char* cast361 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast358, c359, c360, cast361);
      }
      std__vector_int__std__allocator_int_____swap(&first342, &second345);
      char* cast362 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast362);
        unsigned int c364 = 0;
        i341 = c364;
        while (1) {
          unsigned int t366 = i341;
          unsigned long cast367 = (unsigned long)t366;
          unsigned long r368 = std__vector_int__std__allocator_int_____size___const(&first342);
          _Bool c369 = ((cast367 < r368)) ? 1 : 0;
          if (!c369) break;
          char* cast370 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r371 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast370);
          unsigned int t372 = i341;
          unsigned long cast373 = (unsigned long)t372;
          int* r374 = std__vector_int__std__allocator_int_____operator__(&first342, cast373);
          int t375 = *r374;
          struct std__basic_ostream_char__std__char_traits_char__* r376 = std__ostream__operator__(r371, t375);
        for_step365: ;
          unsigned int t377 = i341;
          unsigned int u378 = t377 + 1;
          i341 = u378;
        }
      char* cast379 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast379);
        unsigned int c381 = 0;
        i341 = c381;
        while (1) {
          unsigned int t383 = i341;
          unsigned long cast384 = (unsigned long)t383;
          unsigned long r385 = std__vector_int__std__allocator_int_____size___const(&second345);
          _Bool c386 = ((cast384 < r385)) ? 1 : 0;
          if (!c386) break;
          char* cast387 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r388 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast387);
          unsigned int t389 = i341;
          unsigned long cast390 = (unsigned long)t389;
          int* r391 = std__vector_int__std__allocator_int_____operator__(&second345, cast390);
          int t392 = *r391;
          struct std__basic_ostream_char__std__char_traits_char__* r393 = std__ostream__operator__(r388, t392);
        for_step382: ;
          unsigned int t394 = i341;
          unsigned int u395 = t394 + 1;
          i341 = u395;
        }
      unsigned long c396 = 1;
      int* r397 = std__vector_int__std__allocator_int_____operator__(&first342, c396);
      int t398 = *r397;
      int c399 = 200;
      _Bool c400 = ((t398 != c399)) ? 1 : 0;
      if (c400) {
      } else {
        char* cast401 = (char*)&(_str_5);
        char* c402 = _str_1;
        unsigned int c403 = 27;
        char* cast404 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast401, c402, c403, cast404);
      }
      struct std__basic_ostream_char__std__char_traits_char__* r405 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c406 = 0;
      __retval340 = c406;
      int t407 = __retval340;
      int ret_val408 = t407;
      {
        std__vector_int__std__allocator_int______vector(&second345);
      }
      {
        std__vector_int__std__allocator_int______vector(&first342);
      }
      return ret_val408;
  int t409 = __retval340;
  return t409;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v410) {
bb411:
  struct std____new_allocator_int_* this412;
  this412 = v410;
  struct std____new_allocator_int_* t413 = this412;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v414, unsigned long* v415) {
bb416:
  unsigned long* __a417;
  unsigned long* __b418;
  unsigned long* __retval419;
  __a417 = v414;
  __b418 = v415;
    unsigned long* t420 = __b418;
    unsigned long t421 = *t420;
    unsigned long* t422 = __a417;
    unsigned long t423 = *t422;
    _Bool c424 = ((t421 < t423)) ? 1 : 0;
    if (c424) {
      unsigned long* t425 = __b418;
      __retval419 = t425;
      unsigned long* t426 = __retval419;
      return t426;
    }
  unsigned long* t427 = __a417;
  __retval419 = t427;
  unsigned long* t428 = __retval419;
  return t428;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v429) {
bb430:
  struct std__allocator_int_* __a431;
  unsigned long __retval432;
  unsigned long __diffmax433;
  unsigned long __allocmax434;
  __a431 = v429;
  unsigned long c435 = 2305843009213693951;
  __diffmax433 = c435;
  unsigned long c436 = 4611686018427387903;
  __allocmax434 = c436;
  unsigned long* r437 = unsigned_long_const__std__min_unsigned_long_(&__diffmax433, &__allocmax434);
  unsigned long t438 = *r437;
  __retval432 = t438;
  unsigned long t439 = __retval432;
  return t439;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v440, struct std__allocator_int_* v441) {
bb442:
  struct std__allocator_int_* this443;
  struct std__allocator_int_* __a444;
  this443 = v440;
  __a444 = v441;
  struct std__allocator_int_* t445 = this443;
  struct std____new_allocator_int_* base446 = (struct std____new_allocator_int_*)((char *)t445 + 0);
  struct std__allocator_int_* t447 = __a444;
  struct std____new_allocator_int_* base448 = (struct std____new_allocator_int_*)((char *)t447 + 0);
  std____new_allocator_int_____new_allocator(base446, base448);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v449, struct std__allocator_int_* v450) {
bb451:
  unsigned long __n452;
  struct std__allocator_int_* __a453;
  unsigned long __retval454;
  __n452 = v449;
  __a453 = v450;
    struct std__allocator_int_ ref_tmp0455;
    _Bool tmp_exprcleanup456;
    unsigned long t457 = __n452;
    struct std__allocator_int_* t458 = __a453;
    std__allocator_int___allocator(&ref_tmp0455, t458);
      unsigned long r459 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0455);
      _Bool c460 = ((t457 > r459)) ? 1 : 0;
      tmp_exprcleanup456 = c460;
    {
      std__allocator_int____allocator(&ref_tmp0455);
    }
    _Bool t461 = tmp_exprcleanup456;
    if (t461) {
      char* cast462 = (char*)&(_str_6);
      std____throw_length_error(cast462);
    }
  unsigned long t463 = __n452;
  __retval454 = t463;
  unsigned long t464 = __retval454;
  return t464;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v465, struct std__allocator_int_* v466) {
bb467:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this468;
  struct std__allocator_int_* __a469;
  this468 = v465;
  __a469 = v466;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t470 = this468;
  struct std__allocator_int_* base471 = (struct std__allocator_int_*)((char *)t470 + 0);
  struct std__allocator_int_* t472 = __a469;
  std__allocator_int___allocator(base471, t472);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base473 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t470 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base473);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb474:
  _Bool __retval475;
    _Bool c476 = 0;
    __retval475 = c476;
    _Bool t477 = __retval475;
    return t477;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v478) {
bb479:
  struct std____new_allocator_int_* this480;
  unsigned long __retval481;
  this480 = v478;
  struct std____new_allocator_int_* t482 = this480;
  unsigned long c483 = 9223372036854775807;
  unsigned long c484 = 4;
  unsigned long b485 = c483 / c484;
  __retval481 = b485;
  unsigned long t486 = __retval481;
  return t486;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v487, unsigned long v488, void* v489) {
bb490:
  struct std____new_allocator_int_* this491;
  unsigned long __n492;
  void* unnamed493;
  int* __retval494;
  this491 = v487;
  __n492 = v488;
  unnamed493 = v489;
  struct std____new_allocator_int_* t495 = this491;
    unsigned long t496 = __n492;
    unsigned long r497 = std____new_allocator_int____M_max_size___const(t495);
    _Bool c498 = ((t496 > r497)) ? 1 : 0;
    if (c498) {
        unsigned long t499 = __n492;
        unsigned long c500 = -1;
        unsigned long c501 = 4;
        unsigned long b502 = c500 / c501;
        _Bool c503 = ((t499 > b502)) ? 1 : 0;
        if (c503) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c504 = 4;
    unsigned long c505 = 16;
    _Bool c506 = ((c504 > c505)) ? 1 : 0;
    if (c506) {
      unsigned long __al507;
      unsigned long c508 = 4;
      __al507 = c508;
      unsigned long t509 = __n492;
      unsigned long c510 = 4;
      unsigned long b511 = t509 * c510;
      unsigned long t512 = __al507;
      void* r513 = operator_new_2(b511, t512);
      int* cast514 = (int*)r513;
      __retval494 = cast514;
      int* t515 = __retval494;
      return t515;
    }
  unsigned long t516 = __n492;
  unsigned long c517 = 4;
  unsigned long b518 = t516 * c517;
  void* r519 = operator_new(b518);
  int* cast520 = (int*)r519;
  __retval494 = cast520;
  int* t521 = __retval494;
  return t521;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v522, unsigned long v523) {
bb524:
  struct std__allocator_int_* this525;
  unsigned long __n526;
  int* __retval527;
  this525 = v522;
  __n526 = v523;
  struct std__allocator_int_* t528 = this525;
    _Bool r529 = std____is_constant_evaluated();
    if (r529) {
        unsigned long t530 = __n526;
        unsigned long c531 = 4;
        unsigned long ovr532;
        _Bool ovf533 = __builtin_mul_overflow(t530, c531, &ovr532);
        __n526 = ovr532;
        if (ovf533) {
          std____throw_bad_array_new_length();
        }
      unsigned long t534 = __n526;
      void* r535 = operator_new(t534);
      int* cast536 = (int*)r535;
      __retval527 = cast536;
      int* t537 = __retval527;
      return t537;
    }
  struct std____new_allocator_int_* base538 = (struct std____new_allocator_int_*)((char *)t528 + 0);
  unsigned long t539 = __n526;
  void* c540 = ((void*)0);
  int* r541 = std____new_allocator_int___allocate(base538, t539, c540);
  __retval527 = r541;
  int* t542 = __retval527;
  return t542;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v543, unsigned long v544) {
bb545:
  struct std__allocator_int_* __a546;
  unsigned long __n547;
  int* __retval548;
  __a546 = v543;
  __n547 = v544;
  struct std__allocator_int_* t549 = __a546;
  unsigned long t550 = __n547;
  int* r551 = std__allocator_int___allocate(t549, t550);
  __retval548 = r551;
  int* t552 = __retval548;
  return t552;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v553, unsigned long v554) {
bb555:
  struct std___Vector_base_int__std__allocator_int__* this556;
  unsigned long __n557;
  int* __retval558;
  this556 = v553;
  __n557 = v554;
  struct std___Vector_base_int__std__allocator_int__* t559 = this556;
  unsigned long t560 = __n557;
  unsigned long c561 = 0;
  _Bool c562 = ((t560 != c561)) ? 1 : 0;
  int* ternary563;
  if (c562) {
    struct std__allocator_int_* base564 = (struct std__allocator_int_*)((char *)&(t559->_M_impl) + 0);
    unsigned long t565 = __n557;
    int* r566 = std__allocator_traits_std__allocator_int_____allocate(base564, t565);
    ternary563 = (int*)r566;
  } else {
    int* c567 = ((void*)0);
    ternary563 = (int*)c567;
  }
  __retval558 = ternary563;
  int* t568 = __retval558;
  return t568;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v569, unsigned long v570) {
bb571:
  struct std___Vector_base_int__std__allocator_int__* this572;
  unsigned long __n573;
  this572 = v569;
  __n573 = v570;
  struct std___Vector_base_int__std__allocator_int__* t574 = this572;
  unsigned long t575 = __n573;
  int* r576 = std___Vector_base_int__std__allocator_int______M_allocate(t574, t575);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base577 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t574->_M_impl) + 0);
  base577->_M_start = r576;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base578 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t574->_M_impl) + 0);
  int* t579 = base578->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base580 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t574->_M_impl) + 0);
  base580->_M_finish = t579;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base581 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t574->_M_impl) + 0);
  int* t582 = base581->_M_start;
  unsigned long t583 = __n573;
  int* ptr584 = &(t582)[t583];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base585 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t574->_M_impl) + 0);
  base585->_M_end_of_storage = ptr584;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v586) {
bb587:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this588;
  this588 = v586;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t589 = this588;
  {
    struct std__allocator_int_* base590 = (struct std__allocator_int_*)((char *)t589 + 0);
    std__allocator_int____allocator(base590);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v591, unsigned long v592, struct std__allocator_int_* v593) {
bb594:
  struct std___Vector_base_int__std__allocator_int__* this595;
  unsigned long __n596;
  struct std__allocator_int_* __a597;
  this595 = v591;
  __n596 = v592;
  __a597 = v593;
  struct std___Vector_base_int__std__allocator_int__* t598 = this595;
  struct std__allocator_int_* t599 = __a597;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t598->_M_impl, t599);
    unsigned long t600 = __n596;
    std___Vector_base_int__std__allocator_int______M_create_storage(t598, t600);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb601:
  _Bool __retval602;
    _Bool c603 = 0;
    __retval602 = c603;
    _Bool t604 = __retval602;
    return t604;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v605, int** v606) {
bb607:
  struct std___UninitDestroyGuard_int____void_* this608;
  int** __first609;
  this608 = v605;
  __first609 = v606;
  struct std___UninitDestroyGuard_int____void_* t610 = this608;
  int** t611 = __first609;
  int* t612 = *t611;
  t610->_M_first = t612;
  int** t613 = __first609;
  t610->_M_cur = t613;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v614, int* v615) {
bb616:
  int* __location617;
  int* __args618;
  int* __retval619;
  void* __loc620;
  __location617 = v614;
  __args618 = v615;
  int* t621 = __location617;
  void* cast622 = (void*)t621;
  __loc620 = cast622;
    void* t623 = __loc620;
    int* cast624 = (int*)t623;
    int* t625 = __args618;
    int t626 = *t625;
    *cast624 = t626;
    __retval619 = cast624;
    int* t627 = __retval619;
    return t627;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v628, int* v629) {
bb630:
  int* __p631;
  int* __args632;
  __p631 = v628;
  __args632 = v629;
    _Bool r633 = std____is_constant_evaluated();
    if (r633) {
      int* t634 = __p631;
      int* t635 = __args632;
      int* r636 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t634, t635);
      return;
    }
  int* t637 = __p631;
  void* cast638 = (void*)t637;
  int* cast639 = (int*)cast638;
  int* t640 = __args632;
  int t641 = *t640;
  *cast639 = t641;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v642) {
bb643:
  struct std___UninitDestroyGuard_int____void_* this644;
  this644 = v642;
  struct std___UninitDestroyGuard_int____void_* t645 = this644;
  int** c646 = ((void*)0);
  t645->_M_cur = c646;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v647) {
bb648:
  struct std___UninitDestroyGuard_int____void_* this649;
  this649 = v647;
  struct std___UninitDestroyGuard_int____void_* t650 = this649;
    int** t651 = t650->_M_cur;
    int** c652 = ((void*)0);
    _Bool c653 = ((t651 != c652)) ? 1 : 0;
    if (c653) {
      int* t654 = t650->_M_first;
      int** t655 = t650->_M_cur;
      int* t656 = *t655;
      void_std___Destroy_int__(t654, t656);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v657, unsigned long v658, int* v659) {
bb660:
  int* __first661;
  unsigned long __n662;
  int* __x663;
  int* __retval664;
  struct std___UninitDestroyGuard_int____void_ __guard665;
  __first661 = v657;
  __n662 = v658;
  __x663 = v659;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard665, &__first661);
        do {
              unsigned long t666 = __n662;
              unsigned long c667 = 0;
              _Bool c668 = ((t666 >= c667)) ? 1 : 0;
              _Bool u669 = !c668;
              if (u669) {
                char* cast670 = (char*)&(_str_7);
                int c671 = 463;
                char* cast672 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast673 = (char*)&(_str_8);
                std____glibcxx_assert_fail(cast670, c671, cast672, cast673);
              }
          _Bool c674 = 0;
          if (!c674) break;
        } while (1);
      while (1) {
        unsigned long t676 = __n662;
        unsigned long u677 = t676 - 1;
        __n662 = u677;
        _Bool cast678 = (_Bool)t676;
        if (!cast678) break;
        int* t679 = __first661;
        int* t680 = __x663;
        void_std___Construct_int__int_const__(t679, t680);
      for_step675: ;
        int* t681 = __first661;
        int c682 = 1;
        int* ptr683 = &(t681)[c682];
        __first661 = ptr683;
      }
    std___UninitDestroyGuard_int___void___release(&__guard665);
    int* t684 = __first661;
    __retval664 = t684;
    int* t685 = __retval664;
    int* ret_val686 = t685;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard665);
    }
    return ret_val686;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v687, unsigned long v688, int* v689) {
bb690:
  int* __first691;
  unsigned long __n692;
  int* __x693;
  int* __retval694;
  __first691 = v687;
  __n692 = v688;
  __x693 = v689;
  int* t695 = __first691;
  unsigned long t696 = __n692;
  int* t697 = __x693;
  int* r698 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t695, t696, t697);
  __retval694 = r698;
  int* t699 = __retval694;
  return t699;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v700, unsigned long v701, int* v702, struct std__allocator_int_* v703) {
bb704:
  int* __first705;
  unsigned long __n706;
  int* __x707;
  struct std__allocator_int_* unnamed708;
  int* __retval709;
  __first705 = v700;
  __n706 = v701;
  __x707 = v702;
  unnamed708 = v703;
    _Bool r710 = std__is_constant_evaluated();
    if (r710) {
      int* t711 = __first705;
      unsigned long t712 = __n706;
      int* t713 = __x707;
      int* r714 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t711, t712, t713);
      __retval709 = r714;
      int* t715 = __retval709;
      return t715;
    }
  int* t716 = __first705;
  unsigned long t717 = __n706;
  int* t718 = __x707;
  int* r719 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t716, t717, t718);
  __retval709 = r719;
  int* t720 = __retval709;
  return t720;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v721) {
bb722:
  struct std___Vector_base_int__std__allocator_int__* this723;
  struct std__allocator_int_* __retval724;
  this723 = v721;
  struct std___Vector_base_int__std__allocator_int__* t725 = this723;
  struct std__allocator_int_* base726 = (struct std__allocator_int_*)((char *)&(t725->_M_impl) + 0);
  __retval724 = base726;
  struct std__allocator_int_* t727 = __retval724;
  return t727;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v728, unsigned long v729, int* v730) {
bb731:
  struct std__vector_int__std__allocator_int__* this732;
  unsigned long __n733;
  int* __value734;
  this732 = v728;
  __n733 = v729;
  __value734 = v730;
  struct std__vector_int__std__allocator_int__* t735 = this732;
  struct std___Vector_base_int__std__allocator_int__* base736 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t735 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base737 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base736->_M_impl) + 0);
  int* t738 = base737->_M_start;
  unsigned long t739 = __n733;
  int* t740 = __value734;
  struct std___Vector_base_int__std__allocator_int__* base741 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t735 + 0);
  struct std__allocator_int_* r742 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base741);
  int* r743 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t738, t739, t740, r742);
  struct std___Vector_base_int__std__allocator_int__* base744 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t735 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base745 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base744->_M_impl) + 0);
  base745->_M_finish = r743;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v746, int* v747, unsigned long v748) {
bb749:
  struct std____new_allocator_int_* this750;
  int* __p751;
  unsigned long __n752;
  this750 = v746;
  __p751 = v747;
  __n752 = v748;
  struct std____new_allocator_int_* t753 = this750;
    unsigned long c754 = 4;
    unsigned long c755 = 16;
    _Bool c756 = ((c754 > c755)) ? 1 : 0;
    if (c756) {
      int* t757 = __p751;
      void* cast758 = (void*)t757;
      unsigned long t759 = __n752;
      unsigned long c760 = 4;
      unsigned long b761 = t759 * c760;
      unsigned long c762 = 4;
      operator_delete_3(cast758, b761, c762);
      return;
    }
  int* t763 = __p751;
  void* cast764 = (void*)t763;
  unsigned long t765 = __n752;
  unsigned long c766 = 4;
  unsigned long b767 = t765 * c766;
  operator_delete_2(cast764, b767);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v768, int* v769, unsigned long v770) {
bb771:
  struct std__allocator_int_* this772;
  int* __p773;
  unsigned long __n774;
  this772 = v768;
  __p773 = v769;
  __n774 = v770;
  struct std__allocator_int_* t775 = this772;
    _Bool r776 = std____is_constant_evaluated();
    if (r776) {
      int* t777 = __p773;
      void* cast778 = (void*)t777;
      operator_delete(cast778);
      return;
    }
  struct std____new_allocator_int_* base779 = (struct std____new_allocator_int_*)((char *)t775 + 0);
  int* t780 = __p773;
  unsigned long t781 = __n774;
  std____new_allocator_int___deallocate(base779, t780, t781);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v782, int* v783, unsigned long v784) {
bb785:
  struct std__allocator_int_* __a786;
  int* __p787;
  unsigned long __n788;
  __a786 = v782;
  __p787 = v783;
  __n788 = v784;
  struct std__allocator_int_* t789 = __a786;
  int* t790 = __p787;
  unsigned long t791 = __n788;
  std__allocator_int___deallocate(t789, t790, t791);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v792, int* v793, unsigned long v794) {
bb795:
  struct std___Vector_base_int__std__allocator_int__* this796;
  int* __p797;
  unsigned long __n798;
  this796 = v792;
  __p797 = v793;
  __n798 = v794;
  struct std___Vector_base_int__std__allocator_int__* t799 = this796;
    int* t800 = __p797;
    _Bool cast801 = (_Bool)t800;
    if (cast801) {
      struct std__allocator_int_* base802 = (struct std__allocator_int_*)((char *)&(t799->_M_impl) + 0);
      int* t803 = __p797;
      unsigned long t804 = __n798;
      std__allocator_traits_std__allocator_int_____deallocate(base802, t803, t804);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v805) {
bb806:
  struct std___Vector_base_int__std__allocator_int__* this807;
  this807 = v805;
  struct std___Vector_base_int__std__allocator_int__* t808 = this807;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base809 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t808->_M_impl) + 0);
    int* t810 = base809->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base811 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t808->_M_impl) + 0);
    int* t812 = base811->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base813 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t808->_M_impl) + 0);
    int* t814 = base813->_M_start;
    long diff815 = t812 - t814;
    unsigned long cast816 = (unsigned long)diff815;
    std___Vector_base_int__std__allocator_int______M_deallocate(t808, t810, cast816);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t808->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v817, struct std____new_allocator_int_* v818) {
bb819:
  struct std____new_allocator_int_* this820;
  struct std____new_allocator_int_* unnamed821;
  this820 = v817;
  unnamed821 = v818;
  struct std____new_allocator_int_* t822 = this820;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v823) {
bb824:
  int* __location825;
  __location825 = v823;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v826, int* v827) {
bb828:
  int* __first829;
  int* __last830;
  __first829 = v826;
  __last830 = v827;
      _Bool r831 = std____is_constant_evaluated();
      if (r831) {
          while (1) {
            int* t833 = __first829;
            int* t834 = __last830;
            _Bool c835 = ((t833 != t834)) ? 1 : 0;
            if (!c835) break;
            int* t836 = __first829;
            void_std__destroy_at_int_(t836);
          for_step832: ;
            int* t837 = __first829;
            int c838 = 1;
            int* ptr839 = &(t837)[c838];
            __first829 = ptr839;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v840, int* v841, struct std__allocator_int_* v842) {
bb843:
  int* __first844;
  int* __last845;
  struct std__allocator_int_* unnamed846;
  __first844 = v840;
  __last845 = v841;
  unnamed846 = v842;
  int* t847 = __first844;
  int* t848 = __last845;
  void_std___Destroy_int__(t847, t848);
  return;
}

