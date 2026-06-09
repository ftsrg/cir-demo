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
char __const_main_mychars[6] = {97, 98, 99, 65, 66, 67};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "*it == 'A'";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm5_char/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = "first match is: ";
char _str_3[11] = "*it == 'a'";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
extern int tolower(int p0);
_Bool comp_case_insensitive(char p0, char p1);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std__vector_char__std__allocator_char_____vector_char___void_(struct std__vector_char__std__allocator_char__* p0, char* p1, char* p2, struct std__allocator_char_* p3);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, int* p2, int* p3);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, int* p2, int* p3, void* p4);
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0, struct std__allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0, struct std__allocator_char_* p1);
long _ZNKSt6ranges13__distance_fnclIRPcTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, char** p1, char* p2);
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
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
void void_std___Construct_char__char__(char* p0, char* p1);
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* p0);
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0);
char* char__std____do_uninit_copy_char___char___char__(char* p0, char* p1, char* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* char__std____niter_base_char__(char* p0);
char* char__std__uninitialized_copy_char___char__(char* p0, char* p1, char* p2);
char* char__std____uninitialized_copy_a_char___char___char___char_(char* p0, char* p1, char* p2, struct std__allocator_char_* p3);
void void_std__vector_char__std__allocator_char______M_range_initialize_n_char___char__(struct std__vector_char__std__allocator_char__* p0, char* p1, char* p2, unsigned long p3);
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

// function: _ZNSt6vectorIcSaIcEEC2IPcvEET_S4_RKS0_
void std__vector_char__std__allocator_char_____vector_char___void_(struct std__vector_char__std__allocator_char__* v19, char* v20, char* v21, struct std__allocator_char_* v22) {
bb23:
  struct std__vector_char__std__allocator_char__* this24;
  char* __first25;
  char* __last26;
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
      char* t32 = __last26;
      long r33 = _ZNKSt6ranges13__distance_fnclIRPcTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first25, t32);
      unsigned long cast34 = (unsigned long)r33;
      __n31 = cast34;
      char* t35 = __first25;
      char* t36 = __last26;
      unsigned long t37 = __n31;
      void_std__vector_char__std__allocator_char______M_range_initialize_n_char___char__(t28, t35, t36, t37);
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

// function: _Z13find_first_ofIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEiET_S7_S7_PT0_S9_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v57, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v58, int* v59, int* v60) {
bb61:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ first162;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ last163;
  int* first264;
  int* last265;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval66;
  first162 = v57;
  last163 = v58;
  first264 = v59;
  last265 = v60;
    while (1) {
      _Bool r68 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first162, &last163);
      _Bool u69 = !r68;
      if (!u69) break;
        int* it70;
        int* t71 = first264;
        it70 = t71;
        while (1) {
          int* t73 = it70;
          int* t74 = last265;
          _Bool c75 = ((t73 != t74)) ? 1 : 0;
          if (!c75) break;
            int* t76 = it70;
            int t77 = *t76;
            char* r78 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&first162);
            char t79 = *r78;
            int cast80 = (int)t79;
            _Bool c81 = ((t77 == cast80)) ? 1 : 0;
            if (c81) {
              __retval66 = first162; // copy
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t82 = __retval66;
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ret_val83 = t82;
              return ret_val83;
            }
        for_step72: ;
          int* t84 = it70;
          int c85 = 1;
          int* ptr86 = &(t84)[c85];
          it70 = ptr86;
        }
    for_step67: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r87 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&first162);
    }
  __retval66 = last163; // copy
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEdeEv
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v123) {
bb124:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this125;
  char* __retval126;
  this125 = v123;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t127 = this125;
  char* t128 = t127->_M_current;
  __retval126 = t128;
  char* t129 = __retval126;
  return t129;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v130) {
bb131:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this132;
  char** __retval133;
  this132 = v130;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t134 = this132;
  __retval133 = &t134->_M_current;
  char** t135 = __retval133;
  return t135;
}

