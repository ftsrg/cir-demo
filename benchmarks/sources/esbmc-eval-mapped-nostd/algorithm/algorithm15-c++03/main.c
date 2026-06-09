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
char _str[15] = "first[0] == 10";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm15-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[15] = "first[5] == 10";
char _str_3[16] = "second[0] == 20";
char _str_4[16] = "second[3] == 20";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "first contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void void_std__swap_int__std__allocator_int___(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v0, int* v1) {
bb2:
  int* __a3;
  int* __b4;
  int __tmp5;
  __a3 = v0;
  __b4 = v1;
  int* t6 = __a3;
  int t7 = *t6;
  __tmp5 = t7;
  int* t8 = __b4;
  int t9 = *t8;
  int* t10 = __a3;
  *t10 = t9;
  int t11 = __tmp5;
  int* t12 = __b4;
  *t12 = t11;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v13) {
bb14:
  struct std__allocator_int_* this15;
  this15 = v13;
  struct std__allocator_int_* t16 = this15;
  struct std____new_allocator_int_* base17 = (struct std____new_allocator_int_*)((char *)t16 + 0);
  std____new_allocator_int_____new_allocator_2(base17);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v18, unsigned long v19, int* v20, struct std__allocator_int_* v21) {
bb22:
  struct std__vector_int__std__allocator_int__* this23;
  unsigned long __n24;
  int* __value25;
  struct std__allocator_int_* __a26;
  this23 = v18;
  __n24 = v19;
  __value25 = v20;
  __a26 = v21;
  struct std__vector_int__std__allocator_int__* t27 = this23;
  struct std___Vector_base_int__std__allocator_int__* base28 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t27 + 0);
  unsigned long t29 = __n24;
  struct std__allocator_int_* t30 = __a26;
  unsigned long r31 = std__vector_int__std__allocator_int______S_check_init_len(t29, t30);
  struct std__allocator_int_* t32 = __a26;
  std___Vector_base_int__std__allocator_int______Vector_base(base28, r31, t32);
    unsigned long t33 = __n24;
    int* t34 = __value25;
    std__vector_int__std__allocator_int______M_fill_initialize(t27, t33, t34);
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

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v39, struct std__allocator_int_* v40) {
bb41:
  struct std__allocator_int_* unnamed42;
  struct std__allocator_int_* unnamed43;
  _Bool __retval44;
  unnamed42 = v39;
  unnamed43 = v40;
  _Bool c45 = 1;
  __retval44 = c45;
  _Bool t46 = __retval44;
  return t46;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v47) {
bb48:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this49;
  this49 = v47;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t50 = this49;
  int* c51 = ((void*)0);
  t50->_M_start = c51;
  int* c52 = ((void*)0);
  t50->_M_finish = c52;
  int* c53 = ((void*)0);
  t50->_M_end_of_storage = c53;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v54, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this57;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x58;
  this57 = v54;
  __x58 = v55;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t59 = this57;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t60 = __x58;
  int* t61 = t60->_M_start;
  t59->_M_start = t61;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t62 = __x58;
  int* t63 = t62->_M_finish;
  t59->_M_finish = t63;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t64 = __x58;
  int* t65 = t64->_M_end_of_storage;
  t59->_M_end_of_storage = t65;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v66, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v67) {
bb68:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this69;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x70;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp71;
  this69 = v66;
  __x70 = v67;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t72 = this69;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp71);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp71, t72);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t73 = __x70;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t72, t73);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t74 = __x70;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t74, &__tmp71);
  return;
}

// function: _ZSt15__alloc_on_swapISaIiEEvRT_S2_
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* v75, struct std__allocator_int_* v76) {
bb77:
  struct std__allocator_int_* __one78;
  struct std__allocator_int_* __two79;
  __one78 = v75;
  __two79 = v76;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE10_S_on_swapERS1_S3_
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* v80, struct std__allocator_int_* v81) {
bb82:
  struct std__allocator_int_* __a83;
  struct std__allocator_int_* __b84;
  __a83 = v80;
  __b84 = v81;
  struct std__allocator_int_* t85 = __a83;
  struct std__allocator_int_* t86 = __b84;
  void_std____alloc_on_swap_std__allocator_int___(t85, t86);
  return;
}

// function: _ZNSt6vectorIiSaIiEE4swapERS1_
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* v87, struct std__vector_int__std__allocator_int__* v88) {
bb89:
  struct std__vector_int__std__allocator_int__* this90;
  struct std__vector_int__std__allocator_int__* __x91;
  this90 = v87;
  __x91 = v88;
  struct std__vector_int__std__allocator_int__* t92 = this90;
    do {
          _Bool t93 = _ZNSt17integral_constantIbLb0EE5valueE;
          _Bool ternary94;
          if (t93) {
            _Bool c95 = 1;
            ternary94 = (_Bool)c95;
          } else {
            struct std___Vector_base_int__std__allocator_int__* base96 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t92 + 0);
            struct std__allocator_int_* r97 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base96);
            struct std__vector_int__std__allocator_int__* t98 = __x91;
            struct std___Vector_base_int__std__allocator_int__* base99 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t98 + 0);
            struct std__allocator_int_* r100 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base99);
            _Bool r101 = std__operator__(r97, r100);
            ternary94 = (_Bool)r101;
          }
          _Bool u102 = !ternary94;
          if (u102) {
            char* cast103 = (char*)&(_str_10);
            int c104 = 1848;
            char* cast105 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_);
            char* cast106 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast103, c104, cast105, cast106);
          }
      _Bool c107 = 0;
      if (!c107) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base108 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t92 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base109 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base108->_M_impl) + 0);
  struct std__vector_int__std__allocator_int__* t110 = __x91;
  struct std___Vector_base_int__std__allocator_int__* base111 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t110 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base112 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base111->_M_impl) + 0);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base109, base112);
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t92 + 0);
  struct std__allocator_int_* r114 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base113);
  struct std__vector_int__std__allocator_int__* t115 = __x91;
  struct std___Vector_base_int__std__allocator_int__* base116 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t115 + 0);
  struct std__allocator_int_* r117 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base116);
  __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(r114, r117);
  return;
}

