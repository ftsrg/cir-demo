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
char _str[18] = "myvector[3] == 10";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm24/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[3] == 20";
char _str_3[18] = "myvector[3] != 33";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[19] = "myvector contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
void void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int p1, int* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
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
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v26) {
bb27:
  struct std__vector_int__std__allocator_int__* this28;
  unsigned long __retval29;
  long __dif30;
  this28 = v26;
  struct std__vector_int__std__allocator_int__* t31 = this28;
  struct std___Vector_base_int__std__allocator_int__* base32 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t31 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base33 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base32->_M_impl) + 0);
  int* t34 = base33->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base35 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t31 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base36 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base35->_M_impl) + 0);
  int* t37 = base36->_M_start;
  long diff38 = t34 - t37;
  __dif30 = diff38;
    long t39 = __dif30;
    long c40 = 0;
    _Bool c41 = ((t39 < c40)) ? 1 : 0;
    if (c41) {
      __builtin_unreachable();
    }
  long t42 = __dif30;
  unsigned long cast43 = (unsigned long)t42;
  __retval29 = cast43;
  unsigned long t44 = __retval29;
  return t44;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v45, unsigned long v46) {
bb47:
  struct std__vector_int__std__allocator_int__* this48;
  unsigned long __n49;
  int* __retval50;
  this48 = v45;
  __n49 = v46;
  struct std__vector_int__std__allocator_int__* t51 = this48;
    do {
          unsigned long t52 = __n49;
          unsigned long r53 = std__vector_int__std__allocator_int_____size___const(t51);
          _Bool c54 = ((t52 < r53)) ? 1 : 0;
          _Bool u55 = !c54;
          if (u55) {
            char* cast56 = (char*)&(_str_9);
            int c57 = 1263;
            char* cast58 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast59 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast56, c57, cast58, cast59);
          }
      _Bool c60 = 0;
      if (!c60) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base61 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t51 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base62 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base61->_M_impl) + 0);
  int* t63 = base62->_M_start;
  unsigned long t64 = __n49;
  int* ptr65 = &(t63)[t64];
  __retval50 = ptr65;
  int* t66 = __retval50;
  return t66;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v67, int v68) {
bb69:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this70;
  int unnamed71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval72;
  int* ref_tmp073;
  this70 = v67;
  unnamed71 = v68;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t74 = this70;
  int* t75 = t74->_M_current;
  int c76 = 1;
  int* ptr77 = &(t75)[c76];
  t74->_M_current = ptr77;
  ref_tmp073 = t75;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval72, &ref_tmp073);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t78 = __retval72;
  return t78;
}

