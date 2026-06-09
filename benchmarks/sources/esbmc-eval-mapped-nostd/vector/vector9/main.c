extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_char____void_ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__vector_char__std__allocator_char_____Guard_alloc { char* _M_storage; unsigned long _M_len; struct std___Vector_base_char__std__allocator_char__* _M_vect; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[23] = "letters.front() == 'a'";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector9/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[25] = "The first character is: ";
char _str_3[22] = "letters.back() == 'g'";
char _str_4[22] = "letters.back() == 'f'";
char _str_5[26] = "vector::_M_realloc_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE5frontEv[37] = "reference std::vector<char>::front()";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE4backEv[36] = "reference std::vector<char>::back()";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE8pop_backEv[35] = "void std::vector<char>::pop_back()";
void std__vector_char__std__allocator_char_____vector(struct std__vector_char__std__allocator_char__* p0);
char* _ZSt12construct_atIcJcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(char* p0, char* p1);
void void_std__allocator_traits_std__allocator_char_____construct_char__char_(struct std__allocator_char_* p0, char* p1, char* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator___const(struct std___Vector_base_char__std__allocator_char__* p0);
unsigned long std__vector_char__std__allocator_char_____max_size___const(struct std__vector_char__std__allocator_char__* p0);
unsigned long std__vector_char__std__allocator_char_____size___const(struct std__vector_char__std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_char__std__allocator_char______M_check_len_unsigned_long__char_const___const(struct std__vector_char__std__allocator_char__* p0, unsigned long p1, char* p2);
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
long __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______difference_type___gnu_cxx__operator__char___std__vector_char__std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1);
void std__vector_char__std__allocator_char______Guard_alloc___Guard_alloc(struct std__vector_char__std__allocator_char_____Guard_alloc* p0, char* p1, unsigned long p2, struct std___Vector_base_char__std__allocator_char__* p3);
char* char__std__to_address_char_(char* p0);
char* auto_std____to_address_char__(char** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_char___void_____normal_iterator(struct __gnu_cxx____normal_iterator_char____void_* p0, char** p1);
void void_std__destroy_at_char_(char* p0);
void void_std__allocator_traits_std__allocator_char_____destroy_char_(struct std__allocator_char_* p0, char* p1);
void void_std____relocate_object_a_char__char__std__allocator_char___(char* p0, char* p1, struct std__allocator_char_* p2);
char* __gnu_cxx____normal_iterator_char___void___operator____const(struct __gnu_cxx____normal_iterator_char____void_* p0);
struct __gnu_cxx____normal_iterator_char____void_* __gnu_cxx____normal_iterator_char___void___operator__(struct __gnu_cxx____normal_iterator_char____void_* p0);
struct __gnu_cxx____normal_iterator_char____void_ __gnu_cxx____normal_iterator_char___void__std____relocate_a_1_char_____gnu_cxx____normal_iterator_char___void___std__allocator_char___(char* p0, char* p1, struct __gnu_cxx____normal_iterator_char____void_ p2, struct std__allocator_char_* p3);
struct __gnu_cxx____normal_iterator_char____void_* __gnu_cxx____normal_iterator_char___void___operator_(struct __gnu_cxx____normal_iterator_char____void_* p0, struct __gnu_cxx____normal_iterator_char____void_* p1);
char** __gnu_cxx____normal_iterator_char___void___base___const(struct __gnu_cxx____normal_iterator_char____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__enable_if_std____is_bitwise_relocatable_char___value__char____type_std____relocate_a_1_char__char_(char* p0, char* p1, char* p2, struct std__allocator_char_* p3);
char* char__std____niter_base_char__(char* p0);
char* char__std____relocate_a_char___char___std__allocator_char___(char* p0, char* p1, char* p2, struct std__allocator_char_* p3);
char* std__vector_char__std__allocator_char______S_relocate(char* p0, char* p1, char* p2, struct std__allocator_char_* p3);
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* p0);
void std__vector_char__std__allocator_char______Guard_alloc____Guard_alloc(struct std__vector_char__std__allocator_char_____Guard_alloc* p0);
void void_std__vector_char__std__allocator_char______M_realloc_append_char_(struct std__vector_char__std__allocator_char__* p0, char* p1);
char* char__std__vector_char__std__allocator_char_____emplace_back_char_(struct std__vector_char__std__allocator_char__* p0, char* p1);
void std__vector_char__std__allocator_char_____push_back(struct std__vector_char__std__allocator_char__* p0, char* p1);
char** __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p0);
_Bool _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p1);
void __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin___const(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end___const(struct std__vector_char__std__allocator_char__* p0);
_Bool std__vector_char__std__allocator_char_____empty___const(struct std__vector_char__std__allocator_char__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
char* std__vector_char__std__allocator_char_____front(struct std__vector_char__std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, long p1);
char* std__vector_char__std__allocator_char_____back(struct std__vector_char__std__allocator_char__* p0);
void std__vector_char__std__allocator_char_____pop_back(struct std__vector_char__std__allocator_char__* p0);
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* p0);
int main();
void _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0);
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void void_std___Destroy_char__(char* p0, char* p1);
void void_std___Destroy_char___char_(char* p0, char* p1, struct std__allocator_char_* p2);

// function: _ZNSt6vectorIcSaIcEEC2Ev
void std__vector_char__std__allocator_char_____vector(struct std__vector_char__std__allocator_char__* v0) {
bb1:
  struct std__vector_char__std__allocator_char__* this2;
  this2 = v0;
  struct std__vector_char__std__allocator_char__* t3 = this2;
  struct std___Vector_base_char__std__allocator_char__* base4 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t3 + 0);
  std___Vector_base_char__std__allocator_char______Vector_base(base4);
  return;
}

// function: _ZSt12construct_atIcJcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
char* _ZSt12construct_atIcJcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(char* v5, char* v6) {
bb7:
  char* __location8;
  char* __args9;
  char* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  char* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    char* cast15 = (char*)t14;
    char* t16 = __args9;
    char t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    char* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIcEE9constructIcJcEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_char_____construct_char__char_(struct std__allocator_char_* v19, char* v20, char* v21) {
bb22:
  struct std__allocator_char_* __a23;
  char* __p24;
  char* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  char* t26 = __p24;
  char* t27 = __args25;
  char* r28 = _ZSt12construct_atIcJcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __b33;
    unsigned long t36 = *t35;
    unsigned long* t37 = __a32;
    unsigned long t38 = *t37;
    _Bool c39 = ((t36 < t38)) ? 1 : 0;
    if (c39) {
      unsigned long* t40 = __b33;
      __retval34 = t40;
      unsigned long* t41 = __retval34;
      return t41;
    }
  unsigned long* t42 = __a32;
  __retval34 = t42;
  unsigned long* t43 = __retval34;
  return t43;
}

// function: _ZNSt6vectorIcSaIcEE11_S_max_sizeERKS0_
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* v44) {
bb45:
  struct std__allocator_char_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 9223372036854775807;
  __diffmax48 = c50;
  unsigned long c51 = -1;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator___const(struct std___Vector_base_char__std__allocator_char__* v55) {
bb56:
  struct std___Vector_base_char__std__allocator_char__* this57;
  struct std__allocator_char_* __retval58;
  this57 = v55;
  struct std___Vector_base_char__std__allocator_char__* t59 = this57;
  struct std__allocator_char_* base60 = (struct std__allocator_char_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_char_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIcSaIcEE8max_sizeEv
unsigned long std__vector_char__std__allocator_char_____max_size___const(struct std__vector_char__std__allocator_char__* v62) {
bb63:
  struct std__vector_char__std__allocator_char__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_char__std__allocator_char__* t66 = this64;
  struct std___Vector_base_char__std__allocator_char__* base67 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t66 + 0);
  struct std__allocator_char_* r68 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_char__std__allocator_char______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZNKSt6vectorIcSaIcEE4sizeEv
unsigned long std__vector_char__std__allocator_char_____size___const(struct std__vector_char__std__allocator_char__* v71) {
bb72:
  struct std__vector_char__std__allocator_char__* this73;
  unsigned long __retval74;
  long __dif75;
  this73 = v71;
  struct std__vector_char__std__allocator_char__* t76 = this73;
  struct std___Vector_base_char__std__allocator_char__* base77 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t76 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base78 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base77->_M_impl) + 0);
  char* t79 = base78->_M_finish;
  struct std___Vector_base_char__std__allocator_char__* base80 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t76 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base81 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base80->_M_impl) + 0);
  char* t82 = base81->_M_start;
  long diff83 = t79 - t82;
  __dif75 = diff83;
    long t84 = __dif75;
    long c85 = 0;
    _Bool c86 = ((t84 < c85)) ? 1 : 0;
    if (c86) {
      __builtin_unreachable();
    }
  long t87 = __dif75;
  unsigned long cast88 = (unsigned long)t87;
  __retval74 = cast88;
  unsigned long t89 = __retval74;
  return t89;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v90, unsigned long* v91) {
bb92:
  unsigned long* __a93;
  unsigned long* __b94;
  unsigned long* __retval95;
  __a93 = v90;
  __b94 = v91;
    unsigned long* t96 = __a93;
    unsigned long t97 = *t96;
    unsigned long* t98 = __b94;
    unsigned long t99 = *t98;
    _Bool c100 = ((t97 < t99)) ? 1 : 0;
    if (c100) {
      unsigned long* t101 = __b94;
      __retval95 = t101;
      unsigned long* t102 = __retval95;
      return t102;
    }
  unsigned long* t103 = __a93;
  __retval95 = t103;
  unsigned long* t104 = __retval95;
  return t104;
}

