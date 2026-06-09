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

int __const_main_myints[5] = {20, 40, 60, 80, 100};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[51] = "(equal (myvector.begin(), myvector.end(), myints))";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm10/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[42] = "The contents of both sequences are equal.";
char _str_3[39] = "The contents of both sequences differ.";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool mypredicate(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v39) {
bb40:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  int** __retval42;
  this41 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t43 = this41;
  __retval42 = &t43->_M_current;
  int** t44 = __retval42;
  return t44;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v45, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v46) {
bb47:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs49;
  _Bool __retval50;
  __lhs48 = v45;
  __rhs49 = v46;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t51 = __lhs48;
  int** r52 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t51);
  int* t53 = *r52;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t54 = __rhs49;
  int** r55 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t54);
  int* t56 = *r55;
  _Bool c57 = ((t53 == t56)) ? 1 : 0;
  __retval50 = c57;
  _Bool t58 = __retval50;
  return t58;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v59) {
bb60:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this61;
  int* __retval62;
  this61 = v59;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t63 = this61;
  int* t64 = t63->_M_current;
  __retval62 = t64;
  int* t65 = __retval62;
  return t65;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v66) {
bb67:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this68;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval69;
  this68 = v66;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t70 = this68;
  int* t71 = t70->_M_current;
  int c72 = 1;
  int* ptr73 = &(t71)[c72];
  t70->_M_current = ptr73;
  __retval69 = t70;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t74 = __retval69;
  return t74;
}