// function: _Z12fill_n_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiiEvT_T0_RKT1_
void void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v79, int v80, int* v81) {
bb82:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first83;
  int n84;
  int* val85;
  first83 = v79;
  n84 = v80;
  val85 = v81;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp086;
    while (1) {
      int t88 = n84;
      int c89 = 0;
      _Bool c90 = ((t88 > c89)) ? 1 : 0;
      if (!c90) break;
      int* t91 = val85;
      int t92 = *t91;
      int c93 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r94 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first83, c93);
      ref_tmp086 = r94;
      int* r95 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp086);
      *r95 = t92;
    for_step87: ;
      int t96 = n84;
      int u97 = t96 - 1;
      n84 = u97;
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v98, int** v99) {
bb100:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this101;
  int** __i102;
  this101 = v98;
  __i102 = v99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t103 = this101;
  int** t104 = __i102;
  int* t105 = *t104;
  t103->_M_current = t105;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v106) {
bb107:
  struct std__vector_int__std__allocator_int__* this108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval109;
  this108 = v106;
  struct std__vector_int__std__allocator_int__* t110 = this108;
  struct std___Vector_base_int__std__allocator_int__* base111 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t110 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base112 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base111->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval109, &base112->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t113 = __retval109;
  return t113;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v114, long v115) {
bb116:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this117;
  long __n118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval119;
  int* ref_tmp0120;
  this117 = v114;
  __n118 = v115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t121 = this117;
  int* t122 = t121->_M_current;
  long t123 = __n118;
  int* ptr124 = &(t122)[t123];
  ref_tmp0120 = ptr124;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval119, &ref_tmp0120);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t125 = __retval119;
  return t125;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v126, int v127) {
bb128:
  int __a129;
  int __b130;
  int __retval131;
  __a129 = v126;
  __b130 = v127;
  int t132 = __a129;
  int t133 = __b130;
  int b134 = t132 | t133;
  __retval131 = b134;
  int t135 = __retval131;
  return t135;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v136) {
bb137:
  struct std__basic_ios_char__std__char_traits_char__* this138;
  int __retval139;
  this138 = v136;
  struct std__basic_ios_char__std__char_traits_char__* t140 = this138;
  struct std__ios_base* base141 = (struct std__ios_base*)((char *)t140 + 0);
  int t142 = base141->_M_streambuf_state;
  __retval139 = t142;
  int t143 = __retval139;
  return t143;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v144, int v145) {
bb146:
  struct std__basic_ios_char__std__char_traits_char__* this147;
  int __state148;
  this147 = v144;
  __state148 = v145;
  struct std__basic_ios_char__std__char_traits_char__* t149 = this147;
  int r150 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t149);
  int t151 = __state148;
  int r152 = std__operator_(r150, t151);
  std__basic_ios_char__std__char_traits_char_____clear(t149, r152);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v153, char* v154) {
bb155:
  char* __c1156;
  char* __c2157;
  _Bool __retval158;
  __c1156 = v153;
  __c2157 = v154;
  char* t159 = __c1156;
  char t160 = *t159;
  int cast161 = (int)t160;
  char* t162 = __c2157;
  char t163 = *t162;
  int cast164 = (int)t163;
  _Bool c165 = ((cast161 == cast164)) ? 1 : 0;
  __retval158 = c165;
  _Bool t166 = __retval158;
  return t166;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v167) {
bb168:
  char* __p169;
  unsigned long __retval170;
  unsigned long __i171;
  __p169 = v167;
  unsigned long c172 = 0;
  __i171 = c172;
    char ref_tmp0173;
    while (1) {
      unsigned long t174 = __i171;
      char* t175 = __p169;
      char* ptr176 = &(t175)[t174];
      char c177 = 0;
      ref_tmp0173 = c177;
      _Bool r178 = __gnu_cxx__char_traits_char___eq(ptr176, &ref_tmp0173);
      _Bool u179 = !r178;
      if (!u179) break;
      unsigned long t180 = __i171;
      unsigned long u181 = t180 + 1;
      __i171 = u181;
    }
  unsigned long t182 = __i171;
  __retval170 = t182;
  unsigned long t183 = __retval170;
  return t183;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v184) {
bb185:
  char* __s186;
  unsigned long __retval187;
  __s186 = v184;
    _Bool r188 = std____is_constant_evaluated();
    if (r188) {
      char* t189 = __s186;
      unsigned long r190 = __gnu_cxx__char_traits_char___length(t189);
      __retval187 = r190;
      unsigned long t191 = __retval187;
      return t191;
    }
  char* t192 = __s186;
  unsigned long r193 = strlen(t192);
  __retval187 = r193;
  unsigned long t194 = __retval187;
  return t194;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v195, char* v196) {
bb197:
  struct std__basic_ostream_char__std__char_traits_char__* __out198;
  char* __s199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval200;
  __out198 = v195;
  __s199 = v196;
    char* t201 = __s199;
    _Bool cast202 = (_Bool)t201;
    _Bool u203 = !cast202;
    if (u203) {
      struct std__basic_ostream_char__std__char_traits_char__* t204 = __out198;
      void** v205 = (void**)t204;
      void* v206 = *((void**)v205);
      unsigned char* cast207 = (unsigned char*)v206;
      long c208 = -24;
      unsigned char* ptr209 = &(cast207)[c208];
      long* cast210 = (long*)ptr209;
      long t211 = *cast210;
      unsigned char* cast212 = (unsigned char*)t204;
      unsigned char* ptr213 = &(cast212)[t211];
      struct std__basic_ostream_char__std__char_traits_char__* cast214 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr213;
      struct std__basic_ios_char__std__char_traits_char__* cast215 = (struct std__basic_ios_char__std__char_traits_char__*)cast214;
      int t216 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast215, t216);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t217 = __out198;
      char* t218 = __s199;
      char* t219 = __s199;
      unsigned long r220 = std__char_traits_char___length(t219);
      long cast221 = (long)r220;
      struct std__basic_ostream_char__std__char_traits_char__* r222 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t217, t218, cast221);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t223 = __out198;
  __retval200 = t223;
  struct std__basic_ostream_char__std__char_traits_char__* t224 = __retval200;
  return t224;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v225) {
bb226:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this227;
  int** __retval228;
  this227 = v225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t229 = this227;
  __retval228 = &t229->_M_current;
  int** t230 = __retval228;
  return t230;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v231, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v232) {
bb233:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs234;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs235;
  _Bool __retval236;
  __lhs234 = v231;
  __rhs235 = v232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t237 = __lhs234;
  int** r238 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t237);
  int* t239 = *r238;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t240 = __rhs235;
  int** r241 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t240);
  int* t242 = *r241;
  _Bool c243 = ((t239 == t242)) ? 1 : 0;
  __retval236 = c243;
  _Bool t244 = __retval236;
  return t244;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v245) {
bb246:
  struct std__vector_int__std__allocator_int__* this247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval248;
  this247 = v245;
  struct std__vector_int__std__allocator_int__* t249 = this247;
  struct std___Vector_base_int__std__allocator_int__* base250 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t249 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base251 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base250->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval248, &base251->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t252 = __retval248;
  return t252;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v253) {
bb254:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this255;
  int* __retval256;
  this255 = v253;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t257 = this255;
  int* t258 = t257->_M_current;
  __retval256 = t258;
  int* t259 = __retval256;
  return t259;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v260) {
bb261:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval263;
  this262 = v260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t264 = this262;
  int* t265 = t264->_M_current;
  int c266 = 1;
  int* ptr267 = &(t265)[c266];
  t264->_M_current = ptr267;
  __retval263 = t264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t268 = __retval263;
  return t268;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v269, void* v270) {
bb271:
  struct std__basic_ostream_char__std__char_traits_char__* this272;
  void* __pf273;
  struct std__basic_ostream_char__std__char_traits_char__* __retval274;
  this272 = v269;
  __pf273 = v270;
  struct std__basic_ostream_char__std__char_traits_char__* t275 = this272;
  void* t276 = __pf273;
  struct std__basic_ostream_char__std__char_traits_char__* r277 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t276)(t275);
  __retval274 = r277;
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __retval274;
  return t278;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v279) {
bb280:
  struct std__basic_ostream_char__std__char_traits_char__* __os281;
  struct std__basic_ostream_char__std__char_traits_char__* __retval282;
  __os281 = v279;
  struct std__basic_ostream_char__std__char_traits_char__* t283 = __os281;
  struct std__basic_ostream_char__std__char_traits_char__* r284 = std__ostream__flush(t283);
  __retval282 = r284;
  struct std__basic_ostream_char__std__char_traits_char__* t285 = __retval282;
  return t285;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v286) {
bb287:
  struct std__ctype_char_* __f288;
  struct std__ctype_char_* __retval289;
  __f288 = v286;
    struct std__ctype_char_* t290 = __f288;
    _Bool cast291 = (_Bool)t290;
    _Bool u292 = !cast291;
    if (u292) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t293 = __f288;
  __retval289 = t293;
  struct std__ctype_char_* t294 = __retval289;
  return t294;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v295, char v296) {
bb297:
  struct std__ctype_char_* this298;
  char __c299;
  char __retval300;
  this298 = v295;
  __c299 = v296;
  struct std__ctype_char_* t301 = this298;
    char t302 = t301->_M_widen_ok;
    _Bool cast303 = (_Bool)t302;
    if (cast303) {
      char t304 = __c299;
      unsigned char cast305 = (unsigned char)t304;
      unsigned long cast306 = (unsigned long)cast305;
      char t307 = t301->_M_widen[cast306];
      __retval300 = t307;
      char t308 = __retval300;
      return t308;
    }
  std__ctype_char____M_widen_init___const(t301);
  char t309 = __c299;
  void** v310 = (void**)t301;
  void* v311 = *((void**)v310);
  char vcall314 = (char)__VERIFIER_virtual_call_char_char(t301, 6, t309);
  __retval300 = vcall314;
  char t315 = __retval300;
  return t315;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v316, char v317) {
bb318:
  struct std__basic_ios_char__std__char_traits_char__* this319;
  char __c320;
  char __retval321;
  this319 = v316;
  __c320 = v317;
  struct std__basic_ios_char__std__char_traits_char__* t322 = this319;
  struct std__ctype_char_* t323 = t322->_M_ctype;
  struct std__ctype_char_* r324 = std__ctype_char__const__std____check_facet_std__ctype_char___(t323);
  char t325 = __c320;
  char r326 = std__ctype_char___widen_char__const(r324, t325);
  __retval321 = r326;
  char t327 = __retval321;
  return t327;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v328) {
bb329:
  struct std__basic_ostream_char__std__char_traits_char__* __os330;
  struct std__basic_ostream_char__std__char_traits_char__* __retval331;
  __os330 = v328;
  struct std__basic_ostream_char__std__char_traits_char__* t332 = __os330;
  struct std__basic_ostream_char__std__char_traits_char__* t333 = __os330;
  void** v334 = (void**)t333;
  void* v335 = *((void**)v334);
  unsigned char* cast336 = (unsigned char*)v335;
  long c337 = -24;
  unsigned char* ptr338 = &(cast336)[c337];
  long* cast339 = (long*)ptr338;
  long t340 = *cast339;
  unsigned char* cast341 = (unsigned char*)t333;
  unsigned char* ptr342 = &(cast341)[t340];
  struct std__basic_ostream_char__std__char_traits_char__* cast343 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr342;
  struct std__basic_ios_char__std__char_traits_char__* cast344 = (struct std__basic_ios_char__std__char_traits_char__*)cast343;
  char c345 = 10;
  char r346 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast344, c345);
  struct std__basic_ostream_char__std__char_traits_char__* r347 = std__ostream__put(t332, r346);
  struct std__basic_ostream_char__std__char_traits_char__* r348 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r347);
  __retval331 = r348;
  struct std__basic_ostream_char__std__char_traits_char__* t349 = __retval331;
  return t349;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v350) {
bb351:
  struct std__vector_int__std__allocator_int__* this352;
  this352 = v350;
  struct std__vector_int__std__allocator_int__* t353 = this352;
    struct std___Vector_base_int__std__allocator_int__* base354 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t353 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base355 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base354->_M_impl) + 0);
    int* t356 = base355->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base357 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t353 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base358 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base357->_M_impl) + 0);
    int* t359 = base358->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base360 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t353 + 0);
    struct std__allocator_int_* r361 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base360);
    void_std___Destroy_int___int_(t356, t359, r361);
  {
    struct std___Vector_base_int__std__allocator_int__* base362 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t353 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base362);
  }
  return;
}

