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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "first[2] != 33";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm79-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = " first contains:";
char _str_3[2] = " ";
char _str_4[18] = "\nsecond contains:";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_7[9] = "__n >= 0";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
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

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  unsigned long t16 = __n11;
  struct std__allocator_int_* t17 = __a13;
  unsigned long r18 = std__vector_int__std__allocator_int______S_check_init_len(t16, t17);
  struct std__allocator_int_* t19 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, r18, t19);
    unsigned long t20 = __n11;
    int* t21 = __value12;
    std__vector_int__std__allocator_int______M_fill_initialize(t14, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v26) {
bb27:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this28;
  this28 = v26;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t29 = this28;
  int* c30 = ((void*)0);
  t29->_M_current = c30;
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v31, int* v32) {
bb33:
  int* __a34;
  int* __b35;
  int __tmp36;
  __a34 = v31;
  __b35 = v32;
  int* t37 = __a34;
  int t38 = *t37;
  __tmp36 = t38;
  int* t39 = __b35;
  int t40 = *t39;
  int* t41 = __a34;
  *t41 = t40;
  int t42 = __tmp36;
  int* t43 = __b35;
  *t43 = t42;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v44, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v45) {
bb46:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b48;
  __a47 = v44;
  __b48 = v45;
  int* r49 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a47);
  int* r50 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b48);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r49, r50);
  return;
}

