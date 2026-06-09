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
struct c_unique { int current; };
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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct c_unique UniqueNumber __attribute__((aligned(4)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[17] = "myvector[0] == 1";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm25/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[17] = "myvector[1] == 2";
char _str_5[17] = "myvector[2] == 3";
char _str_6[17] = "myvector[3] == 4";
char _str_7[20] = "\nmyvector contains:";
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void c_unique__c_unique(struct c_unique* p0);
void __cxx_global_var_init();
extern int rand();
int RandomNumber();
extern void srand(unsigned int p0);
extern long time(long* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int c_unique__operator__(struct c_unique* p0);
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______c_unique_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct c_unique p2);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: _ZN8c_uniqueC2Ev
void c_unique__c_unique(struct c_unique* v0) {
bb1:
  struct c_unique* this2;
  this2 = v0;
  struct c_unique* t3 = this2;
  int c4 = 0;
  t3->current = c4;
  return;
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb5:
  c_unique__c_unique(&UniqueNumber);
  return;
}

// function: _Z12RandomNumberv
int RandomNumber() {
bb6:
  int __retval7;
  int r8 = rand();
  int c9 = 100;
  int b10 = r8 % c9;
  __retval7 = b10;
  int t11 = __retval7;
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v17, unsigned long v18, struct std__allocator_int_* v19) {
bb20:
  struct std__vector_int__std__allocator_int__* this21;
  unsigned long __n22;
  struct std__allocator_int_* __a23;
  this21 = v17;
  __n22 = v18;
  __a23 = v19;
  struct std__vector_int__std__allocator_int__* t24 = this21;
  struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
  unsigned long t26 = __n22;
  struct std__allocator_int_* t27 = __a23;
  unsigned long r28 = std__vector_int__std__allocator_int______S_check_init_len(t26, t27);
  struct std__allocator_int_* t29 = __a23;
  std___Vector_base_int__std__allocator_int______Vector_base(base25, r28, t29);
    unsigned long t30 = __n22;
    std__vector_int__std__allocator_int______M_default_initialize(t24, t30);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v31) {
bb32:
  struct std__allocator_int_* this33;
  this33 = v31;
  struct std__allocator_int_* t34 = this33;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v35) {
bb36:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this37;
  this37 = v35;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t38 = this37;
  int* c39 = ((void*)0);
  t38->_M_current = c39;
  return;
}

// function: _ZSt8generateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFivEEvT_S9_T0_
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v40, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v41, void* v42) {
bb43:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first44;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last45;
  void* __gen46;
  __first44 = v40;
  __last45 = v41;
  __gen46 = v42;
    while (1) {
      _Bool r48 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first44, &__last45);
      _Bool u49 = !r48;
      if (!u49) break;
      void* t50 = __gen46;
      int r51 = ((int (*)())t50)();
      int* r52 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first44);
      *r52 = r51;
    for_step47: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r53 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first44);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v54, int** v55) {
bb56:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this57;
  int** __i58;
  this57 = v54;
  __i58 = v55;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = this57;
  int** t60 = __i58;
  int* t61 = *t60;
  t59->_M_current = t61;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base68 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base67->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval65, &base68->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t69 = __retval65;
  return t69;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v70) {
bb71:
  struct std__vector_int__std__allocator_int__* this72;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval73;
  this72 = v70;
  struct std__vector_int__std__allocator_int__* t74 = this72;
  struct std___Vector_base_int__std__allocator_int__* base75 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t74 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base76 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base75->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval73, &base76->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t77 = __retval73;
  return t77;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v78, int v79) {
bb80:
  int __a81;
  int __b82;
  int __retval83;
  __a81 = v78;
  __b82 = v79;
  int t84 = __a81;
  int t85 = __b82;
  int b86 = t84 | t85;
  __retval83 = b86;
  int t87 = __retval83;
  return t87;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v88) {
bb89:
  struct std__basic_ios_char__std__char_traits_char__* this90;
  int __retval91;
  this90 = v88;
  struct std__basic_ios_char__std__char_traits_char__* t92 = this90;
  struct std__ios_base* base93 = (struct std__ios_base*)((char *)t92 + 0);
  int t94 = base93->_M_streambuf_state;
  __retval91 = t94;
  int t95 = __retval91;
  return t95;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v96, int v97) {
bb98:
  struct std__basic_ios_char__std__char_traits_char__* this99;
  int __state100;
  this99 = v96;
  __state100 = v97;
  struct std__basic_ios_char__std__char_traits_char__* t101 = this99;
  int r102 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t101);
  int t103 = __state100;
  int r104 = std__operator_(r102, t103);
  std__basic_ios_char__std__char_traits_char_____clear(t101, r104);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v105, char* v106) {
bb107:
  char* __c1108;
  char* __c2109;
  _Bool __retval110;
  __c1108 = v105;
  __c2109 = v106;
  char* t111 = __c1108;
  char t112 = *t111;
  int cast113 = (int)t112;
  char* t114 = __c2109;
  char t115 = *t114;
  int cast116 = (int)t115;
  _Bool c117 = ((cast113 == cast116)) ? 1 : 0;
  __retval110 = c117;
  _Bool t118 = __retval110;
  return t118;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v119) {
bb120:
  char* __p121;
  unsigned long __retval122;
  unsigned long __i123;
  __p121 = v119;
  unsigned long c124 = 0;
  __i123 = c124;
    char ref_tmp0125;
    while (1) {
      unsigned long t126 = __i123;
      char* t127 = __p121;
      char* ptr128 = &(t127)[t126];
      char c129 = 0;
      ref_tmp0125 = c129;
      _Bool r130 = __gnu_cxx__char_traits_char___eq(ptr128, &ref_tmp0125);
      _Bool u131 = !r130;
      if (!u131) break;
      unsigned long t132 = __i123;
      unsigned long u133 = t132 + 1;
      __i123 = u133;
    }
  unsigned long t134 = __i123;
  __retval122 = t134;
  unsigned long t135 = __retval122;
  return t135;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v136) {
bb137:
  char* __s138;
  unsigned long __retval139;
  __s138 = v136;
    _Bool r140 = std____is_constant_evaluated();
    if (r140) {
      char* t141 = __s138;
      unsigned long r142 = __gnu_cxx__char_traits_char___length(t141);
      __retval139 = r142;
      unsigned long t143 = __retval139;
      return t143;
    }
  char* t144 = __s138;
  unsigned long r145 = strlen(t144);
  __retval139 = r145;
  unsigned long t146 = __retval139;
  return t146;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v147, char* v148) {
bb149:
  struct std__basic_ostream_char__std__char_traits_char__* __out150;
  char* __s151;
  struct std__basic_ostream_char__std__char_traits_char__* __retval152;
  __out150 = v147;
  __s151 = v148;
    char* t153 = __s151;
    _Bool cast154 = (_Bool)t153;
    _Bool u155 = !cast154;
    if (u155) {
      struct std__basic_ostream_char__std__char_traits_char__* t156 = __out150;
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
      struct std__basic_ios_char__std__char_traits_char__* cast167 = (struct std__basic_ios_char__std__char_traits_char__*)cast166;
      int t168 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast167, t168);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t169 = __out150;
      char* t170 = __s151;
      char* t171 = __s151;
      unsigned long r172 = std__char_traits_char___length(t171);
      long cast173 = (long)r172;
      struct std__basic_ostream_char__std__char_traits_char__* r174 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t169, t170, cast173);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t175 = __out150;
  __retval152 = t175;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = __retval152;
  return t176;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v177, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v178) {
bb179:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed181;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval182;
  this180 = v177;
  unnamed181 = v178;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t183 = this180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t184 = unnamed181;
  int* t185 = t184->_M_current;
  t183->_M_current = t185;
  __retval182 = t183;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t186 = __retval182;
  return t186;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v187) {
bb188:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this189;
  int** __retval190;
  this189 = v187;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t191 = this189;
  __retval190 = &t191->_M_current;
  int** t192 = __retval190;
  return t192;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v193, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v194) {
bb195:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs196;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs197;
  _Bool __retval198;
  __lhs196 = v193;
  __rhs197 = v194;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t199 = __lhs196;
  int** r200 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t199);
  int* t201 = *r200;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t202 = __rhs197;
  int** r203 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t202);
  int* t204 = *r203;
  _Bool c205 = ((t201 == t204)) ? 1 : 0;
  __retval198 = c205;
  _Bool t206 = __retval198;
  return t206;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v207) {
bb208:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this209;
  int* __retval210;
  this209 = v207;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t211 = this209;
  int* t212 = t211->_M_current;
  __retval210 = t212;
  int* t213 = __retval210;
  return t213;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v214) {
bb215:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval217;
  this216 = v214;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t218 = this216;
  int* t219 = t218->_M_current;
  int c220 = 1;
  int* ptr221 = &(t219)[c220];
  t218->_M_current = ptr221;
  __retval217 = t218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t222 = __retval217;
  return t222;
}

