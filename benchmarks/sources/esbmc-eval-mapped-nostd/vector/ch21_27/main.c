extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct SumSquaresClass_int_ { unsigned char __field0; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[20] = "vector v contains:\n";
char _str_2[48] = "\n\nSum of squares of elements in integers using ";
char _str_3[29] = "binary\nfunction sumSquares: ";
char _str_4[32] = "binary\nfunction object of type ";
char _str_5[25] = "SumSquaresClass< int >: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_6[49] = "cannot create std::vector larger than max_size()";
int sumSquares(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
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
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__ p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int* p1);
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int** p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int p2, void* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int SumSquaresClass_int___operator__(struct SumSquaresClass_int_* p0, int* p1, int* p2);
int int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__SumSquaresClass_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int p2, struct SumSquaresClass_int_ p3);
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

// function: _Z10sumSquaresii
int sumSquares(int v0, int v1) {
bb2:
  int total3;
  int value4;
  int __retval5;
  total3 = v0;
  value4 = v1;
  int t6 = total3;
  int t7 = value4;
  int t8 = value4;
  int b9 = t7 * t8;
  int b10 = t6 + b9;
  __retval5 = b10;
  int t11 = __retval5;
  return t11;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v12) {
bb13:
  struct std__allocator_int_* this14;
  this14 = v12;
  struct std__allocator_int_* t15 = this14;
  struct std____new_allocator_int_* base16 = (struct std____new_allocator_int_*)((char *)t15 + 0);
  std____new_allocator_int_____new_allocator_2(base16);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v17, int* v18, int* v19, struct std__allocator_int_* v20) {
bb21:
  struct std__vector_int__std__allocator_int__* this22;
  int* __first23;
  int* __last24;
  struct std__allocator_int_* __a25;
  this22 = v17;
  __first23 = v18;
  __last24 = v19;
  __a25 = v20;
  struct std__vector_int__std__allocator_int__* t26 = this22;
  struct std___Vector_base_int__std__allocator_int__* base27 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t26 + 0);
  struct std__allocator_int_* t28 = __a25;
  std___Vector_base_int__std__allocator_int______Vector_base(base27, t28);
      unsigned long __n29;
      int* t30 = __last24;
      long r31 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first23, t30);
      unsigned long cast32 = (unsigned long)r31;
      __n29 = cast32;
      int* t33 = __first23;
      int* t34 = __last24;
      unsigned long t35 = __n29;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t26, t33, t34, t35);
      {
        struct std___Vector_base_int__std__allocator_int__* base36 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t26 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base36);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v37) {
bb38:
  struct std__allocator_int_* this39;
  this39 = v37;
  struct std__allocator_int_* t40 = this39;
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v41, struct std__basic_ostream_char__std__char_traits_char__* v42, char* v43) {
bb44:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this45;
  struct std__basic_ostream_char__std__char_traits_char__* __s46;
  char* __c47;
  this45 = v41;
  __s46 = v42;
  __c47 = v43;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t48 = this45;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base49 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t48 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t50 = __s46;
  t48->_M_stream = t50;
  char* t51 = __c47;
  t48->_M_string = t51;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v52, int v53) {
bb54:
  int __a55;
  int __b56;
  int __retval57;
  __a55 = v52;
  __b56 = v53;
  int t58 = __a55;
  int t59 = __b56;
  int b60 = t58 | t59;
  __retval57 = b60;
  int t61 = __retval57;
  return t61;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v62) {
bb63:
  struct std__basic_ios_char__std__char_traits_char__* this64;
  int __retval65;
  this64 = v62;
  struct std__basic_ios_char__std__char_traits_char__* t66 = this64;
  struct std__ios_base* base67 = (struct std__ios_base*)((char *)t66 + 0);
  int t68 = base67->_M_streambuf_state;
  __retval65 = t68;
  int t69 = __retval65;
  return t69;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v70, int v71) {
bb72:
  struct std__basic_ios_char__std__char_traits_char__* this73;
  int __state74;
  this73 = v70;
  __state74 = v71;
  struct std__basic_ios_char__std__char_traits_char__* t75 = this73;
  int r76 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t75);
  int t77 = __state74;
  int r78 = std__operator_(r76, t77);
  std__basic_ios_char__std__char_traits_char_____clear(t75, r78);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v79, char* v80) {
bb81:
  char* __c182;
  char* __c283;
  _Bool __retval84;
  __c182 = v79;
  __c283 = v80;
  char* t85 = __c182;
  char t86 = *t85;
  int cast87 = (int)t86;
  char* t88 = __c283;
  char t89 = *t88;
  int cast90 = (int)t89;
  _Bool c91 = ((cast87 == cast90)) ? 1 : 0;
  __retval84 = c91;
  _Bool t92 = __retval84;
  return t92;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v93) {
bb94:
  char* __p95;
  unsigned long __retval96;
  unsigned long __i97;
  __p95 = v93;
  unsigned long c98 = 0;
  __i97 = c98;
    char ref_tmp099;
    while (1) {
      unsigned long t100 = __i97;
      char* t101 = __p95;
      char* ptr102 = &(t101)[t100];
      char c103 = 0;
      ref_tmp099 = c103;
      _Bool r104 = __gnu_cxx__char_traits_char___eq(ptr102, &ref_tmp099);
      _Bool u105 = !r104;
      if (!u105) break;
      unsigned long t106 = __i97;
      unsigned long u107 = t106 + 1;
      __i97 = u107;
    }
  unsigned long t108 = __i97;
  __retval96 = t108;
  unsigned long t109 = __retval96;
  return t109;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v110) {
bb111:
  char* __s112;
  unsigned long __retval113;
  __s112 = v110;
    _Bool r114 = std____is_constant_evaluated();
    if (r114) {
      char* t115 = __s112;
      unsigned long r116 = __gnu_cxx__char_traits_char___length(t115);
      __retval113 = r116;
      unsigned long t117 = __retval113;
      return t117;
    }
  char* t118 = __s112;
  unsigned long r119 = strlen(t118);
  __retval113 = r119;
  unsigned long t120 = __retval113;
  return t120;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v121, char* v122) {
bb123:
  struct std__basic_ostream_char__std__char_traits_char__* __out124;
  char* __s125;
  struct std__basic_ostream_char__std__char_traits_char__* __retval126;
  __out124 = v121;
  __s125 = v122;
    char* t127 = __s125;
    _Bool cast128 = (_Bool)t127;
    _Bool u129 = !cast128;
    if (u129) {
      struct std__basic_ostream_char__std__char_traits_char__* t130 = __out124;
      void** v131 = (void**)t130;
      void* v132 = *((void**)v131);
      unsigned char* cast133 = (unsigned char*)v132;
      long c134 = -24;
      unsigned char* ptr135 = &(cast133)[c134];
      long* cast136 = (long*)ptr135;
      long t137 = *cast136;
      unsigned char* cast138 = (unsigned char*)t130;
      unsigned char* ptr139 = &(cast138)[t137];
      struct std__basic_ostream_char__std__char_traits_char__* cast140 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr139;
      struct std__basic_ios_char__std__char_traits_char__* cast141 = (struct std__basic_ios_char__std__char_traits_char__*)cast140;
      int t142 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast141, t142);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t143 = __out124;
      char* t144 = __s125;
      char* t145 = __s125;
      unsigned long r146 = std__char_traits_char___length(t145);
      long cast147 = (long)r146;
      struct std__basic_ostream_char__std__char_traits_char__* r148 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t143, t144, cast147);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __out124;
  __retval126 = t149;
  struct std__basic_ostream_char__std__char_traits_char__* t150 = __retval126;
  return t150;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v151, struct std__ostream_iterator_int__char__std__char_traits_char__ v152) {
bb153:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed154;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res155;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval156;
  unnamed154 = v151;
  __res155 = v152;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval156, &__res155);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t157 = __retval156;
  return t157;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v158) {
bb159:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this160;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval161;
  this160 = v158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t162 = this160;
  __retval161 = t162;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t163 = __retval161;
  return t163;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v164, int* v165) {
bb166:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this167;
  int* __value168;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval169;
  this167 = v164;
  __value168 = v165;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t170 = this167;
  struct std__basic_ostream_char__std__char_traits_char__* t171 = t170->_M_stream;
  int* t172 = __value168;
  int t173 = *t172;
  struct std__basic_ostream_char__std__char_traits_char__* r174 = std__ostream__operator__(t171, t173);
    char* t175 = t170->_M_string;
    _Bool cast176 = (_Bool)t175;
    if (cast176) {
      struct std__basic_ostream_char__std__char_traits_char__* t177 = t170->_M_stream;
      char* t178 = t170->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r179 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t177, t178);
    }
  __retval169 = t170;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t180 = __retval169;
  return t180;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v181, int** v182) {
bb183:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out184;
  int** __in185;
  __out184 = v181;
  __in185 = v182;
    int** t186 = __in185;
    int* t187 = *t186;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t188 = __out184;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r189 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t188);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r190 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r189, t187);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v191) {
bb192:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this193;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval194;
  this193 = v191;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t195 = this193;
  __retval194 = t195;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t196 = __retval194;
  return t196;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v197, int* v198, struct std__ostream_iterator_int__char__std__char_traits_char__ v199) {
bb200:
  int* __first201;
  int* __last202;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result203;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval204;
  __first201 = v197;
  __last202 = v198;
  __result203 = v199;
    while (1) {
      int* t206 = __first201;
      int* t207 = __last202;
      _Bool c208 = ((t206 != t207)) ? 1 : 0;
      if (!c208) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result203, &__first201);
    for_step205: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r209 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result203);
      int* t210 = __first201;
      int c211 = 1;
      int* ptr212 = &(t210)[c211];
      __first201 = ptr212;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval204, &__result203);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t213 = __retval204;
  return t213;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v214, int* v215, struct std__ostream_iterator_int__char__std__char_traits_char__ v216) {
bb217:
  int* __first218;
  int* __last219;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result220;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval221;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0222;
  __first218 = v214;
  __last219 = v215;
  __result220 = v216;
  int* t223 = __first218;
  int* t224 = __last219;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0222, &__result220);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t225 = agg_tmp0222;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r226 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t223, t224, t225);
  __retval221 = r226;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t227 = __retval221;
  return t227;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v228) {
bb229:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this230;
  int** __retval231;
  this230 = v228;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t232 = this230;
  __retval231 = &t232->_M_current;
  int** t233 = __retval231;
  return t233;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v234) {
bb235:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it236;
  int* __retval237;
  __it236 = v234;
  int** r238 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it236);
  int* t239 = *r238;
  __retval237 = t239;
  int* t240 = __retval237;
  return t240;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v241) {
bb242:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it243;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval244;
  __it243 = v241;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval244, &__it243);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t245 = __retval244;
  return t245;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v246, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v247, struct std__ostream_iterator_int__char__std__char_traits_char__ v248) {
bb249:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first250;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last251;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result252;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval253;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0254;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1255;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2256;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3257;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4258;
  __first250 = v246;
  __last251 = v247;
  __result252 = v248;
  agg_tmp1255 = __first250; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t259 = agg_tmp1255;
  int* r260 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t259);
  agg_tmp2256 = __last251; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t261 = agg_tmp2256;
  int* r262 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t261);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4258, &__result252);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t263 = agg_tmp4258;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r264 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t263);
  agg_tmp3257 = r264;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t265 = agg_tmp3257;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r266 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r260, r262, t265);
  agg_tmp0254 = r266;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t267 = agg_tmp0254;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r268 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result252, t267);
  __retval253 = r268;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t269 = __retval253;
  return t269;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v270) {
bb271:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval273;
  __it272 = v270;
  __retval273 = __it272; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t274 = __retval273;
  return t274;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v275, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v276, struct std__ostream_iterator_int__char__std__char_traits_char__ v277) {
bb278:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last280;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result281;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval282;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0283;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1284;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2285;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3286;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4287;
  __first279 = v275;
  __last280 = v276;
  __result281 = v277;
  agg_tmp1284 = __first279; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t288 = agg_tmp1284;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r289 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t288);
  agg_tmp0283 = r289;
  agg_tmp3286 = __last280; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t290 = agg_tmp3286;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r291 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t290);
  agg_tmp2285 = r291;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4287, &__result281);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t292 = agg_tmp0283;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t293 = agg_tmp2285;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t294 = agg_tmp4287;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r295 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t292, t293, t294);
  __retval282 = r295;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t296 = __retval282;
  return t296;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v297, int** v298) {
bb299:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this300;
  int** __i301;
  this300 = v297;
  __i301 = v298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t302 = this300;
  int** t303 = __i301;
  int* t304 = *t303;
  t302->_M_current = t304;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v305) {
bb306:
  struct std__vector_int__std__allocator_int__* this307;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval308;
  this307 = v305;
  struct std__vector_int__std__allocator_int__* t309 = this307;
  struct std___Vector_base_int__std__allocator_int__* base310 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t309 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base311 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base310->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval308, &base311->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t312 = __retval308;
  return t312;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v313) {
bb314:
  struct std__vector_int__std__allocator_int__* this315;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval316;
  this315 = v313;
  struct std__vector_int__std__allocator_int__* t317 = this315;
  struct std___Vector_base_int__std__allocator_int__* base318 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t317 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base319 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base318->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval316, &base319->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t320 = __retval316;
  return t320;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v321, struct std__ostream_iterator_int__char__std__char_traits_char__* v322) {
bb323:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this324;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj325;
  this324 = v321;
  __obj325 = v322;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t326 = this324;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base327 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t326 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t328 = __obj325;
  struct std__basic_ostream_char__std__char_traits_char__* t329 = t328->_M_stream;
  t326->_M_stream = t329;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t330 = __obj325;
  char* t331 = t330->_M_string;
  t326->_M_string = t331;
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v332, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v333) {
bb334:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs335;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs336;
  _Bool __retval337;
  __lhs335 = v332;
  __rhs336 = v333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t338 = __lhs335;
  int** r339 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t338);
  int* t340 = *r339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t341 = __rhs336;
  int** r342 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t341);
  int* t343 = *r342;
  _Bool c344 = ((t340 == t343)) ? 1 : 0;
  __retval337 = c344;
  _Bool t345 = __retval337;
  return t345;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v346) {
bb347:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this348;
  int* __retval349;
  this348 = v346;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t350 = this348;
  int* t351 = t350->_M_current;
  __retval349 = t351;
  int* t352 = __retval349;
  return t352;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v353) {
bb354:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this355;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval356;
  this355 = v353;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t357 = this355;
  int* t358 = t357->_M_current;
  int c359 = 1;
  int* ptr360 = &(t358)[c359];
  t357->_M_current = ptr360;
  __retval356 = t357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t361 = __retval356;
  return t361;
}

