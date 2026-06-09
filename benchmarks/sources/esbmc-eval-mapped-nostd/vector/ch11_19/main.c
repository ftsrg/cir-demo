extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v23) {
bb24:
  struct std__vector_int__std__allocator_int__* this25;
  unsigned long __retval26;
  long __dif27;
  this25 = v23;
  struct std__vector_int__std__allocator_int__* t28 = this25;
  struct std___Vector_base_int__std__allocator_int__* base29 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t28 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base30 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base29->_M_impl) + 0);
  int* t31 = base30->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base32 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t28 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base33 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base32->_M_impl) + 0);
  int* t34 = base33->_M_start;
  long diff35 = t31 - t34;
  __dif27 = diff35;
    long t36 = __dif27;
    long c37 = 0;
    _Bool c38 = ((t36 < c37)) ? 1 : 0;
    if (c38) {
      __builtin_unreachable();
    }
  long t39 = __dif27;
  unsigned long cast40 = (unsigned long)t39;
  __retval26 = cast40;
  unsigned long t41 = __retval26;
  return t41;
}

// function: _ZNKSt6vectorIiSaIiEE14_M_range_checkEm
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* v42, unsigned long v43) {
bb44:
  struct std__vector_int__std__allocator_int__* this45;
  unsigned long __n46;
  this45 = v42;
  __n46 = v43;
  struct std__vector_int__std__allocator_int__* t47 = this45;
    unsigned long t48 = __n46;
    unsigned long r49 = std__vector_int__std__allocator_int_____size___const(t47);
    _Bool c50 = ((t48 >= r49)) ? 1 : 0;
    if (c50) {
      char* cast51 = (char*)&(_str_3);
      unsigned long t52 = __n46;
      unsigned long r53 = std__vector_int__std__allocator_int_____size___const(t47);
      std____throw_out_of_range_fmt(cast51, t52, r53);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v54, unsigned long v55) {
bb56:
  struct std__vector_int__std__allocator_int__* this57;
  unsigned long __n58;
  int* __retval59;
  this57 = v54;
  __n58 = v55;
  struct std__vector_int__std__allocator_int__* t60 = this57;
    do {
          unsigned long t61 = __n58;
          unsigned long r62 = std__vector_int__std__allocator_int_____size___const(t60);
          _Bool c63 = ((t61 < r62)) ? 1 : 0;
          _Bool u64 = !c63;
          if (u64) {
            char* cast65 = (char*)&(_str_4);
            int c66 = 1263;
            char* cast67 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast68 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast65, c66, cast67, cast68);
          }
      _Bool c69 = 0;
      if (!c69) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base70 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t60 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base71 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base70->_M_impl) + 0);
  int* t72 = base71->_M_start;
  unsigned long t73 = __n58;
  int* ptr74 = &(t72)[t73];
  __retval59 = ptr74;
  int* t75 = __retval59;
  return t75;
}