// function: _Z5equalIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEbT_S7_PT0_
_Bool bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v75, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v76, int* v77) {
bb78:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first179;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last180;
  int* first281;
  _Bool __retval82;
  first179 = v75;
  last180 = v76;
  first281 = v77;
    while (1) {
      _Bool r83 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first179, &last180);
      _Bool u84 = !r83;
      if (!u84) break;
          int* r85 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&first179);
          int t86 = *r85;
          int* t87 = first281;
          int t88 = *t87;
          _Bool c89 = ((t86 == t88)) ? 1 : 0;
          _Bool u90 = !c89;
          if (u90) {
            _Bool c91 = 0;
            __retval82 = c91;
            _Bool t92 = __retval82;
            _Bool ret_val93 = t92;
            return ret_val93;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r94 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first179);
        int* t95 = first281;
        int c96 = 1;
        int* ptr97 = &(t95)[c96];
        first281 = ptr97;
    }
  _Bool c98 = 1;
  __retval82 = c98;
  _Bool t99 = __retval82;
  return t99;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v100, int** v101) {
bb102:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this103;
  int** __i104;
  this103 = v100;
  __i104 = v101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t105 = this103;
  int** t106 = __i104;
  int* t107 = *t106;
  t105->_M_current = t107;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v108) {
bb109:
  struct std__vector_int__std__allocator_int__* this110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval111;
  this110 = v108;
  struct std__vector_int__std__allocator_int__* t112 = this110;
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t112 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base113->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval111, &base114->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t115 = __retval111;
  return t115;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v116) {
bb117:
  struct std__vector_int__std__allocator_int__* this118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval119;
  this118 = v116;
  struct std__vector_int__std__allocator_int__* t120 = this118;
  struct std___Vector_base_int__std__allocator_int__* base121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base121->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval119, &base122->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t123 = __retval119;
  return t123;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v124, int v125) {
bb126:
  int __a127;
  int __b128;
  int __retval129;
  __a127 = v124;
  __b128 = v125;
  int t130 = __a127;
  int t131 = __b128;
  int b132 = t130 | t131;
  __retval129 = b132;
  int t133 = __retval129;
  return t133;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v134) {
bb135:
  struct std__basic_ios_char__std__char_traits_char__* this136;
  int __retval137;
  this136 = v134;
  struct std__basic_ios_char__std__char_traits_char__* t138 = this136;
  struct std__ios_base* base139 = (struct std__ios_base*)((char *)t138 + 0);
  int t140 = base139->_M_streambuf_state;
  __retval137 = t140;
  int t141 = __retval137;
  return t141;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v142, int v143) {
bb144:
  struct std__basic_ios_char__std__char_traits_char__* this145;
  int __state146;
  this145 = v142;
  __state146 = v143;
  struct std__basic_ios_char__std__char_traits_char__* t147 = this145;
  int r148 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t147);
  int t149 = __state146;
  int r150 = std__operator_(r148, t149);
  std__basic_ios_char__std__char_traits_char_____clear(t147, r150);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v151, char* v152) {
bb153:
  char* __c1154;
  char* __c2155;
  _Bool __retval156;
  __c1154 = v151;
  __c2155 = v152;
  char* t157 = __c1154;
  char t158 = *t157;
  int cast159 = (int)t158;
  char* t160 = __c2155;
  char t161 = *t160;
  int cast162 = (int)t161;
  _Bool c163 = ((cast159 == cast162)) ? 1 : 0;
  __retval156 = c163;
  _Bool t164 = __retval156;
  return t164;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v165) {
bb166:
  char* __p167;
  unsigned long __retval168;
  unsigned long __i169;
  __p167 = v165;
  unsigned long c170 = 0;
  __i169 = c170;
    char ref_tmp0171;
    while (1) {
      unsigned long t172 = __i169;
      char* t173 = __p167;
      char* ptr174 = &(t173)[t172];
      char c175 = 0;
      ref_tmp0171 = c175;
      _Bool r176 = __gnu_cxx__char_traits_char___eq(ptr174, &ref_tmp0171);
      _Bool u177 = !r176;
      if (!u177) break;
      unsigned long t178 = __i169;
      unsigned long u179 = t178 + 1;
      __i169 = u179;
    }
  unsigned long t180 = __i169;
  __retval168 = t180;
  unsigned long t181 = __retval168;
  return t181;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v182) {
bb183:
  char* __s184;
  unsigned long __retval185;
  __s184 = v182;
    _Bool r186 = std____is_constant_evaluated();
    if (r186) {
      char* t187 = __s184;
      unsigned long r188 = __gnu_cxx__char_traits_char___length(t187);
      __retval185 = r188;
      unsigned long t189 = __retval185;
      return t189;
    }
  char* t190 = __s184;
  unsigned long r191 = strlen(t190);
  __retval185 = r191;
  unsigned long t192 = __retval185;
  return t192;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v193, char* v194) {
bb195:
  struct std__basic_ostream_char__std__char_traits_char__* __out196;
  char* __s197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __out196 = v193;
  __s197 = v194;
    char* t199 = __s197;
    _Bool cast200 = (_Bool)t199;
    _Bool u201 = !cast200;
    if (u201) {
      struct std__basic_ostream_char__std__char_traits_char__* t202 = __out196;
      void** v203 = (void**)t202;
      void* v204 = *((void**)v203);
      unsigned char* cast205 = (unsigned char*)v204;
      long c206 = -24;
      unsigned char* ptr207 = &(cast205)[c206];
      long* cast208 = (long*)ptr207;
      long t209 = *cast208;
      unsigned char* cast210 = (unsigned char*)t202;
      unsigned char* ptr211 = &(cast210)[t209];
      struct std__basic_ostream_char__std__char_traits_char__* cast212 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr211;
      struct std__basic_ios_char__std__char_traits_char__* cast213 = (struct std__basic_ios_char__std__char_traits_char__*)cast212;
      int t214 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast213, t214);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t215 = __out196;
      char* t216 = __s197;
      char* t217 = __s197;
      unsigned long r218 = std__char_traits_char___length(t217);
      long cast219 = (long)r218;
      struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t215, t216, cast219);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __out196;
  __retval198 = t221;
  struct std__basic_ostream_char__std__char_traits_char__* t222 = __retval198;
  return t222;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v223, void* v224) {
bb225:
  struct std__basic_ostream_char__std__char_traits_char__* this226;
  void* __pf227;
  struct std__basic_ostream_char__std__char_traits_char__* __retval228;
  this226 = v223;
  __pf227 = v224;
  struct std__basic_ostream_char__std__char_traits_char__* t229 = this226;
  void* t230 = __pf227;
  struct std__basic_ostream_char__std__char_traits_char__* r231 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t230)(t229);
  __retval228 = r231;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = __retval228;
  return t232;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v233) {
bb234:
  struct std__basic_ostream_char__std__char_traits_char__* __os235;
  struct std__basic_ostream_char__std__char_traits_char__* __retval236;
  __os235 = v233;
  struct std__basic_ostream_char__std__char_traits_char__* t237 = __os235;
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__ostream__flush(t237);
  __retval236 = r238;
  struct std__basic_ostream_char__std__char_traits_char__* t239 = __retval236;
  return t239;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v240) {
bb241:
  struct std__ctype_char_* __f242;
  struct std__ctype_char_* __retval243;
  __f242 = v240;
    struct std__ctype_char_* t244 = __f242;
    _Bool cast245 = (_Bool)t244;
    _Bool u246 = !cast245;
    if (u246) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t247 = __f242;
  __retval243 = t247;
  struct std__ctype_char_* t248 = __retval243;
  return t248;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v249, char v250) {
bb251:
  struct std__ctype_char_* this252;
  char __c253;
  char __retval254;
  this252 = v249;
  __c253 = v250;
  struct std__ctype_char_* t255 = this252;
    char t256 = t255->_M_widen_ok;
    _Bool cast257 = (_Bool)t256;
    if (cast257) {
      char t258 = __c253;
      unsigned char cast259 = (unsigned char)t258;
      unsigned long cast260 = (unsigned long)cast259;
      char t261 = t255->_M_widen[cast260];
      __retval254 = t261;
      char t262 = __retval254;
      return t262;
    }
  std__ctype_char____M_widen_init___const(t255);
  char t263 = __c253;
  void** v264 = (void**)t255;
  void* v265 = *((void**)v264);
  char vcall268 = (char)__VERIFIER_virtual_call_char_char(t255, 6, t263);
  __retval254 = vcall268;
  char t269 = __retval254;
  return t269;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v270, char v271) {
bb272:
  struct std__basic_ios_char__std__char_traits_char__* this273;
  char __c274;
  char __retval275;
  this273 = v270;
  __c274 = v271;
  struct std__basic_ios_char__std__char_traits_char__* t276 = this273;
  struct std__ctype_char_* t277 = t276->_M_ctype;
  struct std__ctype_char_* r278 = std__ctype_char__const__std____check_facet_std__ctype_char___(t277);
  char t279 = __c274;
  char r280 = std__ctype_char___widen_char__const(r278, t279);
  __retval275 = r280;
  char t281 = __retval275;
  return t281;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v282) {
bb283:
  struct std__basic_ostream_char__std__char_traits_char__* __os284;
  struct std__basic_ostream_char__std__char_traits_char__* __retval285;
  __os284 = v282;
  struct std__basic_ostream_char__std__char_traits_char__* t286 = __os284;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __os284;
  void** v288 = (void**)t287;
  void* v289 = *((void**)v288);
  unsigned char* cast290 = (unsigned char*)v289;
  long c291 = -24;
  unsigned char* ptr292 = &(cast290)[c291];
  long* cast293 = (long*)ptr292;
  long t294 = *cast293;
  unsigned char* cast295 = (unsigned char*)t287;
  unsigned char* ptr296 = &(cast295)[t294];
  struct std__basic_ostream_char__std__char_traits_char__* cast297 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr296;
  struct std__basic_ios_char__std__char_traits_char__* cast298 = (struct std__basic_ios_char__std__char_traits_char__*)cast297;
  char c299 = 10;
  char r300 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast298, c299);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__ostream__put(t286, r300);
  struct std__basic_ostream_char__std__char_traits_char__* r302 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r301);
  __retval285 = r302;
  struct std__basic_ostream_char__std__char_traits_char__* t303 = __retval285;
  return t303;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v304) {
bb305:
  struct std__vector_int__std__allocator_int__* this306;
  unsigned long __retval307;
  long __dif308;
  this306 = v304;
  struct std__vector_int__std__allocator_int__* t309 = this306;
  struct std___Vector_base_int__std__allocator_int__* base310 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t309 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base311 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base310->_M_impl) + 0);
  int* t312 = base311->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base313 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t309 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base314 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base313->_M_impl) + 0);
  int* t315 = base314->_M_start;
  long diff316 = t312 - t315;
  __dif308 = diff316;
    long t317 = __dif308;
    long c318 = 0;
    _Bool c319 = ((t317 < c318)) ? 1 : 0;
    if (c319) {
      __builtin_unreachable();
    }
  long t320 = __dif308;
  unsigned long cast321 = (unsigned long)t320;
  __retval307 = cast321;
  unsigned long t322 = __retval307;
  return t322;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v323, unsigned long v324) {
bb325:
  struct std__vector_int__std__allocator_int__* this326;
  unsigned long __n327;
  int* __retval328;
  this326 = v323;
  __n327 = v324;
  struct std__vector_int__std__allocator_int__* t329 = this326;
    do {
          unsigned long t330 = __n327;
          unsigned long r331 = std__vector_int__std__allocator_int_____size___const(t329);
          _Bool c332 = ((t330 < r331)) ? 1 : 0;
          _Bool u333 = !c332;
          if (u333) {
            char* cast334 = (char*)&(_str_5);
            int c335 = 1263;
            char* cast336 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast337 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast334, c335, cast336, cast337);
          }
      _Bool c338 = 0;
      if (!c338) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base339 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t329 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base340 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base339->_M_impl) + 0);
  int* t341 = base340->_M_start;
  unsigned long t342 = __n327;
  int* ptr343 = &(t341)[t342];
  __retval328 = ptr343;
  int* t344 = __retval328;
  return t344;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v345) {
bb346:
  struct std__vector_int__std__allocator_int__* this347;
  this347 = v345;
  struct std__vector_int__std__allocator_int__* t348 = this347;
    struct std___Vector_base_int__std__allocator_int__* base349 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t348 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base350 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base349->_M_impl) + 0);
    int* t351 = base350->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base352 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t348 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base353 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base352->_M_impl) + 0);
    int* t354 = base353->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base355 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t348 + 0);
    struct std__allocator_int_* r356 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base355);
    void_std___Destroy_int___int_(t351, t354, r356);
  {
    struct std___Vector_base_int__std__allocator_int__* base357 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t348 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base357);
  }
  return;
}

