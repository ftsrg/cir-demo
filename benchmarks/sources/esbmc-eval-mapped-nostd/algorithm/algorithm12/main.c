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
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
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
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
char _str[12] = "*it++ == 30";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm12/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
_Bool mypredicate(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p2);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____search_n_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int p2, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p3, struct std__random_access_iterator_tag p4);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____search_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int p2, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p3);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__search_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
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
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, unsigned long p3);
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

// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
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

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v15, int* v16, int* v17, struct std__allocator_int_* v18) {
bb19:
  struct std__vector_int__std__allocator_int__* this20;
  int* __first21;
  int* __last22;
  struct std__allocator_int_* __a23;
  this20 = v15;
  __first21 = v16;
  __last22 = v17;
  __a23 = v18;
  struct std__vector_int__std__allocator_int__* t24 = this20;
  struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
  struct std__allocator_int_* t26 = __a23;
  std___Vector_base_int__std__allocator_int______Vector_base(base25, t26);
      unsigned long __n27;
      int* t28 = __last22;
      long r29 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first21, t28);
      unsigned long cast30 = (unsigned long)r29;
      __n27 = cast30;
      int* t31 = __first21;
      int* t32 = __last22;
      unsigned long t33 = __n27;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t24, t31, t32, t33);
      {
        struct std___Vector_base_int__std__allocator_int__* base34 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base34);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v35) {
bb36:
  struct std__allocator_int_* this37;
  this37 = v35;
  struct std__allocator_int_* t38 = this37;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v39) {
bb40:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  this41 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t42 = this41;
  int* c43 = ((void*)0);
  t42->_M_current = c43;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44) {
bb45:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this46;
  int** __retval47;
  this46 = v44;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t48 = this46;
  __retval47 = &t48->_M_current;
  int** t49 = __retval47;
  return t49;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v50, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v51) {
bb52:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs54;
  _Bool __retval55;
  __lhs53 = v50;
  __rhs54 = v51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t56 = __lhs53;
  int** r57 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t56);
  int* t58 = *r57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = __rhs54;
  int** r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t59);
  int* t61 = *r60;
  _Bool c62 = ((t58 == t61)) ? 1 : 0;
  __retval55 = c62;
  _Bool t63 = __retval55;
  return t63;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v64, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v65) {
bb66:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this67;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it68;
  _Bool __retval69;
  this67 = v64;
  __it68 = v65;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t70 = this67;
  int* r71 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it68);
  int t72 = *r71;
  int* t73 = t70->_M_value;
  int t74 = *t73;
  _Bool c75 = ((t72 == t74)) ? 1 : 0;
  __retval69 = c75;
  _Bool t76 = __retval69;
  return t76;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v77) {
bb78:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this79;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval80;
  this79 = v77;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t81 = this79;
  int* t82 = t81->_M_current;
  int c83 = 1;
  int* ptr84 = &(t82)[c83];
  t81->_M_current = ptr84;
  __retval80 = t81;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t85 = __retval80;
  return t85;
}

// function: _ZSt9__find_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops16_Iter_equals_valIKiEEET_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v86, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v87, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v88) {
bb89:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first90;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last91;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred92;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval93;
  __first90 = v86;
  __last91 = v87;
  __pred92 = v88;
    while (1) {
      _Bool r94 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first90, &__last91);
      _Bool u95 = !r94;
      _Bool ternary96;
      if (u95) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp097;
        agg_tmp097 = __first90; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t98 = agg_tmp097;
        _Bool r99 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred92, t98);
        _Bool u100 = !r99;
        ternary96 = (_Bool)u100;
      } else {
        _Bool c101 = 0;
        ternary96 = (_Bool)c101;
      }
      if (!ternary96) break;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r102 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(&__first90);
    }
  __retval93 = __first90; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t103 = __retval93;
  return t103;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v104, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v105) {
bb106:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs107;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs108;
  long __retval109;
  __lhs107 = v104;
  __rhs108 = v105;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t110 = __lhs107;
  int** r111 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t110);
  int* t112 = *r111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t113 = __rhs108;
  int** r114 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t113);
  int* t115 = *r114;
  long diff116 = t112 - t115;
  __retval109 = diff116;
  long t117 = __retval109;
  return t117;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEpLEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v118, long v119) {
bb120:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this121;
  long __n122;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval123;
  this121 = v118;
  __n122 = v119;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t124 = this121;
  long t125 = __n122;
  int* t126 = t124->_M_current;
  int* ptr127 = &(t126)[t125];
  t124->_M_current = ptr127;
  __retval123 = t124;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t128 = __retval123;
  return t128;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v129) {
bb130:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this131;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval132;
  this131 = v129;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t133 = this131;
  int* t134 = t133->_M_current;
  int c135 = -1;
  int* ptr136 = &(t134)[c135];
  t133->_M_current = ptr136;
  __retval132 = t133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t137 = __retval132;
  return t137;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v138, int** v139) {
bb140:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this141;
  int** __i142;
  this141 = v138;
  __i142 = v139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t143 = this141;
  int** t144 = __i142;
  int* t145 = *t144;
  t143->_M_current = t145;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v146, long v147) {
bb148:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this149;
  long __n150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval151;
  int* ref_tmp0152;
  this149 = v146;
  __n150 = v147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t153 = this149;
  int* t154 = t153->_M_current;
  long t155 = __n150;
  long u156 = -t155;
  int* ptr157 = &(t154)[u156];
  ref_tmp0152 = ptr157;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval151, &ref_tmp0152);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t158 = __retval151;
  return t158;
}

