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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
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
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {5, 4, 3, 2, 1};
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3;
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "myvector[0] == 1";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm101/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 2";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] != 5";
char _str_5[17] = "myvector[4] == 4";
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_8[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v44, void* v45) {
bb46:
  struct std__basic_ostream_char__std__char_traits_char__* this47;
  void* __pf48;
  struct std__basic_ostream_char__std__char_traits_char__* __retval49;
  this47 = v44;
  __pf48 = v45;
  struct std__basic_ostream_char__std__char_traits_char__* t50 = this47;
  void* t51 = __pf48;
  struct std__basic_ostream_char__std__char_traits_char__* r52 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t51)(t50);
  __retval49 = r52;
  struct std__basic_ostream_char__std__char_traits_char__* t53 = __retval49;
  return t53;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v54) {
bb55:
  struct std__basic_ostream_char__std__char_traits_char__* __os56;
  struct std__basic_ostream_char__std__char_traits_char__* __retval57;
  __os56 = v54;
  struct std__basic_ostream_char__std__char_traits_char__* t58 = __os56;
  struct std__basic_ostream_char__std__char_traits_char__* r59 = std__ostream__flush(t58);
  __retval57 = r59;
  struct std__basic_ostream_char__std__char_traits_char__* t60 = __retval57;
  return t60;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v61) {
bb62:
  struct std__ctype_char_* __f63;
  struct std__ctype_char_* __retval64;
  __f63 = v61;
    struct std__ctype_char_* t65 = __f63;
    _Bool cast66 = (_Bool)t65;
    _Bool u67 = !cast66;
    if (u67) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t68 = __f63;
  __retval64 = t68;
  struct std__ctype_char_* t69 = __retval64;
  return t69;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v70, char v71) {
bb72:
  struct std__ctype_char_* this73;
  char __c74;
  char __retval75;
  this73 = v70;
  __c74 = v71;
  struct std__ctype_char_* t76 = this73;
    char t77 = t76->_M_widen_ok;
    _Bool cast78 = (_Bool)t77;
    if (cast78) {
      char t79 = __c74;
      unsigned char cast80 = (unsigned char)t79;
      unsigned long cast81 = (unsigned long)cast80;
      char t82 = t76->_M_widen[cast81];
      __retval75 = t82;
      char t83 = __retval75;
      return t83;
    }
  std__ctype_char____M_widen_init___const(t76);
  char t84 = __c74;
  void** v85 = (void**)t76;
  void* v86 = *((void**)v85);
  char vcall89 = (char)__VERIFIER_virtual_call_char_char(t76, 6, t84);
  __retval75 = vcall89;
  char t90 = __retval75;
  return t90;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v91, char v92) {
bb93:
  struct std__basic_ios_char__std__char_traits_char__* this94;
  char __c95;
  char __retval96;
  this94 = v91;
  __c95 = v92;
  struct std__basic_ios_char__std__char_traits_char__* t97 = this94;
  struct std__ctype_char_* t98 = t97->_M_ctype;
  struct std__ctype_char_* r99 = std__ctype_char__const__std____check_facet_std__ctype_char___(t98);
  char t100 = __c95;
  char r101 = std__ctype_char___widen_char__const(r99, t100);
  __retval96 = r101;
  char t102 = __retval96;
  return t102;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v103) {
bb104:
  struct std__basic_ostream_char__std__char_traits_char__* __os105;
  struct std__basic_ostream_char__std__char_traits_char__* __retval106;
  __os105 = v103;
  struct std__basic_ostream_char__std__char_traits_char__* t107 = __os105;
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __os105;
  void** v109 = (void**)t108;
  void* v110 = *((void**)v109);
  unsigned char* cast111 = (unsigned char*)v110;
  long c112 = -24;
  unsigned char* ptr113 = &(cast111)[c112];
  long* cast114 = (long*)ptr113;
  long t115 = *cast114;
  unsigned char* cast116 = (unsigned char*)t108;
  unsigned char* ptr117 = &(cast116)[t115];
  struct std__basic_ostream_char__std__char_traits_char__* cast118 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr117;
  struct std__basic_ios_char__std__char_traits_char__* cast119 = (struct std__basic_ios_char__std__char_traits_char__*)cast118;
  char c120 = 10;
  char r121 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast119, c120);
  struct std__basic_ostream_char__std__char_traits_char__* r122 = std__ostream__put(t107, r121);
  struct std__basic_ostream_char__std__char_traits_char__* r123 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r122);
  __retval106 = r123;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __retval106;
  return t124;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v125) {
bb126:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this127;
  int** __retval128;
  this127 = v125;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t129 = this127;
  __retval128 = &t129->_M_current;
  int** t130 = __retval128;
  return t130;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v131, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v132) {
bb133:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs135;
  long __retval136;
  __lhs134 = v131;
  __rhs135 = v132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t137 = __lhs134;
  int** r138 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t137);
  int* t139 = *r138;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t140 = __rhs135;
  int** r141 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t140);
  int* t142 = *r141;
  long diff143 = t139 - t142;
  __retval136 = diff143;
  long t144 = __retval136;
  return t144;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* v145, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v146, int* v147) {
bb148:
  struct __gnu_cxx____ops___Iter_less_val* this149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it150;
  int* __val151;
  _Bool __retval152;
  this149 = v145;
  __it150 = v146;
  __val151 = v147;
  struct __gnu_cxx____ops___Iter_less_val* t153 = this149;
  int* r154 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it150);
  int t155 = *r154;
  int* t156 = __val151;
  int t157 = *t156;
  _Bool c158 = ((t155 < t157)) ? 1 : 0;
  __retval152 = c158;
  _Bool t159 = __retval152;
  return t159;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_less_valEEvT_T0_SA_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v160, long v161, long v162, int v163, struct __gnu_cxx____ops___Iter_less_val* v164) {
bb165:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first166;
  long __holeIndex167;
  long __topIndex168;
  int __value169;
  struct __gnu_cxx____ops___Iter_less_val* __comp170;
  long __parent171;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2172;
  __first166 = v160;
  __holeIndex167 = v161;
  __topIndex168 = v162;
  __value169 = v163;
  __comp170 = v164;
  long t173 = __holeIndex167;
  long c174 = 1;
  long b175 = t173 - c174;
  long c176 = 2;
  long b177 = b175 / c176;
  __parent171 = b177;
    while (1) {
      long t178 = __holeIndex167;
      long t179 = __topIndex168;
      _Bool c180 = ((t178 > t179)) ? 1 : 0;
      _Bool ternary181;
      if (c180) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0182;
        struct __gnu_cxx____ops___Iter_less_val* t183 = __comp170;
        long t184 = __parent171;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r185 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first166, t184);
        agg_tmp0182 = r185;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t186 = agg_tmp0182;
        _Bool r187 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(t183, t186, &__value169);
        ternary181 = (_Bool)r187;
      } else {
        _Bool c188 = 0;
        ternary181 = (_Bool)c188;
      }
      if (!ternary181) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0189;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1190;
        long t191 = __parent171;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r192 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first166, t191);
        ref_tmp0189 = r192;
        int* r193 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0189);
        int t194 = *r193;
        long t195 = __holeIndex167;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r196 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first166, t195);
        ref_tmp1190 = r196;
        int* r197 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1190);
        *r197 = t194;
        long t198 = __parent171;
        __holeIndex167 = t198;
        long t199 = __holeIndex167;
        long c200 = 1;
        long b201 = t199 - c200;
        long c202 = 2;
        long b203 = b201 / c202;
        __parent171 = b203;
    }
  int t204 = __value169;
  long t205 = __holeIndex167;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r206 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first166, t205);
  ref_tmp2172 = r206;
  int* r207 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2172);
  *r207 = t204;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v208, long v209, long v210, int v211, struct __gnu_cxx____ops___Iter_less_iter v212) {
bb213:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first214;
  long __holeIndex215;
  long __len216;
  int __value217;
  struct __gnu_cxx____ops___Iter_less_iter __comp218;
  long __topIndex219;
  long __secondChild220;
  struct __gnu_cxx____ops___Iter_less_val __cmp221;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2222;
  __first214 = v208;
  __holeIndex215 = v209;
  __len216 = v210;
  __value217 = v211;
  __comp218 = v212;
  long t223 = __holeIndex215;
  __topIndex219 = t223;
  long t224 = __holeIndex215;
  __secondChild220 = t224;
    while (1) {
      long t225 = __secondChild220;
      long t226 = __len216;
      long c227 = 1;
      long b228 = t226 - c227;
      long c229 = 2;
      long b230 = b228 / c229;
      _Bool c231 = ((t225 < b230)) ? 1 : 0;
      if (!c231) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0232;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1233;
        long c234 = 2;
        long t235 = __secondChild220;
        long c236 = 1;
        long b237 = t235 + c236;
        long b238 = c234 * b237;
        __secondChild220 = b238;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0239;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1240;
          long t241 = __secondChild220;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r242 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first214, t241);
          agg_tmp0239 = r242;
          long t243 = __secondChild220;
          long c244 = 1;
          long b245 = t243 - c244;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r246 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first214, b245);
          agg_tmp1240 = r246;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = agg_tmp0239;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t248 = agg_tmp1240;
          _Bool r249 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp218, t247, t248);
          if (r249) {
            long t250 = __secondChild220;
            long u251 = t250 - 1;
            __secondChild220 = u251;
          }
        long t252 = __secondChild220;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r253 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first214, t252);
        ref_tmp0232 = r253;
        int* r254 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0232);
        int t255 = *r254;
        long t256 = __holeIndex215;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r257 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first214, t256);
        ref_tmp1233 = r257;
        int* r258 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1233);
        *r258 = t255;
        long t259 = __secondChild220;
        __holeIndex215 = t259;
    }
    long t260 = __len216;
    long c261 = 1;
    long b262 = t260 & c261;
    long c263 = 0;
    _Bool c264 = ((b262 == c263)) ? 1 : 0;
    _Bool ternary265;
    if (c264) {
      long t266 = __secondChild220;
      long t267 = __len216;
      long c268 = 2;
      long b269 = t267 - c268;
      long c270 = 2;
      long b271 = b269 / c270;
      _Bool c272 = ((t266 == b271)) ? 1 : 0;
      ternary265 = (_Bool)c272;
    } else {
      _Bool c273 = 0;
      ternary265 = (_Bool)c273;
    }
    if (ternary265) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2274;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3275;
      long c276 = 2;
      long t277 = __secondChild220;
      long c278 = 1;
      long b279 = t277 + c278;
      long b280 = c276 * b279;
      __secondChild220 = b280;
      long t281 = __secondChild220;
      long c282 = 1;
      long b283 = t281 - c282;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r284 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first214, b283);
      ref_tmp2274 = r284;
      int* r285 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2274);
      int t286 = *r285;
      long t287 = __holeIndex215;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r288 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first214, t287);
      ref_tmp3275 = r288;
      int* r289 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3275);
      *r289 = t286;
      long t290 = __secondChild220;
      long c291 = 1;
      long b292 = t290 - c291;
      __holeIndex215 = b292;
    }
  __cmp221 = *&__const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp; // copy
  agg_tmp2222 = __first214; // copy
  long t293 = __holeIndex215;
  long t294 = __topIndex219;
  int t295 = __value217;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t296 = agg_tmp2222;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t296, t293, t294, t295, &__cmp221);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v297, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v298, struct __gnu_cxx____ops___Iter_less_iter* v299) {
bb300:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first301;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last302;
  struct __gnu_cxx____ops___Iter_less_iter* __comp303;
  long __len304;
  long __parent305;
  __first301 = v297;
  __last302 = v298;
  __comp303 = v299;
    long r306 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last302, &__first301);
    long c307 = 2;
    _Bool c308 = ((r306 < c307)) ? 1 : 0;
    if (c308) {
      return;
    }
  long r309 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last302, &__first301);
  __len304 = r309;
  long t310 = __len304;
  long c311 = 2;
  long b312 = t310 - c311;
  long c313 = 2;
  long b314 = b312 / c313;
  __parent305 = b314;
    while (1) {
      _Bool c315 = 1;
      if (!c315) break;
        int __value316;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0317;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0318;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1319;
        long t320 = __parent305;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r321 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first301, t320);
        ref_tmp0317 = r321;
        int* r322 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0317);
        int t323 = *r322;
        __value316 = t323;
        agg_tmp0318 = __first301; // copy
        long t324 = __parent305;
        long t325 = __len304;
        int t326 = __value316;
        struct __gnu_cxx____ops___Iter_less_iter* t327 = __comp303;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t328 = agg_tmp0318;
        struct __gnu_cxx____ops___Iter_less_iter t329 = agg_tmp1319;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t328, t324, t325, t326, t329);
          long t330 = __parent305;
          long c331 = 0;
          _Bool c332 = ((t330 == c331)) ? 1 : 0;
          if (c332) {
            return;
          }
        long t333 = __parent305;
        long u334 = t333 - 1;
        __parent305 = u334;
    }
  return;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v335, struct std____cmp_cat____unspec v336) {
bb337:
  struct std__strong_ordering __v338;
  struct std____cmp_cat____unspec unnamed339;
  _Bool __retval340;
  __v338 = v335;
  unnamed339 = v336;
  char t341 = __v338._M_value;
  int cast342 = (int)t341;
  int c343 = 0;
  _Bool c344 = ((cast342 < c343)) ? 1 : 0;
  __retval340 = c344;
  _Bool t345 = __retval340;
  return t345;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v346, int** v347, int** v348) {
bb349:
  struct std____detail___Synth3way* this350;
  int** __t351;
  int** __u352;
  struct std__strong_ordering __retval353;
  this350 = v346;
  __t351 = v347;
  __u352 = v348;
  struct std____detail___Synth3way* t354 = this350;
    int** t355 = __t351;
    int* t356 = *t355;
    int** t357 = __u352;
    int* t358 = *t357;
    char c359 = -1;
    char c360 = 0;
    char c361 = 1;
    _Bool c362 = ((t356 < t358)) ? 1 : 0;
    char sel363 = c362 ? c359 : c361;
    _Bool c364 = ((t356 == t358)) ? 1 : 0;
    char sel365 = c364 ? c360 : sel363;
    __retval353._M_value = sel365;
    struct std__strong_ordering t366 = __retval353;
    return t366;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v367, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v368) {
bb369:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs371;
  struct std__strong_ordering __retval372;
  __lhs370 = v367;
  __rhs371 = v368;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t373 = __lhs370;
  int** r374 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t373);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t375 = __rhs371;
  int** r376 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t375);
  struct std__strong_ordering r377 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r374, r376);
  __retval372 = r377;
  struct std__strong_ordering t378 = __retval372;
  return t378;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v379, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v380, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v381) {
bb382:
  struct __gnu_cxx____ops___Iter_less_iter* this383;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1384;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2385;
  _Bool __retval386;
  this383 = v379;
  __it1384 = v380;
  __it2385 = v381;
  struct __gnu_cxx____ops___Iter_less_iter* t387 = this383;
  int* r388 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1384);
  int t389 = *r388;
  int* r390 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2385);
  int t391 = *r390;
  _Bool c392 = ((t389 < t391)) ? 1 : 0;
  __retval386 = c392;
  _Bool t393 = __retval386;
  return t393;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v394, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v395, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v396, struct __gnu_cxx____ops___Iter_less_iter* v397) {
bb398:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first399;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last400;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result401;
  struct __gnu_cxx____ops___Iter_less_iter* __comp402;
  int __value403;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0404;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1405;
  __first399 = v394;
  __last400 = v395;
  __result401 = v396;
  __comp402 = v397;
  int* r406 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result401);
  int t407 = *r406;
  __value403 = t407;
  int* r408 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first399);
  int t409 = *r408;
  int* r410 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result401);
  *r410 = t409;
  agg_tmp0404 = __first399; // copy
  long c411 = 0;
  long r412 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last400, &__first399);
  int t413 = __value403;
  struct __gnu_cxx____ops___Iter_less_iter* t414 = __comp402;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t415 = agg_tmp0404;
  struct __gnu_cxx____ops___Iter_less_iter t416 = agg_tmp1405;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t415, c411, r412, t413, t416);
  return;
}

