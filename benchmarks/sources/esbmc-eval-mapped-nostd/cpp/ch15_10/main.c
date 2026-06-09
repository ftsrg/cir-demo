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
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "Testing iterators";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[11] = "string1 = ";
char _str_2[41] = "\n(Using iterator iterator1) string1 is: ";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
_Bool _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
char* __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
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
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);

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
        char* cast20 = (char*)&(_str_3);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32, char** v33) {
bb34:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this35;
  char** __i36;
  this35 = v32;
  __i36 = v33;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t37 = this35;
  char** t38 = __i36;
  char* t39 = *t38;
  t37->_M_current = t39;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval43;
  char* ref_tmp044;
  this42 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = this42;
  char* r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t45);
  ref_tmp044 = r46;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval43, &ref_tmp044);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t47 = __retval43;
  return t47;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v48, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v49) {
bb50:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this51;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i52;
  this51 = v48;
  __i52 = v49;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t53 = this51;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t54 = __i52;
  char** r55 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t54);
  char* t56 = *r55;
  t53->_M_current = t56;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v57, int v58) {
bb59:
  int __a60;
  int __b61;
  int __retval62;
  __a60 = v57;
  __b61 = v58;
  int t63 = __a60;
  int t64 = __b61;
  int b65 = t63 | t64;
  __retval62 = b65;
  int t66 = __retval62;
  return t66;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v67) {
bb68:
  struct std__basic_ios_char__std__char_traits_char__* this69;
  int __retval70;
  this69 = v67;
  struct std__basic_ios_char__std__char_traits_char__* t71 = this69;
  struct std__ios_base* base72 = (struct std__ios_base*)((char *)t71 + 0);
  int t73 = base72->_M_streambuf_state;
  __retval70 = t73;
  int t74 = __retval70;
  return t74;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v75, int v76) {
bb77:
  struct std__basic_ios_char__std__char_traits_char__* this78;
  int __state79;
  this78 = v75;
  __state79 = v76;
  struct std__basic_ios_char__std__char_traits_char__* t80 = this78;
  int r81 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t80);
  int t82 = __state79;
  int r83 = std__operator_(r81, t82);
  std__basic_ios_char__std__char_traits_char_____clear(t80, r83);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v84, char* v85) {
bb86:
  struct std__basic_ostream_char__std__char_traits_char__* __out87;
  char* __s88;
  struct std__basic_ostream_char__std__char_traits_char__* __retval89;
  __out87 = v84;
  __s88 = v85;
    char* t90 = __s88;
    _Bool cast91 = (_Bool)t90;
    _Bool u92 = !cast91;
    if (u92) {
      struct std__basic_ostream_char__std__char_traits_char__* t93 = __out87;
      void** v94 = (void**)t93;
      void* v95 = *((void**)v94);
      unsigned char* cast96 = (unsigned char*)v95;
      long c97 = -24;
      unsigned char* ptr98 = &(cast96)[c97];
      long* cast99 = (long*)ptr98;
      long t100 = *cast99;
      unsigned char* cast101 = (unsigned char*)t93;
      unsigned char* ptr102 = &(cast101)[t100];
      struct std__basic_ostream_char__std__char_traits_char__* cast103 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr102;
      struct std__basic_ios_char__std__char_traits_char__* cast104 = (struct std__basic_ios_char__std__char_traits_char__*)cast103;
      int t105 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast104, t105);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t106 = __out87;
      char* t107 = __s88;
      char* t108 = __s88;
      unsigned long r109 = std__char_traits_char___length(t108);
      long cast110 = (long)r109;
      struct std__basic_ostream_char__std__char_traits_char__* r111 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t106, t107, cast110);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __out87;
  __retval89 = t112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval89;
  return t113;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  char* __retval117;
  this116 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this116;
  char* r119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t118);
  __retval117 = r119;
  char* t120 = __retval117;
  return t120;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v121, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v122) {
bb123:
  struct std__basic_ostream_char__std__char_traits_char__* __os124;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str125;
  struct std__basic_ostream_char__std__char_traits_char__* __retval126;
  __os124 = v121;
  __str125 = v122;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = __os124;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t128 = __str125;
  char* r129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t128);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t130 = __str125;
  unsigned long r131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t130);
  long cast132 = (long)r131;
  struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t127, r129, cast132);
  __retval126 = r133;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval126;
  return t134;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v135) {
bb136:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this137;
  char** __retval138;
  this137 = v135;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t139 = this137;
  __retval138 = &t139->_M_current;
  char** t140 = __retval138;
  return t140;
}