// function: _ZSt10accumulateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiPFiiiEET0_T_SA_S9_T1_
int int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v362, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v363, int v364, void* v365) {
bb366:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first367;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last368;
  int __init369;
  void* __binary_op370;
  int __retval371;
  __first367 = v362;
  __last368 = v363;
  __init369 = v364;
  __binary_op370 = v365;
    while (1) {
      _Bool r373 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first367, &__last368);
      _Bool u374 = !r373;
      if (!u374) break;
      void* t375 = __binary_op370;
      int t376 = __init369;
      int* r377 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first367);
      int t378 = *r377;
      int r379 = ((int (*)(int, int))t375)(t376, t378);
      __init369 = r379;
    for_step372: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r380 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first367);
    }
  int t381 = __init369;
  __retval371 = t381;
  int t382 = __retval371;
  return t382;
}

// function: _ZN15SumSquaresClassIiEclERKiS2_
int SumSquaresClass_int___operator__(struct SumSquaresClass_int_* v383, int* v384, int* v385) {
bb386:
  struct SumSquaresClass_int_* this387;
  int* total388;
  int* value389;
  int __retval390;
  this387 = v383;
  total388 = v384;
  value389 = v385;
  struct SumSquaresClass_int_* t391 = this387;
  int* t392 = total388;
  int t393 = *t392;
  int* t394 = value389;
  int t395 = *t394;
  int* t396 = value389;
  int t397 = *t396;
  int b398 = t395 * t397;
  int b399 = t393 + b398;
  __retval390 = b399;
  int t400 = __retval390;
  return t400;
}