// function: _ZNSt6vectorIiSaIiEE2atEm
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* v76, unsigned long v77) {
bb78:
  struct std__vector_int__std__allocator_int__* this79;
  unsigned long __n80;
  int* __retval81;
  this79 = v76;
  __n80 = v77;
  struct std__vector_int__std__allocator_int__* t82 = this79;
  unsigned long t83 = __n80;
  std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(t82, t83);
  unsigned long t84 = __n80;
  int* r85 = std__vector_int__std__allocator_int_____operator__(t82, t84);
  __retval81 = r85;
  int* t86 = __retval81;
  return t86;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v87, int v88) {
bb89:
  int __a90;
  int __b91;
  int __retval92;
  __a90 = v87;
  __b91 = v88;
  int t93 = __a90;
  int t94 = __b91;
  int b95 = t93 | t94;
  __retval92 = b95;
  int t96 = __retval92;
  return t96;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v97) {
bb98:
  struct std__basic_ios_char__std__char_traits_char__* this99;
  int __retval100;
  this99 = v97;
  struct std__basic_ios_char__std__char_traits_char__* t101 = this99;
  struct std__ios_base* base102 = (struct std__ios_base*)((char *)t101 + 0);
  int t103 = base102->_M_streambuf_state;
  __retval100 = t103;
  int t104 = __retval100;
  return t104;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v105, int v106) {
bb107:
  struct std__basic_ios_char__std__char_traits_char__* this108;
  int __state109;
  this108 = v105;
  __state109 = v106;
  struct std__basic_ios_char__std__char_traits_char__* t110 = this108;
  int r111 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t110);
  int t112 = __state109;
  int r113 = std__operator_(r111, t112);
  std__basic_ios_char__std__char_traits_char_____clear(t110, r113);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v114, char* v115) {
bb116:
  char* __c1117;
  char* __c2118;
  _Bool __retval119;
  __c1117 = v114;
  __c2118 = v115;
  char* t120 = __c1117;
  char t121 = *t120;
  int cast122 = (int)t121;
  char* t123 = __c2118;
  char t124 = *t123;
  int cast125 = (int)t124;
  _Bool c126 = ((cast122 == cast125)) ? 1 : 0;
  __retval119 = c126;
  _Bool t127 = __retval119;
  return t127;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v128) {
bb129:
  char* __p130;
  unsigned long __retval131;
  unsigned long __i132;
  __p130 = v128;
  unsigned long c133 = 0;
  __i132 = c133;
    char ref_tmp0134;
    while (1) {
      unsigned long t135 = __i132;
      char* t136 = __p130;
      char* ptr137 = &(t136)[t135];
      char c138 = 0;
      ref_tmp0134 = c138;
      _Bool r139 = __gnu_cxx__char_traits_char___eq(ptr137, &ref_tmp0134);
      _Bool u140 = !r139;
      if (!u140) break;
      unsigned long t141 = __i132;
      unsigned long u142 = t141 + 1;
      __i132 = u142;
    }
  unsigned long t143 = __i132;
  __retval131 = t143;
  unsigned long t144 = __retval131;
  return t144;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v145) {
bb146:
  char* __s147;
  unsigned long __retval148;
  __s147 = v145;
    _Bool r149 = std____is_constant_evaluated();
    if (r149) {
      char* t150 = __s147;
      unsigned long r151 = __gnu_cxx__char_traits_char___length(t150);
      __retval148 = r151;
      unsigned long t152 = __retval148;
      return t152;
    }
  char* t153 = __s147;
  unsigned long r154 = strlen(t153);
  __retval148 = r154;
  unsigned long t155 = __retval148;
  return t155;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v156, char* v157) {
bb158:
  struct std__basic_ostream_char__std__char_traits_char__* __out159;
  char* __s160;
  struct std__basic_ostream_char__std__char_traits_char__* __retval161;
  __out159 = v156;
  __s160 = v157;
    char* t162 = __s160;
    _Bool cast163 = (_Bool)t162;
    _Bool u164 = !cast163;
    if (u164) {
      struct std__basic_ostream_char__std__char_traits_char__* t165 = __out159;
      void** v166 = (void**)t165;
      void* v167 = *((void**)v166);
      unsigned char* cast168 = (unsigned char*)v167;
      long c169 = -24;
      unsigned char* ptr170 = &(cast168)[c169];
      long* cast171 = (long*)ptr170;
      long t172 = *cast171;
      unsigned char* cast173 = (unsigned char*)t165;
      unsigned char* ptr174 = &(cast173)[t172];
      struct std__basic_ostream_char__std__char_traits_char__* cast175 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr174;
      struct std__basic_ios_char__std__char_traits_char__* cast176 = (struct std__basic_ios_char__std__char_traits_char__*)cast175;
      int t177 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast176, t177);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t178 = __out159;
      char* t179 = __s160;
      char* t180 = __s160;
      unsigned long r181 = std__char_traits_char___length(t180);
      long cast182 = (long)r181;
      struct std__basic_ostream_char__std__char_traits_char__* r183 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t178, t179, cast182);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __out159;
  __retval161 = t184;
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __retval161;
  return t185;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v186, void* v187) {
bb188:
  struct std__basic_ostream_char__std__char_traits_char__* this189;
  void* __pf190;
  struct std__basic_ostream_char__std__char_traits_char__* __retval191;
  this189 = v186;
  __pf190 = v187;
  struct std__basic_ostream_char__std__char_traits_char__* t192 = this189;
  void* t193 = __pf190;
  struct std__basic_ostream_char__std__char_traits_char__* r194 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t193)(t192);
  __retval191 = r194;
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __retval191;
  return t195;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v196) {
bb197:
  struct std__basic_ostream_char__std__char_traits_char__* __os198;
  struct std__basic_ostream_char__std__char_traits_char__* __retval199;
  __os198 = v196;
  struct std__basic_ostream_char__std__char_traits_char__* t200 = __os198;
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__flush(t200);
  __retval199 = r201;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __retval199;
  return t202;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v203) {
bb204:
  struct std__ctype_char_* __f205;
  struct std__ctype_char_* __retval206;
  __f205 = v203;
    struct std__ctype_char_* t207 = __f205;
    _Bool cast208 = (_Bool)t207;
    _Bool u209 = !cast208;
    if (u209) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t210 = __f205;
  __retval206 = t210;
  struct std__ctype_char_* t211 = __retval206;
  return t211;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v212, char v213) {
bb214:
  struct std__ctype_char_* this215;
  char __c216;
  char __retval217;
  this215 = v212;
  __c216 = v213;
  struct std__ctype_char_* t218 = this215;
    char t219 = t218->_M_widen_ok;
    _Bool cast220 = (_Bool)t219;
    if (cast220) {
      char t221 = __c216;
      unsigned char cast222 = (unsigned char)t221;
      unsigned long cast223 = (unsigned long)cast222;
      char t224 = t218->_M_widen[cast223];
      __retval217 = t224;
      char t225 = __retval217;
      return t225;
    }
  std__ctype_char____M_widen_init___const(t218);
  char t226 = __c216;
  void** v227 = (void**)t218;
  void* v228 = *((void**)v227);
  char vcall231 = (char)__VERIFIER_virtual_call_char_char(t218, 6, t226);
  __retval217 = vcall231;
  char t232 = __retval217;
  return t232;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v233, char v234) {
bb235:
  struct std__basic_ios_char__std__char_traits_char__* this236;
  char __c237;
  char __retval238;
  this236 = v233;
  __c237 = v234;
  struct std__basic_ios_char__std__char_traits_char__* t239 = this236;
  struct std__ctype_char_* t240 = t239->_M_ctype;
  struct std__ctype_char_* r241 = std__ctype_char__const__std____check_facet_std__ctype_char___(t240);
  char t242 = __c237;
  char r243 = std__ctype_char___widen_char__const(r241, t242);
  __retval238 = r243;
  char t244 = __retval238;
  return t244;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v245) {
bb246:
  struct std__basic_ostream_char__std__char_traits_char__* __os247;
  struct std__basic_ostream_char__std__char_traits_char__* __retval248;
  __os247 = v245;
  struct std__basic_ostream_char__std__char_traits_char__* t249 = __os247;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __os247;
  void** v251 = (void**)t250;
  void* v252 = *((void**)v251);
  unsigned char* cast253 = (unsigned char*)v252;
  long c254 = -24;
  unsigned char* ptr255 = &(cast253)[c254];
  long* cast256 = (long*)ptr255;
  long t257 = *cast256;
  unsigned char* cast258 = (unsigned char*)t250;
  unsigned char* ptr259 = &(cast258)[t257];
  struct std__basic_ostream_char__std__char_traits_char__* cast260 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr259;
  struct std__basic_ios_char__std__char_traits_char__* cast261 = (struct std__basic_ios_char__std__char_traits_char__*)cast260;
  char c262 = 10;
  char r263 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast261, c262);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__ostream__put(t249, r263);
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r264);
  __retval248 = r265;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __retval248;
  return t266;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v267) {
bb268:
  struct std__vector_int__std__allocator_int__* this269;
  this269 = v267;
  struct std__vector_int__std__allocator_int__* t270 = this269;
    struct std___Vector_base_int__std__allocator_int__* base271 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base272 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base271->_M_impl) + 0);
    int* t273 = base272->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base274 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base275 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base274->_M_impl) + 0);
    int* t276 = base275->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base277 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
    struct std__allocator_int_* r278 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base277);
    void_std___Destroy_int___int_(t273, t276, r278);
  {
    struct std___Vector_base_int__std__allocator_int__* base279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base279);
  }
  return;
}

