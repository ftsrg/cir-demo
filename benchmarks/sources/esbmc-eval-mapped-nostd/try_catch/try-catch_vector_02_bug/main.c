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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt12out_of_range[] = "_ZTISt12out_of_range";

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}
__attribute__((weak)) char* __VERIFIER_virtual_call_char_ptr(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char*(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char* __field0; char __field1[8]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cow_string { union anon_0 __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__exception { void* __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__logic_error { struct std__exception __field0; struct std____cow_string __field1; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__out_of_range { struct std__logic_error __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
static const char _ZTISt12out_of_range__n_[] = "_ZTISt12out_of_range";
static void* _ZTISt12out_of_range[2] = {(void*)0, (void*)_ZTISt12out_of_range__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[21] = "Out of Range error: ";
char _str_1[49] = "cannot create std::vector larger than max_size()";
char _str_2[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
extern int __gxx_personality_v0();
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
  if (__cir_exc_active) {
    return;
  }
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base19 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base19);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v20) {
bb21:
  struct std__allocator_int_* this22;
  this22 = v20;
  struct std__allocator_int_* t23 = this22;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v24) {
bb25:
  struct std__vector_int__std__allocator_int__* this26;
  unsigned long __retval27;
  long __dif28;
  this26 = v24;
  struct std__vector_int__std__allocator_int__* t29 = this26;
  struct std___Vector_base_int__std__allocator_int__* base30 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t29 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base31 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base30->_M_impl) + 0);
  int* t32 = base31->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base33 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t29 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base34 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base33->_M_impl) + 0);
  int* t35 = base34->_M_start;
  long diff36 = t32 - t35;
  __dif28 = diff36;
    long t37 = __dif28;
    long c38 = 0;
    _Bool c39 = ((t37 < c38)) ? 1 : 0;
    if (c39) {
      __builtin_unreachable();
    }
  long t40 = __dif28;
  unsigned long cast41 = (unsigned long)t40;
  __retval27 = cast41;
  unsigned long t42 = __retval27;
  return t42;
}

// function: _ZNKSt6vectorIiSaIiEE14_M_range_checkEm
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* v43, unsigned long v44) {
bb45:
  struct std__vector_int__std__allocator_int__* this46;
  unsigned long __n47;
  this46 = v43;
  __n47 = v44;
  struct std__vector_int__std__allocator_int__* t48 = this46;
    unsigned long t49 = __n47;
    unsigned long r50 = std__vector_int__std__allocator_int_____size___const(t48);
    _Bool c51 = ((t49 >= r50)) ? 1 : 0;
    if (c51) {
      char* cast52 = (char*)&(_str_2);
      unsigned long t53 = __n47;
      unsigned long r54 = std__vector_int__std__allocator_int_____size___const(t48);
      std____throw_out_of_range_fmt(cast52, t53, r54);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v55, unsigned long v56) {
bb57:
  struct std__vector_int__std__allocator_int__* this58;
  unsigned long __n59;
  int* __retval60;
  this58 = v55;
  __n59 = v56;
  struct std__vector_int__std__allocator_int__* t61 = this58;
    do {
          unsigned long t62 = __n59;
          unsigned long r63 = std__vector_int__std__allocator_int_____size___const(t61);
          _Bool c64 = ((t62 < r63)) ? 1 : 0;
          _Bool u65 = !c64;
          if (u65) {
            char* cast66 = (char*)&(_str_3);
            int c67 = 1263;
            char* cast68 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast69 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast66, c67, cast68, cast69);
          }
      _Bool c70 = 0;
      if (!c70) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base71 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t61 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base72 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base71->_M_impl) + 0);
  int* t73 = base72->_M_start;
  unsigned long t74 = __n59;
  int* ptr75 = &(t73)[t74];
  __retval60 = ptr75;
  int* t76 = __retval60;
  return t76;
}