// function: _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v417, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v418, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v419, struct __gnu_cxx____ops___Iter_less_iter v420) {
bb421:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first422;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle423;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last424;
  struct __gnu_cxx____ops___Iter_less_iter __comp425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1427;
  __first422 = v417;
  __middle423 = v418;
  __last424 = v419;
  __comp425 = v420;
  agg_tmp0426 = __first422; // copy
  agg_tmp1427 = __middle423; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t428 = agg_tmp0426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t429 = agg_tmp1427;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t428, t429, &__comp425);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i430;
    struct std__strong_ordering agg_tmp2431;
    struct std____cmp_cat____unspec agg_tmp3432;
    __i430 = __middle423; // copy
    while (1) {
      struct std__strong_ordering r434 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__i430, &__last424);
      agg_tmp2431 = r434;
      agg_tmp3432 = *&__const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3; // copy
      struct std__strong_ordering t435 = agg_tmp2431;
      struct std____cmp_cat____unspec t436 = agg_tmp3432;
      _Bool r437 = std__operator_(t435, t436);
      if (!r437) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4438;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5439;
        agg_tmp4438 = __i430; // copy
        agg_tmp5439 = __first422; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t440 = agg_tmp4438;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t441 = agg_tmp5439;
        _Bool r442 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp425, t440, t441);
        if (r442) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6443;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7444;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8445;
          agg_tmp6443 = __first422; // copy
          agg_tmp7444 = __middle423; // copy
          agg_tmp8445 = __i430; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t446 = agg_tmp6443;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t447 = agg_tmp7444;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t448 = agg_tmp8445;
          void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t446, t447, t448, &__comp425);
        }
    for_step433: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r449 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i430);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v450) {
bb451:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this452;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval453;
  this452 = v450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t454 = this452;
  int* t455 = t454->_M_current;
  int c456 = -1;
  int* ptr457 = &(t455)[c456];
  t454->_M_current = ptr457;
  __retval453 = t454;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t458 = __retval453;
  return t458;
}