// function: main
int main() {
bb363:
  int __retval364;
  struct std__vector_int__std__allocator_int__ myvector365;
  int ref_tmp0366;
  struct std__allocator_int_ ref_tmp1367;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0368;
  int ref_tmp2369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3371;
  int ref_tmp4372;
  int c373 = 0;
  __retval364 = c373;
  unsigned long c374 = 8;
  int c375 = 10;
  ref_tmp0366 = c375;
  std__allocator_int___allocator_2(&ref_tmp1367);
    std__vector_int__std__allocator_int_____vector(&myvector365, c374, &ref_tmp0366, &ref_tmp1367);
  {
    std__allocator_int____allocator(&ref_tmp1367);
  }
    unsigned long c376 = 3;
    int* r377 = std__vector_int__std__allocator_int_____operator__(&myvector365, c376);
    int t378 = *r377;
    int c379 = 10;
    _Bool c380 = ((t378 == c379)) ? 1 : 0;
    if (c380) {
    } else {
      char* cast381 = (char*)&(_str);
      char* c382 = _str_1;
      unsigned int c383 = 22;
      char* cast384 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast381, c382, c383, cast384);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r385 = std__vector_int__std__allocator_int_____begin(&myvector365);
    agg_tmp0368 = r385;
    int c386 = 4;
    int c387 = 20;
    ref_tmp2369 = c387;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t388 = agg_tmp0368;
    void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t388, c386, &ref_tmp2369);
    unsigned long c389 = 3;
    int* r390 = std__vector_int__std__allocator_int_____operator__(&myvector365, c389);
    int t391 = *r390;
    int c392 = 20;
    _Bool c393 = ((t391 == c392)) ? 1 : 0;
    if (c393) {
    } else {
      char* cast394 = (char*)&(_str_2);
      char* c395 = _str_1;
      unsigned int c396 = 24;
      char* cast397 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast394, c395, c396, cast397);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r398 = std__vector_int__std__allocator_int_____begin(&myvector365);
    ref_tmp3371 = r398;
    long c399 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r400 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp3371, c399);
    agg_tmp1370 = r400;
    int c401 = 3;
    int c402 = 33;
    ref_tmp4372 = c402;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t403 = agg_tmp1370;
    void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t403, c401, &ref_tmp4372);
    unsigned long c404 = 3;
    int* r405 = std__vector_int__std__allocator_int_____operator__(&myvector365, c404);
    int t406 = *r405;
    int c407 = 33;
    _Bool c408 = ((t406 != c407)) ? 1 : 0;
    if (c408) {
    } else {
      char* cast409 = (char*)&(_str_3);
      char* c410 = _str_1;
      unsigned int c411 = 26;
      char* cast412 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast409, c410, c411, cast412);
    }
    char* cast413 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r414 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast413);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it415;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp5416;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r417 = std__vector_int__std__allocator_int_____begin(&myvector365);
      it415 = r417;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r419 = std__vector_int__std__allocator_int_____end(&myvector365);
        ref_tmp5416 = r419;
        _Bool r420 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it415, &ref_tmp5416);
        _Bool u421 = !r420;
        if (!u421) break;
        char* cast422 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r423 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast422);
        int* r424 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it415);
        int t425 = *r424;
        struct std__basic_ostream_char__std__char_traits_char__* r426 = std__ostream__operator__(r423, t425);
      for_step418: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r427 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it415);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r428 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c429 = 0;
    __retval364 = c429;
    int t430 = __retval364;
    int ret_val431 = t430;
    {
      std__vector_int__std__allocator_int______vector(&myvector365);
    }
    return ret_val431;
  int t432 = __retval364;
  return t432;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v433) {
bb434:
  struct std____new_allocator_int_* this435;
  this435 = v433;
  struct std____new_allocator_int_* t436 = this435;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v437, unsigned long* v438) {
bb439:
  unsigned long* __a440;
  unsigned long* __b441;
  unsigned long* __retval442;
  __a440 = v437;
  __b441 = v438;
    unsigned long* t443 = __b441;
    unsigned long t444 = *t443;
    unsigned long* t445 = __a440;
    unsigned long t446 = *t445;
    _Bool c447 = ((t444 < t446)) ? 1 : 0;
    if (c447) {
      unsigned long* t448 = __b441;
      __retval442 = t448;
      unsigned long* t449 = __retval442;
      return t449;
    }
  unsigned long* t450 = __a440;
  __retval442 = t450;
  unsigned long* t451 = __retval442;
  return t451;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v452) {
bb453:
  struct std__allocator_int_* __a454;
  unsigned long __retval455;
  unsigned long __diffmax456;
  unsigned long __allocmax457;
  __a454 = v452;
  unsigned long c458 = 2305843009213693951;
  __diffmax456 = c458;
  unsigned long c459 = 4611686018427387903;
  __allocmax457 = c459;
  unsigned long* r460 = unsigned_long_const__std__min_unsigned_long_(&__diffmax456, &__allocmax457);
  unsigned long t461 = *r460;
  __retval455 = t461;
  unsigned long t462 = __retval455;
  return t462;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v463, struct std__allocator_int_* v464) {
bb465:
  struct std__allocator_int_* this466;
  struct std__allocator_int_* __a467;
  this466 = v463;
  __a467 = v464;
  struct std__allocator_int_* t468 = this466;
  struct std____new_allocator_int_* base469 = (struct std____new_allocator_int_*)((char *)t468 + 0);
  struct std__allocator_int_* t470 = __a467;
  struct std____new_allocator_int_* base471 = (struct std____new_allocator_int_*)((char *)t470 + 0);
  std____new_allocator_int_____new_allocator(base469, base471);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v472, struct std__allocator_int_* v473) {
bb474:
  unsigned long __n475;
  struct std__allocator_int_* __a476;
  unsigned long __retval477;
  __n475 = v472;
  __a476 = v473;
    struct std__allocator_int_ ref_tmp0478;
    _Bool tmp_exprcleanup479;
    unsigned long t480 = __n475;
    struct std__allocator_int_* t481 = __a476;
    std__allocator_int___allocator(&ref_tmp0478, t481);
      unsigned long r482 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0478);
      _Bool c483 = ((t480 > r482)) ? 1 : 0;
      tmp_exprcleanup479 = c483;
    {
      std__allocator_int____allocator(&ref_tmp0478);
    }
    _Bool t484 = tmp_exprcleanup479;
    if (t484) {
      char* cast485 = (char*)&(_str_6);
      std____throw_length_error(cast485);
    }
  unsigned long t486 = __n475;
  __retval477 = t486;
  unsigned long t487 = __retval477;
  return t487;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v488, struct std__allocator_int_* v489) {
bb490:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this491;
  struct std__allocator_int_* __a492;
  this491 = v488;
  __a492 = v489;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t493 = this491;
  struct std__allocator_int_* base494 = (struct std__allocator_int_*)((char *)t493 + 0);
  struct std__allocator_int_* t495 = __a492;
  std__allocator_int___allocator(base494, t495);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base496 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t493 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base496);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb497:
  _Bool __retval498;
    _Bool c499 = 0;
    __retval498 = c499;
    _Bool t500 = __retval498;
    return t500;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v501) {
bb502:
  struct std____new_allocator_int_* this503;
  unsigned long __retval504;
  this503 = v501;
  struct std____new_allocator_int_* t505 = this503;
  unsigned long c506 = 9223372036854775807;
  unsigned long c507 = 4;
  unsigned long b508 = c506 / c507;
  __retval504 = b508;
  unsigned long t509 = __retval504;
  return t509;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v510, unsigned long v511, void* v512) {
bb513:
  struct std____new_allocator_int_* this514;
  unsigned long __n515;
  void* unnamed516;
  int* __retval517;
  this514 = v510;
  __n515 = v511;
  unnamed516 = v512;
  struct std____new_allocator_int_* t518 = this514;
    unsigned long t519 = __n515;
    unsigned long r520 = std____new_allocator_int____M_max_size___const(t518);
    _Bool c521 = ((t519 > r520)) ? 1 : 0;
    if (c521) {
        unsigned long t522 = __n515;
        unsigned long c523 = -1;
        unsigned long c524 = 4;
        unsigned long b525 = c523 / c524;
        _Bool c526 = ((t522 > b525)) ? 1 : 0;
        if (c526) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c527 = 4;
    unsigned long c528 = 16;
    _Bool c529 = ((c527 > c528)) ? 1 : 0;
    if (c529) {
      unsigned long __al530;
      unsigned long c531 = 4;
      __al530 = c531;
      unsigned long t532 = __n515;
      unsigned long c533 = 4;
      unsigned long b534 = t532 * c533;
      unsigned long t535 = __al530;
      void* r536 = operator_new_2(b534, t535);
      int* cast537 = (int*)r536;
      __retval517 = cast537;
      int* t538 = __retval517;
      return t538;
    }
  unsigned long t539 = __n515;
  unsigned long c540 = 4;
  unsigned long b541 = t539 * c540;
  void* r542 = operator_new(b541);
  int* cast543 = (int*)r542;
  __retval517 = cast543;
  int* t544 = __retval517;
  return t544;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v545, unsigned long v546) {
bb547:
  struct std__allocator_int_* this548;
  unsigned long __n549;
  int* __retval550;
  this548 = v545;
  __n549 = v546;
  struct std__allocator_int_* t551 = this548;
    _Bool r552 = std____is_constant_evaluated();
    if (r552) {
        unsigned long t553 = __n549;
        unsigned long c554 = 4;
        unsigned long ovr555;
        _Bool ovf556 = __builtin_mul_overflow(t553, c554, &ovr555);
        __n549 = ovr555;
        if (ovf556) {
          std____throw_bad_array_new_length();
        }
      unsigned long t557 = __n549;
      void* r558 = operator_new(t557);
      int* cast559 = (int*)r558;
      __retval550 = cast559;
      int* t560 = __retval550;
      return t560;
    }
  struct std____new_allocator_int_* base561 = (struct std____new_allocator_int_*)((char *)t551 + 0);
  unsigned long t562 = __n549;
  void* c563 = ((void*)0);
  int* r564 = std____new_allocator_int___allocate(base561, t562, c563);
  __retval550 = r564;
  int* t565 = __retval550;
  return t565;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v566, unsigned long v567) {
bb568:
  struct std__allocator_int_* __a569;
  unsigned long __n570;
  int* __retval571;
  __a569 = v566;
  __n570 = v567;
  struct std__allocator_int_* t572 = __a569;
  unsigned long t573 = __n570;
  int* r574 = std__allocator_int___allocate(t572, t573);
  __retval571 = r574;
  int* t575 = __retval571;
  return t575;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v576, unsigned long v577) {
bb578:
  struct std___Vector_base_int__std__allocator_int__* this579;
  unsigned long __n580;
  int* __retval581;
  this579 = v576;
  __n580 = v577;
  struct std___Vector_base_int__std__allocator_int__* t582 = this579;
  unsigned long t583 = __n580;
  unsigned long c584 = 0;
  _Bool c585 = ((t583 != c584)) ? 1 : 0;
  int* ternary586;
  if (c585) {
    struct std__allocator_int_* base587 = (struct std__allocator_int_*)((char *)&(t582->_M_impl) + 0);
    unsigned long t588 = __n580;
    int* r589 = std__allocator_traits_std__allocator_int_____allocate(base587, t588);
    ternary586 = (int*)r589;
  } else {
    int* c590 = ((void*)0);
    ternary586 = (int*)c590;
  }
  __retval581 = ternary586;
  int* t591 = __retval581;
  return t591;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v592, unsigned long v593) {
bb594:
  struct std___Vector_base_int__std__allocator_int__* this595;
  unsigned long __n596;
  this595 = v592;
  __n596 = v593;
  struct std___Vector_base_int__std__allocator_int__* t597 = this595;
  unsigned long t598 = __n596;
  int* r599 = std___Vector_base_int__std__allocator_int______M_allocate(t597, t598);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base600 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t597->_M_impl) + 0);
  base600->_M_start = r599;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base601 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t597->_M_impl) + 0);
  int* t602 = base601->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base603 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t597->_M_impl) + 0);
  base603->_M_finish = t602;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base604 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t597->_M_impl) + 0);
  int* t605 = base604->_M_start;
  unsigned long t606 = __n596;
  int* ptr607 = &(t605)[t606];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base608 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t597->_M_impl) + 0);
  base608->_M_end_of_storage = ptr607;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v609) {
bb610:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this611;
  this611 = v609;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t612 = this611;
  {
    struct std__allocator_int_* base613 = (struct std__allocator_int_*)((char *)t612 + 0);
    std__allocator_int____allocator(base613);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v614, unsigned long v615, struct std__allocator_int_* v616) {
bb617:
  struct std___Vector_base_int__std__allocator_int__* this618;
  unsigned long __n619;
  struct std__allocator_int_* __a620;
  this618 = v614;
  __n619 = v615;
  __a620 = v616;
  struct std___Vector_base_int__std__allocator_int__* t621 = this618;
  struct std__allocator_int_* t622 = __a620;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t621->_M_impl, t622);
    unsigned long t623 = __n619;
    std___Vector_base_int__std__allocator_int______M_create_storage(t621, t623);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb624:
  _Bool __retval625;
    _Bool c626 = 0;
    __retval625 = c626;
    _Bool t627 = __retval625;
    return t627;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v628, int** v629) {
bb630:
  struct std___UninitDestroyGuard_int____void_* this631;
  int** __first632;
  this631 = v628;
  __first632 = v629;
  struct std___UninitDestroyGuard_int____void_* t633 = this631;
  int** t634 = __first632;
  int* t635 = *t634;
  t633->_M_first = t635;
  int** t636 = __first632;
  t633->_M_cur = t636;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v637, int* v638) {
bb639:
  int* __location640;
  int* __args641;
  int* __retval642;
  void* __loc643;
  __location640 = v637;
  __args641 = v638;
  int* t644 = __location640;
  void* cast645 = (void*)t644;
  __loc643 = cast645;
    void* t646 = __loc643;
    int* cast647 = (int*)t646;
    int* t648 = __args641;
    int t649 = *t648;
    *cast647 = t649;
    __retval642 = cast647;
    int* t650 = __retval642;
    return t650;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v651, int* v652) {
bb653:
  int* __p654;
  int* __args655;
  __p654 = v651;
  __args655 = v652;
    _Bool r656 = std____is_constant_evaluated();
    if (r656) {
      int* t657 = __p654;
      int* t658 = __args655;
      int* r659 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t657, t658);
      return;
    }
  int* t660 = __p654;
  void* cast661 = (void*)t660;
  int* cast662 = (int*)cast661;
  int* t663 = __args655;
  int t664 = *t663;
  *cast662 = t664;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v665) {
bb666:
  struct std___UninitDestroyGuard_int____void_* this667;
  this667 = v665;
  struct std___UninitDestroyGuard_int____void_* t668 = this667;
  int** c669 = ((void*)0);
  t668->_M_cur = c669;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v670) {
bb671:
  struct std___UninitDestroyGuard_int____void_* this672;
  this672 = v670;
  struct std___UninitDestroyGuard_int____void_* t673 = this672;
    int** t674 = t673->_M_cur;
    int** c675 = ((void*)0);
    _Bool c676 = ((t674 != c675)) ? 1 : 0;
    if (c676) {
      int* t677 = t673->_M_first;
      int** t678 = t673->_M_cur;
      int* t679 = *t678;
      void_std___Destroy_int__(t677, t679);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v680, unsigned long v681, int* v682) {
bb683:
  int* __first684;
  unsigned long __n685;
  int* __x686;
  int* __retval687;
  struct std___UninitDestroyGuard_int____void_ __guard688;
  __first684 = v680;
  __n685 = v681;
  __x686 = v682;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard688, &__first684);
        do {
              unsigned long t689 = __n685;
              unsigned long c690 = 0;
              _Bool c691 = ((t689 >= c690)) ? 1 : 0;
              _Bool u692 = !c691;
              if (u692) {
                char* cast693 = (char*)&(_str_7);
                int c694 = 463;
                char* cast695 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast696 = (char*)&(_str_8);
                std____glibcxx_assert_fail(cast693, c694, cast695, cast696);
              }
          _Bool c697 = 0;
          if (!c697) break;
        } while (1);
      while (1) {
        unsigned long t699 = __n685;
        unsigned long u700 = t699 - 1;
        __n685 = u700;
        _Bool cast701 = (_Bool)t699;
        if (!cast701) break;
        int* t702 = __first684;
        int* t703 = __x686;
        void_std___Construct_int__int_const__(t702, t703);
      for_step698: ;
        int* t704 = __first684;
        int c705 = 1;
        int* ptr706 = &(t704)[c705];
        __first684 = ptr706;
      }
    std___UninitDestroyGuard_int___void___release(&__guard688);
    int* t707 = __first684;
    __retval687 = t707;
    int* t708 = __retval687;
    int* ret_val709 = t708;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard688);
    }
    return ret_val709;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v710, unsigned long v711, int* v712) {
bb713:
  int* __first714;
  unsigned long __n715;
  int* __x716;
  int* __retval717;
  __first714 = v710;
  __n715 = v711;
  __x716 = v712;
  int* t718 = __first714;
  unsigned long t719 = __n715;
  int* t720 = __x716;
  int* r721 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t718, t719, t720);
  __retval717 = r721;
  int* t722 = __retval717;
  return t722;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v723, unsigned long v724, int* v725, struct std__allocator_int_* v726) {
bb727:
  int* __first728;
  unsigned long __n729;
  int* __x730;
  struct std__allocator_int_* unnamed731;
  int* __retval732;
  __first728 = v723;
  __n729 = v724;
  __x730 = v725;
  unnamed731 = v726;
    _Bool r733 = std__is_constant_evaluated();
    if (r733) {
      int* t734 = __first728;
      unsigned long t735 = __n729;
      int* t736 = __x730;
      int* r737 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t734, t735, t736);
      __retval732 = r737;
      int* t738 = __retval732;
      return t738;
    }
  int* t739 = __first728;
  unsigned long t740 = __n729;
  int* t741 = __x730;
  int* r742 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t739, t740, t741);
  __retval732 = r742;
  int* t743 = __retval732;
  return t743;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v744) {
bb745:
  struct std___Vector_base_int__std__allocator_int__* this746;
  struct std__allocator_int_* __retval747;
  this746 = v744;
  struct std___Vector_base_int__std__allocator_int__* t748 = this746;
  struct std__allocator_int_* base749 = (struct std__allocator_int_*)((char *)&(t748->_M_impl) + 0);
  __retval747 = base749;
  struct std__allocator_int_* t750 = __retval747;
  return t750;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v751, unsigned long v752, int* v753) {
bb754:
  struct std__vector_int__std__allocator_int__* this755;
  unsigned long __n756;
  int* __value757;
  this755 = v751;
  __n756 = v752;
  __value757 = v753;
  struct std__vector_int__std__allocator_int__* t758 = this755;
  struct std___Vector_base_int__std__allocator_int__* base759 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t758 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base760 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base759->_M_impl) + 0);
  int* t761 = base760->_M_start;
  unsigned long t762 = __n756;
  int* t763 = __value757;
  struct std___Vector_base_int__std__allocator_int__* base764 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t758 + 0);
  struct std__allocator_int_* r765 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base764);
  int* r766 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t761, t762, t763, r765);
  struct std___Vector_base_int__std__allocator_int__* base767 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t758 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base768 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base767->_M_impl) + 0);
  base768->_M_finish = r766;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v769, int* v770, unsigned long v771) {
bb772:
  struct std____new_allocator_int_* this773;
  int* __p774;
  unsigned long __n775;
  this773 = v769;
  __p774 = v770;
  __n775 = v771;
  struct std____new_allocator_int_* t776 = this773;
    unsigned long c777 = 4;
    unsigned long c778 = 16;
    _Bool c779 = ((c777 > c778)) ? 1 : 0;
    if (c779) {
      int* t780 = __p774;
      void* cast781 = (void*)t780;
      unsigned long t782 = __n775;
      unsigned long c783 = 4;
      unsigned long b784 = t782 * c783;
      unsigned long c785 = 4;
      operator_delete_3(cast781, b784, c785);
      return;
    }
  int* t786 = __p774;
  void* cast787 = (void*)t786;
  unsigned long t788 = __n775;
  unsigned long c789 = 4;
  unsigned long b790 = t788 * c789;
  operator_delete_2(cast787, b790);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v791, int* v792, unsigned long v793) {
bb794:
  struct std__allocator_int_* this795;
  int* __p796;
  unsigned long __n797;
  this795 = v791;
  __p796 = v792;
  __n797 = v793;
  struct std__allocator_int_* t798 = this795;
    _Bool r799 = std____is_constant_evaluated();
    if (r799) {
      int* t800 = __p796;
      void* cast801 = (void*)t800;
      operator_delete(cast801);
      return;
    }
  struct std____new_allocator_int_* base802 = (struct std____new_allocator_int_*)((char *)t798 + 0);
  int* t803 = __p796;
  unsigned long t804 = __n797;
  std____new_allocator_int___deallocate(base802, t803, t804);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v805, int* v806, unsigned long v807) {
bb808:
  struct std__allocator_int_* __a809;
  int* __p810;
  unsigned long __n811;
  __a809 = v805;
  __p810 = v806;
  __n811 = v807;
  struct std__allocator_int_* t812 = __a809;
  int* t813 = __p810;
  unsigned long t814 = __n811;
  std__allocator_int___deallocate(t812, t813, t814);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v815, int* v816, unsigned long v817) {
bb818:
  struct std___Vector_base_int__std__allocator_int__* this819;
  int* __p820;
  unsigned long __n821;
  this819 = v815;
  __p820 = v816;
  __n821 = v817;
  struct std___Vector_base_int__std__allocator_int__* t822 = this819;
    int* t823 = __p820;
    _Bool cast824 = (_Bool)t823;
    if (cast824) {
      struct std__allocator_int_* base825 = (struct std__allocator_int_*)((char *)&(t822->_M_impl) + 0);
      int* t826 = __p820;
      unsigned long t827 = __n821;
      std__allocator_traits_std__allocator_int_____deallocate(base825, t826, t827);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v828) {
bb829:
  struct std___Vector_base_int__std__allocator_int__* this830;
  this830 = v828;
  struct std___Vector_base_int__std__allocator_int__* t831 = this830;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base832 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t831->_M_impl) + 0);
    int* t833 = base832->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base834 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t831->_M_impl) + 0);
    int* t835 = base834->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base836 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t831->_M_impl) + 0);
    int* t837 = base836->_M_start;
    long diff838 = t835 - t837;
    unsigned long cast839 = (unsigned long)diff838;
    std___Vector_base_int__std__allocator_int______M_deallocate(t831, t833, cast839);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t831->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v840, struct std____new_allocator_int_* v841) {
bb842:
  struct std____new_allocator_int_* this843;
  struct std____new_allocator_int_* unnamed844;
  this843 = v840;
  unnamed844 = v841;
  struct std____new_allocator_int_* t845 = this843;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v846) {
bb847:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this848;
  this848 = v846;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t849 = this848;
  int* c850 = ((void*)0);
  t849->_M_start = c850;
  int* c851 = ((void*)0);
  t849->_M_finish = c851;
  int* c852 = ((void*)0);
  t849->_M_end_of_storage = c852;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v853) {
bb854:
  int* __location855;
  __location855 = v853;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v856, int* v857) {
bb858:
  int* __first859;
  int* __last860;
  __first859 = v856;
  __last860 = v857;
      _Bool r861 = std____is_constant_evaluated();
      if (r861) {
          while (1) {
            int* t863 = __first859;
            int* t864 = __last860;
            _Bool c865 = ((t863 != t864)) ? 1 : 0;
            if (!c865) break;
            int* t866 = __first859;
            void_std__destroy_at_int_(t866);
          for_step862: ;
            int* t867 = __first859;
            int c868 = 1;
            int* ptr869 = &(t867)[c868];
            __first859 = ptr869;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v870, int* v871, struct std__allocator_int_* v872) {
bb873:
  int* __first874;
  int* __last875;
  struct std__allocator_int_* unnamed876;
  __first874 = v870;
  __last875 = v871;
  unnamed876 = v872;
  int* t877 = __first874;
  int* t878 = __last875;
  void_std___Destroy_int__(t877, t878);
  return;
}

