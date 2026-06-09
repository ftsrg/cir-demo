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
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
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
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std__vector_char__std__allocator_char_____vector_int___void_(struct std__vector_char__std__allocator_char__* p0, int* p1, int* p2, struct std__allocator_char_* p3);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, int* p2, int* p3);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, int* p2, int* p3, void* p4);
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0, struct std__allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0, struct std__allocator_char_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
_Bool std____is_constant_evaluated();
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
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long p0, struct std__allocator_char_* p1);
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0, char** p1);
char* _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, int* p1);
void void_std___Construct_char__int__(char* p0, int* p1);
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* p0);
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0);
char* char__std____do_uninit_copy_int___int___char__(int* p0, int* p1, char* p2);
char* char__std__uninitialized_copy_int___char__(int* p0, int* p1, char* p2);
char* char__std____uninitialized_copy_a_int___int___char___char_(int* p0, int* p1, char* p2, struct std__allocator_char_* p3);
void void_std__vector_char__std__allocator_char______M_range_initialize_n_int___int__(struct std__vector_char__std__allocator_char__* p0, int* p1, int* p2, unsigned long p3);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* p0);
void void_std__destroy_at_char_(char* p0);
void void_std___Destroy_char__(char* p0, char* p1);
void void_std___Destroy_char___char_(char* p0, char* p1, struct std__allocator_char_* p2);

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

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v14) {
bb15:
  struct std__allocator_char_* this16;
  this16 = v14;
  struct std__allocator_char_* t17 = this16;
  struct std____new_allocator_char_* base18 = (struct std____new_allocator_char_*)((char *)t17 + 0);
  std____new_allocator_char_____new_allocator_2(base18);
  return;
}

// function: _ZNSt6vectorIcSaIcEEC2IPivEET_S4_RKS0_
void std__vector_char__std__allocator_char_____vector_int___void_(struct std__vector_char__std__allocator_char__* v19, int* v20, int* v21, struct std__allocator_char_* v22) {
bb23:
  struct std__vector_char__std__allocator_char__* this24;
  int* __first25;
  int* __last26;
  struct std__allocator_char_* __a27;
  this24 = v19;
  __first25 = v20;
  __last26 = v21;
  __a27 = v22;
  struct std__vector_char__std__allocator_char__* t28 = this24;
  struct std___Vector_base_char__std__allocator_char__* base29 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t28 + 0);
  struct std__allocator_char_* t30 = __a27;
  std___Vector_base_char__std__allocator_char______Vector_base(base29, t30);
      unsigned long __n31;
      int* t32 = __last26;
      long r33 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first25, t32);
      unsigned long cast34 = (unsigned long)r33;
      __n31 = cast34;
      int* t35 = __first25;
      int* t36 = __last26;
      unsigned long t37 = __n31;
      void_std__vector_char__std__allocator_char______M_range_initialize_n_int___int__(t28, t35, t36, t37);
      {
        struct std___Vector_base_char__std__allocator_char__* base38 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t28 + 0);
        std___Vector_base_char__std__allocator_char_______Vector_base(base38);
      }
      return;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v39) {
bb40:
  struct std__allocator_char_* this41;
  this41 = v39;
  struct std__allocator_char_* t42 = this41;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2Ev
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v43) {
bb44:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this45;
  this45 = v43;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t46 = this45;
  char* c47 = ((void*)0);
  t46->_M_current = c47;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEppEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v48) {
bb49:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this50;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __retval51;
  this50 = v48;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t52 = this50;
  char* t53 = t52->_M_current;
  int c54 = 1;
  char* ptr55 = &(t53)[c54];
  t52->_M_current = ptr55;
  __retval51 = t52;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t56 = __retval51;
  return t56;
}

// function: _ZSt13find_first_ofIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEPiET_S8_S8_T0_S9_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v57, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v58, int* v59, int* v60) {
bb61:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first162;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last163;
  int* __first264;
  int* __last265;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval66;
  __first162 = v57;
  __last163 = v58;
  __first264 = v59;
  __last265 = v60;
    while (1) {
      _Bool r68 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first162, &__last163);
      _Bool u69 = !r68;
      if (!u69) break;
        int* __iter70;
        int* t71 = __first264;
        __iter70 = t71;
        while (1) {
          int* t73 = __iter70;
          int* t74 = __last265;
          _Bool c75 = ((t73 != t74)) ? 1 : 0;
          if (!c75) break;
            char* r76 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&__first162);
            char t77 = *r76;
            int cast78 = (int)t77;
            int* t79 = __iter70;
            int t80 = *t79;
            _Bool c81 = ((cast78 == t80)) ? 1 : 0;
            if (c81) {
              __retval66 = __first162; // copy
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t82 = __retval66;
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ret_val83 = t82;
              return ret_val83;
            }
        for_step72: ;
          int* t84 = __iter70;
          int c85 = 1;
          int* ptr86 = &(t84)[c85];
          __iter70 = ptr86;
        }
    for_step67: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r87 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&__first162);
    }
  __retval66 = __last163; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t88 = __retval66;
  return t88;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v89, char** v90) {
bb91:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this92;
  char** __i93;
  this92 = v89;
  __i93 = v90;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t94 = this92;
  char** t95 = __i93;
  char* t96 = *t95;
  t94->_M_current = t96;
  return;
}

// function: _ZNSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* v97) {
bb98:
  struct std__vector_char__std__allocator_char__* this99;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval100;
  this99 = v97;
  struct std__vector_char__std__allocator_char__* t101 = this99;
  struct std___Vector_base_char__std__allocator_char__* base102 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t101 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base103 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base102->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval100, &base103->_M_start);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t104 = __retval100;
  return t104;
}