// function: _ZSt4swapIiSaIiEEvRSt6vectorIT_T0_ES5_
void void_std__swap_int__std__allocator_int___(struct std__vector_int__std__allocator_int__* v118, struct std__vector_int__std__allocator_int__* v119) {
bb120:
  struct std__vector_int__std__allocator_int__* __x121;
  struct std__vector_int__std__allocator_int__* __y122;
  __x121 = v118;
  __y122 = v119;
  struct std__vector_int__std__allocator_int__* t123 = __x121;
  struct std__vector_int__std__allocator_int__* t124 = __y122;
  std__vector_int__std__allocator_int_____swap(t123, t124);
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v125) {
bb126:
  struct std__vector_int__std__allocator_int__* this127;
  unsigned long __retval128;
  long __dif129;
  this127 = v125;
  struct std__vector_int__std__allocator_int__* t130 = this127;
  struct std___Vector_base_int__std__allocator_int__* base131 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t130 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base132 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base131->_M_impl) + 0);
  int* t133 = base132->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base134 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t130 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base135 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base134->_M_impl) + 0);
  int* t136 = base135->_M_start;
  long diff137 = t133 - t136;
  __dif129 = diff137;
    long t138 = __dif129;
    long c139 = 0;
    _Bool c140 = ((t138 < c139)) ? 1 : 0;
    if (c140) {
      __builtin_unreachable();
    }
  long t141 = __dif129;
  unsigned long cast142 = (unsigned long)t141;
  __retval128 = cast142;
  unsigned long t143 = __retval128;
  return t143;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v144, unsigned long v145) {
bb146:
  struct std__vector_int__std__allocator_int__* this147;
  unsigned long __n148;
  int* __retval149;
  this147 = v144;
  __n148 = v145;
  struct std__vector_int__std__allocator_int__* t150 = this147;
    do {
          unsigned long t151 = __n148;
          unsigned long r152 = std__vector_int__std__allocator_int_____size___const(t150);
          _Bool c153 = ((t151 < r152)) ? 1 : 0;
          _Bool u154 = !c153;
          if (u154) {
            char* cast155 = (char*)&(_str_10);
            int c156 = 1263;
            char* cast157 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast158 = (char*)&(_str_12);
            std____glibcxx_assert_fail(cast155, c156, cast157, cast158);
          }
      _Bool c159 = 0;
      if (!c159) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base160 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t150 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base161 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base160->_M_impl) + 0);
  int* t162 = base161->_M_start;
  unsigned long t163 = __n148;
  int* ptr164 = &(t162)[t163];
  __retval149 = ptr164;
  int* t165 = __retval149;
  return t165;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v166, int v167) {
bb168:
  int __a169;
  int __b170;
  int __retval171;
  __a169 = v166;
  __b170 = v167;
  int t172 = __a169;
  int t173 = __b170;
  int b174 = t172 | t173;
  __retval171 = b174;
  int t175 = __retval171;
  return t175;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v176) {
bb177:
  struct std__basic_ios_char__std__char_traits_char__* this178;
  int __retval179;
  this178 = v176;
  struct std__basic_ios_char__std__char_traits_char__* t180 = this178;
  struct std__ios_base* base181 = (struct std__ios_base*)((char *)t180 + 0);
  int t182 = base181->_M_streambuf_state;
  __retval179 = t182;
  int t183 = __retval179;
  return t183;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v184, int v185) {
bb186:
  struct std__basic_ios_char__std__char_traits_char__* this187;
  int __state188;
  this187 = v184;
  __state188 = v185;
  struct std__basic_ios_char__std__char_traits_char__* t189 = this187;
  int r190 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t189);
  int t191 = __state188;
  int r192 = std__operator_(r190, t191);
  std__basic_ios_char__std__char_traits_char_____clear(t189, r192);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v193, char* v194) {
bb195:
  char* __c1196;
  char* __c2197;
  _Bool __retval198;
  __c1196 = v193;
  __c2197 = v194;
  char* t199 = __c1196;
  char t200 = *t199;
  int cast201 = (int)t200;
  char* t202 = __c2197;
  char t203 = *t202;
  int cast204 = (int)t203;
  _Bool c205 = ((cast201 == cast204)) ? 1 : 0;
  __retval198 = c205;
  _Bool t206 = __retval198;
  return t206;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v207) {
bb208:
  char* __p209;
  unsigned long __retval210;
  unsigned long __i211;
  __p209 = v207;
  unsigned long c212 = 0;
  __i211 = c212;
    char ref_tmp0213;
    while (1) {
      unsigned long t214 = __i211;
      char* t215 = __p209;
      char* ptr216 = &(t215)[t214];
      char c217 = 0;
      ref_tmp0213 = c217;
      _Bool r218 = __gnu_cxx__char_traits_char___eq(ptr216, &ref_tmp0213);
      _Bool u219 = !r218;
      if (!u219) break;
      unsigned long t220 = __i211;
      unsigned long u221 = t220 + 1;
      __i211 = u221;
    }
  unsigned long t222 = __i211;
  __retval210 = t222;
  unsigned long t223 = __retval210;
  return t223;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v224) {
bb225:
  char* __s226;
  unsigned long __retval227;
  __s226 = v224;
    _Bool r228 = std____is_constant_evaluated();
    if (r228) {
      char* t229 = __s226;
      unsigned long r230 = __gnu_cxx__char_traits_char___length(t229);
      __retval227 = r230;
      unsigned long t231 = __retval227;
      return t231;
    }
  char* t232 = __s226;
  unsigned long r233 = strlen(t232);
  __retval227 = r233;
  unsigned long t234 = __retval227;
  return t234;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v235, char* v236) {
bb237:
  struct std__basic_ostream_char__std__char_traits_char__* __out238;
  char* __s239;
  struct std__basic_ostream_char__std__char_traits_char__* __retval240;
  __out238 = v235;
  __s239 = v236;
    char* t241 = __s239;
    _Bool cast242 = (_Bool)t241;
    _Bool u243 = !cast242;
    if (u243) {
      struct std__basic_ostream_char__std__char_traits_char__* t244 = __out238;
      void** v245 = (void**)t244;
      void* v246 = *((void**)v245);
      unsigned char* cast247 = (unsigned char*)v246;
      long c248 = -24;
      unsigned char* ptr249 = &(cast247)[c248];
      long* cast250 = (long*)ptr249;
      long t251 = *cast250;
      unsigned char* cast252 = (unsigned char*)t244;
      unsigned char* ptr253 = &(cast252)[t251];
      struct std__basic_ostream_char__std__char_traits_char__* cast254 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr253;
      struct std__basic_ios_char__std__char_traits_char__* cast255 = (struct std__basic_ios_char__std__char_traits_char__*)cast254;
      int t256 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast255, t256);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t257 = __out238;
      char* t258 = __s239;
      char* t259 = __s239;
      unsigned long r260 = std__char_traits_char___length(t259);
      long cast261 = (long)r260;
      struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t257, t258, cast261);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t263 = __out238;
  __retval240 = t263;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = __retval240;
  return t264;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v265, int** v266) {
bb267:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this268;
  int** __i269;
  this268 = v265;
  __i269 = v266;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t270 = this268;
  int** t271 = __i269;
  int* t272 = *t271;
  t270->_M_current = t272;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v273) {
bb274:
  struct std__vector_int__std__allocator_int__* this275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval276;
  this275 = v273;
  struct std__vector_int__std__allocator_int__* t277 = this275;
  struct std___Vector_base_int__std__allocator_int__* base278 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t277 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base279 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base278->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval276, &base279->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t280 = __retval276;
  return t280;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v281) {
bb282:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this283;
  int** __retval284;
  this283 = v281;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t285 = this283;
  __retval284 = &t285->_M_current;
  int** t286 = __retval284;
  return t286;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v287, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v288) {
bb289:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs290;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs291;
  _Bool __retval292;
  __lhs290 = v287;
  __rhs291 = v288;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t293 = __lhs290;
  int** r294 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t293);
  int* t295 = *r294;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t296 = __rhs291;
  int** r297 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t296);
  int* t298 = *r297;
  _Bool c299 = ((t295 == t298)) ? 1 : 0;
  __retval292 = c299;
  _Bool t300 = __retval292;
  return t300;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v301) {
bb302:
  struct std__vector_int__std__allocator_int__* this303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval304;
  this303 = v301;
  struct std__vector_int__std__allocator_int__* t305 = this303;
  struct std___Vector_base_int__std__allocator_int__* base306 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t305 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base307 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base306->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval304, &base307->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t308 = __retval304;
  return t308;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v309) {
bb310:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this311;
  int* __retval312;
  this311 = v309;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t313 = this311;
  int* t314 = t313->_M_current;
  __retval312 = t314;
  int* t315 = __retval312;
  return t315;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v316) {
bb317:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval319;
  this318 = v316;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t320 = this318;
  int* t321 = t320->_M_current;
  int c322 = 1;
  int* ptr323 = &(t321)[c322];
  t320->_M_current = ptr323;
  __retval319 = t320;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t324 = __retval319;
  return t324;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v325, void* v326) {
bb327:
  struct std__basic_ostream_char__std__char_traits_char__* this328;
  void* __pf329;
  struct std__basic_ostream_char__std__char_traits_char__* __retval330;
  this328 = v325;
  __pf329 = v326;
  struct std__basic_ostream_char__std__char_traits_char__* t331 = this328;
  void* t332 = __pf329;
  struct std__basic_ostream_char__std__char_traits_char__* r333 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t332)(t331);
  __retval330 = r333;
  struct std__basic_ostream_char__std__char_traits_char__* t334 = __retval330;
  return t334;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v335) {
bb336:
  struct std__basic_ostream_char__std__char_traits_char__* __os337;
  struct std__basic_ostream_char__std__char_traits_char__* __retval338;
  __os337 = v335;
  struct std__basic_ostream_char__std__char_traits_char__* t339 = __os337;
  struct std__basic_ostream_char__std__char_traits_char__* r340 = std__ostream__flush(t339);
  __retval338 = r340;
  struct std__basic_ostream_char__std__char_traits_char__* t341 = __retval338;
  return t341;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v342) {
bb343:
  struct std__ctype_char_* __f344;
  struct std__ctype_char_* __retval345;
  __f344 = v342;
    struct std__ctype_char_* t346 = __f344;
    _Bool cast347 = (_Bool)t346;
    _Bool u348 = !cast347;
    if (u348) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t349 = __f344;
  __retval345 = t349;
  struct std__ctype_char_* t350 = __retval345;
  return t350;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v351, char v352) {
bb353:
  struct std__ctype_char_* this354;
  char __c355;
  char __retval356;
  this354 = v351;
  __c355 = v352;
  struct std__ctype_char_* t357 = this354;
    char t358 = t357->_M_widen_ok;
    _Bool cast359 = (_Bool)t358;
    if (cast359) {
      char t360 = __c355;
      unsigned char cast361 = (unsigned char)t360;
      unsigned long cast362 = (unsigned long)cast361;
      char t363 = t357->_M_widen[cast362];
      __retval356 = t363;
      char t364 = __retval356;
      return t364;
    }
  std__ctype_char____M_widen_init___const(t357);
  char t365 = __c355;
  void** v366 = (void**)t357;
  void* v367 = *((void**)v366);
  char vcall370 = (char)__VERIFIER_virtual_call_char_char(t357, 6, t365);
  __retval356 = vcall370;
  char t371 = __retval356;
  return t371;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v372, char v373) {
bb374:
  struct std__basic_ios_char__std__char_traits_char__* this375;
  char __c376;
  char __retval377;
  this375 = v372;
  __c376 = v373;
  struct std__basic_ios_char__std__char_traits_char__* t378 = this375;
  struct std__ctype_char_* t379 = t378->_M_ctype;
  struct std__ctype_char_* r380 = std__ctype_char__const__std____check_facet_std__ctype_char___(t379);
  char t381 = __c376;
  char r382 = std__ctype_char___widen_char__const(r380, t381);
  __retval377 = r382;
  char t383 = __retval377;
  return t383;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v384) {
bb385:
  struct std__basic_ostream_char__std__char_traits_char__* __os386;
  struct std__basic_ostream_char__std__char_traits_char__* __retval387;
  __os386 = v384;
  struct std__basic_ostream_char__std__char_traits_char__* t388 = __os386;
  struct std__basic_ostream_char__std__char_traits_char__* t389 = __os386;
  void** v390 = (void**)t389;
  void* v391 = *((void**)v390);
  unsigned char* cast392 = (unsigned char*)v391;
  long c393 = -24;
  unsigned char* ptr394 = &(cast392)[c393];
  long* cast395 = (long*)ptr394;
  long t396 = *cast395;
  unsigned char* cast397 = (unsigned char*)t389;
  unsigned char* ptr398 = &(cast397)[t396];
  struct std__basic_ostream_char__std__char_traits_char__* cast399 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr398;
  struct std__basic_ios_char__std__char_traits_char__* cast400 = (struct std__basic_ios_char__std__char_traits_char__*)cast399;
  char c401 = 10;
  char r402 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast400, c401);
  struct std__basic_ostream_char__std__char_traits_char__* r403 = std__ostream__put(t388, r402);
  struct std__basic_ostream_char__std__char_traits_char__* r404 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r403);
  __retval387 = r404;
  struct std__basic_ostream_char__std__char_traits_char__* t405 = __retval387;
  return t405;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v406) {
bb407:
  struct std__vector_int__std__allocator_int__* this408;
  this408 = v406;
  struct std__vector_int__std__allocator_int__* t409 = this408;
    struct std___Vector_base_int__std__allocator_int__* base410 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t409 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base411 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base410->_M_impl) + 0);
    int* t412 = base411->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base413 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t409 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base414 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base413->_M_impl) + 0);
    int* t415 = base414->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base416 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t409 + 0);
    struct std__allocator_int_* r417 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base416);
    void_std___Destroy_int___int_(t412, t415, r417);
  {
    struct std___Vector_base_int__std__allocator_int__* base418 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t409 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base418);
  }
  return;
}

