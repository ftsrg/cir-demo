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
char _str[18] = "myvector[0] == 20";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm24/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 20";
char _str_4[18] = "myvector[3] == 20";
char _str_5[18] = "myvector[3] == 33";
char _str_6[18] = "myvector[4] == 33";
char _str_7[18] = "myvector[5] == 33";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_8[19] = "myvector contains:";
char _str_9[2] = " ";
char _str_10[49] = "cannot create std::vector larger than max_size()";
char _str_11[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_12[9] = "__n >= 0";
char _str_13[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____fill_n_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int p1, int* p2, struct std__random_access_iterator_tag p3);
int std____size_to_integer(int p0);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__fill_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int p1, int* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
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

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v26, int* v27, int* v28) {
bb29:
  int* __first30;
  int* __last31;
  int* __value32;
  _Bool __load_outside_loop33;
  int __val34;
  __first30 = v26;
  __last31 = v27;
  __value32 = v28;
  _Bool c35 = 1;
  __load_outside_loop33 = c35;
  int* t36 = __value32;
  int t37 = *t36;
  __val34 = t37;
    while (1) {
      int* t39 = __first30;
      int* t40 = __last31;
      _Bool c41 = ((t39 != t40)) ? 1 : 0;
      if (!c41) break;
      int t42 = __val34;
      int* t43 = __first30;
      *t43 = t42;
    for_step38: ;
      int* t44 = __first30;
      int c45 = 1;
      int* ptr46 = &(t44)[c45];
      __first30 = ptr46;
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v47) {
bb48:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this49;
  int** __retval50;
  this49 = v47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t51 = this49;
  __retval50 = &t51->_M_current;
  int** t52 = __retval50;
  return t52;
}

// function: _ZSt9__fill_a1IPiSt6vectorIiSaIiEEiEvN9__gnu_cxx17__normal_iteratorIT_T0_EES8_RKT1_
void void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v53, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v54, int* v55) {
bb56:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last58;
  int* __value59;
  __first57 = v53;
  __last58 = v54;
  __value59 = v55;
  int** r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__first57);
  int* t61 = *r60;
  int** r62 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__last58);
  int* t63 = *r62;
  int* t64 = __value59;
  void_std____fill_a1_int___int_(t61, t63, t64);
  return;
}

// function: _ZSt8__fill_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v65, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v66, int* v67) {
bb68:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first69;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last70;
  int* __value71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp072;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp173;
  __first69 = v65;
  __last70 = v66;
  __value71 = v67;
  agg_tmp072 = __first69; // copy
  agg_tmp173 = __last70; // copy
  int* t74 = __value71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t75 = agg_tmp072;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t76 = agg_tmp173;
  void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(t75, t76, t74);
  return;
}

// function: _ZSt10__fill_n_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiiET_S7_T0_RKT1_St26random_access_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____fill_n_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v77, int v78, int* v79, struct std__random_access_iterator_tag v80) {
bb81:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first82;
  int __n83;
  int* __value84;
  struct std__random_access_iterator_tag unnamed85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval86;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp087;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp188;
  __first82 = v77;
  __n83 = v78;
  __value84 = v79;
  unnamed85 = v80;
    int t89 = __n83;
    int c90 = 0;
    _Bool c91 = ((t89 <= c90)) ? 1 : 0;
    if (c91) {
      __retval86 = __first82; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t92 = __retval86;
      return t92;
    }
  agg_tmp087 = __first82; // copy
  int t93 = __n83;
  long cast94 = (long)t93;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r95 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first82, cast94);
  agg_tmp188 = r95;
  int* t96 = __value84;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t97 = agg_tmp087;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t98 = agg_tmp188;
  void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t97, t98, t96);
  int t99 = __n83;
  long cast100 = (long)t99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r101 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first82, cast100);
  __retval86 = r101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t102 = __retval86;
  return t102;
}

// function: _ZSt17__size_to_integeri
int std____size_to_integer(int v103) {
bb104:
  int __n105;
  int __retval106;
  __n105 = v103;
  int t107 = __n105;
  __retval106 = t107;
  int t108 = __retval106;
  return t108;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v109) {
bb110:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed111;
  struct std__random_access_iterator_tag __retval112;
  unnamed111 = v109;
  struct std__random_access_iterator_tag t113 = __retval112;
  return t113;
}

