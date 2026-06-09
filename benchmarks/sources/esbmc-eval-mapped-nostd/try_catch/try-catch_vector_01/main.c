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
static const char __cir_eh_type__ZTISt12length_error[] = "_ZTISt12length_error";

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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__length_error { struct std__logic_error __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
static const char _ZTISt12length_error__n_[] = "_ZTISt12length_error";
static void* _ZTISt12length_error[2] = {(void*)0, (void*)_ZTISt12length_error__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[15] = "Length error: ";
char _str_1[26] = "vector::_M_default_append";
extern int __gxx_personality_v0();
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
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
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
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
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v5) {
bb6:
  struct std__vector_int__std__allocator_int__* this7;
  unsigned long __retval8;
  long __dif9;
  this7 = v5;
  struct std__vector_int__std__allocator_int__* t10 = this7;
  struct std___Vector_base_int__std__allocator_int__* base11 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t10 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base12 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base11->_M_impl) + 0);
  int* t13 = base12->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t10 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base15 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base14->_M_impl) + 0);
  int* t16 = base15->_M_start;
  long diff17 = t13 - t16;
  __dif9 = diff17;
    long t18 = __dif9;
    long c19 = 0;
    _Bool c20 = ((t18 < c19)) ? 1 : 0;
    if (c20) {
      __builtin_unreachable();
    }
  long t21 = __dif9;
  unsigned long cast22 = (unsigned long)t21;
  __retval8 = cast22;
  unsigned long t23 = __retval8;
  return t23;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb24:
  _Bool __retval25;
    _Bool c26 = 0;
    __retval25 = c26;
    _Bool t27 = __retval25;
    return t27;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v28, int** v29) {
bb30:
  struct std___UninitDestroyGuard_int____void_* this31;
  int** __first32;
  this31 = v28;
  __first32 = v29;
  struct std___UninitDestroyGuard_int____void_* t33 = this31;
  int** t34 = __first32;
  int* t35 = *t34;
  t33->_M_first = t35;
  int** t36 = __first32;
  t33->_M_cur = t36;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v37) {
bb38:
  int* __location39;
  int* __retval40;
  void* __loc41;
  __location39 = v37;
  int* t42 = __location39;
  void* cast43 = (void*)t42;
  __loc41 = cast43;
    void* t44 = __loc41;
    int* cast45 = (int*)t44;
    int c46 = 0;
    *cast45 = c46;
    __retval40 = cast45;
    int* t47 = __retval40;
    return t47;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v48) {
bb49:
  int* __p50;
  __p50 = v48;
    _Bool r51 = std____is_constant_evaluated();
    if (r51) {
      int* t52 = __p50;
      int* r53 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t52);
      return;
    }
  int* t54 = __p50;
  void* cast55 = (void*)t54;
  int* cast56 = (int*)cast55;
  int c57 = 0;
  *cast56 = c57;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v58) {
bb59:
  struct std___UninitDestroyGuard_int____void_* this60;
  this60 = v58;
  struct std___UninitDestroyGuard_int____void_* t61 = this60;
  int** c62 = ((void*)0);
  t61->_M_cur = c62;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v63) {
bb64:
  struct std___UninitDestroyGuard_int____void_* this65;
  this65 = v63;
  struct std___UninitDestroyGuard_int____void_* t66 = this65;
    int** t67 = t66->_M_cur;
    int** c68 = ((void*)0);
    _Bool c69 = ((t67 != c68)) ? 1 : 0;
    if (c69) {
      int* t70 = t66->_M_first;
      int** t71 = t66->_M_cur;
      int* t72 = *t71;
      void_std___Destroy_int__(t70, t72);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v73, unsigned long v74) {
bb75:
  int* __first76;
  unsigned long __n77;
  int* __retval78;
  struct std___UninitDestroyGuard_int____void_ __guard79;
  __first76 = v73;
  __n77 = v74;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard79, &__first76);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        unsigned long t81 = __n77;
        unsigned long c82 = 0;
        _Bool c83 = ((t81 > c82)) ? 1 : 0;
        if (!c83) break;
        int* t84 = __first76;
        void_std___Construct_int_(t84);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard79);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step80: ;
        unsigned long t85 = __n77;
        unsigned long u86 = t85 - 1;
        __n77 = u86;
        int* t87 = __first76;
        int c88 = 1;
        int* ptr89 = &(t87)[c88];
        __first76 = ptr89;
      }
    std___UninitDestroyGuard_int___void___release(&__guard79);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard79);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t90 = __first76;
    __retval78 = t90;
    int* t91 = __retval78;
    int* ret_val92 = t91;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard79);
    }
    return ret_val92;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v93, int* v94, int* v95) {
bb96:
  int* __first97;
  int* __last98;
  int* __value99;
  _Bool __load_outside_loop100;
  int __val101;
  __first97 = v93;
  __last98 = v94;
  __value99 = v95;
  _Bool c102 = 1;
  __load_outside_loop100 = c102;
  int* t103 = __value99;
  int t104 = *t103;
  __val101 = t104;
    while (1) {
      int* t106 = __first97;
      int* t107 = __last98;
      _Bool c108 = ((t106 != t107)) ? 1 : 0;
      if (!c108) break;
      int t109 = __val101;
      int* t110 = __first97;
      *t110 = t109;
    for_step105: ;
      int* t111 = __first97;
      int c112 = 1;
      int* ptr113 = &(t111)[c112];
      __first97 = ptr113;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v114, int* v115, int* v116) {
bb117:
  int* __first118;
  int* __last119;
  int* __value120;
  __first118 = v114;
  __last119 = v115;
  __value120 = v116;
  int* t121 = __first118;
  int* t122 = __last119;
  int* t123 = __value120;
  void_std____fill_a1_int___int_(t121, t122, t123);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v124, unsigned long v125, int* v126, struct std__random_access_iterator_tag v127) {
bb128:
  int* __first129;
  unsigned long __n130;
  int* __value131;
  struct std__random_access_iterator_tag unnamed132;
  int* __retval133;
  __first129 = v124;
  __n130 = v125;
  __value131 = v126;
  unnamed132 = v127;
    unsigned long t134 = __n130;
    unsigned long c135 = 0;
    _Bool c136 = ((t134 <= c135)) ? 1 : 0;
    if (c136) {
      int* t137 = __first129;
      __retval133 = t137;
      int* t138 = __retval133;
      return t138;
    }
  int* t139 = __first129;
  int* t140 = __first129;
  unsigned long t141 = __n130;
  int* ptr142 = &(t140)[t141];
  int* t143 = __value131;
  void_std____fill_a_int___int_(t139, ptr142, t143);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t144 = __first129;
  unsigned long t145 = __n130;
  int* ptr146 = &(t144)[t145];
  __retval133 = ptr146;
  int* t147 = __retval133;
  return t147;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v148) {
bb149:
  unsigned long __n150;
  unsigned long __retval151;
  __n150 = v148;
  unsigned long t152 = __n150;
  __retval151 = t152;
  unsigned long t153 = __retval151;
  return t153;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v154) {
bb155:
  int** unnamed156;
  struct std__random_access_iterator_tag __retval157;
  unnamed156 = v154;
  struct std__random_access_iterator_tag t158 = __retval157;
  return t158;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v159, unsigned long v160, int* v161) {
bb162:
  int* __first163;
  unsigned long __n164;
  int* __value165;
  int* __retval166;
  struct std__random_access_iterator_tag agg_tmp0167;
  __first163 = v159;
  __n164 = v160;
  __value165 = v161;
  int* t168 = __first163;
  unsigned long t169 = __n164;
  unsigned long r170 = std____size_to_integer(t169);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t171 = __value165;
  struct std__random_access_iterator_tag r172 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first163);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp0167 = r172;
  struct std__random_access_iterator_tag t173 = agg_tmp0167;
  int* r174 = int__std____fill_n_a_int___unsigned_long__int_(t168, r170, t171, t173);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval166 = r174;
  int* t175 = __retval166;
  return t175;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v176, unsigned long v177) {
bb178:
  int* __first179;
  unsigned long __n180;
  int* __retval181;
  __first179 = v176;
  __n180 = v177;
    unsigned long t182 = __n180;
    unsigned long c183 = 0;
    _Bool c184 = ((t182 > c183)) ? 1 : 0;
    if (c184) {
      int* __val185;
      int* t186 = __first179;
      __val185 = t186;
      int* t187 = __val185;
      void_std___Construct_int_(t187);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* t188 = __first179;
      int c189 = 1;
      int* ptr190 = &(t188)[c189];
      __first179 = ptr190;
      int* t191 = __first179;
      unsigned long t192 = __n180;
      unsigned long c193 = 1;
      unsigned long b194 = t192 - c193;
      int* t195 = __val185;
      int* r196 = int__std__fill_n_int___unsigned_long__int_(t191, b194, t195);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __first179 = r196;
    }
  int* t197 = __first179;
  __retval181 = t197;
  int* t198 = __retval181;
  return t198;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v199, unsigned long v200) {
bb201:
  int* __first202;
  unsigned long __n203;
  int* __retval204;
  _Bool __can_fill205;
  __first202 = v199;
  __n203 = v200;
    _Bool r206 = std__is_constant_evaluated();
    if (r206) {
      int* t207 = __first202;
      unsigned long t208 = __n203;
      int* r209 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t207, t208);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval204 = r209;
      int* t210 = __retval204;
      return t210;
    }
  _Bool c211 = 1;
  __can_fill205 = c211;
  int* t212 = __first202;
  unsigned long t213 = __n203;
  int* r214 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t212, t213);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval204 = r214;
  int* t215 = __retval204;
  return t215;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v216, unsigned long v217, struct std__allocator_int_* v218) {
bb219:
  int* __first220;
  unsigned long __n221;
  struct std__allocator_int_* unnamed222;
  int* __retval223;
  __first220 = v216;
  __n221 = v217;
  unnamed222 = v218;
  int* t224 = __first220;
  unsigned long t225 = __n221;
  int* r226 = int__std____uninitialized_default_n_int___unsigned_long_(t224, t225);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval223 = r226;
  int* t227 = __retval223;
  return t227;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v228) {
bb229:
  struct std___Vector_base_int__std__allocator_int__* this230;
  struct std__allocator_int_* __retval231;
  this230 = v228;
  struct std___Vector_base_int__std__allocator_int__* t232 = this230;
  struct std__allocator_int_* base233 = (struct std__allocator_int_*)((char *)&(t232->_M_impl) + 0);
  __retval231 = base233;
  struct std__allocator_int_* t234 = __retval231;
  return t234;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v235, unsigned long* v236) {
bb237:
  unsigned long* __a238;
  unsigned long* __b239;
  unsigned long* __retval240;
  __a238 = v235;
  __b239 = v236;
    unsigned long* t241 = __a238;
    unsigned long t242 = *t241;
    unsigned long* t243 = __b239;
    unsigned long t244 = *t243;
    _Bool c245 = ((t242 < t244)) ? 1 : 0;
    if (c245) {
      unsigned long* t246 = __b239;
      __retval240 = t246;
      unsigned long* t247 = __retval240;
      return t247;
    }
  unsigned long* t248 = __a238;
  __retval240 = t248;
  unsigned long* t249 = __retval240;
  return t249;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v250, unsigned long v251, char* v252) {
bb253:
  struct std__vector_int__std__allocator_int__* this254;
  unsigned long __n255;
  char* __s256;
  unsigned long __retval257;
  unsigned long __len258;
  unsigned long ref_tmp0259;
  this254 = v250;
  __n255 = v251;
  __s256 = v252;
  struct std__vector_int__std__allocator_int__* t260 = this254;
    unsigned long r261 = std__vector_int__std__allocator_int_____max_size___const(t260);
    unsigned long r262 = std__vector_int__std__allocator_int_____size___const(t260);
    unsigned long b263 = r261 - r262;
    unsigned long t264 = __n255;
    _Bool c265 = ((b263 < t264)) ? 1 : 0;
    if (c265) {
      char* t266 = __s256;
      std____throw_length_error(t266);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r267 = std__vector_int__std__allocator_int_____size___const(t260);
  unsigned long r268 = std__vector_int__std__allocator_int_____size___const(t260);
  ref_tmp0259 = r268;
  unsigned long* r269 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0259, &__n255);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t270 = *r269;
  unsigned long b271 = r267 + t270;
  __len258 = b271;
  unsigned long t272 = __len258;
  unsigned long r273 = std__vector_int__std__allocator_int_____size___const(t260);
  _Bool c274 = ((t272 < r273)) ? 1 : 0;
  _Bool ternary275;
  if (c274) {
    _Bool c276 = 1;
    ternary275 = (_Bool)c276;
  } else {
    unsigned long t277 = __len258;
    unsigned long r278 = std__vector_int__std__allocator_int_____max_size___const(t260);
    _Bool c279 = ((t277 > r278)) ? 1 : 0;
    ternary275 = (_Bool)c279;
  }
  unsigned long ternary280;
  if (ternary275) {
    unsigned long r281 = std__vector_int__std__allocator_int_____max_size___const(t260);
    ternary280 = (unsigned long)r281;
  } else {
    unsigned long t282 = __len258;
    ternary280 = (unsigned long)t282;
  }
  __retval257 = ternary280;
  unsigned long t283 = __retval257;
  return t283;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v284) {
bb285:
  struct std____new_allocator_int_* this286;
  unsigned long __retval287;
  this286 = v284;
  struct std____new_allocator_int_* t288 = this286;
  unsigned long c289 = 9223372036854775807;
  unsigned long c290 = 4;
  unsigned long b291 = c289 / c290;
  __retval287 = b291;
  unsigned long t292 = __retval287;
  return t292;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v293, unsigned long v294, void* v295) {
bb296:
  struct std____new_allocator_int_* this297;
  unsigned long __n298;
  void* unnamed299;
  int* __retval300;
  this297 = v293;
  __n298 = v294;
  unnamed299 = v295;
  struct std____new_allocator_int_* t301 = this297;
    unsigned long t302 = __n298;
    unsigned long r303 = std____new_allocator_int____M_max_size___const(t301);
    _Bool c304 = ((t302 > r303)) ? 1 : 0;
    if (c304) {
        unsigned long t305 = __n298;
        unsigned long c306 = -1;
        unsigned long c307 = 4;
        unsigned long b308 = c306 / c307;
        _Bool c309 = ((t305 > b308)) ? 1 : 0;
        if (c309) {
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
    unsigned long c310 = 4;
    unsigned long c311 = 16;
    _Bool c312 = ((c310 > c311)) ? 1 : 0;
    if (c312) {
      unsigned long __al313;
      unsigned long c314 = 4;
      __al313 = c314;
      unsigned long t315 = __n298;
      unsigned long c316 = 4;
      unsigned long b317 = t315 * c316;
      unsigned long t318 = __al313;
      void* r319 = operator_new_2(b317, t318);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast320 = (int*)r319;
      __retval300 = cast320;
      int* t321 = __retval300;
      return t321;
    }
  unsigned long t322 = __n298;
  unsigned long c323 = 4;
  unsigned long b324 = t322 * c323;
  void* r325 = operator_new(b324);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast326 = (int*)r325;
  __retval300 = cast326;
  int* t327 = __retval300;
  return t327;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v328, unsigned long v329) {
bb330:
  struct std__allocator_int_* this331;
  unsigned long __n332;
  int* __retval333;
  this331 = v328;
  __n332 = v329;
  struct std__allocator_int_* t334 = this331;
    _Bool r335 = std____is_constant_evaluated();
    if (r335) {
        unsigned long t336 = __n332;
        unsigned long c337 = 4;
        unsigned long ovr338;
        _Bool ovf339 = __builtin_mul_overflow(t336, c337, &ovr338);
        __n332 = ovr338;
        if (ovf339) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t340 = __n332;
      void* r341 = operator_new(t340);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast342 = (int*)r341;
      __retval333 = cast342;
      int* t343 = __retval333;
      return t343;
    }
  struct std____new_allocator_int_* base344 = (struct std____new_allocator_int_*)((char *)t334 + 0);
  unsigned long t345 = __n332;
  void* c346 = ((void*)0);
  int* r347 = std____new_allocator_int___allocate(base344, t345, c346);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval333 = r347;
  int* t348 = __retval333;
  return t348;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v349, unsigned long v350) {
bb351:
  struct std__allocator_int_* __a352;
  unsigned long __n353;
  int* __retval354;
  __a352 = v349;
  __n353 = v350;
  struct std__allocator_int_* t355 = __a352;
  unsigned long t356 = __n353;
  int* r357 = std__allocator_int___allocate(t355, t356);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval354 = r357;
  int* t358 = __retval354;
  return t358;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v359, unsigned long v360) {
bb361:
  struct std___Vector_base_int__std__allocator_int__* this362;
  unsigned long __n363;
  int* __retval364;
  this362 = v359;
  __n363 = v360;
  struct std___Vector_base_int__std__allocator_int__* t365 = this362;
  unsigned long t366 = __n363;
  unsigned long c367 = 0;
  _Bool c368 = ((t366 != c367)) ? 1 : 0;
  int* ternary369;
  if (c368) {
    struct std__allocator_int_* base370 = (struct std__allocator_int_*)((char *)&(t365->_M_impl) + 0);
    unsigned long t371 = __n363;
    int* r372 = std__allocator_traits_std__allocator_int_____allocate(base370, t371);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary369 = (int*)r372;
  } else {
    int* c373 = ((void*)0);
    ternary369 = (int*)c373;
  }
  __retval364 = ternary369;
  int* t374 = __retval364;
  return t374;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v375, int* v376, unsigned long v377, struct std___Vector_base_int__std__allocator_int__* v378) {
bb379:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this380;
  int* __s381;
  unsigned long __l382;
  struct std___Vector_base_int__std__allocator_int__* __vect383;
  this380 = v375;
  __s381 = v376;
  __l382 = v377;
  __vect383 = v378;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t384 = this380;
  int* t385 = __s381;
  t384->_M_storage = t385;
  unsigned long t386 = __l382;
  t384->_M_len = t386;
  struct std___Vector_base_int__std__allocator_int__* t387 = __vect383;
  t384->_M_vect = t387;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v388, int** v389) {
bb390:
  struct __gnu_cxx____normal_iterator_int____void_* this391;
  int** __i392;
  this391 = v388;
  __i392 = v389;
  struct __gnu_cxx____normal_iterator_int____void_* t393 = this391;
  int** t394 = __i392;
  int* t395 = *t394;
  t393->_M_current = t395;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v396, int* v397) {
bb398:
  int* __location399;
  int* __args400;
  int* __retval401;
  void* __loc402;
  __location399 = v396;
  __args400 = v397;
  int* t403 = __location399;
  void* cast404 = (void*)t403;
  __loc402 = cast404;
    void* t405 = __loc402;
    int* cast406 = (int*)t405;
    int* t407 = __args400;
    int t408 = *t407;
    *cast406 = t408;
    __retval401 = cast406;
    int* t409 = __retval401;
    return t409;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v410, int* v411, int* v412) {
bb413:
  struct std__allocator_int_* __a414;
  int* __p415;
  int* __args416;
  __a414 = v410;
  __p415 = v411;
  __args416 = v412;
  int* t417 = __p415;
  int* t418 = __args416;
  int* r419 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t417, t418);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v420, int* v421) {
bb422:
  struct std__allocator_int_* __a423;
  int* __p424;
  __a423 = v420;
  __p424 = v421;
  int* t425 = __p424;
  void_std__destroy_at_int_(t425);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v426, int* v427, struct std__allocator_int_* v428) {
bb429:
  int* __dest430;
  int* __orig431;
  struct std__allocator_int_* __alloc432;
  __dest430 = v426;
  __orig431 = v427;
  __alloc432 = v428;
  struct std__allocator_int_* t433 = __alloc432;
  int* t434 = __dest430;
  int* t435 = __orig431;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t433, t434, t435);
  struct std__allocator_int_* t436 = __alloc432;
  int* t437 = __orig431;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t436, t437);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v438) {
bb439:
  struct __gnu_cxx____normal_iterator_int____void_* this440;
  int* __retval441;
  this440 = v438;
  struct __gnu_cxx____normal_iterator_int____void_* t442 = this440;
  int* t443 = t442->_M_current;
  __retval441 = t443;
  int* t444 = __retval441;
  return t444;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v445) {
bb446:
  struct __gnu_cxx____normal_iterator_int____void_* this447;
  struct __gnu_cxx____normal_iterator_int____void_* __retval448;
  this447 = v445;
  struct __gnu_cxx____normal_iterator_int____void_* t449 = this447;
  int* t450 = t449->_M_current;
  int c451 = 1;
  int* ptr452 = &(t450)[c451];
  t449->_M_current = ptr452;
  __retval448 = t449;
  struct __gnu_cxx____normal_iterator_int____void_* t453 = __retval448;
  return t453;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v454, int* v455, struct __gnu_cxx____normal_iterator_int____void_ v456, struct std__allocator_int_* v457) {
bb458:
  int* __first459;
  int* __last460;
  struct __gnu_cxx____normal_iterator_int____void_ __result461;
  struct std__allocator_int_* __alloc462;
  struct __gnu_cxx____normal_iterator_int____void_ __retval463;
  __first459 = v454;
  __last460 = v455;
  __result461 = v456;
  __alloc462 = v457;
  __retval463 = __result461; // copy
    while (1) {
      int* t465 = __first459;
      int* t466 = __last460;
      _Bool c467 = ((t465 != t466)) ? 1 : 0;
      if (!c467) break;
      int* r468 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval463);
      int* t469 = __first459;
      struct std__allocator_int_* t470 = __alloc462;
      void_std____relocate_object_a_int__int__std__allocator_int___(r468, t469, t470);
    for_step464: ;
      int* t471 = __first459;
      int c472 = 1;
      int* ptr473 = &(t471)[c472];
      __first459 = ptr473;
      struct __gnu_cxx____normal_iterator_int____void_* r474 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval463);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t475 = __retval463;
  return t475;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v476, struct __gnu_cxx____normal_iterator_int____void_* v477) {
bb478:
  struct __gnu_cxx____normal_iterator_int____void_* this479;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed480;
  struct __gnu_cxx____normal_iterator_int____void_* __retval481;
  this479 = v476;
  unnamed480 = v477;
  struct __gnu_cxx____normal_iterator_int____void_* t482 = this479;
  struct __gnu_cxx____normal_iterator_int____void_* t483 = unnamed480;
  int* t484 = t483->_M_current;
  t482->_M_current = t484;
  __retval481 = t482;
  struct __gnu_cxx____normal_iterator_int____void_* t485 = __retval481;
  return t485;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v486) {
bb487:
  struct __gnu_cxx____normal_iterator_int____void_* this488;
  int** __retval489;
  this488 = v486;
  struct __gnu_cxx____normal_iterator_int____void_* t490 = this488;
  __retval489 = &t490->_M_current;
  int** t491 = __retval489;
  return t491;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v492, int* v493, int* v494, struct std__allocator_int_* v495) {
bb496:
  int* __first497;
  int* __last498;
  int* __result499;
  struct std__allocator_int_* __alloc500;
  int* __retval501;
  long __count502;
  __first497 = v492;
  __last498 = v493;
  __result499 = v494;
  __alloc500 = v495;
  int* t503 = __last498;
  int* t504 = __first497;
  long diff505 = t503 - t504;
  __count502 = diff505;
    long t506 = __count502;
    long c507 = 0;
    _Bool c508 = ((t506 > c507)) ? 1 : 0;
    if (c508) {
        _Bool r509 = std__is_constant_evaluated();
        if (r509) {
          struct __gnu_cxx____normal_iterator_int____void_ __out510;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0511;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0512;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out510, &__result499);
          int* t513 = __first497;
          int* t514 = __last498;
          agg_tmp0512 = __out510; // copy
          struct std__allocator_int_* t515 = __alloc500;
          struct __gnu_cxx____normal_iterator_int____void_ t516 = agg_tmp0512;
          struct __gnu_cxx____normal_iterator_int____void_ r517 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t513, t514, t516, t515);
          ref_tmp0511 = r517;
          struct __gnu_cxx____normal_iterator_int____void_* r518 = __gnu_cxx____normal_iterator_int___void___operator_(&__out510, &ref_tmp0511);
          int** r519 = __gnu_cxx____normal_iterator_int___void___base___const(&__out510);
          int* t520 = *r519;
          __retval501 = t520;
          int* t521 = __retval501;
          return t521;
        }
      int* t522 = __result499;
      void* cast523 = (void*)t522;
      int* t524 = __first497;
      void* cast525 = (void*)t524;
      long t526 = __count502;
      unsigned long cast527 = (unsigned long)t526;
      unsigned long c528 = 4;
      unsigned long b529 = cast527 * c528;
      void* r530 = memcpy(cast523, cast525, b529);
    }
  int* t531 = __result499;
  long t532 = __count502;
  int* ptr533 = &(t531)[t532];
  __retval501 = ptr533;
  int* t534 = __retval501;
  return t534;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v535) {
bb536:
  int* __it537;
  int* __retval538;
  __it537 = v535;
  int* t539 = __it537;
  __retval538 = t539;
  int* t540 = __retval538;
  return t540;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v541, int* v542, int* v543, struct std__allocator_int_* v544) {
bb545:
  int* __first546;
  int* __last547;
  int* __result548;
  struct std__allocator_int_* __alloc549;
  int* __retval550;
  __first546 = v541;
  __last547 = v542;
  __result548 = v543;
  __alloc549 = v544;
  int* t551 = __first546;
  int* r552 = int__std____niter_base_int__(t551);
  int* t553 = __last547;
  int* r554 = int__std____niter_base_int__(t553);
  int* t555 = __result548;
  int* r556 = int__std____niter_base_int__(t555);
  struct std__allocator_int_* t557 = __alloc549;
  int* r558 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r552, r554, r556, t557);
  __retval550 = r558;
  int* t559 = __retval550;
  return t559;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v560, int* v561, int* v562, struct std__allocator_int_* v563) {
bb564:
  int* __first565;
  int* __last566;
  int* __result567;
  struct std__allocator_int_* __alloc568;
  int* __retval569;
  __first565 = v560;
  __last566 = v561;
  __result567 = v562;
  __alloc568 = v563;
  int* t570 = __first565;
  int* t571 = __last566;
  int* t572 = __result567;
  struct std__allocator_int_* t573 = __alloc568;
  int* r574 = int__std____relocate_a_int___int___std__allocator_int___(t570, t571, t572, t573);
  __retval569 = r574;
  int* t575 = __retval569;
  return t575;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v576) {
bb577:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this578;
  this578 = v576;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t579 = this578;
    int* t580 = t579->_M_storage;
    _Bool cast581 = (_Bool)t580;
    if (cast581) {
      struct std___Vector_base_int__std__allocator_int__* t582 = t579->_M_vect;
      int* t583 = t579->_M_storage;
      unsigned long t584 = t579->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t582, t583, t584);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v585, unsigned long v586) {
bb587:
  struct std__vector_int__std__allocator_int__* this588;
  unsigned long __n589;
  this588 = v585;
  __n589 = v586;
  struct std__vector_int__std__allocator_int__* t590 = this588;
    unsigned long t591 = __n589;
    unsigned long c592 = 0;
    _Bool c593 = ((t591 != c592)) ? 1 : 0;
    if (c593) {
      unsigned long __size594;
      unsigned long __navail595;
      unsigned long r596 = std__vector_int__std__allocator_int_____size___const(t590);
      __size594 = r596;
      struct std___Vector_base_int__std__allocator_int__* base597 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base598 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base597->_M_impl) + 0);
      int* t599 = base598->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base600 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base601 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base600->_M_impl) + 0);
      int* t602 = base601->_M_finish;
      long diff603 = t599 - t602;
      unsigned long cast604 = (unsigned long)diff603;
      __navail595 = cast604;
        unsigned long t605 = __size594;
        unsigned long r606 = std__vector_int__std__allocator_int_____max_size___const(t590);
        _Bool c607 = ((t605 > r606)) ? 1 : 0;
        _Bool ternary608;
        if (c607) {
          _Bool c609 = 1;
          ternary608 = (_Bool)c609;
        } else {
          unsigned long t610 = __navail595;
          unsigned long r611 = std__vector_int__std__allocator_int_____max_size___const(t590);
          unsigned long t612 = __size594;
          unsigned long b613 = r611 - t612;
          _Bool c614 = ((t610 > b613)) ? 1 : 0;
          ternary608 = (_Bool)c614;
        }
        if (ternary608) {
          __builtin_unreachable();
        }
        unsigned long t615 = __navail595;
        unsigned long t616 = __n589;
        _Bool c617 = ((t615 >= t616)) ? 1 : 0;
        if (c617) {
            struct std___Vector_base_int__std__allocator_int__* base618 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base619 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base618->_M_impl) + 0);
            int* t620 = base619->_M_finish;
            _Bool cast621 = (_Bool)t620;
            _Bool u622 = !cast621;
            if (u622) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base623 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base624 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base623->_M_impl) + 0);
          int* t625 = base624->_M_finish;
          unsigned long t626 = __n589;
          struct std___Vector_base_int__std__allocator_int__* base627 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std__allocator_int_* r628 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base627);
          int* r629 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t625, t626, r628);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base630 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base631 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base630->_M_impl) + 0);
          base631->_M_finish = r629;
        } else {
          int* __old_start632;
          int* __old_finish633;
          unsigned long __len634;
          int* __new_start635;
          struct std___Vector_base_int__std__allocator_int__* base636 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base637 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base636->_M_impl) + 0);
          int* t638 = base637->_M_start;
          __old_start632 = t638;
          struct std___Vector_base_int__std__allocator_int__* base639 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base640 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base639->_M_impl) + 0);
          int* t641 = base640->_M_finish;
          __old_finish633 = t641;
          unsigned long t642 = __n589;
          char* cast643 = (char*)&(_str_1);
          unsigned long r644 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t590, t642, cast643);
          if (__cir_exc_active) {
            return;
          }
          __len634 = r644;
          struct std___Vector_base_int__std__allocator_int__* base645 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          unsigned long t646 = __len634;
          int* r647 = std___Vector_base_int__std__allocator_int______M_allocate(base645, t646);
          if (__cir_exc_active) {
            return;
          }
          __new_start635 = r647;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard648;
            int* t649 = __new_start635;
            unsigned long t650 = __len634;
            struct std___Vector_base_int__std__allocator_int__* base651 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard648, t649, t650, base651);
            if (__cir_exc_active) {
              return;
            }
              int* t652 = __new_start635;
              unsigned long t653 = __size594;
              int* ptr654 = &(t652)[t653];
              unsigned long t655 = __n589;
              struct std___Vector_base_int__std__allocator_int__* base656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
              struct std__allocator_int_* r657 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base656);
              int* r658 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr654, t655, r657);
              if (__cir_exc_active) {
                {
                  std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard648);
                }
                return;
              }
                int* t659 = __old_start632;
                int* t660 = __old_finish633;
                int* t661 = __new_start635;
                struct std___Vector_base_int__std__allocator_int__* base662 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
                struct std__allocator_int_* r663 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base662);
                int* r664 = std__vector_int__std__allocator_int______S_relocate(t659, t660, t661, r663);
              int* t665 = __old_start632;
              __guard648._M_storage = t665;
              struct std___Vector_base_int__std__allocator_int__* base666 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base667 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base666->_M_impl) + 0);
              int* t668 = base667->_M_end_of_storage;
              int* t669 = __old_start632;
              long diff670 = t668 - t669;
              unsigned long cast671 = (unsigned long)diff670;
              __guard648._M_len = cast671;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard648);
            }
          int* t672 = __new_start635;
          struct std___Vector_base_int__std__allocator_int__* base673 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base674 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base673->_M_impl) + 0);
          base674->_M_start = t672;
          int* t675 = __new_start635;
          unsigned long t676 = __size594;
          int* ptr677 = &(t675)[t676];
          unsigned long t678 = __n589;
          int* ptr679 = &(ptr677)[t678];
          struct std___Vector_base_int__std__allocator_int__* base680 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base681 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base680->_M_impl) + 0);
          base681->_M_finish = ptr679;
          int* t682 = __new_start635;
          unsigned long t683 = __len634;
          int* ptr684 = &(t682)[t683];
          struct std___Vector_base_int__std__allocator_int__* base685 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base686 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base685->_M_impl) + 0);
          base686->_M_end_of_storage = ptr684;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v687, int* v688, struct std__allocator_int_* v689) {
bb690:
  int* __first691;
  int* __last692;
  struct std__allocator_int_* unnamed693;
  __first691 = v687;
  __last692 = v688;
  unnamed693 = v689;
  int* t694 = __first691;
  int* t695 = __last692;
  void_std___Destroy_int__(t694, t695);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v696, int* v697) {
bb698:
  struct std__vector_int__std__allocator_int__* this699;
  int* __pos700;
  this699 = v696;
  __pos700 = v697;
  struct std__vector_int__std__allocator_int__* t701 = this699;
    unsigned long __n702;
    struct std___Vector_base_int__std__allocator_int__* base703 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t701 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base704 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base703->_M_impl) + 0);
    int* t705 = base704->_M_finish;
    int* t706 = __pos700;
    long diff707 = t705 - t706;
    unsigned long cast708 = (unsigned long)diff707;
    __n702 = cast708;
    unsigned long t709 = __n702;
    _Bool cast710 = (_Bool)t709;
    if (cast710) {
      int* t711 = __pos700;
      struct std___Vector_base_int__std__allocator_int__* base712 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t701 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base713 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base712->_M_impl) + 0);
      int* t714 = base713->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base715 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t701 + 0);
      struct std__allocator_int_* r716 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base715);
      void_std___Destroy_int___int_(t711, t714, r716);
      if (__cir_exc_active) {
        return;
      }
      int* t717 = __pos700;
      struct std___Vector_base_int__std__allocator_int__* base718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t701 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base718->_M_impl) + 0);
      base719->_M_finish = t717;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v720, unsigned long v721) {
bb722:
  struct std__vector_int__std__allocator_int__* this723;
  unsigned long __new_size724;
  this723 = v720;
  __new_size724 = v721;
  struct std__vector_int__std__allocator_int__* t725 = this723;
    unsigned long t726 = __new_size724;
    unsigned long r727 = std__vector_int__std__allocator_int_____size___const(t725);
    _Bool c728 = ((t726 > r727)) ? 1 : 0;
    if (c728) {
      unsigned long t729 = __new_size724;
      unsigned long r730 = std__vector_int__std__allocator_int_____size___const(t725);
      unsigned long b731 = t729 - r730;
      std__vector_int__std__allocator_int______M_default_append(t725, b731);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t732 = __new_size724;
        unsigned long r733 = std__vector_int__std__allocator_int_____size___const(t725);
        _Bool c734 = ((t732 < r733)) ? 1 : 0;
        if (c734) {
          struct std___Vector_base_int__std__allocator_int__* base735 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t725 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base736 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base735->_M_impl) + 0);
          int* t737 = base736->_M_start;
          unsigned long t738 = __new_size724;
          int* ptr739 = &(t737)[t738];
          std__vector_int__std__allocator_int______M_erase_at_end(t725, ptr739);
        }
    }
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v740, unsigned long* v741) {
bb742:
  unsigned long* __a743;
  unsigned long* __b744;
  unsigned long* __retval745;
  __a743 = v740;
  __b744 = v741;
    unsigned long* t746 = __b744;
    unsigned long t747 = *t746;
    unsigned long* t748 = __a743;
    unsigned long t749 = *t748;
    _Bool c750 = ((t747 < t749)) ? 1 : 0;
    if (c750) {
      unsigned long* t751 = __b744;
      __retval745 = t751;
      unsigned long* t752 = __retval745;
      return t752;
    }
  unsigned long* t753 = __a743;
  __retval745 = t753;
  unsigned long* t754 = __retval745;
  return t754;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v755) {
bb756:
  struct std__allocator_int_* __a757;
  unsigned long __retval758;
  unsigned long __diffmax759;
  unsigned long __allocmax760;
  __a757 = v755;
  unsigned long c761 = 2305843009213693951;
  __diffmax759 = c761;
  unsigned long c762 = 4611686018427387903;
  __allocmax760 = c762;
  unsigned long* r763 = unsigned_long_const__std__min_unsigned_long_(&__diffmax759, &__allocmax760);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t764 = *r763;
  __retval758 = t764;
  unsigned long t765 = __retval758;
  return t765;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v766) {
bb767:
  struct std___Vector_base_int__std__allocator_int__* this768;
  struct std__allocator_int_* __retval769;
  this768 = v766;
  struct std___Vector_base_int__std__allocator_int__* t770 = this768;
  struct std__allocator_int_* base771 = (struct std__allocator_int_*)((char *)&(t770->_M_impl) + 0);
  __retval769 = base771;
  struct std__allocator_int_* t772 = __retval769;
  return t772;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v773) {
bb774:
  struct std__vector_int__std__allocator_int__* this775;
  unsigned long __retval776;
  this775 = v773;
  struct std__vector_int__std__allocator_int__* t777 = this775;
  struct std___Vector_base_int__std__allocator_int__* base778 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t777 + 0);
  struct std__allocator_int_* r779 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base778);
  unsigned long r780 = std__vector_int__std__allocator_int______S_max_size(r779);
  __retval776 = r780;
  unsigned long t781 = __retval776;
  return t781;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v782) {
bb783:
  struct std__vector_int__std__allocator_int__* this784;
  this784 = v782;
  struct std__vector_int__std__allocator_int__* t785 = this784;
    struct std___Vector_base_int__std__allocator_int__* base786 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t785 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base787 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base786->_M_impl) + 0);
    int* t788 = base787->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base789 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t785 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base790 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base789->_M_impl) + 0);
    int* t791 = base790->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base792 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t785 + 0);
    struct std__allocator_int_* r793 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base792);
    void_std___Destroy_int___int_(t788, t791, r793);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base794 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t785 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base794);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base795 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t785 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base795);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v796, int v797) {
bb798:
  int __a799;
  int __b800;
  int __retval801;
  __a799 = v796;
  __b800 = v797;
  int t802 = __a799;
  int t803 = __b800;
  int b804 = t802 | t803;
  __retval801 = b804;
  int t805 = __retval801;
  return t805;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v806) {
bb807:
  struct std__basic_ios_char__std__char_traits_char__* this808;
  int __retval809;
  this808 = v806;
  struct std__basic_ios_char__std__char_traits_char__* t810 = this808;
  struct std__ios_base* base811 = (struct std__ios_base*)((char *)t810 + 0);
  int t812 = base811->_M_streambuf_state;
  __retval809 = t812;
  int t813 = __retval809;
  return t813;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v814, int v815) {
bb816:
  struct std__basic_ios_char__std__char_traits_char__* this817;
  int __state818;
  this817 = v814;
  __state818 = v815;
  struct std__basic_ios_char__std__char_traits_char__* t819 = this817;
  int r820 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t819);
  if (__cir_exc_active) {
    return;
  }
  int t821 = __state818;
  int r822 = std__operator_(r820, t821);
  std__basic_ios_char__std__char_traits_char_____clear(t819, r822);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v823, char* v824) {
bb825:
  char* __c1826;
  char* __c2827;
  _Bool __retval828;
  __c1826 = v823;
  __c2827 = v824;
  char* t829 = __c1826;
  char t830 = *t829;
  int cast831 = (int)t830;
  char* t832 = __c2827;
  char t833 = *t832;
  int cast834 = (int)t833;
  _Bool c835 = ((cast831 == cast834)) ? 1 : 0;
  __retval828 = c835;
  _Bool t836 = __retval828;
  return t836;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v837) {
bb838:
  char* __p839;
  unsigned long __retval840;
  unsigned long __i841;
  __p839 = v837;
  unsigned long c842 = 0;
  __i841 = c842;
    char ref_tmp0843;
    while (1) {
      unsigned long t844 = __i841;
      char* t845 = __p839;
      char* ptr846 = &(t845)[t844];
      char c847 = 0;
      ref_tmp0843 = c847;
      _Bool r848 = __gnu_cxx__char_traits_char___eq(ptr846, &ref_tmp0843);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u849 = !r848;
      if (!u849) break;
      unsigned long t850 = __i841;
      unsigned long u851 = t850 + 1;
      __i841 = u851;
    }
  unsigned long t852 = __i841;
  __retval840 = t852;
  unsigned long t853 = __retval840;
  return t853;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v854) {
bb855:
  char* __s856;
  unsigned long __retval857;
  __s856 = v854;
    _Bool r858 = std____is_constant_evaluated();
    if (r858) {
      char* t859 = __s856;
      unsigned long r860 = __gnu_cxx__char_traits_char___length(t859);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval857 = r860;
      unsigned long t861 = __retval857;
      return t861;
    }
  char* t862 = __s856;
  unsigned long r863 = strlen(t862);
  __retval857 = r863;
  unsigned long t864 = __retval857;
  return t864;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v865, char* v866) {
bb867:
  struct std__basic_ostream_char__std__char_traits_char__* __out868;
  char* __s869;
  struct std__basic_ostream_char__std__char_traits_char__* __retval870;
  __out868 = v865;
  __s869 = v866;
    char* t871 = __s869;
    _Bool cast872 = (_Bool)t871;
    _Bool u873 = !cast872;
    if (u873) {
      struct std__basic_ostream_char__std__char_traits_char__* t874 = __out868;
      void** v875 = (void**)t874;
      void* v876 = *((void**)v875);
      unsigned char* cast877 = (unsigned char*)v876;
      long c878 = -24;
      unsigned char* ptr879 = &(cast877)[c878];
      long* cast880 = (long*)ptr879;
      long t881 = *cast880;
      unsigned char* cast882 = (unsigned char*)t874;
      unsigned char* ptr883 = &(cast882)[t881];
      struct std__basic_ostream_char__std__char_traits_char__* cast884 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr883;
      struct std__basic_ios_char__std__char_traits_char__* cast885 = (struct std__basic_ios_char__std__char_traits_char__*)cast884;
      int t886 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast885, t886);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t887 = __out868;
      char* t888 = __s869;
      char* t889 = __s869;
      unsigned long r890 = std__char_traits_char___length(t889);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast891 = (long)r890;
      struct std__basic_ostream_char__std__char_traits_char__* r892 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t887, t888, cast891);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t893 = __out868;
  __retval870 = t893;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __retval870;
  return t894;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v895, void* v896) {
bb897:
  struct std__basic_ostream_char__std__char_traits_char__* this898;
  void* __pf899;
  struct std__basic_ostream_char__std__char_traits_char__* __retval900;
  this898 = v895;
  __pf899 = v896;
  struct std__basic_ostream_char__std__char_traits_char__* t901 = this898;
  void* t902 = __pf899;
  struct std__basic_ostream_char__std__char_traits_char__* r903 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t902)(t901);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval900 = r903;
  struct std__basic_ostream_char__std__char_traits_char__* t904 = __retval900;
  return t904;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v905) {
bb906:
  struct std__basic_ostream_char__std__char_traits_char__* __os907;
  struct std__basic_ostream_char__std__char_traits_char__* __retval908;
  __os907 = v905;
  struct std__basic_ostream_char__std__char_traits_char__* t909 = __os907;
  struct std__basic_ostream_char__std__char_traits_char__* r910 = std__ostream__flush(t909);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval908 = r910;
  struct std__basic_ostream_char__std__char_traits_char__* t911 = __retval908;
  return t911;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v912) {
bb913:
  struct std__ctype_char_* __f914;
  struct std__ctype_char_* __retval915;
  __f914 = v912;
    struct std__ctype_char_* t916 = __f914;
    _Bool cast917 = (_Bool)t916;
    _Bool u918 = !cast917;
    if (u918) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t919 = __f914;
  __retval915 = t919;
  struct std__ctype_char_* t920 = __retval915;
  return t920;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v921, char v922) {
bb923:
  struct std__ctype_char_* this924;
  char __c925;
  char __retval926;
  this924 = v921;
  __c925 = v922;
  struct std__ctype_char_* t927 = this924;
    char t928 = t927->_M_widen_ok;
    _Bool cast929 = (_Bool)t928;
    if (cast929) {
      char t930 = __c925;
      unsigned char cast931 = (unsigned char)t930;
      unsigned long cast932 = (unsigned long)cast931;
      char t933 = t927->_M_widen[cast932];
      __retval926 = t933;
      char t934 = __retval926;
      return t934;
    }
  std__ctype_char____M_widen_init___const(t927);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t935 = __c925;
  void** v936 = (void**)t927;
  void* v937 = *((void**)v936);
  char vcall940 = (char)__VERIFIER_virtual_call_char_char(t927, 6, t935);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval926 = vcall940;
  char t941 = __retval926;
  return t941;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v942, char v943) {
bb944:
  struct std__basic_ios_char__std__char_traits_char__* this945;
  char __c946;
  char __retval947;
  this945 = v942;
  __c946 = v943;
  struct std__basic_ios_char__std__char_traits_char__* t948 = this945;
  struct std__ctype_char_* t949 = t948->_M_ctype;
  struct std__ctype_char_* r950 = std__ctype_char__const__std____check_facet_std__ctype_char___(t949);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t951 = __c946;
  char r952 = std__ctype_char___widen_char__const(r950, t951);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval947 = r952;
  char t953 = __retval947;
  return t953;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v954) {
bb955:
  struct std__basic_ostream_char__std__char_traits_char__* __os956;
  struct std__basic_ostream_char__std__char_traits_char__* __retval957;
  __os956 = v954;
  struct std__basic_ostream_char__std__char_traits_char__* t958 = __os956;
  struct std__basic_ostream_char__std__char_traits_char__* t959 = __os956;
  void** v960 = (void**)t959;
  void* v961 = *((void**)v960);
  unsigned char* cast962 = (unsigned char*)v961;
  long c963 = -24;
  unsigned char* ptr964 = &(cast962)[c963];
  long* cast965 = (long*)ptr964;
  long t966 = *cast965;
  unsigned char* cast967 = (unsigned char*)t959;
  unsigned char* ptr968 = &(cast967)[t966];
  struct std__basic_ostream_char__std__char_traits_char__* cast969 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr968;
  struct std__basic_ios_char__std__char_traits_char__* cast970 = (struct std__basic_ios_char__std__char_traits_char__*)cast969;
  char c971 = 10;
  char r972 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast970, c971);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r973 = std__ostream__put(t958, r972);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r974 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r973);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval957 = r974;
  struct std__basic_ostream_char__std__char_traits_char__* t975 = __retval957;
  return t975;
}