// function: _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v136, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v137) {
bb138:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __lhs139;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __rhs140;
  _Bool __retval141;
  __lhs139 = v136;
  __rhs140 = v137;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t142 = __lhs139;
  char** r143 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t142);
  char* t144 = *r143;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t145 = __rhs140;
  char** r146 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t145);
  char* t147 = *r146;
  _Bool c148 = ((t144 == t147)) ? 1 : 0;
  __retval141 = c148;
  _Bool t149 = __retval141;
  return t149;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v150) {
bb151:
  struct std__ios_base* this152;
  long __retval153;
  this152 = v150;
  struct std__ios_base* t154 = this152;
  long t155 = t154->_M_width;
  __retval153 = t155;
  long t156 = __retval153;
  return t156;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v157, char v158) {
bb159:
  struct std__basic_ostream_char__std__char_traits_char__* __out160;
  char __c161;
  struct std__basic_ostream_char__std__char_traits_char__* __retval162;
  __out160 = v157;
  __c161 = v158;
    struct std__basic_ostream_char__std__char_traits_char__* t163 = __out160;
    void** v164 = (void**)t163;
    void* v165 = *((void**)v164);
    unsigned char* cast166 = (unsigned char*)v165;
    long c167 = -24;
    unsigned char* ptr168 = &(cast166)[c167];
    long* cast169 = (long*)ptr168;
    long t170 = *cast169;
    unsigned char* cast171 = (unsigned char*)t163;
    unsigned char* ptr172 = &(cast171)[t170];
    struct std__basic_ostream_char__std__char_traits_char__* cast173 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr172;
    struct std__ios_base* cast174 = (struct std__ios_base*)cast173;
    long r175 = std__ios_base__width___const(cast174);
    long c176 = 0;
    _Bool c177 = ((r175 != c176)) ? 1 : 0;
    if (c177) {
      struct std__basic_ostream_char__std__char_traits_char__* t178 = __out160;
      long c179 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r180 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t178, &__c161, c179);
      __retval162 = r180;
      struct std__basic_ostream_char__std__char_traits_char__* t181 = __retval162;
      return t181;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __out160;
  char t183 = __c161;
  struct std__basic_ostream_char__std__char_traits_char__* r184 = std__ostream__put(t182, t183);
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __out160;
  __retval162 = t185;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval162;
  return t186;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v187, int v188) {
bb189:
  int __a190;
  int __b191;
  int __retval192;
  __a190 = v187;
  __b191 = v188;
  int t193 = __a190;
  int t194 = __b191;
  int b195 = t193 | t194;
  __retval192 = b195;
  int t196 = __retval192;
  return t196;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v197) {
bb198:
  struct std__basic_ios_char__std__char_traits_char__* this199;
  int __retval200;
  this199 = v197;
  struct std__basic_ios_char__std__char_traits_char__* t201 = this199;
  struct std__ios_base* base202 = (struct std__ios_base*)((char *)t201 + 0);
  int t203 = base202->_M_streambuf_state;
  __retval200 = t203;
  int t204 = __retval200;
  return t204;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v205, int v206) {
bb207:
  struct std__basic_ios_char__std__char_traits_char__* this208;
  int __state209;
  this208 = v205;
  __state209 = v206;
  struct std__basic_ios_char__std__char_traits_char__* t210 = this208;
  int r211 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t210);
  int t212 = __state209;
  int r213 = std__operator_(r211, t212);
  std__basic_ios_char__std__char_traits_char_____clear(t210, r213);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v214, char* v215) {
bb216:
  char* __c1217;
  char* __c2218;
  _Bool __retval219;
  __c1217 = v214;
  __c2218 = v215;
  char* t220 = __c1217;
  char t221 = *t220;
  int cast222 = (int)t221;
  char* t223 = __c2218;
  char t224 = *t223;
  int cast225 = (int)t224;
  _Bool c226 = ((cast222 == cast225)) ? 1 : 0;
  __retval219 = c226;
  _Bool t227 = __retval219;
  return t227;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v228) {
bb229:
  char* __p230;
  unsigned long __retval231;
  unsigned long __i232;
  __p230 = v228;
  unsigned long c233 = 0;
  __i232 = c233;
    char ref_tmp0234;
    while (1) {
      unsigned long t235 = __i232;
      char* t236 = __p230;
      char* ptr237 = &(t236)[t235];
      char c238 = 0;
      ref_tmp0234 = c238;
      _Bool r239 = __gnu_cxx__char_traits_char___eq(ptr237, &ref_tmp0234);
      _Bool u240 = !r239;
      if (!u240) break;
      unsigned long t241 = __i232;
      unsigned long u242 = t241 + 1;
      __i232 = u242;
    }
  unsigned long t243 = __i232;
  __retval231 = t243;
  unsigned long t244 = __retval231;
  return t244;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v245) {
bb246:
  char* __s247;
  unsigned long __retval248;
  __s247 = v245;
    _Bool r249 = std____is_constant_evaluated();
    if (r249) {
      char* t250 = __s247;
      unsigned long r251 = __gnu_cxx__char_traits_char___length(t250);
      __retval248 = r251;
      unsigned long t252 = __retval248;
      return t252;
    }
  char* t253 = __s247;
  unsigned long r254 = strlen(t253);
  __retval248 = r254;
  unsigned long t255 = __retval248;
  return t255;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v256, char* v257) {
bb258:
  struct std__basic_ostream_char__std__char_traits_char__* __out259;
  char* __s260;
  struct std__basic_ostream_char__std__char_traits_char__* __retval261;
  __out259 = v256;
  __s260 = v257;
    char* t262 = __s260;
    _Bool cast263 = (_Bool)t262;
    _Bool u264 = !cast263;
    if (u264) {
      struct std__basic_ostream_char__std__char_traits_char__* t265 = __out259;
      void** v266 = (void**)t265;
      void* v267 = *((void**)v266);
      unsigned char* cast268 = (unsigned char*)v267;
      long c269 = -24;
      unsigned char* ptr270 = &(cast268)[c269];
      long* cast271 = (long*)ptr270;
      long t272 = *cast271;
      unsigned char* cast273 = (unsigned char*)t265;
      unsigned char* ptr274 = &(cast273)[t272];
      struct std__basic_ostream_char__std__char_traits_char__* cast275 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr274;
      struct std__basic_ios_char__std__char_traits_char__* cast276 = (struct std__basic_ios_char__std__char_traits_char__*)cast275;
      int t277 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast276, t277);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t278 = __out259;
      char* t279 = __s260;
      char* t280 = __s260;
      unsigned long r281 = std__char_traits_char___length(t280);
      long cast282 = (long)r281;
      struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t278, t279, cast282);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t284 = __out259;
  __retval261 = t284;
  struct std__basic_ostream_char__std__char_traits_char__* t285 = __retval261;
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