// function: _ZSt11swap_rangesIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v51, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v52, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v53) {
bb54:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first257;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval58;
  __first155 = v51;
  __last156 = v52;
  __first257 = v53;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp059;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp160;
    while (1) {
      _Bool r62 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first155, &__last156);
      _Bool u63 = !r62;
      if (!u63) break;
      agg_tmp059 = __first155; // copy
      agg_tmp160 = __first257; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t64 = agg_tmp059;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t65 = agg_tmp160;
      void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t64, t65);
    for_step61: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r66 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first155);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r67 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first257);
    }
  __retval58 = __first257; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t68 = __retval58;
  return t68;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v69, int** v70) {
bb71:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this72;
  int** __i73;
  this72 = v69;
  __i73 = v70;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t74 = this72;
  int** t75 = __i73;
  int* t76 = *t75;
  t74->_M_current = t76;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v77) {
bb78:
  struct std__vector_int__std__allocator_int__* this79;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval80;
  this79 = v77;
  struct std__vector_int__std__allocator_int__* t81 = this79;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base83 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base82->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval80, &base83->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t84 = __retval80;
  return t84;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v85, long v86) {
bb87:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this88;
  long __n89;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval90;
  int* ref_tmp091;
  this88 = v85;
  __n89 = v86;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t92 = this88;
  int* t93 = t92->_M_current;
  long t94 = __n89;
  int* ptr95 = &(t93)[t94];
  ref_tmp091 = ptr95;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval90, &ref_tmp091);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t96 = __retval90;
  return t96;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v97) {
bb98:
  struct std__vector_int__std__allocator_int__* this99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval100;
  this99 = v97;
  struct std__vector_int__std__allocator_int__* t101 = this99;
  struct std___Vector_base_int__std__allocator_int__* base102 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t101 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base103 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base102->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval100, &base103->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t104 = __retval100;
  return t104;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v105, long v106) {
bb107:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this108;
  long __n109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval110;
  int* ref_tmp0111;
  this108 = v105;
  __n109 = v106;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t112 = this108;
  int* t113 = t112->_M_current;
  long t114 = __n109;
  long u115 = -t114;
  int* ptr116 = &(t113)[u115];
  ref_tmp0111 = ptr116;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval110, &ref_tmp0111);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t117 = __retval110;
  return t117;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v118) {
bb119:
  struct std__vector_int__std__allocator_int__* this120;
  unsigned long __retval121;
  long __dif122;
  this120 = v118;
  struct std__vector_int__std__allocator_int__* t123 = this120;
  struct std___Vector_base_int__std__allocator_int__* base124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t123 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base125 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base124->_M_impl) + 0);
  int* t126 = base125->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base127 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t123 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base128 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base127->_M_impl) + 0);
  int* t129 = base128->_M_start;
  long diff130 = t126 - t129;
  __dif122 = diff130;
    long t131 = __dif122;
    long c132 = 0;
    _Bool c133 = ((t131 < c132)) ? 1 : 0;
    if (c133) {
      __builtin_unreachable();
    }
  long t134 = __dif122;
  unsigned long cast135 = (unsigned long)t134;
  __retval121 = cast135;
  unsigned long t136 = __retval121;
  return t136;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v137, unsigned long v138) {
bb139:
  struct std__vector_int__std__allocator_int__* this140;
  unsigned long __n141;
  int* __retval142;
  this140 = v137;
  __n141 = v138;
  struct std__vector_int__std__allocator_int__* t143 = this140;
    do {
          unsigned long t144 = __n141;
          unsigned long r145 = std__vector_int__std__allocator_int_____size___const(t143);
          _Bool c146 = ((t144 < r145)) ? 1 : 0;
          _Bool u147 = !c146;
          if (u147) {
            char* cast148 = (char*)&(_str_8);
            int c149 = 1263;
            char* cast150 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast151 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast148, c149, cast150, cast151);
          }
      _Bool c152 = 0;
      if (!c152) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t143 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base154 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base153->_M_impl) + 0);
  int* t155 = base154->_M_start;
  unsigned long t156 = __n141;
  int* ptr157 = &(t155)[t156];
  __retval142 = ptr157;
  int* t158 = __retval142;
  return t158;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v159, int v160) {
bb161:
  int __a162;
  int __b163;
  int __retval164;
  __a162 = v159;
  __b163 = v160;
  int t165 = __a162;
  int t166 = __b163;
  int b167 = t165 | t166;
  __retval164 = b167;
  int t168 = __retval164;
  return t168;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v169) {
bb170:
  struct std__basic_ios_char__std__char_traits_char__* this171;
  int __retval172;
  this171 = v169;
  struct std__basic_ios_char__std__char_traits_char__* t173 = this171;
  struct std__ios_base* base174 = (struct std__ios_base*)((char *)t173 + 0);
  int t175 = base174->_M_streambuf_state;
  __retval172 = t175;
  int t176 = __retval172;
  return t176;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v177, int v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  int __state181;
  this180 = v177;
  __state181 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t182 = this180;
  int r183 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t182);
  int t184 = __state181;
  int r185 = std__operator_(r183, t184);
  std__basic_ios_char__std__char_traits_char_____clear(t182, r185);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v186, char* v187) {
bb188:
  char* __c1189;
  char* __c2190;
  _Bool __retval191;
  __c1189 = v186;
  __c2190 = v187;
  char* t192 = __c1189;
  char t193 = *t192;
  int cast194 = (int)t193;
  char* t195 = __c2190;
  char t196 = *t195;
  int cast197 = (int)t196;
  _Bool c198 = ((cast194 == cast197)) ? 1 : 0;
  __retval191 = c198;
  _Bool t199 = __retval191;
  return t199;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v200) {
bb201:
  char* __p202;
  unsigned long __retval203;
  unsigned long __i204;
  __p202 = v200;
  unsigned long c205 = 0;
  __i204 = c205;
    char ref_tmp0206;
    while (1) {
      unsigned long t207 = __i204;
      char* t208 = __p202;
      char* ptr209 = &(t208)[t207];
      char c210 = 0;
      ref_tmp0206 = c210;
      _Bool r211 = __gnu_cxx__char_traits_char___eq(ptr209, &ref_tmp0206);
      _Bool u212 = !r211;
      if (!u212) break;
      unsigned long t213 = __i204;
      unsigned long u214 = t213 + 1;
      __i204 = u214;
    }
  unsigned long t215 = __i204;
  __retval203 = t215;
  unsigned long t216 = __retval203;
  return t216;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v217) {
bb218:
  char* __s219;
  unsigned long __retval220;
  __s219 = v217;
    _Bool r221 = std____is_constant_evaluated();
    if (r221) {
      char* t222 = __s219;
      unsigned long r223 = __gnu_cxx__char_traits_char___length(t222);
      __retval220 = r223;
      unsigned long t224 = __retval220;
      return t224;
    }
  char* t225 = __s219;
  unsigned long r226 = strlen(t225);
  __retval220 = r226;
  unsigned long t227 = __retval220;
  return t227;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v228, char* v229) {
bb230:
  struct std__basic_ostream_char__std__char_traits_char__* __out231;
  char* __s232;
  struct std__basic_ostream_char__std__char_traits_char__* __retval233;
  __out231 = v228;
  __s232 = v229;
    char* t234 = __s232;
    _Bool cast235 = (_Bool)t234;
    _Bool u236 = !cast235;
    if (u236) {
      struct std__basic_ostream_char__std__char_traits_char__* t237 = __out231;
      void** v238 = (void**)t237;
      void* v239 = *((void**)v238);
      unsigned char* cast240 = (unsigned char*)v239;
      long c241 = -24;
      unsigned char* ptr242 = &(cast240)[c241];
      long* cast243 = (long*)ptr242;
      long t244 = *cast243;
      unsigned char* cast245 = (unsigned char*)t237;
      unsigned char* ptr246 = &(cast245)[t244];
      struct std__basic_ostream_char__std__char_traits_char__* cast247 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr246;
      struct std__basic_ios_char__std__char_traits_char__* cast248 = (struct std__basic_ios_char__std__char_traits_char__*)cast247;
      int t249 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast248, t249);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t250 = __out231;
      char* t251 = __s232;
      char* t252 = __s232;
      unsigned long r253 = std__char_traits_char___length(t252);
      long cast254 = (long)r253;
      struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t250, t251, cast254);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __out231;
  __retval233 = t256;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __retval233;
  return t257;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v258, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v259) {
bb260:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval263;
  this261 = v258;
  unnamed262 = v259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t264 = this261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t265 = unnamed262;
  int* t266 = t265->_M_current;
  t264->_M_current = t266;
  __retval263 = t264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t267 = __retval263;
  return t267;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v268) {
bb269:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this270;
  int** __retval271;
  this270 = v268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t272 = this270;
  __retval271 = &t272->_M_current;
  int** t273 = __retval271;
  return t273;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v274, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v275) {
bb276:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs278;
  _Bool __retval279;
  __lhs277 = v274;
  __rhs278 = v275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t280 = __lhs277;
  int** r281 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t280);
  int* t282 = *r281;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t283 = __rhs278;
  int** r284 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t283);
  int* t285 = *r284;
  _Bool c286 = ((t282 == t285)) ? 1 : 0;
  __retval279 = c286;
  _Bool t287 = __retval279;
  return t287;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v288) {
bb289:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this290;
  int* __retval291;
  this290 = v288;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t292 = this290;
  int* t293 = t292->_M_current;
  __retval291 = t293;
  int* t294 = __retval291;
  return t294;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v295) {
bb296:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this297;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval298;
  this297 = v295;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t299 = this297;
  int* t300 = t299->_M_current;
  int c301 = 1;
  int* ptr302 = &(t300)[c301];
  t299->_M_current = ptr302;
  __retval298 = t299;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t303 = __retval298;
  return t303;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v304, void* v305) {
bb306:
  struct std__basic_ostream_char__std__char_traits_char__* this307;
  void* __pf308;
  struct std__basic_ostream_char__std__char_traits_char__* __retval309;
  this307 = v304;
  __pf308 = v305;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = this307;
  void* t311 = __pf308;
  struct std__basic_ostream_char__std__char_traits_char__* r312 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t311)(t310);
  __retval309 = r312;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __retval309;
  return t313;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v314) {
bb315:
  struct std__basic_ostream_char__std__char_traits_char__* __os316;
  struct std__basic_ostream_char__std__char_traits_char__* __retval317;
  __os316 = v314;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __os316;
  struct std__basic_ostream_char__std__char_traits_char__* r319 = std__ostream__flush(t318);
  __retval317 = r319;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = __retval317;
  return t320;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v321) {
bb322:
  struct std__ctype_char_* __f323;
  struct std__ctype_char_* __retval324;
  __f323 = v321;
    struct std__ctype_char_* t325 = __f323;
    _Bool cast326 = (_Bool)t325;
    _Bool u327 = !cast326;
    if (u327) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t328 = __f323;
  __retval324 = t328;
  struct std__ctype_char_* t329 = __retval324;
  return t329;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v330, char v331) {
bb332:
  struct std__ctype_char_* this333;
  char __c334;
  char __retval335;
  this333 = v330;
  __c334 = v331;
  struct std__ctype_char_* t336 = this333;
    char t337 = t336->_M_widen_ok;
    _Bool cast338 = (_Bool)t337;
    if (cast338) {
      char t339 = __c334;
      unsigned char cast340 = (unsigned char)t339;
      unsigned long cast341 = (unsigned long)cast340;
      char t342 = t336->_M_widen[cast341];
      __retval335 = t342;
      char t343 = __retval335;
      return t343;
    }
  std__ctype_char____M_widen_init___const(t336);
  char t344 = __c334;
  void** v345 = (void**)t336;
  void* v346 = *((void**)v345);
  char vcall349 = (char)__VERIFIER_virtual_call_char_char(t336, 6, t344);
  __retval335 = vcall349;
  char t350 = __retval335;
  return t350;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v351, char v352) {
bb353:
  struct std__basic_ios_char__std__char_traits_char__* this354;
  char __c355;
  char __retval356;
  this354 = v351;
  __c355 = v352;
  struct std__basic_ios_char__std__char_traits_char__* t357 = this354;
  struct std__ctype_char_* t358 = t357->_M_ctype;
  struct std__ctype_char_* r359 = std__ctype_char__const__std____check_facet_std__ctype_char___(t358);
  char t360 = __c355;
  char r361 = std__ctype_char___widen_char__const(r359, t360);
  __retval356 = r361;
  char t362 = __retval356;
  return t362;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v363) {
bb364:
  struct std__basic_ostream_char__std__char_traits_char__* __os365;
  struct std__basic_ostream_char__std__char_traits_char__* __retval366;
  __os365 = v363;
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __os365;
  struct std__basic_ostream_char__std__char_traits_char__* t368 = __os365;
  void** v369 = (void**)t368;
  void* v370 = *((void**)v369);
  unsigned char* cast371 = (unsigned char*)v370;
  long c372 = -24;
  unsigned char* ptr373 = &(cast371)[c372];
  long* cast374 = (long*)ptr373;
  long t375 = *cast374;
  unsigned char* cast376 = (unsigned char*)t368;
  unsigned char* ptr377 = &(cast376)[t375];
  struct std__basic_ostream_char__std__char_traits_char__* cast378 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr377;
  struct std__basic_ios_char__std__char_traits_char__* cast379 = (struct std__basic_ios_char__std__char_traits_char__*)cast378;
  char c380 = 10;
  char r381 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast379, c380);
  struct std__basic_ostream_char__std__char_traits_char__* r382 = std__ostream__put(t367, r381);
  struct std__basic_ostream_char__std__char_traits_char__* r383 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r382);
  __retval366 = r383;
  struct std__basic_ostream_char__std__char_traits_char__* t384 = __retval366;
  return t384;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v385) {
bb386:
  struct std__vector_int__std__allocator_int__* this387;
  this387 = v385;
  struct std__vector_int__std__allocator_int__* t388 = this387;
    struct std___Vector_base_int__std__allocator_int__* base389 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base390 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base389->_M_impl) + 0);
    int* t391 = base390->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base392 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base393 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base392->_M_impl) + 0);
    int* t394 = base393->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base395 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std__allocator_int_* r396 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base395);
    void_std___Destroy_int___int_(t391, t394, r396);
  {
    struct std___Vector_base_int__std__allocator_int__* base397 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base397);
  }
  return;
}