// function: _ZNSt6vectorIcSaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* v105) {
bb106:
  struct std__vector_char__std__allocator_char__* this107;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval108;
  this107 = v105;
  struct std__vector_char__std__allocator_char__* t109 = this107;
  struct std___Vector_base_char__std__allocator_char__* base110 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t109 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base111 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base110->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval108, &base111->_M_finish);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t112 = __retval108;
  return t112;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEaSEOS5_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v113, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v114) {
bb115:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this116;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* unnamed117;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __retval118;
  this116 = v113;
  unnamed117 = v114;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t119 = this116;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t120 = unnamed117;
  char* t121 = t120->_M_current;
  t119->_M_current = t121;
  __retval118 = t119;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t122 = __retval118;
  return t122;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v123) {
bb124:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this125;
  char** __retval126;
  this125 = v123;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t127 = this125;
  __retval126 = &t127->_M_current;
  char** t128 = __retval126;
  return t128;
}

// function: _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v129, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v130) {
bb131:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __lhs132;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __rhs133;
  _Bool __retval134;
  __lhs132 = v129;
  __rhs133 = v130;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t135 = __lhs132;
  char** r136 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t135);
  char* t137 = *r136;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t138 = __rhs133;
  char** r139 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t138);
  char* t140 = *r139;
  _Bool c141 = ((t137 == t140)) ? 1 : 0;
  __retval134 = c141;
  _Bool t142 = __retval134;
  return t142;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v143) {
bb144:
  struct std__ios_base* this145;
  long __retval146;
  this145 = v143;
  struct std__ios_base* t147 = this145;
  long t148 = t147->_M_width;
  __retval146 = t148;
  long t149 = __retval146;
  return t149;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ostream_char__std__char_traits_char__* __out153;
  char __c154;
  struct std__basic_ostream_char__std__char_traits_char__* __retval155;
  __out153 = v150;
  __c154 = v151;
    struct std__basic_ostream_char__std__char_traits_char__* t156 = __out153;
    void** v157 = (void**)t156;
    void* v158 = *((void**)v157);
    unsigned char* cast159 = (unsigned char*)v158;
    long c160 = -24;
    unsigned char* ptr161 = &(cast159)[c160];
    long* cast162 = (long*)ptr161;
    long t163 = *cast162;
    unsigned char* cast164 = (unsigned char*)t156;
    unsigned char* ptr165 = &(cast164)[t163];
    struct std__basic_ostream_char__std__char_traits_char__* cast166 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr165;
    struct std__ios_base* cast167 = (struct std__ios_base*)cast166;
    long r168 = std__ios_base__width___const(cast167);
    long c169 = 0;
    _Bool c170 = ((r168 != c169)) ? 1 : 0;
    if (c170) {
      struct std__basic_ostream_char__std__char_traits_char__* t171 = __out153;
      long c172 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r173 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t171, &__c154, c172);
      __retval155 = r173;
      struct std__basic_ostream_char__std__char_traits_char__* t174 = __retval155;
      return t174;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t175 = __out153;
  char t176 = __c154;
  struct std__basic_ostream_char__std__char_traits_char__* r177 = std__ostream__put(t175, t176);
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __out153;
  __retval155 = t178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval155;
  return t179;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v180, int v181) {
bb182:
  int __a183;
  int __b184;
  int __retval185;
  __a183 = v180;
  __b184 = v181;
  int t186 = __a183;
  int t187 = __b184;
  int b188 = t186 | t187;
  __retval185 = b188;
  int t189 = __retval185;
  return t189;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v190) {
bb191:
  struct std__basic_ios_char__std__char_traits_char__* this192;
  int __retval193;
  this192 = v190;
  struct std__basic_ios_char__std__char_traits_char__* t194 = this192;
  struct std__ios_base* base195 = (struct std__ios_base*)((char *)t194 + 0);
  int t196 = base195->_M_streambuf_state;
  __retval193 = t196;
  int t197 = __retval193;
  return t197;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v198, int v199) {
bb200:
  struct std__basic_ios_char__std__char_traits_char__* this201;
  int __state202;
  this201 = v198;
  __state202 = v199;
  struct std__basic_ios_char__std__char_traits_char__* t203 = this201;
  int r204 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t203);
  int t205 = __state202;
  int r206 = std__operator_(r204, t205);
  std__basic_ios_char__std__char_traits_char_____clear(t203, r206);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v207, char* v208) {
bb209:
  char* __c1210;
  char* __c2211;
  _Bool __retval212;
  __c1210 = v207;
  __c2211 = v208;
  char* t213 = __c1210;
  char t214 = *t213;
  int cast215 = (int)t214;
  char* t216 = __c2211;
  char t217 = *t216;
  int cast218 = (int)t217;
  _Bool c219 = ((cast215 == cast218)) ? 1 : 0;
  __retval212 = c219;
  _Bool t220 = __retval212;
  return t220;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v221) {
bb222:
  char* __p223;
  unsigned long __retval224;
  unsigned long __i225;
  __p223 = v221;
  unsigned long c226 = 0;
  __i225 = c226;
    char ref_tmp0227;
    while (1) {
      unsigned long t228 = __i225;
      char* t229 = __p223;
      char* ptr230 = &(t229)[t228];
      char c231 = 0;
      ref_tmp0227 = c231;
      _Bool r232 = __gnu_cxx__char_traits_char___eq(ptr230, &ref_tmp0227);
      _Bool u233 = !r232;
      if (!u233) break;
      unsigned long t234 = __i225;
      unsigned long u235 = t234 + 1;
      __i225 = u235;
    }
  unsigned long t236 = __i225;
  __retval224 = t236;
  unsigned long t237 = __retval224;
  return t237;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v238) {
bb239:
  char* __s240;
  unsigned long __retval241;
  __s240 = v238;
    _Bool r242 = std____is_constant_evaluated();
    if (r242) {
      char* t243 = __s240;
      unsigned long r244 = __gnu_cxx__char_traits_char___length(t243);
      __retval241 = r244;
      unsigned long t245 = __retval241;
      return t245;
    }
  char* t246 = __s240;
  unsigned long r247 = strlen(t246);
  __retval241 = r247;
  unsigned long t248 = __retval241;
  return t248;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v249, char* v250) {
bb251:
  struct std__basic_ostream_char__std__char_traits_char__* __out252;
  char* __s253;
  struct std__basic_ostream_char__std__char_traits_char__* __retval254;
  __out252 = v249;
  __s253 = v250;
    char* t255 = __s253;
    _Bool cast256 = (_Bool)t255;
    _Bool u257 = !cast256;
    if (u257) {
      struct std__basic_ostream_char__std__char_traits_char__* t258 = __out252;
      void** v259 = (void**)t258;
      void* v260 = *((void**)v259);
      unsigned char* cast261 = (unsigned char*)v260;
      long c262 = -24;
      unsigned char* ptr263 = &(cast261)[c262];
      long* cast264 = (long*)ptr263;
      long t265 = *cast264;
      unsigned char* cast266 = (unsigned char*)t258;
      unsigned char* ptr267 = &(cast266)[t265];
      struct std__basic_ostream_char__std__char_traits_char__* cast268 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr267;
      struct std__basic_ios_char__std__char_traits_char__* cast269 = (struct std__basic_ios_char__std__char_traits_char__*)cast268;
      int t270 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast269, t270);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t271 = __out252;
      char* t272 = __s253;
      char* t273 = __s253;
      unsigned long r274 = std__char_traits_char___length(t273);
      long cast275 = (long)r274;
      struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t271, t272, cast275);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __out252;
  __retval254 = t277;
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __retval254;
  return t278;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEdeEv
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v279) {
bb280:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this281;
  char* __retval282;
  this281 = v279;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t283 = this281;
  char* t284 = t283->_M_current;
  __retval282 = t284;
  char* t285 = __retval282;
  return t285;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v286, void* v287) {
bb288:
  struct std__basic_ostream_char__std__char_traits_char__* this289;
  void* __pf290;
  struct std__basic_ostream_char__std__char_traits_char__* __retval291;
  this289 = v286;
  __pf290 = v287;
  struct std__basic_ostream_char__std__char_traits_char__* t292 = this289;
  void* t293 = __pf290;
  struct std__basic_ostream_char__std__char_traits_char__* r294 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t293)(t292);
  __retval291 = r294;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = __retval291;
  return t295;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v296) {
bb297:
  struct std__basic_ostream_char__std__char_traits_char__* __os298;
  struct std__basic_ostream_char__std__char_traits_char__* __retval299;
  __os298 = v296;
  struct std__basic_ostream_char__std__char_traits_char__* t300 = __os298;
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__ostream__flush(t300);
  __retval299 = r301;
  struct std__basic_ostream_char__std__char_traits_char__* t302 = __retval299;
  return t302;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v303) {
bb304:
  struct std__ctype_char_* __f305;
  struct std__ctype_char_* __retval306;
  __f305 = v303;
    struct std__ctype_char_* t307 = __f305;
    _Bool cast308 = (_Bool)t307;
    _Bool u309 = !cast308;
    if (u309) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t310 = __f305;
  __retval306 = t310;
  struct std__ctype_char_* t311 = __retval306;
  return t311;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v312, char v313) {
bb314:
  struct std__ctype_char_* this315;
  char __c316;
  char __retval317;
  this315 = v312;
  __c316 = v313;
  struct std__ctype_char_* t318 = this315;
    char t319 = t318->_M_widen_ok;
    _Bool cast320 = (_Bool)t319;
    if (cast320) {
      char t321 = __c316;
      unsigned char cast322 = (unsigned char)t321;
      unsigned long cast323 = (unsigned long)cast322;
      char t324 = t318->_M_widen[cast323];
      __retval317 = t324;
      char t325 = __retval317;
      return t325;
    }
  std__ctype_char____M_widen_init___const(t318);
  char t326 = __c316;
  void** v327 = (void**)t318;
  void* v328 = *((void**)v327);
  char vcall331 = (char)__VERIFIER_virtual_call_char_char(t318, 6, t326);
  __retval317 = vcall331;
  char t332 = __retval317;
  return t332;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v333, char v334) {
bb335:
  struct std__basic_ios_char__std__char_traits_char__* this336;
  char __c337;
  char __retval338;
  this336 = v333;
  __c337 = v334;
  struct std__basic_ios_char__std__char_traits_char__* t339 = this336;
  struct std__ctype_char_* t340 = t339->_M_ctype;
  struct std__ctype_char_* r341 = std__ctype_char__const__std____check_facet_std__ctype_char___(t340);
  char t342 = __c337;
  char r343 = std__ctype_char___widen_char__const(r341, t342);
  __retval338 = r343;
  char t344 = __retval338;
  return t344;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v345) {
bb346:
  struct std__basic_ostream_char__std__char_traits_char__* __os347;
  struct std__basic_ostream_char__std__char_traits_char__* __retval348;
  __os347 = v345;
  struct std__basic_ostream_char__std__char_traits_char__* t349 = __os347;
  struct std__basic_ostream_char__std__char_traits_char__* t350 = __os347;
  void** v351 = (void**)t350;
  void* v352 = *((void**)v351);
  unsigned char* cast353 = (unsigned char*)v352;
  long c354 = -24;
  unsigned char* ptr355 = &(cast353)[c354];
  long* cast356 = (long*)ptr355;
  long t357 = *cast356;
  unsigned char* cast358 = (unsigned char*)t350;
  unsigned char* ptr359 = &(cast358)[t357];
  struct std__basic_ostream_char__std__char_traits_char__* cast360 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr359;
  struct std__basic_ios_char__std__char_traits_char__* cast361 = (struct std__basic_ios_char__std__char_traits_char__*)cast360;
  char c362 = 10;
  char r363 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast361, c362);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__ostream__put(t349, r363);
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r364);
  __retval348 = r365;
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __retval348;
  return t366;
}