// function: _ZN8c_uniqueclEv
int c_unique__operator__(struct c_unique* v223) {
bb224:
  struct c_unique* this225;
  int __retval226;
  this225 = v223;
  struct c_unique* t227 = this225;
  int t228 = t227->current;
  int u229 = t228 + 1;
  t227->current = u229;
  __retval226 = u229;
  int t230 = __retval226;
  return t230;
}

// function: _ZSt8generateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE8c_uniqueEvT_S8_T0_
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______c_unique_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v231, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v232, struct c_unique v233) {
bb234:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first235;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last236;
  struct c_unique __gen237;
  __first235 = v231;
  __last236 = v232;
  __gen237 = v233;
    while (1) {
      _Bool r239 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first235, &__last236);
      _Bool u240 = !r239;
      if (!u240) break;
      int r241 = c_unique__operator__(&__gen237);
      int* r242 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first235);
      *r242 = r241;
    for_step238: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r243 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first235);
    }
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v244) {
bb245:
  struct std__vector_int__std__allocator_int__* this246;
  unsigned long __retval247;
  long __dif248;
  this246 = v244;
  struct std__vector_int__std__allocator_int__* t249 = this246;
  struct std___Vector_base_int__std__allocator_int__* base250 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t249 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base251 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base250->_M_impl) + 0);
  int* t252 = base251->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base253 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t249 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base254 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base253->_M_impl) + 0);
  int* t255 = base254->_M_start;
  long diff256 = t252 - t255;
  __dif248 = diff256;
    long t257 = __dif248;
    long c258 = 0;
    _Bool c259 = ((t257 < c258)) ? 1 : 0;
    if (c259) {
      __builtin_unreachable();
    }
  long t260 = __dif248;
  unsigned long cast261 = (unsigned long)t260;
  __retval247 = cast261;
  unsigned long t262 = __retval247;
  return t262;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v263, unsigned long v264) {
bb265:
  struct std__vector_int__std__allocator_int__* this266;
  unsigned long __n267;
  int* __retval268;
  this266 = v263;
  __n267 = v264;
  struct std__vector_int__std__allocator_int__* t269 = this266;
    do {
          unsigned long t270 = __n267;
          unsigned long r271 = std__vector_int__std__allocator_int_____size___const(t269);
          _Bool c272 = ((t270 < r271)) ? 1 : 0;
          _Bool u273 = !c272;
          if (u273) {
            char* cast274 = (char*)&(_str_9);
            int c275 = 1263;
            char* cast276 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast277 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast274, c275, cast276, cast277);
          }
      _Bool c278 = 0;
      if (!c278) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t269 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base279->_M_impl) + 0);
  int* t281 = base280->_M_start;
  unsigned long t282 = __n267;
  int* ptr283 = &(t281)[t282];
  __retval268 = ptr283;
  int* t284 = __retval268;
  return t284;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v285, void* v286) {
bb287:
  struct std__basic_ostream_char__std__char_traits_char__* this288;
  void* __pf289;
  struct std__basic_ostream_char__std__char_traits_char__* __retval290;
  this288 = v285;
  __pf289 = v286;
  struct std__basic_ostream_char__std__char_traits_char__* t291 = this288;
  void* t292 = __pf289;
  struct std__basic_ostream_char__std__char_traits_char__* r293 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t292)(t291);
  __retval290 = r293;
  struct std__basic_ostream_char__std__char_traits_char__* t294 = __retval290;
  return t294;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v295) {
bb296:
  struct std__basic_ostream_char__std__char_traits_char__* __os297;
  struct std__basic_ostream_char__std__char_traits_char__* __retval298;
  __os297 = v295;
  struct std__basic_ostream_char__std__char_traits_char__* t299 = __os297;
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__ostream__flush(t299);
  __retval298 = r300;
  struct std__basic_ostream_char__std__char_traits_char__* t301 = __retval298;
  return t301;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v302) {
bb303:
  struct std__ctype_char_* __f304;
  struct std__ctype_char_* __retval305;
  __f304 = v302;
    struct std__ctype_char_* t306 = __f304;
    _Bool cast307 = (_Bool)t306;
    _Bool u308 = !cast307;
    if (u308) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t309 = __f304;
  __retval305 = t309;
  struct std__ctype_char_* t310 = __retval305;
  return t310;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v311, char v312) {
bb313:
  struct std__ctype_char_* this314;
  char __c315;
  char __retval316;
  this314 = v311;
  __c315 = v312;
  struct std__ctype_char_* t317 = this314;
    char t318 = t317->_M_widen_ok;
    _Bool cast319 = (_Bool)t318;
    if (cast319) {
      char t320 = __c315;
      unsigned char cast321 = (unsigned char)t320;
      unsigned long cast322 = (unsigned long)cast321;
      char t323 = t317->_M_widen[cast322];
      __retval316 = t323;
      char t324 = __retval316;
      return t324;
    }
  std__ctype_char____M_widen_init___const(t317);
  char t325 = __c315;
  void** v326 = (void**)t317;
  void* v327 = *((void**)v326);
  char vcall330 = (char)__VERIFIER_virtual_call_char_char(t317, 6, t325);
  __retval316 = vcall330;
  char t331 = __retval316;
  return t331;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v332, char v333) {
bb334:
  struct std__basic_ios_char__std__char_traits_char__* this335;
  char __c336;
  char __retval337;
  this335 = v332;
  __c336 = v333;
  struct std__basic_ios_char__std__char_traits_char__* t338 = this335;
  struct std__ctype_char_* t339 = t338->_M_ctype;
  struct std__ctype_char_* r340 = std__ctype_char__const__std____check_facet_std__ctype_char___(t339);
  char t341 = __c336;
  char r342 = std__ctype_char___widen_char__const(r340, t341);
  __retval337 = r342;
  char t343 = __retval337;
  return t343;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v344) {
bb345:
  struct std__basic_ostream_char__std__char_traits_char__* __os346;
  struct std__basic_ostream_char__std__char_traits_char__* __retval347;
  __os346 = v344;
  struct std__basic_ostream_char__std__char_traits_char__* t348 = __os346;
  struct std__basic_ostream_char__std__char_traits_char__* t349 = __os346;
  void** v350 = (void**)t349;
  void* v351 = *((void**)v350);
  unsigned char* cast352 = (unsigned char*)v351;
  long c353 = -24;
  unsigned char* ptr354 = &(cast352)[c353];
  long* cast355 = (long*)ptr354;
  long t356 = *cast355;
  unsigned char* cast357 = (unsigned char*)t349;
  unsigned char* ptr358 = &(cast357)[t356];
  struct std__basic_ostream_char__std__char_traits_char__* cast359 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr358;
  struct std__basic_ios_char__std__char_traits_char__* cast360 = (struct std__basic_ios_char__std__char_traits_char__*)cast359;
  char c361 = 10;
  char r362 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast360, c361);
  struct std__basic_ostream_char__std__char_traits_char__* r363 = std__ostream__put(t348, r362);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r363);
  __retval347 = r364;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = __retval347;
  return t365;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v366) {
bb367:
  struct std__vector_int__std__allocator_int__* this368;
  this368 = v366;
  struct std__vector_int__std__allocator_int__* t369 = this368;
    struct std___Vector_base_int__std__allocator_int__* base370 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base371 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base370->_M_impl) + 0);
    int* t372 = base371->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base373 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base374 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base373->_M_impl) + 0);
    int* t375 = base374->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base376 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    struct std__allocator_int_* r377 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base376);
    void_std___Destroy_int___int_(t372, t375, r377);
  {
    struct std___Vector_base_int__std__allocator_int__* base378 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base378);
  }
  return;
}

