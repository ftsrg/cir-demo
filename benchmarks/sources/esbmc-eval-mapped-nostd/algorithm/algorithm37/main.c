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
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
extern int rand();
long myrandom(long p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long______long_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void** p2);
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

void* p_myrandom __attribute__((aligned(8))) = (void*)(&_Z8myrandoml);
// function: _Z8myrandoml
long myrandom(long v0) {
bb1:
  long i2;
  long __retval3;
  i2 = v0;
  int r4 = rand();
  long cast5 = (long)r4;
  long t6 = i2;
  long b7 = cast5 % t6;
  __retval3 = b7;
  long t8 = __retval3;
  return t8;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v9) {
bb10:
  struct std__vector_int__std__allocator_int__* this11;
  this11 = v9;
  struct std__vector_int__std__allocator_int__* t12 = this11;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base13);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v14) {
bb15:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this16;
  this16 = v14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t17 = this16;
  int* c18 = ((void*)0);
  t17->_M_current = c18;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v19, int* v20) {
bb21:
  int* __location22;
  int* __args23;
  int* __retval24;
  void* __loc25;
  __location22 = v19;
  __args23 = v20;
  int* t26 = __location22;
  void* cast27 = (void*)t26;
  __loc25 = cast27;
    void* t28 = __loc25;
    int* cast29 = (int*)t28;
    int* t30 = __args23;
    int t31 = *t30;
    *cast29 = t31;
    __retval24 = cast29;
    int* t32 = __retval24;
    return t32;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v33, int* v34, int* v35) {
bb36:
  struct std__allocator_int_* __a37;
  int* __p38;
  int* __args39;
  __a37 = v33;
  __p38 = v34;
  __args39 = v35;
  int* t40 = __p38;
  int* t41 = __args39;
  int* r42 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t40, t41);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v43, unsigned long* v44) {
bb45:
  unsigned long* __a46;
  unsigned long* __b47;
  unsigned long* __retval48;
  __a46 = v43;
  __b47 = v44;
    unsigned long* t49 = __b47;
    unsigned long t50 = *t49;
    unsigned long* t51 = __a46;
    unsigned long t52 = *t51;
    _Bool c53 = ((t50 < t52)) ? 1 : 0;
    if (c53) {
      unsigned long* t54 = __b47;
      __retval48 = t54;
      unsigned long* t55 = __retval48;
      return t55;
    }
  unsigned long* t56 = __a46;
  __retval48 = t56;
  unsigned long* t57 = __retval48;
  return t57;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v58) {
bb59:
  struct std__allocator_int_* __a60;
  unsigned long __retval61;
  unsigned long __diffmax62;
  unsigned long __allocmax63;
  __a60 = v58;
  unsigned long c64 = 2305843009213693951;
  __diffmax62 = c64;
  unsigned long c65 = 4611686018427387903;
  __allocmax63 = c65;
  unsigned long* r66 = unsigned_long_const__std__min_unsigned_long_(&__diffmax62, &__allocmax63);
  unsigned long t67 = *r66;
  __retval61 = t67;
  unsigned long t68 = __retval61;
  return t68;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v69) {
bb70:
  struct std___Vector_base_int__std__allocator_int__* this71;
  struct std__allocator_int_* __retval72;
  this71 = v69;
  struct std___Vector_base_int__std__allocator_int__* t73 = this71;
  struct std__allocator_int_* base74 = (struct std__allocator_int_*)((char *)&(t73->_M_impl) + 0);
  __retval72 = base74;
  struct std__allocator_int_* t75 = __retval72;
  return t75;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v76) {
bb77:
  struct std__vector_int__std__allocator_int__* this78;
  unsigned long __retval79;
  this78 = v76;
  struct std__vector_int__std__allocator_int__* t80 = this78;
  struct std___Vector_base_int__std__allocator_int__* base81 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t80 + 0);
  struct std__allocator_int_* r82 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base81);
  unsigned long r83 = std__vector_int__std__allocator_int______S_max_size(r82);
  __retval79 = r83;
  unsigned long t84 = __retval79;
  return t84;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v85) {
bb86:
  struct std__vector_int__std__allocator_int__* this87;
  unsigned long __retval88;
  long __dif89;
  this87 = v85;
  struct std__vector_int__std__allocator_int__* t90 = this87;
  struct std___Vector_base_int__std__allocator_int__* base91 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base92 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base91->_M_impl) + 0);
  int* t93 = base92->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base94 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base95 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base94->_M_impl) + 0);
  int* t96 = base95->_M_start;
  long diff97 = t93 - t96;
  __dif89 = diff97;
    long t98 = __dif89;
    long c99 = 0;
    _Bool c100 = ((t98 < c99)) ? 1 : 0;
    if (c100) {
      __builtin_unreachable();
    }
  long t101 = __dif89;
  unsigned long cast102 = (unsigned long)t101;
  __retval88 = cast102;
  unsigned long t103 = __retval88;
  return t103;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v104, unsigned long* v105) {
bb106:
  unsigned long* __a107;
  unsigned long* __b108;
  unsigned long* __retval109;
  __a107 = v104;
  __b108 = v105;
    unsigned long* t110 = __a107;
    unsigned long t111 = *t110;
    unsigned long* t112 = __b108;
    unsigned long t113 = *t112;
    _Bool c114 = ((t111 < t113)) ? 1 : 0;
    if (c114) {
      unsigned long* t115 = __b108;
      __retval109 = t115;
      unsigned long* t116 = __retval109;
      return t116;
    }
  unsigned long* t117 = __a107;
  __retval109 = t117;
  unsigned long* t118 = __retval109;
  return t118;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v119, unsigned long v120, char* v121) {
bb122:
  struct std__vector_int__std__allocator_int__* this123;
  unsigned long __n124;
  char* __s125;
  unsigned long __retval126;
  unsigned long __len127;
  unsigned long ref_tmp0128;
  this123 = v119;
  __n124 = v120;
  __s125 = v121;
  struct std__vector_int__std__allocator_int__* t129 = this123;
    unsigned long r130 = std__vector_int__std__allocator_int_____max_size___const(t129);
    unsigned long r131 = std__vector_int__std__allocator_int_____size___const(t129);
    unsigned long b132 = r130 - r131;
    unsigned long t133 = __n124;
    _Bool c134 = ((b132 < t133)) ? 1 : 0;
    if (c134) {
      char* t135 = __s125;
      std____throw_length_error(t135);
    }
  unsigned long r136 = std__vector_int__std__allocator_int_____size___const(t129);
  unsigned long r137 = std__vector_int__std__allocator_int_____size___const(t129);
  ref_tmp0128 = r137;
  unsigned long* r138 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0128, &__n124);
  unsigned long t139 = *r138;
  unsigned long b140 = r136 + t139;
  __len127 = b140;
  unsigned long t141 = __len127;
  unsigned long r142 = std__vector_int__std__allocator_int_____size___const(t129);
  _Bool c143 = ((t141 < r142)) ? 1 : 0;
  _Bool ternary144;
  if (c143) {
    _Bool c145 = 1;
    ternary144 = (_Bool)c145;
  } else {
    unsigned long t146 = __len127;
    unsigned long r147 = std__vector_int__std__allocator_int_____max_size___const(t129);
    _Bool c148 = ((t146 > r147)) ? 1 : 0;
    ternary144 = (_Bool)c148;
  }
  unsigned long ternary149;
  if (ternary144) {
    unsigned long r150 = std__vector_int__std__allocator_int_____max_size___const(t129);
    ternary149 = (unsigned long)r150;
  } else {
    unsigned long t151 = __len127;
    ternary149 = (unsigned long)t151;
  }
  __retval126 = ternary149;
  unsigned long t152 = __retval126;
  return t152;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v153) {
bb154:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this155;
  int** __retval156;
  this155 = v153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t157 = this155;
  __retval156 = &t157->_M_current;
  int** t158 = __retval156;
  return t158;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v159, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v160) {
bb161:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs162;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs163;
  long __retval164;
  __lhs162 = v159;
  __rhs163 = v160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t165 = __lhs162;
  int** r166 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t165);
  int* t167 = *r166;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t168 = __rhs163;
  int** r169 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t168);
  int* t170 = *r169;
  long diff171 = t167 - t170;
  __retval164 = diff171;
  long t172 = __retval164;
  return t172;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v173) {
bb174:
  struct std____new_allocator_int_* this175;
  unsigned long __retval176;
  this175 = v173;
  struct std____new_allocator_int_* t177 = this175;
  unsigned long c178 = 9223372036854775807;
  unsigned long c179 = 4;
  unsigned long b180 = c178 / c179;
  __retval176 = b180;
  unsigned long t181 = __retval176;
  return t181;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v182, unsigned long v183, void* v184) {
bb185:
  struct std____new_allocator_int_* this186;
  unsigned long __n187;
  void* unnamed188;
  int* __retval189;
  this186 = v182;
  __n187 = v183;
  unnamed188 = v184;
  struct std____new_allocator_int_* t190 = this186;
    unsigned long t191 = __n187;
    unsigned long r192 = std____new_allocator_int____M_max_size___const(t190);
    _Bool c193 = ((t191 > r192)) ? 1 : 0;
    if (c193) {
        unsigned long t194 = __n187;
        unsigned long c195 = -1;
        unsigned long c196 = 4;
        unsigned long b197 = c195 / c196;
        _Bool c198 = ((t194 > b197)) ? 1 : 0;
        if (c198) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c199 = 4;
    unsigned long c200 = 16;
    _Bool c201 = ((c199 > c200)) ? 1 : 0;
    if (c201) {
      unsigned long __al202;
      unsigned long c203 = 4;
      __al202 = c203;
      unsigned long t204 = __n187;
      unsigned long c205 = 4;
      unsigned long b206 = t204 * c205;
      unsigned long t207 = __al202;
      void* r208 = operator_new_2(b206, t207);
      int* cast209 = (int*)r208;
      __retval189 = cast209;
      int* t210 = __retval189;
      return t210;
    }
  unsigned long t211 = __n187;
  unsigned long c212 = 4;
  unsigned long b213 = t211 * c212;
  void* r214 = operator_new(b213);
  int* cast215 = (int*)r214;
  __retval189 = cast215;
  int* t216 = __retval189;
  return t216;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v217, unsigned long v218) {
bb219:
  struct std__allocator_int_* this220;
  unsigned long __n221;
  int* __retval222;
  this220 = v217;
  __n221 = v218;
  struct std__allocator_int_* t223 = this220;
    _Bool r224 = std____is_constant_evaluated();
    if (r224) {
        unsigned long t225 = __n221;
        unsigned long c226 = 4;
        unsigned long ovr227;
        _Bool ovf228 = __builtin_mul_overflow(t225, c226, &ovr227);
        __n221 = ovr227;
        if (ovf228) {
          std____throw_bad_array_new_length();
        }
      unsigned long t229 = __n221;
      void* r230 = operator_new(t229);
      int* cast231 = (int*)r230;
      __retval222 = cast231;
      int* t232 = __retval222;
      return t232;
    }
  struct std____new_allocator_int_* base233 = (struct std____new_allocator_int_*)((char *)t223 + 0);
  unsigned long t234 = __n221;
  void* c235 = ((void*)0);
  int* r236 = std____new_allocator_int___allocate(base233, t234, c235);
  __retval222 = r236;
  int* t237 = __retval222;
  return t237;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v238, unsigned long v239) {
bb240:
  struct std__allocator_int_* __a241;
  unsigned long __n242;
  int* __retval243;
  __a241 = v238;
  __n242 = v239;
  struct std__allocator_int_* t244 = __a241;
  unsigned long t245 = __n242;
  int* r246 = std__allocator_int___allocate(t244, t245);
  __retval243 = r246;
  int* t247 = __retval243;
  return t247;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v248, unsigned long v249) {
bb250:
  struct std___Vector_base_int__std__allocator_int__* this251;
  unsigned long __n252;
  int* __retval253;
  this251 = v248;
  __n252 = v249;
  struct std___Vector_base_int__std__allocator_int__* t254 = this251;
  unsigned long t255 = __n252;
  unsigned long c256 = 0;
  _Bool c257 = ((t255 != c256)) ? 1 : 0;
  int* ternary258;
  if (c257) {
    struct std__allocator_int_* base259 = (struct std__allocator_int_*)((char *)&(t254->_M_impl) + 0);
    unsigned long t260 = __n252;
    int* r261 = std__allocator_traits_std__allocator_int_____allocate(base259, t260);
    ternary258 = (int*)r261;
  } else {
    int* c262 = ((void*)0);
    ternary258 = (int*)c262;
  }
  __retval253 = ternary258;
  int* t263 = __retval253;
  return t263;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v264, int* v265, unsigned long v266, struct std___Vector_base_int__std__allocator_int__* v267) {
bb268:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this269;
  int* __s270;
  unsigned long __l271;
  struct std___Vector_base_int__std__allocator_int__* __vect272;
  this269 = v264;
  __s270 = v265;
  __l271 = v266;
  __vect272 = v267;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t273 = this269;
  int* t274 = __s270;
  t273->_M_storage = t274;
  unsigned long t275 = __l271;
  t273->_M_len = t275;
  struct std___Vector_base_int__std__allocator_int__* t276 = __vect272;
  t273->_M_vect = t276;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v277) {
bb278:
  int* __ptr279;
  int* __retval280;
  __ptr279 = v277;
  int* t281 = __ptr279;
  __retval280 = t281;
  int* t282 = __retval280;
  return t282;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v283) {
bb284:
  int** __ptr285;
  int* __retval286;
  __ptr285 = v283;
  int** t287 = __ptr285;
  int* t288 = *t287;
  int* r289 = int__std__to_address_int_(t288);
  __retval286 = r289;
  int* t290 = __retval286;
  return t290;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb291:
  _Bool __retval292;
    _Bool c293 = 0;
    __retval292 = c293;
    _Bool t294 = __retval292;
    return t294;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v295, int** v296) {
bb297:
  struct __gnu_cxx____normal_iterator_int____void_* this298;
  int** __i299;
  this298 = v295;
  __i299 = v296;
  struct __gnu_cxx____normal_iterator_int____void_* t300 = this298;
  int** t301 = __i299;
  int* t302 = *t301;
  t300->_M_current = t302;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v303, int* v304) {
bb305:
  int* __location306;
  int* __args307;
  int* __retval308;
  void* __loc309;
  __location306 = v303;
  __args307 = v304;
  int* t310 = __location306;
  void* cast311 = (void*)t310;
  __loc309 = cast311;
    void* t312 = __loc309;
    int* cast313 = (int*)t312;
    int* t314 = __args307;
    int t315 = *t314;
    *cast313 = t315;
    __retval308 = cast313;
    int* t316 = __retval308;
    return t316;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v317, int* v318, int* v319) {
bb320:
  struct std__allocator_int_* __a321;
  int* __p322;
  int* __args323;
  __a321 = v317;
  __p322 = v318;
  __args323 = v319;
  int* t324 = __p322;
  int* t325 = __args323;
  int* r326 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t324, t325);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v327) {
bb328:
  int* __location329;
  __location329 = v327;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v330, int* v331) {
bb332:
  struct std__allocator_int_* __a333;
  int* __p334;
  __a333 = v330;
  __p334 = v331;
  int* t335 = __p334;
  void_std__destroy_at_int_(t335);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v336, int* v337, struct std__allocator_int_* v338) {
bb339:
  int* __dest340;
  int* __orig341;
  struct std__allocator_int_* __alloc342;
  __dest340 = v336;
  __orig341 = v337;
  __alloc342 = v338;
  struct std__allocator_int_* t343 = __alloc342;
  int* t344 = __dest340;
  int* t345 = __orig341;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t343, t344, t345);
  struct std__allocator_int_* t346 = __alloc342;
  int* t347 = __orig341;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t346, t347);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v348) {
bb349:
  struct __gnu_cxx____normal_iterator_int____void_* this350;
  int* __retval351;
  this350 = v348;
  struct __gnu_cxx____normal_iterator_int____void_* t352 = this350;
  int* t353 = t352->_M_current;
  __retval351 = t353;
  int* t354 = __retval351;
  return t354;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v355) {
bb356:
  struct __gnu_cxx____normal_iterator_int____void_* this357;
  struct __gnu_cxx____normal_iterator_int____void_* __retval358;
  this357 = v355;
  struct __gnu_cxx____normal_iterator_int____void_* t359 = this357;
  int* t360 = t359->_M_current;
  int c361 = 1;
  int* ptr362 = &(t360)[c361];
  t359->_M_current = ptr362;
  __retval358 = t359;
  struct __gnu_cxx____normal_iterator_int____void_* t363 = __retval358;
  return t363;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v364, int* v365, struct __gnu_cxx____normal_iterator_int____void_ v366, struct std__allocator_int_* v367) {
bb368:
  int* __first369;
  int* __last370;
  struct __gnu_cxx____normal_iterator_int____void_ __result371;
  struct std__allocator_int_* __alloc372;
  struct __gnu_cxx____normal_iterator_int____void_ __retval373;
  __first369 = v364;
  __last370 = v365;
  __result371 = v366;
  __alloc372 = v367;
  __retval373 = __result371; // copy
    while (1) {
      int* t375 = __first369;
      int* t376 = __last370;
      _Bool c377 = ((t375 != t376)) ? 1 : 0;
      if (!c377) break;
      int* r378 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval373);
      int* t379 = __first369;
      struct std__allocator_int_* t380 = __alloc372;
      void_std____relocate_object_a_int__int__std__allocator_int___(r378, t379, t380);
    for_step374: ;
      int* t381 = __first369;
      int c382 = 1;
      int* ptr383 = &(t381)[c382];
      __first369 = ptr383;
      struct __gnu_cxx____normal_iterator_int____void_* r384 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval373);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t385 = __retval373;
  return t385;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v386, struct __gnu_cxx____normal_iterator_int____void_* v387) {
bb388:
  struct __gnu_cxx____normal_iterator_int____void_* this389;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed390;
  struct __gnu_cxx____normal_iterator_int____void_* __retval391;
  this389 = v386;
  unnamed390 = v387;
  struct __gnu_cxx____normal_iterator_int____void_* t392 = this389;
  struct __gnu_cxx____normal_iterator_int____void_* t393 = unnamed390;
  int* t394 = t393->_M_current;
  t392->_M_current = t394;
  __retval391 = t392;
  struct __gnu_cxx____normal_iterator_int____void_* t395 = __retval391;
  return t395;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v396) {
bb397:
  struct __gnu_cxx____normal_iterator_int____void_* this398;
  int** __retval399;
  this398 = v396;
  struct __gnu_cxx____normal_iterator_int____void_* t400 = this398;
  __retval399 = &t400->_M_current;
  int** t401 = __retval399;
  return t401;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v402, int* v403, int* v404, struct std__allocator_int_* v405) {
bb406:
  int* __first407;
  int* __last408;
  int* __result409;
  struct std__allocator_int_* __alloc410;
  int* __retval411;
  long __count412;
  __first407 = v402;
  __last408 = v403;
  __result409 = v404;
  __alloc410 = v405;
  int* t413 = __last408;
  int* t414 = __first407;
  long diff415 = t413 - t414;
  __count412 = diff415;
    long t416 = __count412;
    long c417 = 0;
    _Bool c418 = ((t416 > c417)) ? 1 : 0;
    if (c418) {
        _Bool r419 = std__is_constant_evaluated();
        if (r419) {
          struct __gnu_cxx____normal_iterator_int____void_ __out420;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0421;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0422;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out420, &__result409);
          int* t423 = __first407;
          int* t424 = __last408;
          agg_tmp0422 = __out420; // copy
          struct std__allocator_int_* t425 = __alloc410;
          struct __gnu_cxx____normal_iterator_int____void_ t426 = agg_tmp0422;
          struct __gnu_cxx____normal_iterator_int____void_ r427 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t423, t424, t426, t425);
          ref_tmp0421 = r427;
          struct __gnu_cxx____normal_iterator_int____void_* r428 = __gnu_cxx____normal_iterator_int___void___operator_(&__out420, &ref_tmp0421);
          int** r429 = __gnu_cxx____normal_iterator_int___void___base___const(&__out420);
          int* t430 = *r429;
          __retval411 = t430;
          int* t431 = __retval411;
          return t431;
        }
      int* t432 = __result409;
      void* cast433 = (void*)t432;
      int* t434 = __first407;
      void* cast435 = (void*)t434;
      long t436 = __count412;
      unsigned long cast437 = (unsigned long)t436;
      unsigned long c438 = 4;
      unsigned long b439 = cast437 * c438;
      void* r440 = memcpy(cast433, cast435, b439);
    }
  int* t441 = __result409;
  long t442 = __count412;
  int* ptr443 = &(t441)[t442];
  __retval411 = ptr443;
  int* t444 = __retval411;
  return t444;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v445) {
bb446:
  int* __it447;
  int* __retval448;
  __it447 = v445;
  int* t449 = __it447;
  __retval448 = t449;
  int* t450 = __retval448;
  return t450;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v451, int* v452, int* v453, struct std__allocator_int_* v454) {
bb455:
  int* __first456;
  int* __last457;
  int* __result458;
  struct std__allocator_int_* __alloc459;
  int* __retval460;
  __first456 = v451;
  __last457 = v452;
  __result458 = v453;
  __alloc459 = v454;
  int* t461 = __first456;
  int* r462 = int__std____niter_base_int__(t461);
  int* t463 = __last457;
  int* r464 = int__std____niter_base_int__(t463);
  int* t465 = __result458;
  int* r466 = int__std____niter_base_int__(t465);
  struct std__allocator_int_* t467 = __alloc459;
  int* r468 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r462, r464, r466, t467);
  __retval460 = r468;
  int* t469 = __retval460;
  return t469;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v470, int* v471, int* v472, struct std__allocator_int_* v473) {
bb474:
  int* __first475;
  int* __last476;
  int* __result477;
  struct std__allocator_int_* __alloc478;
  int* __retval479;
  __first475 = v470;
  __last476 = v471;
  __result477 = v472;
  __alloc478 = v473;
  int* t480 = __first475;
  int* t481 = __last476;
  int* t482 = __result477;
  struct std__allocator_int_* t483 = __alloc478;
  int* r484 = int__std____relocate_a_int___int___std__allocator_int___(t480, t481, t482, t483);
  __retval479 = r484;
  int* t485 = __retval479;
  return t485;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v486) {
bb487:
  struct std___Vector_base_int__std__allocator_int__* this488;
  struct std__allocator_int_* __retval489;
  this488 = v486;
  struct std___Vector_base_int__std__allocator_int__* t490 = this488;
  struct std__allocator_int_* base491 = (struct std__allocator_int_*)((char *)&(t490->_M_impl) + 0);
  __retval489 = base491;
  struct std__allocator_int_* t492 = __retval489;
  return t492;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v493) {
bb494:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this495;
  this495 = v493;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t496 = this495;
    int* t497 = t496->_M_storage;
    _Bool cast498 = (_Bool)t497;
    if (cast498) {
      struct std___Vector_base_int__std__allocator_int__* t499 = t496->_M_vect;
      int* t500 = t496->_M_storage;
      unsigned long t501 = t496->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t499, t500, t501);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v502, int* v503) {
bb504:
  struct std__vector_int__std__allocator_int__* this505;
  int* __args506;
  unsigned long __len507;
  int* __old_start508;
  int* __old_finish509;
  unsigned long __elems510;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1512;
  int* __new_start513;
  int* __new_finish514;
  this505 = v502;
  __args506 = v503;
  struct std__vector_int__std__allocator_int__* t515 = this505;
  unsigned long c516 = 1;
  char* cast517 = (char*)&(_str_2);
  unsigned long r518 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t515, c516, cast517);
  __len507 = r518;
    unsigned long t519 = __len507;
    unsigned long c520 = 0;
    _Bool c521 = ((t519 <= c520)) ? 1 : 0;
    if (c521) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base522 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base523 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base522->_M_impl) + 0);
  int* t524 = base523->_M_start;
  __old_start508 = t524;
  struct std___Vector_base_int__std__allocator_int__* base525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base526 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base525->_M_impl) + 0);
  int* t527 = base526->_M_finish;
  __old_finish509 = t527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r528 = std__vector_int__std__allocator_int_____end(t515);
  ref_tmp0511 = r528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r529 = std__vector_int__std__allocator_int_____begin(t515);
  ref_tmp1512 = r529;
  long r530 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0511, &ref_tmp1512);
  unsigned long cast531 = (unsigned long)r530;
  __elems510 = cast531;
  struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  unsigned long t533 = __len507;
  int* r534 = std___Vector_base_int__std__allocator_int______M_allocate(base532, t533);
  __new_start513 = r534;
  int* t535 = __new_start513;
  __new_finish514 = t535;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard536;
    int* ref_tmp2537;
    int* t538 = __new_start513;
    unsigned long t539 = __len507;
    struct std___Vector_base_int__std__allocator_int__* base540 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard536, t538, t539, base540);
      struct std___Vector_base_int__std__allocator_int__* base541 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
      struct std__allocator_int_* base542 = (struct std__allocator_int_*)((char *)&(base541->_M_impl) + 0);
      int* t543 = __new_start513;
      unsigned long t544 = __elems510;
      int* ptr545 = &(t543)[t544];
      ref_tmp2537 = ptr545;
      int* r546 = auto_std____to_address_int__(&ref_tmp2537);
      int* t547 = __args506;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base542, r546, t547);
        int* t548 = __old_start508;
        int* t549 = __old_finish509;
        int* t550 = __new_start513;
        struct std___Vector_base_int__std__allocator_int__* base551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
        struct std__allocator_int_* r552 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base551);
        int* r553 = std__vector_int__std__allocator_int______S_relocate(t548, t549, t550, r552);
        __new_finish514 = r553;
        int* t554 = __new_finish514;
        int c555 = 1;
        int* ptr556 = &(t554)[c555];
        __new_finish514 = ptr556;
      int* t557 = __old_start508;
      __guard536._M_storage = t557;
      struct std___Vector_base_int__std__allocator_int__* base558 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base559 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base558->_M_impl) + 0);
      int* t560 = base559->_M_end_of_storage;
      int* t561 = __old_start508;
      long diff562 = t560 - t561;
      unsigned long cast563 = (unsigned long)diff562;
      __guard536._M_len = cast563;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard536);
    }
  int* t564 = __new_start513;
  struct std___Vector_base_int__std__allocator_int__* base565 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base566 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base565->_M_impl) + 0);
  base566->_M_start = t564;
  int* t567 = __new_finish514;
  struct std___Vector_base_int__std__allocator_int__* base568 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base569 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base568->_M_impl) + 0);
  base569->_M_finish = t567;
  int* t570 = __new_start513;
  unsigned long t571 = __len507;
  int* ptr572 = &(t570)[t571];
  struct std___Vector_base_int__std__allocator_int__* base573 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base574 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base573->_M_impl) + 0);
  base574->_M_end_of_storage = ptr572;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v575, int* v576) {
bb577:
  struct std__vector_int__std__allocator_int__* this578;
  int* __x579;
  this578 = v575;
  __x579 = v576;
  struct std__vector_int__std__allocator_int__* t580 = this578;
    struct std___Vector_base_int__std__allocator_int__* base581 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base582 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base581->_M_impl) + 0);
    int* t583 = base582->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base584 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base585 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base584->_M_impl) + 0);
    int* t586 = base585->_M_end_of_storage;
    _Bool c587 = ((t583 != t586)) ? 1 : 0;
    if (c587) {
      struct std___Vector_base_int__std__allocator_int__* base588 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std__allocator_int_* base589 = (struct std__allocator_int_*)((char *)&(base588->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base590 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base591 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base590->_M_impl) + 0);
      int* t592 = base591->_M_finish;
      int* t593 = __x579;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base589, t592, t593);
      struct std___Vector_base_int__std__allocator_int__* base594 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base595 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base594->_M_impl) + 0);
      int* t596 = base595->_M_finish;
      int c597 = 1;
      int* ptr598 = &(t596)[c597];
      base595->_M_finish = ptr598;
    } else {
      int* t599 = __x579;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t580, t599);
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v600, long v601) {
bb602:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this603;
  long __n604;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval605;
  int* ref_tmp0606;
  this603 = v600;
  __n604 = v601;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t607 = this603;
  int* t608 = t607->_M_current;
  long t609 = __n604;
  int* ptr610 = &(t608)[t609];
  ref_tmp0606 = ptr610;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval605, &ref_tmp0606);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t611 = __retval605;
  return t611;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v612, int* v613) {
bb614:
  int* __a615;
  int* __b616;
  int __tmp617;
  __a615 = v612;
  __b616 = v613;
  int* t618 = __a615;
  int t619 = *t618;
  __tmp617 = t619;
  int* t620 = __b616;
  int t621 = *t620;
  int* t622 = __a615;
  *t622 = t621;
  int t623 = __tmp617;
  int* t624 = __b616;
  *t624 = t623;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v625, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v626) {
bb627:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a628;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b629;
  __a628 = v625;
  __b629 = v626;
  int* r630 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a628);
  int* r631 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b629);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r630, r631);
  return;
}