// function: _Z13find_first_ofIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEiPFbccEET_S9_S9_PT0_SB_T1_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v367, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v368, int* v369, int* v370, void* v371) {
bb372:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ first1373;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ last1374;
  int* first2375;
  int* last2376;
  void* pred377;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval378;
  first1373 = v367;
  last1374 = v368;
  first2375 = v369;
  last2376 = v370;
  pred377 = v371;
    while (1) {
      _Bool r380 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first1373, &last1374);
      _Bool u381 = !r380;
      if (!u381) break;
        int* it382;
        int* t383 = first2375;
        it382 = t383;
        while (1) {
          int* t385 = it382;
          int* t386 = last2376;
          _Bool c387 = ((t385 != t386)) ? 1 : 0;
          if (!c387) break;
            void* t388 = pred377;
            int* t389 = it382;
            int t390 = *t389;
            char cast391 = (char)t390;
            char* r392 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&first1373);
            char t393 = *r392;
            _Bool r394 = ((_Bool (*)(char, char))t388)(cast391, t393);
            if (r394) {
              __retval378 = first1373; // copy
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t395 = __retval378;
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ret_val396 = t395;
              return ret_val396;
            }
        for_step384: ;
          int* t397 = it382;
          int c398 = 1;
          int* ptr399 = &(t397)[c398];
          it382 = ptr399;
        }
    for_step379: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r400 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&first1373);
    }
  __retval378 = last1374; // copy
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
  char mychars417[6];
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
  char* cast429 = (char*)&(mychars417);
  char* cast430 = (char*)&(mychars417);
  int c431 = 6;
  char* ptr432 = &(cast430)[c431];
  std__allocator_char___allocator_2(&ref_tmp0419);
    std__vector_char__std__allocator_char_____vector_char___void_(&myvector418, cast429, ptr432, &ref_tmp0419);
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
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r441 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int_(t439, t440, cast435, ptr438);
    ref_tmp1422 = r441;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r442 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(&it420, &ref_tmp1422);
    char* r443 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
    char t444 = *r443;
    int cast445 = (int)t444;
    int c446 = 65;
    _Bool c447 = ((cast445 == c446)) ? 1 : 0;
    if (c447) {
    } else {
      char* cast448 = (char*)&(_str);
      char* c449 = _str_1;
      unsigned int c450 = 67;
      char* cast451 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast448, c449, c450, cast451);
    }
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp2452;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r453 = std__vector_char__std__allocator_char_____end(&myvector418);
      ref_tmp2452 = r453;
      _Bool r454 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it420, &ref_tmp2452);
      _Bool u455 = !r454;
      if (u455) {
        char* cast456 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r457 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast456);
        char* r458 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
        char t459 = *r458;
        struct std__basic_ostream_char__std__char_traits_char__* r460 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r457, t459);
        struct std__basic_ostream_char__std__char_traits_char__* r461 = std__ostream__operator___std__ostream_____(r460, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r462 = std__vector_char__std__allocator_char_____begin(&myvector418);
    agg_tmp2426 = r462;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r463 = std__vector_char__std__allocator_char_____end(&myvector418);
    agg_tmp3427 = r463;
    int* cast464 = (int*)&(match421);
    int* cast465 = (int*)&(match421);
    int c466 = 3;
    int* ptr467 = &(cast465)[c466];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t468 = agg_tmp2426;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t469 = agg_tmp3427;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r470 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(t468, t469, cast464, ptr467, &comp_case_insensitive);
    ref_tmp3425 = r470;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r471 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(&it420, &ref_tmp3425);
    char* r472 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
    char t473 = *r472;
    int cast474 = (int)t473;
    int c475 = 97;
    _Bool c476 = ((cast474 == c475)) ? 1 : 0;
    if (c476) {
    } else {
      char* cast477 = (char*)&(_str_3);
      char* c478 = _str_1;
      unsigned int c479 = 74;
      char* cast480 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast477, c478, c479, cast480);
    }
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp4481;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r482 = std__vector_char__std__allocator_char_____end(&myvector418);
      ref_tmp4481 = r482;
      _Bool r483 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it420, &ref_tmp4481);
      _Bool u484 = !r483;
      if (u484) {
        char* cast485 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r486 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast485);
        char* r487 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
        char t488 = *r487;
        struct std__basic_ostream_char__std__char_traits_char__* r489 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r486, t488);
        struct std__basic_ostream_char__std__char_traits_char__* r490 = std__ostream__operator___std__ostream_____(r489, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    int c491 = 0;
    __retval416 = c491;
    int t492 = __retval416;
    int ret_val493 = t492;
    {
      std__vector_char__std__allocator_char______vector(&myvector418);
    }
    return ret_val493;
  int t494 = __retval416;
  return t494;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v495) {
bb496:
  struct std____new_allocator_char_* this497;
  this497 = v495;
  struct std____new_allocator_char_* t498 = this497;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v499, struct std__allocator_char_* v500) {
bb501:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this502;
  struct std__allocator_char_* __a503;
  this502 = v499;
  __a503 = v500;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t504 = this502;
  struct std__allocator_char_* base505 = (struct std__allocator_char_*)((char *)t504 + 0);
  struct std__allocator_char_* t506 = __a503;
  std__allocator_char___allocator(base505, t506);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base507 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)t504 + 0);
    std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(base507);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implD2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v508) {
bb509:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this510;
  this510 = v508;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t511 = this510;
  {
    struct std__allocator_char_* base512 = (struct std__allocator_char_*)((char *)t511 + 0);
    std__allocator_char____allocator(base512);
  }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEEC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* v513, struct std__allocator_char_* v514) {
bb515:
  struct std___Vector_base_char__std__allocator_char__* this516;
  struct std__allocator_char_* __a517;
  this516 = v513;
  __a517 = v514;
  struct std___Vector_base_char__std__allocator_char__* t518 = this516;
  struct std__allocator_char_* t519 = __a517;
  std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(&t518->_M_impl, t519);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPcTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPcTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v520, char** v521, char* v522) {
bb523:
  struct std__ranges____distance_fn* this524;
  char** __first525;
  char* __last526;
  long __retval527;
  this524 = v520;
  __first525 = v521;
  __last526 = v522;
  struct std__ranges____distance_fn* t528 = this524;
  char* t529 = __last526;
  char** t530 = __first525;
  char* t531 = *t530;
  long diff532 = t529 - t531;
  __retval527 = diff532;
  long t533 = __retval527;
  return t533;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb534:
  _Bool __retval535;
    _Bool c536 = 0;
    __retval535 = c536;
    _Bool t537 = __retval535;
    return t537;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v538) {
bb539:
  struct std____new_allocator_char_* this540;
  unsigned long __retval541;
  this540 = v538;
  struct std____new_allocator_char_* t542 = this540;
  unsigned long c543 = 9223372036854775807;
  unsigned long c544 = 1;
  unsigned long b545 = c543 / c544;
  __retval541 = b545;
  unsigned long t546 = __retval541;
  return t546;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v547, unsigned long v548, void* v549) {
bb550:
  struct std____new_allocator_char_* this551;
  unsigned long __n552;
  void* unnamed553;
  char* __retval554;
  this551 = v547;
  __n552 = v548;
  unnamed553 = v549;
  struct std____new_allocator_char_* t555 = this551;
    unsigned long t556 = __n552;
    unsigned long r557 = std____new_allocator_char____M_max_size___const(t555);
    _Bool c558 = ((t556 > r557)) ? 1 : 0;
    if (c558) {
        unsigned long t559 = __n552;
        unsigned long c560 = -1;
        unsigned long c561 = 1;
        unsigned long b562 = c560 / c561;
        _Bool c563 = ((t559 > b562)) ? 1 : 0;
        if (c563) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c564 = 1;
    unsigned long c565 = 16;
    _Bool c566 = ((c564 > c565)) ? 1 : 0;
    if (c566) {
      unsigned long __al567;
      unsigned long c568 = 1;
      __al567 = c568;
      unsigned long t569 = __n552;
      unsigned long c570 = 1;
      unsigned long b571 = t569 * c570;
      unsigned long t572 = __al567;
      void* r573 = operator_new_2(b571, t572);
      char* cast574 = (char*)r573;
      __retval554 = cast574;
      char* t575 = __retval554;
      return t575;
    }
  unsigned long t576 = __n552;
  unsigned long c577 = 1;
  unsigned long b578 = t576 * c577;
  void* r579 = operator_new(b578);
  char* cast580 = (char*)r579;
  __retval554 = cast580;
  char* t581 = __retval554;
  return t581;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v582, unsigned long v583) {
bb584:
  struct std__allocator_char_* this585;
  unsigned long __n586;
  char* __retval587;
  this585 = v582;
  __n586 = v583;
  struct std__allocator_char_* t588 = this585;
    _Bool r589 = std____is_constant_evaluated();
    if (r589) {
        unsigned long t590 = __n586;
        unsigned long c591 = 1;
        unsigned long ovr592;
        _Bool ovf593 = __builtin_mul_overflow(t590, c591, &ovr592);
        __n586 = ovr592;
        if (ovf593) {
          std____throw_bad_array_new_length();
        }
      unsigned long t594 = __n586;
      void* r595 = operator_new(t594);
      char* cast596 = (char*)r595;
      __retval587 = cast596;
      char* t597 = __retval587;
      return t597;
    }
  struct std____new_allocator_char_* base598 = (struct std____new_allocator_char_*)((char *)t588 + 0);
  unsigned long t599 = __n586;
  void* c600 = ((void*)0);
  char* r601 = std____new_allocator_char___allocate(base598, t599, c600);
  __retval587 = r601;
  char* t602 = __retval587;
  return t602;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v603, unsigned long v604) {
bb605:
  struct std__allocator_char_* __a606;
  unsigned long __n607;
  char* __retval608;
  __a606 = v603;
  __n607 = v604;
  struct std__allocator_char_* t609 = __a606;
  unsigned long t610 = __n607;
  char* r611 = std__allocator_char___allocate(t609, t610);
  __retval608 = r611;
  char* t612 = __retval608;
  return t612;
}

// function: _ZNSt12_Vector_baseIcSaIcEE11_M_allocateEm
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* v613, unsigned long v614) {
bb615:
  struct std___Vector_base_char__std__allocator_char__* this616;
  unsigned long __n617;
  char* __retval618;
  this616 = v613;
  __n617 = v614;
  struct std___Vector_base_char__std__allocator_char__* t619 = this616;
  unsigned long t620 = __n617;
  unsigned long c621 = 0;
  _Bool c622 = ((t620 != c621)) ? 1 : 0;
  char* ternary623;
  if (c622) {
    struct std__allocator_char_* base624 = (struct std__allocator_char_*)((char *)&(t619->_M_impl) + 0);
    unsigned long t625 = __n617;
    char* r626 = std__allocator_traits_std__allocator_char_____allocate(base624, t625);
    ternary623 = (char*)r626;
  } else {
    char* c627 = ((void*)0);
    ternary623 = (char*)c627;
  }
  __retval618 = ternary623;
  char* t628 = __retval618;
  return t628;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v629, unsigned long* v630) {
bb631:
  unsigned long* __a632;
  unsigned long* __b633;
  unsigned long* __retval634;
  __a632 = v629;
  __b633 = v630;
    unsigned long* t635 = __b633;
    unsigned long t636 = *t635;
    unsigned long* t637 = __a632;
    unsigned long t638 = *t637;
    _Bool c639 = ((t636 < t638)) ? 1 : 0;
    if (c639) {
      unsigned long* t640 = __b633;
      __retval634 = t640;
      unsigned long* t641 = __retval634;
      return t641;
    }
  unsigned long* t642 = __a632;
  __retval634 = t642;
  unsigned long* t643 = __retval634;
  return t643;
}