// function: _ZNKSt6vectorIcSaIcEE12_M_check_lenEmPKc
unsigned long std__vector_char__std__allocator_char______M_check_len_unsigned_long__char_const___const(struct std__vector_char__std__allocator_char__* v105, unsigned long v106, char* v107) {
bb108:
  struct std__vector_char__std__allocator_char__* this109;
  unsigned long __n110;
  char* __s111;
  unsigned long __retval112;
  unsigned long __len113;
  unsigned long ref_tmp0114;
  this109 = v105;
  __n110 = v106;
  __s111 = v107;
  struct std__vector_char__std__allocator_char__* t115 = this109;
    unsigned long r116 = std__vector_char__std__allocator_char_____max_size___const(t115);
    unsigned long r117 = std__vector_char__std__allocator_char_____size___const(t115);
    unsigned long b118 = r116 - r117;
    unsigned long t119 = __n110;
    _Bool c120 = ((b118 < t119)) ? 1 : 0;
    if (c120) {
      char* t121 = __s111;
      std____throw_length_error(t121);
    }
  unsigned long r122 = std__vector_char__std__allocator_char_____size___const(t115);
  unsigned long r123 = std__vector_char__std__allocator_char_____size___const(t115);
  ref_tmp0114 = r123;
  unsigned long* r124 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0114, &__n110);
  unsigned long t125 = *r124;
  unsigned long b126 = r122 + t125;
  __len113 = b126;
  unsigned long t127 = __len113;
  unsigned long r128 = std__vector_char__std__allocator_char_____size___const(t115);
  _Bool c129 = ((t127 < r128)) ? 1 : 0;
  _Bool ternary130;
  if (c129) {
    _Bool c131 = 1;
    ternary130 = (_Bool)c131;
  } else {
    unsigned long t132 = __len113;
    unsigned long r133 = std__vector_char__std__allocator_char_____max_size___const(t115);
    _Bool c134 = ((t132 > r133)) ? 1 : 0;
    ternary130 = (_Bool)c134;
  }
  unsigned long ternary135;
  if (ternary130) {
    unsigned long r136 = std__vector_char__std__allocator_char_____max_size___const(t115);
    ternary135 = (unsigned long)r136;
  } else {
    unsigned long t137 = __len113;
    ternary135 = (unsigned long)t137;
  }
  __retval112 = ternary135;
  unsigned long t138 = __retval112;
  return t138;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v139) {
bb140:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this141;
  char** __retval142;
  this141 = v139;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t143 = this141;
  __retval142 = &t143->_M_current;
  char** t144 = __retval142;
  return t144;
}

// function: _ZN9__gnu_cxxmiIPcSt6vectorIcSaIcEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______difference_type___gnu_cxx__operator__char___std__vector_char__std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v145, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v146) {
bb147:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __lhs148;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __rhs149;
  long __retval150;
  __lhs148 = v145;
  __rhs149 = v146;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t151 = __lhs148;
  char** r152 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t151);
  char* t153 = *r152;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t154 = __rhs149;
  char** r155 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t154);
  char* t156 = *r155;
  long diff157 = t153 - t156;
  __retval150 = diff157;
  long t158 = __retval150;
  return t158;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v159, char** v160) {
bb161:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this162;
  char** __i163;
  this162 = v159;
  __i163 = v160;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t164 = this162;
  char** t165 = __i163;
  char* t166 = *t165;
  t164->_M_current = t166;
  return;
}

// function: _ZNSt6vectorIcSaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* v167) {
bb168:
  struct std__vector_char__std__allocator_char__* this169;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval170;
  this169 = v167;
  struct std__vector_char__std__allocator_char__* t171 = this169;
  struct std___Vector_base_char__std__allocator_char__* base172 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t171 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base173 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base172->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval170, &base173->_M_finish);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t174 = __retval170;
  return t174;
}

// function: _ZNSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* v175) {
bb176:
  struct std__vector_char__std__allocator_char__* this177;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval178;
  this177 = v175;
  struct std__vector_char__std__allocator_char__* t179 = this177;
  struct std___Vector_base_char__std__allocator_char__* base180 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t179 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base181 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base180->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval178, &base181->_M_start);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t182 = __retval178;
  return t182;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v183) {
bb184:
  struct std____new_allocator_char_* this185;
  unsigned long __retval186;
  this185 = v183;
  struct std____new_allocator_char_* t187 = this185;
  unsigned long c188 = 9223372036854775807;
  unsigned long c189 = 1;
  unsigned long b190 = c188 / c189;
  __retval186 = b190;
  unsigned long t191 = __retval186;
  return t191;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v192, unsigned long v193, void* v194) {
bb195:
  struct std____new_allocator_char_* this196;
  unsigned long __n197;
  void* unnamed198;
  char* __retval199;
  this196 = v192;
  __n197 = v193;
  unnamed198 = v194;
  struct std____new_allocator_char_* t200 = this196;
    unsigned long t201 = __n197;
    unsigned long r202 = std____new_allocator_char____M_max_size___const(t200);
    _Bool c203 = ((t201 > r202)) ? 1 : 0;
    if (c203) {
        unsigned long t204 = __n197;
        unsigned long c205 = -1;
        unsigned long c206 = 1;
        unsigned long b207 = c205 / c206;
        _Bool c208 = ((t204 > b207)) ? 1 : 0;
        if (c208) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c209 = 1;
    unsigned long c210 = 16;
    _Bool c211 = ((c209 > c210)) ? 1 : 0;
    if (c211) {
      unsigned long __al212;
      unsigned long c213 = 1;
      __al212 = c213;
      unsigned long t214 = __n197;
      unsigned long c215 = 1;
      unsigned long b216 = t214 * c215;
      unsigned long t217 = __al212;
      void* r218 = operator_new_2(b216, t217);
      char* cast219 = (char*)r218;
      __retval199 = cast219;
      char* t220 = __retval199;
      return t220;
    }
  unsigned long t221 = __n197;
  unsigned long c222 = 1;
  unsigned long b223 = t221 * c222;
  void* r224 = operator_new(b223);
  char* cast225 = (char*)r224;
  __retval199 = cast225;
  char* t226 = __retval199;
  return t226;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v227, unsigned long v228) {
bb229:
  struct std__allocator_char_* this230;
  unsigned long __n231;
  char* __retval232;
  this230 = v227;
  __n231 = v228;
  struct std__allocator_char_* t233 = this230;
    _Bool r234 = std____is_constant_evaluated();
    if (r234) {
        unsigned long t235 = __n231;
        unsigned long c236 = 1;
        unsigned long ovr237;
        _Bool ovf238 = __builtin_mul_overflow(t235, c236, &ovr237);
        __n231 = ovr237;
        if (ovf238) {
          std____throw_bad_array_new_length();
        }
      unsigned long t239 = __n231;
      void* r240 = operator_new(t239);
      char* cast241 = (char*)r240;
      __retval232 = cast241;
      char* t242 = __retval232;
      return t242;
    }
  struct std____new_allocator_char_* base243 = (struct std____new_allocator_char_*)((char *)t233 + 0);
  unsigned long t244 = __n231;
  void* c245 = ((void*)0);
  char* r246 = std____new_allocator_char___allocate(base243, t244, c245);
  __retval232 = r246;
  char* t247 = __retval232;
  return t247;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v248, unsigned long v249) {
bb250:
  struct std__allocator_char_* __a251;
  unsigned long __n252;
  char* __retval253;
  __a251 = v248;
  __n252 = v249;
  struct std__allocator_char_* t254 = __a251;
  unsigned long t255 = __n252;
  char* r256 = std__allocator_char___allocate(t254, t255);
  __retval253 = r256;
  char* t257 = __retval253;
  return t257;
}

// function: _ZNSt12_Vector_baseIcSaIcEE11_M_allocateEm
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* v258, unsigned long v259) {
bb260:
  struct std___Vector_base_char__std__allocator_char__* this261;
  unsigned long __n262;
  char* __retval263;
  this261 = v258;
  __n262 = v259;
  struct std___Vector_base_char__std__allocator_char__* t264 = this261;
  unsigned long t265 = __n262;
  unsigned long c266 = 0;
  _Bool c267 = ((t265 != c266)) ? 1 : 0;
  char* ternary268;
  if (c267) {
    struct std__allocator_char_* base269 = (struct std__allocator_char_*)((char *)&(t264->_M_impl) + 0);
    unsigned long t270 = __n262;
    char* r271 = std__allocator_traits_std__allocator_char_____allocate(base269, t270);
    ternary268 = (char*)r271;
  } else {
    char* c272 = ((void*)0);
    ternary268 = (char*)c272;
  }
  __retval263 = ternary268;
  char* t273 = __retval263;
  return t273;
}