// function: main
int main() {
bb358:
  int __retval359;
  int myints360[5];
  struct std__vector_int__std__allocator_int__ myvector361;
  struct std__allocator_int_ ref_tmp0362;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0363;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1364;
  int c365 = 0;
  __retval359 = c365;
  // array copy
  __builtin_memcpy(myints360, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast366 = (int*)&(myints360);
  int* cast367 = (int*)&(myints360);
  int c368 = 5;
  int* ptr369 = &(cast367)[c368];
  std__allocator_int___allocator_2(&ref_tmp0362);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector361, cast366, ptr369, &ref_tmp0362);
  {
    std__allocator_int____allocator(&ref_tmp0362);
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r370 = std__vector_int__std__allocator_int_____begin(&myvector361);
    agg_tmp0363 = r370;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r371 = std__vector_int__std__allocator_int_____end(&myvector361);
    agg_tmp1364 = r371;
    int* cast372 = (int*)&(myints360);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t373 = agg_tmp0363;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t374 = agg_tmp1364;
    _Bool r375 = bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t373, t374, cast372);
    if (r375) {
    } else {
      char* cast376 = (char*)&(_str);
      char* c377 = _str_1;
      unsigned int c378 = 55;
      char* cast379 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast376, c377, c378, cast379);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2380;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3381;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r382 = std__vector_int__std__allocator_int_____begin(&myvector361);
      agg_tmp2380 = r382;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r383 = std__vector_int__std__allocator_int_____end(&myvector361);
      agg_tmp3381 = r383;
      int* cast384 = (int*)&(myints360);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t385 = agg_tmp2380;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t386 = agg_tmp3381;
      _Bool r387 = bool_equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t385, t386, cast384);
      if (r387) {
        char* cast388 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r389 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast388);
        struct std__basic_ostream_char__std__char_traits_char__* r390 = std__ostream__operator___std__ostream_____(r389, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      } else {
        char* cast391 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r392 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast391);
        struct std__basic_ostream_char__std__char_traits_char__* r393 = std__ostream__operator___std__ostream_____(r392, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    int c394 = 81;
    unsigned long c395 = 3;
    int* r396 = std__vector_int__std__allocator_int_____operator__(&myvector361, c395);
    *r396 = c394;
    int c397 = 0;
    __retval359 = c397;
    int t398 = __retval359;
    int ret_val399 = t398;
    {
      std__vector_int__std__allocator_int______vector(&myvector361);
    }
    return ret_val399;
  int t400 = __retval359;
  return t400;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v401) {
bb402:
  struct std____new_allocator_int_* this403;
  this403 = v401;
  struct std____new_allocator_int_* t404 = this403;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v405, struct std__allocator_int_* v406) {
bb407:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this408;
  struct std__allocator_int_* __a409;
  this408 = v405;
  __a409 = v406;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t410 = this408;
  struct std__allocator_int_* base411 = (struct std__allocator_int_*)((char *)t410 + 0);
  struct std__allocator_int_* t412 = __a409;
  std__allocator_int___allocator(base411, t412);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base413 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t410 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base413);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v414) {
bb415:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this416;
  this416 = v414;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t417 = this416;
  {
    struct std__allocator_int_* base418 = (struct std__allocator_int_*)((char *)t417 + 0);
    std__allocator_int____allocator(base418);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v419, struct std__allocator_int_* v420) {
bb421:
  struct std___Vector_base_int__std__allocator_int__* this422;
  struct std__allocator_int_* __a423;
  this422 = v419;
  __a423 = v420;
  struct std___Vector_base_int__std__allocator_int__* t424 = this422;
  struct std__allocator_int_* t425 = __a423;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t424->_M_impl, t425);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v426, int** v427, int* v428) {
bb429:
  struct std__ranges____distance_fn* this430;
  int** __first431;
  int* __last432;
  long __retval433;
  this430 = v426;
  __first431 = v427;
  __last432 = v428;
  struct std__ranges____distance_fn* t434 = this430;
  int* t435 = __last432;
  int** t436 = __first431;
  int* t437 = *t436;
  long diff438 = t435 - t437;
  __retval433 = diff438;
  long t439 = __retval433;
  return t439;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb440:
  _Bool __retval441;
    _Bool c442 = 0;
    __retval441 = c442;
    _Bool t443 = __retval441;
    return t443;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v444) {
bb445:
  struct std____new_allocator_int_* this446;
  unsigned long __retval447;
  this446 = v444;
  struct std____new_allocator_int_* t448 = this446;
  unsigned long c449 = 9223372036854775807;
  unsigned long c450 = 4;
  unsigned long b451 = c449 / c450;
  __retval447 = b451;
  unsigned long t452 = __retval447;
  return t452;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v453, unsigned long v454, void* v455) {
bb456:
  struct std____new_allocator_int_* this457;
  unsigned long __n458;
  void* unnamed459;
  int* __retval460;
  this457 = v453;
  __n458 = v454;
  unnamed459 = v455;
  struct std____new_allocator_int_* t461 = this457;
    unsigned long t462 = __n458;
    unsigned long r463 = std____new_allocator_int____M_max_size___const(t461);
    _Bool c464 = ((t462 > r463)) ? 1 : 0;
    if (c464) {
        unsigned long t465 = __n458;
        unsigned long c466 = -1;
        unsigned long c467 = 4;
        unsigned long b468 = c466 / c467;
        _Bool c469 = ((t465 > b468)) ? 1 : 0;
        if (c469) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c470 = 4;
    unsigned long c471 = 16;
    _Bool c472 = ((c470 > c471)) ? 1 : 0;
    if (c472) {
      unsigned long __al473;
      unsigned long c474 = 4;
      __al473 = c474;
      unsigned long t475 = __n458;
      unsigned long c476 = 4;
      unsigned long b477 = t475 * c476;
      unsigned long t478 = __al473;
      void* r479 = operator_new_2(b477, t478);
      int* cast480 = (int*)r479;
      __retval460 = cast480;
      int* t481 = __retval460;
      return t481;
    }
  unsigned long t482 = __n458;
  unsigned long c483 = 4;
  unsigned long b484 = t482 * c483;
  void* r485 = operator_new(b484);
  int* cast486 = (int*)r485;
  __retval460 = cast486;
  int* t487 = __retval460;
  return t487;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v488, unsigned long v489) {
bb490:
  struct std__allocator_int_* this491;
  unsigned long __n492;
  int* __retval493;
  this491 = v488;
  __n492 = v489;
  struct std__allocator_int_* t494 = this491;
    _Bool r495 = std____is_constant_evaluated();
    if (r495) {
        unsigned long t496 = __n492;
        unsigned long c497 = 4;
        unsigned long ovr498;
        _Bool ovf499 = __builtin_mul_overflow(t496, c497, &ovr498);
        __n492 = ovr498;
        if (ovf499) {
          std____throw_bad_array_new_length();
        }
      unsigned long t500 = __n492;
      void* r501 = operator_new(t500);
      int* cast502 = (int*)r501;
      __retval493 = cast502;
      int* t503 = __retval493;
      return t503;
    }
  struct std____new_allocator_int_* base504 = (struct std____new_allocator_int_*)((char *)t494 + 0);
  unsigned long t505 = __n492;
  void* c506 = ((void*)0);
  int* r507 = std____new_allocator_int___allocate(base504, t505, c506);
  __retval493 = r507;
  int* t508 = __retval493;
  return t508;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v509, unsigned long v510) {
bb511:
  struct std__allocator_int_* __a512;
  unsigned long __n513;
  int* __retval514;
  __a512 = v509;
  __n513 = v510;
  struct std__allocator_int_* t515 = __a512;
  unsigned long t516 = __n513;
  int* r517 = std__allocator_int___allocate(t515, t516);
  __retval514 = r517;
  int* t518 = __retval514;
  return t518;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v519, unsigned long v520) {
bb521:
  struct std___Vector_base_int__std__allocator_int__* this522;
  unsigned long __n523;
  int* __retval524;
  this522 = v519;
  __n523 = v520;
  struct std___Vector_base_int__std__allocator_int__* t525 = this522;
  unsigned long t526 = __n523;
  unsigned long c527 = 0;
  _Bool c528 = ((t526 != c527)) ? 1 : 0;
  int* ternary529;
  if (c528) {
    struct std__allocator_int_* base530 = (struct std__allocator_int_*)((char *)&(t525->_M_impl) + 0);
    unsigned long t531 = __n523;
    int* r532 = std__allocator_traits_std__allocator_int_____allocate(base530, t531);
    ternary529 = (int*)r532;
  } else {
    int* c533 = ((void*)0);
    ternary529 = (int*)c533;
  }
  __retval524 = ternary529;
  int* t534 = __retval524;
  return t534;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v535, unsigned long* v536) {
bb537:
  unsigned long* __a538;
  unsigned long* __b539;
  unsigned long* __retval540;
  __a538 = v535;
  __b539 = v536;
    unsigned long* t541 = __b539;
    unsigned long t542 = *t541;
    unsigned long* t543 = __a538;
    unsigned long t544 = *t543;
    _Bool c545 = ((t542 < t544)) ? 1 : 0;
    if (c545) {
      unsigned long* t546 = __b539;
      __retval540 = t546;
      unsigned long* t547 = __retval540;
      return t547;
    }
  unsigned long* t548 = __a538;
  __retval540 = t548;
  unsigned long* t549 = __retval540;
  return t549;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v550) {
bb551:
  struct std__allocator_int_* __a552;
  unsigned long __retval553;
  unsigned long __diffmax554;
  unsigned long __allocmax555;
  __a552 = v550;
  unsigned long c556 = 2305843009213693951;
  __diffmax554 = c556;
  unsigned long c557 = 4611686018427387903;
  __allocmax555 = c557;
  unsigned long* r558 = unsigned_long_const__std__min_unsigned_long_(&__diffmax554, &__allocmax555);
  unsigned long t559 = *r558;
  __retval553 = t559;
  unsigned long t560 = __retval553;
  return t560;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v561, struct std__allocator_int_* v562) {
bb563:
  struct std__allocator_int_* this564;
  struct std__allocator_int_* __a565;
  this564 = v561;
  __a565 = v562;
  struct std__allocator_int_* t566 = this564;
  struct std____new_allocator_int_* base567 = (struct std____new_allocator_int_*)((char *)t566 + 0);
  struct std__allocator_int_* t568 = __a565;
  struct std____new_allocator_int_* base569 = (struct std____new_allocator_int_*)((char *)t568 + 0);
  std____new_allocator_int_____new_allocator(base567, base569);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v570, struct std__allocator_int_* v571) {
bb572:
  unsigned long __n573;
  struct std__allocator_int_* __a574;
  unsigned long __retval575;
  __n573 = v570;
  __a574 = v571;
    struct std__allocator_int_ ref_tmp0576;
    _Bool tmp_exprcleanup577;
    unsigned long t578 = __n573;
    struct std__allocator_int_* t579 = __a574;
    std__allocator_int___allocator(&ref_tmp0576, t579);
      unsigned long r580 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0576);
      _Bool c581 = ((t578 > r580)) ? 1 : 0;
      tmp_exprcleanup577 = c581;
    {
      std__allocator_int____allocator(&ref_tmp0576);
    }
    _Bool t582 = tmp_exprcleanup577;
    if (t582) {
      char* cast583 = (char*)&(_str_4);
      std____throw_length_error(cast583);
    }
  unsigned long t584 = __n573;
  __retval575 = t584;
  unsigned long t585 = __retval575;
  return t585;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v586) {
bb587:
  struct std___Vector_base_int__std__allocator_int__* this588;
  struct std__allocator_int_* __retval589;
  this588 = v586;
  struct std___Vector_base_int__std__allocator_int__* t590 = this588;
  struct std__allocator_int_* base591 = (struct std__allocator_int_*)((char *)&(t590->_M_impl) + 0);
  __retval589 = base591;
  struct std__allocator_int_* t592 = __retval589;
  return t592;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb593:
  _Bool __retval594;
    _Bool c595 = 0;
    __retval594 = c595;
    _Bool t596 = __retval594;
    return t596;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v597, int** v598) {
bb599:
  struct std___UninitDestroyGuard_int____void_* this600;
  int** __first601;
  this600 = v597;
  __first601 = v598;
  struct std___UninitDestroyGuard_int____void_* t602 = this600;
  int** t603 = __first601;
  int* t604 = *t603;
  t602->_M_first = t604;
  int** t605 = __first601;
  t602->_M_cur = t605;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v606, int* v607) {
bb608:
  int* __location609;
  int* __args610;
  int* __retval611;
  void* __loc612;
  __location609 = v606;
  __args610 = v607;
  int* t613 = __location609;
  void* cast614 = (void*)t613;
  __loc612 = cast614;
    void* t615 = __loc612;
    int* cast616 = (int*)t615;
    int* t617 = __args610;
    int t618 = *t617;
    *cast616 = t618;
    __retval611 = cast616;
    int* t619 = __retval611;
    return t619;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v620, int* v621) {
bb622:
  int* __p623;
  int* __args624;
  __p623 = v620;
  __args624 = v621;
    _Bool r625 = std____is_constant_evaluated();
    if (r625) {
      int* t626 = __p623;
      int* t627 = __args624;
      int* r628 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t626, t627);
      return;
    }
  int* t629 = __p623;
  void* cast630 = (void*)t629;
  int* cast631 = (int*)cast630;
  int* t632 = __args624;
  int t633 = *t632;
  *cast631 = t633;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v634) {
bb635:
  struct std___UninitDestroyGuard_int____void_* this636;
  this636 = v634;
  struct std___UninitDestroyGuard_int____void_* t637 = this636;
  int** c638 = ((void*)0);
  t637->_M_cur = c638;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v639) {
bb640:
  struct std___UninitDestroyGuard_int____void_* this641;
  this641 = v639;
  struct std___UninitDestroyGuard_int____void_* t642 = this641;
    int** t643 = t642->_M_cur;
    int** c644 = ((void*)0);
    _Bool c645 = ((t643 != c644)) ? 1 : 0;
    if (c645) {
      int* t646 = t642->_M_first;
      int** t647 = t642->_M_cur;
      int* t648 = *t647;
      void_std___Destroy_int__(t646, t648);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v649, int* v650, int* v651) {
bb652:
  int* __first653;
  int* __last654;
  int* __result655;
  int* __retval656;
  struct std___UninitDestroyGuard_int____void_ __guard657;
  __first653 = v649;
  __last654 = v650;
  __result655 = v651;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard657, &__result655);
      while (1) {
        int* t659 = __first653;
        int* t660 = __last654;
        _Bool c661 = ((t659 != t660)) ? 1 : 0;
        if (!c661) break;
        int* t662 = __result655;
        int* t663 = __first653;
        void_std___Construct_int__int__(t662, t663);
      for_step658: ;
        int* t664 = __first653;
        int c665 = 1;
        int* ptr666 = &(t664)[c665];
        __first653 = ptr666;
        int* t667 = __result655;
        int c668 = 1;
        int* ptr669 = &(t667)[c668];
        __result655 = ptr669;
      }
    std___UninitDestroyGuard_int___void___release(&__guard657);
    int* t670 = __result655;
    __retval656 = t670;
    int* t671 = __retval656;
    int* ret_val672 = t671;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard657);
    }
    return ret_val672;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v673) {
bb674:
  int* __it675;
  int* __retval676;
  __it675 = v673;
  int* t677 = __it675;
  __retval676 = t677;
  int* t678 = __retval676;
  return t678;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v679, int* v680, int* v681) {
bb682:
  int* __first683;
  int* __last684;
  int* __result685;
  int* __retval686;
  __first683 = v679;
  __last684 = v680;
  __result685 = v681;
      long __n687;
      int* t688 = __last684;
      int* t689 = __first683;
      long diff690 = t688 - t689;
      __n687 = diff690;
        long t691 = __n687;
        long c692 = 0;
        _Bool c693 = ((t691 > c692)) ? 1 : 0;
        if (c693) {
          int* t694 = __result685;
          int* r695 = int__std____niter_base_int__(t694);
          void* cast696 = (void*)r695;
          int* t697 = __first683;
          int* r698 = int__std____niter_base_int__(t697);
          void* cast699 = (void*)r698;
          long t700 = __n687;
          unsigned long cast701 = (unsigned long)t700;
          unsigned long c702 = 4;
          unsigned long b703 = cast701 * c702;
          void* r704 = memcpy(cast696, cast699, b703);
          long t705 = __n687;
          int* t706 = __result685;
          int* ptr707 = &(t706)[t705];
          __result685 = ptr707;
        }
      int* t708 = __result685;
      __retval686 = t708;
      int* t709 = __retval686;
      return t709;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v710, int* v711, int* v712, struct std__allocator_int_* v713) {
bb714:
  int* __first715;
  int* __last716;
  int* __result717;
  struct std__allocator_int_* unnamed718;
  int* __retval719;
  __first715 = v710;
  __last716 = v711;
  __result717 = v712;
  unnamed718 = v713;
    _Bool r720 = std__is_constant_evaluated();
    if (r720) {
      int* t721 = __first715;
      int* t722 = __last716;
      int* t723 = __result717;
      int* r724 = int__std____do_uninit_copy_int___int___int__(t721, t722, t723);
      __retval719 = r724;
      int* t725 = __retval719;
      return t725;
    }
    int* t726 = __first715;
    int* t727 = __last716;
    int* t728 = __result717;
    int* r729 = int__std__uninitialized_copy_int___int__(t726, t727, t728);
    __retval719 = r729;
    int* t730 = __retval719;
    return t730;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v731, int* v732, int* v733, unsigned long v734) {
bb735:
  struct std__vector_int__std__allocator_int__* this736;
  int* __first737;
  int* __last738;
  unsigned long __n739;
  int* __start740;
  this736 = v731;
  __first737 = v732;
  __last738 = v733;
  __n739 = v734;
  struct std__vector_int__std__allocator_int__* t741 = this736;
  struct std___Vector_base_int__std__allocator_int__* base742 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  unsigned long t743 = __n739;
  struct std___Vector_base_int__std__allocator_int__* base744 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std__allocator_int_* r745 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base744);
  unsigned long r746 = std__vector_int__std__allocator_int______S_check_init_len(t743, r745);
  int* r747 = std___Vector_base_int__std__allocator_int______M_allocate(base742, r746);
  __start740 = r747;
  int* t748 = __start740;
  struct std___Vector_base_int__std__allocator_int__* base749 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base750 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base749->_M_impl) + 0);
  base750->_M_finish = t748;
  struct std___Vector_base_int__std__allocator_int__* base751 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base752 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base751->_M_impl) + 0);
  base752->_M_start = t748;
  int* t753 = __start740;
  unsigned long t754 = __n739;
  int* ptr755 = &(t753)[t754];
  struct std___Vector_base_int__std__allocator_int__* base756 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base757 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base756->_M_impl) + 0);
  base757->_M_end_of_storage = ptr755;
  int* t758 = __first737;
  int* t759 = __last738;
  int* t760 = __start740;
  struct std___Vector_base_int__std__allocator_int__* base761 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std__allocator_int_* r762 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base761);
  int* r763 = int__std____uninitialized_copy_a_int___int___int___int_(t758, t759, t760, r762);
  struct std___Vector_base_int__std__allocator_int__* base764 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t741 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base765 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base764->_M_impl) + 0);
  base765->_M_finish = r763;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v766, int* v767, unsigned long v768) {
bb769:
  struct std____new_allocator_int_* this770;
  int* __p771;
  unsigned long __n772;
  this770 = v766;
  __p771 = v767;
  __n772 = v768;
  struct std____new_allocator_int_* t773 = this770;
    unsigned long c774 = 4;
    unsigned long c775 = 16;
    _Bool c776 = ((c774 > c775)) ? 1 : 0;
    if (c776) {
      int* t777 = __p771;
      void* cast778 = (void*)t777;
      unsigned long t779 = __n772;
      unsigned long c780 = 4;
      unsigned long b781 = t779 * c780;
      unsigned long c782 = 4;
      operator_delete_3(cast778, b781, c782);
      return;
    }
  int* t783 = __p771;
  void* cast784 = (void*)t783;
  unsigned long t785 = __n772;
  unsigned long c786 = 4;
  unsigned long b787 = t785 * c786;
  operator_delete_2(cast784, b787);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v788, int* v789, unsigned long v790) {
bb791:
  struct std__allocator_int_* this792;
  int* __p793;
  unsigned long __n794;
  this792 = v788;
  __p793 = v789;
  __n794 = v790;
  struct std__allocator_int_* t795 = this792;
    _Bool r796 = std____is_constant_evaluated();
    if (r796) {
      int* t797 = __p793;
      void* cast798 = (void*)t797;
      operator_delete(cast798);
      return;
    }
  struct std____new_allocator_int_* base799 = (struct std____new_allocator_int_*)((char *)t795 + 0);
  int* t800 = __p793;
  unsigned long t801 = __n794;
  std____new_allocator_int___deallocate(base799, t800, t801);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v802, int* v803, unsigned long v804) {
bb805:
  struct std__allocator_int_* __a806;
  int* __p807;
  unsigned long __n808;
  __a806 = v802;
  __p807 = v803;
  __n808 = v804;
  struct std__allocator_int_* t809 = __a806;
  int* t810 = __p807;
  unsigned long t811 = __n808;
  std__allocator_int___deallocate(t809, t810, t811);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v812, int* v813, unsigned long v814) {
bb815:
  struct std___Vector_base_int__std__allocator_int__* this816;
  int* __p817;
  unsigned long __n818;
  this816 = v812;
  __p817 = v813;
  __n818 = v814;
  struct std___Vector_base_int__std__allocator_int__* t819 = this816;
    int* t820 = __p817;
    _Bool cast821 = (_Bool)t820;
    if (cast821) {
      struct std__allocator_int_* base822 = (struct std__allocator_int_*)((char *)&(t819->_M_impl) + 0);
      int* t823 = __p817;
      unsigned long t824 = __n818;
      std__allocator_traits_std__allocator_int_____deallocate(base822, t823, t824);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v825) {
bb826:
  struct std___Vector_base_int__std__allocator_int__* this827;
  this827 = v825;
  struct std___Vector_base_int__std__allocator_int__* t828 = this827;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base829 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t828->_M_impl) + 0);
    int* t830 = base829->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base831 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t828->_M_impl) + 0);
    int* t832 = base831->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base833 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t828->_M_impl) + 0);
    int* t834 = base833->_M_start;
    long diff835 = t832 - t834;
    unsigned long cast836 = (unsigned long)diff835;
    std___Vector_base_int__std__allocator_int______M_deallocate(t828, t830, cast836);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t828->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v837, struct std____new_allocator_int_* v838) {
bb839:
  struct std____new_allocator_int_* this840;
  struct std____new_allocator_int_* unnamed841;
  this840 = v837;
  unnamed841 = v838;
  struct std____new_allocator_int_* t842 = this840;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v843) {
bb844:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this845;
  this845 = v843;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t846 = this845;
  int* c847 = ((void*)0);
  t846->_M_start = c847;
  int* c848 = ((void*)0);
  t846->_M_finish = c848;
  int* c849 = ((void*)0);
  t846->_M_end_of_storage = c849;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v850) {
bb851:
  int* __location852;
  __location852 = v850;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v853, int* v854) {
bb855:
  int* __first856;
  int* __last857;
  __first856 = v853;
  __last857 = v854;
      _Bool r858 = std____is_constant_evaluated();
      if (r858) {
          while (1) {
            int* t860 = __first856;
            int* t861 = __last857;
            _Bool c862 = ((t860 != t861)) ? 1 : 0;
            if (!c862) break;
            int* t863 = __first856;
            void_std__destroy_at_int_(t863);
          for_step859: ;
            int* t864 = __first856;
            int c865 = 1;
            int* ptr866 = &(t864)[c865];
            __first856 = ptr866;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v867, int* v868, struct std__allocator_int_* v869) {
bb870:
  int* __first871;
  int* __last872;
  struct std__allocator_int_* unnamed873;
  __first871 = v867;
  __last872 = v868;
  unnamed873 = v869;
  int* t874 = __first871;
  int* t875 = __last872;
  void_std___Destroy_int__(t874, t875);
  return;
}

