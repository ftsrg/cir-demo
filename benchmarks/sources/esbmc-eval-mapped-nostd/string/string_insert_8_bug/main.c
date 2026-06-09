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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str != \"to be the question\"";
char _str_5[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_8_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[22] = "basic_string::replace";
char _str_9[25] = "basic_string::_M_replace";
char _str_10[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_6);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
bb33:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this34;
  this34 = v32;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t35 = this34;
  char* c36 = ((void*)0);
  t35->_M_current = c36;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37, unsigned long v38, unsigned long v39, char* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  unsigned long __n143;
  unsigned long __n244;
  char* __s45;
  this42 = v37;
  __n143 = v38;
  __n244 = v39;
  __s45 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = this42;
    unsigned long r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t46);
    unsigned long r48 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t46);
    unsigned long t49 = __n143;
    unsigned long b50 = r48 - t49;
    unsigned long b51 = r47 - b50;
    unsigned long t52 = __n244;
    _Bool c53 = ((b51 < t52)) ? 1 : 0;
    if (c53) {
      char* t54 = __s45;
      std____throw_length_error(t54);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  _Bool r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t60);
  unsigned long ternary62;
  if (r61) {
    unsigned long c63 = 15;
    ternary62 = (unsigned long)c63;
  } else {
    unsigned long t64 = t60->field2._M_allocated_capacity;
    ternary62 = (unsigned long)t64;
  }
  __sz59 = ternary62;
    unsigned long t65 = __sz59;
    unsigned long c66 = 15;
    _Bool c67 = ((t65 < c66)) ? 1 : 0;
    _Bool ternary68;
    if (c67) {
      _Bool c69 = 1;
      ternary68 = (_Bool)c69;
    } else {
      unsigned long t70 = __sz59;
      unsigned long r71 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
      _Bool c72 = ((t70 > r71)) ? 1 : 0;
      ternary68 = (_Bool)c72;
    }
    if (ternary68) {
      __builtin_unreachable();
    }
  unsigned long t73 = __sz59;
  __retval58 = t73;
  unsigned long t74 = __retval58;
  return t74;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v75, char* v76, char* v77) {
bb78:
  struct std__less_const_char___* this79;
  char* __x80;
  char* __y81;
  _Bool __retval82;
  this79 = v75;
  __x80 = v76;
  __y81 = v77;
  struct std__less_const_char___* t83 = this79;
    _Bool r84 = std____is_constant_evaluated();
    if (r84) {
      char* t85 = __x80;
      char* t86 = __y81;
      _Bool c87 = ((t85 < t86)) ? 1 : 0;
      __retval82 = c87;
      _Bool t88 = __retval82;
      return t88;
    }
  char* t89 = __x80;
  unsigned long cast90 = (unsigned long)t89;
  char* t91 = __y81;
  unsigned long cast92 = (unsigned long)t91;
  _Bool c93 = ((cast90 < cast92)) ? 1 : 0;
  __retval82 = c93;
  _Bool t94 = __retval82;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95, char* v96) {
bb97:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this98;
  char* __s99;
  _Bool __retval100;
  struct std__less_const_char___ ref_tmp0101;
  this98 = v95;
  __s99 = v96;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this98;
  char* t103 = __s99;
  char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
  _Bool r105 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0101, t103, r104);
  _Bool ternary106;
  if (r105) {
    _Bool c107 = 1;
    ternary106 = (_Bool)c107;
  } else {
    struct std__less_const_char___ ref_tmp1108;
    char* r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
    unsigned long r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t102);
    char* ptr111 = &(r109)[r110];
    char* t112 = __s99;
    _Bool r113 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1108, ptr111, t112);
    ternary106 = (_Bool)r113;
  }
  __retval100 = ternary106;
  _Bool t114 = __retval100;
  return t114;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v115, char* v116) {
bb117:
  char* __c1118;
  char* __c2119;
  __c1118 = v115;
  __c2119 = v116;
    _Bool r120 = std____is_constant_evaluated();
    if (r120) {
      char* t121 = __c1118;
      char* t122 = __c2119;
      char* r123 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t121, t122);
    } else {
      char* t124 = __c2119;
      char t125 = *t124;
      char* t126 = __c1118;
      *t126 = t125;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v127, char* v128, unsigned long v129) {
bb130:
  char* __s1131;
  char* __s2132;
  unsigned long __n133;
  char* __retval134;
  __s1131 = v127;
  __s2132 = v128;
  __n133 = v129;
    unsigned long t135 = __n133;
    unsigned long c136 = 0;
    _Bool c137 = ((t135 == c136)) ? 1 : 0;
    if (c137) {
      char* t138 = __s1131;
      __retval134 = t138;
      char* t139 = __retval134;
      return t139;
    }
    _Bool r140 = std____is_constant_evaluated();
    if (r140) {
        char* t141 = __s2132;
        char* t142 = __s1131;
        _Bool c143 = ((t141 < t142)) ? 1 : 0;
        _Bool isconst144 = 0;
        _Bool ternary145;
        if (isconst144) {
          char* t146 = __s1131;
          char* t147 = __s2132;
          _Bool c148 = ((t146 > t147)) ? 1 : 0;
          ternary145 = (_Bool)c148;
        } else {
          _Bool c149 = 0;
          ternary145 = (_Bool)c149;
        }
        _Bool ternary150;
        if (ternary145) {
          char* t151 = __s1131;
          char* t152 = __s2132;
          unsigned long t153 = __n133;
          char* ptr154 = &(t152)[t153];
          _Bool c155 = ((t151 < ptr154)) ? 1 : 0;
          ternary150 = (_Bool)c155;
        } else {
          _Bool c156 = 0;
          ternary150 = (_Bool)c156;
        }
        if (ternary150) {
            do {
                unsigned long t157 = __n133;
                unsigned long u158 = t157 - 1;
                __n133 = u158;
                unsigned long t159 = __n133;
                char* t160 = __s1131;
                char* ptr161 = &(t160)[t159];
                unsigned long t162 = __n133;
                char* t163 = __s2132;
                char* ptr164 = &(t163)[t162];
                __gnu_cxx__char_traits_char___assign(ptr161, ptr164);
              unsigned long t165 = __n133;
              unsigned long c166 = 0;
              _Bool c167 = ((t165 > c166)) ? 1 : 0;
              if (!c167) break;
            } while (1);
        } else {
          char* t168 = __s1131;
          char* t169 = __s2132;
          unsigned long t170 = __n133;
          char* r171 = __gnu_cxx__char_traits_char___copy(t168, t169, t170);
        }
      char* t172 = __s1131;
      __retval134 = t172;
      char* t173 = __retval134;
      return t173;
    }
  char* t174 = __s1131;
  void* cast175 = (void*)t174;
  char* t176 = __s2132;
  void* cast177 = (void*)t176;
  unsigned long t178 = __n133;
  unsigned long c179 = 1;
  unsigned long b180 = t178 * c179;
  void* r181 = memmove(cast175, cast177, b180);
  char* t182 = __s1131;
  __retval134 = t182;
  char* t183 = __retval134;
  return t183;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v184, char* v185, unsigned long v186) {
bb187:
  char* __s1188;
  char* __s2189;
  unsigned long __n190;
  char* __retval191;
  __s1188 = v184;
  __s2189 = v185;
  __n190 = v186;
    unsigned long t192 = __n190;
    unsigned long c193 = 0;
    _Bool c194 = ((t192 == c193)) ? 1 : 0;
    if (c194) {
      char* t195 = __s1188;
      __retval191 = t195;
      char* t196 = __retval191;
      return t196;
    }
    _Bool r197 = std____is_constant_evaluated();
    if (r197) {
      char* t198 = __s1188;
      char* t199 = __s2189;
      unsigned long t200 = __n190;
      char* r201 = __gnu_cxx__char_traits_char___move(t198, t199, t200);
      __retval191 = r201;
      char* t202 = __retval191;
      return t202;
    }
  char* t203 = __s1188;
  void* cast204 = (void*)t203;
  char* t205 = __s2189;
  void* cast206 = (void*)t205;
  unsigned long t207 = __n190;
  void* r208 = memmove(cast204, cast206, t207);
  char* cast209 = (char*)r208;
  __retval191 = cast209;
  char* t210 = __retval191;
  return t210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v211, char* v212, unsigned long v213) {
bb214:
  char* __d215;
  char* __s216;
  unsigned long __n217;
  __d215 = v211;
  __s216 = v212;
  __n217 = v213;
    unsigned long t218 = __n217;
    unsigned long c219 = 1;
    _Bool c220 = ((t218 == c219)) ? 1 : 0;
    if (c220) {
      char* t221 = __d215;
      char* t222 = __s216;
      std__char_traits_char___assign(t221, t222);
    } else {
      char* t223 = __d215;
      char* t224 = __s216;
      unsigned long t225 = __n217;
      char* r226 = std__char_traits_char___move(t223, t224, t225);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227, char* v228, unsigned long v229, char* v230, unsigned long v231, unsigned long v232) {
bb233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this234;
  char* __p235;
  unsigned long __len1236;
  char* __s237;
  unsigned long __len2238;
  unsigned long __how_much239;
  this234 = v227;
  __p235 = v228;
  __len1236 = v229;
  __s237 = v230;
  __len2238 = v231;
  __how_much239 = v232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = this234;
    unsigned long t241 = __len2238;
    _Bool cast242 = (_Bool)t241;
    _Bool ternary243;
    if (cast242) {
      unsigned long t244 = __len2238;
      unsigned long t245 = __len1236;
      _Bool c246 = ((t244 <= t245)) ? 1 : 0;
      ternary243 = (_Bool)c246;
    } else {
      _Bool c247 = 0;
      ternary243 = (_Bool)c247;
    }
    if (ternary243) {
      char* t248 = __p235;
      char* t249 = __s237;
      unsigned long t250 = __len2238;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t248, t249, t250);
    }
    unsigned long t251 = __how_much239;
    _Bool cast252 = (_Bool)t251;
    _Bool ternary253;
    if (cast252) {
      unsigned long t254 = __len1236;
      unsigned long t255 = __len2238;
      _Bool c256 = ((t254 != t255)) ? 1 : 0;
      ternary253 = (_Bool)c256;
    } else {
      _Bool c257 = 0;
      ternary253 = (_Bool)c257;
    }
    if (ternary253) {
      char* t258 = __p235;
      unsigned long t259 = __len2238;
      char* ptr260 = &(t258)[t259];
      char* t261 = __p235;
      unsigned long t262 = __len1236;
      char* ptr263 = &(t261)[t262];
      unsigned long t264 = __how_much239;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr260, ptr263, t264);
    }
    unsigned long t265 = __len2238;
    unsigned long t266 = __len1236;
    _Bool c267 = ((t265 > t266)) ? 1 : 0;
    if (c267) {
        char* t268 = __s237;
        unsigned long t269 = __len2238;
        char* ptr270 = &(t268)[t269];
        char* t271 = __p235;
        unsigned long t272 = __len1236;
        char* ptr273 = &(t271)[t272];
        _Bool c274 = ((ptr270 <= ptr273)) ? 1 : 0;
        if (c274) {
          char* t275 = __p235;
          char* t276 = __s237;
          unsigned long t277 = __len2238;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t275, t276, t277);
        } else {
            char* t278 = __s237;
            char* t279 = __p235;
            unsigned long t280 = __len1236;
            char* ptr281 = &(t279)[t280];
            _Bool c282 = ((t278 >= ptr281)) ? 1 : 0;
            if (c282) {
              unsigned long __poff283;
              char* t284 = __s237;
              char* t285 = __p235;
              long diff286 = t284 - t285;
              unsigned long cast287 = (unsigned long)diff286;
              unsigned long t288 = __len2238;
              unsigned long t289 = __len1236;
              unsigned long b290 = t288 - t289;
              unsigned long b291 = cast287 + b290;
              __poff283 = b291;
              char* t292 = __p235;
              char* t293 = __p235;
              unsigned long t294 = __poff283;
              char* ptr295 = &(t293)[t294];
              unsigned long t296 = __len2238;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t292, ptr295, t296);
            } else {
              unsigned long __nleft297;
              char* t298 = __p235;
              unsigned long t299 = __len1236;
              char* ptr300 = &(t298)[t299];
              char* t301 = __s237;
              long diff302 = ptr300 - t301;
              unsigned long cast303 = (unsigned long)diff302;
              __nleft297 = cast303;
              char* t304 = __p235;
              char* t305 = __s237;
              unsigned long t306 = __nleft297;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t304, t305, t306);
              char* t307 = __p235;
              unsigned long t308 = __nleft297;
              char* ptr309 = &(t307)[t308];
              char* t310 = __p235;
              unsigned long t311 = __len2238;
              char* ptr312 = &(t310)[t311];
              unsigned long t313 = __len2238;
              unsigned long t314 = __nleft297;
              unsigned long b315 = t313 - t314;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr309, ptr312, b315);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v316) {
bb317:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this318;
  unsigned long __retval319;
  this318 = v316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t320 = this318;
  unsigned long r321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t320);
  __retval319 = r321;
  unsigned long t322 = __retval319;
  return t322;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v323, unsigned long v324, unsigned long v325, char* v326, unsigned long v327) {
bb328:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  unsigned long __pos330;
  unsigned long __len1331;
  char* __s332;
  unsigned long __len2333;
  unsigned long __how_much334;
  unsigned long __new_capacity335;
  char* __r336;
  this329 = v323;
  __pos330 = v324;
  __len1331 = v325;
  __s332 = v326;
  __len2333 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this329;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t339 = __pos330;
  unsigned long b340 = r338 - t339;
  unsigned long t341 = __len1331;
  unsigned long b342 = b340 - t341;
  __how_much334 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t344 = __len2333;
  unsigned long b345 = r343 + t344;
  unsigned long t346 = __len1331;
  unsigned long b347 = b345 - t346;
  __new_capacity335 = b347;
  unsigned long r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t337);
  char* r349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t337, &__new_capacity335, r348);
  __r336 = r349;
    unsigned long t350 = __pos330;
    _Bool cast351 = (_Bool)t350;
    if (cast351) {
      char* t352 = __r336;
      char* r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t354 = __pos330;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t352, r353, t354);
    }
    char* t355 = __s332;
    _Bool cast356 = (_Bool)t355;
    _Bool ternary357;
    if (cast356) {
      unsigned long t358 = __len2333;
      _Bool cast359 = (_Bool)t358;
      ternary357 = (_Bool)cast359;
    } else {
      _Bool c360 = 0;
      ternary357 = (_Bool)c360;
    }
    if (ternary357) {
      char* t361 = __r336;
      unsigned long t362 = __pos330;
      char* ptr363 = &(t361)[t362];
      char* t364 = __s332;
      unsigned long t365 = __len2333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr363, t364, t365);
    }
    unsigned long t366 = __how_much334;
    _Bool cast367 = (_Bool)t366;
    if (cast367) {
      char* t368 = __r336;
      unsigned long t369 = __pos330;
      char* ptr370 = &(t368)[t369];
      unsigned long t371 = __len2333;
      char* ptr372 = &(ptr370)[t371];
      char* r373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t374 = __pos330;
      char* ptr375 = &(r373)[t374];
      unsigned long t376 = __len1331;
      char* ptr377 = &(ptr375)[t376];
      unsigned long t378 = __how_much334;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr372, ptr377, t378);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t337);
  char* t379 = __r336;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t337, t379);
  unsigned long t380 = __new_capacity335;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t337, t380);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v381, unsigned long v382, unsigned long v383, char* v384, unsigned long v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long __pos388;
  unsigned long __len1389;
  char* __s390;
  unsigned long __len2391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval392;
  unsigned long __old_size393;
  unsigned long __new_size394;
  this387 = v381;
  __pos388 = v382;
  __len1389 = v383;
  __s390 = v384;
  __len2391 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t395 = this387;
  unsigned long t396 = __len1389;
  unsigned long t397 = __len2391;
  char* cast398 = (char*)&(_str_9);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t395, t396, t397, cast398);
  unsigned long r399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t395);
  __old_size393 = r399;
  unsigned long t400 = __old_size393;
  unsigned long t401 = __len2391;
  unsigned long b402 = t400 + t401;
  unsigned long t403 = __len1389;
  unsigned long b404 = b402 - t403;
  __new_size394 = b404;
    unsigned long t405 = __new_size394;
    unsigned long r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t395);
    _Bool c407 = ((t405 <= r406)) ? 1 : 0;
    if (c407) {
      char* __p408;
      unsigned long __how_much409;
      char* r410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
      unsigned long t411 = __pos388;
      char* ptr412 = &(r410)[t411];
      __p408 = ptr412;
      unsigned long t413 = __old_size393;
      unsigned long t414 = __pos388;
      unsigned long b415 = t413 - t414;
      unsigned long t416 = __len1389;
      unsigned long b417 = b415 - t416;
      __how_much409 = b417;
        _Bool r418 = std__is_constant_evaluated();
        if (r418) {
          char* __newp419;
          struct std__allocator_char_* r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          unsigned long t421 = __new_size394;
          char* r422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r420, t421);
          __newp419 = r422;
          char* t423 = __newp419;
          char* r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          unsigned long t425 = __pos388;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t423, r424, t425);
          char* t426 = __newp419;
          unsigned long t427 = __pos388;
          char* ptr428 = &(t426)[t427];
          char* t429 = __s390;
          unsigned long t430 = __len2391;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr428, t429, t430);
          char* t431 = __newp419;
          unsigned long t432 = __pos388;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __len2391;
          char* ptr435 = &(ptr433)[t434];
          char* t436 = __p408;
          unsigned long t437 = __len1389;
          char* ptr438 = &(t436)[t437];
          unsigned long t439 = __how_much409;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr435, ptr438, t439);
          char* r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          char* t441 = __newp419;
          unsigned long t442 = __new_size394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r440, t441, t442);
          struct std__allocator_char_* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          char* t444 = __newp419;
          unsigned long t445 = __new_size394;
          std__allocator_char___deallocate(r443, t444, t445);
        } else {
            char* t446 = __s390;
            _Bool r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t395, t446);
            if (r447) {
                unsigned long t448 = __how_much409;
                _Bool cast449 = (_Bool)t448;
                _Bool ternary450;
                if (cast449) {
                  unsigned long t451 = __len1389;
                  unsigned long t452 = __len2391;
                  _Bool c453 = ((t451 != t452)) ? 1 : 0;
                  ternary450 = (_Bool)c453;
                } else {
                  _Bool c454 = 0;
                  ternary450 = (_Bool)c454;
                }
                if (ternary450) {
                  char* t455 = __p408;
                  unsigned long t456 = __len2391;
                  char* ptr457 = &(t455)[t456];
                  char* t458 = __p408;
                  unsigned long t459 = __len1389;
                  char* ptr460 = &(t458)[t459];
                  unsigned long t461 = __how_much409;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr457, ptr460, t461);
                }
                unsigned long t462 = __len2391;
                _Bool cast463 = (_Bool)t462;
                if (cast463) {
                  char* t464 = __p408;
                  char* t465 = __s390;
                  unsigned long t466 = __len2391;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t464, t465, t466);
                }
            } else {
              char* t467 = __p408;
              unsigned long t468 = __len1389;
              char* t469 = __s390;
              unsigned long t470 = __len2391;
              unsigned long t471 = __how_much409;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t395, t467, t468, t469, t470, t471);
            }
        }
    } else {
      unsigned long t472 = __pos388;
      unsigned long t473 = __len1389;
      char* t474 = __s390;
      unsigned long t475 = __len2391;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t395, t472, t473, t474, t475);
    }
  unsigned long t476 = __new_size394;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t395, t476);
  __retval392 = t395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = __retval392;
  return t477;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v478, unsigned long v479, char* v480) {
bb481:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this482;
  unsigned long __pos483;
  char* __s484;
  unsigned long __retval485;
  this482 = v478;
  __pos483 = v479;
  __s484 = v480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t486 = this482;
    unsigned long t487 = __pos483;
    unsigned long r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
    _Bool c489 = ((t487 > r488)) ? 1 : 0;
    if (c489) {
      char* cast490 = (char*)&(_str_10);
      char* t491 = __s484;
      unsigned long t492 = __pos483;
      unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
      std____throw_out_of_range_fmt(cast490, t491, t492, r493);
    }
  unsigned long t494 = __pos483;
  __retval485 = t494;
  unsigned long t495 = __retval485;
  return t495;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v496, unsigned long v497, unsigned long v498) {
bb499:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this500;
  unsigned long __pos501;
  unsigned long __off502;
  unsigned long __retval503;
  _Bool __testoff504;
  this500 = v496;
  __pos501 = v497;
  __off502 = v498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this500;
  unsigned long t506 = __off502;
  unsigned long r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
  unsigned long t508 = __pos501;
  unsigned long b509 = r507 - t508;
  _Bool c510 = ((t506 < b509)) ? 1 : 0;
  __testoff504 = c510;
  _Bool t511 = __testoff504;
  unsigned long ternary512;
  if (t511) {
    unsigned long t513 = __off502;
    ternary512 = (unsigned long)t513;
  } else {
    unsigned long r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
    unsigned long t515 = __pos501;
    unsigned long b516 = r514 - t515;
    ternary512 = (unsigned long)b516;
  }
  __retval503 = ternary512;
  unsigned long t517 = __retval503;
  return t517;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long v519, unsigned long v520, char* v521, unsigned long v522) {
bb523:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this524;
  unsigned long __pos525;
  unsigned long __n1526;
  char* __s527;
  unsigned long __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval529;
  this524 = v518;
  __pos525 = v519;
  __n1526 = v520;
  __s527 = v521;
  __n2528 = v522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t530 = this524;
  unsigned long t531 = __pos525;
  char* cast532 = (char*)&(_str_8);
  unsigned long r533 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t530, t531, cast532);
  unsigned long t534 = __pos525;
  unsigned long t535 = __n1526;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t530, t534, t535);
  char* t537 = __s527;
  unsigned long t538 = __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r539 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t530, r533, r536, t537, t538);
  __retval529 = r539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t540 = __retval529;
  return t540;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v541) {
bb542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this543;
  unsigned long __retval544;
  unsigned long __sz545;
  this543 = v541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t546 = this543;
  unsigned long t547 = t546->_M_string_length;
  __sz545 = t547;
    unsigned long t548 = __sz545;
    unsigned long r549 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t546);
    _Bool c550 = ((t548 > r549)) ? 1 : 0;
    if (c550) {
      __builtin_unreachable();
    }
  unsigned long t551 = __sz545;
  __retval544 = t551;
  unsigned long t552 = __retval544;
  return t552;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, unsigned long v554, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