// function: main
int main() {
bb379:
  int __retval380;
  struct std__vector_int__std__allocator_int__ myvector381;
  struct std__allocator_int_ ref_tmp0382;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it383;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0384;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1385;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2386;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3387;
  struct c_unique agg_tmp4388;
  int c389 = 0;
  __retval380 = c389;
  long* c390 = ((void*)0);
  long r391 = time(c390);
  unsigned int cast392 = (unsigned int)r391;
  srand(cast392);
  unsigned long c393 = 8;
  std__allocator_int___allocator_2(&ref_tmp0382);
    std__vector_int__std__allocator_int_____vector(&myvector381, c393, &ref_tmp0382);
  {
    std__allocator_int____allocator(&ref_tmp0382);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it383);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r394 = std__vector_int__std__allocator_int_____begin(&myvector381);
    agg_tmp0384 = r394;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r395 = std__vector_int__std__allocator_int_____end(&myvector381);
    agg_tmp1385 = r395;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t396 = agg_tmp0384;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t397 = agg_tmp1385;
    void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(t396, t397, &RandomNumber);
    char* cast398 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast398);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1400;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2401;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r402 = std__vector_int__std__allocator_int_____begin(&myvector381);
      ref_tmp1400 = r402;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r403 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it383, &ref_tmp1400);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r405 = std__vector_int__std__allocator_int_____end(&myvector381);
        ref_tmp2401 = r405;
        _Bool r406 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it383, &ref_tmp2401);
        _Bool u407 = !r406;
        if (!u407) break;
        char* cast408 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r409 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast408);
        int* r410 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it383);
        int t411 = *r410;
        struct std__basic_ostream_char__std__char_traits_char__* r412 = std__ostream__operator__(r409, t411);
      for_step404: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r413 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it383);
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r414 = std__vector_int__std__allocator_int_____begin(&myvector381);
    agg_tmp2386 = r414;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r415 = std__vector_int__std__allocator_int_____end(&myvector381);
    agg_tmp3387 = r415;
    agg_tmp4388 = *&UniqueNumber; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t416 = agg_tmp2386;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t417 = agg_tmp3387;
    struct c_unique t418 = agg_tmp4388;
    void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______c_unique_(t416, t417, t418);
    unsigned long c419 = 0;
    int* r420 = std__vector_int__std__allocator_int_____operator__(&myvector381, c419);
    int t421 = *r420;
    int c422 = 1;
    _Bool c423 = ((t421 == c422)) ? 1 : 0;
    if (c423) {
    } else {
      char* cast424 = (char*)&(_str_2);
      char* c425 = _str_3;
      unsigned int c426 = 42;
      char* cast427 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast424, c425, c426, cast427);
    }
    unsigned long c428 = 1;
    int* r429 = std__vector_int__std__allocator_int_____operator__(&myvector381, c428);
    int t430 = *r429;
    int c431 = 2;
    _Bool c432 = ((t430 == c431)) ? 1 : 0;
    if (c432) {
    } else {
      char* cast433 = (char*)&(_str_4);
      char* c434 = _str_3;
      unsigned int c435 = 43;
      char* cast436 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast433, c434, c435, cast436);
    }
    unsigned long c437 = 2;
    int* r438 = std__vector_int__std__allocator_int_____operator__(&myvector381, c437);
    int t439 = *r438;
    int c440 = 3;
    _Bool c441 = ((t439 == c440)) ? 1 : 0;
    if (c441) {
    } else {
      char* cast442 = (char*)&(_str_5);
      char* c443 = _str_3;
      unsigned int c444 = 44;
      char* cast445 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast442, c443, c444, cast445);
    }
    unsigned long c446 = 3;
    int* r447 = std__vector_int__std__allocator_int_____operator__(&myvector381, c446);
    int t448 = *r447;
    int c449 = 4;
    _Bool c450 = ((t448 == c449)) ? 1 : 0;
    if (c450) {
    } else {
      char* cast451 = (char*)&(_str_6);
      char* c452 = _str_3;
      unsigned int c453 = 45;
      char* cast454 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast451, c452, c453, cast454);
    }
    char* cast455 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r456 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast455);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3457;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4458;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r459 = std__vector_int__std__allocator_int_____begin(&myvector381);
      ref_tmp3457 = r459;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r460 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it383, &ref_tmp3457);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r462 = std__vector_int__std__allocator_int_____end(&myvector381);
        ref_tmp4458 = r462;
        _Bool r463 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it383, &ref_tmp4458);
        _Bool u464 = !r463;
        if (!u464) break;
        char* cast465 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r466 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast465);
        int* r467 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it383);
        int t468 = *r467;
        struct std__basic_ostream_char__std__char_traits_char__* r469 = std__ostream__operator__(r466, t468);
      for_step461: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r470 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it383);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r471 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c472 = 0;
    __retval380 = c472;
    int t473 = __retval380;
    int ret_val474 = t473;
    {
      std__vector_int__std__allocator_int______vector(&myvector381);
    }
    return ret_val474;
  int t475 = __retval380;
  return t475;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v476) {
bb477:
  struct std____new_allocator_int_* this478;
  this478 = v476;
  struct std____new_allocator_int_* t479 = this478;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v480, unsigned long* v481) {
bb482:
  unsigned long* __a483;
  unsigned long* __b484;
  unsigned long* __retval485;
  __a483 = v480;
  __b484 = v481;
    unsigned long* t486 = __b484;
    unsigned long t487 = *t486;
    unsigned long* t488 = __a483;
    unsigned long t489 = *t488;
    _Bool c490 = ((t487 < t489)) ? 1 : 0;
    if (c490) {
      unsigned long* t491 = __b484;
      __retval485 = t491;
      unsigned long* t492 = __retval485;
      return t492;
    }
  unsigned long* t493 = __a483;
  __retval485 = t493;
  unsigned long* t494 = __retval485;
  return t494;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v495) {
bb496:
  struct std__allocator_int_* __a497;
  unsigned long __retval498;
  unsigned long __diffmax499;
  unsigned long __allocmax500;
  __a497 = v495;
  unsigned long c501 = 2305843009213693951;
  __diffmax499 = c501;
  unsigned long c502 = 4611686018427387903;
  __allocmax500 = c502;
  unsigned long* r503 = unsigned_long_const__std__min_unsigned_long_(&__diffmax499, &__allocmax500);
  unsigned long t504 = *r503;
  __retval498 = t504;
  unsigned long t505 = __retval498;
  return t505;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v506, struct std__allocator_int_* v507) {
bb508:
  struct std__allocator_int_* this509;
  struct std__allocator_int_* __a510;
  this509 = v506;
  __a510 = v507;
  struct std__allocator_int_* t511 = this509;
  struct std____new_allocator_int_* base512 = (struct std____new_allocator_int_*)((char *)t511 + 0);
  struct std__allocator_int_* t513 = __a510;
  struct std____new_allocator_int_* base514 = (struct std____new_allocator_int_*)((char *)t513 + 0);
  std____new_allocator_int_____new_allocator(base512, base514);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v515, struct std__allocator_int_* v516) {
bb517:
  unsigned long __n518;
  struct std__allocator_int_* __a519;
  unsigned long __retval520;
  __n518 = v515;
  __a519 = v516;
    struct std__allocator_int_ ref_tmp0521;
    _Bool tmp_exprcleanup522;
    unsigned long t523 = __n518;
    struct std__allocator_int_* t524 = __a519;
    std__allocator_int___allocator(&ref_tmp0521, t524);
      unsigned long r525 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0521);
      _Bool c526 = ((t523 > r525)) ? 1 : 0;
      tmp_exprcleanup522 = c526;
    {
      std__allocator_int____allocator(&ref_tmp0521);
    }
    _Bool t527 = tmp_exprcleanup522;
    if (t527) {
      char* cast528 = (char*)&(_str_8);
      std____throw_length_error(cast528);
    }
  unsigned long t529 = __n518;
  __retval520 = t529;
  unsigned long t530 = __retval520;
  return t530;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v531, struct std__allocator_int_* v532) {
bb533:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this534;
  struct std__allocator_int_* __a535;
  this534 = v531;
  __a535 = v532;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t536 = this534;
  struct std__allocator_int_* base537 = (struct std__allocator_int_*)((char *)t536 + 0);
  struct std__allocator_int_* t538 = __a535;
  std__allocator_int___allocator(base537, t538);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base539 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t536 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base539);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb540:
  _Bool __retval541;
    _Bool c542 = 0;
    __retval541 = c542;
    _Bool t543 = __retval541;
    return t543;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v544) {
bb545:
  struct std____new_allocator_int_* this546;
  unsigned long __retval547;
  this546 = v544;
  struct std____new_allocator_int_* t548 = this546;
  unsigned long c549 = 9223372036854775807;
  unsigned long c550 = 4;
  unsigned long b551 = c549 / c550;
  __retval547 = b551;
  unsigned long t552 = __retval547;
  return t552;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v553, unsigned long v554, void* v555) {
bb556:
  struct std____new_allocator_int_* this557;
  unsigned long __n558;
  void* unnamed559;
  int* __retval560;
  this557 = v553;
  __n558 = v554;
  unnamed559 = v555;
  struct std____new_allocator_int_* t561 = this557;
    unsigned long t562 = __n558;
    unsigned long r563 = std____new_allocator_int____M_max_size___const(t561);
    _Bool c564 = ((t562 > r563)) ? 1 : 0;
    if (c564) {
        unsigned long t565 = __n558;
        unsigned long c566 = -1;
        unsigned long c567 = 4;
        unsigned long b568 = c566 / c567;
        _Bool c569 = ((t565 > b568)) ? 1 : 0;
        if (c569) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c570 = 4;
    unsigned long c571 = 16;
    _Bool c572 = ((c570 > c571)) ? 1 : 0;
    if (c572) {
      unsigned long __al573;
      unsigned long c574 = 4;
      __al573 = c574;
      unsigned long t575 = __n558;
      unsigned long c576 = 4;
      unsigned long b577 = t575 * c576;
      unsigned long t578 = __al573;
      void* r579 = operator_new_2(b577, t578);
      int* cast580 = (int*)r579;
      __retval560 = cast580;
      int* t581 = __retval560;
      return t581;
    }
  unsigned long t582 = __n558;
  unsigned long c583 = 4;
  unsigned long b584 = t582 * c583;
  void* r585 = operator_new(b584);
  int* cast586 = (int*)r585;
  __retval560 = cast586;
  int* t587 = __retval560;
  return t587;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v588, unsigned long v589) {
bb590:
  struct std__allocator_int_* this591;
  unsigned long __n592;
  int* __retval593;
  this591 = v588;
  __n592 = v589;
  struct std__allocator_int_* t594 = this591;
    _Bool r595 = std____is_constant_evaluated();
    if (r595) {
        unsigned long t596 = __n592;
        unsigned long c597 = 4;
        unsigned long ovr598;
        _Bool ovf599 = __builtin_mul_overflow(t596, c597, &ovr598);
        __n592 = ovr598;
        if (ovf599) {
          std____throw_bad_array_new_length();
        }
      unsigned long t600 = __n592;
      void* r601 = operator_new(t600);
      int* cast602 = (int*)r601;
      __retval593 = cast602;
      int* t603 = __retval593;
      return t603;
    }
  struct std____new_allocator_int_* base604 = (struct std____new_allocator_int_*)((char *)t594 + 0);
  unsigned long t605 = __n592;
  void* c606 = ((void*)0);
  int* r607 = std____new_allocator_int___allocate(base604, t605, c606);
  __retval593 = r607;
  int* t608 = __retval593;
  return t608;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v609, unsigned long v610) {
bb611:
  struct std__allocator_int_* __a612;
  unsigned long __n613;
  int* __retval614;
  __a612 = v609;
  __n613 = v610;
  struct std__allocator_int_* t615 = __a612;
  unsigned long t616 = __n613;
  int* r617 = std__allocator_int___allocate(t615, t616);
  __retval614 = r617;
  int* t618 = __retval614;
  return t618;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v619, unsigned long v620) {
bb621:
  struct std___Vector_base_int__std__allocator_int__* this622;
  unsigned long __n623;
  int* __retval624;
  this622 = v619;
  __n623 = v620;
  struct std___Vector_base_int__std__allocator_int__* t625 = this622;
  unsigned long t626 = __n623;
  unsigned long c627 = 0;
  _Bool c628 = ((t626 != c627)) ? 1 : 0;
  int* ternary629;
  if (c628) {
    struct std__allocator_int_* base630 = (struct std__allocator_int_*)((char *)&(t625->_M_impl) + 0);
    unsigned long t631 = __n623;
    int* r632 = std__allocator_traits_std__allocator_int_____allocate(base630, t631);
    ternary629 = (int*)r632;
  } else {
    int* c633 = ((void*)0);
    ternary629 = (int*)c633;
  }
  __retval624 = ternary629;
  int* t634 = __retval624;
  return t634;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v635, unsigned long v636) {
bb637:
  struct std___Vector_base_int__std__allocator_int__* this638;
  unsigned long __n639;
  this638 = v635;
  __n639 = v636;
  struct std___Vector_base_int__std__allocator_int__* t640 = this638;
  unsigned long t641 = __n639;
  int* r642 = std___Vector_base_int__std__allocator_int______M_allocate(t640, t641);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base643 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t640->_M_impl) + 0);
  base643->_M_start = r642;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base644 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t640->_M_impl) + 0);
  int* t645 = base644->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base646 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t640->_M_impl) + 0);
  base646->_M_finish = t645;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base647 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t640->_M_impl) + 0);
  int* t648 = base647->_M_start;
  unsigned long t649 = __n639;
  int* ptr650 = &(t648)[t649];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base651 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t640->_M_impl) + 0);
  base651->_M_end_of_storage = ptr650;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v652) {
bb653:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this654;
  this654 = v652;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t655 = this654;
  {
    struct std__allocator_int_* base656 = (struct std__allocator_int_*)((char *)t655 + 0);
    std__allocator_int____allocator(base656);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v657, unsigned long v658, struct std__allocator_int_* v659) {
bb660:
  struct std___Vector_base_int__std__allocator_int__* this661;
  unsigned long __n662;
  struct std__allocator_int_* __a663;
  this661 = v657;
  __n662 = v658;
  __a663 = v659;
  struct std___Vector_base_int__std__allocator_int__* t664 = this661;
  struct std__allocator_int_* t665 = __a663;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t664->_M_impl, t665);
    unsigned long t666 = __n662;
    std___Vector_base_int__std__allocator_int______M_create_storage(t664, t666);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb667:
  _Bool __retval668;
    _Bool c669 = 0;
    __retval668 = c669;
    _Bool t670 = __retval668;
    return t670;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v671, int** v672) {
bb673:
  struct std___UninitDestroyGuard_int____void_* this674;
  int** __first675;
  this674 = v671;
  __first675 = v672;
  struct std___UninitDestroyGuard_int____void_* t676 = this674;
  int** t677 = __first675;
  int* t678 = *t677;
  t676->_M_first = t678;
  int** t679 = __first675;
  t676->_M_cur = t679;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v680) {
bb681:
  int* __location682;
  int* __retval683;
  void* __loc684;
  __location682 = v680;
  int* t685 = __location682;
  void* cast686 = (void*)t685;
  __loc684 = cast686;
    void* t687 = __loc684;
    int* cast688 = (int*)t687;
    int c689 = 0;
    *cast688 = c689;
    __retval683 = cast688;
    int* t690 = __retval683;
    return t690;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v691) {
bb692:
  int* __p693;
  __p693 = v691;
    _Bool r694 = std____is_constant_evaluated();
    if (r694) {
      int* t695 = __p693;
      int* r696 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t695);
      return;
    }
  int* t697 = __p693;
  void* cast698 = (void*)t697;
  int* cast699 = (int*)cast698;
  int c700 = 0;
  *cast699 = c700;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v701) {
bb702:
  struct std___UninitDestroyGuard_int____void_* this703;
  this703 = v701;
  struct std___UninitDestroyGuard_int____void_* t704 = this703;
  int** c705 = ((void*)0);
  t704->_M_cur = c705;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v706) {
bb707:
  struct std___UninitDestroyGuard_int____void_* this708;
  this708 = v706;
  struct std___UninitDestroyGuard_int____void_* t709 = this708;
    int** t710 = t709->_M_cur;
    int** c711 = ((void*)0);
    _Bool c712 = ((t710 != c711)) ? 1 : 0;
    if (c712) {
      int* t713 = t709->_M_first;
      int** t714 = t709->_M_cur;
      int* t715 = *t714;
      void_std___Destroy_int__(t713, t715);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v716, unsigned long v717) {
bb718:
  int* __first719;
  unsigned long __n720;
  int* __retval721;
  struct std___UninitDestroyGuard_int____void_ __guard722;
  __first719 = v716;
  __n720 = v717;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard722, &__first719);
      while (1) {
        unsigned long t724 = __n720;
        unsigned long c725 = 0;
        _Bool c726 = ((t724 > c725)) ? 1 : 0;
        if (!c726) break;
        int* t727 = __first719;
        void_std___Construct_int_(t727);
      for_step723: ;
        unsigned long t728 = __n720;
        unsigned long u729 = t728 - 1;
        __n720 = u729;
        int* t730 = __first719;
        int c731 = 1;
        int* ptr732 = &(t730)[c731];
        __first719 = ptr732;
      }
    std___UninitDestroyGuard_int___void___release(&__guard722);
    int* t733 = __first719;
    __retval721 = t733;
    int* t734 = __retval721;
    int* ret_val735 = t734;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard722);
    }
    return ret_val735;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v736, int* v737, int* v738) {
bb739:
  int* __first740;
  int* __last741;
  int* __value742;
  _Bool __load_outside_loop743;
  int __val744;
  __first740 = v736;
  __last741 = v737;
  __value742 = v738;
  _Bool c745 = 1;
  __load_outside_loop743 = c745;
  int* t746 = __value742;
  int t747 = *t746;
  __val744 = t747;
    while (1) {
      int* t749 = __first740;
      int* t750 = __last741;
      _Bool c751 = ((t749 != t750)) ? 1 : 0;
      if (!c751) break;
      int t752 = __val744;
      int* t753 = __first740;
      *t753 = t752;
    for_step748: ;
      int* t754 = __first740;
      int c755 = 1;
      int* ptr756 = &(t754)[c755];
      __first740 = ptr756;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v757, int* v758, int* v759) {
bb760:
  int* __first761;
  int* __last762;
  int* __value763;
  __first761 = v757;
  __last762 = v758;
  __value763 = v759;
  int* t764 = __first761;
  int* t765 = __last762;
  int* t766 = __value763;
  void_std____fill_a1_int___int_(t764, t765, t766);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v767, unsigned long v768, int* v769, struct std__random_access_iterator_tag v770) {
bb771:
  int* __first772;
  unsigned long __n773;
  int* __value774;
  struct std__random_access_iterator_tag unnamed775;
  int* __retval776;
  __first772 = v767;
  __n773 = v768;
  __value774 = v769;
  unnamed775 = v770;
    unsigned long t777 = __n773;
    unsigned long c778 = 0;
    _Bool c779 = ((t777 <= c778)) ? 1 : 0;
    if (c779) {
      int* t780 = __first772;
      __retval776 = t780;
      int* t781 = __retval776;
      return t781;
    }
  int* t782 = __first772;
  int* t783 = __first772;
  unsigned long t784 = __n773;
  int* ptr785 = &(t783)[t784];
  int* t786 = __value774;
  void_std____fill_a_int___int_(t782, ptr785, t786);
  int* t787 = __first772;
  unsigned long t788 = __n773;
  int* ptr789 = &(t787)[t788];
  __retval776 = ptr789;
  int* t790 = __retval776;
  return t790;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v791) {
bb792:
  unsigned long __n793;
  unsigned long __retval794;
  __n793 = v791;
  unsigned long t795 = __n793;
  __retval794 = t795;
  unsigned long t796 = __retval794;
  return t796;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v797) {
bb798:
  int** unnamed799;
  struct std__random_access_iterator_tag __retval800;
  unnamed799 = v797;
  struct std__random_access_iterator_tag t801 = __retval800;
  return t801;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v802, unsigned long v803, int* v804) {
bb805:
  int* __first806;
  unsigned long __n807;
  int* __value808;
  int* __retval809;
  struct std__random_access_iterator_tag agg_tmp0810;
  __first806 = v802;
  __n807 = v803;
  __value808 = v804;
  int* t811 = __first806;
  unsigned long t812 = __n807;
  unsigned long r813 = std____size_to_integer(t812);
  int* t814 = __value808;
  struct std__random_access_iterator_tag r815 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first806);
  agg_tmp0810 = r815;
  struct std__random_access_iterator_tag t816 = agg_tmp0810;
  int* r817 = int__std____fill_n_a_int___unsigned_long__int_(t811, r813, t814, t816);
  __retval809 = r817;
  int* t818 = __retval809;
  return t818;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v819, unsigned long v820) {
bb821:
  int* __first822;
  unsigned long __n823;
  int* __retval824;
  __first822 = v819;
  __n823 = v820;
    unsigned long t825 = __n823;
    unsigned long c826 = 0;
    _Bool c827 = ((t825 > c826)) ? 1 : 0;
    if (c827) {
      int* __val828;
      int* t829 = __first822;
      __val828 = t829;
      int* t830 = __val828;
      void_std___Construct_int_(t830);
      int* t831 = __first822;
      int c832 = 1;
      int* ptr833 = &(t831)[c832];
      __first822 = ptr833;
      int* t834 = __first822;
      unsigned long t835 = __n823;
      unsigned long c836 = 1;
      unsigned long b837 = t835 - c836;
      int* t838 = __val828;
      int* r839 = int__std__fill_n_int___unsigned_long__int_(t834, b837, t838);
      __first822 = r839;
    }
  int* t840 = __first822;
  __retval824 = t840;
  int* t841 = __retval824;
  return t841;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v842, unsigned long v843) {
bb844:
  int* __first845;
  unsigned long __n846;
  int* __retval847;
  _Bool __can_fill848;
  __first845 = v842;
  __n846 = v843;
    _Bool r849 = std__is_constant_evaluated();
    if (r849) {
      int* t850 = __first845;
      unsigned long t851 = __n846;
      int* r852 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t850, t851);
      __retval847 = r852;
      int* t853 = __retval847;
      return t853;
    }
  _Bool c854 = 1;
  __can_fill848 = c854;
  int* t855 = __first845;
  unsigned long t856 = __n846;
  int* r857 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t855, t856);
  __retval847 = r857;
  int* t858 = __retval847;
  return t858;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v859, unsigned long v860, struct std__allocator_int_* v861) {
bb862:
  int* __first863;
  unsigned long __n864;
  struct std__allocator_int_* unnamed865;
  int* __retval866;
  __first863 = v859;
  __n864 = v860;
  unnamed865 = v861;
  int* t867 = __first863;
  unsigned long t868 = __n864;
  int* r869 = int__std____uninitialized_default_n_int___unsigned_long_(t867, t868);
  __retval866 = r869;
  int* t870 = __retval866;
  return t870;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v871) {
bb872:
  struct std___Vector_base_int__std__allocator_int__* this873;
  struct std__allocator_int_* __retval874;
  this873 = v871;
  struct std___Vector_base_int__std__allocator_int__* t875 = this873;
  struct std__allocator_int_* base876 = (struct std__allocator_int_*)((char *)&(t875->_M_impl) + 0);
  __retval874 = base876;
  struct std__allocator_int_* t877 = __retval874;
  return t877;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v878, unsigned long v879) {
bb880:
  struct std__vector_int__std__allocator_int__* this881;
  unsigned long __n882;
  this881 = v878;
  __n882 = v879;
  struct std__vector_int__std__allocator_int__* t883 = this881;
  struct std___Vector_base_int__std__allocator_int__* base884 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t883 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base885 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base884->_M_impl) + 0);
  int* t886 = base885->_M_start;
  unsigned long t887 = __n882;
  struct std___Vector_base_int__std__allocator_int__* base888 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t883 + 0);
  struct std__allocator_int_* r889 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base888);
  int* r890 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t886, t887, r889);
  struct std___Vector_base_int__std__allocator_int__* base891 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t883 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base892 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base891->_M_impl) + 0);
  base892->_M_finish = r890;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v893, int* v894, unsigned long v895) {
bb896:
  struct std____new_allocator_int_* this897;
  int* __p898;
  unsigned long __n899;
  this897 = v893;
  __p898 = v894;
  __n899 = v895;
  struct std____new_allocator_int_* t900 = this897;
    unsigned long c901 = 4;
    unsigned long c902 = 16;
    _Bool c903 = ((c901 > c902)) ? 1 : 0;
    if (c903) {
      int* t904 = __p898;
      void* cast905 = (void*)t904;
      unsigned long t906 = __n899;
      unsigned long c907 = 4;
      unsigned long b908 = t906 * c907;
      unsigned long c909 = 4;
      operator_delete_3(cast905, b908, c909);
      return;
    }
  int* t910 = __p898;
  void* cast911 = (void*)t910;
  unsigned long t912 = __n899;
  unsigned long c913 = 4;
  unsigned long b914 = t912 * c913;
  operator_delete_2(cast911, b914);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v915, int* v916, unsigned long v917) {
bb918:
  struct std__allocator_int_* this919;
  int* __p920;
  unsigned long __n921;
  this919 = v915;
  __p920 = v916;
  __n921 = v917;
  struct std__allocator_int_* t922 = this919;
    _Bool r923 = std____is_constant_evaluated();
    if (r923) {
      int* t924 = __p920;
      void* cast925 = (void*)t924;
      operator_delete(cast925);
      return;
    }
  struct std____new_allocator_int_* base926 = (struct std____new_allocator_int_*)((char *)t922 + 0);
  int* t927 = __p920;
  unsigned long t928 = __n921;
  std____new_allocator_int___deallocate(base926, t927, t928);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v929, int* v930, unsigned long v931) {
bb932:
  struct std__allocator_int_* __a933;
  int* __p934;
  unsigned long __n935;
  __a933 = v929;
  __p934 = v930;
  __n935 = v931;
  struct std__allocator_int_* t936 = __a933;
  int* t937 = __p934;
  unsigned long t938 = __n935;
  std__allocator_int___deallocate(t936, t937, t938);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v939, int* v940, unsigned long v941) {
bb942:
  struct std___Vector_base_int__std__allocator_int__* this943;
  int* __p944;
  unsigned long __n945;
  this943 = v939;
  __p944 = v940;
  __n945 = v941;
  struct std___Vector_base_int__std__allocator_int__* t946 = this943;
    int* t947 = __p944;
    _Bool cast948 = (_Bool)t947;
    if (cast948) {
      struct std__allocator_int_* base949 = (struct std__allocator_int_*)((char *)&(t946->_M_impl) + 0);
      int* t950 = __p944;
      unsigned long t951 = __n945;
      std__allocator_traits_std__allocator_int_____deallocate(base949, t950, t951);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v952) {
bb953:
  struct std___Vector_base_int__std__allocator_int__* this954;
  this954 = v952;
  struct std___Vector_base_int__std__allocator_int__* t955 = this954;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base956 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t955->_M_impl) + 0);
    int* t957 = base956->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base958 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t955->_M_impl) + 0);
    int* t959 = base958->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base960 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t955->_M_impl) + 0);
    int* t961 = base960->_M_start;
    long diff962 = t959 - t961;
    unsigned long cast963 = (unsigned long)diff962;
    std___Vector_base_int__std__allocator_int______M_deallocate(t955, t957, cast963);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t955->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v964, struct std____new_allocator_int_* v965) {
bb966:
  struct std____new_allocator_int_* this967;
  struct std____new_allocator_int_* unnamed968;
  this967 = v964;
  unnamed968 = v965;
  struct std____new_allocator_int_* t969 = this967;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v970) {
bb971:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this972;
  this972 = v970;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t973 = this972;
  int* c974 = ((void*)0);
  t973->_M_start = c974;
  int* c975 = ((void*)0);
  t973->_M_finish = c975;
  int* c976 = ((void*)0);
  t973->_M_end_of_storage = c976;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v977) {
bb978:
  int* __location979;
  __location979 = v977;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v980, int* v981) {
bb982:
  int* __first983;
  int* __last984;
  __first983 = v980;
  __last984 = v981;
      _Bool r985 = std____is_constant_evaluated();
      if (r985) {
          while (1) {
            int* t987 = __first983;
            int* t988 = __last984;
            _Bool c989 = ((t987 != t988)) ? 1 : 0;
            if (!c989) break;
            int* t990 = __first983;
            void_std__destroy_at_int_(t990);
          for_step986: ;
            int* t991 = __first983;
            int c992 = 1;
            int* ptr993 = &(t991)[c992];
            __first983 = ptr993;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v994, int* v995, struct std__allocator_int_* v996) {
bb997:
  int* __first998;
  int* __last999;
  struct std__allocator_int_* unnamed1000;
  __first998 = v994;
  __last999 = v995;
  unnamed1000 = v996;
  int* t1001 = __first998;
  int* t1002 = __last999;
  void_std___Destroy_int__(t1001, t1002);
  return;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb1003:
  __cxx_global_var_init();
  return;
}

