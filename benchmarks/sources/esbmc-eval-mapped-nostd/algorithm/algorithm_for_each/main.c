extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
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
char _str[2] = " ";
struct myclass myobject;
char _str_1[19] = "myvector contains:";
char _str_2[20] = "\nmyvector contains:";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
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
void myfunction(int p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void* void___std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void myclass__operator__(struct myclass* p0, int p1);
struct myclass myclass_std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct myclass p2);
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
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator_(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v27, char* v28) {
bb29:
  char* __c130;
  char* __c231;
  _Bool __retval32;
  __c130 = v27;
  __c231 = v28;
  char* t33 = __c130;
  char t34 = *t33;
  int cast35 = (int)t34;
  char* t36 = __c231;
  char t37 = *t36;
  int cast38 = (int)t37;
  _Bool c39 = ((cast35 == cast38)) ? 1 : 0;
  __retval32 = c39;
  _Bool t40 = __retval32;
  return t40;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v41) {
bb42:
  char* __p43;
  unsigned long __retval44;
  unsigned long __i45;
  __p43 = v41;
  unsigned long c46 = 0;
  __i45 = c46;
    char ref_tmp047;
    while (1) {
      unsigned long t48 = __i45;
      char* t49 = __p43;
      char* ptr50 = &(t49)[t48];
      char c51 = 0;
      ref_tmp047 = c51;
      _Bool r52 = __gnu_cxx__char_traits_char___eq(ptr50, &ref_tmp047);
      _Bool u53 = !r52;
      if (!u53) break;
      unsigned long t54 = __i45;
      unsigned long u55 = t54 + 1;
      __i45 = u55;
    }
  unsigned long t56 = __i45;
  __retval44 = t56;
  unsigned long t57 = __retval44;
  return t57;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v58) {
bb59:
  char* __s60;
  unsigned long __retval61;
  __s60 = v58;
    _Bool r62 = std____is_constant_evaluated();
    if (r62) {
      char* t63 = __s60;
      unsigned long r64 = __gnu_cxx__char_traits_char___length(t63);
      __retval61 = r64;
      unsigned long t65 = __retval61;
      return t65;
    }
  char* t66 = __s60;
  unsigned long r67 = strlen(t66);
  __retval61 = r67;
  unsigned long t68 = __retval61;
  return t68;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v69, char* v70) {
bb71:
  struct std__basic_ostream_char__std__char_traits_char__* __out72;
  char* __s73;
  struct std__basic_ostream_char__std__char_traits_char__* __retval74;
  __out72 = v69;
  __s73 = v70;
    char* t75 = __s73;
    _Bool cast76 = (_Bool)t75;
    _Bool u77 = !cast76;
    if (u77) {
      struct std__basic_ostream_char__std__char_traits_char__* t78 = __out72;
      void** v79 = (void**)t78;
      void* v80 = *((void**)v79);
      unsigned char* cast81 = (unsigned char*)v80;
      long c82 = -24;
      unsigned char* ptr83 = &(cast81)[c82];
      long* cast84 = (long*)ptr83;
      long t85 = *cast84;
      unsigned char* cast86 = (unsigned char*)t78;
      unsigned char* ptr87 = &(cast86)[t85];
      struct std__basic_ostream_char__std__char_traits_char__* cast88 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr87;
      struct std__basic_ios_char__std__char_traits_char__* cast89 = (struct std__basic_ios_char__std__char_traits_char__*)cast88;
      int t90 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast89, t90);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t91 = __out72;
      char* t92 = __s73;
      char* t93 = __s73;
      unsigned long r94 = std__char_traits_char___length(t93);
      long cast95 = (long)r94;
      struct std__basic_ostream_char__std__char_traits_char__* r96 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t91, t92, cast95);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t97 = __out72;
  __retval74 = t97;
  struct std__basic_ostream_char__std__char_traits_char__* t98 = __retval74;
  return t98;
}