// function: _ZNSt6vectorIcSaIcEE11_S_max_sizeERKS0_
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* v644) {
bb645:
  struct std__allocator_char_* __a646;
  unsigned long __retval647;
  unsigned long __diffmax648;
  unsigned long __allocmax649;
  __a646 = v644;
  unsigned long c650 = 9223372036854775807;
  __diffmax648 = c650;
  unsigned long c651 = -1;
  __allocmax649 = c651;
  unsigned long* r652 = unsigned_long_const__std__min_unsigned_long_(&__diffmax648, &__allocmax649);
  unsigned long t653 = *r652;
  __retval647 = t653;
  unsigned long t654 = __retval647;
  return t654;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v655, struct std__allocator_char_* v656) {
bb657:
  struct std__allocator_char_* this658;
  struct std__allocator_char_* __a659;
  this658 = v655;
  __a659 = v656;
  struct std__allocator_char_* t660 = this658;
  struct std____new_allocator_char_* base661 = (struct std____new_allocator_char_*)((char *)t660 + 0);
  struct std__allocator_char_* t662 = __a659;
  struct std____new_allocator_char_* base663 = (struct std____new_allocator_char_*)((char *)t662 + 0);
  std____new_allocator_char_____new_allocator(base661, base663);
  return;
}

// function: _ZNSt6vectorIcSaIcEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long v664, struct std__allocator_char_* v665) {
bb666:
  unsigned long __n667;
  struct std__allocator_char_* __a668;
  unsigned long __retval669;
  __n667 = v664;
  __a668 = v665;
    struct std__allocator_char_ ref_tmp0670;
    _Bool tmp_exprcleanup671;
    unsigned long t672 = __n667;
    struct std__allocator_char_* t673 = __a668;
    std__allocator_char___allocator(&ref_tmp0670, t673);
      unsigned long r674 = std__vector_char__std__allocator_char______S_max_size(&ref_tmp0670);
      _Bool c675 = ((t672 > r674)) ? 1 : 0;
      tmp_exprcleanup671 = c675;
    {
      std__allocator_char____allocator(&ref_tmp0670);
    }
    _Bool t676 = tmp_exprcleanup671;
    if (t676) {
      char* cast677 = (char*)&(_str_4);
      std____throw_length_error(cast677);
    }
  unsigned long t678 = __n667;
  __retval669 = t678;
  unsigned long t679 = __retval669;
  return t679;
}