// function: main
int main() {
bb398:
  int __retval399;
  struct std__vector_int__std__allocator_int__ first400;
  int ref_tmp0401;
  struct std__allocator_int_ ref_tmp1402;
  struct std__vector_int__std__allocator_int__ second403;
  int ref_tmp2404;
  struct std__allocator_int_ ref_tmp3405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0407;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1409;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp5410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3412;
  int c413 = 0;
  __retval399 = c413;
  unsigned long c414 = 5;
  int c415 = 10;
  ref_tmp0401 = c415;
  std__allocator_int___allocator_2(&ref_tmp1402);
    std__vector_int__std__allocator_int_____vector(&first400, c414, &ref_tmp0401, &ref_tmp1402);
  {
    std__allocator_int____allocator(&ref_tmp1402);
  }
    unsigned long c416 = 5;
    int c417 = 33;
    ref_tmp2404 = c417;
    std__allocator_int___allocator_2(&ref_tmp3405);
      std__vector_int__std__allocator_int_____vector(&second403, c416, &ref_tmp2404, &ref_tmp3405);
    {
      std__allocator_int____allocator(&ref_tmp3405);
    }
      __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it406);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r418 = std__vector_int__std__allocator_int_____begin(&first400);
      ref_tmp4408 = r418;
      long c419 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r420 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp4408, c419);
      agg_tmp0407 = r420;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r421 = std__vector_int__std__allocator_int_____end(&first400);
      ref_tmp5410 = r421;
      long c422 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r423 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp5410, c422);
      agg_tmp1409 = r423;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r424 = std__vector_int__std__allocator_int_____begin(&second403);
      agg_tmp2411 = r424;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t425 = agg_tmp0407;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t426 = agg_tmp1409;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t427 = agg_tmp2411;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r428 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t425, t426, t427);
      agg_tmp3412 = r428;
      unsigned long c429 = 2;
      int* r430 = std__vector_int__std__allocator_int_____operator__(&first400, c429);
      int t431 = *r430;
      int c432 = 33;
      _Bool c433 = ((t431 != c432)) ? 1 : 0;
      if (c433) {
      } else {
        char* cast434 = (char*)&(_str);
        char* c435 = _str_1;
        unsigned int c436 = 22;
        char* cast437 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast434, c435, c436, cast437);
      }
      char* cast438 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r439 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast438);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6440;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp7441;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r442 = std__vector_int__std__allocator_int_____begin(&first400);
        ref_tmp6440 = r442;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r443 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it406, &ref_tmp6440);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r445 = std__vector_int__std__allocator_int_____end(&first400);
          ref_tmp7441 = r445;
          _Bool r446 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it406, &ref_tmp7441);
          _Bool u447 = !r446;
          if (!u447) break;
          char* cast448 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r449 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast448);
          int* r450 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it406);
          int t451 = *r450;
          struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__operator__(r449, t451);
        for_step444: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r453 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it406);
        }
      char* cast454 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r455 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast454);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp8456;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp9457;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r458 = std__vector_int__std__allocator_int_____begin(&second403);
        ref_tmp8456 = r458;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r459 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it406, &ref_tmp8456);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r461 = std__vector_int__std__allocator_int_____end(&second403);
          ref_tmp9457 = r461;
          _Bool r462 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it406, &ref_tmp9457);
          _Bool u463 = !r462;
          if (!u463) break;
          char* cast464 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r465 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast464);
          int* r466 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it406);
          int t467 = *r466;
          struct std__basic_ostream_char__std__char_traits_char__* r468 = std__ostream__operator__(r465, t467);
        for_step460: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r469 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it406);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r470 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c471 = 0;
      __retval399 = c471;
      int t472 = __retval399;
      int ret_val473 = t472;
      {
        std__vector_int__std__allocator_int______vector(&second403);
      }
      {
        std__vector_int__std__allocator_int______vector(&first400);
      }
      return ret_val473;
  int t474 = __retval399;
  return t474;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v475) {
bb476:
  struct std____new_allocator_int_* this477;
  this477 = v475;
  struct std____new_allocator_int_* t478 = this477;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v479, unsigned long* v480) {
bb481:
  unsigned long* __a482;
  unsigned long* __b483;
  unsigned long* __retval484;
  __a482 = v479;
  __b483 = v480;
    unsigned long* t485 = __b483;
    unsigned long t486 = *t485;
    unsigned long* t487 = __a482;
    unsigned long t488 = *t487;
    _Bool c489 = ((t486 < t488)) ? 1 : 0;
    if (c489) {
      unsigned long* t490 = __b483;
      __retval484 = t490;
      unsigned long* t491 = __retval484;
      return t491;
    }
  unsigned long* t492 = __a482;
  __retval484 = t492;
  unsigned long* t493 = __retval484;
  return t493;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v494) {
bb495:
  struct std__allocator_int_* __a496;
  unsigned long __retval497;
  unsigned long __diffmax498;
  unsigned long __allocmax499;
  __a496 = v494;
  unsigned long c500 = 2305843009213693951;
  __diffmax498 = c500;
  unsigned long c501 = 4611686018427387903;
  __allocmax499 = c501;
  unsigned long* r502 = unsigned_long_const__std__min_unsigned_long_(&__diffmax498, &__allocmax499);
  unsigned long t503 = *r502;
  __retval497 = t503;
  unsigned long t504 = __retval497;
  return t504;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v505, struct std__allocator_int_* v506) {
bb507:
  struct std__allocator_int_* this508;
  struct std__allocator_int_* __a509;
  this508 = v505;
  __a509 = v506;
  struct std__allocator_int_* t510 = this508;
  struct std____new_allocator_int_* base511 = (struct std____new_allocator_int_*)((char *)t510 + 0);
  struct std__allocator_int_* t512 = __a509;
  struct std____new_allocator_int_* base513 = (struct std____new_allocator_int_*)((char *)t512 + 0);
  std____new_allocator_int_____new_allocator(base511, base513);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v514, struct std__allocator_int_* v515) {
bb516:
  unsigned long __n517;
  struct std__allocator_int_* __a518;
  unsigned long __retval519;
  __n517 = v514;
  __a518 = v515;
    struct std__allocator_int_ ref_tmp0520;
    _Bool tmp_exprcleanup521;
    unsigned long t522 = __n517;
    struct std__allocator_int_* t523 = __a518;
    std__allocator_int___allocator(&ref_tmp0520, t523);
      unsigned long r524 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0520);
      _Bool c525 = ((t522 > r524)) ? 1 : 0;
      tmp_exprcleanup521 = c525;
    {
      std__allocator_int____allocator(&ref_tmp0520);
    }
    _Bool t526 = tmp_exprcleanup521;
    if (t526) {
      char* cast527 = (char*)&(_str_5);
      std____throw_length_error(cast527);
    }
  unsigned long t528 = __n517;
  __retval519 = t528;
  unsigned long t529 = __retval519;
  return t529;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v530, struct std__allocator_int_* v531) {
bb532:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this533;
  struct std__allocator_int_* __a534;
  this533 = v530;
  __a534 = v531;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t535 = this533;
  struct std__allocator_int_* base536 = (struct std__allocator_int_*)((char *)t535 + 0);
  struct std__allocator_int_* t537 = __a534;
  std__allocator_int___allocator(base536, t537);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base538 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t535 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base538);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb539:
  _Bool __retval540;
    _Bool c541 = 0;
    __retval540 = c541;
    _Bool t542 = __retval540;
    return t542;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v543) {
bb544:
  struct std____new_allocator_int_* this545;
  unsigned long __retval546;
  this545 = v543;
  struct std____new_allocator_int_* t547 = this545;
  unsigned long c548 = 9223372036854775807;
  unsigned long c549 = 4;
  unsigned long b550 = c548 / c549;
  __retval546 = b550;
  unsigned long t551 = __retval546;
  return t551;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v552, unsigned long v553, void* v554) {
bb555:
  struct std____new_allocator_int_* this556;
  unsigned long __n557;
  void* unnamed558;
  int* __retval559;
  this556 = v552;
  __n557 = v553;
  unnamed558 = v554;
  struct std____new_allocator_int_* t560 = this556;
    unsigned long t561 = __n557;
    unsigned long r562 = std____new_allocator_int____M_max_size___const(t560);
    _Bool c563 = ((t561 > r562)) ? 1 : 0;
    if (c563) {
        unsigned long t564 = __n557;
        unsigned long c565 = -1;
        unsigned long c566 = 4;
        unsigned long b567 = c565 / c566;
        _Bool c568 = ((t564 > b567)) ? 1 : 0;
        if (c568) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c569 = 4;
    unsigned long c570 = 16;
    _Bool c571 = ((c569 > c570)) ? 1 : 0;
    if (c571) {
      unsigned long __al572;
      unsigned long c573 = 4;
      __al572 = c573;
      unsigned long t574 = __n557;
      unsigned long c575 = 4;
      unsigned long b576 = t574 * c575;
      unsigned long t577 = __al572;
      void* r578 = operator_new_2(b576, t577);
      int* cast579 = (int*)r578;
      __retval559 = cast579;
      int* t580 = __retval559;
      return t580;
    }
  unsigned long t581 = __n557;
  unsigned long c582 = 4;
  unsigned long b583 = t581 * c582;
  void* r584 = operator_new(b583);
  int* cast585 = (int*)r584;
  __retval559 = cast585;
  int* t586 = __retval559;
  return t586;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v587, unsigned long v588) {
bb589:
  struct std__allocator_int_* this590;
  unsigned long __n591;
  int* __retval592;
  this590 = v587;
  __n591 = v588;
  struct std__allocator_int_* t593 = this590;
    _Bool r594 = std____is_constant_evaluated();
    if (r594) {
        unsigned long t595 = __n591;
        unsigned long c596 = 4;
        unsigned long ovr597;
        _Bool ovf598 = __builtin_mul_overflow(t595, c596, &ovr597);
        __n591 = ovr597;
        if (ovf598) {
          std____throw_bad_array_new_length();
        }
      unsigned long t599 = __n591;
      void* r600 = operator_new(t599);
      int* cast601 = (int*)r600;
      __retval592 = cast601;
      int* t602 = __retval592;
      return t602;
    }
  struct std____new_allocator_int_* base603 = (struct std____new_allocator_int_*)((char *)t593 + 0);
  unsigned long t604 = __n591;
  void* c605 = ((void*)0);
  int* r606 = std____new_allocator_int___allocate(base603, t604, c605);
  __retval592 = r606;
  int* t607 = __retval592;
  return t607;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v608, unsigned long v609) {
bb610:
  struct std__allocator_int_* __a611;
  unsigned long __n612;
  int* __retval613;
  __a611 = v608;
  __n612 = v609;
  struct std__allocator_int_* t614 = __a611;
  unsigned long t615 = __n612;
  int* r616 = std__allocator_int___allocate(t614, t615);
  __retval613 = r616;
  int* t617 = __retval613;
  return t617;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v618, unsigned long v619) {
bb620:
  struct std___Vector_base_int__std__allocator_int__* this621;
  unsigned long __n622;
  int* __retval623;
  this621 = v618;
  __n622 = v619;
  struct std___Vector_base_int__std__allocator_int__* t624 = this621;
  unsigned long t625 = __n622;
  unsigned long c626 = 0;
  _Bool c627 = ((t625 != c626)) ? 1 : 0;
  int* ternary628;
  if (c627) {
    struct std__allocator_int_* base629 = (struct std__allocator_int_*)((char *)&(t624->_M_impl) + 0);
    unsigned long t630 = __n622;
    int* r631 = std__allocator_traits_std__allocator_int_____allocate(base629, t630);
    ternary628 = (int*)r631;
  } else {
    int* c632 = ((void*)0);
    ternary628 = (int*)c632;
  }
  __retval623 = ternary628;
  int* t633 = __retval623;
  return t633;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v634, unsigned long v635) {
bb636:
  struct std___Vector_base_int__std__allocator_int__* this637;
  unsigned long __n638;
  this637 = v634;
  __n638 = v635;
  struct std___Vector_base_int__std__allocator_int__* t639 = this637;
  unsigned long t640 = __n638;
  int* r641 = std___Vector_base_int__std__allocator_int______M_allocate(t639, t640);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base642 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t639->_M_impl) + 0);
  base642->_M_start = r641;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base643 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t639->_M_impl) + 0);
  int* t644 = base643->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base645 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t639->_M_impl) + 0);
  base645->_M_finish = t644;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base646 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t639->_M_impl) + 0);
  int* t647 = base646->_M_start;
  unsigned long t648 = __n638;
  int* ptr649 = &(t647)[t648];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base650 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t639->_M_impl) + 0);
  base650->_M_end_of_storage = ptr649;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v651) {
bb652:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this653;
  this653 = v651;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t654 = this653;
  {
    struct std__allocator_int_* base655 = (struct std__allocator_int_*)((char *)t654 + 0);
    std__allocator_int____allocator(base655);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v656, unsigned long v657, struct std__allocator_int_* v658) {
bb659:
  struct std___Vector_base_int__std__allocator_int__* this660;
  unsigned long __n661;
  struct std__allocator_int_* __a662;
  this660 = v656;
  __n661 = v657;
  __a662 = v658;
  struct std___Vector_base_int__std__allocator_int__* t663 = this660;
  struct std__allocator_int_* t664 = __a662;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t663->_M_impl, t664);
    unsigned long t665 = __n661;
    std___Vector_base_int__std__allocator_int______M_create_storage(t663, t665);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb666:
  _Bool __retval667;
    _Bool c668 = 0;
    __retval667 = c668;
    _Bool t669 = __retval667;
    return t669;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v670, int** v671) {
bb672:
  struct std___UninitDestroyGuard_int____void_* this673;
  int** __first674;
  this673 = v670;
  __first674 = v671;
  struct std___UninitDestroyGuard_int____void_* t675 = this673;
  int** t676 = __first674;
  int* t677 = *t676;
  t675->_M_first = t677;
  int** t678 = __first674;
  t675->_M_cur = t678;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v679, int* v680) {
bb681:
  int* __location682;
  int* __args683;
  int* __retval684;
  void* __loc685;
  __location682 = v679;
  __args683 = v680;
  int* t686 = __location682;
  void* cast687 = (void*)t686;
  __loc685 = cast687;
    void* t688 = __loc685;
    int* cast689 = (int*)t688;
    int* t690 = __args683;
    int t691 = *t690;
    *cast689 = t691;
    __retval684 = cast689;
    int* t692 = __retval684;
    return t692;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v693, int* v694) {
bb695:
  int* __p696;
  int* __args697;
  __p696 = v693;
  __args697 = v694;
    _Bool r698 = std____is_constant_evaluated();
    if (r698) {
      int* t699 = __p696;
      int* t700 = __args697;
      int* r701 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t699, t700);
      return;
    }
  int* t702 = __p696;
  void* cast703 = (void*)t702;
  int* cast704 = (int*)cast703;
  int* t705 = __args697;
  int t706 = *t705;
  *cast704 = t706;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v707) {
bb708:
  struct std___UninitDestroyGuard_int____void_* this709;
  this709 = v707;
  struct std___UninitDestroyGuard_int____void_* t710 = this709;
  int** c711 = ((void*)0);
  t710->_M_cur = c711;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v712) {
bb713:
  struct std___UninitDestroyGuard_int____void_* this714;
  this714 = v712;
  struct std___UninitDestroyGuard_int____void_* t715 = this714;
    int** t716 = t715->_M_cur;
    int** c717 = ((void*)0);
    _Bool c718 = ((t716 != c717)) ? 1 : 0;
    if (c718) {
      int* t719 = t715->_M_first;
      int** t720 = t715->_M_cur;
      int* t721 = *t720;
      void_std___Destroy_int__(t719, t721);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v722, unsigned long v723, int* v724) {
bb725:
  int* __first726;
  unsigned long __n727;
  int* __x728;
  int* __retval729;
  struct std___UninitDestroyGuard_int____void_ __guard730;
  __first726 = v722;
  __n727 = v723;
  __x728 = v724;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard730, &__first726);
        do {
              unsigned long t731 = __n727;
              unsigned long c732 = 0;
              _Bool c733 = ((t731 >= c732)) ? 1 : 0;
              _Bool u734 = !c733;
              if (u734) {
                char* cast735 = (char*)&(_str_6);
                int c736 = 463;
                char* cast737 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast738 = (char*)&(_str_7);
                std____glibcxx_assert_fail(cast735, c736, cast737, cast738);
              }
          _Bool c739 = 0;
          if (!c739) break;
        } while (1);
      while (1) {
        unsigned long t741 = __n727;
        unsigned long u742 = t741 - 1;
        __n727 = u742;
        _Bool cast743 = (_Bool)t741;
        if (!cast743) break;
        int* t744 = __first726;
        int* t745 = __x728;
        void_std___Construct_int__int_const__(t744, t745);
      for_step740: ;
        int* t746 = __first726;
        int c747 = 1;
        int* ptr748 = &(t746)[c747];
        __first726 = ptr748;
      }
    std___UninitDestroyGuard_int___void___release(&__guard730);
    int* t749 = __first726;
    __retval729 = t749;
    int* t750 = __retval729;
    int* ret_val751 = t750;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard730);
    }
    return ret_val751;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v752, unsigned long v753, int* v754) {
bb755:
  int* __first756;
  unsigned long __n757;
  int* __x758;
  int* __retval759;
  __first756 = v752;
  __n757 = v753;
  __x758 = v754;
  int* t760 = __first756;
  unsigned long t761 = __n757;
  int* t762 = __x758;
  int* r763 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t760, t761, t762);
  __retval759 = r763;
  int* t764 = __retval759;
  return t764;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v765, unsigned long v766, int* v767, struct std__allocator_int_* v768) {
bb769:
  int* __first770;
  unsigned long __n771;
  int* __x772;
  struct std__allocator_int_* unnamed773;
  int* __retval774;
  __first770 = v765;
  __n771 = v766;
  __x772 = v767;
  unnamed773 = v768;
    _Bool r775 = std__is_constant_evaluated();
    if (r775) {
      int* t776 = __first770;
      unsigned long t777 = __n771;
      int* t778 = __x772;
      int* r779 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t776, t777, t778);
      __retval774 = r779;
      int* t780 = __retval774;
      return t780;
    }
  int* t781 = __first770;
  unsigned long t782 = __n771;
  int* t783 = __x772;
  int* r784 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t781, t782, t783);
  __retval774 = r784;
  int* t785 = __retval774;
  return t785;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v786) {
bb787:
  struct std___Vector_base_int__std__allocator_int__* this788;
  struct std__allocator_int_* __retval789;
  this788 = v786;
  struct std___Vector_base_int__std__allocator_int__* t790 = this788;
  struct std__allocator_int_* base791 = (struct std__allocator_int_*)((char *)&(t790->_M_impl) + 0);
  __retval789 = base791;
  struct std__allocator_int_* t792 = __retval789;
  return t792;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v793, unsigned long v794, int* v795) {
bb796:
  struct std__vector_int__std__allocator_int__* this797;
  unsigned long __n798;
  int* __value799;
  this797 = v793;
  __n798 = v794;
  __value799 = v795;
  struct std__vector_int__std__allocator_int__* t800 = this797;
  struct std___Vector_base_int__std__allocator_int__* base801 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t800 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base802 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base801->_M_impl) + 0);
  int* t803 = base802->_M_start;
  unsigned long t804 = __n798;
  int* t805 = __value799;
  struct std___Vector_base_int__std__allocator_int__* base806 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t800 + 0);
  struct std__allocator_int_* r807 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base806);
  int* r808 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t803, t804, t805, r807);
  struct std___Vector_base_int__std__allocator_int__* base809 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t800 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base810 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base809->_M_impl) + 0);
  base810->_M_finish = r808;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v811, int* v812, unsigned long v813) {
bb814:
  struct std____new_allocator_int_* this815;
  int* __p816;
  unsigned long __n817;
  this815 = v811;
  __p816 = v812;
  __n817 = v813;
  struct std____new_allocator_int_* t818 = this815;
    unsigned long c819 = 4;
    unsigned long c820 = 16;
    _Bool c821 = ((c819 > c820)) ? 1 : 0;
    if (c821) {
      int* t822 = __p816;
      void* cast823 = (void*)t822;
      unsigned long t824 = __n817;
      unsigned long c825 = 4;
      unsigned long b826 = t824 * c825;
      unsigned long c827 = 4;
      operator_delete_3(cast823, b826, c827);
      return;
    }
  int* t828 = __p816;
  void* cast829 = (void*)t828;
  unsigned long t830 = __n817;
  unsigned long c831 = 4;
  unsigned long b832 = t830 * c831;
  operator_delete_2(cast829, b832);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v833, int* v834, unsigned long v835) {
bb836:
  struct std__allocator_int_* this837;
  int* __p838;
  unsigned long __n839;
  this837 = v833;
  __p838 = v834;
  __n839 = v835;
  struct std__allocator_int_* t840 = this837;
    _Bool r841 = std____is_constant_evaluated();
    if (r841) {
      int* t842 = __p838;
      void* cast843 = (void*)t842;
      operator_delete(cast843);
      return;
    }
  struct std____new_allocator_int_* base844 = (struct std____new_allocator_int_*)((char *)t840 + 0);
  int* t845 = __p838;
  unsigned long t846 = __n839;
  std____new_allocator_int___deallocate(base844, t845, t846);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v847, int* v848, unsigned long v849) {
bb850:
  struct std__allocator_int_* __a851;
  int* __p852;
  unsigned long __n853;
  __a851 = v847;
  __p852 = v848;
  __n853 = v849;
  struct std__allocator_int_* t854 = __a851;
  int* t855 = __p852;
  unsigned long t856 = __n853;
  std__allocator_int___deallocate(t854, t855, t856);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v857, int* v858, unsigned long v859) {
bb860:
  struct std___Vector_base_int__std__allocator_int__* this861;
  int* __p862;
  unsigned long __n863;
  this861 = v857;
  __p862 = v858;
  __n863 = v859;
  struct std___Vector_base_int__std__allocator_int__* t864 = this861;
    int* t865 = __p862;
    _Bool cast866 = (_Bool)t865;
    if (cast866) {
      struct std__allocator_int_* base867 = (struct std__allocator_int_*)((char *)&(t864->_M_impl) + 0);
      int* t868 = __p862;
      unsigned long t869 = __n863;
      std__allocator_traits_std__allocator_int_____deallocate(base867, t868, t869);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v870) {
bb871:
  struct std___Vector_base_int__std__allocator_int__* this872;
  this872 = v870;
  struct std___Vector_base_int__std__allocator_int__* t873 = this872;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base874 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t873->_M_impl) + 0);
    int* t875 = base874->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base876 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t873->_M_impl) + 0);
    int* t877 = base876->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base878 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t873->_M_impl) + 0);
    int* t879 = base878->_M_start;
    long diff880 = t877 - t879;
    unsigned long cast881 = (unsigned long)diff880;
    std___Vector_base_int__std__allocator_int______M_deallocate(t873, t875, cast881);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t873->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v882, struct std____new_allocator_int_* v883) {
bb884:
  struct std____new_allocator_int_* this885;
  struct std____new_allocator_int_* unnamed886;
  this885 = v882;
  unnamed886 = v883;
  struct std____new_allocator_int_* t887 = this885;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v888) {
bb889:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this890;
  this890 = v888;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t891 = this890;
  int* c892 = ((void*)0);
  t891->_M_start = c892;
  int* c893 = ((void*)0);
  t891->_M_finish = c893;
  int* c894 = ((void*)0);
  t891->_M_end_of_storage = c894;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v895) {
bb896:
  int* __location897;
  __location897 = v895;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v898, int* v899) {
bb900:
  int* __first901;
  int* __last902;
  __first901 = v898;
  __last902 = v899;
      _Bool r903 = std____is_constant_evaluated();
      if (r903) {
          while (1) {
            int* t905 = __first901;
            int* t906 = __last902;
            _Bool c907 = ((t905 != t906)) ? 1 : 0;
            if (!c907) break;
            int* t908 = __first901;
            void_std__destroy_at_int_(t908);
          for_step904: ;
            int* t909 = __first901;
            int c910 = 1;
            int* ptr911 = &(t909)[c910];
            __first901 = ptr911;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v912, int* v913, struct std__allocator_int_* v914) {
bb915:
  int* __first916;
  int* __last917;
  struct std__allocator_int_* unnamed918;
  __first916 = v912;
  __last917 = v913;
  unnamed918 = v914;
  int* t919 = __first916;
  int* t920 = __last917;
  void_std___Destroy_int__(t919, t920);
  return;
}

