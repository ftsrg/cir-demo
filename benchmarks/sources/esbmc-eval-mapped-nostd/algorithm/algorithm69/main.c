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
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[6] = {10, 20, 30, 30, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it != 30";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm69/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "it == myvector.end()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[46] = "the first consecutive repeated elements are: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equal_to_iter p2);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44) {
bb45:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this46;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval47;
  this46 = v44;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t48 = this46;
  int* t49 = t48->_M_current;
  int c50 = 1;
  int* ptr51 = &(t49)[c50];
  t48->_M_current = ptr51;
  __retval47 = t48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t52 = __retval47;
  return t52;
}

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* v53, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v54, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v55) {
bb56:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it259;
  _Bool __retval60;
  this57 = v53;
  __it158 = v54;
  __it259 = v55;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t61 = this57;
  int* r62 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it158);
  int t63 = *r62;
  int* r64 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it259);
  int t65 = *r64;
  _Bool c66 = ((t63 == t65)) ? 1 : 0;
  __retval60 = c66;
  _Bool t67 = __retval60;
  return t67;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v68, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v69) {
bb70:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed72;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval73;
  this71 = v68;
  unnamed72 = v69;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t74 = this71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t75 = unnamed72;
  int* t76 = t75->_M_current;
  t74->_M_current = t76;
  __retval73 = t74;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t77 = __retval73;
  return t77;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops19_Iter_equal_to_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v78, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v79, struct __gnu_cxx____ops___Iter_equal_to_iter v80) {
bb81:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first82;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last83;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred84;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next86;
  __first82 = v78;
  __last83 = v79;
  __binary_pred84 = v80;
    _Bool r87 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first82, &__last83);
    if (r87) {
      __retval85 = __last83; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = __retval85;
      return t88;
    }
  __next86 = __first82; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r89 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next86);
      _Bool r90 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r89, &__last83);
      _Bool u91 = !r90;
      if (!u91) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp092;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp193;
          agg_tmp092 = __first82; // copy
          agg_tmp193 = __next86; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = agg_tmp092;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t95 = agg_tmp193;
          _Bool r96 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred84, t94, t95);
          if (r96) {
            __retval85 = __first82; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t97 = __retval85;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val98 = t97;
            return ret_val98;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r99 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first82, &__next86);
    }
  __retval85 = __last83; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t100 = __retval85;
  return t100;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb101:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval102;
  struct __gnu_cxx____ops___Iter_equal_to_iter t103 = __retval102;
  return t103;
}