// function: _Z10myfunctioni
void myfunction(int v99) {
bb100:
  int i101;
  i101 = v99;
  char* cast102 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast102);
  int t104 = i101;
  struct std__basic_ostream_char__std__char_traits_char__* r105 = std__ostream__operator__(r103, t104);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v106) {
bb107:
  struct std__vector_int__std__allocator_int__* this108;
  this108 = v106;
  struct std__vector_int__std__allocator_int__* t109 = this108;
  struct std___Vector_base_int__std__allocator_int__* base110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base110);
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v111, int* v112) {
bb113:
  int* __location114;
  int* __args115;
  int* __retval116;
  void* __loc117;
  __location114 = v111;
  __args115 = v112;
  int* t118 = __location114;
  void* cast119 = (void*)t118;
  __loc117 = cast119;
    void* t120 = __loc117;
    int* cast121 = (int*)t120;
    int* t122 = __args115;
    int t123 = *t122;
    *cast121 = t123;
    __retval116 = cast121;
    int* t124 = __retval116;
    return t124;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v125, int* v126, int* v127) {
bb128:
  struct std__allocator_int_* __a129;
  int* __p130;
  int* __args131;
  __a129 = v125;
  __p130 = v126;
  __args131 = v127;
  int* t132 = __p130;
  int* t133 = __args131;
  int* r134 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t132, t133);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v135, unsigned long* v136) {
bb137:
  unsigned long* __a138;
  unsigned long* __b139;
  unsigned long* __retval140;
  __a138 = v135;
  __b139 = v136;
    unsigned long* t141 = __b139;
    unsigned long t142 = *t141;
    unsigned long* t143 = __a138;
    unsigned long t144 = *t143;
    _Bool c145 = ((t142 < t144)) ? 1 : 0;
    if (c145) {
      unsigned long* t146 = __b139;
      __retval140 = t146;
      unsigned long* t147 = __retval140;
      return t147;
    }
  unsigned long* t148 = __a138;
  __retval140 = t148;
  unsigned long* t149 = __retval140;
  return t149;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v150) {
bb151:
  struct std__allocator_int_* __a152;
  unsigned long __retval153;
  unsigned long __diffmax154;
  unsigned long __allocmax155;
  __a152 = v150;
  unsigned long c156 = 2305843009213693951;
  __diffmax154 = c156;
  unsigned long c157 = 4611686018427387903;
  __allocmax155 = c157;
  unsigned long* r158 = unsigned_long_const__std__min_unsigned_long_(&__diffmax154, &__allocmax155);
  unsigned long t159 = *r158;
  __retval153 = t159;
  unsigned long t160 = __retval153;
  return t160;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v161) {
bb162:
  struct std___Vector_base_int__std__allocator_int__* this163;
  struct std__allocator_int_* __retval164;
  this163 = v161;
  struct std___Vector_base_int__std__allocator_int__* t165 = this163;
  struct std__allocator_int_* base166 = (struct std__allocator_int_*)((char *)&(t165->_M_impl) + 0);
  __retval164 = base166;
  struct std__allocator_int_* t167 = __retval164;
  return t167;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v168) {
bb169:
  struct std__vector_int__std__allocator_int__* this170;
  unsigned long __retval171;
  this170 = v168;
  struct std__vector_int__std__allocator_int__* t172 = this170;
  struct std___Vector_base_int__std__allocator_int__* base173 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t172 + 0);
  struct std__allocator_int_* r174 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base173);
  unsigned long r175 = std__vector_int__std__allocator_int______S_max_size(r174);
  __retval171 = r175;
  unsigned long t176 = __retval171;
  return t176;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v177) {
bb178:
  struct std__vector_int__std__allocator_int__* this179;
  unsigned long __retval180;
  long __dif181;
  this179 = v177;
  struct std__vector_int__std__allocator_int__* t182 = this179;
  struct std___Vector_base_int__std__allocator_int__* base183 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base184 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base183->_M_impl) + 0);
  int* t185 = base184->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base186 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base187 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base186->_M_impl) + 0);
  int* t188 = base187->_M_start;
  long diff189 = t185 - t188;
  __dif181 = diff189;
    long t190 = __dif181;
    long c191 = 0;
    _Bool c192 = ((t190 < c191)) ? 1 : 0;
    if (c192) {
      __builtin_unreachable();
    }
  long t193 = __dif181;
  unsigned long cast194 = (unsigned long)t193;
  __retval180 = cast194;
  unsigned long t195 = __retval180;
  return t195;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v196, unsigned long* v197) {
bb198:
  unsigned long* __a199;
  unsigned long* __b200;
  unsigned long* __retval201;
  __a199 = v196;
  __b200 = v197;
    unsigned long* t202 = __a199;
    unsigned long t203 = *t202;
    unsigned long* t204 = __b200;
    unsigned long t205 = *t204;
    _Bool c206 = ((t203 < t205)) ? 1 : 0;
    if (c206) {
      unsigned long* t207 = __b200;
      __retval201 = t207;
      unsigned long* t208 = __retval201;
      return t208;
    }
  unsigned long* t209 = __a199;
  __retval201 = t209;
  unsigned long* t210 = __retval201;
  return t210;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v211, unsigned long v212, char* v213) {
bb214:
  struct std__vector_int__std__allocator_int__* this215;
  unsigned long __n216;
  char* __s217;
  unsigned long __retval218;
  unsigned long __len219;
  unsigned long ref_tmp0220;
  this215 = v211;
  __n216 = v212;
  __s217 = v213;
  struct std__vector_int__std__allocator_int__* t221 = this215;
    unsigned long r222 = std__vector_int__std__allocator_int_____max_size___const(t221);
    unsigned long r223 = std__vector_int__std__allocator_int_____size___const(t221);
    unsigned long b224 = r222 - r223;
    unsigned long t225 = __n216;
    _Bool c226 = ((b224 < t225)) ? 1 : 0;
    if (c226) {
      char* t227 = __s217;
      std____throw_length_error(t227);
    }
  unsigned long r228 = std__vector_int__std__allocator_int_____size___const(t221);
  unsigned long r229 = std__vector_int__std__allocator_int_____size___const(t221);
  ref_tmp0220 = r229;
  unsigned long* r230 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0220, &__n216);
  unsigned long t231 = *r230;
  unsigned long b232 = r228 + t231;
  __len219 = b232;
  unsigned long t233 = __len219;
  unsigned long r234 = std__vector_int__std__allocator_int_____size___const(t221);
  _Bool c235 = ((t233 < r234)) ? 1 : 0;
  _Bool ternary236;
  if (c235) {
    _Bool c237 = 1;
    ternary236 = (_Bool)c237;
  } else {
    unsigned long t238 = __len219;
    unsigned long r239 = std__vector_int__std__allocator_int_____max_size___const(t221);
    _Bool c240 = ((t238 > r239)) ? 1 : 0;
    ternary236 = (_Bool)c240;
  }
  unsigned long ternary241;
  if (ternary236) {
    unsigned long r242 = std__vector_int__std__allocator_int_____max_size___const(t221);
    ternary241 = (unsigned long)r242;
  } else {
    unsigned long t243 = __len219;
    ternary241 = (unsigned long)t243;
  }
  __retval218 = ternary241;
  unsigned long t244 = __retval218;
  return t244;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v245) {
bb246:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this247;
  int** __retval248;
  this247 = v245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t249 = this247;
  __retval248 = &t249->_M_current;
  int** t250 = __retval248;
  return t250;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v251, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v252) {
bb253:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs254;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs255;
  long __retval256;
  __lhs254 = v251;
  __rhs255 = v252;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t257 = __lhs254;
  int** r258 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t257);
  int* t259 = *r258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t260 = __rhs255;
  int** r261 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t260);
  int* t262 = *r261;
  long diff263 = t259 - t262;
  __retval256 = diff263;
  long t264 = __retval256;
  return t264;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v265) {
bb266:
  struct std____new_allocator_int_* this267;
  unsigned long __retval268;
  this267 = v265;
  struct std____new_allocator_int_* t269 = this267;
  unsigned long c270 = 9223372036854775807;
  unsigned long c271 = 4;
  unsigned long b272 = c270 / c271;
  __retval268 = b272;
  unsigned long t273 = __retval268;
  return t273;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v274, unsigned long v275, void* v276) {
bb277:
  struct std____new_allocator_int_* this278;
  unsigned long __n279;
  void* unnamed280;
  int* __retval281;
  this278 = v274;
  __n279 = v275;
  unnamed280 = v276;
  struct std____new_allocator_int_* t282 = this278;
    unsigned long t283 = __n279;
    unsigned long r284 = std____new_allocator_int____M_max_size___const(t282);
    _Bool c285 = ((t283 > r284)) ? 1 : 0;
    if (c285) {
        unsigned long t286 = __n279;
        unsigned long c287 = -1;
        unsigned long c288 = 4;
        unsigned long b289 = c287 / c288;
        _Bool c290 = ((t286 > b289)) ? 1 : 0;
        if (c290) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c291 = 4;
    unsigned long c292 = 16;
    _Bool c293 = ((c291 > c292)) ? 1 : 0;
    if (c293) {
      unsigned long __al294;
      unsigned long c295 = 4;
      __al294 = c295;
      unsigned long t296 = __n279;
      unsigned long c297 = 4;
      unsigned long b298 = t296 * c297;
      unsigned long t299 = __al294;
      void* r300 = operator_new_2(b298, t299);
      int* cast301 = (int*)r300;
      __retval281 = cast301;
      int* t302 = __retval281;
      return t302;
    }
  unsigned long t303 = __n279;
  unsigned long c304 = 4;
  unsigned long b305 = t303 * c304;
  void* r306 = operator_new(b305);
  int* cast307 = (int*)r306;
  __retval281 = cast307;
  int* t308 = __retval281;
  return t308;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v309, unsigned long v310) {
bb311:
  struct std__allocator_int_* this312;
  unsigned long __n313;
  int* __retval314;
  this312 = v309;
  __n313 = v310;
  struct std__allocator_int_* t315 = this312;
    _Bool r316 = std____is_constant_evaluated();
    if (r316) {
        unsigned long t317 = __n313;
        unsigned long c318 = 4;
        unsigned long ovr319;
        _Bool ovf320 = __builtin_mul_overflow(t317, c318, &ovr319);
        __n313 = ovr319;
        if (ovf320) {
          std____throw_bad_array_new_length();
        }
      unsigned long t321 = __n313;
      void* r322 = operator_new(t321);
      int* cast323 = (int*)r322;
      __retval314 = cast323;
      int* t324 = __retval314;
      return t324;
    }
  struct std____new_allocator_int_* base325 = (struct std____new_allocator_int_*)((char *)t315 + 0);
  unsigned long t326 = __n313;
  void* c327 = ((void*)0);
  int* r328 = std____new_allocator_int___allocate(base325, t326, c327);
  __retval314 = r328;
  int* t329 = __retval314;
  return t329;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v330, unsigned long v331) {
bb332:
  struct std__allocator_int_* __a333;
  unsigned long __n334;
  int* __retval335;
  __a333 = v330;
  __n334 = v331;
  struct std__allocator_int_* t336 = __a333;
  unsigned long t337 = __n334;
  int* r338 = std__allocator_int___allocate(t336, t337);
  __retval335 = r338;
  int* t339 = __retval335;
  return t339;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v340, unsigned long v341) {
bb342:
  struct std___Vector_base_int__std__allocator_int__* this343;
  unsigned long __n344;
  int* __retval345;
  this343 = v340;
  __n344 = v341;
  struct std___Vector_base_int__std__allocator_int__* t346 = this343;
  unsigned long t347 = __n344;
  unsigned long c348 = 0;
  _Bool c349 = ((t347 != c348)) ? 1 : 0;
  int* ternary350;
  if (c349) {
    struct std__allocator_int_* base351 = (struct std__allocator_int_*)((char *)&(t346->_M_impl) + 0);
    unsigned long t352 = __n344;
    int* r353 = std__allocator_traits_std__allocator_int_____allocate(base351, t352);
    ternary350 = (int*)r353;
  } else {
    int* c354 = ((void*)0);
    ternary350 = (int*)c354;
  }
  __retval345 = ternary350;
  int* t355 = __retval345;
  return t355;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v356, int* v357, unsigned long v358, struct std___Vector_base_int__std__allocator_int__* v359) {
bb360:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this361;
  int* __s362;
  unsigned long __l363;
  struct std___Vector_base_int__std__allocator_int__* __vect364;
  this361 = v356;
  __s362 = v357;
  __l363 = v358;
  __vect364 = v359;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t365 = this361;
  int* t366 = __s362;
  t365->_M_storage = t366;
  unsigned long t367 = __l363;
  t365->_M_len = t367;
  struct std___Vector_base_int__std__allocator_int__* t368 = __vect364;
  t365->_M_vect = t368;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v369) {
bb370:
  int* __ptr371;
  int* __retval372;
  __ptr371 = v369;
  int* t373 = __ptr371;
  __retval372 = t373;
  int* t374 = __retval372;
  return t374;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v375) {
bb376:
  int** __ptr377;
  int* __retval378;
  __ptr377 = v375;
  int** t379 = __ptr377;
  int* t380 = *t379;
  int* r381 = int__std__to_address_int_(t380);
  __retval378 = r381;
  int* t382 = __retval378;
  return t382;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb383:
  _Bool __retval384;
    _Bool c385 = 0;
    __retval384 = c385;
    _Bool t386 = __retval384;
    return t386;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v387, int** v388) {
bb389:
  struct __gnu_cxx____normal_iterator_int____void_* this390;
  int** __i391;
  this390 = v387;
  __i391 = v388;
  struct __gnu_cxx____normal_iterator_int____void_* t392 = this390;
  int** t393 = __i391;
  int* t394 = *t393;
  t392->_M_current = t394;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v395) {
bb396:
  int* __location397;
  __location397 = v395;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v398, int* v399) {
bb400:
  struct std__allocator_int_* __a401;
  int* __p402;
  __a401 = v398;
  __p402 = v399;
  int* t403 = __p402;
  void_std__destroy_at_int_(t403);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v404, int* v405, struct std__allocator_int_* v406) {
bb407:
  int* __dest408;
  int* __orig409;
  struct std__allocator_int_* __alloc410;
  __dest408 = v404;
  __orig409 = v405;
  __alloc410 = v406;
  struct std__allocator_int_* t411 = __alloc410;
  int* t412 = __dest408;
  int* t413 = __orig409;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t411, t412, t413);
  struct std__allocator_int_* t414 = __alloc410;
  int* t415 = __orig409;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t414, t415);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v416) {
bb417:
  struct __gnu_cxx____normal_iterator_int____void_* this418;
  int* __retval419;
  this418 = v416;
  struct __gnu_cxx____normal_iterator_int____void_* t420 = this418;
  int* t421 = t420->_M_current;
  __retval419 = t421;
  int* t422 = __retval419;
  return t422;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v423) {
bb424:
  struct __gnu_cxx____normal_iterator_int____void_* this425;
  struct __gnu_cxx____normal_iterator_int____void_* __retval426;
  this425 = v423;
  struct __gnu_cxx____normal_iterator_int____void_* t427 = this425;
  int* t428 = t427->_M_current;
  int c429 = 1;
  int* ptr430 = &(t428)[c429];
  t427->_M_current = ptr430;
  __retval426 = t427;
  struct __gnu_cxx____normal_iterator_int____void_* t431 = __retval426;
  return t431;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v432, int* v433, struct __gnu_cxx____normal_iterator_int____void_ v434, struct std__allocator_int_* v435) {
bb436:
  int* __first437;
  int* __last438;
  struct __gnu_cxx____normal_iterator_int____void_ __result439;
  struct std__allocator_int_* __alloc440;
  struct __gnu_cxx____normal_iterator_int____void_ __retval441;
  __first437 = v432;
  __last438 = v433;
  __result439 = v434;
  __alloc440 = v435;
  __retval441 = __result439; // copy
    while (1) {
      int* t443 = __first437;
      int* t444 = __last438;
      _Bool c445 = ((t443 != t444)) ? 1 : 0;
      if (!c445) break;
      int* r446 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval441);
      int* t447 = __first437;
      struct std__allocator_int_* t448 = __alloc440;
      void_std____relocate_object_a_int__int__std__allocator_int___(r446, t447, t448);
    for_step442: ;
      int* t449 = __first437;
      int c450 = 1;
      int* ptr451 = &(t449)[c450];
      __first437 = ptr451;
      struct __gnu_cxx____normal_iterator_int____void_* r452 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval441);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t453 = __retval441;
  return t453;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v454, struct __gnu_cxx____normal_iterator_int____void_* v455) {
bb456:
  struct __gnu_cxx____normal_iterator_int____void_* this457;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed458;
  struct __gnu_cxx____normal_iterator_int____void_* __retval459;
  this457 = v454;
  unnamed458 = v455;
  struct __gnu_cxx____normal_iterator_int____void_* t460 = this457;
  struct __gnu_cxx____normal_iterator_int____void_* t461 = unnamed458;
  int* t462 = t461->_M_current;
  t460->_M_current = t462;
  __retval459 = t460;
  struct __gnu_cxx____normal_iterator_int____void_* t463 = __retval459;
  return t463;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v464) {
bb465:
  struct __gnu_cxx____normal_iterator_int____void_* this466;
  int** __retval467;
  this466 = v464;
  struct __gnu_cxx____normal_iterator_int____void_* t468 = this466;
  __retval467 = &t468->_M_current;
  int** t469 = __retval467;
  return t469;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v470, int* v471, int* v472, struct std__allocator_int_* v473) {
bb474:
  int* __first475;
  int* __last476;
  int* __result477;
  struct std__allocator_int_* __alloc478;
  int* __retval479;
  long __count480;
  __first475 = v470;
  __last476 = v471;
  __result477 = v472;
  __alloc478 = v473;
  int* t481 = __last476;
  int* t482 = __first475;
  long diff483 = t481 - t482;
  __count480 = diff483;
    long t484 = __count480;
    long c485 = 0;
    _Bool c486 = ((t484 > c485)) ? 1 : 0;
    if (c486) {
        _Bool r487 = std__is_constant_evaluated();
        if (r487) {
          struct __gnu_cxx____normal_iterator_int____void_ __out488;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0489;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0490;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out488, &__result477);
          int* t491 = __first475;
          int* t492 = __last476;
          agg_tmp0490 = __out488; // copy
          struct std__allocator_int_* t493 = __alloc478;
          struct __gnu_cxx____normal_iterator_int____void_ t494 = agg_tmp0490;
          struct __gnu_cxx____normal_iterator_int____void_ r495 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t491, t492, t494, t493);
          ref_tmp0489 = r495;
          struct __gnu_cxx____normal_iterator_int____void_* r496 = __gnu_cxx____normal_iterator_int___void___operator_(&__out488, &ref_tmp0489);
          int** r497 = __gnu_cxx____normal_iterator_int___void___base___const(&__out488);
          int* t498 = *r497;
          __retval479 = t498;
          int* t499 = __retval479;
          return t499;
        }
      int* t500 = __result477;
      void* cast501 = (void*)t500;
      int* t502 = __first475;
      void* cast503 = (void*)t502;
      long t504 = __count480;
      unsigned long cast505 = (unsigned long)t504;
      unsigned long c506 = 4;
      unsigned long b507 = cast505 * c506;
      void* r508 = memcpy(cast501, cast503, b507);
    }
  int* t509 = __result477;
  long t510 = __count480;
  int* ptr511 = &(t509)[t510];
  __retval479 = ptr511;
  int* t512 = __retval479;
  return t512;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v513) {
bb514:
  int* __it515;
  int* __retval516;
  __it515 = v513;
  int* t517 = __it515;
  __retval516 = t517;
  int* t518 = __retval516;
  return t518;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v519, int* v520, int* v521, struct std__allocator_int_* v522) {
bb523:
  int* __first524;
  int* __last525;
  int* __result526;
  struct std__allocator_int_* __alloc527;
  int* __retval528;
  __first524 = v519;
  __last525 = v520;
  __result526 = v521;
  __alloc527 = v522;
  int* t529 = __first524;
  int* r530 = int__std____niter_base_int__(t529);
  int* t531 = __last525;
  int* r532 = int__std____niter_base_int__(t531);
  int* t533 = __result526;
  int* r534 = int__std____niter_base_int__(t533);
  struct std__allocator_int_* t535 = __alloc527;
  int* r536 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r530, r532, r534, t535);
  __retval528 = r536;
  int* t537 = __retval528;
  return t537;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v538, int* v539, int* v540, struct std__allocator_int_* v541) {
bb542:
  int* __first543;
  int* __last544;
  int* __result545;
  struct std__allocator_int_* __alloc546;
  int* __retval547;
  __first543 = v538;
  __last544 = v539;
  __result545 = v540;
  __alloc546 = v541;
  int* t548 = __first543;
  int* t549 = __last544;
  int* t550 = __result545;
  struct std__allocator_int_* t551 = __alloc546;
  int* r552 = int__std____relocate_a_int___int___std__allocator_int___(t548, t549, t550, t551);
  __retval547 = r552;
  int* t553 = __retval547;
  return t553;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v554) {
bb555:
  struct std___Vector_base_int__std__allocator_int__* this556;
  struct std__allocator_int_* __retval557;
  this556 = v554;
  struct std___Vector_base_int__std__allocator_int__* t558 = this556;
  struct std__allocator_int_* base559 = (struct std__allocator_int_*)((char *)&(t558->_M_impl) + 0);
  __retval557 = base559;
  struct std__allocator_int_* t560 = __retval557;
  return t560;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v561) {
bb562:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this563;
  this563 = v561;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t564 = this563;
    int* t565 = t564->_M_storage;
    _Bool cast566 = (_Bool)t565;
    if (cast566) {
      struct std___Vector_base_int__std__allocator_int__* t567 = t564->_M_vect;
      int* t568 = t564->_M_storage;
      unsigned long t569 = t564->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t567, t568, t569);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v570, int* v571) {
bb572:
  struct std__vector_int__std__allocator_int__* this573;
  int* __args574;
  unsigned long __len575;
  int* __old_start576;
  int* __old_finish577;
  unsigned long __elems578;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0579;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1580;
  int* __new_start581;
  int* __new_finish582;
  this573 = v570;
  __args574 = v571;
  struct std__vector_int__std__allocator_int__* t583 = this573;
  unsigned long c584 = 1;
  char* cast585 = (char*)&(_str_3);
  unsigned long r586 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t583, c584, cast585);
  __len575 = r586;
    unsigned long t587 = __len575;
    unsigned long c588 = 0;
    _Bool c589 = ((t587 <= c588)) ? 1 : 0;
    if (c589) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base590 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base591 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base590->_M_impl) + 0);
  int* t592 = base591->_M_start;
  __old_start576 = t592;
  struct std___Vector_base_int__std__allocator_int__* base593 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base594 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base593->_M_impl) + 0);
  int* t595 = base594->_M_finish;
  __old_finish577 = t595;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r596 = std__vector_int__std__allocator_int_____end(t583);
  ref_tmp0579 = r596;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r597 = std__vector_int__std__allocator_int_____begin(t583);
  ref_tmp1580 = r597;
  long r598 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0579, &ref_tmp1580);
  unsigned long cast599 = (unsigned long)r598;
  __elems578 = cast599;
  struct std___Vector_base_int__std__allocator_int__* base600 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
  unsigned long t601 = __len575;
  int* r602 = std___Vector_base_int__std__allocator_int______M_allocate(base600, t601);
  __new_start581 = r602;
  int* t603 = __new_start581;
  __new_finish582 = t603;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard604;
    int* ref_tmp2605;
    int* t606 = __new_start581;
    unsigned long t607 = __len575;
    struct std___Vector_base_int__std__allocator_int__* base608 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard604, t606, t607, base608);
      struct std___Vector_base_int__std__allocator_int__* base609 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
      struct std__allocator_int_* base610 = (struct std__allocator_int_*)((char *)&(base609->_M_impl) + 0);
      int* t611 = __new_start581;
      unsigned long t612 = __elems578;
      int* ptr613 = &(t611)[t612];
      ref_tmp2605 = ptr613;
      int* r614 = auto_std____to_address_int__(&ref_tmp2605);
      int* t615 = __args574;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base610, r614, t615);
        int* t616 = __old_start576;
        int* t617 = __old_finish577;
        int* t618 = __new_start581;
        struct std___Vector_base_int__std__allocator_int__* base619 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
        struct std__allocator_int_* r620 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base619);
        int* r621 = std__vector_int__std__allocator_int______S_relocate(t616, t617, t618, r620);
        __new_finish582 = r621;
        int* t622 = __new_finish582;
        int c623 = 1;
        int* ptr624 = &(t622)[c623];
        __new_finish582 = ptr624;
      int* t625 = __old_start576;
      __guard604._M_storage = t625;
      struct std___Vector_base_int__std__allocator_int__* base626 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base627 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base626->_M_impl) + 0);
      int* t628 = base627->_M_end_of_storage;
      int* t629 = __old_start576;
      long diff630 = t628 - t629;
      unsigned long cast631 = (unsigned long)diff630;
      __guard604._M_len = cast631;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard604);
    }
  int* t632 = __new_start581;
  struct std___Vector_base_int__std__allocator_int__* base633 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base634 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base633->_M_impl) + 0);
  base634->_M_start = t632;
  int* t635 = __new_finish582;
  struct std___Vector_base_int__std__allocator_int__* base636 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base637 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base636->_M_impl) + 0);
  base637->_M_finish = t635;
  int* t638 = __new_start581;
  unsigned long t639 = __len575;
  int* ptr640 = &(t638)[t639];
  struct std___Vector_base_int__std__allocator_int__* base641 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t583 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base642 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base641->_M_impl) + 0);
  base642->_M_end_of_storage = ptr640;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v643) {
bb644:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this645;
  int** __retval646;
  this645 = v643;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t647 = this645;
  __retval646 = &t647->_M_current;
  int** t648 = __retval646;
  return t648;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v649, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v650) {
bb651:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs652;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs653;
  _Bool __retval654;
  __lhs652 = v649;
  __rhs653 = v650;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t655 = __lhs652;
  int** r656 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t655);
  int* t657 = *r656;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t658 = __rhs653;
  int** r659 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t658);
  int* t660 = *r659;
  _Bool c661 = ((t657 == t660)) ? 1 : 0;
  __retval654 = c661;
  _Bool t662 = __retval654;
  return t662;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v663, int** v664) {
bb665:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this666;
  int** __i667;
  this666 = v663;
  __i667 = v664;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t668 = this666;
  int** t669 = __i667;
  int* t670 = *t669;
  t668->_M_current = t670;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v671) {
bb672:
  struct std__vector_int__std__allocator_int__* this673;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval674;
  this673 = v671;
  struct std__vector_int__std__allocator_int__* t675 = this673;
  struct std___Vector_base_int__std__allocator_int__* base676 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t675 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base677 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base676->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval674, &base677->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t678 = __retval674;
  return t678;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v679) {
bb680:
  struct std__vector_int__std__allocator_int__* this681;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval682;
  this681 = v679;
  struct std__vector_int__std__allocator_int__* t683 = this681;
  struct std___Vector_base_int__std__allocator_int__* base684 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t683 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base685 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base684->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval682, &base685->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t686 = __retval682;
  return t686;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v687) {
bb688:
  struct std__vector_int__std__allocator_int__* this689;
  _Bool __retval690;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0691;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1692;
  this689 = v687;
  struct std__vector_int__std__allocator_int__* t693 = this689;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r694 = std__vector_int__std__allocator_int_____begin___const(t693);
  ref_tmp0691 = r694;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r695 = std__vector_int__std__allocator_int_____end___const(t693);
  ref_tmp1692 = r695;
  _Bool r696 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0691, &ref_tmp1692);
  __retval690 = r696;
  _Bool t697 = __retval690;
  return t697;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v698, int** v699) {
bb700:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this701;
  int** __i702;
  this701 = v698;
  __i702 = v699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t703 = this701;
  int** t704 = __i702;
  int* t705 = *t704;
  t703->_M_current = t705;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v706, long v707) {
bb708:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this709;
  long __n710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval711;
  int* ref_tmp0712;
  this709 = v706;
  __n710 = v707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t713 = this709;
  int* t714 = t713->_M_current;
  long t715 = __n710;
  long u716 = -t715;
  int* ptr717 = &(t714)[u716];
  ref_tmp0712 = ptr717;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval711, &ref_tmp0712);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t718 = __retval711;
  return t718;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v719) {
bb720:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this721;
  int* __retval722;
  this721 = v719;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t723 = this721;
  int* t724 = t723->_M_current;
  __retval722 = t724;
  int* t725 = __retval722;
  return t725;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v726) {
bb727:
  struct std__vector_int__std__allocator_int__* this728;
  int* __retval729;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0730;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1731;
  this728 = v726;
  struct std__vector_int__std__allocator_int__* t732 = this728;
    do {
          _Bool r733 = std__vector_int__std__allocator_int_____empty___const(t732);
          if (r733) {
            char* cast734 = (char*)&(_str_4);
            int c735 = 1370;
            char* cast736 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast737 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast734, c735, cast736, cast737);
          }
      _Bool c738 = 0;
      if (!c738) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r739 = std__vector_int__std__allocator_int_____end(t732);
  ref_tmp1731 = r739;
  long c740 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r741 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1731, c740);
  ref_tmp0730 = r741;
  int* r742 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0730);
  __retval729 = r742;
  int* t743 = __retval729;
  return t743;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v744, int* v745) {
bb746:
  struct std__vector_int__std__allocator_int__* this747;
  int* __args748;
  int* __retval749;
  this747 = v744;
  __args748 = v745;
  struct std__vector_int__std__allocator_int__* t750 = this747;
    struct std___Vector_base_int__std__allocator_int__* base751 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t750 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base752 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base751->_M_impl) + 0);
    int* t753 = base752->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base754 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t750 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base755 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base754->_M_impl) + 0);
    int* t756 = base755->_M_end_of_storage;
    _Bool c757 = ((t753 != t756)) ? 1 : 0;
    if (c757) {
      struct std___Vector_base_int__std__allocator_int__* base758 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t750 + 0);
      struct std__allocator_int_* base759 = (struct std__allocator_int_*)((char *)&(base758->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base760 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t750 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base761 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base760->_M_impl) + 0);
      int* t762 = base761->_M_finish;
      int* t763 = __args748;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base759, t762, t763);
      struct std___Vector_base_int__std__allocator_int__* base764 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t750 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base765 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base764->_M_impl) + 0);
      int* t766 = base765->_M_finish;
      int c767 = 1;
      int* ptr768 = &(t766)[c767];
      base765->_M_finish = ptr768;
    } else {
      int* t769 = __args748;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t750, t769);
    }
  int* r770 = std__vector_int__std__allocator_int_____back(t750);
  __retval749 = r770;
  int* t771 = __retval749;
  return t771;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v772, int* v773) {
bb774:
  struct std__vector_int__std__allocator_int__* this775;
  int* __x776;
  this775 = v772;
  __x776 = v773;
  struct std__vector_int__std__allocator_int__* t777 = this775;
  int* t778 = __x776;
  int* r779 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t777, t778);
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v780, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v781) {
bb782:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs783;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs784;
  _Bool __retval785;
  __lhs783 = v780;
  __rhs784 = v781;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t786 = __lhs783;
  int** r787 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t786);
  int* t788 = *r787;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t789 = __rhs784;
  int** r790 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t789);
  int* t791 = *r790;
  _Bool c792 = ((t788 == t791)) ? 1 : 0;
  __retval785 = c792;
  _Bool t793 = __retval785;
  return t793;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v794) {
bb795:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this796;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval797;
  this796 = v794;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t798 = this796;
  int* t799 = t798->_M_current;
  int c800 = 1;
  int* ptr801 = &(t799)[c800];
  t798->_M_current = ptr801;
  __retval797 = t798;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t802 = __retval797;
  return t802;
}