// function: _ZSt13find_first_ofIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEPiPFbccEET_SA_SA_T0_SB_T1_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v367, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v368, int* v369, int* v370, void* v371) {
bb372:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first1373;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last1374;
  int* __first2375;
  int* __last2376;
  void* __comp377;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval378;
  __first1373 = v367;
  __last1374 = v368;
  __first2375 = v369;
  __last2376 = v370;
  __comp377 = v371;
    while (1) {
      _Bool r380 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1373, &__last1374);
      _Bool u381 = !r380;
      if (!u381) break;
        int* __iter382;
        int* t383 = __first2375;
        __iter382 = t383;
        while (1) {
          int* t385 = __iter382;
          int* t386 = __last2376;
          _Bool c387 = ((t385 != t386)) ? 1 : 0;
          if (!c387) break;
            void* t388 = __comp377;
            char* r389 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&__first1373);
            char t390 = *r389;
            int* t391 = __iter382;
            int t392 = *t391;
            char cast393 = (char)t392;
            _Bool r394 = ((_Bool (*)(char, char))t388)(t390, cast393);
            if (r394) {
              __retval378 = __first1373; // copy
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t395 = __retval378;
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ret_val396 = t395;
              return ret_val396;
            }
        for_step384: ;
          int* t397 = __iter382;
          int c398 = 1;
          int* ptr399 = &(t397)[c398];
          __iter382 = ptr399;
        }
    for_step379: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r400 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&__first1373);
    }
  __retval378 = __last1374; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t401 = __retval378;
  return t401;
}