// function: _ZNSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* v680) {
bb681:
  struct std___Vector_base_char__std__allocator_char__* this682;
  struct std__allocator_char_* __retval683;
  this682 = v680;
  struct std___Vector_base_char__std__allocator_char__* t684 = this682;
  struct std__allocator_char_* base685 = (struct std__allocator_char_*)((char *)&(t684->_M_impl) + 0);
  __retval683 = base685;
  struct std__allocator_char_* t686 = __retval683;
  return t686;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb687:
  _Bool __retval688;
    _Bool c689 = 0;
    __retval688 = c689;
    _Bool t690 = __retval688;
    return t690;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPcvEC2ERS0_
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v691, char** v692) {
bb693:
  struct std___UninitDestroyGuard_char____void_* this694;
  char** __first695;
  this694 = v691;
  __first695 = v692;
  struct std___UninitDestroyGuard_char____void_* t696 = this694;
  char** t697 = __first695;
  char* t698 = *t697;
  t696->_M_first = t698;
  char** t699 = __first695;
  t696->_M_cur = t699;
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v700, char* v701) {
bb702:
  char* __location703;
  char* __args704;
  char* __retval705;
  void* __loc706;
  __location703 = v700;
  __args704 = v701;
  char* t707 = __location703;
  void* cast708 = (void*)t707;
  __loc706 = cast708;
    void* t709 = __loc706;
    char* cast710 = (char*)t709;
    char* t711 = __args704;
    char t712 = *t711;
    *cast710 = t712;
    __retval705 = cast710;
    char* t713 = __retval705;
    return t713;
  abort();
}