// function: _ZSt14__search_n_auxIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiNS0_5__ops16_Iter_equals_valIKiEEET_SB_SB_T0_T1_St26random_access_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____search_n_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v159, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v160, int v161, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v162, struct std__random_access_iterator_tag v163) {
bb164:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first165;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last166;
  int __count167;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __unary_pred168;
  struct std__random_access_iterator_tag unnamed169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval170;
  long __tailSize171;
  long __remainder172;
  __first165 = v159;
  __last166 = v160;
  __count167 = v161;
  __unary_pred168 = v162;
  unnamed169 = v163;
  long r173 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last166, &__first165);
  __tailSize171 = r173;
  int t174 = __count167;
  long cast175 = (long)t174;
  __remainder172 = cast175;
    while (1) {
      long t176 = __remainder172;
      long t177 = __tailSize171;
      _Bool c178 = ((t176 <= t177)) ? 1 : 0;
      if (!c178) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __backTrack179;
        long t180 = __remainder172;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r181 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first165, t180);
        long t182 = __remainder172;
        long t183 = __tailSize171;
        long b184 = t183 - t182;
        __tailSize171 = b184;
        __backTrack179 = __first165; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0185;
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r186 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__backTrack179);
            agg_tmp0185 = *r186; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t187 = agg_tmp0185;
            _Bool r188 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__unary_pred168, t187);
            if (!r188) break;
                long t189 = __remainder172;
                long u190 = t189 - 1;
                __remainder172 = u190;
                long c191 = 0;
                _Bool c192 = ((u190 == c191)) ? 1 : 0;
                if (c192) {
                  int t193 = __count167;
                  long cast194 = (long)t193;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r195 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, cast194);
                  __retval170 = r195;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t196 = __retval170;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val197 = t196;
                  return ret_val197;
                }
          }
        int t198 = __count167;
        int c199 = 1;
        int b200 = t198 + c199;
        long cast201 = (long)b200;
        long r202 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__first165, &__backTrack179);
        long b203 = cast201 - r202;
        __remainder172 = b203;
    }
  __retval170 = __last166; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t204 = __retval170;
  return t204;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v205) {
bb206:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed207;
  struct std__random_access_iterator_tag __retval208;
  unnamed207 = v205;
  struct std__random_access_iterator_tag t209 = __retval208;
  return t209;
}

// function: _ZSt10__search_nIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiNS0_5__ops16_Iter_equals_valIKiEEET_SB_SB_T0_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____search_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v210, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v211, int v212, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v213) {
bb214:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last216;
  int __count217;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __unary_pred218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4221;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp5222;
  struct std__random_access_iterator_tag agg_tmp6223;
  __first215 = v210;
  __last216 = v211;
  __count217 = v212;
  __unary_pred218 = v213;
    int t224 = __count217;
    int c225 = 0;
    _Bool c226 = ((t224 <= c225)) ? 1 : 0;
    if (c226) {
      __retval219 = __first215; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t227 = __retval219;
      return t227;
    }
    int t228 = __count217;
    int c229 = 1;
    _Bool c230 = ((t228 == c229)) ? 1 : 0;
    if (c230) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0231;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1232;
      struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp2233;
      agg_tmp0231 = __first215; // copy
      agg_tmp1232 = __last216; // copy
      agg_tmp2233 = __unary_pred218; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t234 = agg_tmp0231;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t235 = agg_tmp1232;
      struct __gnu_cxx____ops___Iter_equals_val_const_int_ t236 = agg_tmp2233;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r237 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t234, t235, t236);
      __retval219 = r237;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t238 = __retval219;
      return t238;
    }
  agg_tmp3220 = __first215; // copy
  agg_tmp4221 = __last216; // copy
  int t239 = __count217;
  agg_tmp5222 = __unary_pred218; // copy
  struct std__random_access_iterator_tag r240 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first215);
  agg_tmp6223 = r240;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t241 = agg_tmp3220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t242 = agg_tmp4221;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t243 = agg_tmp5222;
  struct std__random_access_iterator_tag t244 = agg_tmp6223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r245 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____search_n_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_equals_val_int_const___(t241, t242, t239, t243, t244);
  __retval219 = r245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t246 = __retval219;
  return t246;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v247, int* v248) {
bb249:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this250;
  int* __value251;
  this250 = v247;
  __value251 = v248;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t252 = this250;
  int* t253 = __value251;
  t252->_M_value = t253;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v254) {
bb255:
  int* __val256;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval257;
  __val256 = v254;
  int* t258 = __val256;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval257, t258);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t259 = __retval257;
  return t259;
}