// function: _ZSt6fill_nIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiiET_S7_T0_RKT1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__fill_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v114, int v115, int* v116) {
bb117:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first118;
  int __n119;
  int* __value120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0122;
  struct std__random_access_iterator_tag agg_tmp1123;
  __first118 = v114;
  __n119 = v115;
  __value120 = v116;
  agg_tmp0122 = __first118; // copy
  int t124 = __n119;
  int r125 = std____size_to_integer(t124);
  int* t126 = __value120;
  struct std__random_access_iterator_tag r127 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first118);
  agg_tmp1123 = r127;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t128 = agg_tmp0122;
  struct std__random_access_iterator_tag t129 = agg_tmp1123;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r130 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____fill_n_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t128, r125, t126, t129);
  __retval121 = r130;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t131 = __retval121;
  return t131;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v132, int** v133) {
bb134:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this135;
  int** __i136;
  this135 = v132;
  __i136 = v133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t137 = this135;
  int** t138 = __i136;
  int* t139 = *t138;
  t137->_M_current = t139;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v140) {
bb141:
  struct std__vector_int__std__allocator_int__* this142;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval143;
  this142 = v140;
  struct std__vector_int__std__allocator_int__* t144 = this142;
  struct std___Vector_base_int__std__allocator_int__* base145 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t144 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base146 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base145->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval143, &base146->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t147 = __retval143;
  return t147;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v148) {
bb149:
  struct std__vector_int__std__allocator_int__* this150;
  unsigned long __retval151;
  long __dif152;
  this150 = v148;
  struct std__vector_int__std__allocator_int__* t153 = this150;
  struct std___Vector_base_int__std__allocator_int__* base154 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t153 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base155 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base154->_M_impl) + 0);
  int* t156 = base155->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base157 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t153 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base158 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base157->_M_impl) + 0);
  int* t159 = base158->_M_start;
  long diff160 = t156 - t159;
  __dif152 = diff160;
    long t161 = __dif152;
    long c162 = 0;
    _Bool c163 = ((t161 < c162)) ? 1 : 0;
    if (c163) {
      __builtin_unreachable();
    }
  long t164 = __dif152;
  unsigned long cast165 = (unsigned long)t164;
  __retval151 = cast165;
  unsigned long t166 = __retval151;
  return t166;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v167, unsigned long v168) {
bb169:
  struct std__vector_int__std__allocator_int__* this170;
  unsigned long __n171;
  int* __retval172;
  this170 = v167;
  __n171 = v168;
  struct std__vector_int__std__allocator_int__* t173 = this170;
    do {
          unsigned long t174 = __n171;
          unsigned long r175 = std__vector_int__std__allocator_int_____size___const(t173);
          _Bool c176 = ((t174 < r175)) ? 1 : 0;
          _Bool u177 = !c176;
          if (u177) {
            char* cast178 = (char*)&(_str_13);
            int c179 = 1263;
            char* cast180 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast181 = (char*)&(_str_14);
            std____glibcxx_assert_fail(cast178, c179, cast180, cast181);
          }
      _Bool c182 = 0;
      if (!c182) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base183 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t173 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base184 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base183->_M_impl) + 0);
  int* t185 = base184->_M_start;
  unsigned long t186 = __n171;
  int* ptr187 = &(t185)[t186];
  __retval172 = ptr187;
  int* t188 = __retval172;
  return t188;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v189, long v190) {
bb191:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this192;
  long __n193;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval194;
  int* ref_tmp0195;
  this192 = v189;
  __n193 = v190;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t196 = this192;
  int* t197 = t196->_M_current;
  long t198 = __n193;
  int* ptr199 = &(t197)[t198];
  ref_tmp0195 = ptr199;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval194, &ref_tmp0195);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t200 = __retval194;
  return t200;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v201, int v202) {
bb203:
  int __a204;
  int __b205;
  int __retval206;
  __a204 = v201;
  __b205 = v202;
  int t207 = __a204;
  int t208 = __b205;
  int b209 = t207 | t208;
  __retval206 = b209;
  int t210 = __retval206;
  return t210;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v211) {
bb212:
  struct std__basic_ios_char__std__char_traits_char__* this213;
  int __retval214;
  this213 = v211;
  struct std__basic_ios_char__std__char_traits_char__* t215 = this213;
  struct std__ios_base* base216 = (struct std__ios_base*)((char *)t215 + 0);
  int t217 = base216->_M_streambuf_state;
  __retval214 = t217;
  int t218 = __retval214;
  return t218;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v219, int v220) {
bb221:
  struct std__basic_ios_char__std__char_traits_char__* this222;
  int __state223;
  this222 = v219;
  __state223 = v220;
  struct std__basic_ios_char__std__char_traits_char__* t224 = this222;
  int r225 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t224);
  int t226 = __state223;
  int r227 = std__operator_(r225, t226);
  std__basic_ios_char__std__char_traits_char_____clear(t224, r227);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v228, char* v229) {
bb230:
  char* __c1231;
  char* __c2232;
  _Bool __retval233;
  __c1231 = v228;
  __c2232 = v229;
  char* t234 = __c1231;
  char t235 = *t234;
  int cast236 = (int)t235;
  char* t237 = __c2232;
  char t238 = *t237;
  int cast239 = (int)t238;
  _Bool c240 = ((cast236 == cast239)) ? 1 : 0;
  __retval233 = c240;
  _Bool t241 = __retval233;
  return t241;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v242) {
bb243:
  char* __p244;
  unsigned long __retval245;
  unsigned long __i246;
  __p244 = v242;
  unsigned long c247 = 0;
  __i246 = c247;
    char ref_tmp0248;
    while (1) {
      unsigned long t249 = __i246;
      char* t250 = __p244;
      char* ptr251 = &(t250)[t249];
      char c252 = 0;
      ref_tmp0248 = c252;
      _Bool r253 = __gnu_cxx__char_traits_char___eq(ptr251, &ref_tmp0248);
      _Bool u254 = !r253;
      if (!u254) break;
      unsigned long t255 = __i246;
      unsigned long u256 = t255 + 1;
      __i246 = u256;
    }
  unsigned long t257 = __i246;
  __retval245 = t257;
  unsigned long t258 = __retval245;
  return t258;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v259) {
bb260:
  char* __s261;
  unsigned long __retval262;
  __s261 = v259;
    _Bool r263 = std____is_constant_evaluated();
    if (r263) {
      char* t264 = __s261;
      unsigned long r265 = __gnu_cxx__char_traits_char___length(t264);
      __retval262 = r265;
      unsigned long t266 = __retval262;
      return t266;
    }
  char* t267 = __s261;
  unsigned long r268 = strlen(t267);
  __retval262 = r268;
  unsigned long t269 = __retval262;
  return t269;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v270, char* v271) {
bb272:
  struct std__basic_ostream_char__std__char_traits_char__* __out273;
  char* __s274;
  struct std__basic_ostream_char__std__char_traits_char__* __retval275;
  __out273 = v270;
  __s274 = v271;
    char* t276 = __s274;
    _Bool cast277 = (_Bool)t276;
    _Bool u278 = !cast277;
    if (u278) {
      struct std__basic_ostream_char__std__char_traits_char__* t279 = __out273;
      void** v280 = (void**)t279;
      void* v281 = *((void**)v280);
      unsigned char* cast282 = (unsigned char*)v281;
      long c283 = -24;
      unsigned char* ptr284 = &(cast282)[c283];
      long* cast285 = (long*)ptr284;
      long t286 = *cast285;
      unsigned char* cast287 = (unsigned char*)t279;
      unsigned char* ptr288 = &(cast287)[t286];
      struct std__basic_ostream_char__std__char_traits_char__* cast289 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr288;
      struct std__basic_ios_char__std__char_traits_char__* cast290 = (struct std__basic_ios_char__std__char_traits_char__*)cast289;
      int t291 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast290, t291);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t292 = __out273;
      char* t293 = __s274;
      char* t294 = __s274;
      unsigned long r295 = std__char_traits_char___length(t294);
      long cast296 = (long)r295;
      struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t292, t293, cast296);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t298 = __out273;
  __retval275 = t298;
  struct std__basic_ostream_char__std__char_traits_char__* t299 = __retval275;
  return t299;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v300, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v301) {
bb302:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs304;
  _Bool __retval305;
  __lhs303 = v300;
  __rhs304 = v301;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t306 = __lhs303;
  int** r307 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t306);
  int* t308 = *r307;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t309 = __rhs304;
  int** r310 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t309);
  int* t311 = *r310;
  _Bool c312 = ((t308 == t311)) ? 1 : 0;
  __retval305 = c312;
  _Bool t313 = __retval305;
  return t313;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v314) {
bb315:
  struct std__vector_int__std__allocator_int__* this316;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval317;
  this316 = v314;
  struct std__vector_int__std__allocator_int__* t318 = this316;
  struct std___Vector_base_int__std__allocator_int__* base319 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t318 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base320 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base319->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval317, &base320->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t321 = __retval317;
  return t321;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v322) {
bb323:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this324;
  int* __retval325;
  this324 = v322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t326 = this324;
  int* t327 = t326->_M_current;
  __retval325 = t327;
  int* t328 = __retval325;
  return t328;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v329) {
bb330:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this331;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval332;
  this331 = v329;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t333 = this331;
  int* t334 = t333->_M_current;
  int c335 = 1;
  int* ptr336 = &(t334)[c335];
  t333->_M_current = ptr336;
  __retval332 = t333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t337 = __retval332;
  return t337;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v338, void* v339) {
bb340:
  struct std__basic_ostream_char__std__char_traits_char__* this341;
  void* __pf342;
  struct std__basic_ostream_char__std__char_traits_char__* __retval343;
  this341 = v338;
  __pf342 = v339;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = this341;
  void* t345 = __pf342;
  struct std__basic_ostream_char__std__char_traits_char__* r346 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t345)(t344);
  __retval343 = r346;
  struct std__basic_ostream_char__std__char_traits_char__* t347 = __retval343;
  return t347;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v348) {
bb349:
  struct std__basic_ostream_char__std__char_traits_char__* __os350;
  struct std__basic_ostream_char__std__char_traits_char__* __retval351;
  __os350 = v348;
  struct std__basic_ostream_char__std__char_traits_char__* t352 = __os350;
  struct std__basic_ostream_char__std__char_traits_char__* r353 = std__ostream__flush(t352);
  __retval351 = r353;
  struct std__basic_ostream_char__std__char_traits_char__* t354 = __retval351;
  return t354;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v355) {
bb356:
  struct std__ctype_char_* __f357;
  struct std__ctype_char_* __retval358;
  __f357 = v355;
    struct std__ctype_char_* t359 = __f357;
    _Bool cast360 = (_Bool)t359;
    _Bool u361 = !cast360;
    if (u361) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t362 = __f357;
  __retval358 = t362;
  struct std__ctype_char_* t363 = __retval358;
  return t363;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v364, char v365) {
bb366:
  struct std__ctype_char_* this367;
  char __c368;
  char __retval369;
  this367 = v364;
  __c368 = v365;
  struct std__ctype_char_* t370 = this367;
    char t371 = t370->_M_widen_ok;
    _Bool cast372 = (_Bool)t371;
    if (cast372) {
      char t373 = __c368;
      unsigned char cast374 = (unsigned char)t373;
      unsigned long cast375 = (unsigned long)cast374;
      char t376 = t370->_M_widen[cast375];
      __retval369 = t376;
      char t377 = __retval369;
      return t377;
    }
  std__ctype_char____M_widen_init___const(t370);
  char t378 = __c368;
  void** v379 = (void**)t370;
  void* v380 = *((void**)v379);
  char vcall383 = (char)__VERIFIER_virtual_call_char_char(t370, 6, t378);
  __retval369 = vcall383;
  char t384 = __retval369;
  return t384;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v385, char v386) {
bb387:
  struct std__basic_ios_char__std__char_traits_char__* this388;
  char __c389;
  char __retval390;
  this388 = v385;
  __c389 = v386;
  struct std__basic_ios_char__std__char_traits_char__* t391 = this388;
  struct std__ctype_char_* t392 = t391->_M_ctype;
  struct std__ctype_char_* r393 = std__ctype_char__const__std____check_facet_std__ctype_char___(t392);
  char t394 = __c389;
  char r395 = std__ctype_char___widen_char__const(r393, t394);
  __retval390 = r395;
  char t396 = __retval390;
  return t396;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v397) {
bb398:
  struct std__basic_ostream_char__std__char_traits_char__* __os399;
  struct std__basic_ostream_char__std__char_traits_char__* __retval400;
  __os399 = v397;
  struct std__basic_ostream_char__std__char_traits_char__* t401 = __os399;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __os399;
  void** v403 = (void**)t402;
  void* v404 = *((void**)v403);
  unsigned char* cast405 = (unsigned char*)v404;
  long c406 = -24;
  unsigned char* ptr407 = &(cast405)[c406];
  long* cast408 = (long*)ptr407;
  long t409 = *cast408;
  unsigned char* cast410 = (unsigned char*)t402;
  unsigned char* ptr411 = &(cast410)[t409];
  struct std__basic_ostream_char__std__char_traits_char__* cast412 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr411;
  struct std__basic_ios_char__std__char_traits_char__* cast413 = (struct std__basic_ios_char__std__char_traits_char__*)cast412;
  char c414 = 10;
  char r415 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast413, c414);
  struct std__basic_ostream_char__std__char_traits_char__* r416 = std__ostream__put(t401, r415);
  struct std__basic_ostream_char__std__char_traits_char__* r417 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r416);
  __retval400 = r417;
  struct std__basic_ostream_char__std__char_traits_char__* t418 = __retval400;
  return t418;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v419) {
bb420:
  struct std__vector_int__std__allocator_int__* this421;
  this421 = v419;
  struct std__vector_int__std__allocator_int__* t422 = this421;
    struct std___Vector_base_int__std__allocator_int__* base423 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t422 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base424 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base423->_M_impl) + 0);
    int* t425 = base424->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base426 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t422 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base427 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base426->_M_impl) + 0);
    int* t428 = base427->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base429 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t422 + 0);
    struct std__allocator_int_* r430 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base429);
    void_std___Destroy_int___int_(t425, t428, r430);
  {
    struct std___Vector_base_int__std__allocator_int__* base431 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t422 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base431);
  }
  return;
}