// function: _ZNSt6vectorIcSaIcEE12_Guard_allocC2EPcmRSt12_Vector_baseIcS0_E
void std__vector_char__std__allocator_char______Guard_alloc___Guard_alloc(struct std__vector_char__std__allocator_char_____Guard_alloc* v274, char* v275, unsigned long v276, struct std___Vector_base_char__std__allocator_char__* v277) {
bb278:
  struct std__vector_char__std__allocator_char_____Guard_alloc* this279;
  char* __s280;
  unsigned long __l281;
  struct std___Vector_base_char__std__allocator_char__* __vect282;
  this279 = v274;
  __s280 = v275;
  __l281 = v276;
  __vect282 = v277;
  struct std__vector_char__std__allocator_char_____Guard_alloc* t283 = this279;
  char* t284 = __s280;
  t283->_M_storage = t284;
  unsigned long t285 = __l281;
  t283->_M_len = t285;
  struct std___Vector_base_char__std__allocator_char__* t286 = __vect282;
  t283->_M_vect = t286;
  return;
}

// function: _ZSt10to_addressIcEPT_S1_
char* char__std__to_address_char_(char* v287) {
bb288:
  char* __ptr289;
  char* __retval290;
  __ptr289 = v287;
  char* t291 = __ptr289;
  __retval290 = t291;
  char* t292 = __retval290;
  return t292;
}