// function: _ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v459, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v460, struct __gnu_cxx____ops___Iter_less_iter* v461) {
bb462:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first463;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last464;
  struct __gnu_cxx____ops___Iter_less_iter* __comp465;
  __first463 = v459;
  __last464 = v460;
  __comp465 = v461;
    while (1) {
      long r466 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last464, &__first463);
      long c467 = 1;
      _Bool c468 = ((r466 > c467)) ? 1 : 0;
      if (!c468) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0469;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1470;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2471;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r472 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last464);
        agg_tmp0469 = __first463; // copy
        agg_tmp1470 = __last464; // copy
        agg_tmp2471 = __last464; // copy
        struct __gnu_cxx____ops___Iter_less_iter* t473 = __comp465;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t474 = agg_tmp0469;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t475 = agg_tmp1470;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t476 = agg_tmp2471;
        void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t474, t475, t476, t473);
    }
  return;
}

// function: _ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v477, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v478, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v479, struct __gnu_cxx____ops___Iter_less_iter v480) {
bb481:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first482;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle483;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last484;
  struct __gnu_cxx____ops___Iter_less_iter __comp485;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0486;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1487;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2488;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp3489;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4490;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5491;
  __first482 = v477;
  __middle483 = v478;
  __last484 = v479;
  __comp485 = v480;
  agg_tmp0486 = __first482; // copy
  agg_tmp1487 = __middle483; // copy
  agg_tmp2488 = __last484; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t492 = agg_tmp0486;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t493 = agg_tmp1487;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t494 = agg_tmp2488;
  struct __gnu_cxx____ops___Iter_less_iter t495 = agg_tmp3489;
  void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t492, t493, t494, t495);
  agg_tmp4490 = __first482; // copy
  agg_tmp5491 = __middle483; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t496 = agg_tmp4490;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t497 = agg_tmp5491;
  void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t496, t497, &__comp485);
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb498:
  struct __gnu_cxx____ops___Iter_less_iter __retval499;
  struct __gnu_cxx____ops___Iter_less_iter t500 = __retval499;
  return t500;
}