// function: _ZSt13adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v104, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v105) {
bb106:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first107;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1111;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2112;
  __first107 = v104;
  __last108 = v105;
  agg_tmp0110 = __first107; // copy
  agg_tmp1111 = __last108; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r113 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp2112 = r113;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t114 = agg_tmp0110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t115 = agg_tmp1111;
  struct __gnu_cxx____ops___Iter_equal_to_iter t116 = agg_tmp2112;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r117 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t114, t115, t116);
  __retval109 = r117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t118 = __retval109;
  return t118;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v119, int** v120) {
bb121:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this122;
  int** __i123;
  this122 = v119;
  __i123 = v120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t124 = this122;
  int** t125 = __i123;
  int* t126 = *t125;
  t124->_M_current = t126;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v127) {
bb128:
  struct std__vector_int__std__allocator_int__* this129;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval130;
  this129 = v127;
  struct std__vector_int__std__allocator_int__* t131 = this129;
  struct std___Vector_base_int__std__allocator_int__* base132 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t131 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base133 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base132->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval130, &base133->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t134 = __retval130;
  return t134;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v135) {
bb136:
  struct std__vector_int__std__allocator_int__* this137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval138;
  this137 = v135;
  struct std__vector_int__std__allocator_int__* t139 = this137;
  struct std___Vector_base_int__std__allocator_int__* base140 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t139 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base141 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base140->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval138, &base141->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t142 = __retval138;
  return t142;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v143, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v144) {
bb145:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval148;
  this146 = v143;
  unnamed147 = v144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t149 = this146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t150 = unnamed147;
  int* t151 = t150->_M_current;
  t149->_M_current = t151;
  __retval148 = t149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t152 = __retval148;
  return t152;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v153) {
bb154:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this155;
  int* __retval156;
  this155 = v153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t157 = this155;
  int* t158 = t157->_M_current;
  __retval156 = t158;
  int* t159 = __retval156;
  return t159;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v160) {
bb161:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this162;
  int** __retval163;
  this162 = v160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t164 = this162;
  __retval163 = &t164->_M_current;
  int** t165 = __retval163;
  return t165;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v166, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v167) {
bb168:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs170;
  _Bool __retval171;
  __lhs169 = v166;
  __rhs170 = v167;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t172 = __lhs169;
  int** r173 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t172);
  int* t174 = *r173;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t175 = __rhs170;
  int** r176 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t175);
  int* t177 = *r176;
  _Bool c178 = ((t174 == t177)) ? 1 : 0;
  __retval171 = c178;
  _Bool t179 = __retval171;
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v279, void* v280) {
bb281:
  struct std__basic_ostream_char__std__char_traits_char__* this282;
  void* __pf283;
  struct std__basic_ostream_char__std__char_traits_char__* __retval284;
  this282 = v279;
  __pf283 = v280;
  struct std__basic_ostream_char__std__char_traits_char__* t285 = this282;
  void* t286 = __pf283;
  struct std__basic_ostream_char__std__char_traits_char__* r287 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t286)(t285);
  __retval284 = r287;
  struct std__basic_ostream_char__std__char_traits_char__* t288 = __retval284;
  return t288;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v289) {
bb290:
  struct std__basic_ostream_char__std__char_traits_char__* __os291;
  struct std__basic_ostream_char__std__char_traits_char__* __retval292;
  __os291 = v289;
  struct std__basic_ostream_char__std__char_traits_char__* t293 = __os291;
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__ostream__flush(t293);
  __retval292 = r294;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = __retval292;
  return t295;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v296) {
bb297:
  struct std__ctype_char_* __f298;
  struct std__ctype_char_* __retval299;
  __f298 = v296;
    struct std__ctype_char_* t300 = __f298;
    _Bool cast301 = (_Bool)t300;
    _Bool u302 = !cast301;
    if (u302) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t303 = __f298;
  __retval299 = t303;
  struct std__ctype_char_* t304 = __retval299;
  return t304;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v305, char v306) {
bb307:
  struct std__ctype_char_* this308;
  char __c309;
  char __retval310;
  this308 = v305;
  __c309 = v306;
  struct std__ctype_char_* t311 = this308;
    char t312 = t311->_M_widen_ok;
    _Bool cast313 = (_Bool)t312;
    if (cast313) {
      char t314 = __c309;
      unsigned char cast315 = (unsigned char)t314;
      unsigned long cast316 = (unsigned long)cast315;
      char t317 = t311->_M_widen[cast316];
      __retval310 = t317;
      char t318 = __retval310;
      return t318;
    }
  std__ctype_char____M_widen_init___const(t311);
  char t319 = __c309;
  void** v320 = (void**)t311;
  void* v321 = *((void**)v320);
  char vcall324 = (char)__VERIFIER_virtual_call_char_char(t311, 6, t319);
  __retval310 = vcall324;
  char t325 = __retval310;
  return t325;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v326, char v327) {
bb328:
  struct std__basic_ios_char__std__char_traits_char__* this329;
  char __c330;
  char __retval331;
  this329 = v326;
  __c330 = v327;
  struct std__basic_ios_char__std__char_traits_char__* t332 = this329;
  struct std__ctype_char_* t333 = t332->_M_ctype;
  struct std__ctype_char_* r334 = std__ctype_char__const__std____check_facet_std__ctype_char___(t333);
  char t335 = __c330;
  char r336 = std__ctype_char___widen_char__const(r334, t335);
  __retval331 = r336;
  char t337 = __retval331;
  return t337;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v338) {
bb339:
  struct std__basic_ostream_char__std__char_traits_char__* __os340;
  struct std__basic_ostream_char__std__char_traits_char__* __retval341;
  __os340 = v338;
  struct std__basic_ostream_char__std__char_traits_char__* t342 = __os340;
  struct std__basic_ostream_char__std__char_traits_char__* t343 = __os340;
  void** v344 = (void**)t343;
  void* v345 = *((void**)v344);
  unsigned char* cast346 = (unsigned char*)v345;
  long c347 = -24;
  unsigned char* ptr348 = &(cast346)[c347];
  long* cast349 = (long*)ptr348;
  long t350 = *cast349;
  unsigned char* cast351 = (unsigned char*)t343;
  unsigned char* ptr352 = &(cast351)[t350];
  struct std__basic_ostream_char__std__char_traits_char__* cast353 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr352;
  struct std__basic_ios_char__std__char_traits_char__* cast354 = (struct std__basic_ios_char__std__char_traits_char__*)cast353;
  char c355 = 10;
  char r356 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast354, c355);
  struct std__basic_ostream_char__std__char_traits_char__* r357 = std__ostream__put(t342, r356);
  struct std__basic_ostream_char__std__char_traits_char__* r358 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r357);
  __retval341 = r358;
  struct std__basic_ostream_char__std__char_traits_char__* t359 = __retval341;
  return t359;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v360) {
bb361:
  struct std__vector_int__std__allocator_int__* this362;
  this362 = v360;
  struct std__vector_int__std__allocator_int__* t363 = this362;
    struct std___Vector_base_int__std__allocator_int__* base364 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t363 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base365 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base364->_M_impl) + 0);
    int* t366 = base365->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base367 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t363 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base368 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base367->_M_impl) + 0);
    int* t369 = base368->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base370 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t363 + 0);
    struct std__allocator_int_* r371 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base370);
    void_std___Destroy_int___int_(t366, t369, r371);
  {
    struct std___Vector_base_int__std__allocator_int__* base372 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t363 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base372);
  }
  return;
}

