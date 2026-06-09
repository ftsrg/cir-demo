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
char _str_2[17] = "myvector[0] != 9";
char _str_3[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector59/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v42, unsigned long v43) {
bb44:
  struct std__vector_int__std__allocator_int__* this45;
  unsigned long __n46;
  int* __retval47;
  this45 = v42;
  __n46 = v43;
  struct std__vector_int__std__allocator_int__* t48 = this45;
    do {
          unsigned long t49 = __n46;
          unsigned long r50 = std__vector_int__std__allocator_int_____size___const(t48);
          _Bool c51 = ((t49 < r50)) ? 1 : 0;
          _Bool u52 = !c51;
          if (u52) {
            char* cast53 = (char*)&(_str_5);
            int c54 = 1263;
            char* cast55 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast56 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast53, c54, cast55, cast56);
          }
      _Bool c57 = 0;
      if (!c57) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base58 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t48 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base59 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base58->_M_impl) + 0);
  int* t60 = base59->_M_start;
  unsigned long t61 = __n46;
  int* ptr62 = &(t60)[t61];
  __retval47 = ptr62;
  int* t63 = __retval47;
  return t63;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v64, int v65) {
bb66:
  int __a67;
  int __b68;
  int __retval69;
  __a67 = v64;
  __b68 = v65;
  int t70 = __a67;
  int t71 = __b68;
  int b72 = t70 | t71;
  __retval69 = b72;
  int t73 = __retval69;
  return t73;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v74) {
bb75:
  struct std__basic_ios_char__std__char_traits_char__* this76;
  int __retval77;
  this76 = v74;
  struct std__basic_ios_char__std__char_traits_char__* t78 = this76;
  struct std__ios_base* base79 = (struct std__ios_base*)((char *)t78 + 0);
  int t80 = base79->_M_streambuf_state;
  __retval77 = t80;
  int t81 = __retval77;
  return t81;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v82, int v83) {
bb84:
  struct std__basic_ios_char__std__char_traits_char__* this85;
  int __state86;
  this85 = v82;
  __state86 = v83;
  struct std__basic_ios_char__std__char_traits_char__* t87 = this85;
  int r88 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t87);
  int t89 = __state86;
  int r90 = std__operator_(r88, t89);
  std__basic_ios_char__std__char_traits_char_____clear(t87, r90);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v91, char* v92) {
bb93:
  char* __c194;
  char* __c295;
  _Bool __retval96;
  __c194 = v91;
  __c295 = v92;
  char* t97 = __c194;
  char t98 = *t97;
  int cast99 = (int)t98;
  char* t100 = __c295;
  char t101 = *t100;
  int cast102 = (int)t101;
  _Bool c103 = ((cast99 == cast102)) ? 1 : 0;
  __retval96 = c103;
  _Bool t104 = __retval96;
  return t104;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v105) {
bb106:
  char* __p107;
  unsigned long __retval108;
  unsigned long __i109;
  __p107 = v105;
  unsigned long c110 = 0;
  __i109 = c110;
    char ref_tmp0111;
    while (1) {
      unsigned long t112 = __i109;
      char* t113 = __p107;
      char* ptr114 = &(t113)[t112];
      char c115 = 0;
      ref_tmp0111 = c115;
      _Bool r116 = __gnu_cxx__char_traits_char___eq(ptr114, &ref_tmp0111);
      _Bool u117 = !r116;
      if (!u117) break;
      unsigned long t118 = __i109;
      unsigned long u119 = t118 + 1;
      __i109 = u119;
    }
  unsigned long t120 = __i109;
  __retval108 = t120;
  unsigned long t121 = __retval108;
  return t121;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v122) {
bb123:
  char* __s124;
  unsigned long __retval125;
  __s124 = v122;
    _Bool r126 = std____is_constant_evaluated();
    if (r126) {
      char* t127 = __s124;
      unsigned long r128 = __gnu_cxx__char_traits_char___length(t127);
      __retval125 = r128;
      unsigned long t129 = __retval125;
      return t129;
    }
  char* t130 = __s124;
  unsigned long r131 = strlen(t130);
  __retval125 = r131;
  unsigned long t132 = __retval125;
  return t132;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133, char* v134) {
bb135:
  struct std__basic_ostream_char__std__char_traits_char__* __out136;
  char* __s137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval138;
  __out136 = v133;
  __s137 = v134;
    char* t139 = __s137;
    _Bool cast140 = (_Bool)t139;
    _Bool u141 = !cast140;
    if (u141) {
      struct std__basic_ostream_char__std__char_traits_char__* t142 = __out136;
      void** v143 = (void**)t142;
      void* v144 = *((void**)v143);
      unsigned char* cast145 = (unsigned char*)v144;
      long c146 = -24;
      unsigned char* ptr147 = &(cast145)[c146];
      long* cast148 = (long*)ptr147;
      long t149 = *cast148;
      unsigned char* cast150 = (unsigned char*)t142;
      unsigned char* ptr151 = &(cast150)[t149];
      struct std__basic_ostream_char__std__char_traits_char__* cast152 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr151;
      struct std__basic_ios_char__std__char_traits_char__* cast153 = (struct std__basic_ios_char__std__char_traits_char__*)cast152;
      int t154 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast153, t154);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t155 = __out136;
      char* t156 = __s137;
      char* t157 = __s137;
      unsigned long r158 = std__char_traits_char___length(t157);
      long cast159 = (long)r158;
      struct std__basic_ostream_char__std__char_traits_char__* r160 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t155, t156, cast159);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t161 = __out136;
  __retval138 = t161;
  struct std__basic_ostream_char__std__char_traits_char__* t162 = __retval138;
  return t162;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v163, void* v164) {
bb165:
  struct std__basic_ostream_char__std__char_traits_char__* this166;
  void* __pf167;
  struct std__basic_ostream_char__std__char_traits_char__* __retval168;
  this166 = v163;
  __pf167 = v164;
  struct std__basic_ostream_char__std__char_traits_char__* t169 = this166;
  void* t170 = __pf167;
  struct std__basic_ostream_char__std__char_traits_char__* r171 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t170)(t169);
  __retval168 = r171;
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __retval168;
  return t172;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v173) {
bb174:
  struct std__basic_ostream_char__std__char_traits_char__* __os175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  __os175 = v173;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __os175;
  struct std__basic_ostream_char__std__char_traits_char__* r178 = std__ostream__flush(t177);
  __retval176 = r178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval176;
  return t179;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v180) {
bb181:
  struct std__ctype_char_* __f182;
  struct std__ctype_char_* __retval183;
  __f182 = v180;
    struct std__ctype_char_* t184 = __f182;
    _Bool cast185 = (_Bool)t184;
    _Bool u186 = !cast185;
    if (u186) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t187 = __f182;
  __retval183 = t187;
  struct std__ctype_char_* t188 = __retval183;
  return t188;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v189, char v190) {
bb191:
  struct std__ctype_char_* this192;
  char __c193;
  char __retval194;
  this192 = v189;
  __c193 = v190;
  struct std__ctype_char_* t195 = this192;
    char t196 = t195->_M_widen_ok;
    _Bool cast197 = (_Bool)t196;
    if (cast197) {
      char t198 = __c193;
      unsigned char cast199 = (unsigned char)t198;
      unsigned long cast200 = (unsigned long)cast199;
      char t201 = t195->_M_widen[cast200];
      __retval194 = t201;
      char t202 = __retval194;
      return t202;
    }
  std__ctype_char____M_widen_init___const(t195);
  char t203 = __c193;
  void** v204 = (void**)t195;
  void* v205 = *((void**)v204);
  char vcall208 = (char)__VERIFIER_virtual_call_char_char(t195, 6, t203);
  __retval194 = vcall208;
  char t209 = __retval194;
  return t209;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v210, char v211) {
bb212:
  struct std__basic_ios_char__std__char_traits_char__* this213;
  char __c214;
  char __retval215;
  this213 = v210;
  __c214 = v211;
  struct std__basic_ios_char__std__char_traits_char__* t216 = this213;
  struct std__ctype_char_* t217 = t216->_M_ctype;
  struct std__ctype_char_* r218 = std__ctype_char__const__std____check_facet_std__ctype_char___(t217);
  char t219 = __c214;
  char r220 = std__ctype_char___widen_char__const(r218, t219);
  __retval215 = r220;
  char t221 = __retval215;
  return t221;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v222) {
bb223:
  struct std__basic_ostream_char__std__char_traits_char__* __os224;
  struct std__basic_ostream_char__std__char_traits_char__* __retval225;
  __os224 = v222;
  struct std__basic_ostream_char__std__char_traits_char__* t226 = __os224;
  struct std__basic_ostream_char__std__char_traits_char__* t227 = __os224;
  void** v228 = (void**)t227;
  void* v229 = *((void**)v228);
  unsigned char* cast230 = (unsigned char*)v229;
  long c231 = -24;
  unsigned char* ptr232 = &(cast230)[c231];
  long* cast233 = (long*)ptr232;
  long t234 = *cast233;
  unsigned char* cast235 = (unsigned char*)t227;
  unsigned char* ptr236 = &(cast235)[t234];
  struct std__basic_ostream_char__std__char_traits_char__* cast237 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr236;
  struct std__basic_ios_char__std__char_traits_char__* cast238 = (struct std__basic_ios_char__std__char_traits_char__*)cast237;
  char c239 = 10;
  char r240 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast238, c239);
  struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__put(t226, r240);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r241);
  __retval225 = r242;
  struct std__basic_ostream_char__std__char_traits_char__* t243 = __retval225;
  return t243;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v244) {
bb245:
  struct std__vector_int__std__allocator_int__* this246;
  this246 = v244;
  struct std__vector_int__std__allocator_int__* t247 = this246;
    struct std___Vector_base_int__std__allocator_int__* base248 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base249 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base248->_M_impl) + 0);
    int* t250 = base249->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base251 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base252 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base251->_M_impl) + 0);
    int* t253 = base252->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base254 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    struct std__allocator_int_* r255 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base254);
    void_std___Destroy_int___int_(t250, t253, r255);
  {
    struct std___Vector_base_int__std__allocator_int__* base256 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t247 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base256);
  }
  return;
}