// function: _ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v632, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v633) {
bb634:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first635;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last636;
  __first635 = v632;
  __last636 = v633;
    _Bool r637 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first635, &__last636);
    if (r637) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i638;
    long c639 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r640 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first635, c639);
    __i638 = r640;
    while (1) {
      _Bool r642 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i638, &__last636);
      _Bool u643 = !r642;
      if (!u643) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __j644;
        int r645 = rand();
        long cast646 = (long)r645;
        long r647 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__i638, &__first635);
        long c648 = 1;
        long b649 = r647 + c648;
        long b650 = cast646 % b649;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r651 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first635, b650);
        __j644 = r651;
          _Bool r652 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i638, &__j644);
          _Bool u653 = !r652;
          if (u653) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0654;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1655;
            agg_tmp0654 = __i638; // copy
            agg_tmp1655 = __j644; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t656 = agg_tmp0654;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t657 = agg_tmp1655;
            void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t656, t657);
          }
    for_step641: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r658 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__i638);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v659, int** v660) {
bb661:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this662;
  int** __i663;
  this662 = v659;
  __i663 = v660;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t664 = this662;
  int** t665 = __i663;
  int* t666 = *t665;
  t664->_M_current = t666;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v667) {
bb668:
  struct std__vector_int__std__allocator_int__* this669;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval670;
  this669 = v667;
  struct std__vector_int__std__allocator_int__* t671 = this669;
  struct std___Vector_base_int__std__allocator_int__* base672 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base673 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base672->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval670, &base673->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t674 = __retval670;
  return t674;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v675) {
bb676:
  struct std__vector_int__std__allocator_int__* this677;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval678;
  this677 = v675;
  struct std__vector_int__std__allocator_int__* t679 = this677;
  struct std___Vector_base_int__std__allocator_int__* base680 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t679 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base681 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base680->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval678, &base681->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t682 = __retval678;
  return t682;
}