// function: main
int main() {
bb373:
  int __retval374;
  int myints375[6];
  struct std__vector_int__std__allocator_int__ myvector376;
  struct std__allocator_int_ ref_tmp0377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it378;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1379;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0380;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1381;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2382;
  int c383 = 0;
  __retval374 = c383;
  // array copy
  __builtin_memcpy(myints375, __const_main_myints, (unsigned long)6 * sizeof(__const_main_myints[0]));
  int* cast384 = (int*)&(myints375);
  int* cast385 = (int*)&(myints375);
  int c386 = 6;
  int* ptr387 = &(cast385)[c386];
  std__allocator_int___allocator_2(&ref_tmp0377);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector376, cast384, ptr387, &ref_tmp0377);
  {
    std__allocator_int____allocator(&ref_tmp0377);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it378);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r388 = std__vector_int__std__allocator_int_____begin(&myvector376);
    agg_tmp0380 = r388;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r389 = std__vector_int__std__allocator_int_____end(&myvector376);
    agg_tmp1381 = r389;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t390 = agg_tmp0380;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t391 = agg_tmp1381;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r392 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t390, t391);
    ref_tmp1379 = r392;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r393 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it378, &ref_tmp1379);
    int* r394 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it378);
    int t395 = *r394;
    int c396 = 30;
    _Bool c397 = ((t395 != c396)) ? 1 : 0;
    if (c397) {
    } else {
      char* cast398 = (char*)&(_str);
      char* c399 = _str_1;
      unsigned int c400 = 26;
      char* cast401 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast398, c399, c400, cast401);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r402 = std__vector_int__std__allocator_int_____end(&myvector376);
    ref_tmp2382 = r402;
    _Bool r403 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it378, &ref_tmp2382);
    if (r403) {
    } else {
      char* cast404 = (char*)&(_str_2);
      char* c405 = _str_1;
      unsigned int c406 = 27;
      char* cast407 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast404, c405, c406, cast407);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3408;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r409 = std__vector_int__std__allocator_int_____end(&myvector376);
      ref_tmp3408 = r409;
      _Bool r410 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it378, &ref_tmp3408);
      _Bool u411 = !r410;
      if (u411) {
        char* cast412 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r413 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast412);
        int* r414 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it378);
        int t415 = *r414;
        struct std__basic_ostream_char__std__char_traits_char__* r416 = std__ostream__operator__(r413, t415);
        struct std__basic_ostream_char__std__char_traits_char__* r417 = std__ostream__operator___std__ostream_____(r416, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    int c418 = 0;
    __retval374 = c418;
    int t419 = __retval374;
    int ret_val420 = t419;
    {
      std__vector_int__std__allocator_int______vector(&myvector376);
    }
    return ret_val420;
  int t421 = __retval374;
  return t421;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v422) {
bb423:
  struct std____new_allocator_int_* this424;
  this424 = v422;
  struct std____new_allocator_int_* t425 = this424;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v426, struct std__allocator_int_* v427) {
bb428:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this429;
  struct std__allocator_int_* __a430;
  this429 = v426;
  __a430 = v427;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t431 = this429;
  struct std__allocator_int_* base432 = (struct std__allocator_int_*)((char *)t431 + 0);
  struct std__allocator_int_* t433 = __a430;
  std__allocator_int___allocator(base432, t433);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base434 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t431 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base434);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v435) {
bb436:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this437;
  this437 = v435;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t438 = this437;
  {
    struct std__allocator_int_* base439 = (struct std__allocator_int_*)((char *)t438 + 0);
    std__allocator_int____allocator(base439);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v440, struct std__allocator_int_* v441) {
bb442:
  struct std___Vector_base_int__std__allocator_int__* this443;
  struct std__allocator_int_* __a444;
  this443 = v440;
  __a444 = v441;
  struct std___Vector_base_int__std__allocator_int__* t445 = this443;
  struct std__allocator_int_* t446 = __a444;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t445->_M_impl, t446);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v447, int** v448, int* v449) {
bb450:
  struct std__ranges____distance_fn* this451;
  int** __first452;
  int* __last453;
  long __retval454;
  this451 = v447;
  __first452 = v448;
  __last453 = v449;
  struct std__ranges____distance_fn* t455 = this451;
  int* t456 = __last453;
  int** t457 = __first452;
  int* t458 = *t457;
  long diff459 = t456 - t458;
  __retval454 = diff459;
  long t460 = __retval454;
  return t460;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb461:
  _Bool __retval462;
    _Bool c463 = 0;
    __retval462 = c463;
    _Bool t464 = __retval462;
    return t464;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v465) {
bb466:
  struct std____new_allocator_int_* this467;
  unsigned long __retval468;
  this467 = v465;
  struct std____new_allocator_int_* t469 = this467;
  unsigned long c470 = 9223372036854775807;
  unsigned long c471 = 4;
  unsigned long b472 = c470 / c471;
  __retval468 = b472;
  unsigned long t473 = __retval468;
  return t473;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v474, unsigned long v475, void* v476) {
bb477:
  struct std____new_allocator_int_* this478;
  unsigned long __n479;
  void* unnamed480;
  int* __retval481;
  this478 = v474;
  __n479 = v475;
  unnamed480 = v476;
  struct std____new_allocator_int_* t482 = this478;
    unsigned long t483 = __n479;
    unsigned long r484 = std____new_allocator_int____M_max_size___const(t482);
    _Bool c485 = ((t483 > r484)) ? 1 : 0;
    if (c485) {
        unsigned long t486 = __n479;
        unsigned long c487 = -1;
        unsigned long c488 = 4;
        unsigned long b489 = c487 / c488;
        _Bool c490 = ((t486 > b489)) ? 1 : 0;
        if (c490) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c491 = 4;
    unsigned long c492 = 16;
    _Bool c493 = ((c491 > c492)) ? 1 : 0;
    if (c493) {
      unsigned long __al494;
      unsigned long c495 = 4;
      __al494 = c495;
      unsigned long t496 = __n479;
      unsigned long c497 = 4;
      unsigned long b498 = t496 * c497;
      unsigned long t499 = __al494;
      void* r500 = operator_new_2(b498, t499);
      int* cast501 = (int*)r500;
      __retval481 = cast501;
      int* t502 = __retval481;
      return t502;
    }
  unsigned long t503 = __n479;
  unsigned long c504 = 4;
  unsigned long b505 = t503 * c504;
  void* r506 = operator_new(b505);
  int* cast507 = (int*)r506;
  __retval481 = cast507;
  int* t508 = __retval481;
  return t508;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v509, unsigned long v510) {
bb511:
  struct std__allocator_int_* this512;
  unsigned long __n513;
  int* __retval514;
  this512 = v509;
  __n513 = v510;
  struct std__allocator_int_* t515 = this512;
    _Bool r516 = std____is_constant_evaluated();
    if (r516) {
        unsigned long t517 = __n513;
        unsigned long c518 = 4;
        unsigned long ovr519;
        _Bool ovf520 = __builtin_mul_overflow(t517, c518, &ovr519);
        __n513 = ovr519;
        if (ovf520) {
          std____throw_bad_array_new_length();
        }
      unsigned long t521 = __n513;
      void* r522 = operator_new(t521);
      int* cast523 = (int*)r522;
      __retval514 = cast523;
      int* t524 = __retval514;
      return t524;
    }
  struct std____new_allocator_int_* base525 = (struct std____new_allocator_int_*)((char *)t515 + 0);
  unsigned long t526 = __n513;
  void* c527 = ((void*)0);
  int* r528 = std____new_allocator_int___allocate(base525, t526, c527);
  __retval514 = r528;
  int* t529 = __retval514;
  return t529;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v530, unsigned long v531) {
bb532:
  struct std__allocator_int_* __a533;
  unsigned long __n534;
  int* __retval535;
  __a533 = v530;
  __n534 = v531;
  struct std__allocator_int_* t536 = __a533;
  unsigned long t537 = __n534;
  int* r538 = std__allocator_int___allocate(t536, t537);
  __retval535 = r538;
  int* t539 = __retval535;
  return t539;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v540, unsigned long v541) {
bb542:
  struct std___Vector_base_int__std__allocator_int__* this543;
  unsigned long __n544;
  int* __retval545;
  this543 = v540;
  __n544 = v541;
  struct std___Vector_base_int__std__allocator_int__* t546 = this543;
  unsigned long t547 = __n544;
  unsigned long c548 = 0;
  _Bool c549 = ((t547 != c548)) ? 1 : 0;
  int* ternary550;
  if (c549) {
    struct std__allocator_int_* base551 = (struct std__allocator_int_*)((char *)&(t546->_M_impl) + 0);
    unsigned long t552 = __n544;
    int* r553 = std__allocator_traits_std__allocator_int_____allocate(base551, t552);
    ternary550 = (int*)r553;
  } else {
    int* c554 = ((void*)0);
    ternary550 = (int*)c554;
  }
  __retval545 = ternary550;
  int* t555 = __retval545;
  return t555;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v556, unsigned long* v557) {
bb558:
  unsigned long* __a559;
  unsigned long* __b560;
  unsigned long* __retval561;
  __a559 = v556;
  __b560 = v557;
    unsigned long* t562 = __b560;
    unsigned long t563 = *t562;
    unsigned long* t564 = __a559;
    unsigned long t565 = *t564;
    _Bool c566 = ((t563 < t565)) ? 1 : 0;
    if (c566) {
      unsigned long* t567 = __b560;
      __retval561 = t567;
      unsigned long* t568 = __retval561;
      return t568;
    }
  unsigned long* t569 = __a559;
  __retval561 = t569;
  unsigned long* t570 = __retval561;
  return t570;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v571) {
bb572:
  struct std__allocator_int_* __a573;
  unsigned long __retval574;
  unsigned long __diffmax575;
  unsigned long __allocmax576;
  __a573 = v571;
  unsigned long c577 = 2305843009213693951;
  __diffmax575 = c577;
  unsigned long c578 = 4611686018427387903;
  __allocmax576 = c578;
  unsigned long* r579 = unsigned_long_const__std__min_unsigned_long_(&__diffmax575, &__allocmax576);
  unsigned long t580 = *r579;
  __retval574 = t580;
  unsigned long t581 = __retval574;
  return t581;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v582, struct std__allocator_int_* v583) {
bb584:
  struct std__allocator_int_* this585;
  struct std__allocator_int_* __a586;
  this585 = v582;
  __a586 = v583;
  struct std__allocator_int_* t587 = this585;
  struct std____new_allocator_int_* base588 = (struct std____new_allocator_int_*)((char *)t587 + 0);
  struct std__allocator_int_* t589 = __a586;
  struct std____new_allocator_int_* base590 = (struct std____new_allocator_int_*)((char *)t589 + 0);
  std____new_allocator_int_____new_allocator(base588, base590);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v591, struct std__allocator_int_* v592) {
bb593:
  unsigned long __n594;
  struct std__allocator_int_* __a595;
  unsigned long __retval596;
  __n594 = v591;
  __a595 = v592;
    struct std__allocator_int_ ref_tmp0597;
    _Bool tmp_exprcleanup598;
    unsigned long t599 = __n594;
    struct std__allocator_int_* t600 = __a595;
    std__allocator_int___allocator(&ref_tmp0597, t600);
      unsigned long r601 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0597);
      _Bool c602 = ((t599 > r601)) ? 1 : 0;
      tmp_exprcleanup598 = c602;
    {
      std__allocator_int____allocator(&ref_tmp0597);
    }
    _Bool t603 = tmp_exprcleanup598;
    if (t603) {
      char* cast604 = (char*)&(_str_4);
      std____throw_length_error(cast604);
    }
  unsigned long t605 = __n594;
  __retval596 = t605;
  unsigned long t606 = __retval596;
  return t606;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v607) {
bb608:
  struct std___Vector_base_int__std__allocator_int__* this609;
  struct std__allocator_int_* __retval610;
  this609 = v607;
  struct std___Vector_base_int__std__allocator_int__* t611 = this609;
  struct std__allocator_int_* base612 = (struct std__allocator_int_*)((char *)&(t611->_M_impl) + 0);
  __retval610 = base612;
  struct std__allocator_int_* t613 = __retval610;
  return t613;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb614:
  _Bool __retval615;
    _Bool c616 = 0;
    __retval615 = c616;
    _Bool t617 = __retval615;
    return t617;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v618, int** v619) {
bb620:
  struct std___UninitDestroyGuard_int____void_* this621;
  int** __first622;
  this621 = v618;
  __first622 = v619;
  struct std___UninitDestroyGuard_int____void_* t623 = this621;
  int** t624 = __first622;
  int* t625 = *t624;
  t623->_M_first = t625;
  int** t626 = __first622;
  t623->_M_cur = t626;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v627, int* v628) {
bb629:
  int* __location630;
  int* __args631;
  int* __retval632;
  void* __loc633;
  __location630 = v627;
  __args631 = v628;
  int* t634 = __location630;
  void* cast635 = (void*)t634;
  __loc633 = cast635;
    void* t636 = __loc633;
    int* cast637 = (int*)t636;
    int* t638 = __args631;
    int t639 = *t638;
    *cast637 = t639;
    __retval632 = cast637;
    int* t640 = __retval632;
    return t640;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v641, int* v642) {
bb643:
  int* __p644;
  int* __args645;
  __p644 = v641;
  __args645 = v642;
    _Bool r646 = std____is_constant_evaluated();
    if (r646) {
      int* t647 = __p644;
      int* t648 = __args645;
      int* r649 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t647, t648);
      return;
    }
  int* t650 = __p644;
  void* cast651 = (void*)t650;
  int* cast652 = (int*)cast651;
  int* t653 = __args645;
  int t654 = *t653;
  *cast652 = t654;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v655) {
bb656:
  struct std___UninitDestroyGuard_int____void_* this657;
  this657 = v655;
  struct std___UninitDestroyGuard_int____void_* t658 = this657;
  int** c659 = ((void*)0);
  t658->_M_cur = c659;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v660) {
bb661:
  struct std___UninitDestroyGuard_int____void_* this662;
  this662 = v660;
  struct std___UninitDestroyGuard_int____void_* t663 = this662;
    int** t664 = t663->_M_cur;
    int** c665 = ((void*)0);
    _Bool c666 = ((t664 != c665)) ? 1 : 0;
    if (c666) {
      int* t667 = t663->_M_first;
      int** t668 = t663->_M_cur;
      int* t669 = *t668;
      void_std___Destroy_int__(t667, t669);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v670, int* v671, int* v672) {
bb673:
  int* __first674;
  int* __last675;
  int* __result676;
  int* __retval677;
  struct std___UninitDestroyGuard_int____void_ __guard678;
  __first674 = v670;
  __last675 = v671;
  __result676 = v672;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard678, &__result676);
      while (1) {
        int* t680 = __first674;
        int* t681 = __last675;
        _Bool c682 = ((t680 != t681)) ? 1 : 0;
        if (!c682) break;
        int* t683 = __result676;
        int* t684 = __first674;
        void_std___Construct_int__int__(t683, t684);
      for_step679: ;
        int* t685 = __first674;
        int c686 = 1;
        int* ptr687 = &(t685)[c686];
        __first674 = ptr687;
        int* t688 = __result676;
        int c689 = 1;
        int* ptr690 = &(t688)[c689];
        __result676 = ptr690;
      }
    std___UninitDestroyGuard_int___void___release(&__guard678);
    int* t691 = __result676;
    __retval677 = t691;
    int* t692 = __retval677;
    int* ret_val693 = t692;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard678);
    }
    return ret_val693;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v694) {
bb695:
  int* __it696;
  int* __retval697;
  __it696 = v694;
  int* t698 = __it696;
  __retval697 = t698;
  int* t699 = __retval697;
  return t699;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v700, int* v701, int* v702) {
bb703:
  int* __first704;
  int* __last705;
  int* __result706;
  int* __retval707;
  __first704 = v700;
  __last705 = v701;
  __result706 = v702;
      long __n708;
      int* t709 = __last705;
      int* t710 = __first704;
      long diff711 = t709 - t710;
      __n708 = diff711;
        long t712 = __n708;
        long c713 = 0;
        _Bool c714 = ((t712 > c713)) ? 1 : 0;
        if (c714) {
          int* t715 = __result706;
          int* r716 = int__std____niter_base_int__(t715);
          void* cast717 = (void*)r716;
          int* t718 = __first704;
          int* r719 = int__std____niter_base_int__(t718);
          void* cast720 = (void*)r719;
          long t721 = __n708;
          unsigned long cast722 = (unsigned long)t721;
          unsigned long c723 = 4;
          unsigned long b724 = cast722 * c723;
          void* r725 = memcpy(cast717, cast720, b724);
          long t726 = __n708;
          int* t727 = __result706;
          int* ptr728 = &(t727)[t726];
          __result706 = ptr728;
        }
      int* t729 = __result706;
      __retval707 = t729;
      int* t730 = __retval707;
      return t730;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v731, int* v732, int* v733, struct std__allocator_int_* v734) {
bb735:
  int* __first736;
  int* __last737;
  int* __result738;
  struct std__allocator_int_* unnamed739;
  int* __retval740;
  __first736 = v731;
  __last737 = v732;
  __result738 = v733;
  unnamed739 = v734;
    _Bool r741 = std__is_constant_evaluated();
    if (r741) {
      int* t742 = __first736;
      int* t743 = __last737;
      int* t744 = __result738;
      int* r745 = int__std____do_uninit_copy_int___int___int__(t742, t743, t744);
      __retval740 = r745;
      int* t746 = __retval740;
      return t746;
    }
    int* t747 = __first736;
    int* t748 = __last737;
    int* t749 = __result738;
    int* r750 = int__std__uninitialized_copy_int___int__(t747, t748, t749);
    __retval740 = r750;
    int* t751 = __retval740;
    return t751;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v752, int* v753, int* v754, unsigned long v755) {
bb756:
  struct std__vector_int__std__allocator_int__* this757;
  int* __first758;
  int* __last759;
  unsigned long __n760;
  int* __start761;
  this757 = v752;
  __first758 = v753;
  __last759 = v754;
  __n760 = v755;
  struct std__vector_int__std__allocator_int__* t762 = this757;
  struct std___Vector_base_int__std__allocator_int__* base763 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  unsigned long t764 = __n760;
  struct std___Vector_base_int__std__allocator_int__* base765 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  struct std__allocator_int_* r766 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base765);
  unsigned long r767 = std__vector_int__std__allocator_int______S_check_init_len(t764, r766);
  int* r768 = std___Vector_base_int__std__allocator_int______M_allocate(base763, r767);
  __start761 = r768;
  int* t769 = __start761;
  struct std___Vector_base_int__std__allocator_int__* base770 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base771 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base770->_M_impl) + 0);
  base771->_M_finish = t769;
  struct std___Vector_base_int__std__allocator_int__* base772 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base773 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base772->_M_impl) + 0);
  base773->_M_start = t769;
  int* t774 = __start761;
  unsigned long t775 = __n760;
  int* ptr776 = &(t774)[t775];
  struct std___Vector_base_int__std__allocator_int__* base777 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base778 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base777->_M_impl) + 0);
  base778->_M_end_of_storage = ptr776;
  int* t779 = __first758;
  int* t780 = __last759;
  int* t781 = __start761;
  struct std___Vector_base_int__std__allocator_int__* base782 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  struct std__allocator_int_* r783 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base782);
  int* r784 = int__std____uninitialized_copy_a_int___int___int___int_(t779, t780, t781, r783);
  struct std___Vector_base_int__std__allocator_int__* base785 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base786 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base785->_M_impl) + 0);
  base786->_M_finish = r784;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v787, int* v788, unsigned long v789) {
bb790:
  struct std____new_allocator_int_* this791;
  int* __p792;
  unsigned long __n793;
  this791 = v787;
  __p792 = v788;
  __n793 = v789;
  struct std____new_allocator_int_* t794 = this791;
    unsigned long c795 = 4;
    unsigned long c796 = 16;
    _Bool c797 = ((c795 > c796)) ? 1 : 0;
    if (c797) {
      int* t798 = __p792;
      void* cast799 = (void*)t798;
      unsigned long t800 = __n793;
      unsigned long c801 = 4;
      unsigned long b802 = t800 * c801;
      unsigned long c803 = 4;
      operator_delete_3(cast799, b802, c803);
      return;
    }
  int* t804 = __p792;
  void* cast805 = (void*)t804;
  unsigned long t806 = __n793;
  unsigned long c807 = 4;
  unsigned long b808 = t806 * c807;
  operator_delete_2(cast805, b808);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v809, int* v810, unsigned long v811) {
bb812:
  struct std__allocator_int_* this813;
  int* __p814;
  unsigned long __n815;
  this813 = v809;
  __p814 = v810;
  __n815 = v811;
  struct std__allocator_int_* t816 = this813;
    _Bool r817 = std____is_constant_evaluated();
    if (r817) {
      int* t818 = __p814;
      void* cast819 = (void*)t818;
      operator_delete(cast819);
      return;
    }
  struct std____new_allocator_int_* base820 = (struct std____new_allocator_int_*)((char *)t816 + 0);
  int* t821 = __p814;
  unsigned long t822 = __n815;
  std____new_allocator_int___deallocate(base820, t821, t822);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v823, int* v824, unsigned long v825) {
bb826:
  struct std__allocator_int_* __a827;
  int* __p828;
  unsigned long __n829;
  __a827 = v823;
  __p828 = v824;
  __n829 = v825;
  struct std__allocator_int_* t830 = __a827;
  int* t831 = __p828;
  unsigned long t832 = __n829;
  std__allocator_int___deallocate(t830, t831, t832);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v833, int* v834, unsigned long v835) {
bb836:
  struct std___Vector_base_int__std__allocator_int__* this837;
  int* __p838;
  unsigned long __n839;
  this837 = v833;
  __p838 = v834;
  __n839 = v835;
  struct std___Vector_base_int__std__allocator_int__* t840 = this837;
    int* t841 = __p838;
    _Bool cast842 = (_Bool)t841;
    if (cast842) {
      struct std__allocator_int_* base843 = (struct std__allocator_int_*)((char *)&(t840->_M_impl) + 0);
      int* t844 = __p838;
      unsigned long t845 = __n839;
      std__allocator_traits_std__allocator_int_____deallocate(base843, t844, t845);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v846) {
bb847:
  struct std___Vector_base_int__std__allocator_int__* this848;
  this848 = v846;
  struct std___Vector_base_int__std__allocator_int__* t849 = this848;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base850 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t849->_M_impl) + 0);
    int* t851 = base850->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base852 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t849->_M_impl) + 0);
    int* t853 = base852->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base854 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t849->_M_impl) + 0);
    int* t855 = base854->_M_start;
    long diff856 = t853 - t855;
    unsigned long cast857 = (unsigned long)diff856;
    std___Vector_base_int__std__allocator_int______M_deallocate(t849, t851, cast857);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t849->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v858, struct std____new_allocator_int_* v859) {
bb860:
  struct std____new_allocator_int_* this861;
  struct std____new_allocator_int_* unnamed862;
  this861 = v858;
  unnamed862 = v859;
  struct std____new_allocator_int_* t863 = this861;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v864) {
bb865:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this866;
  this866 = v864;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t867 = this866;
  int* c868 = ((void*)0);
  t867->_M_start = c868;
  int* c869 = ((void*)0);
  t867->_M_finish = c869;
  int* c870 = ((void*)0);
  t867->_M_end_of_storage = c870;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v871) {
bb872:
  int* __location873;
  __location873 = v871;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v874, int* v875) {
bb876:
  int* __first877;
  int* __last878;
  __first877 = v874;
  __last878 = v875;
      _Bool r879 = std____is_constant_evaluated();
      if (r879) {
          while (1) {
            int* t881 = __first877;
            int* t882 = __last878;
            _Bool c883 = ((t881 != t882)) ? 1 : 0;
            if (!c883) break;
            int* t884 = __first877;
            void_std__destroy_at_int_(t884);
          for_step880: ;
            int* t885 = __first877;
            int c886 = 1;
            int* ptr887 = &(t885)[c886];
            __first877 = ptr887;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v888, int* v889, struct std__allocator_int_* v890) {
bb891:
  int* __first892;
  int* __last893;
  struct std__allocator_int_* unnamed894;
  __first892 = v888;
  __last893 = v889;
  unnamed894 = v890;
  int* t895 = __first892;
  int* t896 = __last893;
  void_std___Destroy_int__(t895, t896);
  return;
}