// function: _ZSt10accumulateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEi15SumSquaresClassIiEET0_T_SA_S9_T1_
int int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__SumSquaresClass_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v401, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v402, int v403, struct SumSquaresClass_int_ v404) {
bb405:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last407;
  int __init408;
  struct SumSquaresClass_int_ __binary_op409;
  int __retval410;
  __first406 = v401;
  __last407 = v402;
  __init408 = v403;
  __binary_op409 = v404;
    while (1) {
      _Bool r412 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first406, &__last407);
      _Bool u413 = !r412;
      if (!u413) break;
      int* r414 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first406);
      int r415 = SumSquaresClass_int___operator__(&__binary_op409, &__init408, r414);
      __init408 = r415;
    for_step411: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r416 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first406);
    }
  int t417 = __init408;
  __retval410 = t417;
  int t418 = __retval410;
  return t418;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v419, void* v420) {
bb421:
  struct std__basic_ostream_char__std__char_traits_char__* this422;
  void* __pf423;
  struct std__basic_ostream_char__std__char_traits_char__* __retval424;
  this422 = v419;
  __pf423 = v420;
  struct std__basic_ostream_char__std__char_traits_char__* t425 = this422;
  void* t426 = __pf423;
  struct std__basic_ostream_char__std__char_traits_char__* r427 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t426)(t425);
  __retval424 = r427;
  struct std__basic_ostream_char__std__char_traits_char__* t428 = __retval424;
  return t428;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v429) {
bb430:
  struct std__basic_ostream_char__std__char_traits_char__* __os431;
  struct std__basic_ostream_char__std__char_traits_char__* __retval432;
  __os431 = v429;
  struct std__basic_ostream_char__std__char_traits_char__* t433 = __os431;
  struct std__basic_ostream_char__std__char_traits_char__* r434 = std__ostream__flush(t433);
  __retval432 = r434;
  struct std__basic_ostream_char__std__char_traits_char__* t435 = __retval432;
  return t435;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v436) {
bb437:
  struct std__ctype_char_* __f438;
  struct std__ctype_char_* __retval439;
  __f438 = v436;
    struct std__ctype_char_* t440 = __f438;
    _Bool cast441 = (_Bool)t440;
    _Bool u442 = !cast441;
    if (u442) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t443 = __f438;
  __retval439 = t443;
  struct std__ctype_char_* t444 = __retval439;
  return t444;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v445, char v446) {
bb447:
  struct std__ctype_char_* this448;
  char __c449;
  char __retval450;
  this448 = v445;
  __c449 = v446;
  struct std__ctype_char_* t451 = this448;
    char t452 = t451->_M_widen_ok;
    _Bool cast453 = (_Bool)t452;
    if (cast453) {
      char t454 = __c449;
      unsigned char cast455 = (unsigned char)t454;
      unsigned long cast456 = (unsigned long)cast455;
      char t457 = t451->_M_widen[cast456];
      __retval450 = t457;
      char t458 = __retval450;
      return t458;
    }
  std__ctype_char____M_widen_init___const(t451);
  char t459 = __c449;
  void** v460 = (void**)t451;
  void* v461 = *((void**)v460);
  char vcall464 = (char)__VERIFIER_virtual_call_char_char(t451, 6, t459);
  __retval450 = vcall464;
  char t465 = __retval450;
  return t465;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v466, char v467) {
bb468:
  struct std__basic_ios_char__std__char_traits_char__* this469;
  char __c470;
  char __retval471;
  this469 = v466;
  __c470 = v467;
  struct std__basic_ios_char__std__char_traits_char__* t472 = this469;
  struct std__ctype_char_* t473 = t472->_M_ctype;
  struct std__ctype_char_* r474 = std__ctype_char__const__std____check_facet_std__ctype_char___(t473);
  char t475 = __c470;
  char r476 = std__ctype_char___widen_char__const(r474, t475);
  __retval471 = r476;
  char t477 = __retval471;
  return t477;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v478) {
bb479:
  struct std__basic_ostream_char__std__char_traits_char__* __os480;
  struct std__basic_ostream_char__std__char_traits_char__* __retval481;
  __os480 = v478;
  struct std__basic_ostream_char__std__char_traits_char__* t482 = __os480;
  struct std__basic_ostream_char__std__char_traits_char__* t483 = __os480;
  void** v484 = (void**)t483;
  void* v485 = *((void**)v484);
  unsigned char* cast486 = (unsigned char*)v485;
  long c487 = -24;
  unsigned char* ptr488 = &(cast486)[c487];
  long* cast489 = (long*)ptr488;
  long t490 = *cast489;
  unsigned char* cast491 = (unsigned char*)t483;
  unsigned char* ptr492 = &(cast491)[t490];
  struct std__basic_ostream_char__std__char_traits_char__* cast493 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr492;
  struct std__basic_ios_char__std__char_traits_char__* cast494 = (struct std__basic_ios_char__std__char_traits_char__*)cast493;
  char c495 = 10;
  char r496 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast494, c495);
  struct std__basic_ostream_char__std__char_traits_char__* r497 = std__ostream__put(t482, r496);
  struct std__basic_ostream_char__std__char_traits_char__* r498 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r497);
  __retval481 = r498;
  struct std__basic_ostream_char__std__char_traits_char__* t499 = __retval481;
  return t499;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v500) {
bb501:
  struct std__vector_int__std__allocator_int__* this502;
  this502 = v500;
  struct std__vector_int__std__allocator_int__* t503 = this502;
    struct std___Vector_base_int__std__allocator_int__* base504 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t503 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base505 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base504->_M_impl) + 0);
    int* t506 = base505->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t503 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base508 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base507->_M_impl) + 0);
    int* t509 = base508->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base510 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t503 + 0);
    struct std__allocator_int_* r511 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base510);
    void_std___Destroy_int___int_(t506, t509, r511);
  {
    struct std___Vector_base_int__std__allocator_int__* base512 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t503 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base512);
  }
  return;
}

