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
char _str[18] = "myvector[3] != 33";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm87_fill_n/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_6[9] = "__n >= 0";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v148, long v149) {
bb150:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this151;
  long __n152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval153;
  int* ref_tmp0154;
  this151 = v148;
  __n152 = v149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t155 = this151;
  int* t156 = t155->_M_current;
  long t157 = __n152;
  int* ptr158 = &(t156)[t157];
  ref_tmp0154 = ptr158;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval153, &ref_tmp0154);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t159 = __retval153;
  return t159;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v160) {
bb161:
  struct std__vector_int__std__allocator_int__* this162;
  unsigned long __retval163;
  long __dif164;
  this162 = v160;
  struct std__vector_int__std__allocator_int__* t165 = this162;
  struct std___Vector_base_int__std__allocator_int__* base166 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t165 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base167 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base166->_M_impl) + 0);
  int* t168 = base167->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base169 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t165 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base170 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base169->_M_impl) + 0);
  int* t171 = base170->_M_start;
  long diff172 = t168 - t171;
  __dif164 = diff172;
    long t173 = __dif164;
    long c174 = 0;
    _Bool c175 = ((t173 < c174)) ? 1 : 0;
    if (c175) {
      __builtin_unreachable();
    }
  long t176 = __dif164;
  unsigned long cast177 = (unsigned long)t176;
  __retval163 = cast177;
  unsigned long t178 = __retval163;
  return t178;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v179, unsigned long v180) {
bb181:
  struct std__vector_int__std__allocator_int__* this182;
  unsigned long __n183;
  int* __retval184;
  this182 = v179;
  __n183 = v180;
  struct std__vector_int__std__allocator_int__* t185 = this182;
    do {
          unsigned long t186 = __n183;
          unsigned long r187 = std__vector_int__std__allocator_int_____size___const(t185);
          _Bool c188 = ((t186 < r187)) ? 1 : 0;
          _Bool u189 = !c188;
          if (u189) {
            char* cast190 = (char*)&(_str_7);
            int c191 = 1263;
            char* cast192 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast193 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast190, c191, cast192, cast193);
          }
      _Bool c194 = 0;
      if (!c194) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base195 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t185 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base196 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base195->_M_impl) + 0);
  int* t197 = base196->_M_start;
  unsigned long t198 = __n183;
  int* ptr199 = &(t197)[t198];
  __retval184 = ptr199;
  int* t200 = __retval184;
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
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2438;
  int ref_tmp3439;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1440;
  int c441 = 0;
  __retval433 = c441;
  unsigned long c442 = 8;
  int c443 = 10;
  ref_tmp0435 = c443;
  std__allocator_int___allocator_2(&ref_tmp1436);
    std__vector_int__std__allocator_int_____vector(&myvector434, c442, &ref_tmp0435, &ref_tmp1436);
  {
    std__allocator_int____allocator(&ref_tmp1436);
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r444 = std__vector_int__std__allocator_int_____begin(&myvector434);
    ref_tmp2438 = r444;
    long c445 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r446 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp2438, c445);
    agg_tmp0437 = r446;
    int c447 = 3;
    int c448 = 33;
    ref_tmp3439 = c448;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t449 = agg_tmp0437;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r450 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__fill_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t449, c447, &ref_tmp3439);
    agg_tmp1440 = r450;
    unsigned long c451 = 3;
    int* r452 = std__vector_int__std__allocator_int_____operator__(&myvector434, c451);
    int t453 = *r452;
    int c454 = 33;
    _Bool c455 = ((t453 != c454)) ? 1 : 0;
    if (c455) {
    } else {
      char* cast456 = (char*)&(_str);
      char* c457 = _str_1;
      unsigned int c458 = 23;
      char* cast459 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast456, c457, c458, cast459);
    }
    char* cast460 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r461 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast460);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it462;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4463;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r464 = std__vector_int__std__allocator_int_____begin(&myvector434);
      it462 = r464;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r466 = std__vector_int__std__allocator_int_____end(&myvector434);
        ref_tmp4463 = r466;
        _Bool r467 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it462, &ref_tmp4463);
        _Bool u468 = !r467;
        if (!u468) break;
        char* cast469 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r470 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast469);
        int* r471 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it462);
        int t472 = *r471;
        struct std__basic_ostream_char__std__char_traits_char__* r473 = std__ostream__operator__(r470, t472);
      for_step465: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r474 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it462);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r475 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c476 = 0;
    __retval433 = c476;
    int t477 = __retval433;
    int ret_val478 = t477;
    {
      std__vector_int__std__allocator_int______vector(&myvector434);
    }
    return ret_val478;
  int t479 = __retval433;
  return t479;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v480) {
bb481:
  struct std____new_allocator_int_* this482;
  this482 = v480;
  struct std____new_allocator_int_* t483 = this482;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v484, unsigned long* v485) {
bb486:
  unsigned long* __a487;
  unsigned long* __b488;
  unsigned long* __retval489;
  __a487 = v484;
  __b488 = v485;
    unsigned long* t490 = __b488;
    unsigned long t491 = *t490;
    unsigned long* t492 = __a487;
    unsigned long t493 = *t492;
    _Bool c494 = ((t491 < t493)) ? 1 : 0;
    if (c494) {
      unsigned long* t495 = __b488;
      __retval489 = t495;
      unsigned long* t496 = __retval489;
      return t496;
    }
  unsigned long* t497 = __a487;
  __retval489 = t497;
  unsigned long* t498 = __retval489;
  return t498;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v499) {
bb500:
  struct std__allocator_int_* __a501;
  unsigned long __retval502;
  unsigned long __diffmax503;
  unsigned long __allocmax504;
  __a501 = v499;
  unsigned long c505 = 2305843009213693951;
  __diffmax503 = c505;
  unsigned long c506 = 4611686018427387903;
  __allocmax504 = c506;
  unsigned long* r507 = unsigned_long_const__std__min_unsigned_long_(&__diffmax503, &__allocmax504);
  unsigned long t508 = *r507;
  __retval502 = t508;
  unsigned long t509 = __retval502;
  return t509;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v510, struct std__allocator_int_* v511) {
bb512:
  struct std__allocator_int_* this513;
  struct std__allocator_int_* __a514;
  this513 = v510;
  __a514 = v511;
  struct std__allocator_int_* t515 = this513;
  struct std____new_allocator_int_* base516 = (struct std____new_allocator_int_*)((char *)t515 + 0);
  struct std__allocator_int_* t517 = __a514;
  struct std____new_allocator_int_* base518 = (struct std____new_allocator_int_*)((char *)t517 + 0);
  std____new_allocator_int_____new_allocator(base516, base518);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v519, struct std__allocator_int_* v520) {
bb521:
  unsigned long __n522;
  struct std__allocator_int_* __a523;
  unsigned long __retval524;
  __n522 = v519;
  __a523 = v520;
    struct std__allocator_int_ ref_tmp0525;
    _Bool tmp_exprcleanup526;
    unsigned long t527 = __n522;
    struct std__allocator_int_* t528 = __a523;
    std__allocator_int___allocator(&ref_tmp0525, t528);
      unsigned long r529 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0525);
      _Bool c530 = ((t527 > r529)) ? 1 : 0;
      tmp_exprcleanup526 = c530;
    {
      std__allocator_int____allocator(&ref_tmp0525);
    }
    _Bool t531 = tmp_exprcleanup526;
    if (t531) {
      char* cast532 = (char*)&(_str_4);
      std____throw_length_error(cast532);
    }
  unsigned long t533 = __n522;
  __retval524 = t533;
  unsigned long t534 = __retval524;
  return t534;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v535, struct std__allocator_int_* v536) {
bb537:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this538;
  struct std__allocator_int_* __a539;
  this538 = v535;
  __a539 = v536;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t540 = this538;
  struct std__allocator_int_* base541 = (struct std__allocator_int_*)((char *)t540 + 0);
  struct std__allocator_int_* t542 = __a539;
  std__allocator_int___allocator(base541, t542);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base543 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t540 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base543);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb544:
  _Bool __retval545;
    _Bool c546 = 0;
    __retval545 = c546;
    _Bool t547 = __retval545;
    return t547;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v548) {
bb549:
  struct std____new_allocator_int_* this550;
  unsigned long __retval551;
  this550 = v548;
  struct std____new_allocator_int_* t552 = this550;
  unsigned long c553 = 9223372036854775807;
  unsigned long c554 = 4;
  unsigned long b555 = c553 / c554;
  __retval551 = b555;
  unsigned long t556 = __retval551;
  return t556;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v557, unsigned long v558, void* v559) {
bb560:
  struct std____new_allocator_int_* this561;
  unsigned long __n562;
  void* unnamed563;
  int* __retval564;
  this561 = v557;
  __n562 = v558;
  unnamed563 = v559;
  struct std____new_allocator_int_* t565 = this561;
    unsigned long t566 = __n562;
    unsigned long r567 = std____new_allocator_int____M_max_size___const(t565);
    _Bool c568 = ((t566 > r567)) ? 1 : 0;
    if (c568) {
        unsigned long t569 = __n562;
        unsigned long c570 = -1;
        unsigned long c571 = 4;
        unsigned long b572 = c570 / c571;
        _Bool c573 = ((t569 > b572)) ? 1 : 0;
        if (c573) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c574 = 4;
    unsigned long c575 = 16;
    _Bool c576 = ((c574 > c575)) ? 1 : 0;
    if (c576) {
      unsigned long __al577;
      unsigned long c578 = 4;
      __al577 = c578;
      unsigned long t579 = __n562;
      unsigned long c580 = 4;
      unsigned long b581 = t579 * c580;
      unsigned long t582 = __al577;
      void* r583 = operator_new_2(b581, t582);
      int* cast584 = (int*)r583;
      __retval564 = cast584;
      int* t585 = __retval564;
      return t585;
    }
  unsigned long t586 = __n562;
  unsigned long c587 = 4;
  unsigned long b588 = t586 * c587;
  void* r589 = operator_new(b588);
  int* cast590 = (int*)r589;
  __retval564 = cast590;
  int* t591 = __retval564;
  return t591;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v592, unsigned long v593) {
bb594:
  struct std__allocator_int_* this595;
  unsigned long __n596;
  int* __retval597;
  this595 = v592;
  __n596 = v593;
  struct std__allocator_int_* t598 = this595;
    _Bool r599 = std____is_constant_evaluated();
    if (r599) {
        unsigned long t600 = __n596;
        unsigned long c601 = 4;
        unsigned long ovr602;
        _Bool ovf603 = __builtin_mul_overflow(t600, c601, &ovr602);
        __n596 = ovr602;
        if (ovf603) {
          std____throw_bad_array_new_length();
        }
      unsigned long t604 = __n596;
      void* r605 = operator_new(t604);
      int* cast606 = (int*)r605;
      __retval597 = cast606;
      int* t607 = __retval597;
      return t607;
    }
  struct std____new_allocator_int_* base608 = (struct std____new_allocator_int_*)((char *)t598 + 0);
  unsigned long t609 = __n596;
  void* c610 = ((void*)0);
  int* r611 = std____new_allocator_int___allocate(base608, t609, c610);
  __retval597 = r611;
  int* t612 = __retval597;
  return t612;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v613, unsigned long v614) {
bb615:
  struct std__allocator_int_* __a616;
  unsigned long __n617;
  int* __retval618;
  __a616 = v613;
  __n617 = v614;
  struct std__allocator_int_* t619 = __a616;
  unsigned long t620 = __n617;
  int* r621 = std__allocator_int___allocate(t619, t620);
  __retval618 = r621;
  int* t622 = __retval618;
  return t622;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v623, unsigned long v624) {
bb625:
  struct std___Vector_base_int__std__allocator_int__* this626;
  unsigned long __n627;
  int* __retval628;
  this626 = v623;
  __n627 = v624;
  struct std___Vector_base_int__std__allocator_int__* t629 = this626;
  unsigned long t630 = __n627;
  unsigned long c631 = 0;
  _Bool c632 = ((t630 != c631)) ? 1 : 0;
  int* ternary633;
  if (c632) {
    struct std__allocator_int_* base634 = (struct std__allocator_int_*)((char *)&(t629->_M_impl) + 0);
    unsigned long t635 = __n627;
    int* r636 = std__allocator_traits_std__allocator_int_____allocate(base634, t635);
    ternary633 = (int*)r636;
  } else {
    int* c637 = ((void*)0);
    ternary633 = (int*)c637;
  }
  __retval628 = ternary633;
  int* t638 = __retval628;
  return t638;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v639, unsigned long v640) {
bb641:
  struct std___Vector_base_int__std__allocator_int__* this642;
  unsigned long __n643;
  this642 = v639;
  __n643 = v640;
  struct std___Vector_base_int__std__allocator_int__* t644 = this642;
  unsigned long t645 = __n643;
  int* r646 = std___Vector_base_int__std__allocator_int______M_allocate(t644, t645);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base647 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t644->_M_impl) + 0);
  base647->_M_start = r646;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base648 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t644->_M_impl) + 0);
  int* t649 = base648->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base650 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t644->_M_impl) + 0);
  base650->_M_finish = t649;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base651 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t644->_M_impl) + 0);
  int* t652 = base651->_M_start;
  unsigned long t653 = __n643;
  int* ptr654 = &(t652)[t653];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base655 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t644->_M_impl) + 0);
  base655->_M_end_of_storage = ptr654;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v656) {
bb657:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this658;
  this658 = v656;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t659 = this658;
  {
    struct std__allocator_int_* base660 = (struct std__allocator_int_*)((char *)t659 + 0);
    std__allocator_int____allocator(base660);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v661, unsigned long v662, struct std__allocator_int_* v663) {
bb664:
  struct std___Vector_base_int__std__allocator_int__* this665;
  unsigned long __n666;
  struct std__allocator_int_* __a667;
  this665 = v661;
  __n666 = v662;
  __a667 = v663;
  struct std___Vector_base_int__std__allocator_int__* t668 = this665;
  struct std__allocator_int_* t669 = __a667;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t668->_M_impl, t669);
    unsigned long t670 = __n666;
    std___Vector_base_int__std__allocator_int______M_create_storage(t668, t670);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb671:
  _Bool __retval672;
    _Bool c673 = 0;
    __retval672 = c673;
    _Bool t674 = __retval672;
    return t674;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v675, int** v676) {
bb677:
  struct std___UninitDestroyGuard_int____void_* this678;
  int** __first679;
  this678 = v675;
  __first679 = v676;
  struct std___UninitDestroyGuard_int____void_* t680 = this678;
  int** t681 = __first679;
  int* t682 = *t681;
  t680->_M_first = t682;
  int** t683 = __first679;
  t680->_M_cur = t683;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v684, int* v685) {
bb686:
  int* __location687;
  int* __args688;
  int* __retval689;
  void* __loc690;
  __location687 = v684;
  __args688 = v685;
  int* t691 = __location687;
  void* cast692 = (void*)t691;
  __loc690 = cast692;
    void* t693 = __loc690;
    int* cast694 = (int*)t693;
    int* t695 = __args688;
    int t696 = *t695;
    *cast694 = t696;
    __retval689 = cast694;
    int* t697 = __retval689;
    return t697;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v698, int* v699) {
bb700:
  int* __p701;
  int* __args702;
  __p701 = v698;
  __args702 = v699;
    _Bool r703 = std____is_constant_evaluated();
    if (r703) {
      int* t704 = __p701;
      int* t705 = __args702;
      int* r706 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t704, t705);
      return;
    }
  int* t707 = __p701;
  void* cast708 = (void*)t707;
  int* cast709 = (int*)cast708;
  int* t710 = __args702;
  int t711 = *t710;
  *cast709 = t711;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v712) {
bb713:
  struct std___UninitDestroyGuard_int____void_* this714;
  this714 = v712;
  struct std___UninitDestroyGuard_int____void_* t715 = this714;
  int** c716 = ((void*)0);
  t715->_M_cur = c716;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v717) {
bb718:
  struct std___UninitDestroyGuard_int____void_* this719;
  this719 = v717;
  struct std___UninitDestroyGuard_int____void_* t720 = this719;
    int** t721 = t720->_M_cur;
    int** c722 = ((void*)0);
    _Bool c723 = ((t721 != c722)) ? 1 : 0;
    if (c723) {
      int* t724 = t720->_M_first;
      int** t725 = t720->_M_cur;
      int* t726 = *t725;
      void_std___Destroy_int__(t724, t726);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v727, unsigned long v728, int* v729) {
bb730:
  int* __first731;
  unsigned long __n732;
  int* __x733;
  int* __retval734;
  struct std___UninitDestroyGuard_int____void_ __guard735;
  __first731 = v727;
  __n732 = v728;
  __x733 = v729;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard735, &__first731);
        do {
              unsigned long t736 = __n732;
              unsigned long c737 = 0;
              _Bool c738 = ((t736 >= c737)) ? 1 : 0;
              _Bool u739 = !c738;
              if (u739) {
                char* cast740 = (char*)&(_str_5);
                int c741 = 463;
                char* cast742 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast743 = (char*)&(_str_6);
                std____glibcxx_assert_fail(cast740, c741, cast742, cast743);
              }
          _Bool c744 = 0;
          if (!c744) break;
        } while (1);
      while (1) {
        unsigned long t746 = __n732;
        unsigned long u747 = t746 - 1;
        __n732 = u747;
        _Bool cast748 = (_Bool)t746;
        if (!cast748) break;
        int* t749 = __first731;
        int* t750 = __x733;
        void_std___Construct_int__int_const__(t749, t750);
      for_step745: ;
        int* t751 = __first731;
        int c752 = 1;
        int* ptr753 = &(t751)[c752];
        __first731 = ptr753;
      }
    std___UninitDestroyGuard_int___void___release(&__guard735);
    int* t754 = __first731;
    __retval734 = t754;
    int* t755 = __retval734;
    int* ret_val756 = t755;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard735);
    }
    return ret_val756;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v757, unsigned long v758, int* v759) {
bb760:
  int* __first761;
  unsigned long __n762;
  int* __x763;
  int* __retval764;
  __first761 = v757;
  __n762 = v758;
  __x763 = v759;
  int* t765 = __first761;
  unsigned long t766 = __n762;
  int* t767 = __x763;
  int* r768 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t765, t766, t767);
  __retval764 = r768;
  int* t769 = __retval764;
  return t769;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v770, unsigned long v771, int* v772, struct std__allocator_int_* v773) {
bb774:
  int* __first775;
  unsigned long __n776;
  int* __x777;
  struct std__allocator_int_* unnamed778;
  int* __retval779;
  __first775 = v770;
  __n776 = v771;
  __x777 = v772;
  unnamed778 = v773;
    _Bool r780 = std__is_constant_evaluated();
    if (r780) {
      int* t781 = __first775;
      unsigned long t782 = __n776;
      int* t783 = __x777;
      int* r784 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t781, t782, t783);
      __retval779 = r784;
      int* t785 = __retval779;
      return t785;
    }
  int* t786 = __first775;
  unsigned long t787 = __n776;
  int* t788 = __x777;
  int* r789 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t786, t787, t788);
  __retval779 = r789;
  int* t790 = __retval779;
  return t790;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v791) {
bb792:
  struct std___Vector_base_int__std__allocator_int__* this793;
  struct std__allocator_int_* __retval794;
  this793 = v791;
  struct std___Vector_base_int__std__allocator_int__* t795 = this793;
  struct std__allocator_int_* base796 = (struct std__allocator_int_*)((char *)&(t795->_M_impl) + 0);
  __retval794 = base796;
  struct std__allocator_int_* t797 = __retval794;
  return t797;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v798, unsigned long v799, int* v800) {
bb801:
  struct std__vector_int__std__allocator_int__* this802;
  unsigned long __n803;
  int* __value804;
  this802 = v798;
  __n803 = v799;
  __value804 = v800;
  struct std__vector_int__std__allocator_int__* t805 = this802;
  struct std___Vector_base_int__std__allocator_int__* base806 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base807 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base806->_M_impl) + 0);
  int* t808 = base807->_M_start;
  unsigned long t809 = __n803;
  int* t810 = __value804;
  struct std___Vector_base_int__std__allocator_int__* base811 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std__allocator_int_* r812 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base811);
  int* r813 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t808, t809, t810, r812);
  struct std___Vector_base_int__std__allocator_int__* base814 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base815 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base814->_M_impl) + 0);
  base815->_M_finish = r813;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v816, int* v817, unsigned long v818) {
bb819:
  struct std____new_allocator_int_* this820;
  int* __p821;
  unsigned long __n822;
  this820 = v816;
  __p821 = v817;
  __n822 = v818;
  struct std____new_allocator_int_* t823 = this820;
    unsigned long c824 = 4;
    unsigned long c825 = 16;
    _Bool c826 = ((c824 > c825)) ? 1 : 0;
    if (c826) {
      int* t827 = __p821;
      void* cast828 = (void*)t827;
      unsigned long t829 = __n822;
      unsigned long c830 = 4;
      unsigned long b831 = t829 * c830;
      unsigned long c832 = 4;
      operator_delete_3(cast828, b831, c832);
      return;
    }
  int* t833 = __p821;
  void* cast834 = (void*)t833;
  unsigned long t835 = __n822;
  unsigned long c836 = 4;
  unsigned long b837 = t835 * c836;
  operator_delete_2(cast834, b837);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v838, int* v839, unsigned long v840) {
bb841:
  struct std__allocator_int_* this842;
  int* __p843;
  unsigned long __n844;
  this842 = v838;
  __p843 = v839;
  __n844 = v840;
  struct std__allocator_int_* t845 = this842;
    _Bool r846 = std____is_constant_evaluated();
    if (r846) {
      int* t847 = __p843;
      void* cast848 = (void*)t847;
      operator_delete(cast848);
      return;
    }
  struct std____new_allocator_int_* base849 = (struct std____new_allocator_int_*)((char *)t845 + 0);
  int* t850 = __p843;
  unsigned long t851 = __n844;
  std____new_allocator_int___deallocate(base849, t850, t851);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v852, int* v853, unsigned long v854) {
bb855:
  struct std__allocator_int_* __a856;
  int* __p857;
  unsigned long __n858;
  __a856 = v852;
  __p857 = v853;
  __n858 = v854;
  struct std__allocator_int_* t859 = __a856;
  int* t860 = __p857;
  unsigned long t861 = __n858;
  std__allocator_int___deallocate(t859, t860, t861);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v862, int* v863, unsigned long v864) {
bb865:
  struct std___Vector_base_int__std__allocator_int__* this866;
  int* __p867;
  unsigned long __n868;
  this866 = v862;
  __p867 = v863;
  __n868 = v864;
  struct std___Vector_base_int__std__allocator_int__* t869 = this866;
    int* t870 = __p867;
    _Bool cast871 = (_Bool)t870;
    if (cast871) {
      struct std__allocator_int_* base872 = (struct std__allocator_int_*)((char *)&(t869->_M_impl) + 0);
      int* t873 = __p867;
      unsigned long t874 = __n868;
      std__allocator_traits_std__allocator_int_____deallocate(base872, t873, t874);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v875) {
bb876:
  struct std___Vector_base_int__std__allocator_int__* this877;
  this877 = v875;
  struct std___Vector_base_int__std__allocator_int__* t878 = this877;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base879 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t878->_M_impl) + 0);
    int* t880 = base879->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base881 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t878->_M_impl) + 0);
    int* t882 = base881->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base883 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t878->_M_impl) + 0);
    int* t884 = base883->_M_start;
    long diff885 = t882 - t884;
    unsigned long cast886 = (unsigned long)diff885;
    std___Vector_base_int__std__allocator_int______M_deallocate(t878, t880, cast886);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t878->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v887, struct std____new_allocator_int_* v888) {
bb889:
  struct std____new_allocator_int_* this890;
  struct std____new_allocator_int_* unnamed891;
  this890 = v887;
  unnamed891 = v888;
  struct std____new_allocator_int_* t892 = this890;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v893) {
bb894:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this895;
  this895 = v893;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t896 = this895;
  int* c897 = ((void*)0);
  t896->_M_start = c897;
  int* c898 = ((void*)0);
  t896->_M_finish = c898;
  int* c899 = ((void*)0);
  t896->_M_end_of_storage = c899;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v900) {
bb901:
  int* __location902;
  __location902 = v900;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v903, int* v904) {
bb905:
  int* __first906;
  int* __last907;
  __first906 = v903;
  __last907 = v904;
      _Bool r908 = std____is_constant_evaluated();
      if (r908) {
          while (1) {
            int* t910 = __first906;
            int* t911 = __last907;
            _Bool c912 = ((t910 != t911)) ? 1 : 0;
            if (!c912) break;
            int* t913 = __first906;
            void_std__destroy_at_int_(t913);
          for_step909: ;
            int* t914 = __first906;
            int c915 = 1;
            int* ptr916 = &(t914)[c915];
            __first906 = ptr916;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v917, int* v918, struct std__allocator_int_* v919) {
bb920:
  int* __first921;
  int* __last922;
  struct std__allocator_int_* unnamed923;
  __first921 = v917;
  __last922 = v918;
  unnamed923 = v919;
  int* t924 = __first921;
  int* t925 = __last922;
  void_std___Destroy_int__(t924, t925);
  return;
}