// function: _ZSt8search_nIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiiET_S7_S7_T0_RKT1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__search_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v260, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v261, int v262, int* v263) {
bb264:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last266;
  int __count267;
  int* __val268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval269;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1271;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp2272;
  __first265 = v260;
  __last266 = v261;
  __count267 = v262;
  __val268 = v263;
  agg_tmp0270 = __first265; // copy
  agg_tmp1271 = __last266; // copy
  int t273 = __count267;
  int* t274 = __val268;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r275 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t274);
  agg_tmp2272 = r275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t276 = agg_tmp0270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t277 = agg_tmp1271;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t278 = agg_tmp2272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r279 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____search_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____ops___Iter_equals_val_int_const___(t276, t277, t273, t278);
  __retval269 = r279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t280 = __retval269;
  return t280;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v281) {
bb282:
  struct std__vector_int__std__allocator_int__* this283;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval284;
  this283 = v281;
  struct std__vector_int__std__allocator_int__* t285 = this283;
  struct std___Vector_base_int__std__allocator_int__* base286 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t285 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base287 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base286->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval284, &base287->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t288 = __retval284;
  return t288;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v289) {
bb290:
  struct std__vector_int__std__allocator_int__* this291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval292;
  this291 = v289;
  struct std__vector_int__std__allocator_int__* t293 = this291;
  struct std___Vector_base_int__std__allocator_int__* base294 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t293 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base295 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base294->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval292, &base295->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t296 = __retval292;
  return t296;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v297, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v298) {
bb299:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed301;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval302;
  this300 = v297;
  unnamed301 = v298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t303 = this300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t304 = unnamed301;
  int* t305 = t304->_M_current;
  t303->_M_current = t305;
  __retval302 = t303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t306 = __retval302;
  return t306;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v307, int v308) {
bb309:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this310;
  int unnamed311;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval312;
  int* ref_tmp0313;
  this310 = v307;
  unnamed311 = v308;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t314 = this310;
  int* t315 = t314->_M_current;
  int c316 = 1;
  int* ptr317 = &(t315)[c316];
  t314->_M_current = ptr317;
  ref_tmp0313 = t315;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval312, &ref_tmp0313);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t318 = __retval312;
  return t318;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v319) {
bb320:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this321;
  int* __retval322;
  this321 = v319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t323 = this321;
  int* t324 = t323->_M_current;
  __retval322 = t324;
  int* t325 = __retval322;
  return t325;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v326, void* v327) {
bb328:
  struct std__basic_ostream_char__std__char_traits_char__* this329;
  void* __pf330;
  struct std__basic_ostream_char__std__char_traits_char__* __retval331;
  this329 = v326;
  __pf330 = v327;
  struct std__basic_ostream_char__std__char_traits_char__* t332 = this329;
  void* t333 = __pf330;
  struct std__basic_ostream_char__std__char_traits_char__* r334 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t333)(t332);
  __retval331 = r334;
  struct std__basic_ostream_char__std__char_traits_char__* t335 = __retval331;
  return t335;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v336) {
bb337:
  struct std__basic_ostream_char__std__char_traits_char__* __os338;
  struct std__basic_ostream_char__std__char_traits_char__* __retval339;
  __os338 = v336;
  struct std__basic_ostream_char__std__char_traits_char__* t340 = __os338;
  struct std__basic_ostream_char__std__char_traits_char__* r341 = std__ostream__flush(t340);
  __retval339 = r341;
  struct std__basic_ostream_char__std__char_traits_char__* t342 = __retval339;
  return t342;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v343) {
bb344:
  struct std__ctype_char_* __f345;
  struct std__ctype_char_* __retval346;
  __f345 = v343;
    struct std__ctype_char_* t347 = __f345;
    _Bool cast348 = (_Bool)t347;
    _Bool u349 = !cast348;
    if (u349) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t350 = __f345;
  __retval346 = t350;
  struct std__ctype_char_* t351 = __retval346;
  return t351;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v352, char v353) {
bb354:
  struct std__ctype_char_* this355;
  char __c356;
  char __retval357;
  this355 = v352;
  __c356 = v353;
  struct std__ctype_char_* t358 = this355;
    char t359 = t358->_M_widen_ok;
    _Bool cast360 = (_Bool)t359;
    if (cast360) {
      char t361 = __c356;
      unsigned char cast362 = (unsigned char)t361;
      unsigned long cast363 = (unsigned long)cast362;
      char t364 = t358->_M_widen[cast363];
      __retval357 = t364;
      char t365 = __retval357;
      return t365;
    }
  std__ctype_char____M_widen_init___const(t358);
  char t366 = __c356;
  void** v367 = (void**)t358;
  void* v368 = *((void**)v367);
  char vcall371 = (char)__VERIFIER_virtual_call_char_char(t358, 6, t366);
  __retval357 = vcall371;
  char t372 = __retval357;
  return t372;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v373, char v374) {
bb375:
  struct std__basic_ios_char__std__char_traits_char__* this376;
  char __c377;
  char __retval378;
  this376 = v373;
  __c377 = v374;
  struct std__basic_ios_char__std__char_traits_char__* t379 = this376;
  struct std__ctype_char_* t380 = t379->_M_ctype;
  struct std__ctype_char_* r381 = std__ctype_char__const__std____check_facet_std__ctype_char___(t380);
  char t382 = __c377;
  char r383 = std__ctype_char___widen_char__const(r381, t382);
  __retval378 = r383;
  char t384 = __retval378;
  return t384;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v385) {
bb386:
  struct std__basic_ostream_char__std__char_traits_char__* __os387;
  struct std__basic_ostream_char__std__char_traits_char__* __retval388;
  __os387 = v385;
  struct std__basic_ostream_char__std__char_traits_char__* t389 = __os387;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __os387;
  void** v391 = (void**)t390;
  void* v392 = *((void**)v391);
  unsigned char* cast393 = (unsigned char*)v392;
  long c394 = -24;
  unsigned char* ptr395 = &(cast393)[c394];
  long* cast396 = (long*)ptr395;
  long t397 = *cast396;
  unsigned char* cast398 = (unsigned char*)t390;
  unsigned char* ptr399 = &(cast398)[t397];
  struct std__basic_ostream_char__std__char_traits_char__* cast400 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr399;
  struct std__basic_ios_char__std__char_traits_char__* cast401 = (struct std__basic_ios_char__std__char_traits_char__*)cast400;
  char c402 = 10;
  char r403 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast401, c402);
  struct std__basic_ostream_char__std__char_traits_char__* r404 = std__ostream__put(t389, r403);
  struct std__basic_ostream_char__std__char_traits_char__* r405 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r404);
  __retval388 = r405;
  struct std__basic_ostream_char__std__char_traits_char__* t406 = __retval388;
  return t406;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v407) {
bb408:
  struct std__vector_int__std__allocator_int__* this409;
  this409 = v407;
  struct std__vector_int__std__allocator_int__* t410 = this409;
    struct std___Vector_base_int__std__allocator_int__* base411 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t410 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base412 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base411->_M_impl) + 0);
    int* t413 = base412->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base414 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t410 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base415 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base414->_M_impl) + 0);
    int* t416 = base415->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base417 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t410 + 0);
    struct std__allocator_int_* r418 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base417);
    void_std___Destroy_int___int_(t413, t416, r418);
  {
    struct std___Vector_base_int__std__allocator_int__* base419 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t410 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base419);
  }
  return;
}

