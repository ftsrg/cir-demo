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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
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
char _str[12] = "*bound != 6";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm97/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "odd members:";
char _str_3[2] = " ";
char _str_4[15] = "\neven members:";
char _str_5[26] = "vector::_M_realloc_append";
_Bool IsOdd(int p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2, struct std__bidirectional_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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

// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v10) {
bb11:
  struct std__vector_int__std__allocator_int__* this12;
  this12 = v10;
  struct std__vector_int__std__allocator_int__* t13 = this12;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t13 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base14);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v15) {
bb16:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this17;
  this17 = v15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t18 = this17;
  int* c19 = ((void*)0);
  t18->_M_current = c19;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v20, int* v21) {
bb22:
  int* __location23;
  int* __args24;
  int* __retval25;
  void* __loc26;
  __location23 = v20;
  __args24 = v21;
  int* t27 = __location23;
  void* cast28 = (void*)t27;
  __loc26 = cast28;
    void* t29 = __loc26;
    int* cast30 = (int*)t29;
    int* t31 = __args24;
    int t32 = *t31;
    *cast30 = t32;
    __retval25 = cast30;
    int* t33 = __retval25;
    return t33;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v34, int* v35, int* v36) {
bb37:
  struct std__allocator_int_* __a38;
  int* __p39;
  int* __args40;
  __a38 = v34;
  __p39 = v35;
  __args40 = v36;
  int* t41 = __p39;
  int* t42 = __args40;
  int* r43 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t41, t42);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v44, unsigned long* v45) {
bb46:
  unsigned long* __a47;
  unsigned long* __b48;
  unsigned long* __retval49;
  __a47 = v44;
  __b48 = v45;
    unsigned long* t50 = __b48;
    unsigned long t51 = *t50;
    unsigned long* t52 = __a47;
    unsigned long t53 = *t52;
    _Bool c54 = ((t51 < t53)) ? 1 : 0;
    if (c54) {
      unsigned long* t55 = __b48;
      __retval49 = t55;
      unsigned long* t56 = __retval49;
      return t56;
    }
  unsigned long* t57 = __a47;
  __retval49 = t57;
  unsigned long* t58 = __retval49;
  return t58;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v59) {
bb60:
  struct std__allocator_int_* __a61;
  unsigned long __retval62;
  unsigned long __diffmax63;
  unsigned long __allocmax64;
  __a61 = v59;
  unsigned long c65 = 2305843009213693951;
  __diffmax63 = c65;
  unsigned long c66 = 4611686018427387903;
  __allocmax64 = c66;
  unsigned long* r67 = unsigned_long_const__std__min_unsigned_long_(&__diffmax63, &__allocmax64);
  unsigned long t68 = *r67;
  __retval62 = t68;
  unsigned long t69 = __retval62;
  return t69;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v70) {
bb71:
  struct std___Vector_base_int__std__allocator_int__* this72;
  struct std__allocator_int_* __retval73;
  this72 = v70;
  struct std___Vector_base_int__std__allocator_int__* t74 = this72;
  struct std__allocator_int_* base75 = (struct std__allocator_int_*)((char *)&(t74->_M_impl) + 0);
  __retval73 = base75;
  struct std__allocator_int_* t76 = __retval73;
  return t76;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v77) {
bb78:
  struct std__vector_int__std__allocator_int__* this79;
  unsigned long __retval80;
  this79 = v77;
  struct std__vector_int__std__allocator_int__* t81 = this79;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std__allocator_int_* r83 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base82);
  unsigned long r84 = std__vector_int__std__allocator_int______S_max_size(r83);
  __retval80 = r84;
  unsigned long t85 = __retval80;
  return t85;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v86) {
bb87:
  struct std__vector_int__std__allocator_int__* this88;
  unsigned long __retval89;
  long __dif90;
  this88 = v86;
  struct std__vector_int__std__allocator_int__* t91 = this88;
  struct std___Vector_base_int__std__allocator_int__* base92 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base93 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base92->_M_impl) + 0);
  int* t94 = base93->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base95 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base96 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base95->_M_impl) + 0);
  int* t97 = base96->_M_start;
  long diff98 = t94 - t97;
  __dif90 = diff98;
    long t99 = __dif90;
    long c100 = 0;
    _Bool c101 = ((t99 < c100)) ? 1 : 0;
    if (c101) {
      __builtin_unreachable();
    }
  long t102 = __dif90;
  unsigned long cast103 = (unsigned long)t102;
  __retval89 = cast103;
  unsigned long t104 = __retval89;
  return t104;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v105, unsigned long* v106) {
bb107:
  unsigned long* __a108;
  unsigned long* __b109;
  unsigned long* __retval110;
  __a108 = v105;
  __b109 = v106;
    unsigned long* t111 = __a108;
    unsigned long t112 = *t111;
    unsigned long* t113 = __b109;
    unsigned long t114 = *t113;
    _Bool c115 = ((t112 < t114)) ? 1 : 0;
    if (c115) {
      unsigned long* t116 = __b109;
      __retval110 = t116;
      unsigned long* t117 = __retval110;
      return t117;
    }
  unsigned long* t118 = __a108;
  __retval110 = t118;
  unsigned long* t119 = __retval110;
  return t119;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v120, unsigned long v121, char* v122) {
bb123:
  struct std__vector_int__std__allocator_int__* this124;
  unsigned long __n125;
  char* __s126;
  unsigned long __retval127;
  unsigned long __len128;
  unsigned long ref_tmp0129;
  this124 = v120;
  __n125 = v121;
  __s126 = v122;
  struct std__vector_int__std__allocator_int__* t130 = this124;
    unsigned long r131 = std__vector_int__std__allocator_int_____max_size___const(t130);
    unsigned long r132 = std__vector_int__std__allocator_int_____size___const(t130);
    unsigned long b133 = r131 - r132;
    unsigned long t134 = __n125;
    _Bool c135 = ((b133 < t134)) ? 1 : 0;
    if (c135) {
      char* t136 = __s126;
      std____throw_length_error(t136);
    }
  unsigned long r137 = std__vector_int__std__allocator_int_____size___const(t130);
  unsigned long r138 = std__vector_int__std__allocator_int_____size___const(t130);
  ref_tmp0129 = r138;
  unsigned long* r139 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0129, &__n125);
  unsigned long t140 = *r139;
  unsigned long b141 = r137 + t140;
  __len128 = b141;
  unsigned long t142 = __len128;
  unsigned long r143 = std__vector_int__std__allocator_int_____size___const(t130);
  _Bool c144 = ((t142 < r143)) ? 1 : 0;
  _Bool ternary145;
  if (c144) {
    _Bool c146 = 1;
    ternary145 = (_Bool)c146;
  } else {
    unsigned long t147 = __len128;
    unsigned long r148 = std__vector_int__std__allocator_int_____max_size___const(t130);
    _Bool c149 = ((t147 > r148)) ? 1 : 0;
    ternary145 = (_Bool)c149;
  }
  unsigned long ternary150;
  if (ternary145) {
    unsigned long r151 = std__vector_int__std__allocator_int_____max_size___const(t130);
    ternary150 = (unsigned long)r151;
  } else {
    unsigned long t152 = __len128;
    ternary150 = (unsigned long)t152;
  }
  __retval127 = ternary150;
  unsigned long t153 = __retval127;
  return t153;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v154) {
bb155:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this156;
  int** __retval157;
  this156 = v154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t158 = this156;
  __retval157 = &t158->_M_current;
  int** t159 = __retval157;
  return t159;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v160, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v161) {
bb162:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs163;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs164;
  long __retval165;
  __lhs163 = v160;
  __rhs164 = v161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t166 = __lhs163;
  int** r167 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t166);
  int* t168 = *r167;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t169 = __rhs164;
  int** r170 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t169);
  int* t171 = *r170;
  long diff172 = t168 - t171;
  __retval165 = diff172;
  long t173 = __retval165;
  return t173;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v174) {
bb175:
  struct std____new_allocator_int_* this176;
  unsigned long __retval177;
  this176 = v174;
  struct std____new_allocator_int_* t178 = this176;
  unsigned long c179 = 9223372036854775807;
  unsigned long c180 = 4;
  unsigned long b181 = c179 / c180;
  __retval177 = b181;
  unsigned long t182 = __retval177;
  return t182;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v183, unsigned long v184, void* v185) {
bb186:
  struct std____new_allocator_int_* this187;
  unsigned long __n188;
  void* unnamed189;
  int* __retval190;
  this187 = v183;
  __n188 = v184;
  unnamed189 = v185;
  struct std____new_allocator_int_* t191 = this187;
    unsigned long t192 = __n188;
    unsigned long r193 = std____new_allocator_int____M_max_size___const(t191);
    _Bool c194 = ((t192 > r193)) ? 1 : 0;
    if (c194) {
        unsigned long t195 = __n188;
        unsigned long c196 = -1;
        unsigned long c197 = 4;
        unsigned long b198 = c196 / c197;
        _Bool c199 = ((t195 > b198)) ? 1 : 0;
        if (c199) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c200 = 4;
    unsigned long c201 = 16;
    _Bool c202 = ((c200 > c201)) ? 1 : 0;
    if (c202) {
      unsigned long __al203;
      unsigned long c204 = 4;
      __al203 = c204;
      unsigned long t205 = __n188;
      unsigned long c206 = 4;
      unsigned long b207 = t205 * c206;
      unsigned long t208 = __al203;
      void* r209 = operator_new_2(b207, t208);
      int* cast210 = (int*)r209;
      __retval190 = cast210;
      int* t211 = __retval190;
      return t211;
    }
  unsigned long t212 = __n188;
  unsigned long c213 = 4;
  unsigned long b214 = t212 * c213;
  void* r215 = operator_new(b214);
  int* cast216 = (int*)r215;
  __retval190 = cast216;
  int* t217 = __retval190;
  return t217;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v218, unsigned long v219) {
bb220:
  struct std__allocator_int_* this221;
  unsigned long __n222;
  int* __retval223;
  this221 = v218;
  __n222 = v219;
  struct std__allocator_int_* t224 = this221;
    _Bool r225 = std____is_constant_evaluated();
    if (r225) {
        unsigned long t226 = __n222;
        unsigned long c227 = 4;
        unsigned long ovr228;
        _Bool ovf229 = __builtin_mul_overflow(t226, c227, &ovr228);
        __n222 = ovr228;
        if (ovf229) {
          std____throw_bad_array_new_length();
        }
      unsigned long t230 = __n222;
      void* r231 = operator_new(t230);
      int* cast232 = (int*)r231;
      __retval223 = cast232;
      int* t233 = __retval223;
      return t233;
    }
  struct std____new_allocator_int_* base234 = (struct std____new_allocator_int_*)((char *)t224 + 0);
  unsigned long t235 = __n222;
  void* c236 = ((void*)0);
  int* r237 = std____new_allocator_int___allocate(base234, t235, c236);
  __retval223 = r237;
  int* t238 = __retval223;
  return t238;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v239, unsigned long v240) {
bb241:
  struct std__allocator_int_* __a242;
  unsigned long __n243;
  int* __retval244;
  __a242 = v239;
  __n243 = v240;
  struct std__allocator_int_* t245 = __a242;
  unsigned long t246 = __n243;
  int* r247 = std__allocator_int___allocate(t245, t246);
  __retval244 = r247;
  int* t248 = __retval244;
  return t248;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v249, unsigned long v250) {
bb251:
  struct std___Vector_base_int__std__allocator_int__* this252;
  unsigned long __n253;
  int* __retval254;
  this252 = v249;
  __n253 = v250;
  struct std___Vector_base_int__std__allocator_int__* t255 = this252;
  unsigned long t256 = __n253;
  unsigned long c257 = 0;
  _Bool c258 = ((t256 != c257)) ? 1 : 0;
  int* ternary259;
  if (c258) {
    struct std__allocator_int_* base260 = (struct std__allocator_int_*)((char *)&(t255->_M_impl) + 0);
    unsigned long t261 = __n253;
    int* r262 = std__allocator_traits_std__allocator_int_____allocate(base260, t261);
    ternary259 = (int*)r262;
  } else {
    int* c263 = ((void*)0);
    ternary259 = (int*)c263;
  }
  __retval254 = ternary259;
  int* t264 = __retval254;
  return t264;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v265, int* v266, unsigned long v267, struct std___Vector_base_int__std__allocator_int__* v268) {
bb269:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this270;
  int* __s271;
  unsigned long __l272;
  struct std___Vector_base_int__std__allocator_int__* __vect273;
  this270 = v265;
  __s271 = v266;
  __l272 = v267;
  __vect273 = v268;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t274 = this270;
  int* t275 = __s271;
  t274->_M_storage = t275;
  unsigned long t276 = __l272;
  t274->_M_len = t276;
  struct std___Vector_base_int__std__allocator_int__* t277 = __vect273;
  t274->_M_vect = t277;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v278) {
bb279:
  int* __ptr280;
  int* __retval281;
  __ptr280 = v278;
  int* t282 = __ptr280;
  __retval281 = t282;
  int* t283 = __retval281;
  return t283;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v284) {
bb285:
  int** __ptr286;
  int* __retval287;
  __ptr286 = v284;
  int** t288 = __ptr286;
  int* t289 = *t288;
  int* r290 = int__std__to_address_int_(t289);
  __retval287 = r290;
  int* t291 = __retval287;
  return t291;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb292:
  _Bool __retval293;
    _Bool c294 = 0;
    __retval293 = c294;
    _Bool t295 = __retval293;
    return t295;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v296, int** v297) {
bb298:
  struct __gnu_cxx____normal_iterator_int____void_* this299;
  int** __i300;
  this299 = v296;
  __i300 = v297;
  struct __gnu_cxx____normal_iterator_int____void_* t301 = this299;
  int** t302 = __i300;
  int* t303 = *t302;
  t301->_M_current = t303;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v304, int* v305) {
bb306:
  int* __location307;
  int* __args308;
  int* __retval309;
  void* __loc310;
  __location307 = v304;
  __args308 = v305;
  int* t311 = __location307;
  void* cast312 = (void*)t311;
  __loc310 = cast312;
    void* t313 = __loc310;
    int* cast314 = (int*)t313;
    int* t315 = __args308;
    int t316 = *t315;
    *cast314 = t316;
    __retval309 = cast314;
    int* t317 = __retval309;
    return t317;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v318, int* v319, int* v320) {
bb321:
  struct std__allocator_int_* __a322;
  int* __p323;
  int* __args324;
  __a322 = v318;
  __p323 = v319;
  __args324 = v320;
  int* t325 = __p323;
  int* t326 = __args324;
  int* r327 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t325, t326);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v328) {
bb329:
  int* __location330;
  __location330 = v328;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v331, int* v332) {
bb333:
  struct std__allocator_int_* __a334;
  int* __p335;
  __a334 = v331;
  __p335 = v332;
  int* t336 = __p335;
  void_std__destroy_at_int_(t336);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v337, int* v338, struct std__allocator_int_* v339) {
bb340:
  int* __dest341;
  int* __orig342;
  struct std__allocator_int_* __alloc343;
  __dest341 = v337;
  __orig342 = v338;
  __alloc343 = v339;
  struct std__allocator_int_* t344 = __alloc343;
  int* t345 = __dest341;
  int* t346 = __orig342;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t344, t345, t346);
  struct std__allocator_int_* t347 = __alloc343;
  int* t348 = __orig342;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t347, t348);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v349) {
bb350:
  struct __gnu_cxx____normal_iterator_int____void_* this351;
  int* __retval352;
  this351 = v349;
  struct __gnu_cxx____normal_iterator_int____void_* t353 = this351;
  int* t354 = t353->_M_current;
  __retval352 = t354;
  int* t355 = __retval352;
  return t355;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v356) {
bb357:
  struct __gnu_cxx____normal_iterator_int____void_* this358;
  struct __gnu_cxx____normal_iterator_int____void_* __retval359;
  this358 = v356;
  struct __gnu_cxx____normal_iterator_int____void_* t360 = this358;
  int* t361 = t360->_M_current;
  int c362 = 1;
  int* ptr363 = &(t361)[c362];
  t360->_M_current = ptr363;
  __retval359 = t360;
  struct __gnu_cxx____normal_iterator_int____void_* t364 = __retval359;
  return t364;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v365, int* v366, struct __gnu_cxx____normal_iterator_int____void_ v367, struct std__allocator_int_* v368) {
bb369:
  int* __first370;
  int* __last371;
  struct __gnu_cxx____normal_iterator_int____void_ __result372;
  struct std__allocator_int_* __alloc373;
  struct __gnu_cxx____normal_iterator_int____void_ __retval374;
  __first370 = v365;
  __last371 = v366;
  __result372 = v367;
  __alloc373 = v368;
  __retval374 = __result372; // copy
    while (1) {
      int* t376 = __first370;
      int* t377 = __last371;
      _Bool c378 = ((t376 != t377)) ? 1 : 0;
      if (!c378) break;
      int* r379 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval374);
      int* t380 = __first370;
      struct std__allocator_int_* t381 = __alloc373;
      void_std____relocate_object_a_int__int__std__allocator_int___(r379, t380, t381);
    for_step375: ;
      int* t382 = __first370;
      int c383 = 1;
      int* ptr384 = &(t382)[c383];
      __first370 = ptr384;
      struct __gnu_cxx____normal_iterator_int____void_* r385 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval374);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t386 = __retval374;
  return t386;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v387, struct __gnu_cxx____normal_iterator_int____void_* v388) {
bb389:
  struct __gnu_cxx____normal_iterator_int____void_* this390;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed391;
  struct __gnu_cxx____normal_iterator_int____void_* __retval392;
  this390 = v387;
  unnamed391 = v388;
  struct __gnu_cxx____normal_iterator_int____void_* t393 = this390;
  struct __gnu_cxx____normal_iterator_int____void_* t394 = unnamed391;
  int* t395 = t394->_M_current;
  t393->_M_current = t395;
  __retval392 = t393;
  struct __gnu_cxx____normal_iterator_int____void_* t396 = __retval392;
  return t396;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v397) {
bb398:
  struct __gnu_cxx____normal_iterator_int____void_* this399;
  int** __retval400;
  this399 = v397;
  struct __gnu_cxx____normal_iterator_int____void_* t401 = this399;
  __retval400 = &t401->_M_current;
  int** t402 = __retval400;
  return t402;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v403, int* v404, int* v405, struct std__allocator_int_* v406) {
bb407:
  int* __first408;
  int* __last409;
  int* __result410;
  struct std__allocator_int_* __alloc411;
  int* __retval412;
  long __count413;
  __first408 = v403;
  __last409 = v404;
  __result410 = v405;
  __alloc411 = v406;
  int* t414 = __last409;
  int* t415 = __first408;
  long diff416 = t414 - t415;
  __count413 = diff416;
    long t417 = __count413;
    long c418 = 0;
    _Bool c419 = ((t417 > c418)) ? 1 : 0;
    if (c419) {
        _Bool r420 = std__is_constant_evaluated();
        if (r420) {
          struct __gnu_cxx____normal_iterator_int____void_ __out421;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0422;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0423;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out421, &__result410);
          int* t424 = __first408;
          int* t425 = __last409;
          agg_tmp0423 = __out421; // copy
          struct std__allocator_int_* t426 = __alloc411;
          struct __gnu_cxx____normal_iterator_int____void_ t427 = agg_tmp0423;
          struct __gnu_cxx____normal_iterator_int____void_ r428 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t424, t425, t427, t426);
          ref_tmp0422 = r428;
          struct __gnu_cxx____normal_iterator_int____void_* r429 = __gnu_cxx____normal_iterator_int___void___operator_(&__out421, &ref_tmp0422);
          int** r430 = __gnu_cxx____normal_iterator_int___void___base___const(&__out421);
          int* t431 = *r430;
          __retval412 = t431;
          int* t432 = __retval412;
          return t432;
        }
      int* t433 = __result410;
      void* cast434 = (void*)t433;
      int* t435 = __first408;
      void* cast436 = (void*)t435;
      long t437 = __count413;
      unsigned long cast438 = (unsigned long)t437;
      unsigned long c439 = 4;
      unsigned long b440 = cast438 * c439;
      void* r441 = memcpy(cast434, cast436, b440);
    }
  int* t442 = __result410;
  long t443 = __count413;
  int* ptr444 = &(t442)[t443];
  __retval412 = ptr444;
  int* t445 = __retval412;
  return t445;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v446) {
bb447:
  int* __it448;
  int* __retval449;
  __it448 = v446;
  int* t450 = __it448;
  __retval449 = t450;
  int* t451 = __retval449;
  return t451;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v452, int* v453, int* v454, struct std__allocator_int_* v455) {
bb456:
  int* __first457;
  int* __last458;
  int* __result459;
  struct std__allocator_int_* __alloc460;
  int* __retval461;
  __first457 = v452;
  __last458 = v453;
  __result459 = v454;
  __alloc460 = v455;
  int* t462 = __first457;
  int* r463 = int__std____niter_base_int__(t462);
  int* t464 = __last458;
  int* r465 = int__std____niter_base_int__(t464);
  int* t466 = __result459;
  int* r467 = int__std____niter_base_int__(t466);
  struct std__allocator_int_* t468 = __alloc460;
  int* r469 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r463, r465, r467, t468);
  __retval461 = r469;
  int* t470 = __retval461;
  return t470;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v471, int* v472, int* v473, struct std__allocator_int_* v474) {
bb475:
  int* __first476;
  int* __last477;
  int* __result478;
  struct std__allocator_int_* __alloc479;
  int* __retval480;
  __first476 = v471;
  __last477 = v472;
  __result478 = v473;
  __alloc479 = v474;
  int* t481 = __first476;
  int* t482 = __last477;
  int* t483 = __result478;
  struct std__allocator_int_* t484 = __alloc479;
  int* r485 = int__std____relocate_a_int___int___std__allocator_int___(t481, t482, t483, t484);
  __retval480 = r485;
  int* t486 = __retval480;
  return t486;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v487) {
bb488:
  struct std___Vector_base_int__std__allocator_int__* this489;
  struct std__allocator_int_* __retval490;
  this489 = v487;
  struct std___Vector_base_int__std__allocator_int__* t491 = this489;
  struct std__allocator_int_* base492 = (struct std__allocator_int_*)((char *)&(t491->_M_impl) + 0);
  __retval490 = base492;
  struct std__allocator_int_* t493 = __retval490;
  return t493;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v494) {
bb495:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this496;
  this496 = v494;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t497 = this496;
    int* t498 = t497->_M_storage;
    _Bool cast499 = (_Bool)t498;
    if (cast499) {
      struct std___Vector_base_int__std__allocator_int__* t500 = t497->_M_vect;
      int* t501 = t497->_M_storage;
      unsigned long t502 = t497->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t500, t501, t502);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v503, int* v504) {
bb505:
  struct std__vector_int__std__allocator_int__* this506;
  int* __args507;
  unsigned long __len508;
  int* __old_start509;
  int* __old_finish510;
  unsigned long __elems511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0512;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1513;
  int* __new_start514;
  int* __new_finish515;
  this506 = v503;
  __args507 = v504;
  struct std__vector_int__std__allocator_int__* t516 = this506;
  unsigned long c517 = 1;
  char* cast518 = (char*)&(_str_5);
  unsigned long r519 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t516, c517, cast518);
  __len508 = r519;
    unsigned long t520 = __len508;
    unsigned long c521 = 0;
    _Bool c522 = ((t520 <= c521)) ? 1 : 0;
    if (c522) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base523 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base524 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base523->_M_impl) + 0);
  int* t525 = base524->_M_start;
  __old_start509 = t525;
  struct std___Vector_base_int__std__allocator_int__* base526 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base527 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base526->_M_impl) + 0);
  int* t528 = base527->_M_finish;
  __old_finish510 = t528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r529 = std__vector_int__std__allocator_int_____end(t516);
  ref_tmp0512 = r529;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r530 = std__vector_int__std__allocator_int_____begin(t516);
  ref_tmp1513 = r530;
  long r531 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0512, &ref_tmp1513);
  unsigned long cast532 = (unsigned long)r531;
  __elems511 = cast532;
  struct std___Vector_base_int__std__allocator_int__* base533 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
  unsigned long t534 = __len508;
  int* r535 = std___Vector_base_int__std__allocator_int______M_allocate(base533, t534);
  __new_start514 = r535;
  int* t536 = __new_start514;
  __new_finish515 = t536;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard537;
    int* ref_tmp2538;
    int* t539 = __new_start514;
    unsigned long t540 = __len508;
    struct std___Vector_base_int__std__allocator_int__* base541 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard537, t539, t540, base541);
      struct std___Vector_base_int__std__allocator_int__* base542 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
      struct std__allocator_int_* base543 = (struct std__allocator_int_*)((char *)&(base542->_M_impl) + 0);
      int* t544 = __new_start514;
      unsigned long t545 = __elems511;
      int* ptr546 = &(t544)[t545];
      ref_tmp2538 = ptr546;
      int* r547 = auto_std____to_address_int__(&ref_tmp2538);
      int* t548 = __args507;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base543, r547, t548);
        int* t549 = __old_start509;
        int* t550 = __old_finish510;
        int* t551 = __new_start514;
        struct std___Vector_base_int__std__allocator_int__* base552 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
        struct std__allocator_int_* r553 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base552);
        int* r554 = std__vector_int__std__allocator_int______S_relocate(t549, t550, t551, r553);
        __new_finish515 = r554;
        int* t555 = __new_finish515;
        int c556 = 1;
        int* ptr557 = &(t555)[c556];
        __new_finish515 = ptr557;
      int* t558 = __old_start509;
      __guard537._M_storage = t558;
      struct std___Vector_base_int__std__allocator_int__* base559 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base560 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base559->_M_impl) + 0);
      int* t561 = base560->_M_end_of_storage;
      int* t562 = __old_start509;
      long diff563 = t561 - t562;
      unsigned long cast564 = (unsigned long)diff563;
      __guard537._M_len = cast564;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard537);
    }
  int* t565 = __new_start514;
  struct std___Vector_base_int__std__allocator_int__* base566 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base567 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base566->_M_impl) + 0);
  base567->_M_start = t565;
  int* t568 = __new_finish515;
  struct std___Vector_base_int__std__allocator_int__* base569 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base570 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base569->_M_impl) + 0);
  base570->_M_finish = t568;
  int* t571 = __new_start514;
  unsigned long t572 = __len508;
  int* ptr573 = &(t571)[t572];
  struct std___Vector_base_int__std__allocator_int__* base574 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t516 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base575 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base574->_M_impl) + 0);
  base575->_M_end_of_storage = ptr573;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v576, int* v577) {
bb578:
  struct std__vector_int__std__allocator_int__* this579;
  int* __x580;
  this579 = v576;
  __x580 = v577;
  struct std__vector_int__std__allocator_int__* t581 = this579;
    struct std___Vector_base_int__std__allocator_int__* base582 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t581 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base583 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base582->_M_impl) + 0);
    int* t584 = base583->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base585 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t581 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base586 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base585->_M_impl) + 0);
    int* t587 = base586->_M_end_of_storage;
    _Bool c588 = ((t584 != t587)) ? 1 : 0;
    if (c588) {
      struct std___Vector_base_int__std__allocator_int__* base589 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t581 + 0);
      struct std__allocator_int_* base590 = (struct std__allocator_int_*)((char *)&(base589->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base591 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t581 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base592 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base591->_M_impl) + 0);
      int* t593 = base592->_M_finish;
      int* t594 = __x580;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base590, t593, t594);
      struct std___Vector_base_int__std__allocator_int__* base595 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t581 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base596 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base595->_M_impl) + 0);
      int* t597 = base596->_M_finish;
      int c598 = 1;
      int* ptr599 = &(t597)[c598];
      base596->_M_finish = ptr599;
    } else {
      int* t600 = __x580;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t581, t600);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v601) {
bb602:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this603;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval604;
  this603 = v601;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t605 = this603;
  int* t606 = t605->_M_current;
  int c607 = -1;
  int* ptr608 = &(t606)[c607];
  t605->_M_current = ptr608;
  __retval604 = t605;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t609 = __retval604;
  return t609;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v610, int* v611) {
bb612:
  int* __a613;
  int* __b614;
  int __tmp615;
  __a613 = v610;
  __b614 = v611;
  int* t616 = __a613;
  int t617 = *t616;
  __tmp615 = t617;
  int* t618 = __b614;
  int t619 = *t618;
  int* t620 = __a613;
  *t620 = t619;
  int t621 = __tmp615;
  int* t622 = __b614;
  *t622 = t621;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v623, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v624) {
bb625:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b627;
  __a626 = v623;
  __b627 = v624;
  int* r628 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a626);
  int* r629 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b627);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r628, r629);
  return;
}