// function: main
int main() {
bb976:
  int __retval977;
  int c978 = 0;
  __retval977 = c978;
    struct std__vector_int__std__allocator_int__ myvector979;
    struct std__length_error* le980;
      std__vector_int__std__allocator_int_____vector(&myvector979);
        unsigned long r982 = std__vector_int__std__allocator_int_____max_size___const(&myvector979);
        unsigned long c983 = 1;
        unsigned long b984 = r982 + c983;
        std__vector_int__std__allocator_int_____resize(&myvector979, b984);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&myvector979);
          }
          goto cir_try_dispatch981;
        }
      {
        std__vector_int__std__allocator_int______vector(&myvector979);
      }
    cir_try_dispatch981: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt12length_error) {
      int ca_tok985 = 0;
      void* ca_exn986 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        le980 = (struct std__length_error*)__cir_exc_ptr;
        char* cast987 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r988 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast987);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__length_error* t989 = le980;
        struct std__logic_error* base990 = (struct std__logic_error*)((char *)t989 + 0);
        void** v991 = (void**)base990;
        void* v992 = *((void**)v991);
        char* vcall995 = (char*)__VERIFIER_virtual_call_char_ptr(base990, 2);
        struct std__basic_ostream_char__std__char_traits_char__* r996 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r988, vcall995);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r997 = std__ostream__operator___std__ostream_____(r996, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
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
  int c998 = 0;
  __retval977 = c998;
  int t999 = __retval977;
  return t999;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1000) {
bb1001:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1002;
  this1002 = v1000;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1003 = this1002;
  struct std__allocator_int_* base1004 = (struct std__allocator_int_*)((char *)t1003 + 0);
  std__allocator_int___allocator(base1004);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1005 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1003 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1005);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1006) {
bb1007:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1008;
  this1008 = v1006;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1009 = this1008;
  {
    struct std__allocator_int_* base1010 = (struct std__allocator_int_*)((char *)t1009 + 0);
    std__allocator_int____allocator(base1010);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1011) {
bb1012:
  struct std___Vector_base_int__std__allocator_int__* this1013;
  this1013 = v1011;
  struct std___Vector_base_int__std__allocator_int__* t1014 = this1013;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1014->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1015:
  _Bool __retval1016;
    _Bool c1017 = 0;
    __retval1016 = c1017;
    _Bool t1018 = __retval1016;
    return t1018;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1019, int* v1020, unsigned long v1021) {
bb1022:
  struct std____new_allocator_int_* this1023;
  int* __p1024;
  unsigned long __n1025;
  this1023 = v1019;
  __p1024 = v1020;
  __n1025 = v1021;
  struct std____new_allocator_int_* t1026 = this1023;
    unsigned long c1027 = 4;
    unsigned long c1028 = 16;
    _Bool c1029 = ((c1027 > c1028)) ? 1 : 0;
    if (c1029) {
      int* t1030 = __p1024;
      void* cast1031 = (void*)t1030;
      unsigned long t1032 = __n1025;
      unsigned long c1033 = 4;
      unsigned long b1034 = t1032 * c1033;
      unsigned long c1035 = 4;
      operator_delete_3(cast1031, b1034, c1035);
      return;
    }
  int* t1036 = __p1024;
  void* cast1037 = (void*)t1036;
  unsigned long t1038 = __n1025;
  unsigned long c1039 = 4;
  unsigned long b1040 = t1038 * c1039;
  operator_delete_2(cast1037, b1040);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1041, int* v1042, unsigned long v1043) {
bb1044:
  struct std__allocator_int_* this1045;
  int* __p1046;
  unsigned long __n1047;
  this1045 = v1041;
  __p1046 = v1042;
  __n1047 = v1043;
  struct std__allocator_int_* t1048 = this1045;
    _Bool r1049 = std____is_constant_evaluated();
    if (r1049) {
      int* t1050 = __p1046;
      void* cast1051 = (void*)t1050;
      operator_delete(cast1051);
      return;
    }
  struct std____new_allocator_int_* base1052 = (struct std____new_allocator_int_*)((char *)t1048 + 0);
  int* t1053 = __p1046;
  unsigned long t1054 = __n1047;
  std____new_allocator_int___deallocate(base1052, t1053, t1054);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1055, int* v1056, unsigned long v1057) {
bb1058:
  struct std__allocator_int_* __a1059;
  int* __p1060;
  unsigned long __n1061;
  __a1059 = v1055;
  __p1060 = v1056;
  __n1061 = v1057;
  struct std__allocator_int_* t1062 = __a1059;
  int* t1063 = __p1060;
  unsigned long t1064 = __n1061;
  std__allocator_int___deallocate(t1062, t1063, t1064);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1065, int* v1066, unsigned long v1067) {
bb1068:
  struct std___Vector_base_int__std__allocator_int__* this1069;
  int* __p1070;
  unsigned long __n1071;
  this1069 = v1065;
  __p1070 = v1066;
  __n1071 = v1067;
  struct std___Vector_base_int__std__allocator_int__* t1072 = this1069;
    int* t1073 = __p1070;
    _Bool cast1074 = (_Bool)t1073;
    if (cast1074) {
      struct std__allocator_int_* base1075 = (struct std__allocator_int_*)((char *)&(t1072->_M_impl) + 0);
      int* t1076 = __p1070;
      unsigned long t1077 = __n1071;
      std__allocator_traits_std__allocator_int_____deallocate(base1075, t1076, t1077);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1078) {
bb1079:
  struct std___Vector_base_int__std__allocator_int__* this1080;
  this1080 = v1078;
  struct std___Vector_base_int__std__allocator_int__* t1081 = this1080;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1082 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1081->_M_impl) + 0);
    int* t1083 = base1082->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1084 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1081->_M_impl) + 0);
    int* t1085 = base1084->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1086 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1081->_M_impl) + 0);
    int* t1087 = base1086->_M_start;
    long diff1088 = t1085 - t1087;
    unsigned long cast1089 = (unsigned long)diff1088;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1081, t1083, cast1089);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1081->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1081->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1090) {
bb1091:
  struct std____new_allocator_int_* this1092;
  this1092 = v1090;
  struct std____new_allocator_int_* t1093 = this1092;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1094) {
bb1095:
  struct std__allocator_int_* this1096;
  this1096 = v1094;
  struct std__allocator_int_* t1097 = this1096;
  struct std____new_allocator_int_* base1098 = (struct std____new_allocator_int_*)((char *)t1097 + 0);
  std____new_allocator_int_____new_allocator(base1098);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1099) {
bb1100:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1101;
  this1101 = v1099;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1102 = this1101;
  int* c1103 = ((void*)0);
  t1102->_M_start = c1103;
  int* c1104 = ((void*)0);
  t1102->_M_finish = c1104;
  int* c1105 = ((void*)0);
  t1102->_M_end_of_storage = c1105;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1106) {
bb1107:
  struct std__allocator_int_* this1108;
  this1108 = v1106;
  struct std__allocator_int_* t1109 = this1108;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1110) {
bb1111:
  int* __location1112;
  __location1112 = v1110;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1113, int* v1114) {
bb1115:
  int* __first1116;
  int* __last1117;
  __first1116 = v1113;
  __last1117 = v1114;
      _Bool r1118 = std____is_constant_evaluated();
      if (r1118) {
          while (1) {
            int* t1120 = __first1116;
            int* t1121 = __last1117;
            _Bool c1122 = ((t1120 != t1121)) ? 1 : 0;
            if (!c1122) break;
            int* t1123 = __first1116;
            void_std__destroy_at_int_(t1123);
            if (__cir_exc_active) {
              return;
            }
          for_step1119: ;
            int* t1124 = __first1116;
            int c1125 = 1;
            int* ptr1126 = &(t1124)[c1125];
            __first1116 = ptr1126;
          }
      }
  return;
}