// function: _ZSt12__to_addressIPcEDaRKT_
char* auto_std____to_address_char__(char** v293) {
bb294:
  char** __ptr295;
  char* __retval296;
  __ptr295 = v293;
  char** t297 = __ptr295;
  char* t298 = *t297;
  char* r299 = char__std__to_address_char_(t298);
  __retval296 = r299;
  char* t300 = __retval296;
  return t300;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb301:
  _Bool __retval302;
    _Bool c303 = 0;
    __retval302 = c303;
    _Bool t304 = __retval302;
    return t304;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcvEC2ERKS1_
void __gnu_cxx____normal_iterator_char___void_____normal_iterator(struct __gnu_cxx____normal_iterator_char____void_* v305, char** v306) {
bb307:
  struct __gnu_cxx____normal_iterator_char____void_* this308;
  char** __i309;
  this308 = v305;
  __i309 = v306;
  struct __gnu_cxx____normal_iterator_char____void_* t310 = this308;
  char** t311 = __i309;
  char* t312 = *t311;
  t310->_M_current = t312;
  return;
}

// function: _ZSt10destroy_atIcEvPT_
void void_std__destroy_at_char_(char* v313) {
bb314:
  char* __location315;
  __location315 = v313;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE7destroyIcEEvRS0_PT_
void void_std__allocator_traits_std__allocator_char_____destroy_char_(struct std__allocator_char_* v316, char* v317) {
bb318:
  struct std__allocator_char_* __a319;
  char* __p320;
  __a319 = v316;
  __p320 = v317;
  char* t321 = __p320;
  void_std__destroy_at_char_(t321);
  return;
}

// function: _ZSt19__relocate_object_aIccSaIcEEvPT_PT0_RT1_
void void_std____relocate_object_a_char__char__std__allocator_char___(char* v322, char* v323, struct std__allocator_char_* v324) {
bb325:
  char* __dest326;
  char* __orig327;
  struct std__allocator_char_* __alloc328;
  __dest326 = v322;
  __orig327 = v323;
  __alloc328 = v324;
  struct std__allocator_char_* t329 = __alloc328;
  char* t330 = __dest326;
  char* t331 = __orig327;
  void_std__allocator_traits_std__allocator_char_____construct_char__char_(t329, t330, t331);
  struct std__allocator_char_* t332 = __alloc328;
  char* t333 = __orig327;
  void_std__allocator_traits_std__allocator_char_____destroy_char_(t332, t333);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcvEdeEv
char* __gnu_cxx____normal_iterator_char___void___operator____const(struct __gnu_cxx____normal_iterator_char____void_* v334) {
bb335:
  struct __gnu_cxx____normal_iterator_char____void_* this336;
  char* __retval337;
  this336 = v334;
  struct __gnu_cxx____normal_iterator_char____void_* t338 = this336;
  char* t339 = t338->_M_current;
  __retval337 = t339;
  char* t340 = __retval337;
  return t340;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcvEppEv
struct __gnu_cxx____normal_iterator_char____void_* __gnu_cxx____normal_iterator_char___void___operator__(struct __gnu_cxx____normal_iterator_char____void_* v341) {
bb342:
  struct __gnu_cxx____normal_iterator_char____void_* this343;
  struct __gnu_cxx____normal_iterator_char____void_* __retval344;
  this343 = v341;
  struct __gnu_cxx____normal_iterator_char____void_* t345 = this343;
  char* t346 = t345->_M_current;
  int c347 = 1;
  char* ptr348 = &(t346)[c347];
  t345->_M_current = ptr348;
  __retval344 = t345;
  struct __gnu_cxx____normal_iterator_char____void_* t349 = __retval344;
  return t349;
}

// function: _ZSt14__relocate_a_1IPcN9__gnu_cxx17__normal_iteratorIS0_vEESaIcEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_char____void_ __gnu_cxx____normal_iterator_char___void__std____relocate_a_1_char_____gnu_cxx____normal_iterator_char___void___std__allocator_char___(char* v350, char* v351, struct __gnu_cxx____normal_iterator_char____void_ v352, struct std__allocator_char_* v353) {
bb354:
  char* __first355;
  char* __last356;
  struct __gnu_cxx____normal_iterator_char____void_ __result357;
  struct std__allocator_char_* __alloc358;
  struct __gnu_cxx____normal_iterator_char____void_ __retval359;
  __first355 = v350;
  __last356 = v351;
  __result357 = v352;
  __alloc358 = v353;
  __retval359 = __result357; // copy
    while (1) {
      char* t361 = __first355;
      char* t362 = __last356;
      _Bool c363 = ((t361 != t362)) ? 1 : 0;
      if (!c363) break;
      char* r364 = __gnu_cxx____normal_iterator_char___void___operator____const(&__retval359);
      char* t365 = __first355;
      struct std__allocator_char_* t366 = __alloc358;
      void_std____relocate_object_a_char__char__std__allocator_char___(r364, t365, t366);
    for_step360: ;
      char* t367 = __first355;
      int c368 = 1;
      char* ptr369 = &(t367)[c368];
      __first355 = ptr369;
      struct __gnu_cxx____normal_iterator_char____void_* r370 = __gnu_cxx____normal_iterator_char___void___operator__(&__retval359);
    }
  struct __gnu_cxx____normal_iterator_char____void_ t371 = __retval359;
  return t371;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcvEaSEOS2_
struct __gnu_cxx____normal_iterator_char____void_* __gnu_cxx____normal_iterator_char___void___operator_(struct __gnu_cxx____normal_iterator_char____void_* v372, struct __gnu_cxx____normal_iterator_char____void_* v373) {
bb374:
  struct __gnu_cxx____normal_iterator_char____void_* this375;
  struct __gnu_cxx____normal_iterator_char____void_* unnamed376;
  struct __gnu_cxx____normal_iterator_char____void_* __retval377;
  this375 = v372;
  unnamed376 = v373;
  struct __gnu_cxx____normal_iterator_char____void_* t378 = this375;
  struct __gnu_cxx____normal_iterator_char____void_* t379 = unnamed376;
  char* t380 = t379->_M_current;
  t378->_M_current = t380;
  __retval377 = t378;
  struct __gnu_cxx____normal_iterator_char____void_* t381 = __retval377;
  return t381;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcvE4baseEv
char** __gnu_cxx____normal_iterator_char___void___base___const(struct __gnu_cxx____normal_iterator_char____void_* v382) {
bb383:
  struct __gnu_cxx____normal_iterator_char____void_* this384;
  char** __retval385;
  this384 = v382;
  struct __gnu_cxx____normal_iterator_char____void_* t386 = this384;
  __retval385 = &t386->_M_current;
  char** t387 = __retval385;
  return t387;
}

// function: _ZSt14__relocate_a_1IccENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
char* std__enable_if_std____is_bitwise_relocatable_char___value__char____type_std____relocate_a_1_char__char_(char* v388, char* v389, char* v390, struct std__allocator_char_* v391) {
bb392:
  char* __first393;
  char* __last394;
  char* __result395;
  struct std__allocator_char_* __alloc396;
  char* __retval397;
  long __count398;
  __first393 = v388;
  __last394 = v389;
  __result395 = v390;
  __alloc396 = v391;
  char* t399 = __last394;
  char* t400 = __first393;
  long diff401 = t399 - t400;
  __count398 = diff401;
    long t402 = __count398;
    long c403 = 0;
    _Bool c404 = ((t402 > c403)) ? 1 : 0;
    if (c404) {
        _Bool r405 = std__is_constant_evaluated();
        if (r405) {
          struct __gnu_cxx____normal_iterator_char____void_ __out406;
          struct __gnu_cxx____normal_iterator_char____void_ ref_tmp0407;
          struct __gnu_cxx____normal_iterator_char____void_ agg_tmp0408;
          __gnu_cxx____normal_iterator_char___void_____normal_iterator(&__out406, &__result395);
          char* t409 = __first393;
          char* t410 = __last394;
          agg_tmp0408 = __out406; // copy
          struct std__allocator_char_* t411 = __alloc396;
          struct __gnu_cxx____normal_iterator_char____void_ t412 = agg_tmp0408;
          struct __gnu_cxx____normal_iterator_char____void_ r413 = __gnu_cxx____normal_iterator_char___void__std____relocate_a_1_char_____gnu_cxx____normal_iterator_char___void___std__allocator_char___(t409, t410, t412, t411);
          ref_tmp0407 = r413;
          struct __gnu_cxx____normal_iterator_char____void_* r414 = __gnu_cxx____normal_iterator_char___void___operator_(&__out406, &ref_tmp0407);
          char** r415 = __gnu_cxx____normal_iterator_char___void___base___const(&__out406);
          char* t416 = *r415;
          __retval397 = t416;
          char* t417 = __retval397;
          return t417;
        }
      char* t418 = __result395;
      void* cast419 = (void*)t418;
      char* t420 = __first393;
      void* cast421 = (void*)t420;
      long t422 = __count398;
      unsigned long cast423 = (unsigned long)t422;
      unsigned long c424 = 1;
      unsigned long b425 = cast423 * c424;
      void* r426 = memcpy(cast419, cast421, b425);
    }
  char* t427 = __result395;
  long t428 = __count398;
  char* ptr429 = &(t427)[t428];
  __retval397 = ptr429;
  char* t430 = __retval397;
  return t430;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v431) {
bb432:
  char* __it433;
  char* __retval434;
  __it433 = v431;
  char* t435 = __it433;
  __retval434 = t435;
  char* t436 = __retval434;
  return t436;
}

// function: _ZSt12__relocate_aIPcS0_SaIcEET0_T_S3_S2_RT1_
char* char__std____relocate_a_char___char___std__allocator_char___(char* v437, char* v438, char* v439, struct std__allocator_char_* v440) {
bb441:
  char* __first442;
  char* __last443;
  char* __result444;
  struct std__allocator_char_* __alloc445;
  char* __retval446;
  __first442 = v437;
  __last443 = v438;
  __result444 = v439;
  __alloc445 = v440;
  char* t447 = __first442;
  char* r448 = char__std____niter_base_char__(t447);
  char* t449 = __last443;
  char* r450 = char__std____niter_base_char__(t449);
  char* t451 = __result444;
  char* r452 = char__std____niter_base_char__(t451);
  struct std__allocator_char_* t453 = __alloc445;
  char* r454 = std__enable_if_std____is_bitwise_relocatable_char___value__char____type_std____relocate_a_1_char__char_(r448, r450, r452, t453);
  __retval446 = r454;
  char* t455 = __retval446;
  return t455;
}

// function: _ZNSt6vectorIcSaIcEE11_S_relocateEPcS2_S2_RS0_
char* std__vector_char__std__allocator_char______S_relocate(char* v456, char* v457, char* v458, struct std__allocator_char_* v459) {
bb460:
  char* __first461;
  char* __last462;
  char* __result463;
  struct std__allocator_char_* __alloc464;
  char* __retval465;
  __first461 = v456;
  __last462 = v457;
  __result463 = v458;
  __alloc464 = v459;
  char* t466 = __first461;
  char* t467 = __last462;
  char* t468 = __result463;
  struct std__allocator_char_* t469 = __alloc464;
  char* r470 = char__std____relocate_a_char___char___std__allocator_char___(t466, t467, t468, t469);
  __retval465 = r470;
  char* t471 = __retval465;
  return t471;
}

// function: _ZNSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* v472) {
bb473:
  struct std___Vector_base_char__std__allocator_char__* this474;
  struct std__allocator_char_* __retval475;
  this474 = v472;
  struct std___Vector_base_char__std__allocator_char__* t476 = this474;
  struct std__allocator_char_* base477 = (struct std__allocator_char_*)((char *)&(t476->_M_impl) + 0);
  __retval475 = base477;
  struct std__allocator_char_* t478 = __retval475;
  return t478;
}

// function: _ZNSt6vectorIcSaIcEE12_Guard_allocD2Ev
void std__vector_char__std__allocator_char______Guard_alloc____Guard_alloc(struct std__vector_char__std__allocator_char_____Guard_alloc* v479) {
bb480:
  struct std__vector_char__std__allocator_char_____Guard_alloc* this481;
  this481 = v479;
  struct std__vector_char__std__allocator_char_____Guard_alloc* t482 = this481;
    char* t483 = t482->_M_storage;
    _Bool cast484 = (_Bool)t483;
    if (cast484) {
      struct std___Vector_base_char__std__allocator_char__* t485 = t482->_M_vect;
      char* t486 = t482->_M_storage;
      unsigned long t487 = t482->_M_len;
      std___Vector_base_char__std__allocator_char______M_deallocate(t485, t486, t487);
    }
  return;
}

// function: _ZNSt6vectorIcSaIcEE17_M_realloc_appendIJcEEEvDpOT_
void void_std__vector_char__std__allocator_char______M_realloc_append_char_(struct std__vector_char__std__allocator_char__* v488, char* v489) {
bb490:
  struct std__vector_char__std__allocator_char__* this491;
  char* __args492;
  unsigned long __len493;
  char* __old_start494;
  char* __old_finish495;
  unsigned long __elems496;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp0497;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp1498;
  char* __new_start499;
  char* __new_finish500;
  this491 = v488;
  __args492 = v489;
  struct std__vector_char__std__allocator_char__* t501 = this491;
  unsigned long c502 = 1;
  char* cast503 = (char*)&(_str_5);
  unsigned long r504 = std__vector_char__std__allocator_char______M_check_len_unsigned_long__char_const___const(t501, c502, cast503);
  __len493 = r504;
    unsigned long t505 = __len493;
    unsigned long c506 = 0;
    _Bool c507 = ((t505 <= c506)) ? 1 : 0;
    if (c507) {
      __builtin_unreachable();
    }
  struct std___Vector_base_char__std__allocator_char__* base508 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base509 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base508->_M_impl) + 0);
  char* t510 = base509->_M_start;
  __old_start494 = t510;
  struct std___Vector_base_char__std__allocator_char__* base511 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base512 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base511->_M_impl) + 0);
  char* t513 = base512->_M_finish;
  __old_finish495 = t513;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r514 = std__vector_char__std__allocator_char_____end(t501);
  ref_tmp0497 = r514;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r515 = std__vector_char__std__allocator_char_____begin(t501);
  ref_tmp1498 = r515;
  long r516 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______difference_type___gnu_cxx__operator__char___std__vector_char__std__allocator_char_____(&ref_tmp0497, &ref_tmp1498);
  unsigned long cast517 = (unsigned long)r516;
  __elems496 = cast517;
  struct std___Vector_base_char__std__allocator_char__* base518 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
  unsigned long t519 = __len493;
  char* r520 = std___Vector_base_char__std__allocator_char______M_allocate(base518, t519);
  __new_start499 = r520;
  char* t521 = __new_start499;
  __new_finish500 = t521;
    struct std__vector_char__std__allocator_char_____Guard_alloc __guard522;
    char* ref_tmp2523;
    char* t524 = __new_start499;
    unsigned long t525 = __len493;
    struct std___Vector_base_char__std__allocator_char__* base526 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
    std__vector_char__std__allocator_char______Guard_alloc___Guard_alloc(&__guard522, t524, t525, base526);
      struct std___Vector_base_char__std__allocator_char__* base527 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
      struct std__allocator_char_* base528 = (struct std__allocator_char_*)((char *)&(base527->_M_impl) + 0);
      char* t529 = __new_start499;
      unsigned long t530 = __elems496;
      char* ptr531 = &(t529)[t530];
      ref_tmp2523 = ptr531;
      char* r532 = auto_std____to_address_char__(&ref_tmp2523);
      char* t533 = __args492;
      void_std__allocator_traits_std__allocator_char_____construct_char__char_(base528, r532, t533);
        char* t534 = __old_start494;
        char* t535 = __old_finish495;
        char* t536 = __new_start499;
        struct std___Vector_base_char__std__allocator_char__* base537 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
        struct std__allocator_char_* r538 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base537);
        char* r539 = std__vector_char__std__allocator_char______S_relocate(t534, t535, t536, r538);
        __new_finish500 = r539;
        char* t540 = __new_finish500;
        int c541 = 1;
        char* ptr542 = &(t540)[c541];
        __new_finish500 = ptr542;
      char* t543 = __old_start494;
      __guard522._M_storage = t543;
      struct std___Vector_base_char__std__allocator_char__* base544 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
      struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base545 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base544->_M_impl) + 0);
      char* t546 = base545->_M_end_of_storage;
      char* t547 = __old_start494;
      long diff548 = t546 - t547;
      unsigned long cast549 = (unsigned long)diff548;
      __guard522._M_len = cast549;
    {
      std__vector_char__std__allocator_char______Guard_alloc____Guard_alloc(&__guard522);
    }
  char* t550 = __new_start499;
  struct std___Vector_base_char__std__allocator_char__* base551 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base552 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base551->_M_impl) + 0);
  base552->_M_start = t550;
  char* t553 = __new_finish500;
  struct std___Vector_base_char__std__allocator_char__* base554 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base555 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base554->_M_impl) + 0);
  base555->_M_finish = t553;
  char* t556 = __new_start499;
  unsigned long t557 = __len493;
  char* ptr558 = &(t556)[t557];
  struct std___Vector_base_char__std__allocator_char__* base559 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t501 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base560 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base559->_M_impl) + 0);
  base560->_M_end_of_storage = ptr558;
  return;
}