// function: _ZSt12partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_S7_
void void_std__partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v501, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v502, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v503) {
bb504:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first505;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle506;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last507;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0508;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1509;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2510;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp3511;
  __first505 = v501;
  __middle506 = v502;
  __last507 = v503;
  agg_tmp0508 = __first505; // copy
  agg_tmp1509 = __middle506; // copy
  agg_tmp2510 = __last507; // copy
  struct __gnu_cxx____ops___Iter_less_iter r512 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp3511 = r512;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t513 = agg_tmp0508;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t514 = agg_tmp1509;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t515 = agg_tmp2510;
  struct __gnu_cxx____ops___Iter_less_iter t516 = agg_tmp3511;
  void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t513, t514, t515, t516);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v517, int** v518) {
bb519:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this520;
  int** __i521;
  this520 = v517;
  __i521 = v518;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t522 = this520;
  int** t523 = __i521;
  int* t524 = *t523;
  t522->_M_current = t524;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v525) {
bb526:
  struct std__vector_int__std__allocator_int__* this527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval528;
  this527 = v525;
  struct std__vector_int__std__allocator_int__* t529 = this527;
  struct std___Vector_base_int__std__allocator_int__* base530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base531 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base530->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval528, &base531->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t532 = __retval528;
  return t532;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v533, long v534) {
bb535:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this536;
  long __n537;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval538;
  int* ref_tmp0539;
  this536 = v533;
  __n537 = v534;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t540 = this536;
  int* t541 = t540->_M_current;
  long t542 = __n537;
  int* ptr543 = &(t541)[t542];
  ref_tmp0539 = ptr543;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval538, &ref_tmp0539);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t544 = __retval538;
  return t544;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v545) {
bb546:
  struct std__vector_int__std__allocator_int__* this547;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval548;
  this547 = v545;
  struct std__vector_int__std__allocator_int__* t549 = this547;
  struct std___Vector_base_int__std__allocator_int__* base550 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base551 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base550->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval548, &base551->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t552 = __retval548;
  return t552;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v553) {
bb554:
  struct std__vector_int__std__allocator_int__* this555;
  unsigned long __retval556;
  long __dif557;
  this555 = v553;
  struct std__vector_int__std__allocator_int__* t558 = this555;
  struct std___Vector_base_int__std__allocator_int__* base559 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t558 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base560 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base559->_M_impl) + 0);
  int* t561 = base560->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base562 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t558 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base563 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base562->_M_impl) + 0);
  int* t564 = base563->_M_start;
  long diff565 = t561 - t564;
  __dif557 = diff565;
    long t566 = __dif557;
    long c567 = 0;
    _Bool c568 = ((t566 < c567)) ? 1 : 0;
    if (c568) {
      __builtin_unreachable();
    }
  long t569 = __dif557;
  unsigned long cast570 = (unsigned long)t569;
  __retval556 = cast570;
  unsigned long t571 = __retval556;
  return t571;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v572, unsigned long v573) {
bb574:
  struct std__vector_int__std__allocator_int__* this575;
  unsigned long __n576;
  int* __retval577;
  this575 = v572;
  __n576 = v573;
  struct std__vector_int__std__allocator_int__* t578 = this575;
    do {
          unsigned long t579 = __n576;
          unsigned long r580 = std__vector_int__std__allocator_int_____size___const(t578);
          _Bool c581 = ((t579 < r580)) ? 1 : 0;
          _Bool u582 = !c581;
          if (u582) {
            char* cast583 = (char*)&(_str_9);
            int c584 = 1263;
            char* cast585 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast586 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast583, c584, cast585, cast586);
          }
      _Bool c587 = 0;
      if (!c587) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base588 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t578 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base589 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base588->_M_impl) + 0);
  int* t590 = base589->_M_start;
  unsigned long t591 = __n576;
  int* ptr592 = &(t590)[t591];
  __retval577 = ptr592;
  int* t593 = __retval577;
  return t593;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v594, int v595) {
bb596:
  int __a597;
  int __b598;
  int __retval599;
  __a597 = v594;
  __b598 = v595;
  int t600 = __a597;
  int t601 = __b598;
  int b602 = t600 | t601;
  __retval599 = b602;
  int t603 = __retval599;
  return t603;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v604) {
bb605:
  struct std__basic_ios_char__std__char_traits_char__* this606;
  int __retval607;
  this606 = v604;
  struct std__basic_ios_char__std__char_traits_char__* t608 = this606;
  struct std__ios_base* base609 = (struct std__ios_base*)((char *)t608 + 0);
  int t610 = base609->_M_streambuf_state;
  __retval607 = t610;
  int t611 = __retval607;
  return t611;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v612, int v613) {
bb614:
  struct std__basic_ios_char__std__char_traits_char__* this615;
  int __state616;
  this615 = v612;
  __state616 = v613;
  struct std__basic_ios_char__std__char_traits_char__* t617 = this615;
  int r618 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t617);
  int t619 = __state616;
  int r620 = std__operator__2(r618, t619);
  std__basic_ios_char__std__char_traits_char_____clear(t617, r620);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v621, char* v622) {
bb623:
  char* __c1624;
  char* __c2625;
  _Bool __retval626;
  __c1624 = v621;
  __c2625 = v622;
  char* t627 = __c1624;
  char t628 = *t627;
  int cast629 = (int)t628;
  char* t630 = __c2625;
  char t631 = *t630;
  int cast632 = (int)t631;
  _Bool c633 = ((cast629 == cast632)) ? 1 : 0;
  __retval626 = c633;
  _Bool t634 = __retval626;
  return t634;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v635) {
bb636:
  char* __p637;
  unsigned long __retval638;
  unsigned long __i639;
  __p637 = v635;
  unsigned long c640 = 0;
  __i639 = c640;
    char ref_tmp0641;
    while (1) {
      unsigned long t642 = __i639;
      char* t643 = __p637;
      char* ptr644 = &(t643)[t642];
      char c645 = 0;
      ref_tmp0641 = c645;
      _Bool r646 = __gnu_cxx__char_traits_char___eq(ptr644, &ref_tmp0641);
      _Bool u647 = !r646;
      if (!u647) break;
      unsigned long t648 = __i639;
      unsigned long u649 = t648 + 1;
      __i639 = u649;
    }
  unsigned long t650 = __i639;
  __retval638 = t650;
  unsigned long t651 = __retval638;
  return t651;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v652) {
bb653:
  char* __s654;
  unsigned long __retval655;
  __s654 = v652;
    _Bool r656 = std____is_constant_evaluated();
    if (r656) {
      char* t657 = __s654;
      unsigned long r658 = __gnu_cxx__char_traits_char___length(t657);
      __retval655 = r658;
      unsigned long t659 = __retval655;
      return t659;
    }
  char* t660 = __s654;
  unsigned long r661 = strlen(t660);
  __retval655 = r661;
  unsigned long t662 = __retval655;
  return t662;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v663, char* v664) {
bb665:
  struct std__basic_ostream_char__std__char_traits_char__* __out666;
  char* __s667;
  struct std__basic_ostream_char__std__char_traits_char__* __retval668;
  __out666 = v663;
  __s667 = v664;
    char* t669 = __s667;
    _Bool cast670 = (_Bool)t669;
    _Bool u671 = !cast670;
    if (u671) {
      struct std__basic_ostream_char__std__char_traits_char__* t672 = __out666;
      void** v673 = (void**)t672;
      void* v674 = *((void**)v673);
      unsigned char* cast675 = (unsigned char*)v674;
      long c676 = -24;
      unsigned char* ptr677 = &(cast675)[c676];
      long* cast678 = (long*)ptr677;
      long t679 = *cast678;
      unsigned char* cast680 = (unsigned char*)t672;
      unsigned char* ptr681 = &(cast680)[t679];
      struct std__basic_ostream_char__std__char_traits_char__* cast682 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr681;
      struct std__basic_ios_char__std__char_traits_char__* cast683 = (struct std__basic_ios_char__std__char_traits_char__*)cast682;
      int t684 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast683, t684);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t685 = __out666;
      char* t686 = __s667;
      char* t687 = __s667;
      unsigned long r688 = std__char_traits_char___length(t687);
      long cast689 = (long)r688;
      struct std__basic_ostream_char__std__char_traits_char__* r690 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t685, t686, cast689);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t691 = __out666;
  __retval668 = t691;
  struct std__basic_ostream_char__std__char_traits_char__* t692 = __retval668;
  return t692;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v693, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v694) {
bb695:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval698;
  this696 = v693;
  unnamed697 = v694;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t699 = this696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t700 = unnamed697;
  int* t701 = t700->_M_current;
  t699->_M_current = t701;
  __retval698 = t699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t702 = __retval698;
  return t702;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v703, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v704) {
bb705:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs706;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs707;
  _Bool __retval708;
  __lhs706 = v703;
  __rhs707 = v704;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t709 = __lhs706;
  int** r710 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t709);
  int* t711 = *r710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t712 = __rhs707;
  int** r713 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t712);
  int* t714 = *r713;
  _Bool c715 = ((t711 == t714)) ? 1 : 0;
  __retval708 = c715;
  _Bool t716 = __retval708;
  return t716;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v717) {
bb718:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this719;
  int* __retval720;
  this719 = v717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t721 = this719;
  int* t722 = t721->_M_current;
  __retval720 = t722;
  int* t723 = __retval720;
  return t723;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v724) {
bb725:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this726;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval727;
  this726 = v724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t728 = this726;
  int* t729 = t728->_M_current;
  int c730 = 1;
  int* ptr731 = &(t729)[c730];
  t728->_M_current = ptr731;
  __retval727 = t728;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t732 = __retval727;
  return t732;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v733) {
bb734:
  struct std__vector_int__std__allocator_int__* this735;
  this735 = v733;
  struct std__vector_int__std__allocator_int__* t736 = this735;
    struct std___Vector_base_int__std__allocator_int__* base737 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base738 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base737->_M_impl) + 0);
    int* t739 = base738->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base740 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base741 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base740->_M_impl) + 0);
    int* t742 = base741->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base743 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std__allocator_int_* r744 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base743);
    void_std___Destroy_int___int_(t739, t742, r744);
  {
    struct std___Vector_base_int__std__allocator_int__* base745 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base745);
  }
  return;
}