// function: _ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFviEET0_T_SA_S9_
void* void___std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v803, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v804, void* v805) {
bb806:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first807;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last808;
  void* __f809;
  void* __retval810;
  __first807 = v803;
  __last808 = v804;
  __f809 = v805;
    while (1) {
      _Bool r812 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first807, &__last808);
      _Bool u813 = !r812;
      if (!u813) break;
      void* t814 = __f809;
      int* r815 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first807);
      int t816 = *r815;
      ((void (*)(int))t814)(t816);
    for_step811: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r817 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first807);
    }
  void* t818 = __f809;
  __retval810 = t818;
  void* t819 = __retval810;
  return t819;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v820) {
bb821:
  struct std__vector_int__std__allocator_int__* this822;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval823;
  this822 = v820;
  struct std__vector_int__std__allocator_int__* t824 = this822;
  struct std___Vector_base_int__std__allocator_int__* base825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t824 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base826 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base825->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval823, &base826->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t827 = __retval823;
  return t827;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v828) {
bb829:
  struct std__vector_int__std__allocator_int__* this830;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval831;
  this830 = v828;
  struct std__vector_int__std__allocator_int__* t832 = this830;
  struct std___Vector_base_int__std__allocator_int__* base833 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t832 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base834 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base833->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval831, &base834->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t835 = __retval831;
  return t835;
}