// function: main
int main() {
bb280:
  int __retval281;
  struct std__vector_int__std__allocator_int__ myvector282;
  struct std__allocator_int_ ref_tmp0283;
  unsigned int i284;
  int c285 = 0;
  __retval281 = c285;
  unsigned long c286 = 10;
  std__allocator_int___allocator_2(&ref_tmp0283);
    std__vector_int__std__allocator_int_____vector(&myvector282, c286, &ref_tmp0283);
  {
    std__allocator_int____allocator(&ref_tmp0283);
  }
      unsigned int c287 = 0;
      i284 = c287;
      while (1) {
        unsigned int t289 = i284;
        unsigned long cast290 = (unsigned long)t289;
        unsigned long r291 = std__vector_int__std__allocator_int_____size___const(&myvector282);
        _Bool c292 = ((cast290 < r291)) ? 1 : 0;
        if (!c292) break;
        unsigned int t293 = i284;
        int cast294 = (int)t293;
        unsigned int t295 = i284;
        unsigned long cast296 = (unsigned long)t295;
        int* r297 = std__vector_int__std__allocator_int_____at(&myvector282, cast296);
        *r297 = cast294;
      for_step288: ;
        unsigned int t298 = i284;
        unsigned int u299 = t298 + 1;
        i284 = u299;
      }
    char* cast300 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast300);
      unsigned int c302 = 0;
      i284 = c302;
      while (1) {
        unsigned int t304 = i284;
        unsigned long cast305 = (unsigned long)t304;
        unsigned long r306 = std__vector_int__std__allocator_int_____size___const(&myvector282);
        _Bool c307 = ((cast305 < r306)) ? 1 : 0;
        if (!c307) break;
        char* cast308 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r309 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast308);
        unsigned int t310 = i284;
        unsigned long cast311 = (unsigned long)t310;
        int* r312 = std__vector_int__std__allocator_int_____at(&myvector282, cast311);
        int t313 = *r312;
        struct std__basic_ostream_char__std__char_traits_char__* r314 = std__ostream__operator__(r309, t313);
      for_step303: ;
        unsigned int t315 = i284;
        unsigned int u316 = t315 + 1;
        i284 = u316;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r317 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c318 = 0;
    __retval281 = c318;
    int t319 = __retval281;
    int ret_val320 = t319;
    {
      std__vector_int__std__allocator_int______vector(&myvector282);
    }
    return ret_val320;
  int t321 = __retval281;
  return t321;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v322) {
bb323:
  struct std____new_allocator_int_* this324;
  this324 = v322;
  struct std____new_allocator_int_* t325 = this324;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v326, unsigned long* v327) {
bb328:
  unsigned long* __a329;
  unsigned long* __b330;
  unsigned long* __retval331;
  __a329 = v326;
  __b330 = v327;
    unsigned long* t332 = __b330;
    unsigned long t333 = *t332;
    unsigned long* t334 = __a329;
    unsigned long t335 = *t334;
    _Bool c336 = ((t333 < t335)) ? 1 : 0;
    if (c336) {
      unsigned long* t337 = __b330;
      __retval331 = t337;
      unsigned long* t338 = __retval331;
      return t338;
    }
  unsigned long* t339 = __a329;
  __retval331 = t339;
  unsigned long* t340 = __retval331;
  return t340;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v341) {
bb342:
  struct std__allocator_int_* __a343;
  unsigned long __retval344;
  unsigned long __diffmax345;
  unsigned long __allocmax346;
  __a343 = v341;
  unsigned long c347 = 2305843009213693951;
  __diffmax345 = c347;
  unsigned long c348 = 4611686018427387903;
  __allocmax346 = c348;
  unsigned long* r349 = unsigned_long_const__std__min_unsigned_long_(&__diffmax345, &__allocmax346);
  unsigned long t350 = *r349;
  __retval344 = t350;
  unsigned long t351 = __retval344;
  return t351;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v352, struct std__allocator_int_* v353) {
bb354:
  struct std__allocator_int_* this355;
  struct std__allocator_int_* __a356;
  this355 = v352;
  __a356 = v353;
  struct std__allocator_int_* t357 = this355;
  struct std____new_allocator_int_* base358 = (struct std____new_allocator_int_*)((char *)t357 + 0);
  struct std__allocator_int_* t359 = __a356;
  struct std____new_allocator_int_* base360 = (struct std____new_allocator_int_*)((char *)t359 + 0);
  std____new_allocator_int_____new_allocator(base358, base360);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v361, struct std__allocator_int_* v362) {
bb363:
  unsigned long __n364;
  struct std__allocator_int_* __a365;
  unsigned long __retval366;
  __n364 = v361;
  __a365 = v362;
    struct std__allocator_int_ ref_tmp0367;
    _Bool tmp_exprcleanup368;
    unsigned long t369 = __n364;
    struct std__allocator_int_* t370 = __a365;
    std__allocator_int___allocator(&ref_tmp0367, t370);
      unsigned long r371 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0367);
      _Bool c372 = ((t369 > r371)) ? 1 : 0;
      tmp_exprcleanup368 = c372;
    {
      std__allocator_int____allocator(&ref_tmp0367);
    }
    _Bool t373 = tmp_exprcleanup368;
    if (t373) {
      char* cast374 = (char*)&(_str_2);
      std____throw_length_error(cast374);
    }
  unsigned long t375 = __n364;
  __retval366 = t375;
  unsigned long t376 = __retval366;
  return t376;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v377, struct std__allocator_int_* v378) {
bb379:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this380;
  struct std__allocator_int_* __a381;
  this380 = v377;
  __a381 = v378;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t382 = this380;
  struct std__allocator_int_* base383 = (struct std__allocator_int_*)((char *)t382 + 0);
  struct std__allocator_int_* t384 = __a381;
  std__allocator_int___allocator(base383, t384);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base385 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t382 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base385);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb386:
  _Bool __retval387;
    _Bool c388 = 0;
    __retval387 = c388;
    _Bool t389 = __retval387;
    return t389;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v390) {
bb391:
  struct std____new_allocator_int_* this392;
  unsigned long __retval393;
  this392 = v390;
  struct std____new_allocator_int_* t394 = this392;
  unsigned long c395 = 9223372036854775807;
  unsigned long c396 = 4;
  unsigned long b397 = c395 / c396;
  __retval393 = b397;
  unsigned long t398 = __retval393;
  return t398;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v399, unsigned long v400, void* v401) {
bb402:
  struct std____new_allocator_int_* this403;
  unsigned long __n404;
  void* unnamed405;
  int* __retval406;
  this403 = v399;
  __n404 = v400;
  unnamed405 = v401;
  struct std____new_allocator_int_* t407 = this403;
    unsigned long t408 = __n404;
    unsigned long r409 = std____new_allocator_int____M_max_size___const(t407);
    _Bool c410 = ((t408 > r409)) ? 1 : 0;
    if (c410) {
        unsigned long t411 = __n404;
        unsigned long c412 = -1;
        unsigned long c413 = 4;
        unsigned long b414 = c412 / c413;
        _Bool c415 = ((t411 > b414)) ? 1 : 0;
        if (c415) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c416 = 4;
    unsigned long c417 = 16;
    _Bool c418 = ((c416 > c417)) ? 1 : 0;
    if (c418) {
      unsigned long __al419;
      unsigned long c420 = 4;
      __al419 = c420;
      unsigned long t421 = __n404;
      unsigned long c422 = 4;
      unsigned long b423 = t421 * c422;
      unsigned long t424 = __al419;
      void* r425 = operator_new_2(b423, t424);
      int* cast426 = (int*)r425;
      __retval406 = cast426;
      int* t427 = __retval406;
      return t427;
    }
  unsigned long t428 = __n404;
  unsigned long c429 = 4;
  unsigned long b430 = t428 * c429;
  void* r431 = operator_new(b430);
  int* cast432 = (int*)r431;
  __retval406 = cast432;
  int* t433 = __retval406;
  return t433;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v434, unsigned long v435) {
bb436:
  struct std__allocator_int_* this437;
  unsigned long __n438;
  int* __retval439;
  this437 = v434;
  __n438 = v435;
  struct std__allocator_int_* t440 = this437;
    _Bool r441 = std____is_constant_evaluated();
    if (r441) {
        unsigned long t442 = __n438;
        unsigned long c443 = 4;
        unsigned long ovr444;
        _Bool ovf445 = __builtin_mul_overflow(t442, c443, &ovr444);
        __n438 = ovr444;
        if (ovf445) {
          std____throw_bad_array_new_length();
        }
      unsigned long t446 = __n438;
      void* r447 = operator_new(t446);
      int* cast448 = (int*)r447;
      __retval439 = cast448;
      int* t449 = __retval439;
      return t449;
    }
  struct std____new_allocator_int_* base450 = (struct std____new_allocator_int_*)((char *)t440 + 0);
  unsigned long t451 = __n438;
  void* c452 = ((void*)0);
  int* r453 = std____new_allocator_int___allocate(base450, t451, c452);
  __retval439 = r453;
  int* t454 = __retval439;
  return t454;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v455, unsigned long v456) {
bb457:
  struct std__allocator_int_* __a458;
  unsigned long __n459;
  int* __retval460;
  __a458 = v455;
  __n459 = v456;
  struct std__allocator_int_* t461 = __a458;
  unsigned long t462 = __n459;
  int* r463 = std__allocator_int___allocate(t461, t462);
  __retval460 = r463;
  int* t464 = __retval460;
  return t464;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v465, unsigned long v466) {
bb467:
  struct std___Vector_base_int__std__allocator_int__* this468;
  unsigned long __n469;
  int* __retval470;
  this468 = v465;
  __n469 = v466;
  struct std___Vector_base_int__std__allocator_int__* t471 = this468;
  unsigned long t472 = __n469;
  unsigned long c473 = 0;
  _Bool c474 = ((t472 != c473)) ? 1 : 0;
  int* ternary475;
  if (c474) {
    struct std__allocator_int_* base476 = (struct std__allocator_int_*)((char *)&(t471->_M_impl) + 0);
    unsigned long t477 = __n469;
    int* r478 = std__allocator_traits_std__allocator_int_____allocate(base476, t477);
    ternary475 = (int*)r478;
  } else {
    int* c479 = ((void*)0);
    ternary475 = (int*)c479;
  }
  __retval470 = ternary475;
  int* t480 = __retval470;
  return t480;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v481, unsigned long v482) {
bb483:
  struct std___Vector_base_int__std__allocator_int__* this484;
  unsigned long __n485;
  this484 = v481;
  __n485 = v482;
  struct std___Vector_base_int__std__allocator_int__* t486 = this484;
  unsigned long t487 = __n485;
  int* r488 = std___Vector_base_int__std__allocator_int______M_allocate(t486, t487);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base489 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t486->_M_impl) + 0);
  base489->_M_start = r488;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t486->_M_impl) + 0);
  int* t491 = base490->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base492 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t486->_M_impl) + 0);
  base492->_M_finish = t491;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base493 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t486->_M_impl) + 0);
  int* t494 = base493->_M_start;
  unsigned long t495 = __n485;
  int* ptr496 = &(t494)[t495];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base497 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t486->_M_impl) + 0);
  base497->_M_end_of_storage = ptr496;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v498) {
bb499:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this500;
  this500 = v498;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t501 = this500;
  {
    struct std__allocator_int_* base502 = (struct std__allocator_int_*)((char *)t501 + 0);
    std__allocator_int____allocator(base502);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v503, unsigned long v504, struct std__allocator_int_* v505) {
bb506:
  struct std___Vector_base_int__std__allocator_int__* this507;
  unsigned long __n508;
  struct std__allocator_int_* __a509;
  this507 = v503;
  __n508 = v504;
  __a509 = v505;
  struct std___Vector_base_int__std__allocator_int__* t510 = this507;
  struct std__allocator_int_* t511 = __a509;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t510->_M_impl, t511);
    unsigned long t512 = __n508;
    std___Vector_base_int__std__allocator_int______M_create_storage(t510, t512);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb513:
  _Bool __retval514;
    _Bool c515 = 0;
    __retval514 = c515;
    _Bool t516 = __retval514;
    return t516;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v517, int** v518) {
bb519:
  struct std___UninitDestroyGuard_int____void_* this520;
  int** __first521;
  this520 = v517;
  __first521 = v518;
  struct std___UninitDestroyGuard_int____void_* t522 = this520;
  int** t523 = __first521;
  int* t524 = *t523;
  t522->_M_first = t524;
  int** t525 = __first521;
  t522->_M_cur = t525;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v526) {
bb527:
  int* __location528;
  int* __retval529;
  void* __loc530;
  __location528 = v526;
  int* t531 = __location528;
  void* cast532 = (void*)t531;
  __loc530 = cast532;
    void* t533 = __loc530;
    int* cast534 = (int*)t533;
    int c535 = 0;
    *cast534 = c535;
    __retval529 = cast534;
    int* t536 = __retval529;
    return t536;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v537) {
bb538:
  int* __p539;
  __p539 = v537;
    _Bool r540 = std____is_constant_evaluated();
    if (r540) {
      int* t541 = __p539;
      int* r542 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t541);
      return;
    }
  int* t543 = __p539;
  void* cast544 = (void*)t543;
  int* cast545 = (int*)cast544;
  int c546 = 0;
  *cast545 = c546;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v547) {
bb548:
  struct std___UninitDestroyGuard_int____void_* this549;
  this549 = v547;
  struct std___UninitDestroyGuard_int____void_* t550 = this549;
  int** c551 = ((void*)0);
  t550->_M_cur = c551;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v552) {
bb553:
  struct std___UninitDestroyGuard_int____void_* this554;
  this554 = v552;
  struct std___UninitDestroyGuard_int____void_* t555 = this554;
    int** t556 = t555->_M_cur;
    int** c557 = ((void*)0);
    _Bool c558 = ((t556 != c557)) ? 1 : 0;
    if (c558) {
      int* t559 = t555->_M_first;
      int** t560 = t555->_M_cur;
      int* t561 = *t560;
      void_std___Destroy_int__(t559, t561);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v562, unsigned long v563) {
bb564:
  int* __first565;
  unsigned long __n566;
  int* __retval567;
  struct std___UninitDestroyGuard_int____void_ __guard568;
  __first565 = v562;
  __n566 = v563;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard568, &__first565);
      while (1) {
        unsigned long t570 = __n566;
        unsigned long c571 = 0;
        _Bool c572 = ((t570 > c571)) ? 1 : 0;
        if (!c572) break;
        int* t573 = __first565;
        void_std___Construct_int_(t573);
      for_step569: ;
        unsigned long t574 = __n566;
        unsigned long u575 = t574 - 1;
        __n566 = u575;
        int* t576 = __first565;
        int c577 = 1;
        int* ptr578 = &(t576)[c577];
        __first565 = ptr578;
      }
    std___UninitDestroyGuard_int___void___release(&__guard568);
    int* t579 = __first565;
    __retval567 = t579;
    int* t580 = __retval567;
    int* ret_val581 = t580;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard568);
    }
    return ret_val581;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v582, int* v583, int* v584) {
bb585:
  int* __first586;
  int* __last587;
  int* __value588;
  _Bool __load_outside_loop589;
  int __val590;
  __first586 = v582;
  __last587 = v583;
  __value588 = v584;
  _Bool c591 = 1;
  __load_outside_loop589 = c591;
  int* t592 = __value588;
  int t593 = *t592;
  __val590 = t593;
    while (1) {
      int* t595 = __first586;
      int* t596 = __last587;
      _Bool c597 = ((t595 != t596)) ? 1 : 0;
      if (!c597) break;
      int t598 = __val590;
      int* t599 = __first586;
      *t599 = t598;
    for_step594: ;
      int* t600 = __first586;
      int c601 = 1;
      int* ptr602 = &(t600)[c601];
      __first586 = ptr602;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v603, int* v604, int* v605) {
bb606:
  int* __first607;
  int* __last608;
  int* __value609;
  __first607 = v603;
  __last608 = v604;
  __value609 = v605;
  int* t610 = __first607;
  int* t611 = __last608;
  int* t612 = __value609;
  void_std____fill_a1_int___int_(t610, t611, t612);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v613, unsigned long v614, int* v615, struct std__random_access_iterator_tag v616) {
bb617:
  int* __first618;
  unsigned long __n619;
  int* __value620;
  struct std__random_access_iterator_tag unnamed621;
  int* __retval622;
  __first618 = v613;
  __n619 = v614;
  __value620 = v615;
  unnamed621 = v616;
    unsigned long t623 = __n619;
    unsigned long c624 = 0;
    _Bool c625 = ((t623 <= c624)) ? 1 : 0;
    if (c625) {
      int* t626 = __first618;
      __retval622 = t626;
      int* t627 = __retval622;
      return t627;
    }
  int* t628 = __first618;
  int* t629 = __first618;
  unsigned long t630 = __n619;
  int* ptr631 = &(t629)[t630];
  int* t632 = __value620;
  void_std____fill_a_int___int_(t628, ptr631, t632);
  int* t633 = __first618;
  unsigned long t634 = __n619;
  int* ptr635 = &(t633)[t634];
  __retval622 = ptr635;
  int* t636 = __retval622;
  return t636;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v637) {
bb638:
  unsigned long __n639;
  unsigned long __retval640;
  __n639 = v637;
  unsigned long t641 = __n639;
  __retval640 = t641;
  unsigned long t642 = __retval640;
  return t642;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v643) {
bb644:
  int** unnamed645;
  struct std__random_access_iterator_tag __retval646;
  unnamed645 = v643;
  struct std__random_access_iterator_tag t647 = __retval646;
  return t647;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v648, unsigned long v649, int* v650) {
bb651:
  int* __first652;
  unsigned long __n653;
  int* __value654;
  int* __retval655;
  struct std__random_access_iterator_tag agg_tmp0656;
  __first652 = v648;
  __n653 = v649;
  __value654 = v650;
  int* t657 = __first652;
  unsigned long t658 = __n653;
  unsigned long r659 = std____size_to_integer(t658);
  int* t660 = __value654;
  struct std__random_access_iterator_tag r661 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first652);
  agg_tmp0656 = r661;
  struct std__random_access_iterator_tag t662 = agg_tmp0656;
  int* r663 = int__std____fill_n_a_int___unsigned_long__int_(t657, r659, t660, t662);
  __retval655 = r663;
  int* t664 = __retval655;
  return t664;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v665, unsigned long v666) {
bb667:
  int* __first668;
  unsigned long __n669;
  int* __retval670;
  __first668 = v665;
  __n669 = v666;
    unsigned long t671 = __n669;
    unsigned long c672 = 0;
    _Bool c673 = ((t671 > c672)) ? 1 : 0;
    if (c673) {
      int* __val674;
      int* t675 = __first668;
      __val674 = t675;
      int* t676 = __val674;
      void_std___Construct_int_(t676);
      int* t677 = __first668;
      int c678 = 1;
      int* ptr679 = &(t677)[c678];
      __first668 = ptr679;
      int* t680 = __first668;
      unsigned long t681 = __n669;
      unsigned long c682 = 1;
      unsigned long b683 = t681 - c682;
      int* t684 = __val674;
      int* r685 = int__std__fill_n_int___unsigned_long__int_(t680, b683, t684);
      __first668 = r685;
    }
  int* t686 = __first668;
  __retval670 = t686;
  int* t687 = __retval670;
  return t687;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v688, unsigned long v689) {
bb690:
  int* __first691;
  unsigned long __n692;
  int* __retval693;
  _Bool __can_fill694;
  __first691 = v688;
  __n692 = v689;
    _Bool r695 = std__is_constant_evaluated();
    if (r695) {
      int* t696 = __first691;
      unsigned long t697 = __n692;
      int* r698 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t696, t697);
      __retval693 = r698;
      int* t699 = __retval693;
      return t699;
    }
  _Bool c700 = 1;
  __can_fill694 = c700;
  int* t701 = __first691;
  unsigned long t702 = __n692;
  int* r703 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t701, t702);
  __retval693 = r703;
  int* t704 = __retval693;
  return t704;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v705, unsigned long v706, struct std__allocator_int_* v707) {
bb708:
  int* __first709;
  unsigned long __n710;
  struct std__allocator_int_* unnamed711;
  int* __retval712;
  __first709 = v705;
  __n710 = v706;
  unnamed711 = v707;
  int* t713 = __first709;
  unsigned long t714 = __n710;
  int* r715 = int__std____uninitialized_default_n_int___unsigned_long_(t713, t714);
  __retval712 = r715;
  int* t716 = __retval712;
  return t716;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v717) {
bb718:
  struct std___Vector_base_int__std__allocator_int__* this719;
  struct std__allocator_int_* __retval720;
  this719 = v717;
  struct std___Vector_base_int__std__allocator_int__* t721 = this719;
  struct std__allocator_int_* base722 = (struct std__allocator_int_*)((char *)&(t721->_M_impl) + 0);
  __retval720 = base722;
  struct std__allocator_int_* t723 = __retval720;
  return t723;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v724, unsigned long v725) {
bb726:
  struct std__vector_int__std__allocator_int__* this727;
  unsigned long __n728;
  this727 = v724;
  __n728 = v725;
  struct std__vector_int__std__allocator_int__* t729 = this727;
  struct std___Vector_base_int__std__allocator_int__* base730 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base731 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base730->_M_impl) + 0);
  int* t732 = base731->_M_start;
  unsigned long t733 = __n728;
  struct std___Vector_base_int__std__allocator_int__* base734 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std__allocator_int_* r735 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base734);
  int* r736 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t732, t733, r735);
  struct std___Vector_base_int__std__allocator_int__* base737 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base738 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base737->_M_impl) + 0);
  base738->_M_finish = r736;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v739, int* v740, unsigned long v741) {
bb742:
  struct std____new_allocator_int_* this743;
  int* __p744;
  unsigned long __n745;
  this743 = v739;
  __p744 = v740;
  __n745 = v741;
  struct std____new_allocator_int_* t746 = this743;
    unsigned long c747 = 4;
    unsigned long c748 = 16;
    _Bool c749 = ((c747 > c748)) ? 1 : 0;
    if (c749) {
      int* t750 = __p744;
      void* cast751 = (void*)t750;
      unsigned long t752 = __n745;
      unsigned long c753 = 4;
      unsigned long b754 = t752 * c753;
      unsigned long c755 = 4;
      operator_delete_3(cast751, b754, c755);
      return;
    }
  int* t756 = __p744;
  void* cast757 = (void*)t756;
  unsigned long t758 = __n745;
  unsigned long c759 = 4;
  unsigned long b760 = t758 * c759;
  operator_delete_2(cast757, b760);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v761, int* v762, unsigned long v763) {
bb764:
  struct std__allocator_int_* this765;
  int* __p766;
  unsigned long __n767;
  this765 = v761;
  __p766 = v762;
  __n767 = v763;
  struct std__allocator_int_* t768 = this765;
    _Bool r769 = std____is_constant_evaluated();
    if (r769) {
      int* t770 = __p766;
      void* cast771 = (void*)t770;
      operator_delete(cast771);
      return;
    }
  struct std____new_allocator_int_* base772 = (struct std____new_allocator_int_*)((char *)t768 + 0);
  int* t773 = __p766;
  unsigned long t774 = __n767;
  std____new_allocator_int___deallocate(base772, t773, t774);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v775, int* v776, unsigned long v777) {
bb778:
  struct std__allocator_int_* __a779;
  int* __p780;
  unsigned long __n781;
  __a779 = v775;
  __p780 = v776;
  __n781 = v777;
  struct std__allocator_int_* t782 = __a779;
  int* t783 = __p780;
  unsigned long t784 = __n781;
  std__allocator_int___deallocate(t782, t783, t784);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v785, int* v786, unsigned long v787) {
bb788:
  struct std___Vector_base_int__std__allocator_int__* this789;
  int* __p790;
  unsigned long __n791;
  this789 = v785;
  __p790 = v786;
  __n791 = v787;
  struct std___Vector_base_int__std__allocator_int__* t792 = this789;
    int* t793 = __p790;
    _Bool cast794 = (_Bool)t793;
    if (cast794) {
      struct std__allocator_int_* base795 = (struct std__allocator_int_*)((char *)&(t792->_M_impl) + 0);
      int* t796 = __p790;
      unsigned long t797 = __n791;
      std__allocator_traits_std__allocator_int_____deallocate(base795, t796, t797);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v798) {
bb799:
  struct std___Vector_base_int__std__allocator_int__* this800;
  this800 = v798;
  struct std___Vector_base_int__std__allocator_int__* t801 = this800;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base802 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t801->_M_impl) + 0);
    int* t803 = base802->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base804 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t801->_M_impl) + 0);
    int* t805 = base804->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base806 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t801->_M_impl) + 0);
    int* t807 = base806->_M_start;
    long diff808 = t805 - t807;
    unsigned long cast809 = (unsigned long)diff808;
    std___Vector_base_int__std__allocator_int______M_deallocate(t801, t803, cast809);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t801->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v810, struct std____new_allocator_int_* v811) {
bb812:
  struct std____new_allocator_int_* this813;
  struct std____new_allocator_int_* unnamed814;
  this813 = v810;
  unnamed814 = v811;
  struct std____new_allocator_int_* t815 = this813;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v816) {
bb817:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this818;
  this818 = v816;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t819 = this818;
  int* c820 = ((void*)0);
  t819->_M_start = c820;
  int* c821 = ((void*)0);
  t819->_M_finish = c821;
  int* c822 = ((void*)0);
  t819->_M_end_of_storage = c822;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v823) {
bb824:
  int* __location825;
  __location825 = v823;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v826, int* v827) {
bb828:
  int* __first829;
  int* __last830;
  __first829 = v826;
  __last830 = v827;
      _Bool r831 = std____is_constant_evaluated();
      if (r831) {
          while (1) {
            int* t833 = __first829;
            int* t834 = __last830;
            _Bool c835 = ((t833 != t834)) ? 1 : 0;
            if (!c835) break;
            int* t836 = __first829;
            void_std__destroy_at_int_(t836);
          for_step832: ;
            int* t837 = __first829;
            int c838 = 1;
            int* ptr839 = &(t837)[c838];
            __first829 = ptr839;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v840, int* v841, struct std__allocator_int_* v842) {
bb843:
  int* __first844;
  int* __last845;
  struct std__allocator_int_* unnamed846;
  __first844 = v840;
  __last845 = v841;
  unnamed846 = v842;
  int* t847 = __first844;
  int* t848 = __last845;
  void_std___Destroy_int__(t847, t848);
  return;
}