// function: _ZNSt6vectorIcSaIcEED2Ev
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* v402) {
bb403:
  struct std__vector_char__std__allocator_char__* this404;
  this404 = v402;
  struct std__vector_char__std__allocator_char__* t405 = this404;
    struct std___Vector_base_char__std__allocator_char__* base406 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base407 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base406->_M_impl) + 0);
    char* t408 = base407->_M_start;
    struct std___Vector_base_char__std__allocator_char__* base409 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base410 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base409->_M_impl) + 0);
    char* t411 = base410->_M_finish;
    struct std___Vector_base_char__std__allocator_char__* base412 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    struct std__allocator_char_* r413 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base412);
    void_std___Destroy_char___char_(t408, t411, r413);
  {
    struct std___Vector_base_char__std__allocator_char__* base414 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    std___Vector_base_char__std__allocator_char_______Vector_base(base414);
  }
  return;
}

// function: main
int main() {
bb415:
  int __retval416;
  int mychars417[6];
  struct std__vector_char__std__allocator_char__ myvector418;
  struct std__allocator_char_ ref_tmp0419;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ it420;
  int match421[3];
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp1422;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp0423;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1424;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp3425;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2426;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp3427;
  int c428 = 0;
  __retval416 = c428;
  // array copy
  __builtin_memcpy(mychars417, __const_main_mychars, (unsigned long)6 * sizeof(__const_main_mychars[0]));
  int* cast429 = (int*)&(mychars417);
  int* cast430 = (int*)&(mychars417);
  int c431 = 6;
  int* ptr432 = &(cast430)[c431];
  std__allocator_char___allocator_2(&ref_tmp0419);
    std__vector_char__std__allocator_char_____vector_int___void_(&myvector418, cast429, ptr432, &ref_tmp0419);
  {
    std__allocator_char____allocator(&ref_tmp0419);
  }
    __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(&it420);
    // array copy
    __builtin_memcpy(match421, __const_main_match, (unsigned long)3 * sizeof(__const_main_match[0]));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r433 = std__vector_char__std__allocator_char_____begin(&myvector418);
    agg_tmp0423 = r433;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r434 = std__vector_char__std__allocator_char_____end(&myvector418);
    agg_tmp1424 = r434;
    int* cast435 = (int*)&(match421);
    int* cast436 = (int*)&(match421);
    int c437 = 3;
    int* ptr438 = &(cast436)[c437];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t439 = agg_tmp0423;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t440 = agg_tmp1424;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r441 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__(t439, t440, cast435, ptr438);
    ref_tmp1422 = r441;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r442 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(&it420, &ref_tmp1422);
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp2443;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r444 = std__vector_char__std__allocator_char_____end(&myvector418);
      ref_tmp2443 = r444;
      _Bool r445 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it420, &ref_tmp2443);
      _Bool u446 = !r445;
      if (u446) {
        char* cast447 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast447);
        char* r449 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
        char t450 = *r449;
        struct std__basic_ostream_char__std__char_traits_char__* r451 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r448, t450);
        struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__operator___std__ostream_____(r451, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r453 = std__vector_char__std__allocator_char_____begin(&myvector418);
    agg_tmp2426 = r453;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r454 = std__vector_char__std__allocator_char_____end(&myvector418);
    agg_tmp3427 = r454;
    int* cast455 = (int*)&(match421);
    int* cast456 = (int*)&(match421);
    int c457 = 3;
    int* ptr458 = &(cast456)[c457];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t459 = agg_tmp2426;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t460 = agg_tmp3427;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r461 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(t459, t460, cast455, ptr458, &comp_case_insensitive);
    ref_tmp3425 = r461;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r462 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(&it420, &ref_tmp3425);
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp4463;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r464 = std__vector_char__std__allocator_char_____end(&myvector418);
      ref_tmp4463 = r464;
      _Bool r465 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it420, &ref_tmp4463);
      _Bool u466 = !r465;
      if (u466) {
        char* cast467 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r468 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast467);
        char* r469 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
        char t470 = *r469;
        struct std__basic_ostream_char__std__char_traits_char__* r471 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r468, t470);
        struct std__basic_ostream_char__std__char_traits_char__* r472 = std__ostream__operator___std__ostream_____(r471, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    int c473 = 0;
    __retval416 = c473;
    int t474 = __retval416;
    int ret_val475 = t474;
    {
      std__vector_char__std__allocator_char______vector(&myvector418);
    }
    return ret_val475;
  int t476 = __retval416;
  return t476;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v477) {
bb478:
  struct std____new_allocator_char_* this479;
  this479 = v477;
  struct std____new_allocator_char_* t480 = this479;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v481, struct std__allocator_char_* v482) {
bb483:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this484;
  struct std__allocator_char_* __a485;
  this484 = v481;
  __a485 = v482;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t486 = this484;
  struct std__allocator_char_* base487 = (struct std__allocator_char_*)((char *)t486 + 0);
  struct std__allocator_char_* t488 = __a485;
  std__allocator_char___allocator(base487, t488);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base489 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)t486 + 0);
    std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(base489);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implD2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v490) {
bb491:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this492;
  this492 = v490;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t493 = this492;
  {
    struct std__allocator_char_* base494 = (struct std__allocator_char_*)((char *)t493 + 0);
    std__allocator_char____allocator(base494);
  }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEEC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* v495, struct std__allocator_char_* v496) {
bb497:
  struct std___Vector_base_char__std__allocator_char__* this498;
  struct std__allocator_char_* __a499;
  this498 = v495;
  __a499 = v496;
  struct std___Vector_base_char__std__allocator_char__* t500 = this498;
  struct std__allocator_char_* t501 = __a499;
  std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(&t500->_M_impl, t501);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v502, int** v503, int* v504) {
bb505:
  struct std__ranges____distance_fn* this506;
  int** __first507;
  int* __last508;
  long __retval509;
  this506 = v502;
  __first507 = v503;
  __last508 = v504;
  struct std__ranges____distance_fn* t510 = this506;
  int* t511 = __last508;
  int** t512 = __first507;
  int* t513 = *t512;
  long diff514 = t511 - t513;
  __retval509 = diff514;
  long t515 = __retval509;
  return t515;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb516:
  _Bool __retval517;
    _Bool c518 = 0;
    __retval517 = c518;
    _Bool t519 = __retval517;
    return t519;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v520) {
bb521:
  struct std____new_allocator_char_* this522;
  unsigned long __retval523;
  this522 = v520;
  struct std____new_allocator_char_* t524 = this522;
  unsigned long c525 = 9223372036854775807;
  unsigned long c526 = 1;
  unsigned long b527 = c525 / c526;
  __retval523 = b527;
  unsigned long t528 = __retval523;
  return t528;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v529, unsigned long v530, void* v531) {
bb532:
  struct std____new_allocator_char_* this533;
  unsigned long __n534;
  void* unnamed535;
  char* __retval536;
  this533 = v529;
  __n534 = v530;
  unnamed535 = v531;
  struct std____new_allocator_char_* t537 = this533;
    unsigned long t538 = __n534;
    unsigned long r539 = std____new_allocator_char____M_max_size___const(t537);
    _Bool c540 = ((t538 > r539)) ? 1 : 0;
    if (c540) {
        unsigned long t541 = __n534;
        unsigned long c542 = -1;
        unsigned long c543 = 1;
        unsigned long b544 = c542 / c543;
        _Bool c545 = ((t541 > b544)) ? 1 : 0;
        if (c545) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c546 = 1;
    unsigned long c547 = 16;
    _Bool c548 = ((c546 > c547)) ? 1 : 0;
    if (c548) {
      unsigned long __al549;
      unsigned long c550 = 1;
      __al549 = c550;
      unsigned long t551 = __n534;
      unsigned long c552 = 1;
      unsigned long b553 = t551 * c552;
      unsigned long t554 = __al549;
      void* r555 = operator_new_2(b553, t554);
      char* cast556 = (char*)r555;
      __retval536 = cast556;
      char* t557 = __retval536;
      return t557;
    }
  unsigned long t558 = __n534;
  unsigned long c559 = 1;
  unsigned long b560 = t558 * c559;
  void* r561 = operator_new(b560);
  char* cast562 = (char*)r561;
  __retval536 = cast562;
  char* t563 = __retval536;
  return t563;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v564, unsigned long v565) {
bb566:
  struct std__allocator_char_* this567;
  unsigned long __n568;
  char* __retval569;
  this567 = v564;
  __n568 = v565;
  struct std__allocator_char_* t570 = this567;
    _Bool r571 = std____is_constant_evaluated();
    if (r571) {
        unsigned long t572 = __n568;
        unsigned long c573 = 1;
        unsigned long ovr574;
        _Bool ovf575 = __builtin_mul_overflow(t572, c573, &ovr574);
        __n568 = ovr574;
        if (ovf575) {
          std____throw_bad_array_new_length();
        }
      unsigned long t576 = __n568;
      void* r577 = operator_new(t576);
      char* cast578 = (char*)r577;
      __retval569 = cast578;
      char* t579 = __retval569;
      return t579;
    }
  struct std____new_allocator_char_* base580 = (struct std____new_allocator_char_*)((char *)t570 + 0);
  unsigned long t581 = __n568;
  void* c582 = ((void*)0);
  char* r583 = std____new_allocator_char___allocate(base580, t581, c582);
  __retval569 = r583;
  char* t584 = __retval569;
  return t584;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v585, unsigned long v586) {
bb587:
  struct std__allocator_char_* __a588;
  unsigned long __n589;
  char* __retval590;
  __a588 = v585;
  __n589 = v586;
  struct std__allocator_char_* t591 = __a588;
  unsigned long t592 = __n589;
  char* r593 = std__allocator_char___allocate(t591, t592);
  __retval590 = r593;
  char* t594 = __retval590;
  return t594;
}

// function: _ZNSt12_Vector_baseIcSaIcEE11_M_allocateEm
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* v595, unsigned long v596) {
bb597:
  struct std___Vector_base_char__std__allocator_char__* this598;
  unsigned long __n599;
  char* __retval600;
  this598 = v595;
  __n599 = v596;
  struct std___Vector_base_char__std__allocator_char__* t601 = this598;
  unsigned long t602 = __n599;
  unsigned long c603 = 0;
  _Bool c604 = ((t602 != c603)) ? 1 : 0;
  char* ternary605;
  if (c604) {
    struct std__allocator_char_* base606 = (struct std__allocator_char_*)((char *)&(t601->_M_impl) + 0);
    unsigned long t607 = __n599;
    char* r608 = std__allocator_traits_std__allocator_char_____allocate(base606, t607);
    ternary605 = (char*)r608;
  } else {
    char* c609 = ((void*)0);
    ternary605 = (char*)c609;
  }
  __retval600 = ternary605;
  char* t610 = __retval600;
  return t610;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v611, unsigned long* v612) {
bb613:
  unsigned long* __a614;
  unsigned long* __b615;
  unsigned long* __retval616;
  __a614 = v611;
  __b615 = v612;
    unsigned long* t617 = __b615;
    unsigned long t618 = *t617;
    unsigned long* t619 = __a614;
    unsigned long t620 = *t619;
    _Bool c621 = ((t618 < t620)) ? 1 : 0;
    if (c621) {
      unsigned long* t622 = __b615;
      __retval616 = t622;
      unsigned long* t623 = __retval616;
      return t623;
    }
  unsigned long* t624 = __a614;
  __retval616 = t624;
  unsigned long* t625 = __retval616;
  return t625;
}