// function: _ZSt11__partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEET_S9_S9_T0_St26bidirectional_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v630, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v631, void* v632, struct std__bidirectional_iterator_tag v633) {
bb634:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first635;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last636;
  void* __pred637;
  struct std__bidirectional_iterator_tag unnamed638;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval639;
  __first635 = v630;
  __last636 = v631;
  __pred637 = v632;
  unnamed638 = v633;
    while (1) {
      _Bool c640 = 1;
      if (!c640) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0641;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1642;
          while (1) {
            _Bool c643 = 1;
            if (!c643) break;
              _Bool r644 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first635, &__last636);
              if (r644) {
                __retval639 = __first635; // copy
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t645 = __retval639;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val646 = t645;
                return ret_val646;
              } else {
                  void* t647 = __pred637;
                  int* r648 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first635);
                  int t649 = *r648;
                  _Bool r650 = ((_Bool (*)(int))t647)(t649);
                  if (r650) {
                    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r651 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first635);
                  } else {
                    break;
                  }
              }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r652 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last636);
          while (1) {
            _Bool c653 = 1;
            if (!c653) break;
              _Bool r654 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first635, &__last636);
              if (r654) {
                __retval639 = __first635; // copy
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t655 = __retval639;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val656 = t655;
                return ret_val656;
              } else {
                  void* t657 = __pred637;
                  int* r658 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last636);
                  int t659 = *r658;
                  _Bool r660 = ((_Bool (*)(int))t657)(t659);
                  _Bool u661 = !r660;
                  if (u661) {
                    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r662 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last636);
                  } else {
                    break;
                  }
              }
          }
        agg_tmp0641 = __first635; // copy
        agg_tmp1642 = __last636; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t663 = agg_tmp0641;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t664 = agg_tmp1642;
        void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t663, t664);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r665 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first635);
    }
  abort();
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v666) {
bb667:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed668;
  struct std__random_access_iterator_tag __retval669;
  unnamed668 = v666;
  struct std__random_access_iterator_tag t670 = __retval669;
  return t670;
}