// function: _ZNSt6vectorIcSaIcEE12emplace_backIJcEEERcDpOT_
char* char__std__vector_char__std__allocator_char_____emplace_back_char_(struct std__vector_char__std__allocator_char__* v561, char* v562) {
bb563:
  struct std__vector_char__std__allocator_char__* this564;
  char* __args565;
  char* __retval566;
  this564 = v561;
  __args565 = v562;
  struct std__vector_char__std__allocator_char__* t567 = this564;
    struct std___Vector_base_char__std__allocator_char__* base568 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t567 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base569 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base568->_M_impl) + 0);
    char* t570 = base569->_M_finish;
    struct std___Vector_base_char__std__allocator_char__* base571 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t567 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base572 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base571->_M_impl) + 0);
    char* t573 = base572->_M_end_of_storage;
    _Bool c574 = ((t570 != t573)) ? 1 : 0;
    if (c574) {
      struct std___Vector_base_char__std__allocator_char__* base575 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t567 + 0);
      struct std__allocator_char_* base576 = (struct std__allocator_char_*)((char *)&(base575->_M_impl) + 0);
      struct std___Vector_base_char__std__allocator_char__* base577 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t567 + 0);
      struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base578 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base577->_M_impl) + 0);
      char* t579 = base578->_M_finish;
      char* t580 = __args565;
      void_std__allocator_traits_std__allocator_char_____construct_char__char_(base576, t579, t580);
      struct std___Vector_base_char__std__allocator_char__* base581 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t567 + 0);
      struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base582 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base581->_M_impl) + 0);
      char* t583 = base582->_M_finish;
      int c584 = 1;
      char* ptr585 = &(t583)[c584];
      base582->_M_finish = ptr585;
    } else {
      char* t586 = __args565;
      void_std__vector_char__std__allocator_char______M_realloc_append_char_(t567, t586);
    }
  char* r587 = std__vector_char__std__allocator_char_____back(t567);
  __retval566 = r587;
  char* t588 = __retval566;
  return t588;
}

// function: _ZNSt6vectorIcSaIcEE9push_backEOc
void std__vector_char__std__allocator_char_____push_back(struct std__vector_char__std__allocator_char__* v589, char* v590) {
bb591:
  struct std__vector_char__std__allocator_char__* this592;
  char* __x593;
  this592 = v589;
  __x593 = v590;
  struct std__vector_char__std__allocator_char__* t594 = this592;
  char* t595 = __x593;
  char* r596 = char__std__vector_char__std__allocator_char_____emplace_back_char_(t594, t595);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v597) {
bb598:
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* this599;
  char** __retval600;
  this599 = v597;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t601 = this599;
  __retval600 = &t601->_M_current;
  char** t602 = __retval600;
  return t602;
}

// function: _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v603, struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v604) {
bb605:
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* __lhs606;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* __rhs607;
  _Bool __retval608;
  __lhs606 = v603;
  __rhs607 = v604;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t609 = __lhs606;
  char** r610 = __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(t609);
  char* t611 = *r610;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t612 = __rhs607;
  char** r613 = __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(t612);
  char* t614 = *r613;
  _Bool c615 = ((t611 == t614)) ? 1 : 0;
  __retval608 = c615;
  _Bool t616 = __retval608;
  return t616;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcSt6vectorIcSaIcEEEC2ERKS2_
void __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v617, char** v618) {
bb619:
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* this620;
  char** __i621;
  this620 = v617;
  __i621 = v618;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t622 = this620;
  char** t623 = __i621;
  char* t624 = *t623;
  t622->_M_current = t624;
  return;
}

// function: _ZNKSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin___const(struct std__vector_char__std__allocator_char__* v625) {
bb626:
  struct std__vector_char__std__allocator_char__* this627;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ __retval628;
  this627 = v625;
  struct std__vector_char__std__allocator_char__* t629 = this627;
  struct std___Vector_base_char__std__allocator_char__* base630 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t629 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base631 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base630->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(&__retval628, &base631->_M_start);
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ t632 = __retval628;
  return t632;
}

// function: _ZNKSt6vectorIcSaIcEE3endEv
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end___const(struct std__vector_char__std__allocator_char__* v633) {
bb634:
  struct std__vector_char__std__allocator_char__* this635;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ __retval636;
  this635 = v633;
  struct std__vector_char__std__allocator_char__* t637 = this635;
  struct std___Vector_base_char__std__allocator_char__* base638 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t637 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base639 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base638->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(&__retval636, &base639->_M_finish);
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ t640 = __retval636;
  return t640;
}

// function: _ZNKSt6vectorIcSaIcEE5emptyEv
_Bool std__vector_char__std__allocator_char_____empty___const(struct std__vector_char__std__allocator_char__* v641) {
bb642:
  struct std__vector_char__std__allocator_char__* this643;
  _Bool __retval644;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ ref_tmp0645;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ ref_tmp1646;
  this643 = v641;
  struct std__vector_char__std__allocator_char__* t647 = this643;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ r648 = std__vector_char__std__allocator_char_____begin___const(t647);
  ref_tmp0645 = r648;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ r649 = std__vector_char__std__allocator_char_____end___const(t647);
  ref_tmp1646 = r649;
  _Bool r650 = _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0645, &ref_tmp1646);
  __retval644 = r650;
  _Bool t651 = __retval644;
  return t651;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEdeEv
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v652) {
bb653:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this654;
  char* __retval655;
  this654 = v652;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t656 = this654;
  char* t657 = t656->_M_current;
  __retval655 = t657;
  char* t658 = __retval655;
  return t658;
}