// function: main
int main() {
bb746:
  int __retval747;
  int myints748[5];
  struct std__vector_int__std__allocator_int__ myvector749;
  struct std__allocator_int_ ref_tmp0750;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it751;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0752;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1753;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1754;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2755;
  int c756 = 0;
  __retval747 = c756;
  // array copy
  __builtin_memcpy(myints748, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast757 = (int*)&(myints748);
  int* cast758 = (int*)&(myints748);
  int c759 = 5;
  int* ptr760 = &(cast758)[c759];
  std__allocator_int___allocator_2(&ref_tmp0750);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector749, cast757, ptr760, &ref_tmp0750);
  {
    std__allocator_int____allocator(&ref_tmp0750);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it751);
    struct std__basic_ostream_char__std__char_traits_char__* r761 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r762 = std__vector_int__std__allocator_int_____begin(&myvector749);
    agg_tmp0752 = r762;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r763 = std__vector_int__std__allocator_int_____begin(&myvector749);
    ref_tmp1754 = r763;
    long c764 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r765 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1754, c764);
    agg_tmp1753 = r765;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r766 = std__vector_int__std__allocator_int_____end(&myvector749);
    agg_tmp2755 = r766;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t767 = agg_tmp0752;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t768 = agg_tmp1753;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t769 = agg_tmp2755;
    void_std__partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t767, t768, t769);
    unsigned long c770 = 0;
    int* r771 = std__vector_int__std__allocator_int_____operator__(&myvector749, c770);
    int t772 = *r771;
    int c773 = 1;
    _Bool c774 = ((t772 == c773)) ? 1 : 0;
    if (c774) {
    } else {
      char* cast775 = (char*)&(_str);
      char* c776 = _str_1;
      unsigned int c777 = 24;
      char* cast778 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast775, c776, c777, cast778);
    }
    unsigned long c779 = 1;
    int* r780 = std__vector_int__std__allocator_int_____operator__(&myvector749, c779);
    int t781 = *r780;
    int c782 = 2;
    _Bool c783 = ((t781 == c782)) ? 1 : 0;
    if (c783) {
    } else {
      char* cast784 = (char*)&(_str_2);
      char* c785 = _str_1;
      unsigned int c786 = 25;
      char* cast787 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast784, c785, c786, cast787);
    }
    unsigned long c788 = 2;
    int* r789 = std__vector_int__std__allocator_int_____operator__(&myvector749, c788);
    int t790 = *r789;
    int c791 = 3;
    _Bool c792 = ((t790 == c791)) ? 1 : 0;
    if (c792) {
    } else {
      char* cast793 = (char*)&(_str_3);
      char* c794 = _str_1;
      unsigned int c795 = 26;
      char* cast796 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast793, c794, c795, cast796);
    }
    unsigned long c797 = 3;
    int* r798 = std__vector_int__std__allocator_int_____operator__(&myvector749, c797);
    int t799 = *r798;
    int c800 = 5;
    _Bool c801 = ((t799 != c800)) ? 1 : 0;
    if (c801) {
    } else {
      char* cast802 = (char*)&(_str_4);
      char* c803 = _str_1;
      unsigned int c804 = 27;
      char* cast805 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast802, c803, c804, cast805);
    }
    unsigned long c806 = 4;
    int* r807 = std__vector_int__std__allocator_int_____operator__(&myvector749, c806);
    int t808 = *r807;
    int c809 = 4;
    _Bool c810 = ((t808 == c809)) ? 1 : 0;
    if (c810) {
    } else {
      char* cast811 = (char*)&(_str_5);
      char* c812 = _str_1;
      unsigned int c813 = 28;
      char* cast814 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast811, c812, c813, cast814);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r815 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    char* cast816 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r817 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast816);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2818;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3819;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r820 = std__vector_int__std__allocator_int_____begin(&myvector749);
      ref_tmp2818 = r820;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r821 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it751, &ref_tmp2818);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r823 = std__vector_int__std__allocator_int_____end(&myvector749);
        ref_tmp3819 = r823;
        _Bool r824 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it751, &ref_tmp3819);
        _Bool u825 = !r824;
        if (!u825) break;
        char* cast826 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r827 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast826);
        int* r828 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it751);
        int t829 = *r828;
        struct std__basic_ostream_char__std__char_traits_char__* r830 = std__ostream__operator__(r827, t829);
      for_step822: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r831 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it751);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r832 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c833 = 0;
    __retval747 = c833;
    int t834 = __retval747;
    int ret_val835 = t834;
    {
      std__vector_int__std__allocator_int______vector(&myvector749);
    }
    return ret_val835;
  int t836 = __retval747;
  return t836;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v837) {
bb838:
  struct std____new_allocator_int_* this839;
  this839 = v837;
  struct std____new_allocator_int_* t840 = this839;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v841, struct std__allocator_int_* v842) {
bb843:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this844;
  struct std__allocator_int_* __a845;
  this844 = v841;
  __a845 = v842;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t846 = this844;
  struct std__allocator_int_* base847 = (struct std__allocator_int_*)((char *)t846 + 0);
  struct std__allocator_int_* t848 = __a845;
  std__allocator_int___allocator(base847, t848);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base849 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t846 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base849);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v850) {
bb851:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this852;
  this852 = v850;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t853 = this852;
  {
    struct std__allocator_int_* base854 = (struct std__allocator_int_*)((char *)t853 + 0);
    std__allocator_int____allocator(base854);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v855, struct std__allocator_int_* v856) {
bb857:
  struct std___Vector_base_int__std__allocator_int__* this858;
  struct std__allocator_int_* __a859;
  this858 = v855;
  __a859 = v856;
  struct std___Vector_base_int__std__allocator_int__* t860 = this858;
  struct std__allocator_int_* t861 = __a859;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t860->_M_impl, t861);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v862, int** v863, int* v864) {
bb865:
  struct std__ranges____distance_fn* this866;
  int** __first867;
  int* __last868;
  long __retval869;
  this866 = v862;
  __first867 = v863;
  __last868 = v864;
  struct std__ranges____distance_fn* t870 = this866;
  int* t871 = __last868;
  int** t872 = __first867;
  int* t873 = *t872;
  long diff874 = t871 - t873;
  __retval869 = diff874;
  long t875 = __retval869;
  return t875;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb876:
  _Bool __retval877;
    _Bool c878 = 0;
    __retval877 = c878;
    _Bool t879 = __retval877;
    return t879;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v880) {
bb881:
  struct std____new_allocator_int_* this882;
  unsigned long __retval883;
  this882 = v880;
  struct std____new_allocator_int_* t884 = this882;
  unsigned long c885 = 9223372036854775807;
  unsigned long c886 = 4;
  unsigned long b887 = c885 / c886;
  __retval883 = b887;
  unsigned long t888 = __retval883;
  return t888;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v889, unsigned long v890, void* v891) {
bb892:
  struct std____new_allocator_int_* this893;
  unsigned long __n894;
  void* unnamed895;
  int* __retval896;
  this893 = v889;
  __n894 = v890;
  unnamed895 = v891;
  struct std____new_allocator_int_* t897 = this893;
    unsigned long t898 = __n894;
    unsigned long r899 = std____new_allocator_int____M_max_size___const(t897);
    _Bool c900 = ((t898 > r899)) ? 1 : 0;
    if (c900) {
        unsigned long t901 = __n894;
        unsigned long c902 = -1;
        unsigned long c903 = 4;
        unsigned long b904 = c902 / c903;
        _Bool c905 = ((t901 > b904)) ? 1 : 0;
        if (c905) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c906 = 4;
    unsigned long c907 = 16;
    _Bool c908 = ((c906 > c907)) ? 1 : 0;
    if (c908) {
      unsigned long __al909;
      unsigned long c910 = 4;
      __al909 = c910;
      unsigned long t911 = __n894;
      unsigned long c912 = 4;
      unsigned long b913 = t911 * c912;
      unsigned long t914 = __al909;
      void* r915 = operator_new_2(b913, t914);
      int* cast916 = (int*)r915;
      __retval896 = cast916;
      int* t917 = __retval896;
      return t917;
    }
  unsigned long t918 = __n894;
  unsigned long c919 = 4;
  unsigned long b920 = t918 * c919;
  void* r921 = operator_new(b920);
  int* cast922 = (int*)r921;
  __retval896 = cast922;
  int* t923 = __retval896;
  return t923;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v924, unsigned long v925) {
bb926:
  struct std__allocator_int_* this927;
  unsigned long __n928;
  int* __retval929;
  this927 = v924;
  __n928 = v925;
  struct std__allocator_int_* t930 = this927;
    _Bool r931 = std____is_constant_evaluated();
    if (r931) {
        unsigned long t932 = __n928;
        unsigned long c933 = 4;
        unsigned long ovr934;
        _Bool ovf935 = __builtin_mul_overflow(t932, c933, &ovr934);
        __n928 = ovr934;
        if (ovf935) {
          std____throw_bad_array_new_length();
        }
      unsigned long t936 = __n928;
      void* r937 = operator_new(t936);
      int* cast938 = (int*)r937;
      __retval929 = cast938;
      int* t939 = __retval929;
      return t939;
    }
  struct std____new_allocator_int_* base940 = (struct std____new_allocator_int_*)((char *)t930 + 0);
  unsigned long t941 = __n928;
  void* c942 = ((void*)0);
  int* r943 = std____new_allocator_int___allocate(base940, t941, c942);
  __retval929 = r943;
  int* t944 = __retval929;
  return t944;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v945, unsigned long v946) {
bb947:
  struct std__allocator_int_* __a948;
  unsigned long __n949;
  int* __retval950;
  __a948 = v945;
  __n949 = v946;
  struct std__allocator_int_* t951 = __a948;
  unsigned long t952 = __n949;
  int* r953 = std__allocator_int___allocate(t951, t952);
  __retval950 = r953;
  int* t954 = __retval950;
  return t954;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v955, unsigned long v956) {
bb957:
  struct std___Vector_base_int__std__allocator_int__* this958;
  unsigned long __n959;
  int* __retval960;
  this958 = v955;
  __n959 = v956;
  struct std___Vector_base_int__std__allocator_int__* t961 = this958;
  unsigned long t962 = __n959;
  unsigned long c963 = 0;
  _Bool c964 = ((t962 != c963)) ? 1 : 0;
  int* ternary965;
  if (c964) {
    struct std__allocator_int_* base966 = (struct std__allocator_int_*)((char *)&(t961->_M_impl) + 0);
    unsigned long t967 = __n959;
    int* r968 = std__allocator_traits_std__allocator_int_____allocate(base966, t967);
    ternary965 = (int*)r968;
  } else {
    int* c969 = ((void*)0);
    ternary965 = (int*)c969;
  }
  __retval960 = ternary965;
  int* t970 = __retval960;
  return t970;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v971, unsigned long* v972) {
bb973:
  unsigned long* __a974;
  unsigned long* __b975;
  unsigned long* __retval976;
  __a974 = v971;
  __b975 = v972;
    unsigned long* t977 = __b975;
    unsigned long t978 = *t977;
    unsigned long* t979 = __a974;
    unsigned long t980 = *t979;
    _Bool c981 = ((t978 < t980)) ? 1 : 0;
    if (c981) {
      unsigned long* t982 = __b975;
      __retval976 = t982;
      unsigned long* t983 = __retval976;
      return t983;
    }
  unsigned long* t984 = __a974;
  __retval976 = t984;
  unsigned long* t985 = __retval976;
  return t985;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v986) {
bb987:
  struct std__allocator_int_* __a988;
  unsigned long __retval989;
  unsigned long __diffmax990;
  unsigned long __allocmax991;
  __a988 = v986;
  unsigned long c992 = 2305843009213693951;
  __diffmax990 = c992;
  unsigned long c993 = 4611686018427387903;
  __allocmax991 = c993;
  unsigned long* r994 = unsigned_long_const__std__min_unsigned_long_(&__diffmax990, &__allocmax991);
  unsigned long t995 = *r994;
  __retval989 = t995;
  unsigned long t996 = __retval989;
  return t996;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v997, struct std__allocator_int_* v998) {
bb999:
  struct std__allocator_int_* this1000;
  struct std__allocator_int_* __a1001;
  this1000 = v997;
  __a1001 = v998;
  struct std__allocator_int_* t1002 = this1000;
  struct std____new_allocator_int_* base1003 = (struct std____new_allocator_int_*)((char *)t1002 + 0);
  struct std__allocator_int_* t1004 = __a1001;
  struct std____new_allocator_int_* base1005 = (struct std____new_allocator_int_*)((char *)t1004 + 0);
  std____new_allocator_int_____new_allocator(base1003, base1005);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1006, struct std__allocator_int_* v1007) {
bb1008:
  unsigned long __n1009;
  struct std__allocator_int_* __a1010;
  unsigned long __retval1011;
  __n1009 = v1006;
  __a1010 = v1007;
    struct std__allocator_int_ ref_tmp01012;
    _Bool tmp_exprcleanup1013;
    unsigned long t1014 = __n1009;
    struct std__allocator_int_* t1015 = __a1010;
    std__allocator_int___allocator(&ref_tmp01012, t1015);
      unsigned long r1016 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01012);
      _Bool c1017 = ((t1014 > r1016)) ? 1 : 0;
      tmp_exprcleanup1013 = c1017;
    {
      std__allocator_int____allocator(&ref_tmp01012);
    }
    _Bool t1018 = tmp_exprcleanup1013;
    if (t1018) {
      char* cast1019 = (char*)&(_str_8);
      std____throw_length_error(cast1019);
    }
  unsigned long t1020 = __n1009;
  __retval1011 = t1020;
  unsigned long t1021 = __retval1011;
  return t1021;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1022) {
bb1023:
  struct std___Vector_base_int__std__allocator_int__* this1024;
  struct std__allocator_int_* __retval1025;
  this1024 = v1022;
  struct std___Vector_base_int__std__allocator_int__* t1026 = this1024;
  struct std__allocator_int_* base1027 = (struct std__allocator_int_*)((char *)&(t1026->_M_impl) + 0);
  __retval1025 = base1027;
  struct std__allocator_int_* t1028 = __retval1025;
  return t1028;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1029:
  _Bool __retval1030;
    _Bool c1031 = 0;
    __retval1030 = c1031;
    _Bool t1032 = __retval1030;
    return t1032;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1033, int** v1034) {
bb1035:
  struct std___UninitDestroyGuard_int____void_* this1036;
  int** __first1037;
  this1036 = v1033;
  __first1037 = v1034;
  struct std___UninitDestroyGuard_int____void_* t1038 = this1036;
  int** t1039 = __first1037;
  int* t1040 = *t1039;
  t1038->_M_first = t1040;
  int** t1041 = __first1037;
  t1038->_M_cur = t1041;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1042, int* v1043) {
bb1044:
  int* __location1045;
  int* __args1046;
  int* __retval1047;
  void* __loc1048;
  __location1045 = v1042;
  __args1046 = v1043;
  int* t1049 = __location1045;
  void* cast1050 = (void*)t1049;
  __loc1048 = cast1050;
    void* t1051 = __loc1048;
    int* cast1052 = (int*)t1051;
    int* t1053 = __args1046;
    int t1054 = *t1053;
    *cast1052 = t1054;
    __retval1047 = cast1052;
    int* t1055 = __retval1047;
    return t1055;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1056, int* v1057) {
bb1058:
  int* __p1059;
  int* __args1060;
  __p1059 = v1056;
  __args1060 = v1057;
    _Bool r1061 = std____is_constant_evaluated();
    if (r1061) {
      int* t1062 = __p1059;
      int* t1063 = __args1060;
      int* r1064 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1062, t1063);
      return;
    }
  int* t1065 = __p1059;
  void* cast1066 = (void*)t1065;
  int* cast1067 = (int*)cast1066;
  int* t1068 = __args1060;
  int t1069 = *t1068;
  *cast1067 = t1069;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1070) {
bb1071:
  struct std___UninitDestroyGuard_int____void_* this1072;
  this1072 = v1070;
  struct std___UninitDestroyGuard_int____void_* t1073 = this1072;
  int** c1074 = ((void*)0);
  t1073->_M_cur = c1074;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1075) {
bb1076:
  struct std___UninitDestroyGuard_int____void_* this1077;
  this1077 = v1075;
  struct std___UninitDestroyGuard_int____void_* t1078 = this1077;
    int** t1079 = t1078->_M_cur;
    int** c1080 = ((void*)0);
    _Bool c1081 = ((t1079 != c1080)) ? 1 : 0;
    if (c1081) {
      int* t1082 = t1078->_M_first;
      int** t1083 = t1078->_M_cur;
      int* t1084 = *t1083;
      void_std___Destroy_int__(t1082, t1084);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1085, int* v1086, int* v1087) {
bb1088:
  int* __first1089;
  int* __last1090;
  int* __result1091;
  int* __retval1092;
  struct std___UninitDestroyGuard_int____void_ __guard1093;
  __first1089 = v1085;
  __last1090 = v1086;
  __result1091 = v1087;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1093, &__result1091);
      while (1) {
        int* t1095 = __first1089;
        int* t1096 = __last1090;
        _Bool c1097 = ((t1095 != t1096)) ? 1 : 0;
        if (!c1097) break;
        int* t1098 = __result1091;
        int* t1099 = __first1089;
        void_std___Construct_int__int__(t1098, t1099);
      for_step1094: ;
        int* t1100 = __first1089;
        int c1101 = 1;
        int* ptr1102 = &(t1100)[c1101];
        __first1089 = ptr1102;
        int* t1103 = __result1091;
        int c1104 = 1;
        int* ptr1105 = &(t1103)[c1104];
        __result1091 = ptr1105;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1093);
    int* t1106 = __result1091;
    __retval1092 = t1106;
    int* t1107 = __retval1092;
    int* ret_val1108 = t1107;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1093);
    }
    return ret_val1108;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1109) {
bb1110:
  int* __it1111;
  int* __retval1112;
  __it1111 = v1109;
  int* t1113 = __it1111;
  __retval1112 = t1113;
  int* t1114 = __retval1112;
  return t1114;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1115, int* v1116, int* v1117) {
bb1118:
  int* __first1119;
  int* __last1120;
  int* __result1121;
  int* __retval1122;
  __first1119 = v1115;
  __last1120 = v1116;
  __result1121 = v1117;
      long __n1123;
      int* t1124 = __last1120;
      int* t1125 = __first1119;
      long diff1126 = t1124 - t1125;
      __n1123 = diff1126;
        long t1127 = __n1123;
        long c1128 = 0;
        _Bool c1129 = ((t1127 > c1128)) ? 1 : 0;
        if (c1129) {
          int* t1130 = __result1121;
          int* r1131 = int__std____niter_base_int__(t1130);
          void* cast1132 = (void*)r1131;
          int* t1133 = __first1119;
          int* r1134 = int__std____niter_base_int__(t1133);
          void* cast1135 = (void*)r1134;
          long t1136 = __n1123;
          unsigned long cast1137 = (unsigned long)t1136;
          unsigned long c1138 = 4;
          unsigned long b1139 = cast1137 * c1138;
          void* r1140 = memcpy(cast1132, cast1135, b1139);
          long t1141 = __n1123;
          int* t1142 = __result1121;
          int* ptr1143 = &(t1142)[t1141];
          __result1121 = ptr1143;
        }
      int* t1144 = __result1121;
      __retval1122 = t1144;
      int* t1145 = __retval1122;
      return t1145;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1146, int* v1147, int* v1148, struct std__allocator_int_* v1149) {
bb1150:
  int* __first1151;
  int* __last1152;
  int* __result1153;
  struct std__allocator_int_* unnamed1154;
  int* __retval1155;
  __first1151 = v1146;
  __last1152 = v1147;
  __result1153 = v1148;
  unnamed1154 = v1149;
    _Bool r1156 = std__is_constant_evaluated();
    if (r1156) {
      int* t1157 = __first1151;
      int* t1158 = __last1152;
      int* t1159 = __result1153;
      int* r1160 = int__std____do_uninit_copy_int___int___int__(t1157, t1158, t1159);
      __retval1155 = r1160;
      int* t1161 = __retval1155;
      return t1161;
    }
    int* t1162 = __first1151;
    int* t1163 = __last1152;
    int* t1164 = __result1153;
    int* r1165 = int__std__uninitialized_copy_int___int__(t1162, t1163, t1164);
    __retval1155 = r1165;
    int* t1166 = __retval1155;
    return t1166;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1167, int* v1168, int* v1169, unsigned long v1170) {
bb1171:
  struct std__vector_int__std__allocator_int__* this1172;
  int* __first1173;
  int* __last1174;
  unsigned long __n1175;
  int* __start1176;
  this1172 = v1167;
  __first1173 = v1168;
  __last1174 = v1169;
  __n1175 = v1170;
  struct std__vector_int__std__allocator_int__* t1177 = this1172;
  struct std___Vector_base_int__std__allocator_int__* base1178 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  unsigned long t1179 = __n1175;
  struct std___Vector_base_int__std__allocator_int__* base1180 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  struct std__allocator_int_* r1181 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1180);
  unsigned long r1182 = std__vector_int__std__allocator_int______S_check_init_len(t1179, r1181);
  int* r1183 = std___Vector_base_int__std__allocator_int______M_allocate(base1178, r1182);
  __start1176 = r1183;
  int* t1184 = __start1176;
  struct std___Vector_base_int__std__allocator_int__* base1185 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1186 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1185->_M_impl) + 0);
  base1186->_M_finish = t1184;
  struct std___Vector_base_int__std__allocator_int__* base1187 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1188 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1187->_M_impl) + 0);
  base1188->_M_start = t1184;
  int* t1189 = __start1176;
  unsigned long t1190 = __n1175;
  int* ptr1191 = &(t1189)[t1190];
  struct std___Vector_base_int__std__allocator_int__* base1192 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1193 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1192->_M_impl) + 0);
  base1193->_M_end_of_storage = ptr1191;
  int* t1194 = __first1173;
  int* t1195 = __last1174;
  int* t1196 = __start1176;
  struct std___Vector_base_int__std__allocator_int__* base1197 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  struct std__allocator_int_* r1198 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1197);
  int* r1199 = int__std____uninitialized_copy_a_int___int___int___int_(t1194, t1195, t1196, r1198);
  struct std___Vector_base_int__std__allocator_int__* base1200 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1177 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1201 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1200->_M_impl) + 0);
  base1201->_M_finish = r1199;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1202, int* v1203, unsigned long v1204) {
bb1205:
  struct std____new_allocator_int_* this1206;
  int* __p1207;
  unsigned long __n1208;
  this1206 = v1202;
  __p1207 = v1203;
  __n1208 = v1204;
  struct std____new_allocator_int_* t1209 = this1206;
    unsigned long c1210 = 4;
    unsigned long c1211 = 16;
    _Bool c1212 = ((c1210 > c1211)) ? 1 : 0;
    if (c1212) {
      int* t1213 = __p1207;
      void* cast1214 = (void*)t1213;
      unsigned long t1215 = __n1208;
      unsigned long c1216 = 4;
      unsigned long b1217 = t1215 * c1216;
      unsigned long c1218 = 4;
      operator_delete_3(cast1214, b1217, c1218);
      return;
    }
  int* t1219 = __p1207;
  void* cast1220 = (void*)t1219;
  unsigned long t1221 = __n1208;
  unsigned long c1222 = 4;
  unsigned long b1223 = t1221 * c1222;
  operator_delete_2(cast1220, b1223);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1224, int* v1225, unsigned long v1226) {
bb1227:
  struct std__allocator_int_* this1228;
  int* __p1229;
  unsigned long __n1230;
  this1228 = v1224;
  __p1229 = v1225;
  __n1230 = v1226;
  struct std__allocator_int_* t1231 = this1228;
    _Bool r1232 = std____is_constant_evaluated();
    if (r1232) {
      int* t1233 = __p1229;
      void* cast1234 = (void*)t1233;
      operator_delete(cast1234);
      return;
    }
  struct std____new_allocator_int_* base1235 = (struct std____new_allocator_int_*)((char *)t1231 + 0);
  int* t1236 = __p1229;
  unsigned long t1237 = __n1230;
  std____new_allocator_int___deallocate(base1235, t1236, t1237);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1238, int* v1239, unsigned long v1240) {
bb1241:
  struct std__allocator_int_* __a1242;
  int* __p1243;
  unsigned long __n1244;
  __a1242 = v1238;
  __p1243 = v1239;
  __n1244 = v1240;
  struct std__allocator_int_* t1245 = __a1242;
  int* t1246 = __p1243;
  unsigned long t1247 = __n1244;
  std__allocator_int___deallocate(t1245, t1246, t1247);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1248, int* v1249, unsigned long v1250) {
bb1251:
  struct std___Vector_base_int__std__allocator_int__* this1252;
  int* __p1253;
  unsigned long __n1254;
  this1252 = v1248;
  __p1253 = v1249;
  __n1254 = v1250;
  struct std___Vector_base_int__std__allocator_int__* t1255 = this1252;
    int* t1256 = __p1253;
    _Bool cast1257 = (_Bool)t1256;
    if (cast1257) {
      struct std__allocator_int_* base1258 = (struct std__allocator_int_*)((char *)&(t1255->_M_impl) + 0);
      int* t1259 = __p1253;
      unsigned long t1260 = __n1254;
      std__allocator_traits_std__allocator_int_____deallocate(base1258, t1259, t1260);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1261) {
bb1262:
  struct std___Vector_base_int__std__allocator_int__* this1263;
  this1263 = v1261;
  struct std___Vector_base_int__std__allocator_int__* t1264 = this1263;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1265 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1264->_M_impl) + 0);
    int* t1266 = base1265->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1267 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1264->_M_impl) + 0);
    int* t1268 = base1267->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1269 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1264->_M_impl) + 0);
    int* t1270 = base1269->_M_start;
    long diff1271 = t1268 - t1270;
    unsigned long cast1272 = (unsigned long)diff1271;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1264, t1266, cast1272);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1264->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1273, struct std____new_allocator_int_* v1274) {
bb1275:
  struct std____new_allocator_int_* this1276;
  struct std____new_allocator_int_* unnamed1277;
  this1276 = v1273;
  unnamed1277 = v1274;
  struct std____new_allocator_int_* t1278 = this1276;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1279) {
bb1280:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1281;
  this1281 = v1279;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1282 = this1281;
  int* c1283 = ((void*)0);
  t1282->_M_start = c1283;
  int* c1284 = ((void*)0);
  t1282->_M_finish = c1284;
  int* c1285 = ((void*)0);
  t1282->_M_end_of_storage = c1285;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1286) {
bb1287:
  int* __location1288;
  __location1288 = v1286;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1289, int* v1290) {
bb1291:
  int* __first1292;
  int* __last1293;
  __first1292 = v1289;
  __last1293 = v1290;
      _Bool r1294 = std____is_constant_evaluated();
      if (r1294) {
          while (1) {
            int* t1296 = __first1292;
            int* t1297 = __last1293;
            _Bool c1298 = ((t1296 != t1297)) ? 1 : 0;
            if (!c1298) break;
            int* t1299 = __first1292;
            void_std__destroy_at_int_(t1299);
          for_step1295: ;
            int* t1300 = __first1292;
            int c1301 = 1;
            int* ptr1302 = &(t1300)[c1301];
            __first1292 = ptr1302;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1303, int* v1304, struct std__allocator_int_* v1305) {
bb1306:
  int* __first1307;
  int* __last1308;
  struct std__allocator_int_* unnamed1309;
  __first1307 = v1303;
  __last1308 = v1304;
  unnamed1309 = v1305;
  int* t1310 = __first1307;
  int* t1311 = __last1308;
  void_std___Destroy_int__(t1310, t1311);
  return;
}