// function: _ZSt10_ConstructIcJRcEEvPT_DpOT0_
void void_std___Construct_char__char__(char* v714, char* v715) {
bb716:
  char* __p717;
  char* __args718;
  __p717 = v714;
  __args718 = v715;
    _Bool r719 = std____is_constant_evaluated();
    if (r719) {
      char* t720 = __p717;
      char* t721 = __args718;
      char* r722 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t720, t721);
      return;
    }
  char* t723 = __p717;
  void* cast724 = (void*)t723;
  char* cast725 = (char*)cast724;
  char* t726 = __args718;
  char t727 = *t726;
  *cast725 = t727;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvE7releaseEv
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* v728) {
bb729:
  struct std___UninitDestroyGuard_char____void_* this730;
  this730 = v728;
  struct std___UninitDestroyGuard_char____void_* t731 = this730;
  char** c732 = ((void*)0);
  t731->_M_cur = c732;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvED2Ev
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v733) {
bb734:
  struct std___UninitDestroyGuard_char____void_* this735;
  this735 = v733;
  struct std___UninitDestroyGuard_char____void_* t736 = this735;
    char** t737 = t736->_M_cur;
    char** c738 = ((void*)0);
    _Bool c739 = ((t737 != c738)) ? 1 : 0;
    if (c739) {
      char* t740 = t736->_M_first;
      char** t741 = t736->_M_cur;
      char* t742 = *t741;
      void_std___Destroy_char__(t740, t742);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPcS0_S0_ET1_T_T0_S1_
char* char__std____do_uninit_copy_char___char___char__(char* v743, char* v744, char* v745) {
bb746:
  char* __first747;
  char* __last748;
  char* __result749;
  char* __retval750;
  struct std___UninitDestroyGuard_char____void_ __guard751;
  __first747 = v743;
  __last748 = v744;
  __result749 = v745;
  std___UninitDestroyGuard_char___void____UninitDestroyGuard(&__guard751, &__result749);
      while (1) {
        char* t753 = __first747;
        char* t754 = __last748;
        _Bool c755 = ((t753 != t754)) ? 1 : 0;
        if (!c755) break;
        char* t756 = __result749;
        char* t757 = __first747;
        void_std___Construct_char__char__(t756, t757);
      for_step752: ;
        char* t758 = __first747;
        int c759 = 1;
        char* ptr760 = &(t758)[c759];
        __first747 = ptr760;
        char* t761 = __result749;
        int c762 = 1;
        char* ptr763 = &(t761)[c762];
        __result749 = ptr763;
      }
    std___UninitDestroyGuard_char___void___release(&__guard751);
    char* t764 = __result749;
    __retval750 = t764;
    char* t765 = __retval750;
    char* ret_val766 = t765;
    {
      std___UninitDestroyGuard_char___void_____UninitDestroyGuard(&__guard751);
    }
    return ret_val766;
  abort();
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v767) {
bb768:
  char* __it769;
  char* __retval770;
  __it769 = v767;
  char* t771 = __it769;
  __retval770 = t771;
  char* t772 = __retval770;
  return t772;
}

// function: _ZSt18uninitialized_copyIPcS0_ET0_T_S2_S1_
char* char__std__uninitialized_copy_char___char__(char* v773, char* v774, char* v775) {
bb776:
  char* __first777;
  char* __last778;
  char* __result779;
  char* __retval780;
  __first777 = v773;
  __last778 = v774;
  __result779 = v775;
      long __n781;
      char* t782 = __last778;
      char* t783 = __first777;
      long diff784 = t782 - t783;
      __n781 = diff784;
        long t785 = __n781;
        long c786 = 0;
        _Bool c787 = ((t785 > c786)) ? 1 : 0;
        if (c787) {
          char* t788 = __result779;
          char* r789 = char__std____niter_base_char__(t788);
          void* cast790 = (void*)r789;
          char* t791 = __first777;
          char* r792 = char__std____niter_base_char__(t791);
          void* cast793 = (void*)r792;
          long t794 = __n781;
          unsigned long cast795 = (unsigned long)t794;
          unsigned long c796 = 1;
          unsigned long b797 = cast795 * c796;
          void* r798 = memcpy(cast790, cast793, b797);
          long t799 = __n781;
          char* t800 = __result779;
          char* ptr801 = &(t800)[t799];
          __result779 = ptr801;
        }
      char* t802 = __result779;
      __retval780 = t802;
      char* t803 = __retval780;
      return t803;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPcS0_S0_cET1_T_T0_S1_RSaIT2_E
char* char__std____uninitialized_copy_a_char___char___char___char_(char* v804, char* v805, char* v806, struct std__allocator_char_* v807) {
bb808:
  char* __first809;
  char* __last810;
  char* __result811;
  struct std__allocator_char_* unnamed812;
  char* __retval813;
  __first809 = v804;
  __last810 = v805;
  __result811 = v806;
  unnamed812 = v807;
    _Bool r814 = std__is_constant_evaluated();
    if (r814) {
      char* t815 = __first809;
      char* t816 = __last810;
      char* t817 = __result811;
      char* r818 = char__std____do_uninit_copy_char___char___char__(t815, t816, t817);
      __retval813 = r818;
      char* t819 = __retval813;
      return t819;
    }
    char* t820 = __first809;
    char* t821 = __last810;
    char* t822 = __result811;
    char* r823 = char__std__uninitialized_copy_char___char__(t820, t821, t822);
    __retval813 = r823;
    char* t824 = __retval813;
    return t824;
  abort();
}

// function: _ZNSt6vectorIcSaIcEE21_M_range_initialize_nIPcS3_EEvT_T0_m
void void_std__vector_char__std__allocator_char______M_range_initialize_n_char___char__(struct std__vector_char__std__allocator_char__* v825, char* v826, char* v827, unsigned long v828) {
bb829:
  struct std__vector_char__std__allocator_char__* this830;
  char* __first831;
  char* __last832;
  unsigned long __n833;
  char* __start834;
  this830 = v825;
  __first831 = v826;
  __last832 = v827;
  __n833 = v828;
  struct std__vector_char__std__allocator_char__* t835 = this830;
  struct std___Vector_base_char__std__allocator_char__* base836 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  unsigned long t837 = __n833;
  struct std___Vector_base_char__std__allocator_char__* base838 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  struct std__allocator_char_* r839 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base838);
  unsigned long r840 = std__vector_char__std__allocator_char______S_check_init_len(t837, r839);
  char* r841 = std___Vector_base_char__std__allocator_char______M_allocate(base836, r840);
  __start834 = r841;
  char* t842 = __start834;
  struct std___Vector_base_char__std__allocator_char__* base843 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base844 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base843->_M_impl) + 0);
  base844->_M_finish = t842;
  struct std___Vector_base_char__std__allocator_char__* base845 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base846 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base845->_M_impl) + 0);
  base846->_M_start = t842;
  char* t847 = __start834;
  unsigned long t848 = __n833;
  char* ptr849 = &(t847)[t848];
  struct std___Vector_base_char__std__allocator_char__* base850 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base851 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base850->_M_impl) + 0);
  base851->_M_end_of_storage = ptr849;
  char* t852 = __first831;
  char* t853 = __last832;
  char* t854 = __start834;
  struct std___Vector_base_char__std__allocator_char__* base855 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  struct std__allocator_char_* r856 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base855);
  char* r857 = char__std____uninitialized_copy_a_char___char___char___char_(t852, t853, t854, r856);
  struct std___Vector_base_char__std__allocator_char__* base858 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t835 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base859 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base858->_M_impl) + 0);
  base859->_M_finish = r857;
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v860, char* v861, unsigned long v862) {
bb863:
  struct std____new_allocator_char_* this864;
  char* __p865;
  unsigned long __n866;
  this864 = v860;
  __p865 = v861;
  __n866 = v862;
  struct std____new_allocator_char_* t867 = this864;
    unsigned long c868 = 1;
    unsigned long c869 = 16;
    _Bool c870 = ((c868 > c869)) ? 1 : 0;
    if (c870) {
      char* t871 = __p865;
      void* cast872 = (void*)t871;
      unsigned long t873 = __n866;
      unsigned long c874 = 1;
      unsigned long b875 = t873 * c874;
      unsigned long c876 = 1;
      operator_delete_3(cast872, b875, c876);
      return;
    }
  char* t877 = __p865;
  void* cast878 = (void*)t877;
  unsigned long t879 = __n866;
  unsigned long c880 = 1;
  unsigned long b881 = t879 * c880;
  operator_delete_2(cast878, b881);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v882, char* v883, unsigned long v884) {
bb885:
  struct std__allocator_char_* this886;
  char* __p887;
  unsigned long __n888;
  this886 = v882;
  __p887 = v883;
  __n888 = v884;
  struct std__allocator_char_* t889 = this886;
    _Bool r890 = std____is_constant_evaluated();
    if (r890) {
      char* t891 = __p887;
      void* cast892 = (void*)t891;
      operator_delete(cast892);
      return;
    }
  struct std____new_allocator_char_* base893 = (struct std____new_allocator_char_*)((char *)t889 + 0);
  char* t894 = __p887;
  unsigned long t895 = __n888;
  std____new_allocator_char___deallocate(base893, t894, t895);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v896, char* v897, unsigned long v898) {
bb899:
  struct std__allocator_char_* __a900;
  char* __p901;
  unsigned long __n902;
  __a900 = v896;
  __p901 = v897;
  __n902 = v898;
  struct std__allocator_char_* t903 = __a900;
  char* t904 = __p901;
  unsigned long t905 = __n902;
  std__allocator_char___deallocate(t903, t904, t905);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE13_M_deallocateEPcm
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* v906, char* v907, unsigned long v908) {
bb909:
  struct std___Vector_base_char__std__allocator_char__* this910;
  char* __p911;
  unsigned long __n912;
  this910 = v906;
  __p911 = v907;
  __n912 = v908;
  struct std___Vector_base_char__std__allocator_char__* t913 = this910;
    char* t914 = __p911;
    _Bool cast915 = (_Bool)t914;
    if (cast915) {
      struct std__allocator_char_* base916 = (struct std__allocator_char_*)((char *)&(t913->_M_impl) + 0);
      char* t917 = __p911;
      unsigned long t918 = __n912;
      std__allocator_traits_std__allocator_char_____deallocate(base916, t917, t918);
    }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEED2Ev
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* v919) {
bb920:
  struct std___Vector_base_char__std__allocator_char__* this921;
  this921 = v919;
  struct std___Vector_base_char__std__allocator_char__* t922 = this921;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base923 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t922->_M_impl) + 0);
    char* t924 = base923->_M_start;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base925 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t922->_M_impl) + 0);
    char* t926 = base925->_M_end_of_storage;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base927 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t922->_M_impl) + 0);
    char* t928 = base927->_M_start;
    long diff929 = t926 - t928;
    unsigned long cast930 = (unsigned long)diff929;
    std___Vector_base_char__std__allocator_char______M_deallocate(t922, t924, cast930);
  {
    std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(&t922->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v931, struct std____new_allocator_char_* v932) {
bb933:
  struct std____new_allocator_char_* this934;
  struct std____new_allocator_char_* unnamed935;
  this934 = v931;
  unnamed935 = v932;
  struct std____new_allocator_char_* t936 = this934;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_Vector_impl_dataC2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* v937) {
bb938:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* this939;
  this939 = v937;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* t940 = this939;
  char* c941 = ((void*)0);
  t940->_M_start = c941;
  char* c942 = ((void*)0);
  t940->_M_finish = c942;
  char* c943 = ((void*)0);
  t940->_M_end_of_storage = c943;
  return;
}

// function: _ZSt10destroy_atIcEvPT_
void void_std__destroy_at_char_(char* v944) {
bb945:
  char* __location946;
  __location946 = v944;
  return;
}

// function: _ZSt8_DestroyIPcEvT_S1_
void void_std___Destroy_char__(char* v947, char* v948) {
bb949:
  char* __first950;
  char* __last951;
  __first950 = v947;
  __last951 = v948;
      _Bool r952 = std____is_constant_evaluated();
      if (r952) {
          while (1) {
            char* t954 = __first950;
            char* t955 = __last951;
            _Bool c956 = ((t954 != t955)) ? 1 : 0;
            if (!c956) break;
            char* t957 = __first950;
            void_std__destroy_at_char_(t957);
          for_step953: ;
            char* t958 = __first950;
            int c959 = 1;
            char* ptr960 = &(t958)[c959];
            __first950 = ptr960;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPccEvT_S1_RSaIT0_E
void void_std___Destroy_char___char_(char* v961, char* v962, struct std__allocator_char_* v963) {
bb964:
  char* __first965;
  char* __last966;
  struct std__allocator_char_* unnamed967;
  __first965 = v961;
  __last966 = v962;
  unnamed967 = v963;
  char* t968 = __first965;
  char* t969 = __last966;
  void_std___Destroy_char__(t968, t969);
  return;
}