// function: _ZNSt6vectorIcSaIcEE11_S_max_sizeERKS0_
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* v626) {
bb627:
  struct std__allocator_char_* __a628;
  unsigned long __retval629;
  unsigned long __diffmax630;
  unsigned long __allocmax631;
  __a628 = v626;
  unsigned long c632 = 9223372036854775807;
  __diffmax630 = c632;
  unsigned long c633 = -1;
  __allocmax631 = c633;
  unsigned long* r634 = unsigned_long_const__std__min_unsigned_long_(&__diffmax630, &__allocmax631);
  unsigned long t635 = *r634;
  __retval629 = t635;
  unsigned long t636 = __retval629;
  return t636;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v637, struct std__allocator_char_* v638) {
bb639:
  struct std__allocator_char_* this640;
  struct std__allocator_char_* __a641;
  this640 = v637;
  __a641 = v638;
  struct std__allocator_char_* t642 = this640;
  struct std____new_allocator_char_* base643 = (struct std____new_allocator_char_*)((char *)t642 + 0);
  struct std__allocator_char_* t644 = __a641;
  struct std____new_allocator_char_* base645 = (struct std____new_allocator_char_*)((char *)t644 + 0);
  std____new_allocator_char_____new_allocator(base643, base645);
  return;
}

// function: _ZNSt6vectorIcSaIcEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long v646, struct std__allocator_char_* v647) {
bb648:
  unsigned long __n649;
  struct std__allocator_char_* __a650;
  unsigned long __retval651;
  __n649 = v646;
  __a650 = v647;
    struct std__allocator_char_ ref_tmp0652;
    _Bool tmp_exprcleanup653;
    unsigned long t654 = __n649;
    struct std__allocator_char_* t655 = __a650;
    std__allocator_char___allocator(&ref_tmp0652, t655);
      unsigned long r656 = std__vector_char__std__allocator_char______S_max_size(&ref_tmp0652);
      _Bool c657 = ((t654 > r656)) ? 1 : 0;
      tmp_exprcleanup653 = c657;
    {
      std__allocator_char____allocator(&ref_tmp0652);
    }
    _Bool t658 = tmp_exprcleanup653;
    if (t658) {
      char* cast659 = (char*)&(_str_1);
      std____throw_length_error(cast659);
    }
  unsigned long t660 = __n649;
  __retval651 = t660;
  unsigned long t661 = __retval651;
  return t661;
}