// function: main
int main() {
bb257:
  int __retval258;
  struct std__vector_int__std__allocator_int__ myvector259;
  struct std__allocator_int_ ref_tmp0260;
  unsigned int i261;
  unsigned long sz262;
  int c263 = 0;
  __retval258 = c263;
  unsigned long c264 = 10;
  std__allocator_int___allocator_2(&ref_tmp0260);
    std__vector_int__std__allocator_int_____vector(&myvector259, c264, &ref_tmp0260);
  {
    std__allocator_int____allocator(&ref_tmp0260);
  }
    unsigned long r265 = std__vector_int__std__allocator_int_____size___const(&myvector259);
    sz262 = r265;
      unsigned int c266 = 0;
      i261 = c266;
      while (1) {
        unsigned int t268 = i261;
        unsigned long cast269 = (unsigned long)t268;
        unsigned long t270 = sz262;
        _Bool c271 = ((cast269 < t270)) ? 1 : 0;
        if (!c271) break;
        unsigned int t272 = i261;
        int cast273 = (int)t272;
        unsigned int t274 = i261;
        unsigned long cast275 = (unsigned long)t274;
        int* r276 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast275);
        *r276 = cast273;
      for_step267: ;
        unsigned int t277 = i261;
        unsigned int u278 = t277 + 1;
        i261 = u278;
      }
      unsigned int c279 = 0;
      i261 = c279;
      while (1) {
        unsigned int t281 = i261;
        unsigned long cast282 = (unsigned long)t281;
        unsigned long t283 = sz262;
        unsigned long c284 = 2;
        unsigned long b285 = t283 / c284;
        _Bool c286 = ((cast282 < b285)) ? 1 : 0;
        if (!c286) break;
          int temp287;
          unsigned long t288 = sz262;
          unsigned long c289 = 1;
          unsigned long b290 = t288 - c289;
          unsigned int t291 = i261;
          unsigned long cast292 = (unsigned long)t291;
          unsigned long b293 = b290 - cast292;
          int* r294 = std__vector_int__std__allocator_int_____operator__(&myvector259, b293);
          int t295 = *r294;
          temp287 = t295;
          unsigned int t296 = i261;
          unsigned long cast297 = (unsigned long)t296;
          int* r298 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast297);
          int t299 = *r298;
          unsigned long t300 = sz262;
          unsigned long c301 = 1;
          unsigned long b302 = t300 - c301;
          unsigned int t303 = i261;
          unsigned long cast304 = (unsigned long)t303;
          unsigned long b305 = b302 - cast304;
          int* r306 = std__vector_int__std__allocator_int_____operator__(&myvector259, b305);
          *r306 = t299;
          int t307 = temp287;
          unsigned int t308 = i261;
          unsigned long cast309 = (unsigned long)t308;
          int* r310 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast309);
          *r310 = t307;
      for_step280: ;
        unsigned int t311 = i261;
        unsigned int u312 = t311 + 1;
        i261 = u312;
      }
    char* cast313 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r314 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast313);
      unsigned int c315 = 0;
      i261 = c315;
      while (1) {
        unsigned int t317 = i261;
        unsigned long cast318 = (unsigned long)t317;
        unsigned long t319 = sz262;
        _Bool c320 = ((cast318 < t319)) ? 1 : 0;
        if (!c320) break;
        char* cast321 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r322 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast321);
        unsigned int t323 = i261;
        unsigned long cast324 = (unsigned long)t323;
        int* r325 = std__vector_int__std__allocator_int_____operator__(&myvector259, cast324);
        int t326 = *r325;
        struct std__basic_ostream_char__std__char_traits_char__* r327 = std__ostream__operator__(r322, t326);
      for_step316: ;
        unsigned int t328 = i261;
        unsigned int u329 = t328 + 1;
        i261 = u329;
      }
    unsigned long c330 = 0;
    int* r331 = std__vector_int__std__allocator_int_____operator__(&myvector259, c330);
    int t332 = *r331;
    int c333 = 9;
    _Bool c334 = ((t332 != c333)) ? 1 : 0;
    if (c334) {
    } else {
      char* cast335 = (char*)&(_str_2);
      char* c336 = _str_3;
      unsigned int c337 = 37;
      char* cast338 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast335, c336, c337, cast338);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r339 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c340 = 0;
    __retval258 = c340;
    int t341 = __retval258;
    int ret_val342 = t341;
    {
      std__vector_int__std__allocator_int______vector(&myvector259);
    }
    return ret_val342;
  int t343 = __retval258;
  return t343;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v344) {
bb345:
  struct std____new_allocator_int_* this346;
  this346 = v344;
  struct std____new_allocator_int_* t347 = this346;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v348, unsigned long* v349) {
bb350:
  unsigned long* __a351;
  unsigned long* __b352;
  unsigned long* __retval353;
  __a351 = v348;
  __b352 = v349;
    unsigned long* t354 = __b352;
    unsigned long t355 = *t354;
    unsigned long* t356 = __a351;
    unsigned long t357 = *t356;
    _Bool c358 = ((t355 < t357)) ? 1 : 0;
    if (c358) {
      unsigned long* t359 = __b352;
      __retval353 = t359;
      unsigned long* t360 = __retval353;
      return t360;
    }
  unsigned long* t361 = __a351;
  __retval353 = t361;
  unsigned long* t362 = __retval353;
  return t362;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v363) {
bb364:
  struct std__allocator_int_* __a365;
  unsigned long __retval366;
  unsigned long __diffmax367;
  unsigned long __allocmax368;
  __a365 = v363;
  unsigned long c369 = 2305843009213693951;
  __diffmax367 = c369;
  unsigned long c370 = 4611686018427387903;
  __allocmax368 = c370;
  unsigned long* r371 = unsigned_long_const__std__min_unsigned_long_(&__diffmax367, &__allocmax368);
  unsigned long t372 = *r371;
  __retval366 = t372;
  unsigned long t373 = __retval366;
  return t373;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v374, struct std__allocator_int_* v375) {
bb376:
  struct std__allocator_int_* this377;
  struct std__allocator_int_* __a378;
  this377 = v374;
  __a378 = v375;
  struct std__allocator_int_* t379 = this377;
  struct std____new_allocator_int_* base380 = (struct std____new_allocator_int_*)((char *)t379 + 0);
  struct std__allocator_int_* t381 = __a378;
  struct std____new_allocator_int_* base382 = (struct std____new_allocator_int_*)((char *)t381 + 0);
  std____new_allocator_int_____new_allocator(base380, base382);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v383, struct std__allocator_int_* v384) {
bb385:
  unsigned long __n386;
  struct std__allocator_int_* __a387;
  unsigned long __retval388;
  __n386 = v383;
  __a387 = v384;
    struct std__allocator_int_ ref_tmp0389;
    _Bool tmp_exprcleanup390;
    unsigned long t391 = __n386;
    struct std__allocator_int_* t392 = __a387;
    std__allocator_int___allocator(&ref_tmp0389, t392);
      unsigned long r393 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0389);
      _Bool c394 = ((t391 > r393)) ? 1 : 0;
      tmp_exprcleanup390 = c394;
    {
      std__allocator_int____allocator(&ref_tmp0389);
    }
    _Bool t395 = tmp_exprcleanup390;
    if (t395) {
      char* cast396 = (char*)&(_str_4);
      std____throw_length_error(cast396);
    }
  unsigned long t397 = __n386;
  __retval388 = t397;
  unsigned long t398 = __retval388;
  return t398;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v399, struct std__allocator_int_* v400) {
bb401:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this402;
  struct std__allocator_int_* __a403;
  this402 = v399;
  __a403 = v400;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t404 = this402;
  struct std__allocator_int_* base405 = (struct std__allocator_int_*)((char *)t404 + 0);
  struct std__allocator_int_* t406 = __a403;
  std__allocator_int___allocator(base405, t406);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base407 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t404 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base407);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb408:
  _Bool __retval409;
    _Bool c410 = 0;
    __retval409 = c410;
    _Bool t411 = __retval409;
    return t411;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v412) {
bb413:
  struct std____new_allocator_int_* this414;
  unsigned long __retval415;
  this414 = v412;
  struct std____new_allocator_int_* t416 = this414;
  unsigned long c417 = 9223372036854775807;
  unsigned long c418 = 4;
  unsigned long b419 = c417 / c418;
  __retval415 = b419;
  unsigned long t420 = __retval415;
  return t420;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v421, unsigned long v422, void* v423) {
bb424:
  struct std____new_allocator_int_* this425;
  unsigned long __n426;
  void* unnamed427;
  int* __retval428;
  this425 = v421;
  __n426 = v422;
  unnamed427 = v423;
  struct std____new_allocator_int_* t429 = this425;
    unsigned long t430 = __n426;
    unsigned long r431 = std____new_allocator_int____M_max_size___const(t429);
    _Bool c432 = ((t430 > r431)) ? 1 : 0;
    if (c432) {
        unsigned long t433 = __n426;
        unsigned long c434 = -1;
        unsigned long c435 = 4;
        unsigned long b436 = c434 / c435;
        _Bool c437 = ((t433 > b436)) ? 1 : 0;
        if (c437) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c438 = 4;
    unsigned long c439 = 16;
    _Bool c440 = ((c438 > c439)) ? 1 : 0;
    if (c440) {
      unsigned long __al441;
      unsigned long c442 = 4;
      __al441 = c442;
      unsigned long t443 = __n426;
      unsigned long c444 = 4;
      unsigned long b445 = t443 * c444;
      unsigned long t446 = __al441;
      void* r447 = operator_new_2(b445, t446);
      int* cast448 = (int*)r447;
      __retval428 = cast448;
      int* t449 = __retval428;
      return t449;
    }
  unsigned long t450 = __n426;
  unsigned long c451 = 4;
  unsigned long b452 = t450 * c451;
  void* r453 = operator_new(b452);
  int* cast454 = (int*)r453;
  __retval428 = cast454;
  int* t455 = __retval428;
  return t455;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v456, unsigned long v457) {
bb458:
  struct std__allocator_int_* this459;
  unsigned long __n460;
  int* __retval461;
  this459 = v456;
  __n460 = v457;
  struct std__allocator_int_* t462 = this459;
    _Bool r463 = std____is_constant_evaluated();
    if (r463) {
        unsigned long t464 = __n460;
        unsigned long c465 = 4;
        unsigned long ovr466;
        _Bool ovf467 = __builtin_mul_overflow(t464, c465, &ovr466);
        __n460 = ovr466;
        if (ovf467) {
          std____throw_bad_array_new_length();
        }
      unsigned long t468 = __n460;
      void* r469 = operator_new(t468);
      int* cast470 = (int*)r469;
      __retval461 = cast470;
      int* t471 = __retval461;
      return t471;
    }
  struct std____new_allocator_int_* base472 = (struct std____new_allocator_int_*)((char *)t462 + 0);
  unsigned long t473 = __n460;
  void* c474 = ((void*)0);
  int* r475 = std____new_allocator_int___allocate(base472, t473, c474);
  __retval461 = r475;
  int* t476 = __retval461;
  return t476;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v477, unsigned long v478) {
bb479:
  struct std__allocator_int_* __a480;
  unsigned long __n481;
  int* __retval482;
  __a480 = v477;
  __n481 = v478;
  struct std__allocator_int_* t483 = __a480;
  unsigned long t484 = __n481;
  int* r485 = std__allocator_int___allocate(t483, t484);
  __retval482 = r485;
  int* t486 = __retval482;
  return t486;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v487, unsigned long v488) {
bb489:
  struct std___Vector_base_int__std__allocator_int__* this490;
  unsigned long __n491;
  int* __retval492;
  this490 = v487;
  __n491 = v488;
  struct std___Vector_base_int__std__allocator_int__* t493 = this490;
  unsigned long t494 = __n491;
  unsigned long c495 = 0;
  _Bool c496 = ((t494 != c495)) ? 1 : 0;
  int* ternary497;
  if (c496) {
    struct std__allocator_int_* base498 = (struct std__allocator_int_*)((char *)&(t493->_M_impl) + 0);
    unsigned long t499 = __n491;
    int* r500 = std__allocator_traits_std__allocator_int_____allocate(base498, t499);
    ternary497 = (int*)r500;
  } else {
    int* c501 = ((void*)0);
    ternary497 = (int*)c501;
  }
  __retval492 = ternary497;
  int* t502 = __retval492;
  return t502;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v503, unsigned long v504) {
bb505:
  struct std___Vector_base_int__std__allocator_int__* this506;
  unsigned long __n507;
  this506 = v503;
  __n507 = v504;
  struct std___Vector_base_int__std__allocator_int__* t508 = this506;
  unsigned long t509 = __n507;
  int* r510 = std___Vector_base_int__std__allocator_int______M_allocate(t508, t509);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base511 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t508->_M_impl) + 0);
  base511->_M_start = r510;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base512 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t508->_M_impl) + 0);
  int* t513 = base512->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base514 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t508->_M_impl) + 0);
  base514->_M_finish = t513;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base515 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t508->_M_impl) + 0);
  int* t516 = base515->_M_start;
  unsigned long t517 = __n507;
  int* ptr518 = &(t516)[t517];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base519 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t508->_M_impl) + 0);
  base519->_M_end_of_storage = ptr518;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v520) {
bb521:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this522;
  this522 = v520;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t523 = this522;
  {
    struct std__allocator_int_* base524 = (struct std__allocator_int_*)((char *)t523 + 0);
    std__allocator_int____allocator(base524);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v525, unsigned long v526, struct std__allocator_int_* v527) {
bb528:
  struct std___Vector_base_int__std__allocator_int__* this529;
  unsigned long __n530;
  struct std__allocator_int_* __a531;
  this529 = v525;
  __n530 = v526;
  __a531 = v527;
  struct std___Vector_base_int__std__allocator_int__* t532 = this529;
  struct std__allocator_int_* t533 = __a531;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t532->_M_impl, t533);
    unsigned long t534 = __n530;
    std___Vector_base_int__std__allocator_int______M_create_storage(t532, t534);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb535:
  _Bool __retval536;
    _Bool c537 = 0;
    __retval536 = c537;
    _Bool t538 = __retval536;
    return t538;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v539, int** v540) {
bb541:
  struct std___UninitDestroyGuard_int____void_* this542;
  int** __first543;
  this542 = v539;
  __first543 = v540;
  struct std___UninitDestroyGuard_int____void_* t544 = this542;
  int** t545 = __first543;
  int* t546 = *t545;
  t544->_M_first = t546;
  int** t547 = __first543;
  t544->_M_cur = t547;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v548) {
bb549:
  int* __location550;
  int* __retval551;
  void* __loc552;
  __location550 = v548;
  int* t553 = __location550;
  void* cast554 = (void*)t553;
  __loc552 = cast554;
    void* t555 = __loc552;
    int* cast556 = (int*)t555;
    int c557 = 0;
    *cast556 = c557;
    __retval551 = cast556;
    int* t558 = __retval551;
    return t558;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v559) {
bb560:
  int* __p561;
  __p561 = v559;
    _Bool r562 = std____is_constant_evaluated();
    if (r562) {
      int* t563 = __p561;
      int* r564 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t563);
      return;
    }
  int* t565 = __p561;
  void* cast566 = (void*)t565;
  int* cast567 = (int*)cast566;
  int c568 = 0;
  *cast567 = c568;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v569) {
bb570:
  struct std___UninitDestroyGuard_int____void_* this571;
  this571 = v569;
  struct std___UninitDestroyGuard_int____void_* t572 = this571;
  int** c573 = ((void*)0);
  t572->_M_cur = c573;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v574) {
bb575:
  struct std___UninitDestroyGuard_int____void_* this576;
  this576 = v574;
  struct std___UninitDestroyGuard_int____void_* t577 = this576;
    int** t578 = t577->_M_cur;
    int** c579 = ((void*)0);
    _Bool c580 = ((t578 != c579)) ? 1 : 0;
    if (c580) {
      int* t581 = t577->_M_first;
      int** t582 = t577->_M_cur;
      int* t583 = *t582;
      void_std___Destroy_int__(t581, t583);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v584, unsigned long v585) {
bb586:
  int* __first587;
  unsigned long __n588;
  int* __retval589;
  struct std___UninitDestroyGuard_int____void_ __guard590;
  __first587 = v584;
  __n588 = v585;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard590, &__first587);
      while (1) {
        unsigned long t592 = __n588;
        unsigned long c593 = 0;
        _Bool c594 = ((t592 > c593)) ? 1 : 0;
        if (!c594) break;
        int* t595 = __first587;
        void_std___Construct_int_(t595);
      for_step591: ;
        unsigned long t596 = __n588;
        unsigned long u597 = t596 - 1;
        __n588 = u597;
        int* t598 = __first587;
        int c599 = 1;
        int* ptr600 = &(t598)[c599];
        __first587 = ptr600;
      }
    std___UninitDestroyGuard_int___void___release(&__guard590);
    int* t601 = __first587;
    __retval589 = t601;
    int* t602 = __retval589;
    int* ret_val603 = t602;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard590);
    }
    return ret_val603;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v604, int* v605, int* v606) {
bb607:
  int* __first608;
  int* __last609;
  int* __value610;
  _Bool __load_outside_loop611;
  int __val612;
  __first608 = v604;
  __last609 = v605;
  __value610 = v606;
  _Bool c613 = 1;
  __load_outside_loop611 = c613;
  int* t614 = __value610;
  int t615 = *t614;
  __val612 = t615;
    while (1) {
      int* t617 = __first608;
      int* t618 = __last609;
      _Bool c619 = ((t617 != t618)) ? 1 : 0;
      if (!c619) break;
      int t620 = __val612;
      int* t621 = __first608;
      *t621 = t620;
    for_step616: ;
      int* t622 = __first608;
      int c623 = 1;
      int* ptr624 = &(t622)[c623];
      __first608 = ptr624;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v625, int* v626, int* v627) {
bb628:
  int* __first629;
  int* __last630;
  int* __value631;
  __first629 = v625;
  __last630 = v626;
  __value631 = v627;
  int* t632 = __first629;
  int* t633 = __last630;
  int* t634 = __value631;
  void_std____fill_a1_int___int_(t632, t633, t634);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v635, unsigned long v636, int* v637, struct std__random_access_iterator_tag v638) {
bb639:
  int* __first640;
  unsigned long __n641;
  int* __value642;
  struct std__random_access_iterator_tag unnamed643;
  int* __retval644;
  __first640 = v635;
  __n641 = v636;
  __value642 = v637;
  unnamed643 = v638;
    unsigned long t645 = __n641;
    unsigned long c646 = 0;
    _Bool c647 = ((t645 <= c646)) ? 1 : 0;
    if (c647) {
      int* t648 = __first640;
      __retval644 = t648;
      int* t649 = __retval644;
      return t649;
    }
  int* t650 = __first640;
  int* t651 = __first640;
  unsigned long t652 = __n641;
  int* ptr653 = &(t651)[t652];
  int* t654 = __value642;
  void_std____fill_a_int___int_(t650, ptr653, t654);
  int* t655 = __first640;
  unsigned long t656 = __n641;
  int* ptr657 = &(t655)[t656];
  __retval644 = ptr657;
  int* t658 = __retval644;
  return t658;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v659) {
bb660:
  unsigned long __n661;
  unsigned long __retval662;
  __n661 = v659;
  unsigned long t663 = __n661;
  __retval662 = t663;
  unsigned long t664 = __retval662;
  return t664;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v665) {
bb666:
  int** unnamed667;
  struct std__random_access_iterator_tag __retval668;
  unnamed667 = v665;
  struct std__random_access_iterator_tag t669 = __retval668;
  return t669;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v670, unsigned long v671, int* v672) {
bb673:
  int* __first674;
  unsigned long __n675;
  int* __value676;
  int* __retval677;
  struct std__random_access_iterator_tag agg_tmp0678;
  __first674 = v670;
  __n675 = v671;
  __value676 = v672;
  int* t679 = __first674;
  unsigned long t680 = __n675;
  unsigned long r681 = std____size_to_integer(t680);
  int* t682 = __value676;
  struct std__random_access_iterator_tag r683 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first674);
  agg_tmp0678 = r683;
  struct std__random_access_iterator_tag t684 = agg_tmp0678;
  int* r685 = int__std____fill_n_a_int___unsigned_long__int_(t679, r681, t682, t684);
  __retval677 = r685;
  int* t686 = __retval677;
  return t686;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v687, unsigned long v688) {
bb689:
  int* __first690;
  unsigned long __n691;
  int* __retval692;
  __first690 = v687;
  __n691 = v688;
    unsigned long t693 = __n691;
    unsigned long c694 = 0;
    _Bool c695 = ((t693 > c694)) ? 1 : 0;
    if (c695) {
      int* __val696;
      int* t697 = __first690;
      __val696 = t697;
      int* t698 = __val696;
      void_std___Construct_int_(t698);
      int* t699 = __first690;
      int c700 = 1;
      int* ptr701 = &(t699)[c700];
      __first690 = ptr701;
      int* t702 = __first690;
      unsigned long t703 = __n691;
      unsigned long c704 = 1;
      unsigned long b705 = t703 - c704;
      int* t706 = __val696;
      int* r707 = int__std__fill_n_int___unsigned_long__int_(t702, b705, t706);
      __first690 = r707;
    }
  int* t708 = __first690;
  __retval692 = t708;
  int* t709 = __retval692;
  return t709;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v710, unsigned long v711) {
bb712:
  int* __first713;
  unsigned long __n714;
  int* __retval715;
  _Bool __can_fill716;
  __first713 = v710;
  __n714 = v711;
    _Bool r717 = std__is_constant_evaluated();
    if (r717) {
      int* t718 = __first713;
      unsigned long t719 = __n714;
      int* r720 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t718, t719);
      __retval715 = r720;
      int* t721 = __retval715;
      return t721;
    }
  _Bool c722 = 1;
  __can_fill716 = c722;
  int* t723 = __first713;
  unsigned long t724 = __n714;
  int* r725 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t723, t724);
  __retval715 = r725;
  int* t726 = __retval715;
  return t726;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v727, unsigned long v728, struct std__allocator_int_* v729) {
bb730:
  int* __first731;
  unsigned long __n732;
  struct std__allocator_int_* unnamed733;
  int* __retval734;
  __first731 = v727;
  __n732 = v728;
  unnamed733 = v729;
  int* t735 = __first731;
  unsigned long t736 = __n732;
  int* r737 = int__std____uninitialized_default_n_int___unsigned_long_(t735, t736);
  __retval734 = r737;
  int* t738 = __retval734;
  return t738;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v739) {
bb740:
  struct std___Vector_base_int__std__allocator_int__* this741;
  struct std__allocator_int_* __retval742;
  this741 = v739;
  struct std___Vector_base_int__std__allocator_int__* t743 = this741;
  struct std__allocator_int_* base744 = (struct std__allocator_int_*)((char *)&(t743->_M_impl) + 0);
  __retval742 = base744;
  struct std__allocator_int_* t745 = __retval742;
  return t745;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v746, unsigned long v747) {
bb748:
  struct std__vector_int__std__allocator_int__* this749;
  unsigned long __n750;
  this749 = v746;
  __n750 = v747;
  struct std__vector_int__std__allocator_int__* t751 = this749;
  struct std___Vector_base_int__std__allocator_int__* base752 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t751 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base753 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base752->_M_impl) + 0);
  int* t754 = base753->_M_start;
  unsigned long t755 = __n750;
  struct std___Vector_base_int__std__allocator_int__* base756 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t751 + 0);
  struct std__allocator_int_* r757 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base756);
  int* r758 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t754, t755, r757);
  struct std___Vector_base_int__std__allocator_int__* base759 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t751 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base760 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base759->_M_impl) + 0);
  base760->_M_finish = r758;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v761, int* v762, unsigned long v763) {
bb764:
  struct std____new_allocator_int_* this765;
  int* __p766;
  unsigned long __n767;
  this765 = v761;
  __p766 = v762;
  __n767 = v763;
  struct std____new_allocator_int_* t768 = this765;
    unsigned long c769 = 4;
    unsigned long c770 = 16;
    _Bool c771 = ((c769 > c770)) ? 1 : 0;
    if (c771) {
      int* t772 = __p766;
      void* cast773 = (void*)t772;
      unsigned long t774 = __n767;
      unsigned long c775 = 4;
      unsigned long b776 = t774 * c775;
      unsigned long c777 = 4;
      operator_delete_3(cast773, b776, c777);
      return;
    }
  int* t778 = __p766;
  void* cast779 = (void*)t778;
  unsigned long t780 = __n767;
  unsigned long c781 = 4;
  unsigned long b782 = t780 * c781;
  operator_delete_2(cast779, b782);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v783, int* v784, unsigned long v785) {
bb786:
  struct std__allocator_int_* this787;
  int* __p788;
  unsigned long __n789;
  this787 = v783;
  __p788 = v784;
  __n789 = v785;
  struct std__allocator_int_* t790 = this787;
    _Bool r791 = std____is_constant_evaluated();
    if (r791) {
      int* t792 = __p788;
      void* cast793 = (void*)t792;
      operator_delete(cast793);
      return;
    }
  struct std____new_allocator_int_* base794 = (struct std____new_allocator_int_*)((char *)t790 + 0);
  int* t795 = __p788;
  unsigned long t796 = __n789;
  std____new_allocator_int___deallocate(base794, t795, t796);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v797, int* v798, unsigned long v799) {
bb800:
  struct std__allocator_int_* __a801;
  int* __p802;
  unsigned long __n803;
  __a801 = v797;
  __p802 = v798;
  __n803 = v799;
  struct std__allocator_int_* t804 = __a801;
  int* t805 = __p802;
  unsigned long t806 = __n803;
  std__allocator_int___deallocate(t804, t805, t806);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v807, int* v808, unsigned long v809) {
bb810:
  struct std___Vector_base_int__std__allocator_int__* this811;
  int* __p812;
  unsigned long __n813;
  this811 = v807;
  __p812 = v808;
  __n813 = v809;
  struct std___Vector_base_int__std__allocator_int__* t814 = this811;
    int* t815 = __p812;
    _Bool cast816 = (_Bool)t815;
    if (cast816) {
      struct std__allocator_int_* base817 = (struct std__allocator_int_*)((char *)&(t814->_M_impl) + 0);
      int* t818 = __p812;
      unsigned long t819 = __n813;
      std__allocator_traits_std__allocator_int_____deallocate(base817, t818, t819);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v820) {
bb821:
  struct std___Vector_base_int__std__allocator_int__* this822;
  this822 = v820;
  struct std___Vector_base_int__std__allocator_int__* t823 = this822;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base824 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t823->_M_impl) + 0);
    int* t825 = base824->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base826 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t823->_M_impl) + 0);
    int* t827 = base826->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base828 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t823->_M_impl) + 0);
    int* t829 = base828->_M_start;
    long diff830 = t827 - t829;
    unsigned long cast831 = (unsigned long)diff830;
    std___Vector_base_int__std__allocator_int______M_deallocate(t823, t825, cast831);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t823->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v832, struct std____new_allocator_int_* v833) {
bb834:
  struct std____new_allocator_int_* this835;
  struct std____new_allocator_int_* unnamed836;
  this835 = v832;
  unnamed836 = v833;
  struct std____new_allocator_int_* t837 = this835;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v838) {
bb839:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this840;
  this840 = v838;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t841 = this840;
  int* c842 = ((void*)0);
  t841->_M_start = c842;
  int* c843 = ((void*)0);
  t841->_M_finish = c843;
  int* c844 = ((void*)0);
  t841->_M_end_of_storage = c844;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v845) {
bb846:
  int* __location847;
  __location847 = v845;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v848, int* v849) {
bb850:
  int* __first851;
  int* __last852;
  __first851 = v848;
  __last852 = v849;
      _Bool r853 = std____is_constant_evaluated();
      if (r853) {
          while (1) {
            int* t855 = __first851;
            int* t856 = __last852;
            _Bool c857 = ((t855 != t856)) ? 1 : 0;
            if (!c857) break;
            int* t858 = __first851;
            void_std__destroy_at_int_(t858);
          for_step854: ;
            int* t859 = __first851;
            int c860 = 1;
            int* ptr861 = &(t859)[c860];
            __first851 = ptr861;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v862, int* v863, struct std__allocator_int_* v864) {
bb865:
  int* __first866;
  int* __last867;
  struct std__allocator_int_* unnamed868;
  __first866 = v862;
  __last867 = v863;
  unnamed868 = v864;
  int* t869 = __first866;
  int* t870 = __last867;
  void_std___Destroy_int__(t869, t870);
  return;
}