// function: _ZN7myclassclEi
void myclass__operator__(struct myclass* v836, int v837) {
bb838:
  struct myclass* this839;
  int i840;
  this839 = v836;
  i840 = v837;
  struct myclass* t841 = this839;
  char* cast842 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r843 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast842);
  int t844 = i840;
  struct std__basic_ostream_char__std__char_traits_char__* r845 = std__ostream__operator__(r843, t844);
  return;
}

// function: _ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE7myclassET0_T_S9_S8_
struct myclass myclass_std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v846, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v847, struct myclass v848) {
bb849:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last851;
  struct myclass __f852;
  struct myclass __retval853;
  __first850 = v846;
  __last851 = v847;
  __f852 = v848;
    while (1) {
      _Bool r855 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first850, &__last851);
      _Bool u856 = !r855;
      if (!u856) break;
      int* r857 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first850);
      int t858 = *r857;
      myclass__operator__(&__f852, t858);
    for_step854: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r859 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first850);
    }
  struct myclass t860 = __retval853;
  return t860;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v861, void* v862) {
bb863:
  struct std__basic_ostream_char__std__char_traits_char__* this864;
  void* __pf865;
  struct std__basic_ostream_char__std__char_traits_char__* __retval866;
  this864 = v861;
  __pf865 = v862;
  struct std__basic_ostream_char__std__char_traits_char__* t867 = this864;
  void* t868 = __pf865;
  struct std__basic_ostream_char__std__char_traits_char__* r869 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t868)(t867);
  __retval866 = r869;
  struct std__basic_ostream_char__std__char_traits_char__* t870 = __retval866;
  return t870;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v871) {
bb872:
  struct std__basic_ostream_char__std__char_traits_char__* __os873;
  struct std__basic_ostream_char__std__char_traits_char__* __retval874;
  __os873 = v871;
  struct std__basic_ostream_char__std__char_traits_char__* t875 = __os873;
  struct std__basic_ostream_char__std__char_traits_char__* r876 = std__ostream__flush(t875);
  __retval874 = r876;
  struct std__basic_ostream_char__std__char_traits_char__* t877 = __retval874;
  return t877;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v878) {
bb879:
  struct std__ctype_char_* __f880;
  struct std__ctype_char_* __retval881;
  __f880 = v878;
    struct std__ctype_char_* t882 = __f880;
    _Bool cast883 = (_Bool)t882;
    _Bool u884 = !cast883;
    if (u884) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t885 = __f880;
  __retval881 = t885;
  struct std__ctype_char_* t886 = __retval881;
  return t886;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v887, char v888) {
bb889:
  struct std__ctype_char_* this890;
  char __c891;
  char __retval892;
  this890 = v887;
  __c891 = v888;
  struct std__ctype_char_* t893 = this890;
    char t894 = t893->_M_widen_ok;
    _Bool cast895 = (_Bool)t894;
    if (cast895) {
      char t896 = __c891;
      unsigned char cast897 = (unsigned char)t896;
      unsigned long cast898 = (unsigned long)cast897;
      char t899 = t893->_M_widen[cast898];
      __retval892 = t899;
      char t900 = __retval892;
      return t900;
    }
  std__ctype_char____M_widen_init___const(t893);
  char t901 = __c891;
  void** v902 = (void**)t893;
  void* v903 = *((void**)v902);
  char vcall906 = (char)__VERIFIER_virtual_call_char_char(t893, 6, t901);
  __retval892 = vcall906;
  char t907 = __retval892;
  return t907;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v908, char v909) {
bb910:
  struct std__basic_ios_char__std__char_traits_char__* this911;
  char __c912;
  char __retval913;
  this911 = v908;
  __c912 = v909;
  struct std__basic_ios_char__std__char_traits_char__* t914 = this911;
  struct std__ctype_char_* t915 = t914->_M_ctype;
  struct std__ctype_char_* r916 = std__ctype_char__const__std____check_facet_std__ctype_char___(t915);
  char t917 = __c912;
  char r918 = std__ctype_char___widen_char__const(r916, t917);
  __retval913 = r918;
  char t919 = __retval913;
  return t919;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v920) {
bb921:
  struct std__basic_ostream_char__std__char_traits_char__* __os922;
  struct std__basic_ostream_char__std__char_traits_char__* __retval923;
  __os922 = v920;
  struct std__basic_ostream_char__std__char_traits_char__* t924 = __os922;
  struct std__basic_ostream_char__std__char_traits_char__* t925 = __os922;
  void** v926 = (void**)t925;
  void* v927 = *((void**)v926);
  unsigned char* cast928 = (unsigned char*)v927;
  long c929 = -24;
  unsigned char* ptr930 = &(cast928)[c929];
  long* cast931 = (long*)ptr930;
  long t932 = *cast931;
  unsigned char* cast933 = (unsigned char*)t925;
  unsigned char* ptr934 = &(cast933)[t932];
  struct std__basic_ostream_char__std__char_traits_char__* cast935 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr934;
  struct std__basic_ios_char__std__char_traits_char__* cast936 = (struct std__basic_ios_char__std__char_traits_char__*)cast935;
  char c937 = 10;
  char r938 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast936, c937);
  struct std__basic_ostream_char__std__char_traits_char__* r939 = std__ostream__put(t924, r938);
  struct std__basic_ostream_char__std__char_traits_char__* r940 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r939);
  __retval923 = r940;
  struct std__basic_ostream_char__std__char_traits_char__* t941 = __retval923;
  return t941;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v942) {
bb943:
  struct std__vector_int__std__allocator_int__* this944;
  this944 = v942;
  struct std__vector_int__std__allocator_int__* t945 = this944;
    struct std___Vector_base_int__std__allocator_int__* base946 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t945 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base947 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base946->_M_impl) + 0);
    int* t948 = base947->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base949 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t945 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base950 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base949->_M_impl) + 0);
    int* t951 = base950->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base952 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t945 + 0);
    struct std__allocator_int_* r953 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base952);
    void_std___Destroy_int___int_(t948, t951, r953);
  {
    struct std___Vector_base_int__std__allocator_int__* base954 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t945 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base954);
  }
  return;
}