// function: _ZNSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* v662) {
bb663:
  struct std___Vector_base_char__std__allocator_char__* this664;
  struct std__allocator_char_* __retval665;
  this664 = v662;
  struct std___Vector_base_char__std__allocator_char__* t666 = this664;
  struct std__allocator_char_* base667 = (struct std__allocator_char_*)((char *)&(t666->_M_impl) + 0);
  __retval665 = base667;
  struct std__allocator_char_* t668 = __retval665;
  return t668;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb669:
  _Bool __retval670;
    _Bool c671 = 0;
    __retval670 = c671;
    _Bool t672 = __retval670;
    return t672;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPcvEC2ERS0_
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v673, char** v674) {
bb675:
  struct std___UninitDestroyGuard_char____void_* this676;
  char** __first677;
  this676 = v673;
  __first677 = v674;
  struct std___UninitDestroyGuard_char____void_* t678 = this676;
  char** t679 = __first677;
  char* t680 = *t679;
  t678->_M_first = t680;
  char** t681 = __first677;
  t678->_M_cur = t681;
  return;
}

// function: _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v682, int* v683) {
bb684:
  char* __location685;
  int* __args686;
  char* __retval687;
  void* __loc688;
  __location685 = v682;
  __args686 = v683;
  char* t689 = __location685;
  void* cast690 = (void*)t689;
  __loc688 = cast690;
    void* t691 = __loc688;
    char* cast692 = (char*)t691;
    int* t693 = __args686;
    int t694 = *t693;
    char cast695 = (char)t694;
    *cast692 = cast695;
    __retval687 = cast692;
    char* t696 = __retval687;
    return t696;
  abort();
}