// function: main
int main() {
bb419:
  int __retval420;
  int x421;
  int y422;
  struct std__vector_int__std__allocator_int__ first423;
  struct std__allocator_int_ ref_tmp0424;
  struct std__vector_int__std__allocator_int__ second425;
  struct std__allocator_int_ ref_tmp1426;
  int c427 = 0;
  __retval420 = c427;
  int c428 = 10;
  x421 = c428;
  int c429 = 20;
  y422 = c429;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(&x421, &y422);
  unsigned long c430 = 4;
  std__allocator_int___allocator_2(&ref_tmp0424);
    std__vector_int__std__allocator_int_____vector(&first423, c430, &x421, &ref_tmp0424);
  {
    std__allocator_int____allocator(&ref_tmp0424);
  }
    unsigned long c431 = 6;
    std__allocator_int___allocator_2(&ref_tmp1426);
      std__vector_int__std__allocator_int_____vector(&second425, c431, &y422, &ref_tmp1426);
    {
      std__allocator_int____allocator(&ref_tmp1426);
    }
      void_std__swap_int__std__allocator_int___(&first423, &second425);
      unsigned long c432 = 0;
      int* r433 = std__vector_int__std__allocator_int_____operator__(&first423, c432);
      int t434 = *r433;
      int c435 = 10;
      _Bool c436 = ((t434 == c435)) ? 1 : 0;
      if (c436) {
      } else {
        char* cast437 = (char*)&(_str);
        char* c438 = _str_1;
        unsigned int c439 = 23;
        char* cast440 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast437, c438, c439, cast440);
      }
      unsigned long c441 = 5;
      int* r442 = std__vector_int__std__allocator_int_____operator__(&first423, c441);
      int t443 = *r442;
      int c444 = 10;
      _Bool c445 = ((t443 == c444)) ? 1 : 0;
      if (c445) {
      } else {
        char* cast446 = (char*)&(_str_2);
        char* c447 = _str_1;
        unsigned int c448 = 24;
        char* cast449 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast446, c447, c448, cast449);
      }
      unsigned long c450 = 0;
      int* r451 = std__vector_int__std__allocator_int_____operator__(&second425, c450);
      int t452 = *r451;
      int c453 = 20;
      _Bool c454 = ((t452 == c453)) ? 1 : 0;
      if (c454) {
      } else {
        char* cast455 = (char*)&(_str_3);
        char* c456 = _str_1;
        unsigned int c457 = 26;
        char* cast458 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast455, c456, c457, cast458);
      }
      unsigned long c459 = 3;
      int* r460 = std__vector_int__std__allocator_int_____operator__(&second425, c459);
      int t461 = *r460;
      int c462 = 20;
      _Bool c463 = ((t461 == c462)) ? 1 : 0;
      if (c463) {
      } else {
        char* cast464 = (char*)&(_str_4);
        char* c465 = _str_1;
        unsigned int c466 = 27;
        char* cast467 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast464, c465, c466, cast467);
      }
      char* cast468 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r469 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast468);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it470;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2471;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r472 = std__vector_int__std__allocator_int_____begin(&first423);
        it470 = r472;
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r474 = std__vector_int__std__allocator_int_____end(&first423);
          ref_tmp2471 = r474;
          _Bool r475 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it470, &ref_tmp2471);
          _Bool u476 = !r475;
          if (!u476) break;
          char* cast477 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r478 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast477);
          int* r479 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it470);
          int t480 = *r479;
          struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__operator__(r478, t480);
        for_step473: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r482 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it470);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r483 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c484 = 0;
      __retval420 = c484;
      int t485 = __retval420;
      int ret_val486 = t485;
      {
        std__vector_int__std__allocator_int______vector(&second425);
      }
      {
        std__vector_int__std__allocator_int______vector(&first423);
      }
      return ret_val486;
  int t487 = __retval420;
  return t487;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v488) {
bb489:
  struct std____new_allocator_int_* this490;
  this490 = v488;
  struct std____new_allocator_int_* t491 = this490;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v492, unsigned long* v493) {
bb494:
  unsigned long* __a495;
  unsigned long* __b496;
  unsigned long* __retval497;
  __a495 = v492;
  __b496 = v493;
    unsigned long* t498 = __b496;
    unsigned long t499 = *t498;
    unsigned long* t500 = __a495;
    unsigned long t501 = *t500;
    _Bool c502 = ((t499 < t501)) ? 1 : 0;
    if (c502) {
      unsigned long* t503 = __b496;
      __retval497 = t503;
      unsigned long* t504 = __retval497;
      return t504;
    }
  unsigned long* t505 = __a495;
  __retval497 = t505;
  unsigned long* t506 = __retval497;
  return t506;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v507) {
bb508:
  struct std__allocator_int_* __a509;
  unsigned long __retval510;
  unsigned long __diffmax511;
  unsigned long __allocmax512;
  __a509 = v507;
  unsigned long c513 = 2305843009213693951;
  __diffmax511 = c513;
  unsigned long c514 = 4611686018427387903;
  __allocmax512 = c514;
  unsigned long* r515 = unsigned_long_const__std__min_unsigned_long_(&__diffmax511, &__allocmax512);
  unsigned long t516 = *r515;
  __retval510 = t516;
  unsigned long t517 = __retval510;
  return t517;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v518, struct std__allocator_int_* v519) {
bb520:
  struct std__allocator_int_* this521;
  struct std__allocator_int_* __a522;
  this521 = v518;
  __a522 = v519;
  struct std__allocator_int_* t523 = this521;
  struct std____new_allocator_int_* base524 = (struct std____new_allocator_int_*)((char *)t523 + 0);
  struct std__allocator_int_* t525 = __a522;
  struct std____new_allocator_int_* base526 = (struct std____new_allocator_int_*)((char *)t525 + 0);
  std____new_allocator_int_____new_allocator(base524, base526);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v527, struct std__allocator_int_* v528) {
bb529:
  unsigned long __n530;
  struct std__allocator_int_* __a531;
  unsigned long __retval532;
  __n530 = v527;
  __a531 = v528;
    struct std__allocator_int_ ref_tmp0533;
    _Bool tmp_exprcleanup534;
    unsigned long t535 = __n530;
    struct std__allocator_int_* t536 = __a531;
    std__allocator_int___allocator(&ref_tmp0533, t536);
      unsigned long r537 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0533);
      _Bool c538 = ((t535 > r537)) ? 1 : 0;
      tmp_exprcleanup534 = c538;
    {
      std__allocator_int____allocator(&ref_tmp0533);
    }
    _Bool t539 = tmp_exprcleanup534;
    if (t539) {
      char* cast540 = (char*)&(_str_7);
      std____throw_length_error(cast540);
    }
  unsigned long t541 = __n530;
  __retval532 = t541;
  unsigned long t542 = __retval532;
  return t542;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v543, struct std__allocator_int_* v544) {
bb545:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this546;
  struct std__allocator_int_* __a547;
  this546 = v543;
  __a547 = v544;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t548 = this546;
  struct std__allocator_int_* base549 = (struct std__allocator_int_*)((char *)t548 + 0);
  struct std__allocator_int_* t550 = __a547;
  std__allocator_int___allocator(base549, t550);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base551 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t548 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base551);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb552:
  _Bool __retval553;
    _Bool c554 = 0;
    __retval553 = c554;
    _Bool t555 = __retval553;
    return t555;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v556) {
bb557:
  struct std____new_allocator_int_* this558;
  unsigned long __retval559;
  this558 = v556;
  struct std____new_allocator_int_* t560 = this558;
  unsigned long c561 = 9223372036854775807;
  unsigned long c562 = 4;
  unsigned long b563 = c561 / c562;
  __retval559 = b563;
  unsigned long t564 = __retval559;
  return t564;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v565, unsigned long v566, void* v567) {
bb568:
  struct std____new_allocator_int_* this569;
  unsigned long __n570;
  void* unnamed571;
  int* __retval572;
  this569 = v565;
  __n570 = v566;
  unnamed571 = v567;
  struct std____new_allocator_int_* t573 = this569;
    unsigned long t574 = __n570;
    unsigned long r575 = std____new_allocator_int____M_max_size___const(t573);
    _Bool c576 = ((t574 > r575)) ? 1 : 0;
    if (c576) {
        unsigned long t577 = __n570;
        unsigned long c578 = -1;
        unsigned long c579 = 4;
        unsigned long b580 = c578 / c579;
        _Bool c581 = ((t577 > b580)) ? 1 : 0;
        if (c581) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c582 = 4;
    unsigned long c583 = 16;
    _Bool c584 = ((c582 > c583)) ? 1 : 0;
    if (c584) {
      unsigned long __al585;
      unsigned long c586 = 4;
      __al585 = c586;
      unsigned long t587 = __n570;
      unsigned long c588 = 4;
      unsigned long b589 = t587 * c588;
      unsigned long t590 = __al585;
      void* r591 = operator_new_2(b589, t590);
      int* cast592 = (int*)r591;
      __retval572 = cast592;
      int* t593 = __retval572;
      return t593;
    }
  unsigned long t594 = __n570;
  unsigned long c595 = 4;
  unsigned long b596 = t594 * c595;
  void* r597 = operator_new(b596);
  int* cast598 = (int*)r597;
  __retval572 = cast598;
  int* t599 = __retval572;
  return t599;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v600, unsigned long v601) {
bb602:
  struct std__allocator_int_* this603;
  unsigned long __n604;
  int* __retval605;
  this603 = v600;
  __n604 = v601;
  struct std__allocator_int_* t606 = this603;
    _Bool r607 = std____is_constant_evaluated();
    if (r607) {
        unsigned long t608 = __n604;
        unsigned long c609 = 4;
        unsigned long ovr610;
        _Bool ovf611 = __builtin_mul_overflow(t608, c609, &ovr610);
        __n604 = ovr610;
        if (ovf611) {
          std____throw_bad_array_new_length();
        }
      unsigned long t612 = __n604;
      void* r613 = operator_new(t612);
      int* cast614 = (int*)r613;
      __retval605 = cast614;
      int* t615 = __retval605;
      return t615;
    }
  struct std____new_allocator_int_* base616 = (struct std____new_allocator_int_*)((char *)t606 + 0);
  unsigned long t617 = __n604;
  void* c618 = ((void*)0);
  int* r619 = std____new_allocator_int___allocate(base616, t617, c618);
  __retval605 = r619;
  int* t620 = __retval605;
  return t620;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v621, unsigned long v622) {
bb623:
  struct std__allocator_int_* __a624;
  unsigned long __n625;
  int* __retval626;
  __a624 = v621;
  __n625 = v622;
  struct std__allocator_int_* t627 = __a624;
  unsigned long t628 = __n625;
  int* r629 = std__allocator_int___allocate(t627, t628);
  __retval626 = r629;
  int* t630 = __retval626;
  return t630;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v631, unsigned long v632) {
bb633:
  struct std___Vector_base_int__std__allocator_int__* this634;
  unsigned long __n635;
  int* __retval636;
  this634 = v631;
  __n635 = v632;
  struct std___Vector_base_int__std__allocator_int__* t637 = this634;
  unsigned long t638 = __n635;
  unsigned long c639 = 0;
  _Bool c640 = ((t638 != c639)) ? 1 : 0;
  int* ternary641;
  if (c640) {
    struct std__allocator_int_* base642 = (struct std__allocator_int_*)((char *)&(t637->_M_impl) + 0);
    unsigned long t643 = __n635;
    int* r644 = std__allocator_traits_std__allocator_int_____allocate(base642, t643);
    ternary641 = (int*)r644;
  } else {
    int* c645 = ((void*)0);
    ternary641 = (int*)c645;
  }
  __retval636 = ternary641;
  int* t646 = __retval636;
  return t646;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v647, unsigned long v648) {
bb649:
  struct std___Vector_base_int__std__allocator_int__* this650;
  unsigned long __n651;
  this650 = v647;
  __n651 = v648;
  struct std___Vector_base_int__std__allocator_int__* t652 = this650;
  unsigned long t653 = __n651;
  int* r654 = std___Vector_base_int__std__allocator_int______M_allocate(t652, t653);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base655 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  base655->_M_start = r654;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base656 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  int* t657 = base656->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base658 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  base658->_M_finish = t657;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base659 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  int* t660 = base659->_M_start;
  unsigned long t661 = __n651;
  int* ptr662 = &(t660)[t661];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base663 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  base663->_M_end_of_storage = ptr662;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v664) {
bb665:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this666;
  this666 = v664;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t667 = this666;
  {
    struct std__allocator_int_* base668 = (struct std__allocator_int_*)((char *)t667 + 0);
    std__allocator_int____allocator(base668);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v669, unsigned long v670, struct std__allocator_int_* v671) {
bb672:
  struct std___Vector_base_int__std__allocator_int__* this673;
  unsigned long __n674;
  struct std__allocator_int_* __a675;
  this673 = v669;
  __n674 = v670;
  __a675 = v671;
  struct std___Vector_base_int__std__allocator_int__* t676 = this673;
  struct std__allocator_int_* t677 = __a675;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t676->_M_impl, t677);
    unsigned long t678 = __n674;
    std___Vector_base_int__std__allocator_int______M_create_storage(t676, t678);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb679:
  _Bool __retval680;
    _Bool c681 = 0;
    __retval680 = c681;
    _Bool t682 = __retval680;
    return t682;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v683, int** v684) {
bb685:
  struct std___UninitDestroyGuard_int____void_* this686;
  int** __first687;
  this686 = v683;
  __first687 = v684;
  struct std___UninitDestroyGuard_int____void_* t688 = this686;
  int** t689 = __first687;
  int* t690 = *t689;
  t688->_M_first = t690;
  int** t691 = __first687;
  t688->_M_cur = t691;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v692, int* v693) {
bb694:
  int* __location695;
  int* __args696;
  int* __retval697;
  void* __loc698;
  __location695 = v692;
  __args696 = v693;
  int* t699 = __location695;
  void* cast700 = (void*)t699;
  __loc698 = cast700;
    void* t701 = __loc698;
    int* cast702 = (int*)t701;
    int* t703 = __args696;
    int t704 = *t703;
    *cast702 = t704;
    __retval697 = cast702;
    int* t705 = __retval697;
    return t705;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v706, int* v707) {
bb708:
  int* __p709;
  int* __args710;
  __p709 = v706;
  __args710 = v707;
    _Bool r711 = std____is_constant_evaluated();
    if (r711) {
      int* t712 = __p709;
      int* t713 = __args710;
      int* r714 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t712, t713);
      return;
    }
  int* t715 = __p709;
  void* cast716 = (void*)t715;
  int* cast717 = (int*)cast716;
  int* t718 = __args710;
  int t719 = *t718;
  *cast717 = t719;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v720) {
bb721:
  struct std___UninitDestroyGuard_int____void_* this722;
  this722 = v720;
  struct std___UninitDestroyGuard_int____void_* t723 = this722;
  int** c724 = ((void*)0);
  t723->_M_cur = c724;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v725) {
bb726:
  struct std___UninitDestroyGuard_int____void_* this727;
  this727 = v725;
  struct std___UninitDestroyGuard_int____void_* t728 = this727;
    int** t729 = t728->_M_cur;
    int** c730 = ((void*)0);
    _Bool c731 = ((t729 != c730)) ? 1 : 0;
    if (c731) {
      int* t732 = t728->_M_first;
      int** t733 = t728->_M_cur;
      int* t734 = *t733;
      void_std___Destroy_int__(t732, t734);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v735, unsigned long v736, int* v737) {
bb738:
  int* __first739;
  unsigned long __n740;
  int* __x741;
  int* __retval742;
  struct std___UninitDestroyGuard_int____void_ __guard743;
  __first739 = v735;
  __n740 = v736;
  __x741 = v737;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard743, &__first739);
        do {
              unsigned long t744 = __n740;
              unsigned long c745 = 0;
              _Bool c746 = ((t744 >= c745)) ? 1 : 0;
              _Bool u747 = !c746;
              if (u747) {
                char* cast748 = (char*)&(_str_8);
                int c749 = 463;
                char* cast750 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast751 = (char*)&(_str_9);
                std____glibcxx_assert_fail(cast748, c749, cast750, cast751);
              }
          _Bool c752 = 0;
          if (!c752) break;
        } while (1);
      while (1) {
        unsigned long t754 = __n740;
        unsigned long u755 = t754 - 1;
        __n740 = u755;
        _Bool cast756 = (_Bool)t754;
        if (!cast756) break;
        int* t757 = __first739;
        int* t758 = __x741;
        void_std___Construct_int__int_const__(t757, t758);
      for_step753: ;
        int* t759 = __first739;
        int c760 = 1;
        int* ptr761 = &(t759)[c760];
        __first739 = ptr761;
      }
    std___UninitDestroyGuard_int___void___release(&__guard743);
    int* t762 = __first739;
    __retval742 = t762;
    int* t763 = __retval742;
    int* ret_val764 = t763;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard743);
    }
    return ret_val764;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v765, unsigned long v766, int* v767) {
bb768:
  int* __first769;
  unsigned long __n770;
  int* __x771;
  int* __retval772;
  __first769 = v765;
  __n770 = v766;
  __x771 = v767;
  int* t773 = __first769;
  unsigned long t774 = __n770;
  int* t775 = __x771;
  int* r776 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t773, t774, t775);
  __retval772 = r776;
  int* t777 = __retval772;
  return t777;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v778, unsigned long v779, int* v780, struct std__allocator_int_* v781) {
bb782:
  int* __first783;
  unsigned long __n784;
  int* __x785;
  struct std__allocator_int_* unnamed786;
  int* __retval787;
  __first783 = v778;
  __n784 = v779;
  __x785 = v780;
  unnamed786 = v781;
    _Bool r788 = std__is_constant_evaluated();
    if (r788) {
      int* t789 = __first783;
      unsigned long t790 = __n784;
      int* t791 = __x785;
      int* r792 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t789, t790, t791);
      __retval787 = r792;
      int* t793 = __retval787;
      return t793;
    }
  int* t794 = __first783;
  unsigned long t795 = __n784;
  int* t796 = __x785;
  int* r797 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t794, t795, t796);
  __retval787 = r797;
  int* t798 = __retval787;
  return t798;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v799) {
bb800:
  struct std___Vector_base_int__std__allocator_int__* this801;
  struct std__allocator_int_* __retval802;
  this801 = v799;
  struct std___Vector_base_int__std__allocator_int__* t803 = this801;
  struct std__allocator_int_* base804 = (struct std__allocator_int_*)((char *)&(t803->_M_impl) + 0);
  __retval802 = base804;
  struct std__allocator_int_* t805 = __retval802;
  return t805;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v806, unsigned long v807, int* v808) {
bb809:
  struct std__vector_int__std__allocator_int__* this810;
  unsigned long __n811;
  int* __value812;
  this810 = v806;
  __n811 = v807;
  __value812 = v808;
  struct std__vector_int__std__allocator_int__* t813 = this810;
  struct std___Vector_base_int__std__allocator_int__* base814 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t813 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base815 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base814->_M_impl) + 0);
  int* t816 = base815->_M_start;
  unsigned long t817 = __n811;
  int* t818 = __value812;
  struct std___Vector_base_int__std__allocator_int__* base819 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t813 + 0);
  struct std__allocator_int_* r820 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base819);
  int* r821 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t816, t817, t818, r820);
  struct std___Vector_base_int__std__allocator_int__* base822 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t813 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base823 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base822->_M_impl) + 0);
  base823->_M_finish = r821;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v824, int* v825, unsigned long v826) {
bb827:
  struct std____new_allocator_int_* this828;
  int* __p829;
  unsigned long __n830;
  this828 = v824;
  __p829 = v825;
  __n830 = v826;
  struct std____new_allocator_int_* t831 = this828;
    unsigned long c832 = 4;
    unsigned long c833 = 16;
    _Bool c834 = ((c832 > c833)) ? 1 : 0;
    if (c834) {
      int* t835 = __p829;
      void* cast836 = (void*)t835;
      unsigned long t837 = __n830;
      unsigned long c838 = 4;
      unsigned long b839 = t837 * c838;
      unsigned long c840 = 4;
      operator_delete_3(cast836, b839, c840);
      return;
    }
  int* t841 = __p829;
  void* cast842 = (void*)t841;
  unsigned long t843 = __n830;
  unsigned long c844 = 4;
  unsigned long b845 = t843 * c844;
  operator_delete_2(cast842, b845);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v846, int* v847, unsigned long v848) {
bb849:
  struct std__allocator_int_* this850;
  int* __p851;
  unsigned long __n852;
  this850 = v846;
  __p851 = v847;
  __n852 = v848;
  struct std__allocator_int_* t853 = this850;
    _Bool r854 = std____is_constant_evaluated();
    if (r854) {
      int* t855 = __p851;
      void* cast856 = (void*)t855;
      operator_delete(cast856);
      return;
    }
  struct std____new_allocator_int_* base857 = (struct std____new_allocator_int_*)((char *)t853 + 0);
  int* t858 = __p851;
  unsigned long t859 = __n852;
  std____new_allocator_int___deallocate(base857, t858, t859);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v860, int* v861, unsigned long v862) {
bb863:
  struct std__allocator_int_* __a864;
  int* __p865;
  unsigned long __n866;
  __a864 = v860;
  __p865 = v861;
  __n866 = v862;
  struct std__allocator_int_* t867 = __a864;
  int* t868 = __p865;
  unsigned long t869 = __n866;
  std__allocator_int___deallocate(t867, t868, t869);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v870, int* v871, unsigned long v872) {
bb873:
  struct std___Vector_base_int__std__allocator_int__* this874;
  int* __p875;
  unsigned long __n876;
  this874 = v870;
  __p875 = v871;
  __n876 = v872;
  struct std___Vector_base_int__std__allocator_int__* t877 = this874;
    int* t878 = __p875;
    _Bool cast879 = (_Bool)t878;
    if (cast879) {
      struct std__allocator_int_* base880 = (struct std__allocator_int_*)((char *)&(t877->_M_impl) + 0);
      int* t881 = __p875;
      unsigned long t882 = __n876;
      std__allocator_traits_std__allocator_int_____deallocate(base880, t881, t882);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v883) {
bb884:
  struct std___Vector_base_int__std__allocator_int__* this885;
  this885 = v883;
  struct std___Vector_base_int__std__allocator_int__* t886 = this885;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base887 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t886->_M_impl) + 0);
    int* t888 = base887->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base889 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t886->_M_impl) + 0);
    int* t890 = base889->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t886->_M_impl) + 0);
    int* t892 = base891->_M_start;
    long diff893 = t890 - t892;
    unsigned long cast894 = (unsigned long)diff893;
    std___Vector_base_int__std__allocator_int______M_deallocate(t886, t888, cast894);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t886->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v895, struct std____new_allocator_int_* v896) {
bb897:
  struct std____new_allocator_int_* this898;
  struct std____new_allocator_int_* unnamed899;
  this898 = v895;
  unnamed899 = v896;
  struct std____new_allocator_int_* t900 = this898;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v901) {
bb902:
  int* __location903;
  __location903 = v901;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v904, int* v905) {
bb906:
  int* __first907;
  int* __last908;
  __first907 = v904;
  __last908 = v905;
      _Bool r909 = std____is_constant_evaluated();
      if (r909) {
          while (1) {
            int* t911 = __first907;
            int* t912 = __last908;
            _Bool c913 = ((t911 != t912)) ? 1 : 0;
            if (!c913) break;
            int* t914 = __first907;
            void_std__destroy_at_int_(t914);
          for_step910: ;
            int* t915 = __first907;
            int c916 = 1;
            int* ptr917 = &(t915)[c916];
            __first907 = ptr917;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v918, int* v919, struct std__allocator_int_* v920) {
bb921:
  int* __first922;
  int* __last923;
  struct std__allocator_int_* unnamed924;
  __first922 = v918;
  __last923 = v919;
  unnamed924 = v920;
  int* t925 = __first922;
  int* t926 = __last923;
  void_std___Destroy_int__(t925, t926);
  return;
}