// function: _ZNSt6vectorIiSaIiEE2atEm
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* v77, unsigned long v78) {
bb79:
  struct std__vector_int__std__allocator_int__* this80;
  unsigned long __n81;
  int* __retval82;
  this80 = v77;
  __n81 = v78;
  struct std__vector_int__std__allocator_int__* t83 = this80;
  unsigned long t84 = __n81;
  std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(t83, t84);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  unsigned long t85 = __n81;
  int* r86 = std__vector_int__std__allocator_int_____operator__(t83, t85);
  __retval82 = r86;
  int* t87 = __retval82;
  return t87;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v88, int v89) {
bb90:
  int __a91;
  int __b92;
  int __retval93;
  __a91 = v88;
  __b92 = v89;
  int t94 = __a91;
  int t95 = __b92;
  int b96 = t94 | t95;
  __retval93 = b96;
  int t97 = __retval93;
  return t97;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v98) {
bb99:
  struct std__basic_ios_char__std__char_traits_char__* this100;
  int __retval101;
  this100 = v98;
  struct std__basic_ios_char__std__char_traits_char__* t102 = this100;
  struct std__ios_base* base103 = (struct std__ios_base*)((char *)t102 + 0);
  int t104 = base103->_M_streambuf_state;
  __retval101 = t104;
  int t105 = __retval101;
  return t105;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v106, int v107) {
bb108:
  struct std__basic_ios_char__std__char_traits_char__* this109;
  int __state110;
  this109 = v106;
  __state110 = v107;
  struct std__basic_ios_char__std__char_traits_char__* t111 = this109;
  int r112 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t111);
  if (__cir_exc_active) {
    return;
  }
  int t113 = __state110;
  int r114 = std__operator_(r112, t113);
  std__basic_ios_char__std__char_traits_char_____clear(t111, r114);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v115, char* v116) {
bb117:
  char* __c1118;
  char* __c2119;
  _Bool __retval120;
  __c1118 = v115;
  __c2119 = v116;
  char* t121 = __c1118;
  char t122 = *t121;
  int cast123 = (int)t122;
  char* t124 = __c2119;
  char t125 = *t124;
  int cast126 = (int)t125;
  _Bool c127 = ((cast123 == cast126)) ? 1 : 0;
  __retval120 = c127;
  _Bool t128 = __retval120;
  return t128;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v129) {
bb130:
  char* __p131;
  unsigned long __retval132;
  unsigned long __i133;
  __p131 = v129;
  unsigned long c134 = 0;
  __i133 = c134;
    char ref_tmp0135;
    while (1) {
      unsigned long t136 = __i133;
      char* t137 = __p131;
      char* ptr138 = &(t137)[t136];
      char c139 = 0;
      ref_tmp0135 = c139;
      _Bool r140 = __gnu_cxx__char_traits_char___eq(ptr138, &ref_tmp0135);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u141 = !r140;
      if (!u141) break;
      unsigned long t142 = __i133;
      unsigned long u143 = t142 + 1;
      __i133 = u143;
    }
  unsigned long t144 = __i133;
  __retval132 = t144;
  unsigned long t145 = __retval132;
  return t145;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v146) {
bb147:
  char* __s148;
  unsigned long __retval149;
  __s148 = v146;
    _Bool r150 = std____is_constant_evaluated();
    if (r150) {
      char* t151 = __s148;
      unsigned long r152 = __gnu_cxx__char_traits_char___length(t151);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval149 = r152;
      unsigned long t153 = __retval149;
      return t153;
    }
  char* t154 = __s148;
  unsigned long r155 = strlen(t154);
  __retval149 = r155;
  unsigned long t156 = __retval149;
  return t156;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v157, char* v158) {
bb159:
  struct std__basic_ostream_char__std__char_traits_char__* __out160;
  char* __s161;
  struct std__basic_ostream_char__std__char_traits_char__* __retval162;
  __out160 = v157;
  __s161 = v158;
    char* t163 = __s161;
    _Bool cast164 = (_Bool)t163;
    _Bool u165 = !cast164;
    if (u165) {
      struct std__basic_ostream_char__std__char_traits_char__* t166 = __out160;
      void** v167 = (void**)t166;
      void* v168 = *((void**)v167);
      unsigned char* cast169 = (unsigned char*)v168;
      long c170 = -24;
      unsigned char* ptr171 = &(cast169)[c170];
      long* cast172 = (long*)ptr171;
      long t173 = *cast172;
      unsigned char* cast174 = (unsigned char*)t166;
      unsigned char* ptr175 = &(cast174)[t173];
      struct std__basic_ostream_char__std__char_traits_char__* cast176 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr175;
      struct std__basic_ios_char__std__char_traits_char__* cast177 = (struct std__basic_ios_char__std__char_traits_char__*)cast176;
      int t178 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast177, t178);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t179 = __out160;
      char* t180 = __s161;
      char* t181 = __s161;
      unsigned long r182 = std__char_traits_char___length(t181);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast183 = (long)r182;
      struct std__basic_ostream_char__std__char_traits_char__* r184 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t179, t180, cast183);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __out160;
  __retval162 = t185;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval162;
  return t186;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v187, void* v188) {
bb189:
  struct std__basic_ostream_char__std__char_traits_char__* this190;
  void* __pf191;
  struct std__basic_ostream_char__std__char_traits_char__* __retval192;
  this190 = v187;
  __pf191 = v188;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = this190;
  void* t194 = __pf191;
  struct std__basic_ostream_char__std__char_traits_char__* r195 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t194)(t193);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval192 = r195;
  struct std__basic_ostream_char__std__char_traits_char__* t196 = __retval192;
  return t196;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v197) {
bb198:
  struct std__basic_ostream_char__std__char_traits_char__* __os199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval200;
  __os199 = v197;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = __os199;
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__flush(t201);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval200 = r202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval200;
  return t203;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v204) {
bb205:
  struct std__ctype_char_* __f206;
  struct std__ctype_char_* __retval207;
  __f206 = v204;
    struct std__ctype_char_* t208 = __f206;
    _Bool cast209 = (_Bool)t208;
    _Bool u210 = !cast209;
    if (u210) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t211 = __f206;
  __retval207 = t211;
  struct std__ctype_char_* t212 = __retval207;
  return t212;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v213, char v214) {
bb215:
  struct std__ctype_char_* this216;
  char __c217;
  char __retval218;
  this216 = v213;
  __c217 = v214;
  struct std__ctype_char_* t219 = this216;
    char t220 = t219->_M_widen_ok;
    _Bool cast221 = (_Bool)t220;
    if (cast221) {
      char t222 = __c217;
      unsigned char cast223 = (unsigned char)t222;
      unsigned long cast224 = (unsigned long)cast223;
      char t225 = t219->_M_widen[cast224];
      __retval218 = t225;
      char t226 = __retval218;
      return t226;
    }
  std__ctype_char____M_widen_init___const(t219);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t227 = __c217;
  void** v228 = (void**)t219;
  void* v229 = *((void**)v228);
  char vcall232 = (char)__VERIFIER_virtual_call_char_char(t219, 6, t227);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval218 = vcall232;
  char t233 = __retval218;
  return t233;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v234, char v235) {
bb236:
  struct std__basic_ios_char__std__char_traits_char__* this237;
  char __c238;
  char __retval239;
  this237 = v234;
  __c238 = v235;
  struct std__basic_ios_char__std__char_traits_char__* t240 = this237;
  struct std__ctype_char_* t241 = t240->_M_ctype;
  struct std__ctype_char_* r242 = std__ctype_char__const__std____check_facet_std__ctype_char___(t241);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t243 = __c238;
  char r244 = std__ctype_char___widen_char__const(r242, t243);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval239 = r244;
  char t245 = __retval239;
  return t245;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v246) {
bb247:
  struct std__basic_ostream_char__std__char_traits_char__* __os248;
  struct std__basic_ostream_char__std__char_traits_char__* __retval249;
  __os248 = v246;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __os248;
  struct std__basic_ostream_char__std__char_traits_char__* t251 = __os248;
  void** v252 = (void**)t251;
  void* v253 = *((void**)v252);
  unsigned char* cast254 = (unsigned char*)v253;
  long c255 = -24;
  unsigned char* ptr256 = &(cast254)[c255];
  long* cast257 = (long*)ptr256;
  long t258 = *cast257;
  unsigned char* cast259 = (unsigned char*)t251;
  unsigned char* ptr260 = &(cast259)[t258];
  struct std__basic_ostream_char__std__char_traits_char__* cast261 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr260;
  struct std__basic_ios_char__std__char_traits_char__* cast262 = (struct std__basic_ios_char__std__char_traits_char__*)cast261;
  char c263 = 10;
  char r264 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast262, c263);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__ostream__put(t250, r264);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r265);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval249 = r266;
  struct std__basic_ostream_char__std__char_traits_char__* t267 = __retval249;
  return t267;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v268) {
bb269:
  struct std__vector_int__std__allocator_int__* this270;
  this270 = v268;
  struct std__vector_int__std__allocator_int__* t271 = this270;
    struct std___Vector_base_int__std__allocator_int__* base272 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t271 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base273 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base272->_M_impl) + 0);
    int* t274 = base273->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base275 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t271 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base276 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base275->_M_impl) + 0);
    int* t277 = base276->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base278 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t271 + 0);
    struct std__allocator_int_* r279 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base278);
    void_std___Destroy_int___int_(t274, t277, r279);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base280 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t271 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base280);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base281 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t271 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base281);
  }
  return;
}