// function: _ZSt9partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v671, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v672, void* v673) {
bb674:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first675;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last676;
  void* __pred677;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval678;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0679;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1680;
  struct std__bidirectional_iterator_tag agg_tmp2681;
  struct std__random_access_iterator_tag ref_tmp0682;
  __first675 = v671;
  __last676 = v672;
  __pred677 = v673;
  agg_tmp0679 = __first675; // copy
  agg_tmp1680 = __last676; // copy
  void* t683 = __pred677;
  struct std__random_access_iterator_tag r684 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first675);
  ref_tmp0682 = r684;
  struct std__bidirectional_iterator_tag* base685 = (struct std__bidirectional_iterator_tag*)((char *)&(ref_tmp0682) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t686 = agg_tmp0679;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t687 = agg_tmp1680;
  struct std__bidirectional_iterator_tag t688 = agg_tmp2681;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r689 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t686, t687, t683, t688);
  __retval678 = r689;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t690 = __retval678;
  return t690;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v691, int** v692) {
bb693:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this694;
  int** __i695;
  this694 = v691;
  __i695 = v692;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t696 = this694;
  int** t697 = __i695;
  int* t698 = *t697;
  t696->_M_current = t698;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v699) {
bb700:
  struct std__vector_int__std__allocator_int__* this701;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval702;
  this701 = v699;
  struct std__vector_int__std__allocator_int__* t703 = this701;
  struct std___Vector_base_int__std__allocator_int__* base704 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base705 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base704->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval702, &base705->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t706 = __retval702;
  return t706;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v707) {
bb708:
  struct std__vector_int__std__allocator_int__* this709;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval710;
  this709 = v707;
  struct std__vector_int__std__allocator_int__* t711 = this709;
  struct std___Vector_base_int__std__allocator_int__* base712 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t711 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base713 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base712->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval710, &base713->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t714 = __retval710;
  return t714;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v715, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v716) {
bb717:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this718;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed719;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval720;
  this718 = v715;
  unnamed719 = v716;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t721 = this718;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t722 = unnamed719;
  int* t723 = t722->_M_current;
  t721->_M_current = t723;
  __retval720 = t721;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t724 = __retval720;
  return t724;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v725) {
bb726:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this727;
  int* __retval728;
  this727 = v725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t729 = this727;
  int* t730 = t729->_M_current;
  __retval728 = t730;
  int* t731 = __retval728;
  return t731;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v732, int v733) {
bb734:
  int __a735;
  int __b736;
  int __retval737;
  __a735 = v732;
  __b736 = v733;
  int t738 = __a735;
  int t739 = __b736;
  int b740 = t738 | t739;
  __retval737 = b740;
  int t741 = __retval737;
  return t741;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v742) {
bb743:
  struct std__basic_ios_char__std__char_traits_char__* this744;
  int __retval745;
  this744 = v742;
  struct std__basic_ios_char__std__char_traits_char__* t746 = this744;
  struct std__ios_base* base747 = (struct std__ios_base*)((char *)t746 + 0);
  int t748 = base747->_M_streambuf_state;
  __retval745 = t748;
  int t749 = __retval745;
  return t749;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v750, int v751) {
bb752:
  struct std__basic_ios_char__std__char_traits_char__* this753;
  int __state754;
  this753 = v750;
  __state754 = v751;
  struct std__basic_ios_char__std__char_traits_char__* t755 = this753;
  int r756 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t755);
  int t757 = __state754;
  int r758 = std__operator_(r756, t757);
  std__basic_ios_char__std__char_traits_char_____clear(t755, r758);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v759, char* v760) {
bb761:
  char* __c1762;
  char* __c2763;
  _Bool __retval764;
  __c1762 = v759;
  __c2763 = v760;
  char* t765 = __c1762;
  char t766 = *t765;
  int cast767 = (int)t766;
  char* t768 = __c2763;
  char t769 = *t768;
  int cast770 = (int)t769;
  _Bool c771 = ((cast767 == cast770)) ? 1 : 0;
  __retval764 = c771;
  _Bool t772 = __retval764;
  return t772;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v773) {
bb774:
  char* __p775;
  unsigned long __retval776;
  unsigned long __i777;
  __p775 = v773;
  unsigned long c778 = 0;
  __i777 = c778;
    char ref_tmp0779;
    while (1) {
      unsigned long t780 = __i777;
      char* t781 = __p775;
      char* ptr782 = &(t781)[t780];
      char c783 = 0;
      ref_tmp0779 = c783;
      _Bool r784 = __gnu_cxx__char_traits_char___eq(ptr782, &ref_tmp0779);
      _Bool u785 = !r784;
      if (!u785) break;
      unsigned long t786 = __i777;
      unsigned long u787 = t786 + 1;
      __i777 = u787;
    }
  unsigned long t788 = __i777;
  __retval776 = t788;
  unsigned long t789 = __retval776;
  return t789;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v790) {
bb791:
  char* __s792;
  unsigned long __retval793;
  __s792 = v790;
    _Bool r794 = std____is_constant_evaluated();
    if (r794) {
      char* t795 = __s792;
      unsigned long r796 = __gnu_cxx__char_traits_char___length(t795);
      __retval793 = r796;
      unsigned long t797 = __retval793;
      return t797;
    }
  char* t798 = __s792;
  unsigned long r799 = strlen(t798);
  __retval793 = r799;
  unsigned long t800 = __retval793;
  return t800;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v801, char* v802) {
bb803:
  struct std__basic_ostream_char__std__char_traits_char__* __out804;
  char* __s805;
  struct std__basic_ostream_char__std__char_traits_char__* __retval806;
  __out804 = v801;
  __s805 = v802;
    char* t807 = __s805;
    _Bool cast808 = (_Bool)t807;
    _Bool u809 = !cast808;
    if (u809) {
      struct std__basic_ostream_char__std__char_traits_char__* t810 = __out804;
      void** v811 = (void**)t810;
      void* v812 = *((void**)v811);
      unsigned char* cast813 = (unsigned char*)v812;
      long c814 = -24;
      unsigned char* ptr815 = &(cast813)[c814];
      long* cast816 = (long*)ptr815;
      long t817 = *cast816;
      unsigned char* cast818 = (unsigned char*)t810;
      unsigned char* ptr819 = &(cast818)[t817];
      struct std__basic_ostream_char__std__char_traits_char__* cast820 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr819;
      struct std__basic_ios_char__std__char_traits_char__* cast821 = (struct std__basic_ios_char__std__char_traits_char__*)cast820;
      int t822 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast821, t822);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t823 = __out804;
      char* t824 = __s805;
      char* t825 = __s805;
      unsigned long r826 = std__char_traits_char___length(t825);
      long cast827 = (long)r826;
      struct std__basic_ostream_char__std__char_traits_char__* r828 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t823, t824, cast827);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t829 = __out804;
  __retval806 = t829;
  struct std__basic_ostream_char__std__char_traits_char__* t830 = __retval806;
  return t830;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v831, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v832) {
bb833:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs834;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs835;
  _Bool __retval836;
  __lhs834 = v831;
  __rhs835 = v832;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t837 = __lhs834;
  int** r838 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t837);
  int* t839 = *r838;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t840 = __rhs835;
  int** r841 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t840);
  int* t842 = *r841;
  _Bool c843 = ((t839 == t842)) ? 1 : 0;
  __retval836 = c843;
  _Bool t844 = __retval836;
  return t844;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v845) {
bb846:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this847;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval848;
  this847 = v845;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t849 = this847;
  int* t850 = t849->_M_current;
  int c851 = 1;
  int* ptr852 = &(t850)[c851];
  t849->_M_current = ptr852;
  __retval848 = t849;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t853 = __retval848;
  return t853;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v854, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v855) {
bb856:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this857;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed858;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval859;
  this857 = v854;
  unnamed858 = v855;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t860 = this857;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t861 = unnamed858;
  int* t862 = t861->_M_current;
  t860->_M_current = t862;
  __retval859 = t860;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t863 = __retval859;
  return t863;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v864, void* v865) {
bb866:
  struct std__basic_ostream_char__std__char_traits_char__* this867;
  void* __pf868;
  struct std__basic_ostream_char__std__char_traits_char__* __retval869;
  this867 = v864;
  __pf868 = v865;
  struct std__basic_ostream_char__std__char_traits_char__* t870 = this867;
  void* t871 = __pf868;
  struct std__basic_ostream_char__std__char_traits_char__* r872 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t871)(t870);
  __retval869 = r872;
  struct std__basic_ostream_char__std__char_traits_char__* t873 = __retval869;
  return t873;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v874) {
bb875:
  struct std__basic_ostream_char__std__char_traits_char__* __os876;
  struct std__basic_ostream_char__std__char_traits_char__* __retval877;
  __os876 = v874;
  struct std__basic_ostream_char__std__char_traits_char__* t878 = __os876;
  struct std__basic_ostream_char__std__char_traits_char__* r879 = std__ostream__flush(t878);
  __retval877 = r879;
  struct std__basic_ostream_char__std__char_traits_char__* t880 = __retval877;
  return t880;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v881) {
bb882:
  struct std__ctype_char_* __f883;
  struct std__ctype_char_* __retval884;
  __f883 = v881;
    struct std__ctype_char_* t885 = __f883;
    _Bool cast886 = (_Bool)t885;
    _Bool u887 = !cast886;
    if (u887) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t888 = __f883;
  __retval884 = t888;
  struct std__ctype_char_* t889 = __retval884;
  return t889;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v890, char v891) {
bb892:
  struct std__ctype_char_* this893;
  char __c894;
  char __retval895;
  this893 = v890;
  __c894 = v891;
  struct std__ctype_char_* t896 = this893;
    char t897 = t896->_M_widen_ok;
    _Bool cast898 = (_Bool)t897;
    if (cast898) {
      char t899 = __c894;
      unsigned char cast900 = (unsigned char)t899;
      unsigned long cast901 = (unsigned long)cast900;
      char t902 = t896->_M_widen[cast901];
      __retval895 = t902;
      char t903 = __retval895;
      return t903;
    }
  std__ctype_char____M_widen_init___const(t896);
  char t904 = __c894;
  void** v905 = (void**)t896;
  void* v906 = *((void**)v905);
  char vcall909 = (char)__VERIFIER_virtual_call_char_char(t896, 6, t904);
  __retval895 = vcall909;
  char t910 = __retval895;
  return t910;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v911, char v912) {
bb913:
  struct std__basic_ios_char__std__char_traits_char__* this914;
  char __c915;
  char __retval916;
  this914 = v911;
  __c915 = v912;
  struct std__basic_ios_char__std__char_traits_char__* t917 = this914;
  struct std__ctype_char_* t918 = t917->_M_ctype;
  struct std__ctype_char_* r919 = std__ctype_char__const__std____check_facet_std__ctype_char___(t918);
  char t920 = __c915;
  char r921 = std__ctype_char___widen_char__const(r919, t920);
  __retval916 = r921;
  char t922 = __retval916;
  return t922;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v923) {
bb924:
  struct std__basic_ostream_char__std__char_traits_char__* __os925;
  struct std__basic_ostream_char__std__char_traits_char__* __retval926;
  __os925 = v923;
  struct std__basic_ostream_char__std__char_traits_char__* t927 = __os925;
  struct std__basic_ostream_char__std__char_traits_char__* t928 = __os925;
  void** v929 = (void**)t928;
  void* v930 = *((void**)v929);
  unsigned char* cast931 = (unsigned char*)v930;
  long c932 = -24;
  unsigned char* ptr933 = &(cast931)[c932];
  long* cast934 = (long*)ptr933;
  long t935 = *cast934;
  unsigned char* cast936 = (unsigned char*)t928;
  unsigned char* ptr937 = &(cast936)[t935];
  struct std__basic_ostream_char__std__char_traits_char__* cast938 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr937;
  struct std__basic_ios_char__std__char_traits_char__* cast939 = (struct std__basic_ios_char__std__char_traits_char__*)cast938;
  char c940 = 10;
  char r941 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast939, c940);
  struct std__basic_ostream_char__std__char_traits_char__* r942 = std__ostream__put(t927, r941);
  struct std__basic_ostream_char__std__char_traits_char__* r943 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r942);
  __retval926 = r943;
  struct std__basic_ostream_char__std__char_traits_char__* t944 = __retval926;
  return t944;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v945) {
bb946:
  struct std__vector_int__std__allocator_int__* this947;
  this947 = v945;
  struct std__vector_int__std__allocator_int__* t948 = this947;
    struct std___Vector_base_int__std__allocator_int__* base949 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t948 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base950 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base949->_M_impl) + 0);
    int* t951 = base950->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base952 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t948 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base953 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base952->_M_impl) + 0);
    int* t954 = base953->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base955 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t948 + 0);
    struct std__allocator_int_* r956 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base955);
    void_std___Destroy_int___int_(t951, t954, r956);
  {
    struct std___Vector_base_int__std__allocator_int__* base957 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t948 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base957);
  }
  return;
}