// function: _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v141, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v142) {
bb143:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs144;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs145;
  _Bool __retval146;
  __lhs144 = v141;
  __rhs145 = v142;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t147 = __lhs144;
  char** r148 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t147);
  char* t149 = *r148;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t150 = __rhs145;
  char** r151 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t150);
  char* t152 = *r151;
  _Bool c153 = ((t149 == t152)) ? 1 : 0;
  __retval146 = c153;
  _Bool t154 = __retval146;
  return t154;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v155) {
bb156:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this157;
  unsigned long __retval158;
  unsigned long __sz159;
  this157 = v155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t160 = this157;
  unsigned long t161 = t160->_M_string_length;
  __sz159 = t161;
    unsigned long t162 = __sz159;
    unsigned long r163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t160);
    _Bool c164 = ((t162 > r163)) ? 1 : 0;
    if (c164) {
      __builtin_unreachable();
    }
  unsigned long t165 = __sz159;
  __retval158 = t165;
  unsigned long t166 = __retval158;
  return t166;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v167) {
bb168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this169;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval170;
  char* ref_tmp0171;
  this169 = v167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = this169;
  char* r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t172);
  unsigned long r174 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t172);
  char* ptr175 = &(r173)[r174];
  ref_tmp0171 = ptr175;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval170, &ref_tmp0171);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t176 = __retval170;
  return t176;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v177) {
bb178:
  struct std__ios_base* this179;
  long __retval180;
  this179 = v177;
  struct std__ios_base* t181 = this179;
  long t182 = t181->_M_width;
  __retval180 = t182;
  long t183 = __retval180;
  return t183;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v184, char v185) {
bb186:
  struct std__basic_ostream_char__std__char_traits_char__* __out187;
  char __c188;
  struct std__basic_ostream_char__std__char_traits_char__* __retval189;
  __out187 = v184;
  __c188 = v185;
    struct std__basic_ostream_char__std__char_traits_char__* t190 = __out187;
    void** v191 = (void**)t190;
    void* v192 = *((void**)v191);
    unsigned char* cast193 = (unsigned char*)v192;
    long c194 = -24;
    unsigned char* ptr195 = &(cast193)[c194];
    long* cast196 = (long*)ptr195;
    long t197 = *cast196;
    unsigned char* cast198 = (unsigned char*)t190;
    unsigned char* ptr199 = &(cast198)[t197];
    struct std__basic_ostream_char__std__char_traits_char__* cast200 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr199;
    struct std__ios_base* cast201 = (struct std__ios_base*)cast200;
    long r202 = std__ios_base__width___const(cast201);
    long c203 = 0;
    _Bool c204 = ((r202 != c203)) ? 1 : 0;
    if (c204) {
      struct std__basic_ostream_char__std__char_traits_char__* t205 = __out187;
      long c206 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r207 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t205, &__c188, c206);
      __retval189 = r207;
      struct std__basic_ostream_char__std__char_traits_char__* t208 = __retval189;
      return t208;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __out187;
  char t210 = __c188;
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__ostream__put(t209, t210);
  struct std__basic_ostream_char__std__char_traits_char__* t212 = __out187;
  __retval189 = t212;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = __retval189;
  return t213;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv
char* __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v214) {
bb215:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this216;
  char* __retval217;
  this216 = v214;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t218 = this216;
  char* t219 = t218->_M_current;
  __retval217 = t219;
  char* t220 = __retval217;
  return t220;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v221) {
bb222:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this223;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval224;
  this223 = v221;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t225 = this223;
  char* t226 = t225->_M_current;
  int c227 = 1;
  char* ptr228 = &(t226)[c227];
  t225->_M_current = ptr228;
  __retval224 = t225;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t229 = __retval224;
  return t229;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v230, void* v231) {
bb232:
  struct std__basic_ostream_char__std__char_traits_char__* this233;
  void* __pf234;
  struct std__basic_ostream_char__std__char_traits_char__* __retval235;
  this233 = v230;
  __pf234 = v231;
  struct std__basic_ostream_char__std__char_traits_char__* t236 = this233;
  void* t237 = __pf234;
  struct std__basic_ostream_char__std__char_traits_char__* r238 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t237)(t236);
  __retval235 = r238;
  struct std__basic_ostream_char__std__char_traits_char__* t239 = __retval235;
  return t239;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v240) {
bb241:
  struct std__basic_ostream_char__std__char_traits_char__* __os242;
  struct std__basic_ostream_char__std__char_traits_char__* __retval243;
  __os242 = v240;
  struct std__basic_ostream_char__std__char_traits_char__* t244 = __os242;
  struct std__basic_ostream_char__std__char_traits_char__* r245 = std__ostream__flush(t244);
  __retval243 = r245;
  struct std__basic_ostream_char__std__char_traits_char__* t246 = __retval243;
  return t246;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v247) {
bb248:
  struct std__ctype_char_* __f249;
  struct std__ctype_char_* __retval250;
  __f249 = v247;
    struct std__ctype_char_* t251 = __f249;
    _Bool cast252 = (_Bool)t251;
    _Bool u253 = !cast252;
    if (u253) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t254 = __f249;
  __retval250 = t254;
  struct std__ctype_char_* t255 = __retval250;
  return t255;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v256, char v257) {
bb258:
  struct std__ctype_char_* this259;
  char __c260;
  char __retval261;
  this259 = v256;
  __c260 = v257;
  struct std__ctype_char_* t262 = this259;
    char t263 = t262->_M_widen_ok;
    _Bool cast264 = (_Bool)t263;
    if (cast264) {
      char t265 = __c260;
      unsigned char cast266 = (unsigned char)t265;
      unsigned long cast267 = (unsigned long)cast266;
      char t268 = t262->_M_widen[cast267];
      __retval261 = t268;
      char t269 = __retval261;
      return t269;
    }
  std__ctype_char____M_widen_init___const(t262);
  char t270 = __c260;
  void** v271 = (void**)t262;
  void* v272 = *((void**)v271);
  char vcall275 = (char)__VERIFIER_virtual_call_char_char(t262, 6, t270);
  __retval261 = vcall275;
  char t276 = __retval261;
  return t276;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v277, char v278) {
bb279:
  struct std__basic_ios_char__std__char_traits_char__* this280;
  char __c281;
  char __retval282;
  this280 = v277;
  __c281 = v278;
  struct std__basic_ios_char__std__char_traits_char__* t283 = this280;
  struct std__ctype_char_* t284 = t283->_M_ctype;
  struct std__ctype_char_* r285 = std__ctype_char__const__std____check_facet_std__ctype_char___(t284);
  char t286 = __c281;
  char r287 = std__ctype_char___widen_char__const(r285, t286);
  __retval282 = r287;
  char t288 = __retval282;
  return t288;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v289) {
bb290:
  struct std__basic_ostream_char__std__char_traits_char__* __os291;
  struct std__basic_ostream_char__std__char_traits_char__* __retval292;
  __os291 = v289;
  struct std__basic_ostream_char__std__char_traits_char__* t293 = __os291;
  struct std__basic_ostream_char__std__char_traits_char__* t294 = __os291;
  void** v295 = (void**)t294;
  void* v296 = *((void**)v295);
  unsigned char* cast297 = (unsigned char*)v296;
  long c298 = -24;
  unsigned char* ptr299 = &(cast297)[c298];
  long* cast300 = (long*)ptr299;
  long t301 = *cast300;
  unsigned char* cast302 = (unsigned char*)t294;
  unsigned char* ptr303 = &(cast302)[t301];
  struct std__basic_ostream_char__std__char_traits_char__* cast304 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr303;
  struct std__basic_ios_char__std__char_traits_char__* cast305 = (struct std__basic_ios_char__std__char_traits_char__*)cast304;
  char c306 = 10;
  char r307 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast305, c306);
  struct std__basic_ostream_char__std__char_traits_char__* r308 = std__ostream__put(t293, r307);
  struct std__basic_ostream_char__std__char_traits_char__* r309 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r308);
  __retval292 = r309;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = __retval292;
  return t310;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v311) {
bb312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this313;
  this313 = v311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t314 = this313;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t314);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t314->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb315:
  int __retval316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1317;
  struct std__allocator_char_ ref_tmp0318;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ iterator1319;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1320;
  int c321 = 0;
  __retval316 = c321;
  char* cast322 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0318);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1317, cast322, &ref_tmp0318);
  {
    std__allocator_char____allocator(&ref_tmp0318);
  }
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r323 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&string1317);
    ref_tmp1320 = r323;
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&iterator1319, &ref_tmp1320);
    char* cast324 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r325 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast324);
    struct std__basic_ostream_char__std__char_traits_char__* r326 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r325, &string1317);
    char* cast327 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r328 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r326, cast327);
      struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp2329;
      while (1) {
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r330 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&string1317);
        ref_tmp2329 = r330;
        _Bool r331 = _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&iterator1319, &ref_tmp2329);
        _Bool u332 = !r331;
        if (!u332) break;
          char* r333 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator____const(&iterator1319);
          char t334 = *r333;
          struct std__basic_ostream_char__std__char_traits_char__* r335 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t334);
          struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r336 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(&iterator1319);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r337 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c338 = 0;
    __retval316 = c338;
    int t339 = __retval316;
    int ret_val340 = t339;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1317);
    }
    return ret_val340;
  int t341 = __retval316;
  return t341;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v342) {
bb343:
  struct std____new_allocator_char_* this344;
  this344 = v342;
  struct std____new_allocator_char_* t345 = this344;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v346) {
bb347:
  char* __r348;
  char* __retval349;
  __r348 = v346;
  char* t350 = __r348;
  __retval349 = t350;
  char* t351 = __retval349;
  return t351;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v352) {
bb353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this354;
  char* __retval355;
  this354 = v352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t356 = this354;
  char* cast357 = (char*)&(t356->field2._M_local_buf);
  char* r358 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast357);
  __retval355 = r358;
  char* t359 = __retval355;
  return t359;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v360, char* v361, struct std__allocator_char_* v362) {
bb363:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this364;
  char* __dat365;
  struct std__allocator_char_* __a366;
  this364 = v360;
  __dat365 = v361;
  __a366 = v362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t367 = this364;
  struct std__allocator_char_* base368 = (struct std__allocator_char_*)((char *)t367 + 0);
  struct std__allocator_char_* t369 = __a366;
  std__allocator_char___allocator(base368, t369);
    char* t370 = __dat365;
    t367->_M_p = t370;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb371:
  _Bool __retval372;
    _Bool c373 = 0;
    __retval372 = c373;
    _Bool t374 = __retval372;
    return t374;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v375, char* v376) {
bb377:
  char* __c1378;
  char* __c2379;
  _Bool __retval380;
  __c1378 = v375;
  __c2379 = v376;
  char* t381 = __c1378;
  char t382 = *t381;
  int cast383 = (int)t382;
  char* t384 = __c2379;
  char t385 = *t384;
  int cast386 = (int)t385;
  _Bool c387 = ((cast383 == cast386)) ? 1 : 0;
  __retval380 = c387;
  _Bool t388 = __retval380;
  return t388;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v389) {
bb390:
  char* __p391;
  unsigned long __retval392;
  unsigned long __i393;
  __p391 = v389;
  unsigned long c394 = 0;
  __i393 = c394;
    char ref_tmp0395;
    while (1) {
      unsigned long t396 = __i393;
      char* t397 = __p391;
      char* ptr398 = &(t397)[t396];
      char c399 = 0;
      ref_tmp0395 = c399;
      _Bool r400 = __gnu_cxx__char_traits_char___eq(ptr398, &ref_tmp0395);
      _Bool u401 = !r400;
      if (!u401) break;
      unsigned long t402 = __i393;
      unsigned long u403 = t402 + 1;
      __i393 = u403;
    }
  unsigned long t404 = __i393;
  __retval392 = t404;
  unsigned long t405 = __retval392;
  return t405;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v406) {
bb407:
  char* __s408;
  unsigned long __retval409;
  __s408 = v406;
    _Bool r410 = std____is_constant_evaluated();
    if (r410) {
      char* t411 = __s408;
      unsigned long r412 = __gnu_cxx__char_traits_char___length(t411);
      __retval409 = r412;
      unsigned long t413 = __retval409;
      return t413;
    }
  char* t414 = __s408;
  unsigned long r415 = strlen(t414);
  __retval409 = r415;
  unsigned long t416 = __retval409;
  return t416;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v417, char* v418, struct std__random_access_iterator_tag v419) {
bb420:
  char* __first421;
  char* __last422;
  struct std__random_access_iterator_tag unnamed423;
  long __retval424;
  __first421 = v417;
  __last422 = v418;
  unnamed423 = v419;
  char* t425 = __last422;
  char* t426 = __first421;
  long diff427 = t425 - t426;
  __retval424 = diff427;
  long t428 = __retval424;
  return t428;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v429) {
bb430:
  char** unnamed431;
  struct std__random_access_iterator_tag __retval432;
  unnamed431 = v429;
  struct std__random_access_iterator_tag t433 = __retval432;
  return t433;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v434, char* v435) {
bb436:
  char* __first437;
  char* __last438;
  long __retval439;
  struct std__random_access_iterator_tag agg_tmp0440;
  __first437 = v434;
  __last438 = v435;
  char* t441 = __first437;
  char* t442 = __last438;
  struct std__random_access_iterator_tag r443 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first437);
  agg_tmp0440 = r443;
  struct std__random_access_iterator_tag t444 = agg_tmp0440;
  long r445 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t441, t442, t444);
  __retval439 = r445;
  long t446 = __retval439;
  return t446;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v447, char* v448) {
bb449:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this450;
  char* __p451;
  this450 = v447;
  __p451 = v448;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t452 = this450;
  char* t453 = __p451;
  t452->_M_dataplus._M_p = t453;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v454) {
bb455:
  struct std__allocator_char_* __a456;
  unsigned long __retval457;
  __a456 = v454;
  unsigned long c458 = -1;
  unsigned long c459 = 1;
  unsigned long b460 = c458 / c459;
  __retval457 = b460;
  unsigned long t461 = __retval457;
  return t461;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v462) {
bb463:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this464;
  struct std__allocator_char_* __retval465;
  this464 = v462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t466 = this464;
  struct std__allocator_char_* base467 = (struct std__allocator_char_*)((char *)&(t466->_M_dataplus) + 0);
  __retval465 = base467;
  struct std__allocator_char_* t468 = __retval465;
  return t468;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v469, unsigned long* v470) {
bb471:
  unsigned long* __a472;
  unsigned long* __b473;
  unsigned long* __retval474;
  __a472 = v469;
  __b473 = v470;
    unsigned long* t475 = __b473;
    unsigned long t476 = *t475;
    unsigned long* t477 = __a472;
    unsigned long t478 = *t477;
    _Bool c479 = ((t476 < t478)) ? 1 : 0;
    if (c479) {
      unsigned long* t480 = __b473;
      __retval474 = t480;
      unsigned long* t481 = __retval474;
      return t481;
    }
  unsigned long* t482 = __a472;
  __retval474 = t482;
  unsigned long* t483 = __retval474;
  return t483;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v484) {
bb485:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this486;
  unsigned long __retval487;
  unsigned long __diffmax488;
  unsigned long __allocmax489;
  this486 = v484;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t490 = this486;
  unsigned long c491 = 9223372036854775807;
  __diffmax488 = c491;
  struct std__allocator_char_* r492 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t490);
  unsigned long r493 = std__allocator_traits_std__allocator_char_____max_size(r492);
  __allocmax489 = r493;
  unsigned long* r494 = unsigned_long_const__std__min_unsigned_long_(&__diffmax488, &__allocmax489);
  unsigned long t495 = *r494;
  unsigned long c496 = 1;
  unsigned long b497 = t495 - c496;
  __retval487 = b497;
  unsigned long t498 = __retval487;
  return t498;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v499) {
bb500:
  struct std____new_allocator_char_* this501;
  unsigned long __retval502;
  this501 = v499;
  struct std____new_allocator_char_* t503 = this501;
  unsigned long c504 = 9223372036854775807;
  unsigned long c505 = 1;
  unsigned long b506 = c504 / c505;
  __retval502 = b506;
  unsigned long t507 = __retval502;
  return t507;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v508, unsigned long v509, void* v510) {
bb511:
  struct std____new_allocator_char_* this512;
  unsigned long __n513;
  void* unnamed514;
  char* __retval515;
  this512 = v508;
  __n513 = v509;
  unnamed514 = v510;
  struct std____new_allocator_char_* t516 = this512;
    unsigned long t517 = __n513;
    unsigned long r518 = std____new_allocator_char____M_max_size___const(t516);
    _Bool c519 = ((t517 > r518)) ? 1 : 0;
    if (c519) {
        unsigned long t520 = __n513;
        unsigned long c521 = -1;
        unsigned long c522 = 1;
        unsigned long b523 = c521 / c522;
        _Bool c524 = ((t520 > b523)) ? 1 : 0;
        if (c524) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c525 = 1;
    unsigned long c526 = 16;
    _Bool c527 = ((c525 > c526)) ? 1 : 0;
    if (c527) {
      unsigned long __al528;
      unsigned long c529 = 1;
      __al528 = c529;
      unsigned long t530 = __n513;
      unsigned long c531 = 1;
      unsigned long b532 = t530 * c531;
      unsigned long t533 = __al528;
      void* r534 = operator_new_2(b532, t533);
      char* cast535 = (char*)r534;
      __retval515 = cast535;
      char* t536 = __retval515;
      return t536;
    }
  unsigned long t537 = __n513;
  unsigned long c538 = 1;
  unsigned long b539 = t537 * c538;
  void* r540 = operator_new(b539);
  char* cast541 = (char*)r540;
  __retval515 = cast541;
  char* t542 = __retval515;
  return t542;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v543, unsigned long v544) {
bb545:
  struct std__allocator_char_* this546;
  unsigned long __n547;
  char* __retval548;
  this546 = v543;
  __n547 = v544;
  struct std__allocator_char_* t549 = this546;
    _Bool r550 = std____is_constant_evaluated();
    if (r550) {
        unsigned long t551 = __n547;
        unsigned long c552 = 1;
        unsigned long ovr553;
        _Bool ovf554 = __builtin_mul_overflow(t551, c552, &ovr553);
        __n547 = ovr553;
        if (ovf554) {
          std____throw_bad_array_new_length();
        }
      unsigned long t555 = __n547;
      void* r556 = operator_new(t555);
      char* cast557 = (char*)r556;
      __retval548 = cast557;
      char* t558 = __retval548;
      return t558;
    }
  struct std____new_allocator_char_* base559 = (struct std____new_allocator_char_*)((char *)t549 + 0);
  unsigned long t560 = __n547;
  void* c561 = ((void*)0);
  char* r562 = std____new_allocator_char___allocate(base559, t560, c561);
  __retval548 = r562;
  char* t563 = __retval548;
  return t563;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v564, unsigned long v565) {
bb566:
  struct std__allocator_char_* __a567;
  unsigned long __n568;
  char* __retval569;
  __a567 = v564;
  __n568 = v565;
  struct std__allocator_char_* t570 = __a567;
  unsigned long t571 = __n568;
  char* r572 = std__allocator_char___allocate(t570, t571);
  __retval569 = r572;
  char* t573 = __retval569;
  return t573;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v574, unsigned long v575) {
bb576:
  struct std__allocator_char_* __a577;
  unsigned long __n578;
  char* __retval579;
  char* __p580;
  __a577 = v574;
  __n578 = v575;
  struct std__allocator_char_* t581 = __a577;
  unsigned long t582 = __n578;
  char* r583 = std__allocator_traits_std__allocator_char_____allocate(t581, t582);
  __p580 = r583;
  char* t584 = __p580;
  __retval579 = t584;
  char* t585 = __retval579;
  return t585;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v586) {
bb587:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this588;
  struct std__allocator_char_* __retval589;
  this588 = v586;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t590 = this588;
  struct std__allocator_char_* base591 = (struct std__allocator_char_*)((char *)&(t590->_M_dataplus) + 0);
  __retval589 = base591;
  struct std__allocator_char_* t592 = __retval589;
  return t592;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v593, unsigned long* v594, unsigned long v595) {
bb596:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this597;
  unsigned long* __capacity598;
  unsigned long __old_capacity599;
  char* __retval600;
  this597 = v593;
  __capacity598 = v594;
  __old_capacity599 = v595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t601 = this597;
    unsigned long* t602 = __capacity598;
    unsigned long t603 = *t602;
    unsigned long r604 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t601);
    _Bool c605 = ((t603 > r604)) ? 1 : 0;
    if (c605) {
      char* cast606 = (char*)&(_str_4);
      std____throw_length_error(cast606);
    }
    unsigned long* t607 = __capacity598;
    unsigned long t608 = *t607;
    unsigned long t609 = __old_capacity599;
    _Bool c610 = ((t608 > t609)) ? 1 : 0;
    _Bool ternary611;
    if (c610) {
      unsigned long* t612 = __capacity598;
      unsigned long t613 = *t612;
      unsigned long c614 = 2;
      unsigned long t615 = __old_capacity599;
      unsigned long b616 = c614 * t615;
      _Bool c617 = ((t613 < b616)) ? 1 : 0;
      ternary611 = (_Bool)c617;
    } else {
      _Bool c618 = 0;
      ternary611 = (_Bool)c618;
    }
    if (ternary611) {
      unsigned long c619 = 2;
      unsigned long t620 = __old_capacity599;
      unsigned long b621 = c619 * t620;
      unsigned long* t622 = __capacity598;
      *t622 = b621;
        unsigned long* t623 = __capacity598;
        unsigned long t624 = *t623;
        unsigned long r625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t601);
        _Bool c626 = ((t624 > r625)) ? 1 : 0;
        if (c626) {
          unsigned long r627 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t601);
          unsigned long* t628 = __capacity598;
          *t628 = r627;
        }
    }
  struct std__allocator_char_* r629 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t601);
  unsigned long* t630 = __capacity598;
  unsigned long t631 = *t630;
  unsigned long c632 = 1;
  unsigned long b633 = t631 + c632;
  char* r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r629, b633);
  __retval600 = r634;
  char* t635 = __retval600;
  return t635;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v636, unsigned long v637) {
bb638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this639;
  unsigned long __capacity640;
  this639 = v636;
  __capacity640 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this639;
  unsigned long t642 = __capacity640;
  t641->field2._M_allocated_capacity = t642;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb643:
  _Bool __retval644;
    _Bool c645 = 0;
    __retval644 = c645;
    _Bool t646 = __retval644;
    return t646;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v647) {
bb648:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this649;
  this649 = v647;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = this649;
    _Bool r651 = std__is_constant_evaluated();
    if (r651) {
        unsigned long __i652;
        unsigned long c653 = 0;
        __i652 = c653;
        while (1) {
          unsigned long t655 = __i652;
          unsigned long c656 = 15;
          _Bool c657 = ((t655 <= c656)) ? 1 : 0;
          if (!c657) break;
          char c658 = 0;
          unsigned long t659 = __i652;
          t650->field2._M_local_buf[t659] = c658;
        for_step654: ;
          unsigned long t660 = __i652;
          unsigned long u661 = t660 + 1;
          __i652 = u661;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v662, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v663) {
bb664:
  struct _Guard* this665;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s666;
  this665 = v662;
  __s666 = v663;
  struct _Guard* t667 = this665;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t668 = __s666;
  t667->_M_guarded = t668;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v669, char* v670) {
bb671:
  char* __location672;
  char* __args673;
  char* __retval674;
  void* __loc675;
  __location672 = v669;
  __args673 = v670;
  char* t676 = __location672;
  void* cast677 = (void*)t676;
  __loc675 = cast677;
    void* t678 = __loc675;
    char* cast679 = (char*)t678;
    char* t680 = __args673;
    char t681 = *t680;
    *cast679 = t681;
    __retval674 = cast679;
    char* t682 = __retval674;
    return t682;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v683, char* v684) {
bb685:
  char* __c1686;
  char* __c2687;
  __c1686 = v683;
  __c2687 = v684;
    _Bool r688 = std____is_constant_evaluated();
    if (r688) {
      char* t689 = __c1686;
      char* t690 = __c2687;
      char* r691 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t689, t690);
    } else {
      char* t692 = __c2687;
      char t693 = *t692;
      char* t694 = __c1686;
      *t694 = t693;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v695, char* v696, unsigned long v697) {
bb698:
  char* __s1699;
  char* __s2700;
  unsigned long __n701;
  char* __retval702;
  __s1699 = v695;
  __s2700 = v696;
  __n701 = v697;
    unsigned long t703 = __n701;
    unsigned long c704 = 0;
    _Bool c705 = ((t703 == c704)) ? 1 : 0;
    if (c705) {
      char* t706 = __s1699;
      __retval702 = t706;
      char* t707 = __retval702;
      return t707;
    }
    _Bool r708 = std____is_constant_evaluated();
    if (r708) {
        unsigned long __i709;
        unsigned long c710 = 0;
        __i709 = c710;
        while (1) {
          unsigned long t712 = __i709;
          unsigned long t713 = __n701;
          _Bool c714 = ((t712 < t713)) ? 1 : 0;
          if (!c714) break;
          char* t715 = __s1699;
          unsigned long t716 = __i709;
          char* ptr717 = &(t715)[t716];
          unsigned long t718 = __i709;
          char* t719 = __s2700;
          char* ptr720 = &(t719)[t718];
          char* r721 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr717, ptr720);
        for_step711: ;
          unsigned long t722 = __i709;
          unsigned long u723 = t722 + 1;
          __i709 = u723;
        }
      char* t724 = __s1699;
      __retval702 = t724;
      char* t725 = __retval702;
      return t725;
    }
  char* t726 = __s1699;
  void* cast727 = (void*)t726;
  char* t728 = __s2700;
  void* cast729 = (void*)t728;
  unsigned long t730 = __n701;
  unsigned long c731 = 1;
  unsigned long b732 = t730 * c731;
  void* r733 = memcpy(cast727, cast729, b732);
  char* t734 = __s1699;
  __retval702 = t734;
  char* t735 = __retval702;
  return t735;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v736, char* v737, unsigned long v738) {
bb739:
  char* __s1740;
  char* __s2741;
  unsigned long __n742;
  char* __retval743;
  __s1740 = v736;
  __s2741 = v737;
  __n742 = v738;
    unsigned long t744 = __n742;
    unsigned long c745 = 0;
    _Bool c746 = ((t744 == c745)) ? 1 : 0;
    if (c746) {
      char* t747 = __s1740;
      __retval743 = t747;
      char* t748 = __retval743;
      return t748;
    }
    _Bool r749 = std____is_constant_evaluated();
    if (r749) {
      char* t750 = __s1740;
      char* t751 = __s2741;
      unsigned long t752 = __n742;
      char* r753 = __gnu_cxx__char_traits_char___copy(t750, t751, t752);
      __retval743 = r753;
      char* t754 = __retval743;
      return t754;
    }
  char* t755 = __s1740;
  void* cast756 = (void*)t755;
  char* t757 = __s2741;
  void* cast758 = (void*)t757;
  unsigned long t759 = __n742;
  void* r760 = memcpy(cast756, cast758, t759);
  char* cast761 = (char*)r760;
  __retval743 = cast761;
  char* t762 = __retval743;
  return t762;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v763, char* v764, unsigned long v765) {
bb766:
  char* __d767;
  char* __s768;
  unsigned long __n769;
  __d767 = v763;
  __s768 = v764;
  __n769 = v765;
    unsigned long t770 = __n769;
    unsigned long c771 = 1;
    _Bool c772 = ((t770 == c771)) ? 1 : 0;
    if (c772) {
      char* t773 = __d767;
      char* t774 = __s768;
      std__char_traits_char___assign(t773, t774);
    } else {
      char* t775 = __d767;
      char* t776 = __s768;
      unsigned long t777 = __n769;
      char* r778 = std__char_traits_char___copy(t775, t776, t777);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v779) {
bb780:
  char* __it781;
  char* __retval782;
  __it781 = v779;
  char* t783 = __it781;
  __retval782 = t783;
  char* t784 = __retval782;
  return t784;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v785, char* v786, char* v787) {
bb788:
  char* __p789;
  char* __k1790;
  char* __k2791;
  __p789 = v785;
  __k1790 = v786;
  __k2791 = v787;
    char* t792 = __p789;
    char* t793 = __k1790;
    char* r794 = char_const__std____niter_base_char_const__(t793);
    char* t795 = __k2791;
    char* t796 = __k1790;
    long diff797 = t795 - t796;
    unsigned long cast798 = (unsigned long)diff797;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t792, r794, cast798);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v799) {
bb800:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this801;
  char* __retval802;
  this801 = v799;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t803 = this801;
  char* t804 = t803->_M_dataplus._M_p;
  __retval802 = t804;
  char* t805 = __retval802;
  return t805;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v806, unsigned long v807) {
bb808:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this809;
  unsigned long __length810;
  this809 = v806;
  __length810 = v807;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t811 = this809;
  unsigned long t812 = __length810;
  t811->_M_string_length = t812;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v813, unsigned long v814) {
bb815:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this816;
  unsigned long __n817;
  char ref_tmp0818;
  this816 = v813;
  __n817 = v814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t819 = this816;
  unsigned long t820 = __n817;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t819, t820);
  unsigned long t821 = __n817;
  char* r822 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t819);
  char* ptr823 = &(r822)[t821];
  char c824 = 0;
  ref_tmp0818 = c824;
  std__char_traits_char___assign(ptr823, &ref_tmp0818);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v825) {
bb826:
  struct _Guard* this827;
  this827 = v825;
  struct _Guard* t828 = this827;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t829 = t828->_M_guarded;
    _Bool cast830 = (_Bool)t829;
    if (cast830) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t831 = t828->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t831);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v832, char* v833, char* v834, struct std__forward_iterator_tag v835) {
bb836:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this837;
  char* __beg838;
  char* __end839;
  struct std__forward_iterator_tag unnamed840;
  unsigned long __dnew841;
  struct _Guard __guard842;
  this837 = v832;
  __beg838 = v833;
  __end839 = v834;
  unnamed840 = v835;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = this837;
  char* t844 = __beg838;
  char* t845 = __end839;
  long r846 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t844, t845);
  unsigned long cast847 = (unsigned long)r846;
  __dnew841 = cast847;
    unsigned long t848 = __dnew841;
    unsigned long c849 = 15;
    _Bool c850 = ((t848 > c849)) ? 1 : 0;
    if (c850) {
      unsigned long c851 = 0;
      char* r852 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t843, &__dnew841, c851);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t843, r852);
      unsigned long t853 = __dnew841;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t843, t853);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t843);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard842, t843);
    char* r854 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t843);
    char* t855 = __beg838;
    char* t856 = __end839;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r854, t855, t856);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c857 = ((void*)0);
    __guard842._M_guarded = c857;
    unsigned long t858 = __dnew841;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t843, t858);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard842);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v859) {
bb860:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this861;
  this861 = v859;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t862 = this861;
  {
    struct std__allocator_char_* base863 = (struct std__allocator_char_*)((char *)t862 + 0);
    std__allocator_char____allocator(base863);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v864, struct std____new_allocator_char_* v865) {
bb866:
  struct std____new_allocator_char_* this867;
  struct std____new_allocator_char_* unnamed868;
  this867 = v864;
  unnamed868 = v865;
  struct std____new_allocator_char_* t869 = this867;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v870, struct std__allocator_char_* v871) {
bb872:
  struct std__allocator_char_* this873;
  struct std__allocator_char_* __a874;
  this873 = v870;
  __a874 = v871;
  struct std__allocator_char_* t875 = this873;
  struct std____new_allocator_char_* base876 = (struct std____new_allocator_char_*)((char *)t875 + 0);
  struct std__allocator_char_* t877 = __a874;
  struct std____new_allocator_char_* base878 = (struct std____new_allocator_char_*)((char *)t877 + 0);
  std____new_allocator_char_____new_allocator(base876, base878);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v879) {
bb880:
  char* __r881;
  char* __retval882;
  __r881 = v879;
  char* t883 = __r881;
  __retval882 = t883;
  char* t884 = __retval882;
  return t884;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v885) {
bb886:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this887;
  char* __retval888;
  this887 = v885;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t889 = this887;
  char* cast890 = (char*)&(t889->field2._M_local_buf);
  char* r891 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast890);
  __retval888 = r891;
  char* t892 = __retval888;
  return t892;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v893) {
bb894:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this895;
  _Bool __retval896;
  this895 = v893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t897 = this895;
    char* r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t897);
    char* r899 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t897);
    _Bool c900 = ((r898 == r899)) ? 1 : 0;
    if (c900) {
        unsigned long t901 = t897->_M_string_length;
        unsigned long c902 = 15;
        _Bool c903 = ((t901 > c902)) ? 1 : 0;
        if (c903) {
          __builtin_unreachable();
        }
      _Bool c904 = 1;
      __retval896 = c904;
      _Bool t905 = __retval896;
      return t905;
    }
  _Bool c906 = 0;
  __retval896 = c906;
  _Bool t907 = __retval896;
  return t907;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v908, char* v909, unsigned long v910) {
bb911:
  struct std____new_allocator_char_* this912;
  char* __p913;
  unsigned long __n914;
  this912 = v908;
  __p913 = v909;
  __n914 = v910;
  struct std____new_allocator_char_* t915 = this912;
    unsigned long c916 = 1;
    unsigned long c917 = 16;
    _Bool c918 = ((c916 > c917)) ? 1 : 0;
    if (c918) {
      char* t919 = __p913;
      void* cast920 = (void*)t919;
      unsigned long t921 = __n914;
      unsigned long c922 = 1;
      unsigned long b923 = t921 * c922;
      unsigned long c924 = 1;
      operator_delete_3(cast920, b923, c924);
      return;
    }
  char* t925 = __p913;
  void* cast926 = (void*)t925;
  unsigned long t927 = __n914;
  unsigned long c928 = 1;
  unsigned long b929 = t927 * c928;
  operator_delete_2(cast926, b929);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v930, char* v931, unsigned long v932) {
bb933:
  struct std__allocator_char_* this934;
  char* __p935;
  unsigned long __n936;
  this934 = v930;
  __p935 = v931;
  __n936 = v932;
  struct std__allocator_char_* t937 = this934;
    _Bool r938 = std____is_constant_evaluated();
    if (r938) {
      char* t939 = __p935;
      void* cast940 = (void*)t939;
      operator_delete(cast940);
      return;
    }
  struct std____new_allocator_char_* base941 = (struct std____new_allocator_char_*)((char *)t937 + 0);
  char* t942 = __p935;
  unsigned long t943 = __n936;
  std____new_allocator_char___deallocate(base941, t942, t943);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v944, char* v945, unsigned long v946) {
bb947:
  struct std__allocator_char_* __a948;
  char* __p949;
  unsigned long __n950;
  __a948 = v944;
  __p949 = v945;
  __n950 = v946;
  struct std__allocator_char_* t951 = __a948;
  char* t952 = __p949;
  unsigned long t953 = __n950;
  std__allocator_char___deallocate(t951, t952, t953);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v954, unsigned long v955) {
bb956:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this957;
  unsigned long __size958;
  this957 = v954;
  __size958 = v955;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t959 = this957;
  struct std__allocator_char_* r960 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t959);
  char* r961 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t959);
  unsigned long t962 = __size958;
  unsigned long c963 = 1;
  unsigned long b964 = t962 + c963;
  std__allocator_traits_std__allocator_char_____deallocate(r960, r961, b964);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v965) {
bb966:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this967;
  this967 = v965;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t968 = this967;
    _Bool r969 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t968);
    _Bool u970 = !r969;
    if (u970) {
      unsigned long t971 = t968->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t968, t971);
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v972) {
bb973:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this974;
  char** __retval975;
  this974 = v972;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t976 = this974;
  __retval975 = &t976->_M_current;
  char** t977 = __retval975;
  return t977;
}