// function: _ZSt10_ConstructIcJRiEEvPT_DpOT0_
void void_std___Construct_char__int__(char* v697, int* v698) {
bb699:
  char* __p700;
  int* __args701;
  __p700 = v697;
  __args701 = v698;
    _Bool r702 = std____is_constant_evaluated();
    if (r702) {
      char* t703 = __p700;
      int* t704 = __args701;
      char* r705 = _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t703, t704);
      return;
    }
  char* t706 = __p700;
  void* cast707 = (void*)t706;
  char* cast708 = (char*)cast707;
  int* t709 = __args701;
  int t710 = *t709;
  char cast711 = (char)t710;
  *cast708 = cast711;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvE7releaseEv
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* v712) {
bb713:
  struct std___UninitDestroyGuard_char____void_* this714;
  this714 = v712;
  struct std___UninitDestroyGuard_char____void_* t715 = this714;
  char** c716 = ((void*)0);
  t715->_M_cur = c716;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvED2Ev
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v717) {
bb718:
  struct std___UninitDestroyGuard_char____void_* this719;
  this719 = v717;
  struct std___UninitDestroyGuard_char____void_* t720 = this719;
    char** t721 = t720->_M_cur;
    char** c722 = ((void*)0);
    _Bool c723 = ((t721 != c722)) ? 1 : 0;
    if (c723) {
      char* t724 = t720->_M_first;
      char** t725 = t720->_M_cur;
      char* t726 = *t725;
      void_std___Destroy_char__(t724, t726);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_PcET1_T_T0_S2_
char* char__std____do_uninit_copy_int___int___char__(int* v727, int* v728, char* v729) {
bb730:
  int* __first731;
  int* __last732;
  char* __result733;
  char* __retval734;
  struct std___UninitDestroyGuard_char____void_ __guard735;
  __first731 = v727;
  __last732 = v728;
  __result733 = v729;
  std___UninitDestroyGuard_char___void____UninitDestroyGuard(&__guard735, &__result733);
      while (1) {
        int* t737 = __first731;
        int* t738 = __last732;
        _Bool c739 = ((t737 != t738)) ? 1 : 0;
        if (!c739) break;
        char* t740 = __result733;
        int* t741 = __first731;
        void_std___Construct_char__int__(t740, t741);
      for_step736: ;
        int* t742 = __first731;
        int c743 = 1;
        int* ptr744 = &(t742)[c743];
        __first731 = ptr744;
        char* t745 = __result733;
        int c746 = 1;
        char* ptr747 = &(t745)[c746];
        __result733 = ptr747;
      }
    std___UninitDestroyGuard_char___void___release(&__guard735);
    char* t748 = __result733;
    __retval734 = t748;
    char* t749 = __retval734;
    char* ret_val750 = t749;
    {
      std___UninitDestroyGuard_char___void_____UninitDestroyGuard(&__guard735);
    }
    return ret_val750;
  abort();
}

// function: _ZSt18uninitialized_copyIPiPcET0_T_S3_S2_
char* char__std__uninitialized_copy_int___char__(int* v751, int* v752, char* v753) {
bb754:
  int* __first755;
  int* __last756;
  char* __result757;
  char* __retval758;
  __first755 = v751;
  __last756 = v752;
  __result757 = v753;
          int* t759 = __first755;
          int* t760 = __last756;
          char* t761 = __result757;
          char* r762 = char__std____do_uninit_copy_int___int___char__(t759, t760, t761);
          __retval758 = r762;
          char* t763 = __retval758;
          return t763;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_PccET1_T_T0_S2_RSaIT2_E
char* char__std____uninitialized_copy_a_int___int___char___char_(int* v764, int* v765, char* v766, struct std__allocator_char_* v767) {
bb768:
  int* __first769;
  int* __last770;
  char* __result771;
  struct std__allocator_char_* unnamed772;
  char* __retval773;
  __first769 = v764;
  __last770 = v765;
  __result771 = v766;
  unnamed772 = v767;
    _Bool r774 = std__is_constant_evaluated();
    if (r774) {
      int* t775 = __first769;
      int* t776 = __last770;
      char* t777 = __result771;
      char* r778 = char__std____do_uninit_copy_int___int___char__(t775, t776, t777);
      __retval773 = r778;
      char* t779 = __retval773;
      return t779;
    }
    int* t780 = __first769;
    int* t781 = __last770;
    char* t782 = __result771;
    char* r783 = char__std__uninitialized_copy_int___char__(t780, t781, t782);
    __retval773 = r783;
    char* t784 = __retval773;
    return t784;
  abort();
}

// function: _ZNSt6vectorIcSaIcEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_char__std__allocator_char______M_range_initialize_n_int___int__(struct std__vector_char__std__allocator_char__* v785, int* v786, int* v787, unsigned long v788) {
bb789:
  struct std__vector_char__std__allocator_char__* this790;
  int* __first791;
  int* __last792;
  unsigned long __n793;
  char* __start794;
  this790 = v785;
  __first791 = v786;
  __last792 = v787;
  __n793 = v788;
  struct std__vector_char__std__allocator_char__* t795 = this790;
  struct std___Vector_base_char__std__allocator_char__* base796 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  unsigned long t797 = __n793;
  struct std___Vector_base_char__std__allocator_char__* base798 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  struct std__allocator_char_* r799 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base798);
  unsigned long r800 = std__vector_char__std__allocator_char______S_check_init_len(t797, r799);
  char* r801 = std___Vector_base_char__std__allocator_char______M_allocate(base796, r800);
  __start794 = r801;
  char* t802 = __start794;
  struct std___Vector_base_char__std__allocator_char__* base803 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base804 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base803->_M_impl) + 0);
  base804->_M_finish = t802;
  struct std___Vector_base_char__std__allocator_char__* base805 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base806 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base805->_M_impl) + 0);
  base806->_M_start = t802;
  char* t807 = __start794;
  unsigned long t808 = __n793;
  char* ptr809 = &(t807)[t808];
  struct std___Vector_base_char__std__allocator_char__* base810 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base811 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base810->_M_impl) + 0);
  base811->_M_end_of_storage = ptr809;
  int* t812 = __first791;
  int* t813 = __last792;
  char* t814 = __start794;
  struct std___Vector_base_char__std__allocator_char__* base815 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  struct std__allocator_char_* r816 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base815);
  char* r817 = char__std____uninitialized_copy_a_int___int___char___char_(t812, t813, t814, r816);
  struct std___Vector_base_char__std__allocator_char__* base818 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t795 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base819 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base818->_M_impl) + 0);
  base819->_M_finish = r817;
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v820, char* v821, unsigned long v822) {
bb823:
  struct std____new_allocator_char_* this824;
  char* __p825;
  unsigned long __n826;
  this824 = v820;
  __p825 = v821;
  __n826 = v822;
  struct std____new_allocator_char_* t827 = this824;
    unsigned long c828 = 1;
    unsigned long c829 = 16;
    _Bool c830 = ((c828 > c829)) ? 1 : 0;
    if (c830) {
      char* t831 = __p825;
      void* cast832 = (void*)t831;
      unsigned long t833 = __n826;
      unsigned long c834 = 1;
      unsigned long b835 = t833 * c834;
      unsigned long c836 = 1;
      operator_delete_3(cast832, b835, c836);
      return;
    }
  char* t837 = __p825;
  void* cast838 = (void*)t837;
  unsigned long t839 = __n826;
  unsigned long c840 = 1;
  unsigned long b841 = t839 * c840;
  operator_delete_2(cast838, b841);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v842, char* v843, unsigned long v844) {
bb845:
  struct std__allocator_char_* this846;
  char* __p847;
  unsigned long __n848;
  this846 = v842;
  __p847 = v843;
  __n848 = v844;
  struct std__allocator_char_* t849 = this846;
    _Bool r850 = std____is_constant_evaluated();
    if (r850) {
      char* t851 = __p847;
      void* cast852 = (void*)t851;
      operator_delete(cast852);
      return;
    }
  struct std____new_allocator_char_* base853 = (struct std____new_allocator_char_*)((char *)t849 + 0);
  char* t854 = __p847;
  unsigned long t855 = __n848;
  std____new_allocator_char___deallocate(base853, t854, t855);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v856, char* v857, unsigned long v858) {
bb859:
  struct std__allocator_char_* __a860;
  char* __p861;
  unsigned long __n862;
  __a860 = v856;
  __p861 = v857;
  __n862 = v858;
  struct std__allocator_char_* t863 = __a860;
  char* t864 = __p861;
  unsigned long t865 = __n862;
  std__allocator_char___deallocate(t863, t864, t865);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE13_M_deallocateEPcm
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* v866, char* v867, unsigned long v868) {
bb869:
  struct std___Vector_base_char__std__allocator_char__* this870;
  char* __p871;
  unsigned long __n872;
  this870 = v866;
  __p871 = v867;
  __n872 = v868;
  struct std___Vector_base_char__std__allocator_char__* t873 = this870;
    char* t874 = __p871;
    _Bool cast875 = (_Bool)t874;
    if (cast875) {
      struct std__allocator_char_* base876 = (struct std__allocator_char_*)((char *)&(t873->_M_impl) + 0);
      char* t877 = __p871;
      unsigned long t878 = __n872;
      std__allocator_traits_std__allocator_char_____deallocate(base876, t877, t878);
    }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEED2Ev
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* v879) {
bb880:
  struct std___Vector_base_char__std__allocator_char__* this881;
  this881 = v879;
  struct std___Vector_base_char__std__allocator_char__* t882 = this881;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base883 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t882->_M_impl) + 0);
    char* t884 = base883->_M_start;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base885 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t882->_M_impl) + 0);
    char* t886 = base885->_M_end_of_storage;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base887 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t882->_M_impl) + 0);
    char* t888 = base887->_M_start;
    long diff889 = t886 - t888;
    unsigned long cast890 = (unsigned long)diff889;
    std___Vector_base_char__std__allocator_char______M_deallocate(t882, t884, cast890);
  {
    std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(&t882->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v891, struct std____new_allocator_char_* v892) {
bb893:
  struct std____new_allocator_char_* this894;
  struct std____new_allocator_char_* unnamed895;
  this894 = v891;
  unnamed895 = v892;
  struct std____new_allocator_char_* t896 = this894;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_Vector_impl_dataC2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* v897) {
bb898:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* this899;
  this899 = v897;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* t900 = this899;
  char* c901 = ((void*)0);
  t900->_M_start = c901;
  char* c902 = ((void*)0);
  t900->_M_finish = c902;
  char* c903 = ((void*)0);
  t900->_M_end_of_storage = c903;
  return;
}

// function: _ZSt10destroy_atIcEvPT_
void void_std__destroy_at_char_(char* v904) {
bb905:
  char* __location906;
  __location906 = v904;
  return;
}

// function: _ZSt8_DestroyIPcEvT_S1_
void void_std___Destroy_char__(char* v907, char* v908) {
bb909:
  char* __first910;
  char* __last911;
  __first910 = v907;
  __last911 = v908;
      _Bool r912 = std____is_constant_evaluated();
      if (r912) {
          while (1) {
            char* t914 = __first910;
            char* t915 = __last911;
            _Bool c916 = ((t914 != t915)) ? 1 : 0;
            if (!c916) break;
            char* t917 = __first910;
            void_std__destroy_at_char_(t917);
          for_step913: ;
            char* t918 = __first910;
            int c919 = 1;
            char* ptr920 = &(t918)[c919];
            __first910 = ptr920;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPccEvT_S1_RSaIT0_E
void void_std___Destroy_char___char_(char* v921, char* v922, struct std__allocator_char_* v923) {
bb924:
  char* __first925;
  char* __last926;
  struct std__allocator_char_* unnamed927;
  __first925 = v921;
  __last926 = v922;
  unnamed927 = v923;
  char* t928 = __first925;
  char* t929 = __last926;
  void_std___Destroy_char__(t928, t929);
  return;
}