// function: _ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEERPFllEEvT_SA_OT0_
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long______long_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v683, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v684, void** v685) {
bb686:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first687;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last688;
  void** __rand689;
  __first687 = v683;
  __last688 = v684;
  __rand689 = v685;
    _Bool r690 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first687, &__last688);
    if (r690) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i691;
    long c692 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r693 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first687, c692);
    __i691 = r693;
    while (1) {
      _Bool r695 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i691, &__last688);
      _Bool u696 = !r695;
      if (!u696) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __j697;
        void** t698 = __rand689;
        void* t699 = *t698;
        long r700 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__i691, &__first687);
        long c701 = 1;
        long b702 = r700 + c701;
        long r703 = ((long (*)(long))t699)(b702);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r704 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first687, r703);
        __j697 = r704;
          _Bool r705 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i691, &__j697);
          _Bool u706 = !r705;
          if (u706) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0707;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1708;
            agg_tmp0707 = __i691; // copy
            agg_tmp1708 = __j697; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t709 = agg_tmp0707;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t710 = agg_tmp1708;
            void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t709, t710);
          }
    for_step694: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r711 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__i691);
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v712, int v713) {
bb714:
  int __a715;
  int __b716;
  int __retval717;
  __a715 = v712;
  __b716 = v713;
  int t718 = __a715;
  int t719 = __b716;
  int b720 = t718 | t719;
  __retval717 = b720;
  int t721 = __retval717;
  return t721;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v722) {
bb723:
  struct std__basic_ios_char__std__char_traits_char__* this724;
  int __retval725;
  this724 = v722;
  struct std__basic_ios_char__std__char_traits_char__* t726 = this724;
  struct std__ios_base* base727 = (struct std__ios_base*)((char *)t726 + 0);
  int t728 = base727->_M_streambuf_state;
  __retval725 = t728;
  int t729 = __retval725;
  return t729;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v730, int v731) {
bb732:
  struct std__basic_ios_char__std__char_traits_char__* this733;
  int __state734;
  this733 = v730;
  __state734 = v731;
  struct std__basic_ios_char__std__char_traits_char__* t735 = this733;
  int r736 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t735);
  int t737 = __state734;
  int r738 = std__operator_(r736, t737);
  std__basic_ios_char__std__char_traits_char_____clear(t735, r738);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v739, char* v740) {
bb741:
  char* __c1742;
  char* __c2743;
  _Bool __retval744;
  __c1742 = v739;
  __c2743 = v740;
  char* t745 = __c1742;
  char t746 = *t745;
  int cast747 = (int)t746;
  char* t748 = __c2743;
  char t749 = *t748;
  int cast750 = (int)t749;
  _Bool c751 = ((cast747 == cast750)) ? 1 : 0;
  __retval744 = c751;
  _Bool t752 = __retval744;
  return t752;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v753) {
bb754:
  char* __p755;
  unsigned long __retval756;
  unsigned long __i757;
  __p755 = v753;
  unsigned long c758 = 0;
  __i757 = c758;
    char ref_tmp0759;
    while (1) {
      unsigned long t760 = __i757;
      char* t761 = __p755;
      char* ptr762 = &(t761)[t760];
      char c763 = 0;
      ref_tmp0759 = c763;
      _Bool r764 = __gnu_cxx__char_traits_char___eq(ptr762, &ref_tmp0759);
      _Bool u765 = !r764;
      if (!u765) break;
      unsigned long t766 = __i757;
      unsigned long u767 = t766 + 1;
      __i757 = u767;
    }
  unsigned long t768 = __i757;
  __retval756 = t768;
  unsigned long t769 = __retval756;
  return t769;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v770) {
bb771:
  char* __s772;
  unsigned long __retval773;
  __s772 = v770;
    _Bool r774 = std____is_constant_evaluated();
    if (r774) {
      char* t775 = __s772;
      unsigned long r776 = __gnu_cxx__char_traits_char___length(t775);
      __retval773 = r776;
      unsigned long t777 = __retval773;
      return t777;
    }
  char* t778 = __s772;
  unsigned long r779 = strlen(t778);
  __retval773 = r779;
  unsigned long t780 = __retval773;
  return t780;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v781, char* v782) {
bb783:
  struct std__basic_ostream_char__std__char_traits_char__* __out784;
  char* __s785;
  struct std__basic_ostream_char__std__char_traits_char__* __retval786;
  __out784 = v781;
  __s785 = v782;
    char* t787 = __s785;
    _Bool cast788 = (_Bool)t787;
    _Bool u789 = !cast788;
    if (u789) {
      struct std__basic_ostream_char__std__char_traits_char__* t790 = __out784;
      void** v791 = (void**)t790;
      void* v792 = *((void**)v791);
      unsigned char* cast793 = (unsigned char*)v792;
      long c794 = -24;
      unsigned char* ptr795 = &(cast793)[c794];
      long* cast796 = (long*)ptr795;
      long t797 = *cast796;
      unsigned char* cast798 = (unsigned char*)t790;
      unsigned char* ptr799 = &(cast798)[t797];
      struct std__basic_ostream_char__std__char_traits_char__* cast800 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr799;
      struct std__basic_ios_char__std__char_traits_char__* cast801 = (struct std__basic_ios_char__std__char_traits_char__*)cast800;
      int t802 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast801, t802);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t803 = __out784;
      char* t804 = __s785;
      char* t805 = __s785;
      unsigned long r806 = std__char_traits_char___length(t805);
      long cast807 = (long)r806;
      struct std__basic_ostream_char__std__char_traits_char__* r808 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t803, t804, cast807);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t809 = __out784;
  __retval786 = t809;
  struct std__basic_ostream_char__std__char_traits_char__* t810 = __retval786;
  return t810;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v811, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v812) {
bb813:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this814;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed815;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval816;
  this814 = v811;
  unnamed815 = v812;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t817 = this814;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t818 = unnamed815;
  int* t819 = t818->_M_current;
  t817->_M_current = t819;
  __retval816 = t817;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t820 = __retval816;
  return t820;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v821, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v822) {
bb823:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs824;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs825;
  _Bool __retval826;
  __lhs824 = v821;
  __rhs825 = v822;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t827 = __lhs824;
  int** r828 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t827);
  int* t829 = *r828;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t830 = __rhs825;
  int** r831 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t830);
  int* t832 = *r831;
  _Bool c833 = ((t829 == t832)) ? 1 : 0;
  __retval826 = c833;
  _Bool t834 = __retval826;
  return t834;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v835) {
bb836:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this837;
  int* __retval838;
  this837 = v835;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t839 = this837;
  int* t840 = t839->_M_current;
  __retval838 = t840;
  int* t841 = __retval838;
  return t841;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v842) {
bb843:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval845;
  this844 = v842;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t846 = this844;
  int* t847 = t846->_M_current;
  int c848 = 1;
  int* ptr849 = &(t847)[c848];
  t846->_M_current = ptr849;
  __retval845 = t846;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t850 = __retval845;
  return t850;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v851, void* v852) {
bb853:
  struct std__basic_ostream_char__std__char_traits_char__* this854;
  void* __pf855;
  struct std__basic_ostream_char__std__char_traits_char__* __retval856;
  this854 = v851;
  __pf855 = v852;
  struct std__basic_ostream_char__std__char_traits_char__* t857 = this854;
  void* t858 = __pf855;
  struct std__basic_ostream_char__std__char_traits_char__* r859 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t858)(t857);
  __retval856 = r859;
  struct std__basic_ostream_char__std__char_traits_char__* t860 = __retval856;
  return t860;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v861) {
bb862:
  struct std__basic_ostream_char__std__char_traits_char__* __os863;
  struct std__basic_ostream_char__std__char_traits_char__* __retval864;
  __os863 = v861;
  struct std__basic_ostream_char__std__char_traits_char__* t865 = __os863;
  struct std__basic_ostream_char__std__char_traits_char__* r866 = std__ostream__flush(t865);
  __retval864 = r866;
  struct std__basic_ostream_char__std__char_traits_char__* t867 = __retval864;
  return t867;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v868) {
bb869:
  struct std__ctype_char_* __f870;
  struct std__ctype_char_* __retval871;
  __f870 = v868;
    struct std__ctype_char_* t872 = __f870;
    _Bool cast873 = (_Bool)t872;
    _Bool u874 = !cast873;
    if (u874) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t875 = __f870;
  __retval871 = t875;
  struct std__ctype_char_* t876 = __retval871;
  return t876;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v877, char v878) {
bb879:
  struct std__ctype_char_* this880;
  char __c881;
  char __retval882;
  this880 = v877;
  __c881 = v878;
  struct std__ctype_char_* t883 = this880;
    char t884 = t883->_M_widen_ok;
    _Bool cast885 = (_Bool)t884;
    if (cast885) {
      char t886 = __c881;
      unsigned char cast887 = (unsigned char)t886;
      unsigned long cast888 = (unsigned long)cast887;
      char t889 = t883->_M_widen[cast888];
      __retval882 = t889;
      char t890 = __retval882;
      return t890;
    }
  std__ctype_char____M_widen_init___const(t883);
  char t891 = __c881;
  void** v892 = (void**)t883;
  void* v893 = *((void**)v892);
  char vcall896 = (char)__VERIFIER_virtual_call_char_char(t883, 6, t891);
  __retval882 = vcall896;
  char t897 = __retval882;
  return t897;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v898, char v899) {
bb900:
  struct std__basic_ios_char__std__char_traits_char__* this901;
  char __c902;
  char __retval903;
  this901 = v898;
  __c902 = v899;
  struct std__basic_ios_char__std__char_traits_char__* t904 = this901;
  struct std__ctype_char_* t905 = t904->_M_ctype;
  struct std__ctype_char_* r906 = std__ctype_char__const__std____check_facet_std__ctype_char___(t905);
  char t907 = __c902;
  char r908 = std__ctype_char___widen_char__const(r906, t907);
  __retval903 = r908;
  char t909 = __retval903;
  return t909;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v910) {
bb911:
  struct std__basic_ostream_char__std__char_traits_char__* __os912;
  struct std__basic_ostream_char__std__char_traits_char__* __retval913;
  __os912 = v910;
  struct std__basic_ostream_char__std__char_traits_char__* t914 = __os912;
  struct std__basic_ostream_char__std__char_traits_char__* t915 = __os912;
  void** v916 = (void**)t915;
  void* v917 = *((void**)v916);
  unsigned char* cast918 = (unsigned char*)v917;
  long c919 = -24;
  unsigned char* ptr920 = &(cast918)[c919];
  long* cast921 = (long*)ptr920;
  long t922 = *cast921;
  unsigned char* cast923 = (unsigned char*)t915;
  unsigned char* ptr924 = &(cast923)[t922];
  struct std__basic_ostream_char__std__char_traits_char__* cast925 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr924;
  struct std__basic_ios_char__std__char_traits_char__* cast926 = (struct std__basic_ios_char__std__char_traits_char__*)cast925;
  char c927 = 10;
  char r928 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast926, c927);
  struct std__basic_ostream_char__std__char_traits_char__* r929 = std__ostream__put(t914, r928);
  struct std__basic_ostream_char__std__char_traits_char__* r930 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r929);
  __retval913 = r930;
  struct std__basic_ostream_char__std__char_traits_char__* t931 = __retval913;
  return t931;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v932) {
bb933:
  struct std__vector_int__std__allocator_int__* this934;
  this934 = v932;
  struct std__vector_int__std__allocator_int__* t935 = this934;
    struct std___Vector_base_int__std__allocator_int__* base936 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t935 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base937 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base936->_M_impl) + 0);
    int* t938 = base937->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base939 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t935 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base940 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base939->_M_impl) + 0);
    int* t941 = base940->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t935 + 0);
    struct std__allocator_int_* r943 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base942);
    void_std___Destroy_int___int_(t938, t941, r943);
  {
    struct std___Vector_base_int__std__allocator_int__* base944 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t935 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base944);
  }
  return;
}