// function: main
int main() {
bb958:
  int __retval959;
  struct std__vector_int__std__allocator_int__ myvector960;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it961;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ bound962;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0963;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0964;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1965;
  int c966 = 0;
  __retval959 = c966;
  std__vector_int__std__allocator_int_____vector(&myvector960);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it961);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&bound962);
      int i967;
      int c968 = 1;
      i967 = c968;
      while (1) {
        int t970 = i967;
        int c971 = 10;
        _Bool c972 = ((t970 < c971)) ? 1 : 0;
        if (!c972) break;
        std__vector_int__std__allocator_int_____push_back(&myvector960, &i967);
      for_step969: ;
        int t973 = i967;
        int u974 = t973 + 1;
        i967 = u974;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r975 = std__vector_int__std__allocator_int_____begin(&myvector960);
    agg_tmp0964 = r975;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r976 = std__vector_int__std__allocator_int_____end(&myvector960);
    agg_tmp1965 = r976;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t977 = agg_tmp0964;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t978 = agg_tmp1965;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r979 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t977, t978, &IsOdd);
    ref_tmp0963 = r979;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r980 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&bound962, &ref_tmp0963);
    int* r981 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&bound962);
    int t982 = *r981;
    int c983 = 6;
    _Bool c984 = ((t982 != c983)) ? 1 : 0;
    if (c984) {
    } else {
      char* cast985 = (char*)&(_str);
      char* c986 = _str_1;
      unsigned int c987 = 25;
      char* cast988 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast985, c986, c987, cast988);
    }
    char* cast989 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r990 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast989);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1991;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r992 = std__vector_int__std__allocator_int_____begin(&myvector960);
      ref_tmp1991 = r992;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r993 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it961, &ref_tmp1991);
      while (1) {
        _Bool r995 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it961, &bound962);
        _Bool u996 = !r995;
        if (!u996) break;
        char* cast997 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r998 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast997);
        int* r999 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it961);
        int t1000 = *r999;
        struct std__basic_ostream_char__std__char_traits_char__* r1001 = std__ostream__operator__(r998, t1000);
      for_step994: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1002 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it961);
      }
    char* cast1003 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1004 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1003);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21005;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1006 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&it961, &bound962);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1008 = std__vector_int__std__allocator_int_____end(&myvector960);
        ref_tmp21005 = r1008;
        _Bool r1009 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it961, &ref_tmp21005);
        _Bool u1010 = !r1009;
        if (!u1010) break;
        char* cast1011 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1012 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1011);
        int* r1013 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it961);
        int t1014 = *r1013;
        struct std__basic_ostream_char__std__char_traits_char__* r1015 = std__ostream__operator__(r1012, t1014);
      for_step1007: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1016 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it961);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1017 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1018 = 0;
    __retval959 = c1018;
    int t1019 = __retval959;
    int ret_val1020 = t1019;
    {
      std__vector_int__std__allocator_int______vector(&myvector960);
    }
    return ret_val1020;
  int t1021 = __retval959;
  return t1021;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1022) {
bb1023:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1024;
  this1024 = v1022;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1025 = this1024;
  struct std__allocator_int_* base1026 = (struct std__allocator_int_*)((char *)t1025 + 0);
  std__allocator_int___allocator(base1026);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1027 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1025 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1027);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1028) {
bb1029:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1030;
  this1030 = v1028;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1031 = this1030;
  {
    struct std__allocator_int_* base1032 = (struct std__allocator_int_*)((char *)t1031 + 0);
    std__allocator_int____allocator(base1032);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1033) {
bb1034:
  struct std___Vector_base_int__std__allocator_int__* this1035;
  this1035 = v1033;
  struct std___Vector_base_int__std__allocator_int__* t1036 = this1035;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1036->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1037:
  _Bool __retval1038;
    _Bool c1039 = 0;
    __retval1038 = c1039;
    _Bool t1040 = __retval1038;
    return t1040;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1041, int* v1042, unsigned long v1043) {
bb1044:
  struct std____new_allocator_int_* this1045;
  int* __p1046;
  unsigned long __n1047;
  this1045 = v1041;
  __p1046 = v1042;
  __n1047 = v1043;
  struct std____new_allocator_int_* t1048 = this1045;
    unsigned long c1049 = 4;
    unsigned long c1050 = 16;
    _Bool c1051 = ((c1049 > c1050)) ? 1 : 0;
    if (c1051) {
      int* t1052 = __p1046;
      void* cast1053 = (void*)t1052;
      unsigned long t1054 = __n1047;
      unsigned long c1055 = 4;
      unsigned long b1056 = t1054 * c1055;
      unsigned long c1057 = 4;
      operator_delete_3(cast1053, b1056, c1057);
      return;
    }
  int* t1058 = __p1046;
  void* cast1059 = (void*)t1058;
  unsigned long t1060 = __n1047;
  unsigned long c1061 = 4;
  unsigned long b1062 = t1060 * c1061;
  operator_delete_2(cast1059, b1062);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1063, int* v1064, unsigned long v1065) {
bb1066:
  struct std__allocator_int_* this1067;
  int* __p1068;
  unsigned long __n1069;
  this1067 = v1063;
  __p1068 = v1064;
  __n1069 = v1065;
  struct std__allocator_int_* t1070 = this1067;
    _Bool r1071 = std____is_constant_evaluated();
    if (r1071) {
      int* t1072 = __p1068;
      void* cast1073 = (void*)t1072;
      operator_delete(cast1073);
      return;
    }
  struct std____new_allocator_int_* base1074 = (struct std____new_allocator_int_*)((char *)t1070 + 0);
  int* t1075 = __p1068;
  unsigned long t1076 = __n1069;
  std____new_allocator_int___deallocate(base1074, t1075, t1076);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1077, int* v1078, unsigned long v1079) {
bb1080:
  struct std__allocator_int_* __a1081;
  int* __p1082;
  unsigned long __n1083;
  __a1081 = v1077;
  __p1082 = v1078;
  __n1083 = v1079;
  struct std__allocator_int_* t1084 = __a1081;
  int* t1085 = __p1082;
  unsigned long t1086 = __n1083;
  std__allocator_int___deallocate(t1084, t1085, t1086);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1087, int* v1088, unsigned long v1089) {
bb1090:
  struct std___Vector_base_int__std__allocator_int__* this1091;
  int* __p1092;
  unsigned long __n1093;
  this1091 = v1087;
  __p1092 = v1088;
  __n1093 = v1089;
  struct std___Vector_base_int__std__allocator_int__* t1094 = this1091;
    int* t1095 = __p1092;
    _Bool cast1096 = (_Bool)t1095;
    if (cast1096) {
      struct std__allocator_int_* base1097 = (struct std__allocator_int_*)((char *)&(t1094->_M_impl) + 0);
      int* t1098 = __p1092;
      unsigned long t1099 = __n1093;
      std__allocator_traits_std__allocator_int_____deallocate(base1097, t1098, t1099);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1100) {
bb1101:
  struct std___Vector_base_int__std__allocator_int__* this1102;
  this1102 = v1100;
  struct std___Vector_base_int__std__allocator_int__* t1103 = this1102;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1104 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1103->_M_impl) + 0);
    int* t1105 = base1104->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1106 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1103->_M_impl) + 0);
    int* t1107 = base1106->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1108 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1103->_M_impl) + 0);
    int* t1109 = base1108->_M_start;
    long diff1110 = t1107 - t1109;
    unsigned long cast1111 = (unsigned long)diff1110;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1103, t1105, cast1111);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1103->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1112) {
bb1113:
  struct std____new_allocator_int_* this1114;
  this1114 = v1112;
  struct std____new_allocator_int_* t1115 = this1114;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1116) {
bb1117:
  struct std__allocator_int_* this1118;
  this1118 = v1116;
  struct std__allocator_int_* t1119 = this1118;
  struct std____new_allocator_int_* base1120 = (struct std____new_allocator_int_*)((char *)t1119 + 0);
  std____new_allocator_int_____new_allocator(base1120);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1121) {
bb1122:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1123;
  this1123 = v1121;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1124 = this1123;
  int* c1125 = ((void*)0);
  t1124->_M_start = c1125;
  int* c1126 = ((void*)0);
  t1124->_M_finish = c1126;
  int* c1127 = ((void*)0);
  t1124->_M_end_of_storage = c1127;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1128) {
bb1129:
  struct std__allocator_int_* this1130;
  this1130 = v1128;
  struct std__allocator_int_* t1131 = this1130;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1132, int* v1133) {
bb1134:
  int* __first1135;
  int* __last1136;
  __first1135 = v1132;
  __last1136 = v1133;
      _Bool r1137 = std____is_constant_evaluated();
      if (r1137) {
          while (1) {
            int* t1139 = __first1135;
            int* t1140 = __last1136;
            _Bool c1141 = ((t1139 != t1140)) ? 1 : 0;
            if (!c1141) break;
            int* t1142 = __first1135;
            void_std__destroy_at_int_(t1142);
          for_step1138: ;
            int* t1143 = __first1135;
            int c1144 = 1;
            int* ptr1145 = &(t1143)[c1144];
            __first1135 = ptr1145;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1146, int* v1147, struct std__allocator_int_* v1148) {
bb1149:
  int* __first1150;
  int* __last1151;
  struct std__allocator_int_* unnamed1152;
  __first1150 = v1146;
  __last1151 = v1147;
  unnamed1152 = v1148;
  int* t1153 = __first1150;
  int* t1154 = __last1151;
  void_std___Destroy_int__(t1153, t1154);
  return;
}