// function: main
int main() {
bb432:
  int __retval433;
  struct std__vector_int__std__allocator_int__ myvector434;
  int ref_tmp0435;
  struct std__allocator_int_ ref_tmp1436;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0437;
  int ref_tmp2438;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1439;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2440;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3441;
  int ref_tmp4442;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3443;
  int c444 = 0;
  __retval433 = c444;
  unsigned long c445 = 8;
  int c446 = 10;
  ref_tmp0435 = c446;
  std__allocator_int___allocator_2(&ref_tmp1436);
    std__vector_int__std__allocator_int_____vector(&myvector434, c445, &ref_tmp0435, &ref_tmp1436);
  {
    std__allocator_int____allocator(&ref_tmp1436);
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r447 = std__vector_int__std__allocator_int_____begin(&myvector434);
    agg_tmp0437 = r447;
    int c448 = 4;
    int c449 = 20;
    ref_tmp2438 = c449;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t450 = agg_tmp0437;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r451 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__fill_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t450, c448, &ref_tmp2438);
    agg_tmp1439 = r451;
    unsigned long c452 = 0;
    int* r453 = std__vector_int__std__allocator_int_____operator__(&myvector434, c452);
    int t454 = *r453;
    int c455 = 20;
    _Bool c456 = ((t454 == c455)) ? 1 : 0;
    if (c456) {
    } else {
      char* cast457 = (char*)&(_str);
      char* c458 = _str_1;
      unsigned int c459 = 20;
      char* cast460 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast457, c458, c459, cast460);
    }
    unsigned long c461 = 1;
    int* r462 = std__vector_int__std__allocator_int_____operator__(&myvector434, c461);
    int t463 = *r462;
    int c464 = 20;
    _Bool c465 = ((t463 == c464)) ? 1 : 0;
    if (c465) {
    } else {
      char* cast466 = (char*)&(_str_2);
      char* c467 = _str_1;
      unsigned int c468 = 21;
      char* cast469 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast466, c467, c468, cast469);
    }
    unsigned long c470 = 2;
    int* r471 = std__vector_int__std__allocator_int_____operator__(&myvector434, c470);
    int t472 = *r471;
    int c473 = 20;
    _Bool c474 = ((t472 == c473)) ? 1 : 0;
    if (c474) {
    } else {
      char* cast475 = (char*)&(_str_3);
      char* c476 = _str_1;
      unsigned int c477 = 22;
      char* cast478 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast475, c476, c477, cast478);
    }
    unsigned long c479 = 3;
    int* r480 = std__vector_int__std__allocator_int_____operator__(&myvector434, c479);
    int t481 = *r480;
    int c482 = 20;
    _Bool c483 = ((t481 == c482)) ? 1 : 0;
    if (c483) {
    } else {
      char* cast484 = (char*)&(_str_4);
      char* c485 = _str_1;
      unsigned int c486 = 23;
      char* cast487 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast484, c485, c486, cast487);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r488 = std__vector_int__std__allocator_int_____begin(&myvector434);
    ref_tmp3441 = r488;
    long c489 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r490 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp3441, c489);
    agg_tmp2440 = r490;
    int c491 = 3;
    int c492 = 33;
    ref_tmp4442 = c492;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t493 = agg_tmp2440;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r494 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__fill_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t493, c491, &ref_tmp4442);
    agg_tmp3443 = r494;
    unsigned long c495 = 3;
    int* r496 = std__vector_int__std__allocator_int_____operator__(&myvector434, c495);
    int t497 = *r496;
    int c498 = 33;
    _Bool c499 = ((t497 == c498)) ? 1 : 0;
    if (c499) {
    } else {
      char* cast500 = (char*)&(_str_5);
      char* c501 = _str_1;
      unsigned int c502 = 27;
      char* cast503 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast500, c501, c502, cast503);
    }
    unsigned long c504 = 4;
    int* r505 = std__vector_int__std__allocator_int_____operator__(&myvector434, c504);
    int t506 = *r505;
    int c507 = 33;
    _Bool c508 = ((t506 == c507)) ? 1 : 0;
    if (c508) {
    } else {
      char* cast509 = (char*)&(_str_6);
      char* c510 = _str_1;
      unsigned int c511 = 28;
      char* cast512 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast509, c510, c511, cast512);
    }
    unsigned long c513 = 5;
    int* r514 = std__vector_int__std__allocator_int_____operator__(&myvector434, c513);
    int t515 = *r514;
    int c516 = 33;
    _Bool c517 = ((t515 == c516)) ? 1 : 0;
    if (c517) {
    } else {
      char* cast518 = (char*)&(_str_7);
      char* c519 = _str_1;
      unsigned int c520 = 29;
      char* cast521 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast518, c519, c520, cast521);
    }
    char* cast522 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* r523 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast522);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it524;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp5525;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r526 = std__vector_int__std__allocator_int_____begin(&myvector434);
      it524 = r526;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r528 = std__vector_int__std__allocator_int_____end(&myvector434);
        ref_tmp5525 = r528;
        _Bool r529 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it524, &ref_tmp5525);
        _Bool u530 = !r529;
        if (!u530) break;
        char* cast531 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r532 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast531);
        int* r533 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it524);
        int t534 = *r533;
        struct std__basic_ostream_char__std__char_traits_char__* r535 = std__ostream__operator__(r532, t534);
      for_step527: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r536 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it524);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r537 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c538 = 0;
    __retval433 = c538;
    int t539 = __retval433;
    int ret_val540 = t539;
    {
      std__vector_int__std__allocator_int______vector(&myvector434);
    }
    return ret_val540;
  int t541 = __retval433;
  return t541;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v542) {
bb543:
  struct std____new_allocator_int_* this544;
  this544 = v542;
  struct std____new_allocator_int_* t545 = this544;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v546, unsigned long* v547) {
bb548:
  unsigned long* __a549;
  unsigned long* __b550;
  unsigned long* __retval551;
  __a549 = v546;
  __b550 = v547;
    unsigned long* t552 = __b550;
    unsigned long t553 = *t552;
    unsigned long* t554 = __a549;
    unsigned long t555 = *t554;
    _Bool c556 = ((t553 < t555)) ? 1 : 0;
    if (c556) {
      unsigned long* t557 = __b550;
      __retval551 = t557;
      unsigned long* t558 = __retval551;
      return t558;
    }
  unsigned long* t559 = __a549;
  __retval551 = t559;
  unsigned long* t560 = __retval551;
  return t560;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v561) {
bb562:
  struct std__allocator_int_* __a563;
  unsigned long __retval564;
  unsigned long __diffmax565;
  unsigned long __allocmax566;
  __a563 = v561;
  unsigned long c567 = 2305843009213693951;
  __diffmax565 = c567;
  unsigned long c568 = 4611686018427387903;
  __allocmax566 = c568;
  unsigned long* r569 = unsigned_long_const__std__min_unsigned_long_(&__diffmax565, &__allocmax566);
  unsigned long t570 = *r569;
  __retval564 = t570;
  unsigned long t571 = __retval564;
  return t571;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v572, struct std__allocator_int_* v573) {
bb574:
  struct std__allocator_int_* this575;
  struct std__allocator_int_* __a576;
  this575 = v572;
  __a576 = v573;
  struct std__allocator_int_* t577 = this575;
  struct std____new_allocator_int_* base578 = (struct std____new_allocator_int_*)((char *)t577 + 0);
  struct std__allocator_int_* t579 = __a576;
  struct std____new_allocator_int_* base580 = (struct std____new_allocator_int_*)((char *)t579 + 0);
  std____new_allocator_int_____new_allocator(base578, base580);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v581, struct std__allocator_int_* v582) {
bb583:
  unsigned long __n584;
  struct std__allocator_int_* __a585;
  unsigned long __retval586;
  __n584 = v581;
  __a585 = v582;
    struct std__allocator_int_ ref_tmp0587;
    _Bool tmp_exprcleanup588;
    unsigned long t589 = __n584;
    struct std__allocator_int_* t590 = __a585;
    std__allocator_int___allocator(&ref_tmp0587, t590);
      unsigned long r591 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0587);
      _Bool c592 = ((t589 > r591)) ? 1 : 0;
      tmp_exprcleanup588 = c592;
    {
      std__allocator_int____allocator(&ref_tmp0587);
    }
    _Bool t593 = tmp_exprcleanup588;
    if (t593) {
      char* cast594 = (char*)&(_str_10);
      std____throw_length_error(cast594);
    }
  unsigned long t595 = __n584;
  __retval586 = t595;
  unsigned long t596 = __retval586;
  return t596;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v597, struct std__allocator_int_* v598) {
bb599:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this600;
  struct std__allocator_int_* __a601;
  this600 = v597;
  __a601 = v598;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t602 = this600;
  struct std__allocator_int_* base603 = (struct std__allocator_int_*)((char *)t602 + 0);
  struct std__allocator_int_* t604 = __a601;
  std__allocator_int___allocator(base603, t604);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base605 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t602 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base605);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb606:
  _Bool __retval607;
    _Bool c608 = 0;
    __retval607 = c608;
    _Bool t609 = __retval607;
    return t609;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v610) {
bb611:
  struct std____new_allocator_int_* this612;
  unsigned long __retval613;
  this612 = v610;
  struct std____new_allocator_int_* t614 = this612;
  unsigned long c615 = 9223372036854775807;
  unsigned long c616 = 4;
  unsigned long b617 = c615 / c616;
  __retval613 = b617;
  unsigned long t618 = __retval613;
  return t618;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v619, unsigned long v620, void* v621) {
bb622:
  struct std____new_allocator_int_* this623;
  unsigned long __n624;
  void* unnamed625;
  int* __retval626;
  this623 = v619;
  __n624 = v620;
  unnamed625 = v621;
  struct std____new_allocator_int_* t627 = this623;
    unsigned long t628 = __n624;
    unsigned long r629 = std____new_allocator_int____M_max_size___const(t627);
    _Bool c630 = ((t628 > r629)) ? 1 : 0;
    if (c630) {
        unsigned long t631 = __n624;
        unsigned long c632 = -1;
        unsigned long c633 = 4;
        unsigned long b634 = c632 / c633;
        _Bool c635 = ((t631 > b634)) ? 1 : 0;
        if (c635) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c636 = 4;
    unsigned long c637 = 16;
    _Bool c638 = ((c636 > c637)) ? 1 : 0;
    if (c638) {
      unsigned long __al639;
      unsigned long c640 = 4;
      __al639 = c640;
      unsigned long t641 = __n624;
      unsigned long c642 = 4;
      unsigned long b643 = t641 * c642;
      unsigned long t644 = __al639;
      void* r645 = operator_new_2(b643, t644);
      int* cast646 = (int*)r645;
      __retval626 = cast646;
      int* t647 = __retval626;
      return t647;
    }
  unsigned long t648 = __n624;
  unsigned long c649 = 4;
  unsigned long b650 = t648 * c649;
  void* r651 = operator_new(b650);
  int* cast652 = (int*)r651;
  __retval626 = cast652;
  int* t653 = __retval626;
  return t653;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v654, unsigned long v655) {
bb656:
  struct std__allocator_int_* this657;
  unsigned long __n658;
  int* __retval659;
  this657 = v654;
  __n658 = v655;
  struct std__allocator_int_* t660 = this657;
    _Bool r661 = std____is_constant_evaluated();
    if (r661) {
        unsigned long t662 = __n658;
        unsigned long c663 = 4;
        unsigned long ovr664;
        _Bool ovf665 = __builtin_mul_overflow(t662, c663, &ovr664);
        __n658 = ovr664;
        if (ovf665) {
          std____throw_bad_array_new_length();
        }
      unsigned long t666 = __n658;
      void* r667 = operator_new(t666);
      int* cast668 = (int*)r667;
      __retval659 = cast668;
      int* t669 = __retval659;
      return t669;
    }
  struct std____new_allocator_int_* base670 = (struct std____new_allocator_int_*)((char *)t660 + 0);
  unsigned long t671 = __n658;
  void* c672 = ((void*)0);
  int* r673 = std____new_allocator_int___allocate(base670, t671, c672);
  __retval659 = r673;
  int* t674 = __retval659;
  return t674;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v675, unsigned long v676) {
bb677:
  struct std__allocator_int_* __a678;
  unsigned long __n679;
  int* __retval680;
  __a678 = v675;
  __n679 = v676;
  struct std__allocator_int_* t681 = __a678;
  unsigned long t682 = __n679;
  int* r683 = std__allocator_int___allocate(t681, t682);
  __retval680 = r683;
  int* t684 = __retval680;
  return t684;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v685, unsigned long v686) {
bb687:
  struct std___Vector_base_int__std__allocator_int__* this688;
  unsigned long __n689;
  int* __retval690;
  this688 = v685;
  __n689 = v686;
  struct std___Vector_base_int__std__allocator_int__* t691 = this688;
  unsigned long t692 = __n689;
  unsigned long c693 = 0;
  _Bool c694 = ((t692 != c693)) ? 1 : 0;
  int* ternary695;
  if (c694) {
    struct std__allocator_int_* base696 = (struct std__allocator_int_*)((char *)&(t691->_M_impl) + 0);
    unsigned long t697 = __n689;
    int* r698 = std__allocator_traits_std__allocator_int_____allocate(base696, t697);
    ternary695 = (int*)r698;
  } else {
    int* c699 = ((void*)0);
    ternary695 = (int*)c699;
  }
  __retval690 = ternary695;
  int* t700 = __retval690;
  return t700;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v701, unsigned long v702) {
bb703:
  struct std___Vector_base_int__std__allocator_int__* this704;
  unsigned long __n705;
  this704 = v701;
  __n705 = v702;
  struct std___Vector_base_int__std__allocator_int__* t706 = this704;
  unsigned long t707 = __n705;
  int* r708 = std___Vector_base_int__std__allocator_int______M_allocate(t706, t707);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base709 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t706->_M_impl) + 0);
  base709->_M_start = r708;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base710 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t706->_M_impl) + 0);
  int* t711 = base710->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base712 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t706->_M_impl) + 0);
  base712->_M_finish = t711;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base713 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t706->_M_impl) + 0);
  int* t714 = base713->_M_start;
  unsigned long t715 = __n705;
  int* ptr716 = &(t714)[t715];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base717 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t706->_M_impl) + 0);
  base717->_M_end_of_storage = ptr716;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v718) {
bb719:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this720;
  this720 = v718;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t721 = this720;
  {
    struct std__allocator_int_* base722 = (struct std__allocator_int_*)((char *)t721 + 0);
    std__allocator_int____allocator(base722);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v723, unsigned long v724, struct std__allocator_int_* v725) {
bb726:
  struct std___Vector_base_int__std__allocator_int__* this727;
  unsigned long __n728;
  struct std__allocator_int_* __a729;
  this727 = v723;
  __n728 = v724;
  __a729 = v725;
  struct std___Vector_base_int__std__allocator_int__* t730 = this727;
  struct std__allocator_int_* t731 = __a729;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t730->_M_impl, t731);
    unsigned long t732 = __n728;
    std___Vector_base_int__std__allocator_int______M_create_storage(t730, t732);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb733:
  _Bool __retval734;
    _Bool c735 = 0;
    __retval734 = c735;
    _Bool t736 = __retval734;
    return t736;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v737, int** v738) {
bb739:
  struct std___UninitDestroyGuard_int____void_* this740;
  int** __first741;
  this740 = v737;
  __first741 = v738;
  struct std___UninitDestroyGuard_int____void_* t742 = this740;
  int** t743 = __first741;
  int* t744 = *t743;
  t742->_M_first = t744;
  int** t745 = __first741;
  t742->_M_cur = t745;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v746, int* v747) {
bb748:
  int* __location749;
  int* __args750;
  int* __retval751;
  void* __loc752;
  __location749 = v746;
  __args750 = v747;
  int* t753 = __location749;
  void* cast754 = (void*)t753;
  __loc752 = cast754;
    void* t755 = __loc752;
    int* cast756 = (int*)t755;
    int* t757 = __args750;
    int t758 = *t757;
    *cast756 = t758;
    __retval751 = cast756;
    int* t759 = __retval751;
    return t759;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v760, int* v761) {
bb762:
  int* __p763;
  int* __args764;
  __p763 = v760;
  __args764 = v761;
    _Bool r765 = std____is_constant_evaluated();
    if (r765) {
      int* t766 = __p763;
      int* t767 = __args764;
      int* r768 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t766, t767);
      return;
    }
  int* t769 = __p763;
  void* cast770 = (void*)t769;
  int* cast771 = (int*)cast770;
  int* t772 = __args764;
  int t773 = *t772;
  *cast771 = t773;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v774) {
bb775:
  struct std___UninitDestroyGuard_int____void_* this776;
  this776 = v774;
  struct std___UninitDestroyGuard_int____void_* t777 = this776;
  int** c778 = ((void*)0);
  t777->_M_cur = c778;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v779) {
bb780:
  struct std___UninitDestroyGuard_int____void_* this781;
  this781 = v779;
  struct std___UninitDestroyGuard_int____void_* t782 = this781;
    int** t783 = t782->_M_cur;
    int** c784 = ((void*)0);
    _Bool c785 = ((t783 != c784)) ? 1 : 0;
    if (c785) {
      int* t786 = t782->_M_first;
      int** t787 = t782->_M_cur;
      int* t788 = *t787;
      void_std___Destroy_int__(t786, t788);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v789, unsigned long v790, int* v791) {
bb792:
  int* __first793;
  unsigned long __n794;
  int* __x795;
  int* __retval796;
  struct std___UninitDestroyGuard_int____void_ __guard797;
  __first793 = v789;
  __n794 = v790;
  __x795 = v791;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard797, &__first793);
        do {
              unsigned long t798 = __n794;
              unsigned long c799 = 0;
              _Bool c800 = ((t798 >= c799)) ? 1 : 0;
              _Bool u801 = !c800;
              if (u801) {
                char* cast802 = (char*)&(_str_11);
                int c803 = 463;
                char* cast804 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast805 = (char*)&(_str_12);
                std____glibcxx_assert_fail(cast802, c803, cast804, cast805);
              }
          _Bool c806 = 0;
          if (!c806) break;
        } while (1);
      while (1) {
        unsigned long t808 = __n794;
        unsigned long u809 = t808 - 1;
        __n794 = u809;
        _Bool cast810 = (_Bool)t808;
        if (!cast810) break;
        int* t811 = __first793;
        int* t812 = __x795;
        void_std___Construct_int__int_const__(t811, t812);
      for_step807: ;
        int* t813 = __first793;
        int c814 = 1;
        int* ptr815 = &(t813)[c814];
        __first793 = ptr815;
      }
    std___UninitDestroyGuard_int___void___release(&__guard797);
    int* t816 = __first793;
    __retval796 = t816;
    int* t817 = __retval796;
    int* ret_val818 = t817;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard797);
    }
    return ret_val818;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v819, unsigned long v820, int* v821) {
bb822:
  int* __first823;
  unsigned long __n824;
  int* __x825;
  int* __retval826;
  __first823 = v819;
  __n824 = v820;
  __x825 = v821;
  int* t827 = __first823;
  unsigned long t828 = __n824;
  int* t829 = __x825;
  int* r830 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t827, t828, t829);
  __retval826 = r830;
  int* t831 = __retval826;
  return t831;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v832, unsigned long v833, int* v834, struct std__allocator_int_* v835) {
bb836:
  int* __first837;
  unsigned long __n838;
  int* __x839;
  struct std__allocator_int_* unnamed840;
  int* __retval841;
  __first837 = v832;
  __n838 = v833;
  __x839 = v834;
  unnamed840 = v835;
    _Bool r842 = std__is_constant_evaluated();
    if (r842) {
      int* t843 = __first837;
      unsigned long t844 = __n838;
      int* t845 = __x839;
      int* r846 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t843, t844, t845);
      __retval841 = r846;
      int* t847 = __retval841;
      return t847;
    }
  int* t848 = __first837;
  unsigned long t849 = __n838;
  int* t850 = __x839;
  int* r851 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t848, t849, t850);
  __retval841 = r851;
  int* t852 = __retval841;
  return t852;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v853) {
bb854:
  struct std___Vector_base_int__std__allocator_int__* this855;
  struct std__allocator_int_* __retval856;
  this855 = v853;
  struct std___Vector_base_int__std__allocator_int__* t857 = this855;
  struct std__allocator_int_* base858 = (struct std__allocator_int_*)((char *)&(t857->_M_impl) + 0);
  __retval856 = base858;
  struct std__allocator_int_* t859 = __retval856;
  return t859;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v860, unsigned long v861, int* v862) {
bb863:
  struct std__vector_int__std__allocator_int__* this864;
  unsigned long __n865;
  int* __value866;
  this864 = v860;
  __n865 = v861;
  __value866 = v862;
  struct std__vector_int__std__allocator_int__* t867 = this864;
  struct std___Vector_base_int__std__allocator_int__* base868 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t867 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base869 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base868->_M_impl) + 0);
  int* t870 = base869->_M_start;
  unsigned long t871 = __n865;
  int* t872 = __value866;
  struct std___Vector_base_int__std__allocator_int__* base873 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t867 + 0);
  struct std__allocator_int_* r874 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base873);
  int* r875 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t870, t871, t872, r874);
  struct std___Vector_base_int__std__allocator_int__* base876 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t867 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base877 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base876->_M_impl) + 0);
  base877->_M_finish = r875;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v878, int* v879, unsigned long v880) {
bb881:
  struct std____new_allocator_int_* this882;
  int* __p883;
  unsigned long __n884;
  this882 = v878;
  __p883 = v879;
  __n884 = v880;
  struct std____new_allocator_int_* t885 = this882;
    unsigned long c886 = 4;
    unsigned long c887 = 16;
    _Bool c888 = ((c886 > c887)) ? 1 : 0;
    if (c888) {
      int* t889 = __p883;
      void* cast890 = (void*)t889;
      unsigned long t891 = __n884;
      unsigned long c892 = 4;
      unsigned long b893 = t891 * c892;
      unsigned long c894 = 4;
      operator_delete_3(cast890, b893, c894);
      return;
    }
  int* t895 = __p883;
  void* cast896 = (void*)t895;
  unsigned long t897 = __n884;
  unsigned long c898 = 4;
  unsigned long b899 = t897 * c898;
  operator_delete_2(cast896, b899);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v900, int* v901, unsigned long v902) {
bb903:
  struct std__allocator_int_* this904;
  int* __p905;
  unsigned long __n906;
  this904 = v900;
  __p905 = v901;
  __n906 = v902;
  struct std__allocator_int_* t907 = this904;
    _Bool r908 = std____is_constant_evaluated();
    if (r908) {
      int* t909 = __p905;
      void* cast910 = (void*)t909;
      operator_delete(cast910);
      return;
    }
  struct std____new_allocator_int_* base911 = (struct std____new_allocator_int_*)((char *)t907 + 0);
  int* t912 = __p905;
  unsigned long t913 = __n906;
  std____new_allocator_int___deallocate(base911, t912, t913);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v914, int* v915, unsigned long v916) {
bb917:
  struct std__allocator_int_* __a918;
  int* __p919;
  unsigned long __n920;
  __a918 = v914;
  __p919 = v915;
  __n920 = v916;
  struct std__allocator_int_* t921 = __a918;
  int* t922 = __p919;
  unsigned long t923 = __n920;
  std__allocator_int___deallocate(t921, t922, t923);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v924, int* v925, unsigned long v926) {
bb927:
  struct std___Vector_base_int__std__allocator_int__* this928;
  int* __p929;
  unsigned long __n930;
  this928 = v924;
  __p929 = v925;
  __n930 = v926;
  struct std___Vector_base_int__std__allocator_int__* t931 = this928;
    int* t932 = __p929;
    _Bool cast933 = (_Bool)t932;
    if (cast933) {
      struct std__allocator_int_* base934 = (struct std__allocator_int_*)((char *)&(t931->_M_impl) + 0);
      int* t935 = __p929;
      unsigned long t936 = __n930;
      std__allocator_traits_std__allocator_int_____deallocate(base934, t935, t936);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v937) {
bb938:
  struct std___Vector_base_int__std__allocator_int__* this939;
  this939 = v937;
  struct std___Vector_base_int__std__allocator_int__* t940 = this939;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base941 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t940->_M_impl) + 0);
    int* t942 = base941->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base943 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t940->_M_impl) + 0);
    int* t944 = base943->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base945 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t940->_M_impl) + 0);
    int* t946 = base945->_M_start;
    long diff947 = t944 - t946;
    unsigned long cast948 = (unsigned long)diff947;
    std___Vector_base_int__std__allocator_int______M_deallocate(t940, t942, cast948);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t940->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v949, struct std____new_allocator_int_* v950) {
bb951:
  struct std____new_allocator_int_* this952;
  struct std____new_allocator_int_* unnamed953;
  this952 = v949;
  unnamed953 = v950;
  struct std____new_allocator_int_* t954 = this952;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v955) {
bb956:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this957;
  this957 = v955;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t958 = this957;
  int* c959 = ((void*)0);
  t958->_M_start = c959;
  int* c960 = ((void*)0);
  t958->_M_finish = c960;
  int* c961 = ((void*)0);
  t958->_M_end_of_storage = c961;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v962) {
bb963:
  int* __location964;
  __location964 = v962;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v965, int* v966) {
bb967:
  int* __first968;
  int* __last969;
  __first968 = v965;
  __last969 = v966;
      _Bool r970 = std____is_constant_evaluated();
      if (r970) {
          while (1) {
            int* t972 = __first968;
            int* t973 = __last969;
            _Bool c974 = ((t972 != t973)) ? 1 : 0;
            if (!c974) break;
            int* t975 = __first968;
            void_std__destroy_at_int_(t975);
          for_step971: ;
            int* t976 = __first968;
            int c977 = 1;
            int* ptr978 = &(t976)[c977];
            __first968 = ptr978;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v979, int* v980, struct std__allocator_int_* v981) {
bb982:
  int* __first983;
  int* __last984;
  struct std__allocator_int_* unnamed985;
  __first983 = v979;
  __last984 = v980;
  unnamed985 = v981;
  int* t986 = __first983;
  int* t987 = __last984;
  void_std___Destroy_int__(t986, t987);
  return;
}