// function: _ZNSt6vectorIcSaIcEE5frontEv
char* std__vector_char__std__allocator_char_____front(struct std__vector_char__std__allocator_char__* v659) {
bb660:
  struct std__vector_char__std__allocator_char__* this661;
  char* __retval662;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp0663;
  this661 = v659;
  struct std__vector_char__std__allocator_char__* t664 = this661;
    do {
          _Bool r665 = std__vector_char__std__allocator_char_____empty___const(t664);
          if (r665) {
            char* cast666 = (char*)&(_str_6);
            int c667 = 1346;
            char* cast668 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE5frontEv);
            char* cast669 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast666, c667, cast668, cast669);
          }
      _Bool c670 = 0;
      if (!c670) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r671 = std__vector_char__std__allocator_char_____begin(t664);
  ref_tmp0663 = r671;
  char* r672 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&ref_tmp0663);
  __retval662 = r672;
  char* t673 = __retval662;
  return t673;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v674) {
bb675:
  struct std__ios_base* this676;
  long __retval677;
  this676 = v674;
  struct std__ios_base* t678 = this676;
  long t679 = t678->_M_width;
  __retval677 = t679;
  long t680 = __retval677;
  return t680;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v681, char v682) {
bb683:
  struct std__basic_ostream_char__std__char_traits_char__* __out684;
  char __c685;
  struct std__basic_ostream_char__std__char_traits_char__* __retval686;
  __out684 = v681;
  __c685 = v682;
    struct std__basic_ostream_char__std__char_traits_char__* t687 = __out684;
    void** v688 = (void**)t687;
    void* v689 = *((void**)v688);
    unsigned char* cast690 = (unsigned char*)v689;
    long c691 = -24;
    unsigned char* ptr692 = &(cast690)[c691];
    long* cast693 = (long*)ptr692;
    long t694 = *cast693;
    unsigned char* cast695 = (unsigned char*)t687;
    unsigned char* ptr696 = &(cast695)[t694];
    struct std__basic_ostream_char__std__char_traits_char__* cast697 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr696;
    struct std__ios_base* cast698 = (struct std__ios_base*)cast697;
    long r699 = std__ios_base__width___const(cast698);
    long c700 = 0;
    _Bool c701 = ((r699 != c700)) ? 1 : 0;
    if (c701) {
      struct std__basic_ostream_char__std__char_traits_char__* t702 = __out684;
      long c703 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r704 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t702, &__c685, c703);
      __retval686 = r704;
      struct std__basic_ostream_char__std__char_traits_char__* t705 = __retval686;
      return t705;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t706 = __out684;
  char t707 = __c685;
  struct std__basic_ostream_char__std__char_traits_char__* r708 = std__ostream__put(t706, t707);
  struct std__basic_ostream_char__std__char_traits_char__* t709 = __out684;
  __retval686 = t709;
  struct std__basic_ostream_char__std__char_traits_char__* t710 = __retval686;
  return t710;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v711, int v712) {
bb713:
  int __a714;
  int __b715;
  int __retval716;
  __a714 = v711;
  __b715 = v712;
  int t717 = __a714;
  int t718 = __b715;
  int b719 = t717 | t718;
  __retval716 = b719;
  int t720 = __retval716;
  return t720;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v721) {
bb722:
  struct std__basic_ios_char__std__char_traits_char__* this723;
  int __retval724;
  this723 = v721;
  struct std__basic_ios_char__std__char_traits_char__* t725 = this723;
  struct std__ios_base* base726 = (struct std__ios_base*)((char *)t725 + 0);
  int t727 = base726->_M_streambuf_state;
  __retval724 = t727;
  int t728 = __retval724;
  return t728;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v729, int v730) {
bb731:
  struct std__basic_ios_char__std__char_traits_char__* this732;
  int __state733;
  this732 = v729;
  __state733 = v730;
  struct std__basic_ios_char__std__char_traits_char__* t734 = this732;
  int r735 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t734);
  int t736 = __state733;
  int r737 = std__operator_(r735, t736);
  std__basic_ios_char__std__char_traits_char_____clear(t734, r737);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v738, char* v739) {
bb740:
  char* __c1741;
  char* __c2742;
  _Bool __retval743;
  __c1741 = v738;
  __c2742 = v739;
  char* t744 = __c1741;
  char t745 = *t744;
  int cast746 = (int)t745;
  char* t747 = __c2742;
  char t748 = *t747;
  int cast749 = (int)t748;
  _Bool c750 = ((cast746 == cast749)) ? 1 : 0;
  __retval743 = c750;
  _Bool t751 = __retval743;
  return t751;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v752) {
bb753:
  char* __p754;
  unsigned long __retval755;
  unsigned long __i756;
  __p754 = v752;
  unsigned long c757 = 0;
  __i756 = c757;
    char ref_tmp0758;
    while (1) {
      unsigned long t759 = __i756;
      char* t760 = __p754;
      char* ptr761 = &(t760)[t759];
      char c762 = 0;
      ref_tmp0758 = c762;
      _Bool r763 = __gnu_cxx__char_traits_char___eq(ptr761, &ref_tmp0758);
      _Bool u764 = !r763;
      if (!u764) break;
      unsigned long t765 = __i756;
      unsigned long u766 = t765 + 1;
      __i756 = u766;
    }
  unsigned long t767 = __i756;
  __retval755 = t767;
  unsigned long t768 = __retval755;
  return t768;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v769) {
bb770:
  char* __s771;
  unsigned long __retval772;
  __s771 = v769;
    _Bool r773 = std____is_constant_evaluated();
    if (r773) {
      char* t774 = __s771;
      unsigned long r775 = __gnu_cxx__char_traits_char___length(t774);
      __retval772 = r775;
      unsigned long t776 = __retval772;
      return t776;
    }
  char* t777 = __s771;
  unsigned long r778 = strlen(t777);
  __retval772 = r778;
  unsigned long t779 = __retval772;
  return t779;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v780, char* v781) {
bb782:
  struct std__basic_ostream_char__std__char_traits_char__* __out783;
  char* __s784;
  struct std__basic_ostream_char__std__char_traits_char__* __retval785;
  __out783 = v780;
  __s784 = v781;
    char* t786 = __s784;
    _Bool cast787 = (_Bool)t786;
    _Bool u788 = !cast787;
    if (u788) {
      struct std__basic_ostream_char__std__char_traits_char__* t789 = __out783;
      void** v790 = (void**)t789;
      void* v791 = *((void**)v790);
      unsigned char* cast792 = (unsigned char*)v791;
      long c793 = -24;
      unsigned char* ptr794 = &(cast792)[c793];
      long* cast795 = (long*)ptr794;
      long t796 = *cast795;
      unsigned char* cast797 = (unsigned char*)t789;
      unsigned char* ptr798 = &(cast797)[t796];
      struct std__basic_ostream_char__std__char_traits_char__* cast799 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr798;
      struct std__basic_ios_char__std__char_traits_char__* cast800 = (struct std__basic_ios_char__std__char_traits_char__*)cast799;
      int t801 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast800, t801);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t802 = __out783;
      char* t803 = __s784;
      char* t804 = __s784;
      unsigned long r805 = std__char_traits_char___length(t804);
      long cast806 = (long)r805;
      struct std__basic_ostream_char__std__char_traits_char__* r807 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t802, t803, cast806);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t808 = __out783;
  __retval785 = t808;
  struct std__basic_ostream_char__std__char_traits_char__* t809 = __retval785;
  return t809;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v810, void* v811) {
bb812:
  struct std__basic_ostream_char__std__char_traits_char__* this813;
  void* __pf814;
  struct std__basic_ostream_char__std__char_traits_char__* __retval815;
  this813 = v810;
  __pf814 = v811;
  struct std__basic_ostream_char__std__char_traits_char__* t816 = this813;
  void* t817 = __pf814;
  struct std__basic_ostream_char__std__char_traits_char__* r818 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t817)(t816);
  __retval815 = r818;
  struct std__basic_ostream_char__std__char_traits_char__* t819 = __retval815;
  return t819;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v820) {
bb821:
  struct std__basic_ostream_char__std__char_traits_char__* __os822;
  struct std__basic_ostream_char__std__char_traits_char__* __retval823;
  __os822 = v820;
  struct std__basic_ostream_char__std__char_traits_char__* t824 = __os822;
  struct std__basic_ostream_char__std__char_traits_char__* r825 = std__ostream__flush(t824);
  __retval823 = r825;
  struct std__basic_ostream_char__std__char_traits_char__* t826 = __retval823;
  return t826;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v827) {
bb828:
  struct std__ctype_char_* __f829;
  struct std__ctype_char_* __retval830;
  __f829 = v827;
    struct std__ctype_char_* t831 = __f829;
    _Bool cast832 = (_Bool)t831;
    _Bool u833 = !cast832;
    if (u833) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t834 = __f829;
  __retval830 = t834;
  struct std__ctype_char_* t835 = __retval830;
  return t835;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v836, char v837) {
bb838:
  struct std__ctype_char_* this839;
  char __c840;
  char __retval841;
  this839 = v836;
  __c840 = v837;
  struct std__ctype_char_* t842 = this839;
    char t843 = t842->_M_widen_ok;
    _Bool cast844 = (_Bool)t843;
    if (cast844) {
      char t845 = __c840;
      unsigned char cast846 = (unsigned char)t845;
      unsigned long cast847 = (unsigned long)cast846;
      char t848 = t842->_M_widen[cast847];
      __retval841 = t848;
      char t849 = __retval841;
      return t849;
    }
  std__ctype_char____M_widen_init___const(t842);
  char t850 = __c840;
  void** v851 = (void**)t842;
  void* v852 = *((void**)v851);
  char vcall855 = (char)__VERIFIER_virtual_call_char_char(t842, 6, t850);
  __retval841 = vcall855;
  char t856 = __retval841;
  return t856;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v857, char v858) {
bb859:
  struct std__basic_ios_char__std__char_traits_char__* this860;
  char __c861;
  char __retval862;
  this860 = v857;
  __c861 = v858;
  struct std__basic_ios_char__std__char_traits_char__* t863 = this860;
  struct std__ctype_char_* t864 = t863->_M_ctype;
  struct std__ctype_char_* r865 = std__ctype_char__const__std____check_facet_std__ctype_char___(t864);
  char t866 = __c861;
  char r867 = std__ctype_char___widen_char__const(r865, t866);
  __retval862 = r867;
  char t868 = __retval862;
  return t868;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v869) {
bb870:
  struct std__basic_ostream_char__std__char_traits_char__* __os871;
  struct std__basic_ostream_char__std__char_traits_char__* __retval872;
  __os871 = v869;
  struct std__basic_ostream_char__std__char_traits_char__* t873 = __os871;
  struct std__basic_ostream_char__std__char_traits_char__* t874 = __os871;
  void** v875 = (void**)t874;
  void* v876 = *((void**)v875);
  unsigned char* cast877 = (unsigned char*)v876;
  long c878 = -24;
  unsigned char* ptr879 = &(cast877)[c878];
  long* cast880 = (long*)ptr879;
  long t881 = *cast880;
  unsigned char* cast882 = (unsigned char*)t874;
  unsigned char* ptr883 = &(cast882)[t881];
  struct std__basic_ostream_char__std__char_traits_char__* cast884 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr883;
  struct std__basic_ios_char__std__char_traits_char__* cast885 = (struct std__basic_ios_char__std__char_traits_char__*)cast884;
  char c886 = 10;
  char r887 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast885, c886);
  struct std__basic_ostream_char__std__char_traits_char__* r888 = std__ostream__put(t873, r887);
  struct std__basic_ostream_char__std__char_traits_char__* r889 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r888);
  __retval872 = r889;
  struct std__basic_ostream_char__std__char_traits_char__* t890 = __retval872;
  return t890;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEmiEl
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v891, long v892) {
bb893:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this894;
  long __n895;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval896;
  char* ref_tmp0897;
  this894 = v891;
  __n895 = v892;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t898 = this894;
  char* t899 = t898->_M_current;
  long t900 = __n895;
  long u901 = -t900;
  char* ptr902 = &(t899)[u901];
  ref_tmp0897 = ptr902;
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval896, &ref_tmp0897);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t903 = __retval896;
  return t903;
}