// function: main
int main() {
bb513:
  int __retval514;
  int SIZE515;
  int array516[10];
  struct std__vector_int__std__allocator_int__ integers517;
  struct std__allocator_int_ ref_tmp0518;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output519;
  int result520;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0521;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1522;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2523;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4525;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5526;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7528;
  struct SumSquaresClass_int_ agg_tmp8529;
  int c530 = 0;
  __retval514 = c530;
  int c531 = 10;
  SIZE515 = c531;
  // array copy
  __builtin_memcpy(array516, __const_main_array, (unsigned long)10 * sizeof(__const_main_array[0]));
  int* cast532 = (int*)&(array516);
  int* cast533 = (int*)&(array516);
  int t534 = SIZE515;
  int* ptr535 = &(cast533)[t534];
  std__allocator_int___allocator_2(&ref_tmp0518);
    std__vector_int__std__allocator_int_____vector_int___void_(&integers517, cast532, ptr535, &ref_tmp0518);
  {
    std__allocator_int____allocator(&ref_tmp0518);
  }
    char* cast536 = (char*)&(_str);
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output519, &_ZSt4cout, cast536);
    int c537 = 0;
    result520 = c537;
    char* cast538 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r539 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast538);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r540 = std__vector_int__std__allocator_int_____begin(&integers517);
    agg_tmp0521 = r540;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r541 = std__vector_int__std__allocator_int_____end(&integers517);
    agg_tmp1522 = r541;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2523, &output519);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t542 = agg_tmp0521;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t543 = agg_tmp1522;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t544 = agg_tmp2523;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r545 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t542, t543, t544);
    agg_tmp3524 = r545;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r546 = std__vector_int__std__allocator_int_____begin(&integers517);
    agg_tmp4525 = r546;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r547 = std__vector_int__std__allocator_int_____end(&integers517);
    agg_tmp5526 = r547;
    int c548 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t549 = agg_tmp4525;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t550 = agg_tmp5526;
    int r551 = int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int____(t549, t550, c548, &sumSquares);
    result520 = r551;
    char* cast552 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r553 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast552);
    char* cast554 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r555 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r553, cast554);
    int t556 = result520;
    struct std__basic_ostream_char__std__char_traits_char__* r557 = std__ostream__operator__(r555, t556);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r558 = std__vector_int__std__allocator_int_____begin(&integers517);
    agg_tmp6527 = r558;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r559 = std__vector_int__std__allocator_int_____end(&integers517);
    agg_tmp7528 = r559;
    int c560 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t561 = agg_tmp6527;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t562 = agg_tmp7528;
    struct SumSquaresClass_int_ t563 = agg_tmp8529;
    int r564 = int_std__accumulate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__SumSquaresClass_int___(t561, t562, c560, t563);
    result520 = r564;
    char* cast565 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r566 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast565);
    char* cast567 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r568 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r566, cast567);
    char* cast569 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r570 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r568, cast569);
    int t571 = result520;
    struct std__basic_ostream_char__std__char_traits_char__* r572 = std__ostream__operator__(r570, t571);
    struct std__basic_ostream_char__std__char_traits_char__* r573 = std__ostream__operator___std__ostream_____(r572, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c574 = 0;
    __retval514 = c574;
    int t575 = __retval514;
    int ret_val576 = t575;
    {
      std__vector_int__std__allocator_int______vector(&integers517);
    }
    return ret_val576;
  int t577 = __retval514;
  return t577;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v578) {
bb579:
  struct std____new_allocator_int_* this580;
  this580 = v578;
  struct std____new_allocator_int_* t581 = this580;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v582, struct std__allocator_int_* v583) {
bb584:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this585;
  struct std__allocator_int_* __a586;
  this585 = v582;
  __a586 = v583;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t587 = this585;
  struct std__allocator_int_* base588 = (struct std__allocator_int_*)((char *)t587 + 0);
  struct std__allocator_int_* t589 = __a586;
  std__allocator_int___allocator(base588, t589);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base590 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t587 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base590);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v591) {
bb592:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this593;
  this593 = v591;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t594 = this593;
  {
    struct std__allocator_int_* base595 = (struct std__allocator_int_*)((char *)t594 + 0);
    std__allocator_int____allocator(base595);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v596, struct std__allocator_int_* v597) {
bb598:
  struct std___Vector_base_int__std__allocator_int__* this599;
  struct std__allocator_int_* __a600;
  this599 = v596;
  __a600 = v597;
  struct std___Vector_base_int__std__allocator_int__* t601 = this599;
  struct std__allocator_int_* t602 = __a600;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t601->_M_impl, t602);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v603, int** v604, int* v605) {
bb606:
  struct std__ranges____distance_fn* this607;
  int** __first608;
  int* __last609;
  long __retval610;
  this607 = v603;
  __first608 = v604;
  __last609 = v605;
  struct std__ranges____distance_fn* t611 = this607;
  int* t612 = __last609;
  int** t613 = __first608;
  int* t614 = *t613;
  long diff615 = t612 - t614;
  __retval610 = diff615;
  long t616 = __retval610;
  return t616;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb617:
  _Bool __retval618;
    _Bool c619 = 0;
    __retval618 = c619;
    _Bool t620 = __retval618;
    return t620;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v621) {
bb622:
  struct std____new_allocator_int_* this623;
  unsigned long __retval624;
  this623 = v621;
  struct std____new_allocator_int_* t625 = this623;
  unsigned long c626 = 9223372036854775807;
  unsigned long c627 = 4;
  unsigned long b628 = c626 / c627;
  __retval624 = b628;
  unsigned long t629 = __retval624;
  return t629;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v630, unsigned long v631, void* v632) {
bb633:
  struct std____new_allocator_int_* this634;
  unsigned long __n635;
  void* unnamed636;
  int* __retval637;
  this634 = v630;
  __n635 = v631;
  unnamed636 = v632;
  struct std____new_allocator_int_* t638 = this634;
    unsigned long t639 = __n635;
    unsigned long r640 = std____new_allocator_int____M_max_size___const(t638);
    _Bool c641 = ((t639 > r640)) ? 1 : 0;
    if (c641) {
        unsigned long t642 = __n635;
        unsigned long c643 = -1;
        unsigned long c644 = 4;
        unsigned long b645 = c643 / c644;
        _Bool c646 = ((t642 > b645)) ? 1 : 0;
        if (c646) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c647 = 4;
    unsigned long c648 = 16;
    _Bool c649 = ((c647 > c648)) ? 1 : 0;
    if (c649) {
      unsigned long __al650;
      unsigned long c651 = 4;
      __al650 = c651;
      unsigned long t652 = __n635;
      unsigned long c653 = 4;
      unsigned long b654 = t652 * c653;
      unsigned long t655 = __al650;
      void* r656 = operator_new_2(b654, t655);
      int* cast657 = (int*)r656;
      __retval637 = cast657;
      int* t658 = __retval637;
      return t658;
    }
  unsigned long t659 = __n635;
  unsigned long c660 = 4;
  unsigned long b661 = t659 * c660;
  void* r662 = operator_new(b661);
  int* cast663 = (int*)r662;
  __retval637 = cast663;
  int* t664 = __retval637;
  return t664;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v665, unsigned long v666) {
bb667:
  struct std__allocator_int_* this668;
  unsigned long __n669;
  int* __retval670;
  this668 = v665;
  __n669 = v666;
  struct std__allocator_int_* t671 = this668;
    _Bool r672 = std____is_constant_evaluated();
    if (r672) {
        unsigned long t673 = __n669;
        unsigned long c674 = 4;
        unsigned long ovr675;
        _Bool ovf676 = __builtin_mul_overflow(t673, c674, &ovr675);
        __n669 = ovr675;
        if (ovf676) {
          std____throw_bad_array_new_length();
        }
      unsigned long t677 = __n669;
      void* r678 = operator_new(t677);
      int* cast679 = (int*)r678;
      __retval670 = cast679;
      int* t680 = __retval670;
      return t680;
    }
  struct std____new_allocator_int_* base681 = (struct std____new_allocator_int_*)((char *)t671 + 0);
  unsigned long t682 = __n669;
  void* c683 = ((void*)0);
  int* r684 = std____new_allocator_int___allocate(base681, t682, c683);
  __retval670 = r684;
  int* t685 = __retval670;
  return t685;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v686, unsigned long v687) {
bb688:
  struct std__allocator_int_* __a689;
  unsigned long __n690;
  int* __retval691;
  __a689 = v686;
  __n690 = v687;
  struct std__allocator_int_* t692 = __a689;
  unsigned long t693 = __n690;
  int* r694 = std__allocator_int___allocate(t692, t693);
  __retval691 = r694;
  int* t695 = __retval691;
  return t695;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v696, unsigned long v697) {
bb698:
  struct std___Vector_base_int__std__allocator_int__* this699;
  unsigned long __n700;
  int* __retval701;
  this699 = v696;
  __n700 = v697;
  struct std___Vector_base_int__std__allocator_int__* t702 = this699;
  unsigned long t703 = __n700;
  unsigned long c704 = 0;
  _Bool c705 = ((t703 != c704)) ? 1 : 0;
  int* ternary706;
  if (c705) {
    struct std__allocator_int_* base707 = (struct std__allocator_int_*)((char *)&(t702->_M_impl) + 0);
    unsigned long t708 = __n700;
    int* r709 = std__allocator_traits_std__allocator_int_____allocate(base707, t708);
    ternary706 = (int*)r709;
  } else {
    int* c710 = ((void*)0);
    ternary706 = (int*)c710;
  }
  __retval701 = ternary706;
  int* t711 = __retval701;
  return t711;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v712, unsigned long* v713) {
bb714:
  unsigned long* __a715;
  unsigned long* __b716;
  unsigned long* __retval717;
  __a715 = v712;
  __b716 = v713;
    unsigned long* t718 = __b716;
    unsigned long t719 = *t718;
    unsigned long* t720 = __a715;
    unsigned long t721 = *t720;
    _Bool c722 = ((t719 < t721)) ? 1 : 0;
    if (c722) {
      unsigned long* t723 = __b716;
      __retval717 = t723;
      unsigned long* t724 = __retval717;
      return t724;
    }
  unsigned long* t725 = __a715;
  __retval717 = t725;
  unsigned long* t726 = __retval717;
  return t726;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v727) {
bb728:
  struct std__allocator_int_* __a729;
  unsigned long __retval730;
  unsigned long __diffmax731;
  unsigned long __allocmax732;
  __a729 = v727;
  unsigned long c733 = 2305843009213693951;
  __diffmax731 = c733;
  unsigned long c734 = 4611686018427387903;
  __allocmax732 = c734;
  unsigned long* r735 = unsigned_long_const__std__min_unsigned_long_(&__diffmax731, &__allocmax732);
  unsigned long t736 = *r735;
  __retval730 = t736;
  unsigned long t737 = __retval730;
  return t737;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v738, struct std__allocator_int_* v739) {
bb740:
  struct std__allocator_int_* this741;
  struct std__allocator_int_* __a742;
  this741 = v738;
  __a742 = v739;
  struct std__allocator_int_* t743 = this741;
  struct std____new_allocator_int_* base744 = (struct std____new_allocator_int_*)((char *)t743 + 0);
  struct std__allocator_int_* t745 = __a742;
  struct std____new_allocator_int_* base746 = (struct std____new_allocator_int_*)((char *)t745 + 0);
  std____new_allocator_int_____new_allocator(base744, base746);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v747, struct std__allocator_int_* v748) {
bb749:
  unsigned long __n750;
  struct std__allocator_int_* __a751;
  unsigned long __retval752;
  __n750 = v747;
  __a751 = v748;
    struct std__allocator_int_ ref_tmp0753;
    _Bool tmp_exprcleanup754;
    unsigned long t755 = __n750;
    struct std__allocator_int_* t756 = __a751;
    std__allocator_int___allocator(&ref_tmp0753, t756);
      unsigned long r757 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0753);
      _Bool c758 = ((t755 > r757)) ? 1 : 0;
      tmp_exprcleanup754 = c758;
    {
      std__allocator_int____allocator(&ref_tmp0753);
    }
    _Bool t759 = tmp_exprcleanup754;
    if (t759) {
      char* cast760 = (char*)&(_str_6);
      std____throw_length_error(cast760);
    }
  unsigned long t761 = __n750;
  __retval752 = t761;
  unsigned long t762 = __retval752;
  return t762;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v763) {
bb764:
  struct std___Vector_base_int__std__allocator_int__* this765;
  struct std__allocator_int_* __retval766;
  this765 = v763;
  struct std___Vector_base_int__std__allocator_int__* t767 = this765;
  struct std__allocator_int_* base768 = (struct std__allocator_int_*)((char *)&(t767->_M_impl) + 0);
  __retval766 = base768;
  struct std__allocator_int_* t769 = __retval766;
  return t769;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb770:
  _Bool __retval771;
    _Bool c772 = 0;
    __retval771 = c772;
    _Bool t773 = __retval771;
    return t773;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v774, int** v775) {
bb776:
  struct std___UninitDestroyGuard_int____void_* this777;
  int** __first778;
  this777 = v774;
  __first778 = v775;
  struct std___UninitDestroyGuard_int____void_* t779 = this777;
  int** t780 = __first778;
  int* t781 = *t780;
  t779->_M_first = t781;
  int** t782 = __first778;
  t779->_M_cur = t782;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v783, int* v784) {
bb785:
  int* __location786;
  int* __args787;
  int* __retval788;
  void* __loc789;
  __location786 = v783;
  __args787 = v784;
  int* t790 = __location786;
  void* cast791 = (void*)t790;
  __loc789 = cast791;
    void* t792 = __loc789;
    int* cast793 = (int*)t792;
    int* t794 = __args787;
    int t795 = *t794;
    *cast793 = t795;
    __retval788 = cast793;
    int* t796 = __retval788;
    return t796;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v797, int* v798) {
bb799:
  int* __p800;
  int* __args801;
  __p800 = v797;
  __args801 = v798;
    _Bool r802 = std____is_constant_evaluated();
    if (r802) {
      int* t803 = __p800;
      int* t804 = __args801;
      int* r805 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t803, t804);
      return;
    }
  int* t806 = __p800;
  void* cast807 = (void*)t806;
  int* cast808 = (int*)cast807;
  int* t809 = __args801;
  int t810 = *t809;
  *cast808 = t810;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v811) {
bb812:
  struct std___UninitDestroyGuard_int____void_* this813;
  this813 = v811;
  struct std___UninitDestroyGuard_int____void_* t814 = this813;
  int** c815 = ((void*)0);
  t814->_M_cur = c815;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v816) {
bb817:
  struct std___UninitDestroyGuard_int____void_* this818;
  this818 = v816;
  struct std___UninitDestroyGuard_int____void_* t819 = this818;
    int** t820 = t819->_M_cur;
    int** c821 = ((void*)0);
    _Bool c822 = ((t820 != c821)) ? 1 : 0;
    if (c822) {
      int* t823 = t819->_M_first;
      int** t824 = t819->_M_cur;
      int* t825 = *t824;
      void_std___Destroy_int__(t823, t825);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v826, int* v827, int* v828) {
bb829:
  int* __first830;
  int* __last831;
  int* __result832;
  int* __retval833;
  struct std___UninitDestroyGuard_int____void_ __guard834;
  __first830 = v826;
  __last831 = v827;
  __result832 = v828;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard834, &__result832);
      while (1) {
        int* t836 = __first830;
        int* t837 = __last831;
        _Bool c838 = ((t836 != t837)) ? 1 : 0;
        if (!c838) break;
        int* t839 = __result832;
        int* t840 = __first830;
        void_std___Construct_int__int__(t839, t840);
      for_step835: ;
        int* t841 = __first830;
        int c842 = 1;
        int* ptr843 = &(t841)[c842];
        __first830 = ptr843;
        int* t844 = __result832;
        int c845 = 1;
        int* ptr846 = &(t844)[c845];
        __result832 = ptr846;
      }
    std___UninitDestroyGuard_int___void___release(&__guard834);
    int* t847 = __result832;
    __retval833 = t847;
    int* t848 = __retval833;
    int* ret_val849 = t848;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard834);
    }
    return ret_val849;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v850) {
bb851:
  int* __it852;
  int* __retval853;
  __it852 = v850;
  int* t854 = __it852;
  __retval853 = t854;
  int* t855 = __retval853;
  return t855;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v856, int* v857, int* v858) {
bb859:
  int* __first860;
  int* __last861;
  int* __result862;
  int* __retval863;
  __first860 = v856;
  __last861 = v857;
  __result862 = v858;
      long __n864;
      int* t865 = __last861;
      int* t866 = __first860;
      long diff867 = t865 - t866;
      __n864 = diff867;
        long t868 = __n864;
        long c869 = 0;
        _Bool c870 = ((t868 > c869)) ? 1 : 0;
        if (c870) {
          int* t871 = __result862;
          int* r872 = int__std____niter_base_int__(t871);
          void* cast873 = (void*)r872;
          int* t874 = __first860;
          int* r875 = int__std____niter_base_int__(t874);
          void* cast876 = (void*)r875;
          long t877 = __n864;
          unsigned long cast878 = (unsigned long)t877;
          unsigned long c879 = 4;
          unsigned long b880 = cast878 * c879;
          void* r881 = memcpy(cast873, cast876, b880);
          long t882 = __n864;
          int* t883 = __result862;
          int* ptr884 = &(t883)[t882];
          __result862 = ptr884;
        }
      int* t885 = __result862;
      __retval863 = t885;
      int* t886 = __retval863;
      return t886;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v887, int* v888, int* v889, struct std__allocator_int_* v890) {
bb891:
  int* __first892;
  int* __last893;
  int* __result894;
  struct std__allocator_int_* unnamed895;
  int* __retval896;
  __first892 = v887;
  __last893 = v888;
  __result894 = v889;
  unnamed895 = v890;
    _Bool r897 = std__is_constant_evaluated();
    if (r897) {
      int* t898 = __first892;
      int* t899 = __last893;
      int* t900 = __result894;
      int* r901 = int__std____do_uninit_copy_int___int___int__(t898, t899, t900);
      __retval896 = r901;
      int* t902 = __retval896;
      return t902;
    }
    int* t903 = __first892;
    int* t904 = __last893;
    int* t905 = __result894;
    int* r906 = int__std__uninitialized_copy_int___int__(t903, t904, t905);
    __retval896 = r906;
    int* t907 = __retval896;
    return t907;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v908, int* v909, int* v910, unsigned long v911) {
bb912:
  struct std__vector_int__std__allocator_int__* this913;
  int* __first914;
  int* __last915;
  unsigned long __n916;
  int* __start917;
  this913 = v908;
  __first914 = v909;
  __last915 = v910;
  __n916 = v911;
  struct std__vector_int__std__allocator_int__* t918 = this913;
  struct std___Vector_base_int__std__allocator_int__* base919 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  unsigned long t920 = __n916;
  struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  struct std__allocator_int_* r922 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base921);
  unsigned long r923 = std__vector_int__std__allocator_int______S_check_init_len(t920, r922);
  int* r924 = std___Vector_base_int__std__allocator_int______M_allocate(base919, r923);
  __start917 = r924;
  int* t925 = __start917;
  struct std___Vector_base_int__std__allocator_int__* base926 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base927 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base926->_M_impl) + 0);
  base927->_M_finish = t925;
  struct std___Vector_base_int__std__allocator_int__* base928 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base929 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base928->_M_impl) + 0);
  base929->_M_start = t925;
  int* t930 = __start917;
  unsigned long t931 = __n916;
  int* ptr932 = &(t930)[t931];
  struct std___Vector_base_int__std__allocator_int__* base933 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base934 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base933->_M_impl) + 0);
  base934->_M_end_of_storage = ptr932;
  int* t935 = __first914;
  int* t936 = __last915;
  int* t937 = __start917;
  struct std___Vector_base_int__std__allocator_int__* base938 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  struct std__allocator_int_* r939 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base938);
  int* r940 = int__std____uninitialized_copy_a_int___int___int___int_(t935, t936, t937, r939);
  struct std___Vector_base_int__std__allocator_int__* base941 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base942 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base941->_M_impl) + 0);
  base942->_M_finish = r940;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v943, int* v944, unsigned long v945) {
bb946:
  struct std____new_allocator_int_* this947;
  int* __p948;
  unsigned long __n949;
  this947 = v943;
  __p948 = v944;
  __n949 = v945;
  struct std____new_allocator_int_* t950 = this947;
    unsigned long c951 = 4;
    unsigned long c952 = 16;
    _Bool c953 = ((c951 > c952)) ? 1 : 0;
    if (c953) {
      int* t954 = __p948;
      void* cast955 = (void*)t954;
      unsigned long t956 = __n949;
      unsigned long c957 = 4;
      unsigned long b958 = t956 * c957;
      unsigned long c959 = 4;
      operator_delete_3(cast955, b958, c959);
      return;
    }
  int* t960 = __p948;
  void* cast961 = (void*)t960;
  unsigned long t962 = __n949;
  unsigned long c963 = 4;
  unsigned long b964 = t962 * c963;
  operator_delete_2(cast961, b964);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v965, int* v966, unsigned long v967) {
bb968:
  struct std__allocator_int_* this969;
  int* __p970;
  unsigned long __n971;
  this969 = v965;
  __p970 = v966;
  __n971 = v967;
  struct std__allocator_int_* t972 = this969;
    _Bool r973 = std____is_constant_evaluated();
    if (r973) {
      int* t974 = __p970;
      void* cast975 = (void*)t974;
      operator_delete(cast975);
      return;
    }
  struct std____new_allocator_int_* base976 = (struct std____new_allocator_int_*)((char *)t972 + 0);
  int* t977 = __p970;
  unsigned long t978 = __n971;
  std____new_allocator_int___deallocate(base976, t977, t978);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v979, int* v980, unsigned long v981) {
bb982:
  struct std__allocator_int_* __a983;
  int* __p984;
  unsigned long __n985;
  __a983 = v979;
  __p984 = v980;
  __n985 = v981;
  struct std__allocator_int_* t986 = __a983;
  int* t987 = __p984;
  unsigned long t988 = __n985;
  std__allocator_int___deallocate(t986, t987, t988);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v989, int* v990, unsigned long v991) {
bb992:
  struct std___Vector_base_int__std__allocator_int__* this993;
  int* __p994;
  unsigned long __n995;
  this993 = v989;
  __p994 = v990;
  __n995 = v991;
  struct std___Vector_base_int__std__allocator_int__* t996 = this993;
    int* t997 = __p994;
    _Bool cast998 = (_Bool)t997;
    if (cast998) {
      struct std__allocator_int_* base999 = (struct std__allocator_int_*)((char *)&(t996->_M_impl) + 0);
      int* t1000 = __p994;
      unsigned long t1001 = __n995;
      std__allocator_traits_std__allocator_int_____deallocate(base999, t1000, t1001);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1002) {
bb1003:
  struct std___Vector_base_int__std__allocator_int__* this1004;
  this1004 = v1002;
  struct std___Vector_base_int__std__allocator_int__* t1005 = this1004;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1006 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1005->_M_impl) + 0);
    int* t1007 = base1006->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1008 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1005->_M_impl) + 0);
    int* t1009 = base1008->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1010 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1005->_M_impl) + 0);
    int* t1011 = base1010->_M_start;
    long diff1012 = t1009 - t1011;
    unsigned long cast1013 = (unsigned long)diff1012;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1005, t1007, cast1013);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1005->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1014, struct std____new_allocator_int_* v1015) {
bb1016:
  struct std____new_allocator_int_* this1017;
  struct std____new_allocator_int_* unnamed1018;
  this1017 = v1014;
  unnamed1018 = v1015;
  struct std____new_allocator_int_* t1019 = this1017;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1020) {
bb1021:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1022;
  this1022 = v1020;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1023 = this1022;
  int* c1024 = ((void*)0);
  t1023->_M_start = c1024;
  int* c1025 = ((void*)0);
  t1023->_M_finish = c1025;
  int* c1026 = ((void*)0);
  t1023->_M_end_of_storage = c1026;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1027) {
bb1028:
  int* __location1029;
  __location1029 = v1027;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1030, int* v1031) {
bb1032:
  int* __first1033;
  int* __last1034;
  __first1033 = v1030;
  __last1034 = v1031;
      _Bool r1035 = std____is_constant_evaluated();
      if (r1035) {
          while (1) {
            int* t1037 = __first1033;
            int* t1038 = __last1034;
            _Bool c1039 = ((t1037 != t1038)) ? 1 : 0;
            if (!c1039) break;
            int* t1040 = __first1033;
            void_std__destroy_at_int_(t1040);
          for_step1036: ;
            int* t1041 = __first1033;
            int c1042 = 1;
            int* ptr1043 = &(t1041)[c1042];
            __first1033 = ptr1043;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1044, int* v1045, struct std__allocator_int_* v1046) {
bb1047:
  int* __first1048;
  int* __last1049;
  struct std__allocator_int_* unnamed1050;
  __first1048 = v1044;
  __last1049 = v1045;
  unnamed1050 = v1046;
  int* t1051 = __first1048;
  int* t1052 = __last1049;
  void_std___Destroy_int__(t1051, t1052);
  return;
}