bb556:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this557;
  unsigned long __pos1558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval560;
  this557 = v553;
  __pos1558 = v554;
  __str559 = v555;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this557;
  unsigned long t562 = __pos1558;
  unsigned long c563 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = __str559;
  char* r565 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t564);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t566 = __str559;
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t566);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t561, t562, c563, r565, r567);
  __retval560 = r568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = __retval560;
  return t569;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v570, char* v571) {
bb572:
  char* __c1573;
  char* __c2574;
  _Bool __retval575;
  __c1573 = v570;
  __c2574 = v571;
  char* t576 = __c1573;
  char t577 = *t576;
  unsigned char cast578 = (unsigned char)t577;
  int cast579 = (int)cast578;
  char* t580 = __c2574;
  char t581 = *t580;
  unsigned char cast582 = (unsigned char)t581;
  int cast583 = (int)cast582;
  _Bool c584 = ((cast579 < cast583)) ? 1 : 0;
  __retval575 = c584;
  _Bool t585 = __retval575;
  return t585;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v586, char* v587, unsigned long v588) {
bb589:
  char* __s1590;
  char* __s2591;
  unsigned long __n592;
  int __retval593;
  __s1590 = v586;
  __s2591 = v587;
  __n592 = v588;
    unsigned long t594 = __n592;
    unsigned long c595 = 0;
    _Bool c596 = ((t594 == c595)) ? 1 : 0;
    if (c596) {
      int c597 = 0;
      __retval593 = c597;
      int t598 = __retval593;
      return t598;
    }
    _Bool r599 = std____is_constant_evaluated();
    if (r599) {
        unsigned long __i600;
        unsigned long c601 = 0;
        __i600 = c601;
        while (1) {
          unsigned long t603 = __i600;
          unsigned long t604 = __n592;
          _Bool c605 = ((t603 < t604)) ? 1 : 0;
          if (!c605) break;
            unsigned long t606 = __i600;
            char* t607 = __s1590;
            char* ptr608 = &(t607)[t606];
            unsigned long t609 = __i600;
            char* t610 = __s2591;
            char* ptr611 = &(t610)[t609];
            _Bool r612 = std__char_traits_char___lt(ptr608, ptr611);
            if (r612) {
              int c613 = -1;
              __retval593 = c613;
              int t614 = __retval593;
              int ret_val615 = t614;
              return ret_val615;
            } else {
                unsigned long t616 = __i600;
                char* t617 = __s2591;
                char* ptr618 = &(t617)[t616];
                unsigned long t619 = __i600;
                char* t620 = __s1590;
                char* ptr621 = &(t620)[t619];
                _Bool r622 = std__char_traits_char___lt(ptr618, ptr621);
                if (r622) {
                  int c623 = 1;
                  __retval593 = c623;
                  int t624 = __retval593;
                  int ret_val625 = t624;
                  return ret_val625;
                }
            }
        for_step602: ;
          unsigned long t626 = __i600;
          unsigned long u627 = t626 + 1;
          __i600 = u627;
        }
      int c628 = 0;
      __retval593 = c628;
      int t629 = __retval593;
      return t629;
    }
  char* t630 = __s1590;
  void* cast631 = (void*)t630;
  char* t632 = __s2591;
  void* cast633 = (void*)t632;
  unsigned long t634 = __n592;
  int r635 = memcmp(cast631, cast633, t634);
  __retval593 = r635;
  int t636 = __retval593;
  return t636;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637) {
bb638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this639;
  char* __retval640;
  this639 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this639;
  char* r642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t641);
  __retval640 = r642;
  char* t643 = __retval640;
  return t643;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v644, char* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs647;
  char* __rhs648;
  _Bool __retval649;
  __lhs647 = v644;
  __rhs648 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = __lhs647;
  unsigned long r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t650);
  char* t652 = __rhs648;
  unsigned long r653 = std__char_traits_char___length(t652);
  _Bool c654 = ((r651 == r653)) ? 1 : 0;
  _Bool ternary655;
  if (c654) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t656 = __lhs647;
    char* r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t656);
    char* t658 = __rhs648;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t659 = __lhs647;
    unsigned long r660 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t659);
    int r661 = std__char_traits_char___compare(r657, t658, r660);
    _Bool cast662 = (_Bool)r661;
    _Bool u663 = !cast662;
    ternary655 = (_Bool)u663;
  } else {
    _Bool c664 = 0;
    ternary655 = (_Bool)c664;
  }
  __retval649 = ternary655;
  _Bool t665 = __retval649;
  return t665;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v666, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v667) {
bb668:
  struct std__basic_ostream_char__std__char_traits_char__* __os669;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str670;
  struct std__basic_ostream_char__std__char_traits_char__* __retval671;
  __os669 = v666;
  __str670 = v667;
  struct std__basic_ostream_char__std__char_traits_char__* t672 = __os669;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t673 = __str670;
  char* r674 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t673);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t675 = __str670;
  unsigned long r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t675);
  long cast677 = (long)r676;
  struct std__basic_ostream_char__std__char_traits_char__* r678 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t672, r674, cast677);
  __retval671 = r678;
  struct std__basic_ostream_char__std__char_traits_char__* t679 = __retval671;
  return t679;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v680, void* v681) {
bb682:
  struct std__basic_ostream_char__std__char_traits_char__* this683;
  void* __pf684;
  struct std__basic_ostream_char__std__char_traits_char__* __retval685;
  this683 = v680;
  __pf684 = v681;
  struct std__basic_ostream_char__std__char_traits_char__* t686 = this683;
  void* t687 = __pf684;
  struct std__basic_ostream_char__std__char_traits_char__* r688 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t687)(t686);
  __retval685 = r688;
  struct std__basic_ostream_char__std__char_traits_char__* t689 = __retval685;
  return t689;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v690) {
bb691:
  struct std__basic_ostream_char__std__char_traits_char__* __os692;
  struct std__basic_ostream_char__std__char_traits_char__* __retval693;
  __os692 = v690;
  struct std__basic_ostream_char__std__char_traits_char__* t694 = __os692;
  struct std__basic_ostream_char__std__char_traits_char__* r695 = std__ostream__flush(t694);
  __retval693 = r695;
  struct std__basic_ostream_char__std__char_traits_char__* t696 = __retval693;
  return t696;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v697) {
bb698:
  struct std__ctype_char_* __f699;
  struct std__ctype_char_* __retval700;
  __f699 = v697;
    struct std__ctype_char_* t701 = __f699;
    _Bool cast702 = (_Bool)t701;
    _Bool u703 = !cast702;
    if (u703) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t704 = __f699;
  __retval700 = t704;
  struct std__ctype_char_* t705 = __retval700;
  return t705;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v706, char v707) {
bb708:
  struct std__ctype_char_* this709;
  char __c710;
  char __retval711;
  this709 = v706;
  __c710 = v707;
  struct std__ctype_char_* t712 = this709;
    char t713 = t712->_M_widen_ok;
    _Bool cast714 = (_Bool)t713;
    if (cast714) {
      char t715 = __c710;
      unsigned char cast716 = (unsigned char)t715;
      unsigned long cast717 = (unsigned long)cast716;
      char t718 = t712->_M_widen[cast717];
      __retval711 = t718;
      char t719 = __retval711;
      return t719;
    }
  std__ctype_char____M_widen_init___const(t712);
  char t720 = __c710;
  void** v721 = (void**)t712;
  void* v722 = *((void**)v721);
  char vcall725 = (char)__VERIFIER_virtual_call_char_char(t712, 6, t720);
  __retval711 = vcall725;
  char t726 = __retval711;
  return t726;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v727, char v728) {
bb729:
  struct std__basic_ios_char__std__char_traits_char__* this730;
  char __c731;
  char __retval732;
  this730 = v727;
  __c731 = v728;
  struct std__basic_ios_char__std__char_traits_char__* t733 = this730;
  struct std__ctype_char_* t734 = t733->_M_ctype;
  struct std__ctype_char_* r735 = std__ctype_char__const__std____check_facet_std__ctype_char___(t734);
  char t736 = __c731;
  char r737 = std__ctype_char___widen_char__const(r735, t736);
  __retval732 = r737;
  char t738 = __retval732;
  return t738;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v739) {
bb740:
  struct std__basic_ostream_char__std__char_traits_char__* __os741;
  struct std__basic_ostream_char__std__char_traits_char__* __retval742;
  __os741 = v739;
  struct std__basic_ostream_char__std__char_traits_char__* t743 = __os741;
  struct std__basic_ostream_char__std__char_traits_char__* t744 = __os741;
  void** v745 = (void**)t744;
  void* v746 = *((void**)v745);
  unsigned char* cast747 = (unsigned char*)v746;
  long c748 = -24;
  unsigned char* ptr749 = &(cast747)[c748];
  long* cast750 = (long*)ptr749;
  long t751 = *cast750;
  unsigned char* cast752 = (unsigned char*)t744;
  unsigned char* ptr753 = &(cast752)[t751];
  struct std__basic_ostream_char__std__char_traits_char__* cast754 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr753;
  struct std__basic_ios_char__std__char_traits_char__* cast755 = (struct std__basic_ios_char__std__char_traits_char__*)cast754;
  char c756 = 10;
  char r757 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast755, c756);
  struct std__basic_ostream_char__std__char_traits_char__* r758 = std__ostream__put(t743, r757);
  struct std__basic_ostream_char__std__char_traits_char__* r759 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r758);
  __retval742 = r759;
  struct std__basic_ostream_char__std__char_traits_char__* t760 = __retval742;
  return t760;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v761) {
bb762:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this763;
  this763 = v761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t764 = this763;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t764);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t764->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb765:
  int __retval766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str767;
  struct std__allocator_char_ ref_tmp0768;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2769;
  struct std__allocator_char_ ref_tmp1770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3771;
  struct std__allocator_char_ ref_tmp2772;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it773;
  int c774 = 0;
  __retval766 = c774;
  char* cast775 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0768);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str767, cast775, &ref_tmp0768);
  {
    std__allocator_char____allocator(&ref_tmp0768);
  }
    char* cast776 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1770);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2769, cast776, &ref_tmp1770);
    {
      std__allocator_char____allocator(&ref_tmp1770);
    }
      char* cast777 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2772);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3771, cast777, &ref_tmp2772);
      {
        std__allocator_char____allocator(&ref_tmp2772);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&it773);
        unsigned long c778 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r779 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str767, c778, &str2769);
        char* cast780 = (char*)&(_str_3);
        _Bool r781 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str767, cast780);
        _Bool u782 = !r781;
        if (u782) {
        } else {
          char* cast783 = (char*)&(_str_4);
          char* c784 = _str_5;
          unsigned int c785 = 25;
          char* cast786 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast783, c784, c785, cast786);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r787 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str767);
        struct std__basic_ostream_char__std__char_traits_char__* r788 = std__ostream__operator___std__ostream_____(r787, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c789 = 0;
        __retval766 = c789;
        int t790 = __retval766;
        int ret_val791 = t790;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3771);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2769);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str767);
        }
        return ret_val791;
  int t792 = __retval766;
  return t792;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v793) {
bb794:
  struct std____new_allocator_char_* this795;
  this795 = v793;
  struct std____new_allocator_char_* t796 = this795;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v797) {
bb798:
  char* __r799;
  char* __retval800;
  __r799 = v797;
  char* t801 = __r799;
  __retval800 = t801;
  char* t802 = __retval800;
  return t802;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v803) {
bb804:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this805;
  char* __retval806;
  this805 = v803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t807 = this805;
  char* cast808 = (char*)&(t807->field2._M_local_buf);
  char* r809 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast808);
  __retval806 = r809;
  char* t810 = __retval806;
  return t810;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v811, char* v812, struct std__allocator_char_* v813) {
bb814:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this815;
  char* __dat816;
  struct std__allocator_char_* __a817;
  this815 = v811;
  __dat816 = v812;
  __a817 = v813;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t818 = this815;
  struct std__allocator_char_* base819 = (struct std__allocator_char_*)((char *)t818 + 0);
  struct std__allocator_char_* t820 = __a817;
  std__allocator_char___allocator(base819, t820);
    char* t821 = __dat816;
    t818->_M_p = t821;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb822:
  _Bool __retval823;
    _Bool c824 = 0;
    __retval823 = c824;
    _Bool t825 = __retval823;
    return t825;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v826, char* v827) {
bb828:
  char* __c1829;
  char* __c2830;
  _Bool __retval831;
  __c1829 = v826;
  __c2830 = v827;
  char* t832 = __c1829;
  char t833 = *t832;
  int cast834 = (int)t833;
  char* t835 = __c2830;
  char t836 = *t835;
  int cast837 = (int)t836;
  _Bool c838 = ((cast834 == cast837)) ? 1 : 0;
  __retval831 = c838;
  _Bool t839 = __retval831;
  return t839;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v840) {
bb841:
  char* __p842;
  unsigned long __retval843;
  unsigned long __i844;
  __p842 = v840;
  unsigned long c845 = 0;
  __i844 = c845;
    char ref_tmp0846;
    while (1) {
      unsigned long t847 = __i844;
      char* t848 = __p842;
      char* ptr849 = &(t848)[t847];
      char c850 = 0;
      ref_tmp0846 = c850;
      _Bool r851 = __gnu_cxx__char_traits_char___eq(ptr849, &ref_tmp0846);
      _Bool u852 = !r851;
      if (!u852) break;
      unsigned long t853 = __i844;
      unsigned long u854 = t853 + 1;
      __i844 = u854;
    }
  unsigned long t855 = __i844;
  __retval843 = t855;
  unsigned long t856 = __retval843;
  return t856;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v857) {
bb858:
  char* __s859;
  unsigned long __retval860;
  __s859 = v857;
    _Bool r861 = std____is_constant_evaluated();
    if (r861) {
      char* t862 = __s859;
      unsigned long r863 = __gnu_cxx__char_traits_char___length(t862);
      __retval860 = r863;
      unsigned long t864 = __retval860;
      return t864;
    }
  char* t865 = __s859;
  unsigned long r866 = strlen(t865);
  __retval860 = r866;
  unsigned long t867 = __retval860;
  return t867;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v868, char* v869, struct std__random_access_iterator_tag v870) {
bb871:
  char* __first872;
  char* __last873;
  struct std__random_access_iterator_tag unnamed874;
  long __retval875;
  __first872 = v868;
  __last873 = v869;
  unnamed874 = v870;
  char* t876 = __last873;
  char* t877 = __first872;
  long diff878 = t876 - t877;
  __retval875 = diff878;
  long t879 = __retval875;
  return t879;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v880) {
bb881:
  char** unnamed882;
  struct std__random_access_iterator_tag __retval883;
  unnamed882 = v880;
  struct std__random_access_iterator_tag t884 = __retval883;
  return t884;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v885, char* v886) {
bb887:
  char* __first888;
  char* __last889;
  long __retval890;
  struct std__random_access_iterator_tag agg_tmp0891;
  __first888 = v885;
  __last889 = v886;
  char* t892 = __first888;
  char* t893 = __last889;
  struct std__random_access_iterator_tag r894 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first888);
  agg_tmp0891 = r894;
  struct std__random_access_iterator_tag t895 = agg_tmp0891;
  long r896 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t892, t893, t895);
  __retval890 = r896;
  long t897 = __retval890;
  return t897;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v898, char* v899) {
bb900:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this901;
  char* __p902;
  this901 = v898;
  __p902 = v899;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = this901;
  char* t904 = __p902;
  t903->_M_dataplus._M_p = t904;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v905) {
bb906:
  struct std__allocator_char_* __a907;
  unsigned long __retval908;
  __a907 = v905;
  unsigned long c909 = -1;
  unsigned long c910 = 1;
  unsigned long b911 = c909 / c910;
  __retval908 = b911;
  unsigned long t912 = __retval908;
  return t912;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v913) {
bb914:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this915;
  struct std__allocator_char_* __retval916;
  this915 = v913;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t917 = this915;
  struct std__allocator_char_* base918 = (struct std__allocator_char_*)((char *)&(t917->_M_dataplus) + 0);
  __retval916 = base918;
  struct std__allocator_char_* t919 = __retval916;
  return t919;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v920, unsigned long* v921) {
bb922:
  unsigned long* __a923;
  unsigned long* __b924;
  unsigned long* __retval925;
  __a923 = v920;
  __b924 = v921;
    unsigned long* t926 = __b924;
    unsigned long t927 = *t926;
    unsigned long* t928 = __a923;
    unsigned long t929 = *t928;
    _Bool c930 = ((t927 < t929)) ? 1 : 0;
    if (c930) {
      unsigned long* t931 = __b924;
      __retval925 = t931;
      unsigned long* t932 = __retval925;
      return t932;
    }
  unsigned long* t933 = __a923;
  __retval925 = t933;
  unsigned long* t934 = __retval925;
  return t934;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935) {
bb936:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this937;
  unsigned long __retval938;
  unsigned long __diffmax939;
  unsigned long __allocmax940;
  this937 = v935;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t941 = this937;
  unsigned long c942 = 9223372036854775807;
  __diffmax939 = c942;
  struct std__allocator_char_* r943 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t941);
  unsigned long r944 = std__allocator_traits_std__allocator_char_____max_size(r943);
  __allocmax940 = r944;
  unsigned long* r945 = unsigned_long_const__std__min_unsigned_long_(&__diffmax939, &__allocmax940);
  unsigned long t946 = *r945;
  unsigned long c947 = 1;
  unsigned long b948 = t946 - c947;
  __retval938 = b948;
  unsigned long t949 = __retval938;
  return t949;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v950) {
bb951:
  struct std____new_allocator_char_* this952;
  unsigned long __retval953;
  this952 = v950;
  struct std____new_allocator_char_* t954 = this952;
  unsigned long c955 = 9223372036854775807;
  unsigned long c956 = 1;
  unsigned long b957 = c955 / c956;
  __retval953 = b957;
  unsigned long t958 = __retval953;
  return t958;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v959, unsigned long v960, void* v961) {
bb962:
  struct std____new_allocator_char_* this963;
  unsigned long __n964;
  void* unnamed965;
  char* __retval966;
  this963 = v959;
  __n964 = v960;
  unnamed965 = v961;
  struct std____new_allocator_char_* t967 = this963;
    unsigned long t968 = __n964;
    unsigned long r969 = std____new_allocator_char____M_max_size___const(t967);
    _Bool c970 = ((t968 > r969)) ? 1 : 0;
    if (c970) {
        unsigned long t971 = __n964;
        unsigned long c972 = -1;
        unsigned long c973 = 1;
        unsigned long b974 = c972 / c973;
        _Bool c975 = ((t971 > b974)) ? 1 : 0;
        if (c975) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c976 = 1;
    unsigned long c977 = 16;
    _Bool c978 = ((c976 > c977)) ? 1 : 0;
    if (c978) {
      unsigned long __al979;
      unsigned long c980 = 1;
      __al979 = c980;
      unsigned long t981 = __n964;
      unsigned long c982 = 1;
      unsigned long b983 = t981 * c982;
      unsigned long t984 = __al979;
      void* r985 = operator_new_2(b983, t984);
      char* cast986 = (char*)r985;
      __retval966 = cast986;
      char* t987 = __retval966;
      return t987;
    }
  unsigned long t988 = __n964;
  unsigned long c989 = 1;
  unsigned long b990 = t988 * c989;
  void* r991 = operator_new(b990);
  char* cast992 = (char*)r991;
  __retval966 = cast992;
  char* t993 = __retval966;
  return t993;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v994, unsigned long v995) {
bb996:
  struct std__allocator_char_* this997;
  unsigned long __n998;
  char* __retval999;
  this997 = v994;
  __n998 = v995;
  struct std__allocator_char_* t1000 = this997;
    _Bool r1001 = std____is_constant_evaluated();
    if (r1001) {
        unsigned long t1002 = __n998;
        unsigned long c1003 = 1;
        unsigned long ovr1004;
        _Bool ovf1005 = __builtin_mul_overflow(t1002, c1003, &ovr1004);
        __n998 = ovr1004;
        if (ovf1005) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1006 = __n998;
      void* r1007 = operator_new(t1006);
      char* cast1008 = (char*)r1007;
      __retval999 = cast1008;
      char* t1009 = __retval999;
      return t1009;
    }
  struct std____new_allocator_char_* base1010 = (struct std____new_allocator_char_*)((char *)t1000 + 0);
  unsigned long t1011 = __n998;
  void* c1012 = ((void*)0);
  char* r1013 = std____new_allocator_char___allocate(base1010, t1011, c1012);
  __retval999 = r1013;
  char* t1014 = __retval999;
  return t1014;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1015, unsigned long v1016) {
bb1017:
  struct std__allocator_char_* __a1018;
  unsigned long __n1019;
  char* __retval1020;
  __a1018 = v1015;
  __n1019 = v1016;
  struct std__allocator_char_* t1021 = __a1018;
  unsigned long t1022 = __n1019;
  char* r1023 = std__allocator_char___allocate(t1021, t1022);
  __retval1020 = r1023;
  char* t1024 = __retval1020;
  return t1024;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1025, unsigned long v1026) {
bb1027:
  struct std__allocator_char_* __a1028;
  unsigned long __n1029;
  char* __retval1030;
  char* __p1031;
  __a1028 = v1025;
  __n1029 = v1026;
  struct std__allocator_char_* t1032 = __a1028;
  unsigned long t1033 = __n1029;
  char* r1034 = std__allocator_traits_std__allocator_char_____allocate(t1032, t1033);
  __p1031 = r1034;
  char* t1035 = __p1031;
  __retval1030 = t1035;
  char* t1036 = __retval1030;
  return t1036;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037) {
bb1038:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1039;
  struct std__allocator_char_* __retval1040;
  this1039 = v1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = this1039;
  struct std__allocator_char_* base1042 = (struct std__allocator_char_*)((char *)&(t1041->_M_dataplus) + 0);
  __retval1040 = base1042;
  struct std__allocator_char_* t1043 = __retval1040;
  return t1043;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1044, unsigned long* v1045, unsigned long v1046) {
bb1047:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1048;
  unsigned long* __capacity1049;
  unsigned long __old_capacity1050;
  char* __retval1051;
  this1048 = v1044;
  __capacity1049 = v1045;
  __old_capacity1050 = v1046;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1052 = this1048;
    unsigned long* t1053 = __capacity1049;
    unsigned long t1054 = *t1053;
    unsigned long r1055 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1052);
    _Bool c1056 = ((t1054 > r1055)) ? 1 : 0;
    if (c1056) {
      char* cast1057 = (char*)&(_str_7);
      std____throw_length_error(cast1057);
    }
    unsigned long* t1058 = __capacity1049;
    unsigned long t1059 = *t1058;
    unsigned long t1060 = __old_capacity1050;
    _Bool c1061 = ((t1059 > t1060)) ? 1 : 0;
    _Bool ternary1062;
    if (c1061) {
      unsigned long* t1063 = __capacity1049;
      unsigned long t1064 = *t1063;
      unsigned long c1065 = 2;
      unsigned long t1066 = __old_capacity1050;
      unsigned long b1067 = c1065 * t1066;
      _Bool c1068 = ((t1064 < b1067)) ? 1 : 0;
      ternary1062 = (_Bool)c1068;
    } else {
      _Bool c1069 = 0;
      ternary1062 = (_Bool)c1069;
    }
    if (ternary1062) {
      unsigned long c1070 = 2;
      unsigned long t1071 = __old_capacity1050;
      unsigned long b1072 = c1070 * t1071;
      unsigned long* t1073 = __capacity1049;
      *t1073 = b1072;
        unsigned long* t1074 = __capacity1049;
        unsigned long t1075 = *t1074;
        unsigned long r1076 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1052);
        _Bool c1077 = ((t1075 > r1076)) ? 1 : 0;
        if (c1077) {
          unsigned long r1078 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1052);
          unsigned long* t1079 = __capacity1049;
          *t1079 = r1078;
        }
    }
  struct std__allocator_char_* r1080 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1052);
  unsigned long* t1081 = __capacity1049;
  unsigned long t1082 = *t1081;
  unsigned long c1083 = 1;
  unsigned long b1084 = t1082 + c1083;
  char* r1085 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1080, b1084);
  __retval1051 = r1085;
  char* t1086 = __retval1051;
  return t1086;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1087, unsigned long v1088) {
bb1089:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1090;
  unsigned long __capacity1091;
  this1090 = v1087;
  __capacity1091 = v1088;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1092 = this1090;
  unsigned long t1093 = __capacity1091;
  t1092->field2._M_allocated_capacity = t1093;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1094:
  _Bool __retval1095;
    _Bool c1096 = 0;
    __retval1095 = c1096;
    _Bool t1097 = __retval1095;
    return t1097;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1098) {
bb1099:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1100;
  this1100 = v1098;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1101 = this1100;
    _Bool r1102 = std__is_constant_evaluated();
    if (r1102) {
        unsigned long __i1103;
        unsigned long c1104 = 0;
        __i1103 = c1104;
        while (1) {
          unsigned long t1106 = __i1103;
          unsigned long c1107 = 15;
          _Bool c1108 = ((t1106 <= c1107)) ? 1 : 0;
          if (!c1108) break;
          char c1109 = 0;
          unsigned long t1110 = __i1103;
          t1101->field2._M_local_buf[t1110] = c1109;
        for_step1105: ;
          unsigned long t1111 = __i1103;
          unsigned long u1112 = t1111 + 1;
          __i1103 = u1112;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1113, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1114) {
bb1115:
  struct _Guard* this1116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1117;
  this1116 = v1113;
  __s1117 = v1114;
  struct _Guard* t1118 = this1116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1119 = __s1117;
  t1118->_M_guarded = t1119;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1120, char* v1121) {
bb1122:
  char* __location1123;
  char* __args1124;
  char* __retval1125;
  void* __loc1126;
  __location1123 = v1120;
  __args1124 = v1121;
  char* t1127 = __location1123;
  void* cast1128 = (void*)t1127;
  __loc1126 = cast1128;
    void* t1129 = __loc1126;
    char* cast1130 = (char*)t1129;
    char* t1131 = __args1124;
    char t1132 = *t1131;
    *cast1130 = t1132;
    __retval1125 = cast1130;
    char* t1133 = __retval1125;
    return t1133;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1134, char* v1135) {
bb1136:
  char* __c11137;
  char* __c21138;
  __c11137 = v1134;
  __c21138 = v1135;
    _Bool r1139 = std____is_constant_evaluated();
    if (r1139) {
      char* t1140 = __c11137;
      char* t1141 = __c21138;
      char* r1142 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1140, t1141);
    } else {
      char* t1143 = __c21138;
      char t1144 = *t1143;
      char* t1145 = __c11137;
      *t1145 = t1144;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1146, char* v1147, unsigned long v1148) {
bb1149:
  char* __s11150;
  char* __s21151;
  unsigned long __n1152;
  char* __retval1153;
  __s11150 = v1146;
  __s21151 = v1147;
  __n1152 = v1148;
    unsigned long t1154 = __n1152;
    unsigned long c1155 = 0;
    _Bool c1156 = ((t1154 == c1155)) ? 1 : 0;
    if (c1156) {
      char* t1157 = __s11150;
      __retval1153 = t1157;
      char* t1158 = __retval1153;
      return t1158;
    }
    _Bool r1159 = std____is_constant_evaluated();
    if (r1159) {
        unsigned long __i1160;
        unsigned long c1161 = 0;
        __i1160 = c1161;
        while (1) {
          unsigned long t1163 = __i1160;
          unsigned long t1164 = __n1152;
          _Bool c1165 = ((t1163 < t1164)) ? 1 : 0;
          if (!c1165) break;
          char* t1166 = __s11150;
          unsigned long t1167 = __i1160;
          char* ptr1168 = &(t1166)[t1167];
          unsigned long t1169 = __i1160;
          char* t1170 = __s21151;
          char* ptr1171 = &(t1170)[t1169];
          char* r1172 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1168, ptr1171);
        for_step1162: ;
          unsigned long t1173 = __i1160;
          unsigned long u1174 = t1173 + 1;
          __i1160 = u1174;
        }
      char* t1175 = __s11150;
      __retval1153 = t1175;
      char* t1176 = __retval1153;
      return t1176;
    }
  char* t1177 = __s11150;
  void* cast1178 = (void*)t1177;
  char* t1179 = __s21151;
  void* cast1180 = (void*)t1179;
  unsigned long t1181 = __n1152;
  unsigned long c1182 = 1;
  unsigned long b1183 = t1181 * c1182;
  void* r1184 = memcpy(cast1178, cast1180, b1183);
  char* t1185 = __s11150;
  __retval1153 = t1185;
  char* t1186 = __retval1153;
  return t1186;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1187, char* v1188, unsigned long v1189) {
bb1190:
  char* __s11191;
  char* __s21192;
  unsigned long __n1193;
  char* __retval1194;
  __s11191 = v1187;
  __s21192 = v1188;
  __n1193 = v1189;
    unsigned long t1195 = __n1193;
    unsigned long c1196 = 0;
    _Bool c1197 = ((t1195 == c1196)) ? 1 : 0;
    if (c1197) {
      char* t1198 = __s11191;
      __retval1194 = t1198;
      char* t1199 = __retval1194;
      return t1199;
    }
    _Bool r1200 = std____is_constant_evaluated();
    if (r1200) {
      char* t1201 = __s11191;
      char* t1202 = __s21192;
      unsigned long t1203 = __n1193;
      char* r1204 = __gnu_cxx__char_traits_char___copy(t1201, t1202, t1203);
      __retval1194 = r1204;
      char* t1205 = __retval1194;
      return t1205;
    }
  char* t1206 = __s11191;
  void* cast1207 = (void*)t1206;
  char* t1208 = __s21192;
  void* cast1209 = (void*)t1208;
  unsigned long t1210 = __n1193;
  void* r1211 = memcpy(cast1207, cast1209, t1210);
  char* cast1212 = (char*)r1211;
  __retval1194 = cast1212;
  char* t1213 = __retval1194;
  return t1213;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1214, char* v1215, unsigned long v1216) {
bb1217:
  char* __d1218;
  char* __s1219;
  unsigned long __n1220;
  __d1218 = v1214;
  __s1219 = v1215;
  __n1220 = v1216;
    unsigned long t1221 = __n1220;
    unsigned long c1222 = 1;
    _Bool c1223 = ((t1221 == c1222)) ? 1 : 0;
    if (c1223) {
      char* t1224 = __d1218;
      char* t1225 = __s1219;
      std__char_traits_char___assign(t1224, t1225);
    } else {
      char* t1226 = __d1218;
      char* t1227 = __s1219;
      unsigned long t1228 = __n1220;
      char* r1229 = std__char_traits_char___copy(t1226, t1227, t1228);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1230) {
bb1231:
  char* __it1232;
  char* __retval1233;
  __it1232 = v1230;
  char* t1234 = __it1232;
  __retval1233 = t1234;
  char* t1235 = __retval1233;
  return t1235;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1236, char* v1237, char* v1238) {
bb1239:
  char* __p1240;
  char* __k11241;
  char* __k21242;
  __p1240 = v1236;
  __k11241 = v1237;
  __k21242 = v1238;
    char* t1243 = __p1240;
    char* t1244 = __k11241;
    char* r1245 = char_const__std____niter_base_char_const__(t1244);
    char* t1246 = __k21242;
    char* t1247 = __k11241;
    long diff1248 = t1246 - t1247;
    unsigned long cast1249 = (unsigned long)diff1248;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1243, r1245, cast1249);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1250) {
bb1251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1252;
  char* __retval1253;
  this1252 = v1250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1254 = this1252;
  char* t1255 = t1254->_M_dataplus._M_p;
  __retval1253 = t1255;
  char* t1256 = __retval1253;
  return t1256;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1257, unsigned long v1258) {
bb1259:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1260;
  unsigned long __length1261;
  this1260 = v1257;
  __length1261 = v1258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1262 = this1260;
  unsigned long t1263 = __length1261;
  t1262->_M_string_length = t1263;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1264, unsigned long v1265) {
bb1266:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1267;
  unsigned long __n1268;
  char ref_tmp01269;
  this1267 = v1264;
  __n1268 = v1265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1270 = this1267;
  unsigned long t1271 = __n1268;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1270, t1271);
  unsigned long t1272 = __n1268;
  char* r1273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1270);
  char* ptr1274 = &(r1273)[t1272];
  char c1275 = 0;
  ref_tmp01269 = c1275;
  std__char_traits_char___assign(ptr1274, &ref_tmp01269);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1276) {
bb1277:
  struct _Guard* this1278;
  this1278 = v1276;
  struct _Guard* t1279 = this1278;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1280 = t1279->_M_guarded;
    _Bool cast1281 = (_Bool)t1280;
    if (cast1281) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1282 = t1279->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1282);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1283, char* v1284, char* v1285, struct std__forward_iterator_tag v1286) {
bb1287:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1288;
  char* __beg1289;
  char* __end1290;
  struct std__forward_iterator_tag unnamed1291;
  unsigned long __dnew1292;
  struct _Guard __guard1293;
  this1288 = v1283;
  __beg1289 = v1284;
  __end1290 = v1285;
  unnamed1291 = v1286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1294 = this1288;
  char* t1295 = __beg1289;
  char* t1296 = __end1290;
  long r1297 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1295, t1296);
  unsigned long cast1298 = (unsigned long)r1297;
  __dnew1292 = cast1298;
    unsigned long t1299 = __dnew1292;
    unsigned long c1300 = 15;
    _Bool c1301 = ((t1299 > c1300)) ? 1 : 0;
    if (c1301) {
      unsigned long c1302 = 0;
      char* r1303 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1294, &__dnew1292, c1302);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1294, r1303);
      unsigned long t1304 = __dnew1292;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1294, t1304);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1294);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1293, t1294);
    char* r1305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1294);
    char* t1306 = __beg1289;
    char* t1307 = __end1290;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1305, t1306, t1307);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1308 = ((void*)0);
    __guard1293._M_guarded = c1308;
    unsigned long t1309 = __dnew1292;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1294, t1309);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1293);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1310) {
bb1311:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1312;
  this1312 = v1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1313 = this1312;
  {
    struct std__allocator_char_* base1314 = (struct std__allocator_char_*)((char *)t1313 + 0);
    std__allocator_char____allocator(base1314);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1315, struct std____new_allocator_char_* v1316) {
bb1317:
  struct std____new_allocator_char_* this1318;
  struct std____new_allocator_char_* unnamed1319;
  this1318 = v1315;
  unnamed1319 = v1316;
  struct std____new_allocator_char_* t1320 = this1318;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1321, struct std__allocator_char_* v1322) {
bb1323:
  struct std__allocator_char_* this1324;
  struct std__allocator_char_* __a1325;
  this1324 = v1321;
  __a1325 = v1322;
  struct std__allocator_char_* t1326 = this1324;
  struct std____new_allocator_char_* base1327 = (struct std____new_allocator_char_*)((char *)t1326 + 0);
  struct std__allocator_char_* t1328 = __a1325;
  struct std____new_allocator_char_* base1329 = (struct std____new_allocator_char_*)((char *)t1328 + 0);
  std____new_allocator_char_____new_allocator(base1327, base1329);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1330) {
bb1331:
  char* __r1332;
  char* __retval1333;
  __r1332 = v1330;
  char* t1334 = __r1332;
  __retval1333 = t1334;
  char* t1335 = __retval1333;
  return t1335;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1336) {
bb1337:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1338;
  char* __retval1339;
  this1338 = v1336;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1340 = this1338;
  char* cast1341 = (char*)&(t1340->field2._M_local_buf);
  char* r1342 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1341);
  __retval1339 = r1342;
  char* t1343 = __retval1339;
  return t1343;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1344) {
bb1345:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1346;
  _Bool __retval1347;
  this1346 = v1344;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1348 = this1346;
    char* r1349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1348);
    char* r1350 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1348);
    _Bool c1351 = ((r1349 == r1350)) ? 1 : 0;
    if (c1351) {
        unsigned long t1352 = t1348->_M_string_length;
        unsigned long c1353 = 15;
        _Bool c1354 = ((t1352 > c1353)) ? 1 : 0;
        if (c1354) {
          __builtin_unreachable();
        }
      _Bool c1355 = 1;
      __retval1347 = c1355;
      _Bool t1356 = __retval1347;
      return t1356;
    }
  _Bool c1357 = 0;
  __retval1347 = c1357;
  _Bool t1358 = __retval1347;
  return t1358;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1359, char* v1360, unsigned long v1361) {
bb1362:
  struct std____new_allocator_char_* this1363;
  char* __p1364;
  unsigned long __n1365;
  this1363 = v1359;
  __p1364 = v1360;
  __n1365 = v1361;
  struct std____new_allocator_char_* t1366 = this1363;
    unsigned long c1367 = 1;
    unsigned long c1368 = 16;
    _Bool c1369 = ((c1367 > c1368)) ? 1 : 0;
    if (c1369) {
      char* t1370 = __p1364;
      void* cast1371 = (void*)t1370;
      unsigned long t1372 = __n1365;
      unsigned long c1373 = 1;
      unsigned long b1374 = t1372 * c1373;
      unsigned long c1375 = 1;
      operator_delete_3(cast1371, b1374, c1375);
      return;
    }
  char* t1376 = __p1364;
  void* cast1377 = (void*)t1376;
  unsigned long t1378 = __n1365;
  unsigned long c1379 = 1;
  unsigned long b1380 = t1378 * c1379;
  operator_delete_2(cast1377, b1380);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1381, char* v1382, unsigned long v1383) {
bb1384:
  struct std__allocator_char_* this1385;
  char* __p1386;
  unsigned long __n1387;
  this1385 = v1381;
  __p1386 = v1382;
  __n1387 = v1383;
  struct std__allocator_char_* t1388 = this1385;
    _Bool r1389 = std____is_constant_evaluated();
    if (r1389) {
      char* t1390 = __p1386;
      void* cast1391 = (void*)t1390;
      operator_delete(cast1391);
      return;
    }
  struct std____new_allocator_char_* base1392 = (struct std____new_allocator_char_*)((char *)t1388 + 0);
  char* t1393 = __p1386;
  unsigned long t1394 = __n1387;
  std____new_allocator_char___deallocate(base1392, t1393, t1394);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1395, char* v1396, unsigned long v1397) {
bb1398:
  struct std__allocator_char_* __a1399;
  char* __p1400;
  unsigned long __n1401;
  __a1399 = v1395;
  __p1400 = v1396;
  __n1401 = v1397;
  struct std__allocator_char_* t1402 = __a1399;
  char* t1403 = __p1400;
  unsigned long t1404 = __n1401;
  std__allocator_char___deallocate(t1402, t1403, t1404);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1405, unsigned long v1406) {
bb1407:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1408;
  unsigned long __size1409;
  this1408 = v1405;
  __size1409 = v1406;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1410 = this1408;
  struct std__allocator_char_* r1411 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1410);
  char* r1412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1410);
  unsigned long t1413 = __size1409;
  unsigned long c1414 = 1;
  unsigned long b1415 = t1413 + c1414;
  std__allocator_traits_std__allocator_char_____deallocate(r1411, r1412, b1415);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1416) {
bb1417:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1418;
  this1418 = v1416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1419 = this1418;
    _Bool r1420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1419);
    _Bool u1421 = !r1420;
    if (u1421) {
      unsigned long t1422 = t1419->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1419, t1422);
    }
  return;
}