// function: main
int main() {
bb945:
  int __retval946;
  struct std__vector_int__std__allocator_int__ myvector947;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it948;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0949;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1950;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2951;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3952;
  int c953 = 0;
  __retval946 = c953;
  long* c954 = ((void*)0);
  long r955 = time(c954);
  unsigned int cast956 = (unsigned int)r955;
  srand(cast956);
  std__vector_int__std__allocator_int_____vector(&myvector947);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it948);
      int i957;
      int c958 = 1;
      i957 = c958;
      while (1) {
        int t960 = i957;
        int c961 = 10;
        _Bool c962 = ((t960 < c961)) ? 1 : 0;
        if (!c962) break;
        std__vector_int__std__allocator_int_____push_back(&myvector947, &i957);
      for_step959: ;
        int t963 = i957;
        int u964 = t963 + 1;
        i957 = u964;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r965 = std__vector_int__std__allocator_int_____begin(&myvector947);
    agg_tmp0949 = r965;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r966 = std__vector_int__std__allocator_int_____end(&myvector947);
    agg_tmp1950 = r966;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t967 = agg_tmp0949;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t968 = agg_tmp1950;
    void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t967, t968);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r969 = std__vector_int__std__allocator_int_____begin(&myvector947);
    agg_tmp2951 = r969;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r970 = std__vector_int__std__allocator_int_____end(&myvector947);
    agg_tmp3952 = r970;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t971 = agg_tmp2951;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t972 = agg_tmp3952;
    void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long______long_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_____(t971, t972, &p_myrandom);
    char* cast973 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r974 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast973);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0975;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1976;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r977 = std__vector_int__std__allocator_int_____begin(&myvector947);
      ref_tmp0975 = r977;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r978 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it948, &ref_tmp0975);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r980 = std__vector_int__std__allocator_int_____end(&myvector947);
        ref_tmp1976 = r980;
        _Bool r981 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it948, &ref_tmp1976);
        _Bool u982 = !r981;
        if (!u982) break;
        char* cast983 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r984 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast983);
        int* r985 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it948);
        int t986 = *r985;
        struct std__basic_ostream_char__std__char_traits_char__* r987 = std__ostream__operator__(r984, t986);
      for_step979: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r988 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it948);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r989 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c990 = 0;
    __retval946 = c990;
    int t991 = __retval946;
    int ret_val992 = t991;
    {
      std__vector_int__std__allocator_int______vector(&myvector947);
    }
    return ret_val992;
  int t993 = __retval946;
  return t993;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v994) {
bb995:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this996;
  this996 = v994;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t997 = this996;
  struct std__allocator_int_* base998 = (struct std__allocator_int_*)((char *)t997 + 0);
  std__allocator_int___allocator(base998);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base999 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t997 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base999);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1000) {
bb1001:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1002;
  this1002 = v1000;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1003 = this1002;
  {
    struct std__allocator_int_* base1004 = (struct std__allocator_int_*)((char *)t1003 + 0);
    std__allocator_int____allocator(base1004);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1005) {
bb1006:
  struct std___Vector_base_int__std__allocator_int__* this1007;
  this1007 = v1005;
  struct std___Vector_base_int__std__allocator_int__* t1008 = this1007;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1008->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1009:
  _Bool __retval1010;
    _Bool c1011 = 0;
    __retval1010 = c1011;
    _Bool t1012 = __retval1010;
    return t1012;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1013, int* v1014, unsigned long v1015) {
bb1016:
  struct std____new_allocator_int_* this1017;
  int* __p1018;
  unsigned long __n1019;
  this1017 = v1013;
  __p1018 = v1014;
  __n1019 = v1015;
  struct std____new_allocator_int_* t1020 = this1017;
    unsigned long c1021 = 4;
    unsigned long c1022 = 16;
    _Bool c1023 = ((c1021 > c1022)) ? 1 : 0;
    if (c1023) {
      int* t1024 = __p1018;
      void* cast1025 = (void*)t1024;
      unsigned long t1026 = __n1019;
      unsigned long c1027 = 4;
      unsigned long b1028 = t1026 * c1027;
      unsigned long c1029 = 4;
      operator_delete_3(cast1025, b1028, c1029);
      return;
    }
  int* t1030 = __p1018;
  void* cast1031 = (void*)t1030;
  unsigned long t1032 = __n1019;
  unsigned long c1033 = 4;
  unsigned long b1034 = t1032 * c1033;
  operator_delete_2(cast1031, b1034);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1035, int* v1036, unsigned long v1037) {
bb1038:
  struct std__allocator_int_* this1039;
  int* __p1040;
  unsigned long __n1041;
  this1039 = v1035;
  __p1040 = v1036;
  __n1041 = v1037;
  struct std__allocator_int_* t1042 = this1039;
    _Bool r1043 = std____is_constant_evaluated();
    if (r1043) {
      int* t1044 = __p1040;
      void* cast1045 = (void*)t1044;
      operator_delete(cast1045);
      return;
    }
  struct std____new_allocator_int_* base1046 = (struct std____new_allocator_int_*)((char *)t1042 + 0);
  int* t1047 = __p1040;
  unsigned long t1048 = __n1041;
  std____new_allocator_int___deallocate(base1046, t1047, t1048);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1049, int* v1050, unsigned long v1051) {
bb1052:
  struct std__allocator_int_* __a1053;
  int* __p1054;
  unsigned long __n1055;
  __a1053 = v1049;
  __p1054 = v1050;
  __n1055 = v1051;
  struct std__allocator_int_* t1056 = __a1053;
  int* t1057 = __p1054;
  unsigned long t1058 = __n1055;
  std__allocator_int___deallocate(t1056, t1057, t1058);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1059, int* v1060, unsigned long v1061) {
bb1062:
  struct std___Vector_base_int__std__allocator_int__* this1063;
  int* __p1064;
  unsigned long __n1065;
  this1063 = v1059;
  __p1064 = v1060;
  __n1065 = v1061;
  struct std___Vector_base_int__std__allocator_int__* t1066 = this1063;
    int* t1067 = __p1064;
    _Bool cast1068 = (_Bool)t1067;
    if (cast1068) {
      struct std__allocator_int_* base1069 = (struct std__allocator_int_*)((char *)&(t1066->_M_impl) + 0);
      int* t1070 = __p1064;
      unsigned long t1071 = __n1065;
      std__allocator_traits_std__allocator_int_____deallocate(base1069, t1070, t1071);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1072) {
bb1073:
  struct std___Vector_base_int__std__allocator_int__* this1074;
  this1074 = v1072;
  struct std___Vector_base_int__std__allocator_int__* t1075 = this1074;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1076 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1075->_M_impl) + 0);
    int* t1077 = base1076->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1078 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1075->_M_impl) + 0);
    int* t1079 = base1078->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1080 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1075->_M_impl) + 0);
    int* t1081 = base1080->_M_start;
    long diff1082 = t1079 - t1081;
    unsigned long cast1083 = (unsigned long)diff1082;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1075, t1077, cast1083);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1075->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1084) {
bb1085:
  struct std____new_allocator_int_* this1086;
  this1086 = v1084;
  struct std____new_allocator_int_* t1087 = this1086;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1088) {
bb1089:
  struct std__allocator_int_* this1090;
  this1090 = v1088;
  struct std__allocator_int_* t1091 = this1090;
  struct std____new_allocator_int_* base1092 = (struct std____new_allocator_int_*)((char *)t1091 + 0);
  std____new_allocator_int_____new_allocator(base1092);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1093) {
bb1094:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1095;
  this1095 = v1093;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1096 = this1095;
  int* c1097 = ((void*)0);
  t1096->_M_start = c1097;
  int* c1098 = ((void*)0);
  t1096->_M_finish = c1098;
  int* c1099 = ((void*)0);
  t1096->_M_end_of_storage = c1099;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1100) {
bb1101:
  struct std__allocator_int_* this1102;
  this1102 = v1100;
  struct std__allocator_int_* t1103 = this1102;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1104, int* v1105) {
bb1106:
  int* __first1107;
  int* __last1108;
  __first1107 = v1104;
  __last1108 = v1105;
      _Bool r1109 = std____is_constant_evaluated();
      if (r1109) {
          while (1) {
            int* t1111 = __first1107;
            int* t1112 = __last1108;
            _Bool c1113 = ((t1111 != t1112)) ? 1 : 0;
            if (!c1113) break;
            int* t1114 = __first1107;
            void_std__destroy_at_int_(t1114);
          for_step1110: ;
            int* t1115 = __first1107;
            int c1116 = 1;
            int* ptr1117 = &(t1115)[c1116];
            __first1107 = ptr1117;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1118, int* v1119, struct std__allocator_int_* v1120) {
bb1121:
  int* __first1122;
  int* __last1123;
  struct std__allocator_int_* unnamed1124;
  __first1122 = v1118;
  __last1123 = v1119;
  unnamed1124 = v1120;
  int* t1125 = __first1122;
  int* t1126 = __last1123;
  void_std___Destroy_int__(t1125, t1126);
  return;
}