// function: _ZNSt6vectorIcSaIcEE4backEv
char* std__vector_char__std__allocator_char_____back(struct std__vector_char__std__allocator_char__* v904) {
bb905:
  struct std__vector_char__std__allocator_char__* this906;
  char* __retval907;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp0908;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp1909;
  this906 = v904;
  struct std__vector_char__std__allocator_char__* t910 = this906;
    do {
          _Bool r911 = std__vector_char__std__allocator_char_____empty___const(t910);
          if (r911) {
            char* cast912 = (char*)&(_str_6);
            int c913 = 1370;
            char* cast914 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE4backEv);
            char* cast915 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast912, c913, cast914, cast915);
          }
      _Bool c916 = 0;
      if (!c916) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r917 = std__vector_char__std__allocator_char_____end(t910);
  ref_tmp1909 = r917;
  long c918 = 1;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r919 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(&ref_tmp1909, c918);
  ref_tmp0908 = r919;
  char* r920 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&ref_tmp0908);
  __retval907 = r920;
  char* t921 = __retval907;
  return t921;
}

// function: _ZNSt6vectorIcSaIcEE8pop_backEv
void std__vector_char__std__allocator_char_____pop_back(struct std__vector_char__std__allocator_char__* v922) {
bb923:
  struct std__vector_char__std__allocator_char__* this924;
  this924 = v922;
  struct std__vector_char__std__allocator_char__* t925 = this924;
    do {
          _Bool r926 = std__vector_char__std__allocator_char_____empty___const(t925);
          if (r926) {
            char* cast927 = (char*)&(_str_6);
            int c928 = 1459;
            char* cast929 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE8pop_backEv);
            char* cast930 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast927, c928, cast929, cast930);
          }
      _Bool c931 = 0;
      if (!c931) break;
    } while (1);
  struct std___Vector_base_char__std__allocator_char__* base932 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t925 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base933 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base932->_M_impl) + 0);
  char* t934 = base933->_M_finish;
  int c935 = -1;
  char* ptr936 = &(t934)[c935];
  base933->_M_finish = ptr936;
  struct std___Vector_base_char__std__allocator_char__* base937 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t925 + 0);
  struct std__allocator_char_* base938 = (struct std__allocator_char_*)((char *)&(base937->_M_impl) + 0);
  struct std___Vector_base_char__std__allocator_char__* base939 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t925 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base940 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base939->_M_impl) + 0);
  char* t941 = base940->_M_finish;
  void_std__allocator_traits_std__allocator_char_____destroy_char_(base938, t941);
  return;
}

// function: _ZNSt6vectorIcSaIcEED2Ev
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* v942) {
bb943:
  struct std__vector_char__std__allocator_char__* this944;
  this944 = v942;
  struct std__vector_char__std__allocator_char__* t945 = this944;
    struct std___Vector_base_char__std__allocator_char__* base946 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t945 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base947 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base946->_M_impl) + 0);
    char* t948 = base947->_M_start;
    struct std___Vector_base_char__std__allocator_char__* base949 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t945 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base950 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base949->_M_impl) + 0);
    char* t951 = base950->_M_finish;
    struct std___Vector_base_char__std__allocator_char__* base952 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t945 + 0);
    struct std__allocator_char_* r953 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base952);
    void_std___Destroy_char___char_(t948, t951, r953);
  {
    struct std___Vector_base_char__std__allocator_char__* base954 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t945 + 0);
    std___Vector_base_char__std__allocator_char_______Vector_base(base954);
  }
  return;
}