// function: main
int main() {
bb420:
  int __retval421;
  int myints422[8];
  struct std__vector_int__std__allocator_int__ myvector423;
  struct std__allocator_int_ ref_tmp0424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1428;
  int ref_tmp2429;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3430;
  int c431 = 0;
  __retval421 = c431;
  // array copy
  __builtin_memcpy(myints422, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast432 = (int*)&(myints422);
  int* cast433 = (int*)&(myints422);
  int c434 = 8;
  int* ptr435 = &(cast433)[c434];
  std__allocator_int___allocator_2(&ref_tmp0424);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector423, cast432, ptr435, &ref_tmp0424);
  {
    std__allocator_int____allocator(&ref_tmp0424);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it425);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r436 = std__vector_int__std__allocator_int_____begin(&myvector423);
    agg_tmp0427 = r436;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r437 = std__vector_int__std__allocator_int_____end(&myvector423);
    agg_tmp1428 = r437;
    int c438 = 2;
    int c439 = 30;
    ref_tmp2429 = c439;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t440 = agg_tmp0427;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t441 = agg_tmp1428;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r442 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__search_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t440, t441, c438, &ref_tmp2429);
    ref_tmp1426 = r442;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r443 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it425, &ref_tmp1426);
    int c444 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r445 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&it425, c444);
    ref_tmp3430 = r445;
    int* r446 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3430);
    int t447 = *r446;
    int c448 = 30;
    _Bool c449 = ((t447 == c448)) ? 1 : 0;
    if (c449) {
    } else {
      char* cast450 = (char*)&(_str);
      char* c451 = _str_1;
      unsigned int c452 = 27;
      char* cast453 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast450, c451, c452, cast453);
    }
    int* r454 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it425);
    int t455 = *r454;
    int c456 = 30;
    _Bool c457 = ((t455 == c456)) ? 1 : 0;
    if (c457) {
    } else {
      char* cast458 = (char*)&(_str_2);
      char* c459 = _str_1;
      unsigned int c460 = 28;
      char* cast461 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast458, c459, c460, cast461);
    }
    int* r462 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it425);
    int t463 = *r462;
    struct std__basic_ostream_char__std__char_traits_char__* r464 = std__ostream__operator__(&_ZSt4cout, t463);
    struct std__basic_ostream_char__std__char_traits_char__* r465 = std__ostream__operator___std__ostream_____(r464, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c466 = 0;
    __retval421 = c466;
    int t467 = __retval421;
    int ret_val468 = t467;
    {
      std__vector_int__std__allocator_int______vector(&myvector423);
    }
    return ret_val468;
  int t469 = __retval421;
  return t469;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v470) {
bb471:
  struct std____new_allocator_int_* this472;
  this472 = v470;
  struct std____new_allocator_int_* t473 = this472;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v474, struct std__allocator_int_* v475) {
bb476:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this477;
  struct std__allocator_int_* __a478;
  this477 = v474;
  __a478 = v475;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t479 = this477;
  struct std__allocator_int_* base480 = (struct std__allocator_int_*)((char *)t479 + 0);
  struct std__allocator_int_* t481 = __a478;
  std__allocator_int___allocator(base480, t481);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base482 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t479 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base482);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v483) {
bb484:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this485;
  this485 = v483;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t486 = this485;
  {
    struct std__allocator_int_* base487 = (struct std__allocator_int_*)((char *)t486 + 0);
    std__allocator_int____allocator(base487);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v488, struct std__allocator_int_* v489) {
bb490:
  struct std___Vector_base_int__std__allocator_int__* this491;
  struct std__allocator_int_* __a492;
  this491 = v488;
  __a492 = v489;
  struct std___Vector_base_int__std__allocator_int__* t493 = this491;
  struct std__allocator_int_* t494 = __a492;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t493->_M_impl, t494);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v495, int** v496, int* v497) {
bb498:
  struct std__ranges____distance_fn* this499;
  int** __first500;
  int* __last501;
  long __retval502;
  this499 = v495;
  __first500 = v496;
  __last501 = v497;
  struct std__ranges____distance_fn* t503 = this499;
  int* t504 = __last501;
  int** t505 = __first500;
  int* t506 = *t505;
  long diff507 = t504 - t506;
  __retval502 = diff507;
  long t508 = __retval502;
  return t508;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb509:
  _Bool __retval510;
    _Bool c511 = 0;
    __retval510 = c511;
    _Bool t512 = __retval510;
    return t512;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v513) {
bb514:
  struct std____new_allocator_int_* this515;
  unsigned long __retval516;
  this515 = v513;
  struct std____new_allocator_int_* t517 = this515;
  unsigned long c518 = 9223372036854775807;
  unsigned long c519 = 4;
  unsigned long b520 = c518 / c519;
  __retval516 = b520;
  unsigned long t521 = __retval516;
  return t521;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v522, unsigned long v523, void* v524) {
bb525:
  struct std____new_allocator_int_* this526;
  unsigned long __n527;
  void* unnamed528;
  int* __retval529;
  this526 = v522;
  __n527 = v523;
  unnamed528 = v524;
  struct std____new_allocator_int_* t530 = this526;
    unsigned long t531 = __n527;
    unsigned long r532 = std____new_allocator_int____M_max_size___const(t530);
    _Bool c533 = ((t531 > r532)) ? 1 : 0;
    if (c533) {
        unsigned long t534 = __n527;
        unsigned long c535 = -1;
        unsigned long c536 = 4;
        unsigned long b537 = c535 / c536;
        _Bool c538 = ((t534 > b537)) ? 1 : 0;
        if (c538) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c539 = 4;
    unsigned long c540 = 16;
    _Bool c541 = ((c539 > c540)) ? 1 : 0;
    if (c541) {
      unsigned long __al542;
      unsigned long c543 = 4;
      __al542 = c543;
      unsigned long t544 = __n527;
      unsigned long c545 = 4;
      unsigned long b546 = t544 * c545;
      unsigned long t547 = __al542;
      void* r548 = operator_new_2(b546, t547);
      int* cast549 = (int*)r548;
      __retval529 = cast549;
      int* t550 = __retval529;
      return t550;
    }
  unsigned long t551 = __n527;
  unsigned long c552 = 4;
  unsigned long b553 = t551 * c552;
  void* r554 = operator_new(b553);
  int* cast555 = (int*)r554;
  __retval529 = cast555;
  int* t556 = __retval529;
  return t556;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v557, unsigned long v558) {
bb559:
  struct std__allocator_int_* this560;
  unsigned long __n561;
  int* __retval562;
  this560 = v557;
  __n561 = v558;
  struct std__allocator_int_* t563 = this560;
    _Bool r564 = std____is_constant_evaluated();
    if (r564) {
        unsigned long t565 = __n561;
        unsigned long c566 = 4;
        unsigned long ovr567;
        _Bool ovf568 = __builtin_mul_overflow(t565, c566, &ovr567);
        __n561 = ovr567;
        if (ovf568) {
          std____throw_bad_array_new_length();
        }
      unsigned long t569 = __n561;
      void* r570 = operator_new(t569);
      int* cast571 = (int*)r570;
      __retval562 = cast571;
      int* t572 = __retval562;
      return t572;
    }
  struct std____new_allocator_int_* base573 = (struct std____new_allocator_int_*)((char *)t563 + 0);
  unsigned long t574 = __n561;
  void* c575 = ((void*)0);
  int* r576 = std____new_allocator_int___allocate(base573, t574, c575);
  __retval562 = r576;
  int* t577 = __retval562;
  return t577;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v578, unsigned long v579) {
bb580:
  struct std__allocator_int_* __a581;
  unsigned long __n582;
  int* __retval583;
  __a581 = v578;
  __n582 = v579;
  struct std__allocator_int_* t584 = __a581;
  unsigned long t585 = __n582;
  int* r586 = std__allocator_int___allocate(t584, t585);
  __retval583 = r586;
  int* t587 = __retval583;
  return t587;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v588, unsigned long v589) {
bb590:
  struct std___Vector_base_int__std__allocator_int__* this591;
  unsigned long __n592;
  int* __retval593;
  this591 = v588;
  __n592 = v589;
  struct std___Vector_base_int__std__allocator_int__* t594 = this591;
  unsigned long t595 = __n592;
  unsigned long c596 = 0;
  _Bool c597 = ((t595 != c596)) ? 1 : 0;
  int* ternary598;
  if (c597) {
    struct std__allocator_int_* base599 = (struct std__allocator_int_*)((char *)&(t594->_M_impl) + 0);
    unsigned long t600 = __n592;
    int* r601 = std__allocator_traits_std__allocator_int_____allocate(base599, t600);
    ternary598 = (int*)r601;
  } else {
    int* c602 = ((void*)0);
    ternary598 = (int*)c602;
  }
  __retval593 = ternary598;
  int* t603 = __retval593;
  return t603;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v604, unsigned long* v605) {
bb606:
  unsigned long* __a607;
  unsigned long* __b608;
  unsigned long* __retval609;
  __a607 = v604;
  __b608 = v605;
    unsigned long* t610 = __b608;
    unsigned long t611 = *t610;
    unsigned long* t612 = __a607;
    unsigned long t613 = *t612;
    _Bool c614 = ((t611 < t613)) ? 1 : 0;
    if (c614) {
      unsigned long* t615 = __b608;
      __retval609 = t615;
      unsigned long* t616 = __retval609;
      return t616;
    }
  unsigned long* t617 = __a607;
  __retval609 = t617;
  unsigned long* t618 = __retval609;
  return t618;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v619) {
bb620:
  struct std__allocator_int_* __a621;
  unsigned long __retval622;
  unsigned long __diffmax623;
  unsigned long __allocmax624;
  __a621 = v619;
  unsigned long c625 = 2305843009213693951;
  __diffmax623 = c625;
  unsigned long c626 = 4611686018427387903;
  __allocmax624 = c626;
  unsigned long* r627 = unsigned_long_const__std__min_unsigned_long_(&__diffmax623, &__allocmax624);
  unsigned long t628 = *r627;
  __retval622 = t628;
  unsigned long t629 = __retval622;
  return t629;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v630, struct std__allocator_int_* v631) {
bb632:
  struct std__allocator_int_* this633;
  struct std__allocator_int_* __a634;
  this633 = v630;
  __a634 = v631;
  struct std__allocator_int_* t635 = this633;
  struct std____new_allocator_int_* base636 = (struct std____new_allocator_int_*)((char *)t635 + 0);
  struct std__allocator_int_* t637 = __a634;
  struct std____new_allocator_int_* base638 = (struct std____new_allocator_int_*)((char *)t637 + 0);
  std____new_allocator_int_____new_allocator(base636, base638);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v639, struct std__allocator_int_* v640) {
bb641:
  unsigned long __n642;
  struct std__allocator_int_* __a643;
  unsigned long __retval644;
  __n642 = v639;
  __a643 = v640;
    struct std__allocator_int_ ref_tmp0645;
    _Bool tmp_exprcleanup646;
    unsigned long t647 = __n642;
    struct std__allocator_int_* t648 = __a643;
    std__allocator_int___allocator(&ref_tmp0645, t648);
      unsigned long r649 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0645);
      _Bool c650 = ((t647 > r649)) ? 1 : 0;
      tmp_exprcleanup646 = c650;
    {
      std__allocator_int____allocator(&ref_tmp0645);
    }
    _Bool t651 = tmp_exprcleanup646;
    if (t651) {
      char* cast652 = (char*)&(_str_3);
      std____throw_length_error(cast652);
    }
  unsigned long t653 = __n642;
  __retval644 = t653;
  unsigned long t654 = __retval644;
  return t654;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v655) {
bb656:
  struct std___Vector_base_int__std__allocator_int__* this657;
  struct std__allocator_int_* __retval658;
  this657 = v655;
  struct std___Vector_base_int__std__allocator_int__* t659 = this657;
  struct std__allocator_int_* base660 = (struct std__allocator_int_*)((char *)&(t659->_M_impl) + 0);
  __retval658 = base660;
  struct std__allocator_int_* t661 = __retval658;
  return t661;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb662:
  _Bool __retval663;
    _Bool c664 = 0;
    __retval663 = c664;
    _Bool t665 = __retval663;
    return t665;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v666, int** v667) {
bb668:
  struct std___UninitDestroyGuard_int____void_* this669;
  int** __first670;
  this669 = v666;
  __first670 = v667;
  struct std___UninitDestroyGuard_int____void_* t671 = this669;
  int** t672 = __first670;
  int* t673 = *t672;
  t671->_M_first = t673;
  int** t674 = __first670;
  t671->_M_cur = t674;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v675, int* v676) {
bb677:
  int* __location678;
  int* __args679;
  int* __retval680;
  void* __loc681;
  __location678 = v675;
  __args679 = v676;
  int* t682 = __location678;
  void* cast683 = (void*)t682;
  __loc681 = cast683;
    void* t684 = __loc681;
    int* cast685 = (int*)t684;
    int* t686 = __args679;
    int t687 = *t686;
    *cast685 = t687;
    __retval680 = cast685;
    int* t688 = __retval680;
    return t688;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v689, int* v690) {
bb691:
  int* __p692;
  int* __args693;
  __p692 = v689;
  __args693 = v690;
    _Bool r694 = std____is_constant_evaluated();
    if (r694) {
      int* t695 = __p692;
      int* t696 = __args693;
      int* r697 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t695, t696);
      return;
    }
  int* t698 = __p692;
  void* cast699 = (void*)t698;
  int* cast700 = (int*)cast699;
  int* t701 = __args693;
  int t702 = *t701;
  *cast700 = t702;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v703) {
bb704:
  struct std___UninitDestroyGuard_int____void_* this705;
  this705 = v703;
  struct std___UninitDestroyGuard_int____void_* t706 = this705;
  int** c707 = ((void*)0);
  t706->_M_cur = c707;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v708) {
bb709:
  struct std___UninitDestroyGuard_int____void_* this710;
  this710 = v708;
  struct std___UninitDestroyGuard_int____void_* t711 = this710;
    int** t712 = t711->_M_cur;
    int** c713 = ((void*)0);
    _Bool c714 = ((t712 != c713)) ? 1 : 0;
    if (c714) {
      int* t715 = t711->_M_first;
      int** t716 = t711->_M_cur;
      int* t717 = *t716;
      void_std___Destroy_int__(t715, t717);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v718, int* v719, int* v720) {
bb721:
  int* __first722;
  int* __last723;
  int* __result724;
  int* __retval725;
  struct std___UninitDestroyGuard_int____void_ __guard726;
  __first722 = v718;
  __last723 = v719;
  __result724 = v720;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard726, &__result724);
      while (1) {
        int* t728 = __first722;
        int* t729 = __last723;
        _Bool c730 = ((t728 != t729)) ? 1 : 0;
        if (!c730) break;
        int* t731 = __result724;
        int* t732 = __first722;
        void_std___Construct_int__int__(t731, t732);
      for_step727: ;
        int* t733 = __first722;
        int c734 = 1;
        int* ptr735 = &(t733)[c734];
        __first722 = ptr735;
        int* t736 = __result724;
        int c737 = 1;
        int* ptr738 = &(t736)[c737];
        __result724 = ptr738;
      }
    std___UninitDestroyGuard_int___void___release(&__guard726);
    int* t739 = __result724;
    __retval725 = t739;
    int* t740 = __retval725;
    int* ret_val741 = t740;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard726);
    }
    return ret_val741;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v742) {
bb743:
  int* __it744;
  int* __retval745;
  __it744 = v742;
  int* t746 = __it744;
  __retval745 = t746;
  int* t747 = __retval745;
  return t747;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v748, int* v749, int* v750) {
bb751:
  int* __first752;
  int* __last753;
  int* __result754;
  int* __retval755;
  __first752 = v748;
  __last753 = v749;
  __result754 = v750;
      long __n756;
      int* t757 = __last753;
      int* t758 = __first752;
      long diff759 = t757 - t758;
      __n756 = diff759;
        long t760 = __n756;
        long c761 = 0;
        _Bool c762 = ((t760 > c761)) ? 1 : 0;
        if (c762) {
          int* t763 = __result754;
          int* r764 = int__std____niter_base_int__(t763);
          void* cast765 = (void*)r764;
          int* t766 = __first752;
          int* r767 = int__std____niter_base_int__(t766);
          void* cast768 = (void*)r767;
          long t769 = __n756;
          unsigned long cast770 = (unsigned long)t769;
          unsigned long c771 = 4;
          unsigned long b772 = cast770 * c771;
          void* r773 = memcpy(cast765, cast768, b772);
          long t774 = __n756;
          int* t775 = __result754;
          int* ptr776 = &(t775)[t774];
          __result754 = ptr776;
        }
      int* t777 = __result754;
      __retval755 = t777;
      int* t778 = __retval755;
      return t778;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v779, int* v780, int* v781, struct std__allocator_int_* v782) {
bb783:
  int* __first784;
  int* __last785;
  int* __result786;
  struct std__allocator_int_* unnamed787;
  int* __retval788;
  __first784 = v779;
  __last785 = v780;
  __result786 = v781;
  unnamed787 = v782;
    _Bool r789 = std__is_constant_evaluated();
    if (r789) {
      int* t790 = __first784;
      int* t791 = __last785;
      int* t792 = __result786;
      int* r793 = int__std____do_uninit_copy_int___int___int__(t790, t791, t792);
      __retval788 = r793;
      int* t794 = __retval788;
      return t794;
    }
    int* t795 = __first784;
    int* t796 = __last785;
    int* t797 = __result786;
    int* r798 = int__std__uninitialized_copy_int___int__(t795, t796, t797);
    __retval788 = r798;
    int* t799 = __retval788;
    return t799;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v800, int* v801, int* v802, unsigned long v803) {
bb804:
  struct std__vector_int__std__allocator_int__* this805;
  int* __first806;
  int* __last807;
  unsigned long __n808;
  int* __start809;
  this805 = v800;
  __first806 = v801;
  __last807 = v802;
  __n808 = v803;
  struct std__vector_int__std__allocator_int__* t810 = this805;
  struct std___Vector_base_int__std__allocator_int__* base811 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  unsigned long t812 = __n808;
  struct std___Vector_base_int__std__allocator_int__* base813 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  struct std__allocator_int_* r814 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base813);
  unsigned long r815 = std__vector_int__std__allocator_int______S_check_init_len(t812, r814);
  int* r816 = std___Vector_base_int__std__allocator_int______M_allocate(base811, r815);
  __start809 = r816;
  int* t817 = __start809;
  struct std___Vector_base_int__std__allocator_int__* base818 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base819 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base818->_M_impl) + 0);
  base819->_M_finish = t817;
  struct std___Vector_base_int__std__allocator_int__* base820 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base821 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base820->_M_impl) + 0);
  base821->_M_start = t817;
  int* t822 = __start809;
  unsigned long t823 = __n808;
  int* ptr824 = &(t822)[t823];
  struct std___Vector_base_int__std__allocator_int__* base825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base826 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base825->_M_impl) + 0);
  base826->_M_end_of_storage = ptr824;
  int* t827 = __first806;
  int* t828 = __last807;
  int* t829 = __start809;
  struct std___Vector_base_int__std__allocator_int__* base830 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  struct std__allocator_int_* r831 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base830);
  int* r832 = int__std____uninitialized_copy_a_int___int___int___int_(t827, t828, t829, r831);
  struct std___Vector_base_int__std__allocator_int__* base833 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t810 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base834 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base833->_M_impl) + 0);
  base834->_M_finish = r832;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v835, int* v836, unsigned long v837) {
bb838:
  struct std____new_allocator_int_* this839;
  int* __p840;
  unsigned long __n841;
  this839 = v835;
  __p840 = v836;
  __n841 = v837;
  struct std____new_allocator_int_* t842 = this839;
    unsigned long c843 = 4;
    unsigned long c844 = 16;
    _Bool c845 = ((c843 > c844)) ? 1 : 0;
    if (c845) {
      int* t846 = __p840;
      void* cast847 = (void*)t846;
      unsigned long t848 = __n841;
      unsigned long c849 = 4;
      unsigned long b850 = t848 * c849;
      unsigned long c851 = 4;
      operator_delete_3(cast847, b850, c851);
      return;
    }
  int* t852 = __p840;
  void* cast853 = (void*)t852;
  unsigned long t854 = __n841;
  unsigned long c855 = 4;
  unsigned long b856 = t854 * c855;
  operator_delete_2(cast853, b856);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v857, int* v858, unsigned long v859) {
bb860:
  struct std__allocator_int_* this861;
  int* __p862;
  unsigned long __n863;
  this861 = v857;
  __p862 = v858;
  __n863 = v859;
  struct std__allocator_int_* t864 = this861;
    _Bool r865 = std____is_constant_evaluated();
    if (r865) {
      int* t866 = __p862;
      void* cast867 = (void*)t866;
      operator_delete(cast867);
      return;
    }
  struct std____new_allocator_int_* base868 = (struct std____new_allocator_int_*)((char *)t864 + 0);
  int* t869 = __p862;
  unsigned long t870 = __n863;
  std____new_allocator_int___deallocate(base868, t869, t870);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v871, int* v872, unsigned long v873) {
bb874:
  struct std__allocator_int_* __a875;
  int* __p876;
  unsigned long __n877;
  __a875 = v871;
  __p876 = v872;
  __n877 = v873;
  struct std__allocator_int_* t878 = __a875;
  int* t879 = __p876;
  unsigned long t880 = __n877;
  std__allocator_int___deallocate(t878, t879, t880);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v881, int* v882, unsigned long v883) {
bb884:
  struct std___Vector_base_int__std__allocator_int__* this885;
  int* __p886;
  unsigned long __n887;
  this885 = v881;
  __p886 = v882;
  __n887 = v883;
  struct std___Vector_base_int__std__allocator_int__* t888 = this885;
    int* t889 = __p886;
    _Bool cast890 = (_Bool)t889;
    if (cast890) {
      struct std__allocator_int_* base891 = (struct std__allocator_int_*)((char *)&(t888->_M_impl) + 0);
      int* t892 = __p886;
      unsigned long t893 = __n887;
      std__allocator_traits_std__allocator_int_____deallocate(base891, t892, t893);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v894) {
bb895:
  struct std___Vector_base_int__std__allocator_int__* this896;
  this896 = v894;
  struct std___Vector_base_int__std__allocator_int__* t897 = this896;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base898 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t897->_M_impl) + 0);
    int* t899 = base898->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base900 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t897->_M_impl) + 0);
    int* t901 = base900->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base902 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t897->_M_impl) + 0);
    int* t903 = base902->_M_start;
    long diff904 = t901 - t903;
    unsigned long cast905 = (unsigned long)diff904;
    std___Vector_base_int__std__allocator_int______M_deallocate(t897, t899, cast905);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t897->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v906, struct std____new_allocator_int_* v907) {
bb908:
  struct std____new_allocator_int_* this909;
  struct std____new_allocator_int_* unnamed910;
  this909 = v906;
  unnamed910 = v907;
  struct std____new_allocator_int_* t911 = this909;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v912) {
bb913:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this914;
  this914 = v912;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t915 = this914;
  int* c916 = ((void*)0);
  t915->_M_start = c916;
  int* c917 = ((void*)0);
  t915->_M_finish = c917;
  int* c918 = ((void*)0);
  t915->_M_end_of_storage = c918;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v919) {
bb920:
  int* __location921;
  __location921 = v919;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v922, int* v923) {
bb924:
  int* __first925;
  int* __last926;
  __first925 = v922;
  __last926 = v923;
      _Bool r927 = std____is_constant_evaluated();
      if (r927) {
          while (1) {
            int* t929 = __first925;
            int* t930 = __last926;
            _Bool c931 = ((t929 != t930)) ? 1 : 0;
            if (!c931) break;
            int* t932 = __first925;
            void_std__destroy_at_int_(t932);
          for_step928: ;
            int* t933 = __first925;
            int c934 = 1;
            int* ptr935 = &(t933)[c934];
            __first925 = ptr935;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v936, int* v937, struct std__allocator_int_* v938) {
bb939:
  int* __first940;
  int* __last941;
  struct std__allocator_int_* unnamed942;
  __first940 = v936;
  __last941 = v937;
  unnamed942 = v938;
  int* t943 = __first940;
  int* t944 = __last941;
  void_std___Destroy_int__(t943, t944);
  return;
}