// function: main
int main() {
bb955:
  int __retval956;
  struct std__vector_int__std__allocator_int__ myvector957;
  int ref_tmp0958;
  int ref_tmp1959;
  int ref_tmp2960;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0961;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1962;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2963;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3964;
  struct myclass agg_tmp4965;
  struct myclass agg_tmp5966;
  int c967 = 0;
  __retval956 = c967;
  std__vector_int__std__allocator_int_____vector(&myvector957);
    int c968 = 10;
    ref_tmp0958 = c968;
    std__vector_int__std__allocator_int_____push_back(&myvector957, &ref_tmp0958);
    int c969 = 20;
    ref_tmp1959 = c969;
    std__vector_int__std__allocator_int_____push_back(&myvector957, &ref_tmp1959);
    int c970 = 30;
    ref_tmp2960 = c970;
    std__vector_int__std__allocator_int_____push_back(&myvector957, &ref_tmp2960);
    char* cast971 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r972 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast971);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r973 = std__vector_int__std__allocator_int_____begin(&myvector957);
    agg_tmp0961 = r973;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r974 = std__vector_int__std__allocator_int_____end(&myvector957);
    agg_tmp1962 = r974;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t975 = agg_tmp0961;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t976 = agg_tmp1962;
    void* r977 = void___std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_____int___(t975, t976, &myfunction);
    char* cast978 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r979 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast978);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r980 = std__vector_int__std__allocator_int_____begin(&myvector957);
    agg_tmp2963 = r980;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r981 = std__vector_int__std__allocator_int_____end(&myvector957);
    agg_tmp3964 = r981;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t982 = agg_tmp2963;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t983 = agg_tmp3964;
    struct myclass t984 = agg_tmp4965;
    struct myclass r985 = myclass_std__for_each___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(t982, t983, t984);
    agg_tmp5966 = r985;
    struct std__basic_ostream_char__std__char_traits_char__* r986 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c987 = 0;
    __retval956 = c987;
    int t988 = __retval956;
    int ret_val989 = t988;
    {
      std__vector_int__std__allocator_int______vector(&myvector957);
    }
    return ret_val989;
  int t990 = __retval956;
  return t990;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v991) {
bb992:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this993;
  this993 = v991;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t994 = this993;
  struct std__allocator_int_* base995 = (struct std__allocator_int_*)((char *)t994 + 0);
  std__allocator_int___allocator(base995);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base996 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t994 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base996);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v997) {
bb998:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this999;
  this999 = v997;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1000 = this999;
  {
    struct std__allocator_int_* base1001 = (struct std__allocator_int_*)((char *)t1000 + 0);
    std__allocator_int____allocator(base1001);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1002) {
bb1003:
  struct std___Vector_base_int__std__allocator_int__* this1004;
  this1004 = v1002;
  struct std___Vector_base_int__std__allocator_int__* t1005 = this1004;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1005->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1006:
  _Bool __retval1007;
    _Bool c1008 = 0;
    __retval1007 = c1008;
    _Bool t1009 = __retval1007;
    return t1009;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1010, int* v1011, unsigned long v1012) {
bb1013:
  struct std____new_allocator_int_* this1014;
  int* __p1015;
  unsigned long __n1016;
  this1014 = v1010;
  __p1015 = v1011;
  __n1016 = v1012;
  struct std____new_allocator_int_* t1017 = this1014;
    unsigned long c1018 = 4;
    unsigned long c1019 = 16;
    _Bool c1020 = ((c1018 > c1019)) ? 1 : 0;
    if (c1020) {
      int* t1021 = __p1015;
      void* cast1022 = (void*)t1021;
      unsigned long t1023 = __n1016;
      unsigned long c1024 = 4;
      unsigned long b1025 = t1023 * c1024;
      unsigned long c1026 = 4;
      operator_delete_3(cast1022, b1025, c1026);
      return;
    }
  int* t1027 = __p1015;
  void* cast1028 = (void*)t1027;
  unsigned long t1029 = __n1016;
  unsigned long c1030 = 4;
  unsigned long b1031 = t1029 * c1030;
  operator_delete_2(cast1028, b1031);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1032, int* v1033, unsigned long v1034) {
bb1035:
  struct std__allocator_int_* this1036;
  int* __p1037;
  unsigned long __n1038;
  this1036 = v1032;
  __p1037 = v1033;
  __n1038 = v1034;
  struct std__allocator_int_* t1039 = this1036;
    _Bool r1040 = std____is_constant_evaluated();
    if (r1040) {
      int* t1041 = __p1037;
      void* cast1042 = (void*)t1041;
      operator_delete(cast1042);
      return;
    }
  struct std____new_allocator_int_* base1043 = (struct std____new_allocator_int_*)((char *)t1039 + 0);
  int* t1044 = __p1037;
  unsigned long t1045 = __n1038;
  std____new_allocator_int___deallocate(base1043, t1044, t1045);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1046, int* v1047, unsigned long v1048) {
bb1049:
  struct std__allocator_int_* __a1050;
  int* __p1051;
  unsigned long __n1052;
  __a1050 = v1046;
  __p1051 = v1047;
  __n1052 = v1048;
  struct std__allocator_int_* t1053 = __a1050;
  int* t1054 = __p1051;
  unsigned long t1055 = __n1052;
  std__allocator_int___deallocate(t1053, t1054, t1055);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1056, int* v1057, unsigned long v1058) {
bb1059:
  struct std___Vector_base_int__std__allocator_int__* this1060;
  int* __p1061;
  unsigned long __n1062;
  this1060 = v1056;
  __p1061 = v1057;
  __n1062 = v1058;
  struct std___Vector_base_int__std__allocator_int__* t1063 = this1060;
    int* t1064 = __p1061;
    _Bool cast1065 = (_Bool)t1064;
    if (cast1065) {
      struct std__allocator_int_* base1066 = (struct std__allocator_int_*)((char *)&(t1063->_M_impl) + 0);
      int* t1067 = __p1061;
      unsigned long t1068 = __n1062;
      std__allocator_traits_std__allocator_int_____deallocate(base1066, t1067, t1068);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1069) {
bb1070:
  struct std___Vector_base_int__std__allocator_int__* this1071;
  this1071 = v1069;
  struct std___Vector_base_int__std__allocator_int__* t1072 = this1071;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1073 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1072->_M_impl) + 0);
    int* t1074 = base1073->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1075 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1072->_M_impl) + 0);
    int* t1076 = base1075->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1077 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1072->_M_impl) + 0);
    int* t1078 = base1077->_M_start;
    long diff1079 = t1076 - t1078;
    unsigned long cast1080 = (unsigned long)diff1079;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1072, t1074, cast1080);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1072->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1081) {
bb1082:
  struct std____new_allocator_int_* this1083;
  this1083 = v1081;
  struct std____new_allocator_int_* t1084 = this1083;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1085) {
bb1086:
  struct std__allocator_int_* this1087;
  this1087 = v1085;
  struct std__allocator_int_* t1088 = this1087;
  struct std____new_allocator_int_* base1089 = (struct std____new_allocator_int_*)((char *)t1088 + 0);
  std____new_allocator_int_____new_allocator(base1089);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1090) {
bb1091:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1092;
  this1092 = v1090;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1093 = this1092;
  int* c1094 = ((void*)0);
  t1093->_M_start = c1094;
  int* c1095 = ((void*)0);
  t1093->_M_finish = c1095;
  int* c1096 = ((void*)0);
  t1093->_M_end_of_storage = c1096;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1097) {
bb1098:
  struct std__allocator_int_* this1099;
  this1099 = v1097;
  struct std__allocator_int_* t1100 = this1099;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1101, int* v1102) {
bb1103:
  int* __first1104;
  int* __last1105;
  __first1104 = v1101;
  __last1105 = v1102;
      _Bool r1106 = std____is_constant_evaluated();
      if (r1106) {
          while (1) {
            int* t1108 = __first1104;
            int* t1109 = __last1105;
            _Bool c1110 = ((t1108 != t1109)) ? 1 : 0;
            if (!c1110) break;
            int* t1111 = __first1104;
            void_std__destroy_at_int_(t1111);
          for_step1107: ;
            int* t1112 = __first1104;
            int c1113 = 1;
            int* ptr1114 = &(t1112)[c1113];
            __first1104 = ptr1114;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1115, int* v1116, struct std__allocator_int_* v1117) {
bb1118:
  int* __first1119;
  int* __last1120;
  struct std__allocator_int_* unnamed1121;
  __first1119 = v1115;
  __last1120 = v1116;
  unnamed1121 = v1117;
  int* t1122 = __first1119;
  int* t1123 = __last1120;
  void_std___Destroy_int__(t1122, t1123);
  return;
}