// function: main
int main() {
bb955:
  int __retval956;
  struct std__vector_char__std__allocator_char__ letters957;
  char ref_tmp0958;
  char ref_tmp1959;
  char ref_tmp2960;
  char ref_tmp3961;
  char ref_tmp4962;
  char ref_tmp5963;
  char ref_tmp6964;
  int c965 = 0;
  __retval956 = c965;
  std__vector_char__std__allocator_char_____vector(&letters957);
    char c966 = 97;
    ref_tmp0958 = c966;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp0958);
    char c967 = 98;
    ref_tmp1959 = c967;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp1959);
    char c968 = 99;
    ref_tmp2960 = c968;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp2960);
    char c969 = 100;
    ref_tmp3961 = c969;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp3961);
    char c970 = 101;
    ref_tmp4962 = c970;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp4962);
    char c971 = 102;
    ref_tmp5963 = c971;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp5963);
    char c972 = 103;
    ref_tmp6964 = c972;
    std__vector_char__std__allocator_char_____push_back(&letters957, &ref_tmp6964);
      _Bool r973 = std__vector_char__std__allocator_char_____empty___const(&letters957);
      _Bool u974 = !r973;
      if (u974) {
        char* r975 = std__vector_char__std__allocator_char_____front(&letters957);
        char t976 = *r975;
        int cast977 = (int)t976;
        int c978 = 97;
        _Bool c979 = ((cast977 == c978)) ? 1 : 0;
        if (c979) {
        } else {
          char* cast980 = (char*)&(_str);
          char* c981 = _str_1;
          unsigned int c982 = 24;
          char* cast983 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast980, c981, c982, cast983);
        }
        char* cast984 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r985 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast984);
        char* r986 = std__vector_char__std__allocator_char_____front(&letters957);
        char t987 = *r986;
        struct std__basic_ostream_char__std__char_traits_char__* r988 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r985, t987);
        struct std__basic_ostream_char__std__char_traits_char__* r989 = std__ostream__operator___std__ostream_____(r988, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    char* r990 = std__vector_char__std__allocator_char_____back(&letters957);
    char t991 = *r990;
    int cast992 = (int)t991;
    int c993 = 103;
    _Bool c994 = ((cast992 == c993)) ? 1 : 0;
    if (c994) {
    } else {
      char* cast995 = (char*)&(_str_3);
      char* c996 = _str_1;
      unsigned int c997 = 27;
      char* cast998 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast995, c996, c997, cast998);
    }
    std__vector_char__std__allocator_char_____pop_back(&letters957);
    char* r999 = std__vector_char__std__allocator_char_____back(&letters957);
    char t1000 = *r999;
    int cast1001 = (int)t1000;
    int c1002 = 102;
    _Bool c1003 = ((cast1001 == c1002)) ? 1 : 0;
    if (c1003) {
    } else {
      char* cast1004 = (char*)&(_str_4);
      char* c1005 = _str_1;
      unsigned int c1006 = 29;
      char* cast1007 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1004, c1005, c1006, cast1007);
    }
    int c1008 = 0;
    __retval956 = c1008;
    int t1009 = __retval956;
    int ret_val1010 = t1009;
    {
      std__vector_char__std__allocator_char______vector(&letters957);
    }
    return ret_val1010;
  int t1011 = __retval956;
  return t1011;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v1012) {
bb1013:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this1014;
  this1014 = v1012;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t1015 = this1014;
  struct std__allocator_char_* base1016 = (struct std__allocator_char_*)((char *)t1015 + 0);
  std__allocator_char___allocator(base1016);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1017 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)t1015 + 0);
    std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(base1017);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implD2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v1018) {
bb1019:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this1020;
  this1020 = v1018;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t1021 = this1020;
  {
    struct std__allocator_char_* base1022 = (struct std__allocator_char_*)((char *)t1021 + 0);
    std__allocator_char____allocator(base1022);
  }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEEC2Ev
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* v1023) {
bb1024:
  struct std___Vector_base_char__std__allocator_char__* this1025;
  this1025 = v1023;
  struct std___Vector_base_char__std__allocator_char__* t1026 = this1025;
  _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1026->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1027:
  _Bool __retval1028;
    _Bool c1029 = 0;
    __retval1028 = c1029;
    _Bool t1030 = __retval1028;
    return t1030;
  abort();
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1031, char* v1032, unsigned long v1033) {
bb1034:
  struct std____new_allocator_char_* this1035;
  char* __p1036;
  unsigned long __n1037;
  this1035 = v1031;
  __p1036 = v1032;
  __n1037 = v1033;
  struct std____new_allocator_char_* t1038 = this1035;
    unsigned long c1039 = 1;
    unsigned long c1040 = 16;
    _Bool c1041 = ((c1039 > c1040)) ? 1 : 0;
    if (c1041) {
      char* t1042 = __p1036;
      void* cast1043 = (void*)t1042;
      unsigned long t1044 = __n1037;
      unsigned long c1045 = 1;
      unsigned long b1046 = t1044 * c1045;
      unsigned long c1047 = 1;
      operator_delete_3(cast1043, b1046, c1047);
      return;
    }
  char* t1048 = __p1036;
  void* cast1049 = (void*)t1048;
  unsigned long t1050 = __n1037;
  unsigned long c1051 = 1;
  unsigned long b1052 = t1050 * c1051;
  operator_delete_2(cast1049, b1052);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1053, char* v1054, unsigned long v1055) {
bb1056:
  struct std__allocator_char_* this1057;
  char* __p1058;
  unsigned long __n1059;
  this1057 = v1053;
  __p1058 = v1054;
  __n1059 = v1055;
  struct std__allocator_char_* t1060 = this1057;
    _Bool r1061 = std____is_constant_evaluated();
    if (r1061) {
      char* t1062 = __p1058;
      void* cast1063 = (void*)t1062;
      operator_delete(cast1063);
      return;
    }
  struct std____new_allocator_char_* base1064 = (struct std____new_allocator_char_*)((char *)t1060 + 0);
  char* t1065 = __p1058;
  unsigned long t1066 = __n1059;
  std____new_allocator_char___deallocate(base1064, t1065, t1066);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1067, char* v1068, unsigned long v1069) {
bb1070:
  struct std__allocator_char_* __a1071;
  char* __p1072;
  unsigned long __n1073;
  __a1071 = v1067;
  __p1072 = v1068;
  __n1073 = v1069;
  struct std__allocator_char_* t1074 = __a1071;
  char* t1075 = __p1072;
  unsigned long t1076 = __n1073;
  std__allocator_char___deallocate(t1074, t1075, t1076);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE13_M_deallocateEPcm
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* v1077, char* v1078, unsigned long v1079) {
bb1080:
  struct std___Vector_base_char__std__allocator_char__* this1081;
  char* __p1082;
  unsigned long __n1083;
  this1081 = v1077;
  __p1082 = v1078;
  __n1083 = v1079;
  struct std___Vector_base_char__std__allocator_char__* t1084 = this1081;
    char* t1085 = __p1082;
    _Bool cast1086 = (_Bool)t1085;
    if (cast1086) {
      struct std__allocator_char_* base1087 = (struct std__allocator_char_*)((char *)&(t1084->_M_impl) + 0);
      char* t1088 = __p1082;
      unsigned long t1089 = __n1083;
      std__allocator_traits_std__allocator_char_____deallocate(base1087, t1088, t1089);
    }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEED2Ev
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* v1090) {
bb1091:
  struct std___Vector_base_char__std__allocator_char__* this1092;
  this1092 = v1090;
  struct std___Vector_base_char__std__allocator_char__* t1093 = this1092;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1094 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t1093->_M_impl) + 0);
    char* t1095 = base1094->_M_start;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1096 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t1093->_M_impl) + 0);
    char* t1097 = base1096->_M_end_of_storage;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1098 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t1093->_M_impl) + 0);
    char* t1099 = base1098->_M_start;
    long diff1100 = t1097 - t1099;
    unsigned long cast1101 = (unsigned long)diff1100;
    std___Vector_base_char__std__allocator_char______M_deallocate(t1093, t1095, cast1101);
  {
    std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(&t1093->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1102) {
bb1103:
  struct std____new_allocator_char_* this1104;
  this1104 = v1102;
  struct std____new_allocator_char_* t1105 = this1104;
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator(struct std__allocator_char_* v1106) {
bb1107:
  struct std__allocator_char_* this1108;
  this1108 = v1106;
  struct std__allocator_char_* t1109 = this1108;
  struct std____new_allocator_char_* base1110 = (struct std____new_allocator_char_*)((char *)t1109 + 0);
  std____new_allocator_char_____new_allocator(base1110);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_Vector_impl_dataC2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* v1111) {
bb1112:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* this1113;
  this1113 = v1111;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* t1114 = this1113;
  char* c1115 = ((void*)0);
  t1114->_M_start = c1115;
  char* c1116 = ((void*)0);
  t1114->_M_finish = c1116;
  char* c1117 = ((void*)0);
  t1114->_M_end_of_storage = c1117;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1118) {
bb1119:
  struct std__allocator_char_* this1120;
  this1120 = v1118;
  struct std__allocator_char_* t1121 = this1120;
  return;
}

// function: _ZSt8_DestroyIPcEvT_S1_
void void_std___Destroy_char__(char* v1122, char* v1123) {
bb1124:
  char* __first1125;
  char* __last1126;
  __first1125 = v1122;
  __last1126 = v1123;
      _Bool r1127 = std____is_constant_evaluated();
      if (r1127) {
          while (1) {
            char* t1129 = __first1125;
            char* t1130 = __last1126;
            _Bool c1131 = ((t1129 != t1130)) ? 1 : 0;
            if (!c1131) break;
            char* t1132 = __first1125;
            void_std__destroy_at_char_(t1132);
          for_step1128: ;
            char* t1133 = __first1125;
            int c1134 = 1;
            char* ptr1135 = &(t1133)[c1134];
            __first1125 = ptr1135;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPccEvT_S1_RSaIT0_E
void void_std___Destroy_char___char_(char* v1136, char* v1137, struct std__allocator_char_* v1138) {
bb1139:
  char* __first1140;
  char* __last1141;
  struct std__allocator_char_* unnamed1142;
  __first1140 = v1136;
  __last1141 = v1137;
  unnamed1142 = v1138;
  char* t1143 = __first1140;
  char* t1144 = __last1141;
  void_std___Destroy_char__(t1143, t1144);
  return;
}