// function: main
int main() {
bb282:
  int __retval283;
  struct std__vector_int__std__allocator_int__ myvector284;
  struct std__allocator_int_ ref_tmp0285;
  int c286 = 0;
  __retval283 = c286;
  unsigned long c287 = 10;
  std__allocator_int___allocator_2(&ref_tmp0285);
    std__vector_int__std__allocator_int_____vector(&myvector284, c287, &ref_tmp0285);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp0285);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp0285);
  }
      struct std__out_of_range* oor288;
        int c290 = 100;
        unsigned long c291 = 20;
        int* r292 = std__vector_int__std__allocator_int_____at(&myvector284, c291);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&myvector284);
          }
          goto cir_try_dispatch289;
        }
        *r292 = c290;
      cir_try_dispatch289: ;
      if (__cir_exc_active) {
      if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt12out_of_range) {
        int ca_tok293 = 0;
        void* ca_exn294 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          oor288 = (struct std__out_of_range*)__cir_exc_ptr;
          char* cast295 = (char*)&(_str);
          struct std__basic_ostream_char__std__char_traits_char__* r296 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast295);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            {
              std__vector_int__std__allocator_int______vector(&myvector284);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__out_of_range* t297 = oor288;
          struct std__logic_error* base298 = (struct std__logic_error*)((char *)t297 + 0);
          void** v299 = (void**)base298;
          void* v300 = *((void**)v299);
          char* vcall303 = (char*)__VERIFIER_virtual_call_char_ptr(base298, 2);
          struct std__basic_ostream_char__std__char_traits_char__* r304 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r296, vcall303);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            {
              std__vector_int__std__allocator_int______vector(&myvector284);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* r305 = std__ostream__operator___std__ostream_____(r304, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          if (__cir_exc_active) {
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            {
              std__vector_int__std__allocator_int______vector(&myvector284);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
      }
      else {
        __cir_exc_active = 1;
        { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      }
      }
    int c306 = 0;
    __retval283 = c306;
    int t307 = __retval283;
    int ret_val308 = t307;
    {
      std__vector_int__std__allocator_int______vector(&myvector284);
    }
    return ret_val308;
  int t309 = __retval283;
  return t309;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v310) {
bb311:
  struct std____new_allocator_int_* this312;
  this312 = v310;
  struct std____new_allocator_int_* t313 = this312;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v314, unsigned long* v315) {
bb316:
  unsigned long* __a317;
  unsigned long* __b318;
  unsigned long* __retval319;
  __a317 = v314;
  __b318 = v315;
    unsigned long* t320 = __b318;
    unsigned long t321 = *t320;
    unsigned long* t322 = __a317;
    unsigned long t323 = *t322;
    _Bool c324 = ((t321 < t323)) ? 1 : 0;
    if (c324) {
      unsigned long* t325 = __b318;
      __retval319 = t325;
      unsigned long* t326 = __retval319;
      return t326;
    }
  unsigned long* t327 = __a317;
  __retval319 = t327;
  unsigned long* t328 = __retval319;
  return t328;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v329) {
bb330:
  struct std__allocator_int_* __a331;
  unsigned long __retval332;
  unsigned long __diffmax333;
  unsigned long __allocmax334;
  __a331 = v329;
  unsigned long c335 = 2305843009213693951;
  __diffmax333 = c335;
  unsigned long c336 = 4611686018427387903;
  __allocmax334 = c336;
  unsigned long* r337 = unsigned_long_const__std__min_unsigned_long_(&__diffmax333, &__allocmax334);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t338 = *r337;
  __retval332 = t338;
  unsigned long t339 = __retval332;
  return t339;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v340, struct std__allocator_int_* v341) {
bb342:
  struct std__allocator_int_* this343;
  struct std__allocator_int_* __a344;
  this343 = v340;
  __a344 = v341;
  struct std__allocator_int_* t345 = this343;
  struct std____new_allocator_int_* base346 = (struct std____new_allocator_int_*)((char *)t345 + 0);
  struct std__allocator_int_* t347 = __a344;
  struct std____new_allocator_int_* base348 = (struct std____new_allocator_int_*)((char *)t347 + 0);
  std____new_allocator_int_____new_allocator(base346, base348);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v349, struct std__allocator_int_* v350) {
bb351:
  unsigned long __n352;
  struct std__allocator_int_* __a353;
  unsigned long __retval354;
  __n352 = v349;
  __a353 = v350;
    struct std__allocator_int_ ref_tmp0355;
    _Bool tmp_exprcleanup356;
    unsigned long t357 = __n352;
    struct std__allocator_int_* t358 = __a353;
    std__allocator_int___allocator(&ref_tmp0355, t358);
      unsigned long r359 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0355);
      _Bool c360 = ((t357 > r359)) ? 1 : 0;
      tmp_exprcleanup356 = c360;
    {
      std__allocator_int____allocator(&ref_tmp0355);
    }
    _Bool t361 = tmp_exprcleanup356;
    if (t361) {
      char* cast362 = (char*)&(_str_1);
      std____throw_length_error(cast362);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t363 = __n352;
  __retval354 = t363;
  unsigned long t364 = __retval354;
  return t364;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v365, struct std__allocator_int_* v366) {
bb367:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this368;
  struct std__allocator_int_* __a369;
  this368 = v365;
  __a369 = v366;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t370 = this368;
  struct std__allocator_int_* base371 = (struct std__allocator_int_*)((char *)t370 + 0);
  struct std__allocator_int_* t372 = __a369;
  std__allocator_int___allocator(base371, t372);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base373 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t370 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base373);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb374:
  _Bool __retval375;
    _Bool c376 = 0;
    __retval375 = c376;
    _Bool t377 = __retval375;
    return t377;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v378) {
bb379:
  struct std____new_allocator_int_* this380;
  unsigned long __retval381;
  this380 = v378;
  struct std____new_allocator_int_* t382 = this380;
  unsigned long c383 = 9223372036854775807;
  unsigned long c384 = 4;
  unsigned long b385 = c383 / c384;
  __retval381 = b385;
  unsigned long t386 = __retval381;
  return t386;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v387, unsigned long v388, void* v389) {
bb390:
  struct std____new_allocator_int_* this391;
  unsigned long __n392;
  void* unnamed393;
  int* __retval394;
  this391 = v387;
  __n392 = v388;
  unnamed393 = v389;
  struct std____new_allocator_int_* t395 = this391;
    unsigned long t396 = __n392;
    unsigned long r397 = std____new_allocator_int____M_max_size___const(t395);
    _Bool c398 = ((t396 > r397)) ? 1 : 0;
    if (c398) {
        unsigned long t399 = __n392;
        unsigned long c400 = -1;
        unsigned long c401 = 4;
        unsigned long b402 = c400 / c401;
        _Bool c403 = ((t399 > b402)) ? 1 : 0;
        if (c403) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c404 = 4;
    unsigned long c405 = 16;
    _Bool c406 = ((c404 > c405)) ? 1 : 0;
    if (c406) {
      unsigned long __al407;
      unsigned long c408 = 4;
      __al407 = c408;
      unsigned long t409 = __n392;
      unsigned long c410 = 4;
      unsigned long b411 = t409 * c410;
      unsigned long t412 = __al407;
      void* r413 = operator_new_2(b411, t412);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast414 = (int*)r413;
      __retval394 = cast414;
      int* t415 = __retval394;
      return t415;
    }
  unsigned long t416 = __n392;
  unsigned long c417 = 4;
  unsigned long b418 = t416 * c417;
  void* r419 = operator_new(b418);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast420 = (int*)r419;
  __retval394 = cast420;
  int* t421 = __retval394;
  return t421;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v422, unsigned long v423) {
bb424:
  struct std__allocator_int_* this425;
  unsigned long __n426;
  int* __retval427;
  this425 = v422;
  __n426 = v423;
  struct std__allocator_int_* t428 = this425;
    _Bool r429 = std____is_constant_evaluated();
    if (r429) {
        unsigned long t430 = __n426;
        unsigned long c431 = 4;
        unsigned long ovr432;
        _Bool ovf433 = __builtin_mul_overflow(t430, c431, &ovr432);
        __n426 = ovr432;
        if (ovf433) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t434 = __n426;
      void* r435 = operator_new(t434);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast436 = (int*)r435;
      __retval427 = cast436;
      int* t437 = __retval427;
      return t437;
    }
  struct std____new_allocator_int_* base438 = (struct std____new_allocator_int_*)((char *)t428 + 0);
  unsigned long t439 = __n426;
  void* c440 = ((void*)0);
  int* r441 = std____new_allocator_int___allocate(base438, t439, c440);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval427 = r441;
  int* t442 = __retval427;
  return t442;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v443, unsigned long v444) {
bb445:
  struct std__allocator_int_* __a446;
  unsigned long __n447;
  int* __retval448;
  __a446 = v443;
  __n447 = v444;
  struct std__allocator_int_* t449 = __a446;
  unsigned long t450 = __n447;
  int* r451 = std__allocator_int___allocate(t449, t450);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval448 = r451;
  int* t452 = __retval448;
  return t452;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v453, unsigned long v454) {
bb455:
  struct std___Vector_base_int__std__allocator_int__* this456;
  unsigned long __n457;
  int* __retval458;
  this456 = v453;
  __n457 = v454;
  struct std___Vector_base_int__std__allocator_int__* t459 = this456;
  unsigned long t460 = __n457;
  unsigned long c461 = 0;
  _Bool c462 = ((t460 != c461)) ? 1 : 0;
  int* ternary463;
  if (c462) {
    struct std__allocator_int_* base464 = (struct std__allocator_int_*)((char *)&(t459->_M_impl) + 0);
    unsigned long t465 = __n457;
    int* r466 = std__allocator_traits_std__allocator_int_____allocate(base464, t465);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary463 = (int*)r466;
  } else {
    int* c467 = ((void*)0);
    ternary463 = (int*)c467;
  }
  __retval458 = ternary463;
  int* t468 = __retval458;
  return t468;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v469, unsigned long v470) {
bb471:
  struct std___Vector_base_int__std__allocator_int__* this472;
  unsigned long __n473;
  this472 = v469;
  __n473 = v470;
  struct std___Vector_base_int__std__allocator_int__* t474 = this472;
  unsigned long t475 = __n473;
  int* r476 = std___Vector_base_int__std__allocator_int______M_allocate(t474, t475);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base477 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t474->_M_impl) + 0);
  base477->_M_start = r476;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base478 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t474->_M_impl) + 0);
  int* t479 = base478->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base480 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t474->_M_impl) + 0);
  base480->_M_finish = t479;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base481 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t474->_M_impl) + 0);
  int* t482 = base481->_M_start;
  unsigned long t483 = __n473;
  int* ptr484 = &(t482)[t483];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base485 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t474->_M_impl) + 0);
  base485->_M_end_of_storage = ptr484;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v486) {
bb487:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this488;
  this488 = v486;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t489 = this488;
  {
    struct std__allocator_int_* base490 = (struct std__allocator_int_*)((char *)t489 + 0);
    std__allocator_int____allocator(base490);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v491, unsigned long v492, struct std__allocator_int_* v493) {
bb494:
  struct std___Vector_base_int__std__allocator_int__* this495;
  unsigned long __n496;
  struct std__allocator_int_* __a497;
  this495 = v491;
  __n496 = v492;
  __a497 = v493;
  struct std___Vector_base_int__std__allocator_int__* t498 = this495;
  struct std__allocator_int_* t499 = __a497;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t498->_M_impl, t499);
    unsigned long t500 = __n496;
    std___Vector_base_int__std__allocator_int______M_create_storage(t498, t500);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t498->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb501:
  _Bool __retval502;
    _Bool c503 = 0;
    __retval502 = c503;
    _Bool t504 = __retval502;
    return t504;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v505, int** v506) {
bb507:
  struct std___UninitDestroyGuard_int____void_* this508;
  int** __first509;
  this508 = v505;
  __first509 = v506;
  struct std___UninitDestroyGuard_int____void_* t510 = this508;
  int** t511 = __first509;
  int* t512 = *t511;
  t510->_M_first = t512;
  int** t513 = __first509;
  t510->_M_cur = t513;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v514) {
bb515:
  int* __location516;
  int* __retval517;
  void* __loc518;
  __location516 = v514;
  int* t519 = __location516;
  void* cast520 = (void*)t519;
  __loc518 = cast520;
    void* t521 = __loc518;
    int* cast522 = (int*)t521;
    int c523 = 0;
    *cast522 = c523;
    __retval517 = cast522;
    int* t524 = __retval517;
    return t524;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v525) {
bb526:
  int* __p527;
  __p527 = v525;
    _Bool r528 = std____is_constant_evaluated();
    if (r528) {
      int* t529 = __p527;
      int* r530 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t529);
      return;
    }
  int* t531 = __p527;
  void* cast532 = (void*)t531;
  int* cast533 = (int*)cast532;
  int c534 = 0;
  *cast533 = c534;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v535) {
bb536:
  struct std___UninitDestroyGuard_int____void_* this537;
  this537 = v535;
  struct std___UninitDestroyGuard_int____void_* t538 = this537;
  int** c539 = ((void*)0);
  t538->_M_cur = c539;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v540) {
bb541:
  struct std___UninitDestroyGuard_int____void_* this542;
  this542 = v540;
  struct std___UninitDestroyGuard_int____void_* t543 = this542;
    int** t544 = t543->_M_cur;
    int** c545 = ((void*)0);
    _Bool c546 = ((t544 != c545)) ? 1 : 0;
    if (c546) {
      int* t547 = t543->_M_first;
      int** t548 = t543->_M_cur;
      int* t549 = *t548;
      void_std___Destroy_int__(t547, t549);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v550, unsigned long v551) {
bb552:
  int* __first553;
  unsigned long __n554;
  int* __retval555;
  struct std___UninitDestroyGuard_int____void_ __guard556;
  __first553 = v550;
  __n554 = v551;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard556, &__first553);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        unsigned long t558 = __n554;
        unsigned long c559 = 0;
        _Bool c560 = ((t558 > c559)) ? 1 : 0;
        if (!c560) break;
        int* t561 = __first553;
        void_std___Construct_int_(t561);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard556);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step557: ;
        unsigned long t562 = __n554;
        unsigned long u563 = t562 - 1;
        __n554 = u563;
        int* t564 = __first553;
        int c565 = 1;
        int* ptr566 = &(t564)[c565];
        __first553 = ptr566;
      }
    std___UninitDestroyGuard_int___void___release(&__guard556);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard556);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t567 = __first553;
    __retval555 = t567;
    int* t568 = __retval555;
    int* ret_val569 = t568;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard556);
    }
    return ret_val569;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v570, int* v571, int* v572) {
bb573:
  int* __first574;
  int* __last575;
  int* __value576;
  _Bool __load_outside_loop577;
  int __val578;
  __first574 = v570;
  __last575 = v571;
  __value576 = v572;
  _Bool c579 = 1;
  __load_outside_loop577 = c579;
  int* t580 = __value576;
  int t581 = *t580;
  __val578 = t581;
    while (1) {
      int* t583 = __first574;
      int* t584 = __last575;
      _Bool c585 = ((t583 != t584)) ? 1 : 0;
      if (!c585) break;
      int t586 = __val578;
      int* t587 = __first574;
      *t587 = t586;
    for_step582: ;
      int* t588 = __first574;
      int c589 = 1;
      int* ptr590 = &(t588)[c589];
      __first574 = ptr590;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v591, int* v592, int* v593) {
bb594:
  int* __first595;
  int* __last596;
  int* __value597;
  __first595 = v591;
  __last596 = v592;
  __value597 = v593;
  int* t598 = __first595;
  int* t599 = __last596;
  int* t600 = __value597;
  void_std____fill_a1_int___int_(t598, t599, t600);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v601, unsigned long v602, int* v603, struct std__random_access_iterator_tag v604) {
bb605:
  int* __first606;
  unsigned long __n607;
  int* __value608;
  struct std__random_access_iterator_tag unnamed609;
  int* __retval610;
  __first606 = v601;
  __n607 = v602;
  __value608 = v603;
  unnamed609 = v604;
    unsigned long t611 = __n607;
    unsigned long c612 = 0;
    _Bool c613 = ((t611 <= c612)) ? 1 : 0;
    if (c613) {
      int* t614 = __first606;
      __retval610 = t614;
      int* t615 = __retval610;
      return t615;
    }
  int* t616 = __first606;
  int* t617 = __first606;
  unsigned long t618 = __n607;
  int* ptr619 = &(t617)[t618];
  int* t620 = __value608;
  void_std____fill_a_int___int_(t616, ptr619, t620);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t621 = __first606;
  unsigned long t622 = __n607;
  int* ptr623 = &(t621)[t622];
  __retval610 = ptr623;
  int* t624 = __retval610;
  return t624;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v625) {
bb626:
  unsigned long __n627;
  unsigned long __retval628;
  __n627 = v625;
  unsigned long t629 = __n627;
  __retval628 = t629;
  unsigned long t630 = __retval628;
  return t630;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v631) {
bb632:
  int** unnamed633;
  struct std__random_access_iterator_tag __retval634;
  unnamed633 = v631;
  struct std__random_access_iterator_tag t635 = __retval634;
  return t635;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v636, unsigned long v637, int* v638) {
bb639:
  int* __first640;
  unsigned long __n641;
  int* __value642;
  int* __retval643;
  struct std__random_access_iterator_tag agg_tmp0644;
  __first640 = v636;
  __n641 = v637;
  __value642 = v638;
  int* t645 = __first640;
  unsigned long t646 = __n641;
  unsigned long r647 = std____size_to_integer(t646);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t648 = __value642;
  struct std__random_access_iterator_tag r649 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first640);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp0644 = r649;
  struct std__random_access_iterator_tag t650 = agg_tmp0644;
  int* r651 = int__std____fill_n_a_int___unsigned_long__int_(t645, r647, t648, t650);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval643 = r651;
  int* t652 = __retval643;
  return t652;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v653, unsigned long v654) {
bb655:
  int* __first656;
  unsigned long __n657;
  int* __retval658;
  __first656 = v653;
  __n657 = v654;
    unsigned long t659 = __n657;
    unsigned long c660 = 0;
    _Bool c661 = ((t659 > c660)) ? 1 : 0;
    if (c661) {
      int* __val662;
      int* t663 = __first656;
      __val662 = t663;
      int* t664 = __val662;
      void_std___Construct_int_(t664);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* t665 = __first656;
      int c666 = 1;
      int* ptr667 = &(t665)[c666];
      __first656 = ptr667;
      int* t668 = __first656;
      unsigned long t669 = __n657;
      unsigned long c670 = 1;
      unsigned long b671 = t669 - c670;
      int* t672 = __val662;
      int* r673 = int__std__fill_n_int___unsigned_long__int_(t668, b671, t672);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __first656 = r673;
    }
  int* t674 = __first656;
  __retval658 = t674;
  int* t675 = __retval658;
  return t675;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v676, unsigned long v677) {
bb678:
  int* __first679;
  unsigned long __n680;
  int* __retval681;
  _Bool __can_fill682;
  __first679 = v676;
  __n680 = v677;
    _Bool r683 = std__is_constant_evaluated();
    if (r683) {
      int* t684 = __first679;
      unsigned long t685 = __n680;
      int* r686 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t684, t685);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval681 = r686;
      int* t687 = __retval681;
      return t687;
    }
  _Bool c688 = 1;
  __can_fill682 = c688;
  int* t689 = __first679;
  unsigned long t690 = __n680;
  int* r691 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t689, t690);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval681 = r691;
  int* t692 = __retval681;
  return t692;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v693, unsigned long v694, struct std__allocator_int_* v695) {
bb696:
  int* __first697;
  unsigned long __n698;
  struct std__allocator_int_* unnamed699;
  int* __retval700;
  __first697 = v693;
  __n698 = v694;
  unnamed699 = v695;
  int* t701 = __first697;
  unsigned long t702 = __n698;
  int* r703 = int__std____uninitialized_default_n_int___unsigned_long_(t701, t702);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval700 = r703;
  int* t704 = __retval700;
  return t704;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v705) {
bb706:
  struct std___Vector_base_int__std__allocator_int__* this707;
  struct std__allocator_int_* __retval708;
  this707 = v705;
  struct std___Vector_base_int__std__allocator_int__* t709 = this707;
  struct std__allocator_int_* base710 = (struct std__allocator_int_*)((char *)&(t709->_M_impl) + 0);
  __retval708 = base710;
  struct std__allocator_int_* t711 = __retval708;
  return t711;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v712, unsigned long v713) {
bb714:
  struct std__vector_int__std__allocator_int__* this715;
  unsigned long __n716;
  this715 = v712;
  __n716 = v713;
  struct std__vector_int__std__allocator_int__* t717 = this715;
  struct std___Vector_base_int__std__allocator_int__* base718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base718->_M_impl) + 0);
  int* t720 = base719->_M_start;
  unsigned long t721 = __n716;
  struct std___Vector_base_int__std__allocator_int__* base722 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std__allocator_int_* r723 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base722);
  int* r724 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t720, t721, r723);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int__* base725 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base726 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base725->_M_impl) + 0);
  base726->_M_finish = r724;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v727, int* v728, unsigned long v729) {
bb730:
  struct std____new_allocator_int_* this731;
  int* __p732;
  unsigned long __n733;
  this731 = v727;
  __p732 = v728;
  __n733 = v729;
  struct std____new_allocator_int_* t734 = this731;
    unsigned long c735 = 4;
    unsigned long c736 = 16;
    _Bool c737 = ((c735 > c736)) ? 1 : 0;
    if (c737) {
      int* t738 = __p732;
      void* cast739 = (void*)t738;
      unsigned long t740 = __n733;
      unsigned long c741 = 4;
      unsigned long b742 = t740 * c741;
      unsigned long c743 = 4;
      operator_delete_3(cast739, b742, c743);
      return;
    }
  int* t744 = __p732;
  void* cast745 = (void*)t744;
  unsigned long t746 = __n733;
  unsigned long c747 = 4;
  unsigned long b748 = t746 * c747;
  operator_delete_2(cast745, b748);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v749, int* v750, unsigned long v751) {
bb752:
  struct std__allocator_int_* this753;
  int* __p754;
  unsigned long __n755;
  this753 = v749;
  __p754 = v750;
  __n755 = v751;
  struct std__allocator_int_* t756 = this753;
    _Bool r757 = std____is_constant_evaluated();
    if (r757) {
      int* t758 = __p754;
      void* cast759 = (void*)t758;
      operator_delete(cast759);
      return;
    }
  struct std____new_allocator_int_* base760 = (struct std____new_allocator_int_*)((char *)t756 + 0);
  int* t761 = __p754;
  unsigned long t762 = __n755;
  std____new_allocator_int___deallocate(base760, t761, t762);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v763, int* v764, unsigned long v765) {
bb766:
  struct std__allocator_int_* __a767;
  int* __p768;
  unsigned long __n769;
  __a767 = v763;
  __p768 = v764;
  __n769 = v765;
  struct std__allocator_int_* t770 = __a767;
  int* t771 = __p768;
  unsigned long t772 = __n769;
  std__allocator_int___deallocate(t770, t771, t772);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v773, int* v774, unsigned long v775) {
bb776:
  struct std___Vector_base_int__std__allocator_int__* this777;
  int* __p778;
  unsigned long __n779;
  this777 = v773;
  __p778 = v774;
  __n779 = v775;
  struct std___Vector_base_int__std__allocator_int__* t780 = this777;
    int* t781 = __p778;
    _Bool cast782 = (_Bool)t781;
    if (cast782) {
      struct std__allocator_int_* base783 = (struct std__allocator_int_*)((char *)&(t780->_M_impl) + 0);
      int* t784 = __p778;
      unsigned long t785 = __n779;
      std__allocator_traits_std__allocator_int_____deallocate(base783, t784, t785);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v786) {
bb787:
  struct std___Vector_base_int__std__allocator_int__* this788;
  this788 = v786;
  struct std___Vector_base_int__std__allocator_int__* t789 = this788;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base790 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t789->_M_impl) + 0);
    int* t791 = base790->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base792 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t789->_M_impl) + 0);
    int* t793 = base792->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base794 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t789->_M_impl) + 0);
    int* t795 = base794->_M_start;
    long diff796 = t793 - t795;
    unsigned long cast797 = (unsigned long)diff796;
    std___Vector_base_int__std__allocator_int______M_deallocate(t789, t791, cast797);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t789->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t789->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v798, struct std____new_allocator_int_* v799) {
bb800:
  struct std____new_allocator_int_* this801;
  struct std____new_allocator_int_* unnamed802;
  this801 = v798;
  unnamed802 = v799;
  struct std____new_allocator_int_* t803 = this801;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v804) {
bb805:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this806;
  this806 = v804;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t807 = this806;
  int* c808 = ((void*)0);
  t807->_M_start = c808;
  int* c809 = ((void*)0);
  t807->_M_finish = c809;
  int* c810 = ((void*)0);
  t807->_M_end_of_storage = c810;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v811) {
bb812:
  int* __location813;
  __location813 = v811;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v814, int* v815) {
bb816:
  int* __first817;
  int* __last818;
  __first817 = v814;
  __last818 = v815;
      _Bool r819 = std____is_constant_evaluated();
      if (r819) {
          while (1) {
            int* t821 = __first817;
            int* t822 = __last818;
            _Bool c823 = ((t821 != t822)) ? 1 : 0;
            if (!c823) break;
            int* t824 = __first817;
            void_std__destroy_at_int_(t824);
            if (__cir_exc_active) {
              return;
            }
          for_step820: ;
            int* t825 = __first817;
            int c826 = 1;
            int* ptr827 = &(t825)[c826];
            __first817 = ptr827;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v828, int* v829, struct std__allocator_int_* v830) {
bb831:
  int* __first832;
  int* __last833;
  struct std__allocator_int_* unnamed834;
  __first832 = v828;
  __last833 = v829;
  unnamed834 = v830;
  int* t835 = __first832;
  int* t836 = __last833;
  void_std___Destroy_int__(t835, t836);
  if (__cir_exc_active) {
    return;
  }
  return;
}

