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
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
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

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v5, int* v6) {
bb7:
  int* __location8;
  int* __args9;
  int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    int* cast15 = (int*)t14;
    int* t16 = __args9;
    int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
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

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 2305843009213693951;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int__* this57;
  struct std__allocator_int_* __retval58;
  this57 = v55;
  struct std___Vector_base_int__std__allocator_int__* t59 = this57;
  struct std__allocator_int_* base60 = (struct std__allocator_int_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_int_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std__allocator_int_* r68 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_int__std__allocator_int______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v71) {
bb72:
  struct std__vector_int__std__allocator_int__* this73;
  unsigned long __retval74;
  long __dif75;
  this73 = v71;
  struct std__vector_int__std__allocator_int__* t76 = this73;
  struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base78 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base77->_M_impl) + 0);
  int* t79 = base78->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base80 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base81 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base80->_M_impl) + 0);
  int* t82 = base81->_M_start;
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

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v105, unsigned long v106, char* v107) {
bb108:
  struct std__vector_int__std__allocator_int__* this109;
  unsigned long __n110;
  char* __s111;
  unsigned long __retval112;
  unsigned long __len113;
  unsigned long ref_tmp0114;
  this109 = v105;
  __n110 = v106;
  __s111 = v107;
  struct std__vector_int__std__allocator_int__* t115 = this109;
    unsigned long r116 = std__vector_int__std__allocator_int_____max_size___const(t115);
    unsigned long r117 = std__vector_int__std__allocator_int_____size___const(t115);
    unsigned long b118 = r116 - r117;
    unsigned long t119 = __n110;
    _Bool c120 = ((b118 < t119)) ? 1 : 0;
    if (c120) {
      char* t121 = __s111;
      std____throw_length_error(t121);
    }
  unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t115);
  unsigned long r123 = std__vector_int__std__allocator_int_____size___const(t115);
  ref_tmp0114 = r123;
  unsigned long* r124 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0114, &__n110);
  unsigned long t125 = *r124;
  unsigned long b126 = r122 + t125;
  __len113 = b126;
  unsigned long t127 = __len113;
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(t115);
  _Bool c129 = ((t127 < r128)) ? 1 : 0;
  _Bool ternary130;
  if (c129) {
    _Bool c131 = 1;
    ternary130 = (_Bool)c131;
  } else {
    unsigned long t132 = __len113;
    unsigned long r133 = std__vector_int__std__allocator_int_____max_size___const(t115);
    _Bool c134 = ((t132 > r133)) ? 1 : 0;
    ternary130 = (_Bool)c134;
  }
  unsigned long ternary135;
  if (ternary130) {
    unsigned long r136 = std__vector_int__std__allocator_int_____max_size___const(t115);
    ternary135 = (unsigned long)r136;
  } else {
    unsigned long t137 = __len113;
    ternary135 = (unsigned long)t137;
  }
  __retval112 = ternary135;
  unsigned long t138 = __retval112;
  return t138;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v139) {
bb140:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this141;
  int** __retval142;
  this141 = v139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t143 = this141;
  __retval142 = &t143->_M_current;
  int** t144 = __retval142;
  return t144;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v145, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v146) {
bb147:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs148;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs149;
  long __retval150;
  __lhs148 = v145;
  __rhs149 = v146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t151 = __lhs148;
  int** r152 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t151);
  int* t153 = *r152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t154 = __rhs149;
  int** r155 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t154);
  int* t156 = *r155;
  long diff157 = t153 - t156;
  __retval150 = diff157;
  long t158 = __retval150;
  return t158;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v159) {
bb160:
  struct std____new_allocator_int_* this161;
  unsigned long __retval162;
  this161 = v159;
  struct std____new_allocator_int_* t163 = this161;
  unsigned long c164 = 9223372036854775807;
  unsigned long c165 = 4;
  unsigned long b166 = c164 / c165;
  __retval162 = b166;
  unsigned long t167 = __retval162;
  return t167;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v168, unsigned long v169, void* v170) {
bb171:
  struct std____new_allocator_int_* this172;
  unsigned long __n173;
  void* unnamed174;
  int* __retval175;
  this172 = v168;
  __n173 = v169;
  unnamed174 = v170;
  struct std____new_allocator_int_* t176 = this172;
    unsigned long t177 = __n173;
    unsigned long r178 = std____new_allocator_int____M_max_size___const(t176);
    _Bool c179 = ((t177 > r178)) ? 1 : 0;
    if (c179) {
        unsigned long t180 = __n173;
        unsigned long c181 = -1;
        unsigned long c182 = 4;
        unsigned long b183 = c181 / c182;
        _Bool c184 = ((t180 > b183)) ? 1 : 0;
        if (c184) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c185 = 4;
    unsigned long c186 = 16;
    _Bool c187 = ((c185 > c186)) ? 1 : 0;
    if (c187) {
      unsigned long __al188;
      unsigned long c189 = 4;
      __al188 = c189;
      unsigned long t190 = __n173;
      unsigned long c191 = 4;
      unsigned long b192 = t190 * c191;
      unsigned long t193 = __al188;
      void* r194 = operator_new_2(b192, t193);
      int* cast195 = (int*)r194;
      __retval175 = cast195;
      int* t196 = __retval175;
      return t196;
    }
  unsigned long t197 = __n173;
  unsigned long c198 = 4;
  unsigned long b199 = t197 * c198;
  void* r200 = operator_new(b199);
  int* cast201 = (int*)r200;
  __retval175 = cast201;
  int* t202 = __retval175;
  return t202;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v203, unsigned long v204) {
bb205:
  struct std__allocator_int_* this206;
  unsigned long __n207;
  int* __retval208;
  this206 = v203;
  __n207 = v204;
  struct std__allocator_int_* t209 = this206;
    _Bool r210 = std____is_constant_evaluated();
    if (r210) {
        unsigned long t211 = __n207;
        unsigned long c212 = 4;
        unsigned long ovr213;
        _Bool ovf214 = __builtin_mul_overflow(t211, c212, &ovr213);
        __n207 = ovr213;
        if (ovf214) {
          std____throw_bad_array_new_length();
        }
      unsigned long t215 = __n207;
      void* r216 = operator_new(t215);
      int* cast217 = (int*)r216;
      __retval208 = cast217;
      int* t218 = __retval208;
      return t218;
    }
  struct std____new_allocator_int_* base219 = (struct std____new_allocator_int_*)((char *)t209 + 0);
  unsigned long t220 = __n207;
  void* c221 = ((void*)0);
  int* r222 = std____new_allocator_int___allocate(base219, t220, c221);
  __retval208 = r222;
  int* t223 = __retval208;
  return t223;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v224, unsigned long v225) {
bb226:
  struct std__allocator_int_* __a227;
  unsigned long __n228;
  int* __retval229;
  __a227 = v224;
  __n228 = v225;
  struct std__allocator_int_* t230 = __a227;
  unsigned long t231 = __n228;
  int* r232 = std__allocator_int___allocate(t230, t231);
  __retval229 = r232;
  int* t233 = __retval229;
  return t233;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v234, unsigned long v235) {
bb236:
  struct std___Vector_base_int__std__allocator_int__* this237;
  unsigned long __n238;
  int* __retval239;
  this237 = v234;
  __n238 = v235;
  struct std___Vector_base_int__std__allocator_int__* t240 = this237;
  unsigned long t241 = __n238;
  unsigned long c242 = 0;
  _Bool c243 = ((t241 != c242)) ? 1 : 0;
  int* ternary244;
  if (c243) {
    struct std__allocator_int_* base245 = (struct std__allocator_int_*)((char *)&(t240->_M_impl) + 0);
    unsigned long t246 = __n238;
    int* r247 = std__allocator_traits_std__allocator_int_____allocate(base245, t246);
    ternary244 = (int*)r247;
  } else {
    int* c248 = ((void*)0);
    ternary244 = (int*)c248;
  }
  __retval239 = ternary244;
  int* t249 = __retval239;
  return t249;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v250, int* v251, unsigned long v252, struct std___Vector_base_int__std__allocator_int__* v253) {
bb254:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this255;
  int* __s256;
  unsigned long __l257;
  struct std___Vector_base_int__std__allocator_int__* __vect258;
  this255 = v250;
  __s256 = v251;
  __l257 = v252;
  __vect258 = v253;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t259 = this255;
  int* t260 = __s256;
  t259->_M_storage = t260;
  unsigned long t261 = __l257;
  t259->_M_len = t261;
  struct std___Vector_base_int__std__allocator_int__* t262 = __vect258;
  t259->_M_vect = t262;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v263) {
bb264:
  int* __ptr265;
  int* __retval266;
  __ptr265 = v263;
  int* t267 = __ptr265;
  __retval266 = t267;
  int* t268 = __retval266;
  return t268;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v269) {
bb270:
  int** __ptr271;
  int* __retval272;
  __ptr271 = v269;
  int** t273 = __ptr271;
  int* t274 = *t273;
  int* r275 = int__std__to_address_int_(t274);
  __retval272 = r275;
  int* t276 = __retval272;
  return t276;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb277:
  _Bool __retval278;
    _Bool c279 = 0;
    __retval278 = c279;
    _Bool t280 = __retval278;
    return t280;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v281, int** v282) {
bb283:
  struct __gnu_cxx____normal_iterator_int____void_* this284;
  int** __i285;
  this284 = v281;
  __i285 = v282;
  struct __gnu_cxx____normal_iterator_int____void_* t286 = this284;
  int** t287 = __i285;
  int* t288 = *t287;
  t286->_M_current = t288;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v289, int* v290) {
bb291:
  int* __location292;
  int* __args293;
  int* __retval294;
  void* __loc295;
  __location292 = v289;
  __args293 = v290;
  int* t296 = __location292;
  void* cast297 = (void*)t296;
  __loc295 = cast297;
    void* t298 = __loc295;
    int* cast299 = (int*)t298;
    int* t300 = __args293;
    int t301 = *t300;
    *cast299 = t301;
    __retval294 = cast299;
    int* t302 = __retval294;
    return t302;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v303, int* v304, int* v305) {
bb306:
  struct std__allocator_int_* __a307;
  int* __p308;
  int* __args309;
  __a307 = v303;
  __p308 = v304;
  __args309 = v305;
  int* t310 = __p308;
  int* t311 = __args309;
  int* r312 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t310, t311);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v313) {
bb314:
  int* __location315;
  __location315 = v313;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v316, int* v317) {
bb318:
  struct std__allocator_int_* __a319;
  int* __p320;
  __a319 = v316;
  __p320 = v317;
  int* t321 = __p320;
  void_std__destroy_at_int_(t321);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v322, int* v323, struct std__allocator_int_* v324) {
bb325:
  int* __dest326;
  int* __orig327;
  struct std__allocator_int_* __alloc328;
  __dest326 = v322;
  __orig327 = v323;
  __alloc328 = v324;
  struct std__allocator_int_* t329 = __alloc328;
  int* t330 = __dest326;
  int* t331 = __orig327;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t329, t330, t331);
  struct std__allocator_int_* t332 = __alloc328;
  int* t333 = __orig327;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t332, t333);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v334) {
bb335:
  struct __gnu_cxx____normal_iterator_int____void_* this336;
  int* __retval337;
  this336 = v334;
  struct __gnu_cxx____normal_iterator_int____void_* t338 = this336;
  int* t339 = t338->_M_current;
  __retval337 = t339;
  int* t340 = __retval337;
  return t340;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v341) {
bb342:
  struct __gnu_cxx____normal_iterator_int____void_* this343;
  struct __gnu_cxx____normal_iterator_int____void_* __retval344;
  this343 = v341;
  struct __gnu_cxx____normal_iterator_int____void_* t345 = this343;
  int* t346 = t345->_M_current;
  int c347 = 1;
  int* ptr348 = &(t346)[c347];
  t345->_M_current = ptr348;
  __retval344 = t345;
  struct __gnu_cxx____normal_iterator_int____void_* t349 = __retval344;
  return t349;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v350, int* v351, struct __gnu_cxx____normal_iterator_int____void_ v352, struct std__allocator_int_* v353) {
bb354:
  int* __first355;
  int* __last356;
  struct __gnu_cxx____normal_iterator_int____void_ __result357;
  struct std__allocator_int_* __alloc358;
  struct __gnu_cxx____normal_iterator_int____void_ __retval359;
  __first355 = v350;
  __last356 = v351;
  __result357 = v352;
  __alloc358 = v353;
  __retval359 = __result357; // copy
    while (1) {
      int* t361 = __first355;
      int* t362 = __last356;
      _Bool c363 = ((t361 != t362)) ? 1 : 0;
      if (!c363) break;
      int* r364 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval359);
      int* t365 = __first355;
      struct std__allocator_int_* t366 = __alloc358;
      void_std____relocate_object_a_int__int__std__allocator_int___(r364, t365, t366);
    for_step360: ;
      int* t367 = __first355;
      int c368 = 1;
      int* ptr369 = &(t367)[c368];
      __first355 = ptr369;
      struct __gnu_cxx____normal_iterator_int____void_* r370 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval359);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t371 = __retval359;
  return t371;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v372, struct __gnu_cxx____normal_iterator_int____void_* v373) {
bb374:
  struct __gnu_cxx____normal_iterator_int____void_* this375;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed376;
  struct __gnu_cxx____normal_iterator_int____void_* __retval377;
  this375 = v372;
  unnamed376 = v373;
  struct __gnu_cxx____normal_iterator_int____void_* t378 = this375;
  struct __gnu_cxx____normal_iterator_int____void_* t379 = unnamed376;
  int* t380 = t379->_M_current;
  t378->_M_current = t380;
  __retval377 = t378;
  struct __gnu_cxx____normal_iterator_int____void_* t381 = __retval377;
  return t381;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v382) {
bb383:
  struct __gnu_cxx____normal_iterator_int____void_* this384;
  int** __retval385;
  this384 = v382;
  struct __gnu_cxx____normal_iterator_int____void_* t386 = this384;
  __retval385 = &t386->_M_current;
  int** t387 = __retval385;
  return t387;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v388, int* v389, int* v390, struct std__allocator_int_* v391) {
bb392:
  int* __first393;
  int* __last394;
  int* __result395;
  struct std__allocator_int_* __alloc396;
  int* __retval397;
  long __count398;
  __first393 = v388;
  __last394 = v389;
  __result395 = v390;
  __alloc396 = v391;
  int* t399 = __last394;
  int* t400 = __first393;
  long diff401 = t399 - t400;
  __count398 = diff401;
    long t402 = __count398;
    long c403 = 0;
    _Bool c404 = ((t402 > c403)) ? 1 : 0;
    if (c404) {
        _Bool r405 = std__is_constant_evaluated();
        if (r405) {
          struct __gnu_cxx____normal_iterator_int____void_ __out406;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0407;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0408;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out406, &__result395);
          int* t409 = __first393;
          int* t410 = __last394;
          agg_tmp0408 = __out406; // copy
          struct std__allocator_int_* t411 = __alloc396;
          struct __gnu_cxx____normal_iterator_int____void_ t412 = agg_tmp0408;
          struct __gnu_cxx____normal_iterator_int____void_ r413 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t409, t410, t412, t411);
          ref_tmp0407 = r413;
          struct __gnu_cxx____normal_iterator_int____void_* r414 = __gnu_cxx____normal_iterator_int___void___operator_(&__out406, &ref_tmp0407);
          int** r415 = __gnu_cxx____normal_iterator_int___void___base___const(&__out406);
          int* t416 = *r415;
          __retval397 = t416;
          int* t417 = __retval397;
          return t417;
        }
      int* t418 = __result395;
      void* cast419 = (void*)t418;
      int* t420 = __first393;
      void* cast421 = (void*)t420;
      long t422 = __count398;
      unsigned long cast423 = (unsigned long)t422;
      unsigned long c424 = 4;
      unsigned long b425 = cast423 * c424;
      void* r426 = memcpy(cast419, cast421, b425);
    }
  int* t427 = __result395;
  long t428 = __count398;
  int* ptr429 = &(t427)[t428];
  __retval397 = ptr429;
  int* t430 = __retval397;
  return t430;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v431) {
bb432:
  int* __it433;
  int* __retval434;
  __it433 = v431;
  int* t435 = __it433;
  __retval434 = t435;
  int* t436 = __retval434;
  return t436;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v437, int* v438, int* v439, struct std__allocator_int_* v440) {
bb441:
  int* __first442;
  int* __last443;
  int* __result444;
  struct std__allocator_int_* __alloc445;
  int* __retval446;
  __first442 = v437;
  __last443 = v438;
  __result444 = v439;
  __alloc445 = v440;
  int* t447 = __first442;
  int* r448 = int__std____niter_base_int__(t447);
  int* t449 = __last443;
  int* r450 = int__std____niter_base_int__(t449);
  int* t451 = __result444;
  int* r452 = int__std____niter_base_int__(t451);
  struct std__allocator_int_* t453 = __alloc445;
  int* r454 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r448, r450, r452, t453);
  __retval446 = r454;
  int* t455 = __retval446;
  return t455;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v456, int* v457, int* v458, struct std__allocator_int_* v459) {
bb460:
  int* __first461;
  int* __last462;
  int* __result463;
  struct std__allocator_int_* __alloc464;
  int* __retval465;
  __first461 = v456;
  __last462 = v457;
  __result463 = v458;
  __alloc464 = v459;
  int* t466 = __first461;
  int* t467 = __last462;
  int* t468 = __result463;
  struct std__allocator_int_* t469 = __alloc464;
  int* r470 = int__std____relocate_a_int___int___std__allocator_int___(t466, t467, t468, t469);
  __retval465 = r470;
  int* t471 = __retval465;
  return t471;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v472) {
bb473:
  struct std___Vector_base_int__std__allocator_int__* this474;
  struct std__allocator_int_* __retval475;
  this474 = v472;
  struct std___Vector_base_int__std__allocator_int__* t476 = this474;
  struct std__allocator_int_* base477 = (struct std__allocator_int_*)((char *)&(t476->_M_impl) + 0);
  __retval475 = base477;
  struct std__allocator_int_* t478 = __retval475;
  return t478;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v479) {
bb480:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this481;
  this481 = v479;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t482 = this481;
    int* t483 = t482->_M_storage;
    _Bool cast484 = (_Bool)t483;
    if (cast484) {
      struct std___Vector_base_int__std__allocator_int__* t485 = t482->_M_vect;
      int* t486 = t482->_M_storage;
      unsigned long t487 = t482->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t485, t486, t487);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v488, int* v489) {
bb490:
  struct std__vector_int__std__allocator_int__* this491;
  int* __args492;
  unsigned long __len493;
  int* __old_start494;
  int* __old_finish495;
  unsigned long __elems496;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0497;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1498;
  int* __new_start499;
  int* __new_finish500;
  this491 = v488;
  __args492 = v489;
  struct std__vector_int__std__allocator_int__* t501 = this491;
  unsigned long c502 = 1;
  char* cast503 = (char*)&(_str_2);
  unsigned long r504 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t501, c502, cast503);
  __len493 = r504;
    unsigned long t505 = __len493;
    unsigned long c506 = 0;
    _Bool c507 = ((t505 <= c506)) ? 1 : 0;
    if (c507) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base508 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base509 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base508->_M_impl) + 0);
  int* t510 = base509->_M_start;
  __old_start494 = t510;
  struct std___Vector_base_int__std__allocator_int__* base511 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base512 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base511->_M_impl) + 0);
  int* t513 = base512->_M_finish;
  __old_finish495 = t513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r514 = std__vector_int__std__allocator_int_____end(t501);
  ref_tmp0497 = r514;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r515 = std__vector_int__std__allocator_int_____begin(t501);
  ref_tmp1498 = r515;
  long r516 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0497, &ref_tmp1498);
  unsigned long cast517 = (unsigned long)r516;
  __elems496 = cast517;
  struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  unsigned long t519 = __len493;
  int* r520 = std___Vector_base_int__std__allocator_int______M_allocate(base518, t519);
  __new_start499 = r520;
  int* t521 = __new_start499;
  __new_finish500 = t521;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard522;
    int* ref_tmp2523;
    int* t524 = __new_start499;
    unsigned long t525 = __len493;
    struct std___Vector_base_int__std__allocator_int__* base526 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard522, t524, t525, base526);
      struct std___Vector_base_int__std__allocator_int__* base527 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
      struct std__allocator_int_* base528 = (struct std__allocator_int_*)((char *)&(base527->_M_impl) + 0);
      int* t529 = __new_start499;
      unsigned long t530 = __elems496;
      int* ptr531 = &(t529)[t530];
      ref_tmp2523 = ptr531;
      int* r532 = auto_std____to_address_int__(&ref_tmp2523);
      int* t533 = __args492;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base528, r532, t533);
        int* t534 = __old_start494;
        int* t535 = __old_finish495;
        int* t536 = __new_start499;
        struct std___Vector_base_int__std__allocator_int__* base537 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
        struct std__allocator_int_* r538 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base537);
        int* r539 = std__vector_int__std__allocator_int______S_relocate(t534, t535, t536, r538);
        __new_finish500 = r539;
        int* t540 = __new_finish500;
        int c541 = 1;
        int* ptr542 = &(t540)[c541];
        __new_finish500 = ptr542;
      int* t543 = __old_start494;
      __guard522._M_storage = t543;
      struct std___Vector_base_int__std__allocator_int__* base544 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base545 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base544->_M_impl) + 0);
      int* t546 = base545->_M_end_of_storage;
      int* t547 = __old_start494;
      long diff548 = t546 - t547;
      unsigned long cast549 = (unsigned long)diff548;
      __guard522._M_len = cast549;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard522);
    }
  int* t550 = __new_start499;
  struct std___Vector_base_int__std__allocator_int__* base551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base552 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base551->_M_impl) + 0);
  base552->_M_start = t550;
  int* t553 = __new_finish500;
  struct std___Vector_base_int__std__allocator_int__* base554 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base555 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base554->_M_impl) + 0);
  base555->_M_finish = t553;
  int* t556 = __new_start499;
  unsigned long t557 = __len493;
  int* ptr558 = &(t556)[t557];
  struct std___Vector_base_int__std__allocator_int__* base559 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base560 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base559->_M_impl) + 0);
  base560->_M_end_of_storage = ptr558;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v561, int* v562) {
bb563:
  struct std__vector_int__std__allocator_int__* this564;
  int* __x565;
  this564 = v561;
  __x565 = v562;
  struct std__vector_int__std__allocator_int__* t566 = this564;
    struct std___Vector_base_int__std__allocator_int__* base567 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t566 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base568 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base567->_M_impl) + 0);
    int* t569 = base568->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base570 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t566 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base571 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base570->_M_impl) + 0);
    int* t572 = base571->_M_end_of_storage;
    _Bool c573 = ((t569 != t572)) ? 1 : 0;
    if (c573) {
      struct std___Vector_base_int__std__allocator_int__* base574 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t566 + 0);
      struct std__allocator_int_* base575 = (struct std__allocator_int_*)((char *)&(base574->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base576 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t566 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base577 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base576->_M_impl) + 0);
      int* t578 = base577->_M_finish;
      int* t579 = __x565;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base575, t578, t579);
      struct std___Vector_base_int__std__allocator_int__* base580 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t566 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base581 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base580->_M_impl) + 0);
      int* t582 = base581->_M_finish;
      int c583 = 1;
      int* ptr584 = &(t582)[c583];
      base581->_M_finish = ptr584;
    } else {
      int* t585 = __x565;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t566, t585);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v586) {
bb587:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this588;
  this588 = v586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t589 = this588;
  int* c590 = ((void*)0);
  t589->_M_current = c590;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v591, int v592) {
bb593:
  int __a594;
  int __b595;
  int __retval596;
  __a594 = v591;
  __b595 = v592;
  int t597 = __a594;
  int t598 = __b595;
  int b599 = t597 | t598;
  __retval596 = b599;
  int t600 = __retval596;
  return t600;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v601) {
bb602:
  struct std__basic_ios_char__std__char_traits_char__* this603;
  int __retval604;
  this603 = v601;
  struct std__basic_ios_char__std__char_traits_char__* t605 = this603;
  struct std__ios_base* base606 = (struct std__ios_base*)((char *)t605 + 0);
  int t607 = base606->_M_streambuf_state;
  __retval604 = t607;
  int t608 = __retval604;
  return t608;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v609, int v610) {
bb611:
  struct std__basic_ios_char__std__char_traits_char__* this612;
  int __state613;
  this612 = v609;
  __state613 = v610;
  struct std__basic_ios_char__std__char_traits_char__* t614 = this612;
  int r615 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t614);
  int t616 = __state613;
  int r617 = std__operator__2(r615, t616);
  std__basic_ios_char__std__char_traits_char_____clear(t614, r617);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v618, char* v619) {
bb620:
  char* __c1621;
  char* __c2622;
  _Bool __retval623;
  __c1621 = v618;
  __c2622 = v619;
  char* t624 = __c1621;
  char t625 = *t624;
  int cast626 = (int)t625;
  char* t627 = __c2622;
  char t628 = *t627;
  int cast629 = (int)t628;
  _Bool c630 = ((cast626 == cast629)) ? 1 : 0;
  __retval623 = c630;
  _Bool t631 = __retval623;
  return t631;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v632) {
bb633:
  char* __p634;
  unsigned long __retval635;
  unsigned long __i636;
  __p634 = v632;
  unsigned long c637 = 0;
  __i636 = c637;
    char ref_tmp0638;
    while (1) {
      unsigned long t639 = __i636;
      char* t640 = __p634;
      char* ptr641 = &(t640)[t639];
      char c642 = 0;
      ref_tmp0638 = c642;
      _Bool r643 = __gnu_cxx__char_traits_char___eq(ptr641, &ref_tmp0638);
      _Bool u644 = !r643;
      if (!u644) break;
      unsigned long t645 = __i636;
      unsigned long u646 = t645 + 1;
      __i636 = u646;
    }
  unsigned long t647 = __i636;
  __retval635 = t647;
  unsigned long t648 = __retval635;
  return t648;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v649) {
bb650:
  char* __s651;
  unsigned long __retval652;
  __s651 = v649;
    _Bool r653 = std____is_constant_evaluated();
    if (r653) {
      char* t654 = __s651;
      unsigned long r655 = __gnu_cxx__char_traits_char___length(t654);
      __retval652 = r655;
      unsigned long t656 = __retval652;
      return t656;
    }
  char* t657 = __s651;
  unsigned long r658 = strlen(t657);
  __retval652 = r658;
  unsigned long t659 = __retval652;
  return t659;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v660, char* v661) {
bb662:
  struct std__basic_ostream_char__std__char_traits_char__* __out663;
  char* __s664;
  struct std__basic_ostream_char__std__char_traits_char__* __retval665;
  __out663 = v660;
  __s664 = v661;
    char* t666 = __s664;
    _Bool cast667 = (_Bool)t666;
    _Bool u668 = !cast667;
    if (u668) {
      struct std__basic_ostream_char__std__char_traits_char__* t669 = __out663;
      void** v670 = (void**)t669;
      void* v671 = *((void**)v670);
      unsigned char* cast672 = (unsigned char*)v671;
      long c673 = -24;
      unsigned char* ptr674 = &(cast672)[c673];
      long* cast675 = (long*)ptr674;
      long t676 = *cast675;
      unsigned char* cast677 = (unsigned char*)t669;
      unsigned char* ptr678 = &(cast677)[t676];
      struct std__basic_ostream_char__std__char_traits_char__* cast679 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr678;
      struct std__basic_ios_char__std__char_traits_char__* cast680 = (struct std__basic_ios_char__std__char_traits_char__*)cast679;
      int t681 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast680, t681);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t682 = __out663;
      char* t683 = __s664;
      char* t684 = __s664;
      unsigned long r685 = std__char_traits_char___length(t684);
      long cast686 = (long)r685;
      struct std__basic_ostream_char__std__char_traits_char__* r687 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t682, t683, cast686);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t688 = __out663;
  __retval665 = t688;
  struct std__basic_ostream_char__std__char_traits_char__* t689 = __retval665;
  return t689;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v690, int** v691) {
bb692:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this693;
  int** __i694;
  this693 = v690;
  __i694 = v691;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t695 = this693;
  int** t696 = __i694;
  int* t697 = *t696;
  t695->_M_current = t697;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v698) {
bb699:
  struct std__vector_int__std__allocator_int__* this700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval701;
  this700 = v698;
  struct std__vector_int__std__allocator_int__* t702 = this700;
  struct std___Vector_base_int__std__allocator_int__* base703 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t702 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base704 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base703->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval701, &base704->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t705 = __retval701;
  return t705;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v706, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v707) {
bb708:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this709;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval711;
  this709 = v706;
  unnamed710 = v707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t712 = this709;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t713 = unnamed710;
  int* t714 = t713->_M_current;
  t712->_M_current = t714;
  __retval711 = t712;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t715 = __retval711;
  return t715;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v716, struct std____cmp_cat____unspec v717) {
bb718:
  struct std__strong_ordering __v719;
  struct std____cmp_cat____unspec unnamed720;
  _Bool __retval721;
  __v719 = v716;
  unnamed720 = v717;
  char t722 = __v719._M_value;
  int cast723 = (int)t722;
  int c724 = 0;
  _Bool c725 = ((cast723 < c724)) ? 1 : 0;
  __retval721 = c725;
  _Bool t726 = __retval721;
  return t726;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v727, int** v728, int** v729) {
bb730:
  struct std____detail___Synth3way* this731;
  int** __t732;
  int** __u733;
  struct std__strong_ordering __retval734;
  this731 = v727;
  __t732 = v728;
  __u733 = v729;
  struct std____detail___Synth3way* t735 = this731;
    int** t736 = __t732;
    int* t737 = *t736;
    int** t738 = __u733;
    int* t739 = *t738;
    char c740 = -1;
    char c741 = 0;
    char c742 = 1;
    _Bool c743 = ((t737 < t739)) ? 1 : 0;
    char sel744 = c743 ? c740 : c742;
    _Bool c745 = ((t737 == t739)) ? 1 : 0;
    char sel746 = c745 ? c741 : sel744;
    __retval734._M_value = sel746;
    struct std__strong_ordering t747 = __retval734;
    return t747;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v748, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v749) {
bb750:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs751;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs752;
  struct std__strong_ordering __retval753;
  __lhs751 = v748;
  __rhs752 = v749;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t754 = __lhs751;
  int** r755 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t754);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t756 = __rhs752;
  int** r757 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t756);
  struct std__strong_ordering r758 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r755, r757);
  __retval753 = r758;
  struct std__strong_ordering t759 = __retval753;
  return t759;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v760) {
bb761:
  struct std__vector_int__std__allocator_int__* this762;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval763;
  this762 = v760;
  struct std__vector_int__std__allocator_int__* t764 = this762;
  struct std___Vector_base_int__std__allocator_int__* base765 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base766 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base765->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval763, &base766->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t767 = __retval763;
  return t767;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v768) {
bb769:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this770;
  int* __retval771;
  this770 = v768;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t772 = this770;
  int* t773 = t772->_M_current;
  __retval771 = t773;
  int* t774 = __retval771;
  return t774;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v775, int v776) {
bb777:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this778;
  int unnamed779;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval780;
  int* ref_tmp0781;
  this778 = v775;
  unnamed779 = v776;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t782 = this778;
  int* t783 = t782->_M_current;
  int c784 = 1;
  int* ptr785 = &(t783)[c784];
  t782->_M_current = ptr785;
  ref_tmp0781 = t783;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval780, &ref_tmp0781);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t786 = __retval780;
  return t786;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v787, void* v788) {
bb789:
  struct std__basic_ostream_char__std__char_traits_char__* this790;
  void* __pf791;
  struct std__basic_ostream_char__std__char_traits_char__* __retval792;
  this790 = v787;
  __pf791 = v788;
  struct std__basic_ostream_char__std__char_traits_char__* t793 = this790;
  void* t794 = __pf791;
  struct std__basic_ostream_char__std__char_traits_char__* r795 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t794)(t793);
  __retval792 = r795;
  struct std__basic_ostream_char__std__char_traits_char__* t796 = __retval792;
  return t796;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v797) {
bb798:
  struct std__basic_ostream_char__std__char_traits_char__* __os799;
  struct std__basic_ostream_char__std__char_traits_char__* __retval800;
  __os799 = v797;
  struct std__basic_ostream_char__std__char_traits_char__* t801 = __os799;
  struct std__basic_ostream_char__std__char_traits_char__* r802 = std__ostream__flush(t801);
  __retval800 = r802;
  struct std__basic_ostream_char__std__char_traits_char__* t803 = __retval800;
  return t803;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v804) {
bb805:
  struct std__ctype_char_* __f806;
  struct std__ctype_char_* __retval807;
  __f806 = v804;
    struct std__ctype_char_* t808 = __f806;
    _Bool cast809 = (_Bool)t808;
    _Bool u810 = !cast809;
    if (u810) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t811 = __f806;
  __retval807 = t811;
  struct std__ctype_char_* t812 = __retval807;
  return t812;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v813, char v814) {
bb815:
  struct std__ctype_char_* this816;
  char __c817;
  char __retval818;
  this816 = v813;
  __c817 = v814;
  struct std__ctype_char_* t819 = this816;
    char t820 = t819->_M_widen_ok;
    _Bool cast821 = (_Bool)t820;
    if (cast821) {
      char t822 = __c817;
      unsigned char cast823 = (unsigned char)t822;
      unsigned long cast824 = (unsigned long)cast823;
      char t825 = t819->_M_widen[cast824];
      __retval818 = t825;
      char t826 = __retval818;
      return t826;
    }
  std__ctype_char____M_widen_init___const(t819);
  char t827 = __c817;
  void** v828 = (void**)t819;
  void* v829 = *((void**)v828);
  char vcall832 = (char)__VERIFIER_virtual_call_char_char(t819, 6, t827);
  __retval818 = vcall832;
  char t833 = __retval818;
  return t833;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v834, char v835) {
bb836:
  struct std__basic_ios_char__std__char_traits_char__* this837;
  char __c838;
  char __retval839;
  this837 = v834;
  __c838 = v835;
  struct std__basic_ios_char__std__char_traits_char__* t840 = this837;
  struct std__ctype_char_* t841 = t840->_M_ctype;
  struct std__ctype_char_* r842 = std__ctype_char__const__std____check_facet_std__ctype_char___(t841);
  char t843 = __c838;
  char r844 = std__ctype_char___widen_char__const(r842, t843);
  __retval839 = r844;
  char t845 = __retval839;
  return t845;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v846) {
bb847:
  struct std__basic_ostream_char__std__char_traits_char__* __os848;
  struct std__basic_ostream_char__std__char_traits_char__* __retval849;
  __os848 = v846;
  struct std__basic_ostream_char__std__char_traits_char__* t850 = __os848;
  struct std__basic_ostream_char__std__char_traits_char__* t851 = __os848;
  void** v852 = (void**)t851;
  void* v853 = *((void**)v852);
  unsigned char* cast854 = (unsigned char*)v853;
  long c855 = -24;
  unsigned char* ptr856 = &(cast854)[c855];
  long* cast857 = (long*)ptr856;
  long t858 = *cast857;
  unsigned char* cast859 = (unsigned char*)t851;
  unsigned char* ptr860 = &(cast859)[t858];
  struct std__basic_ostream_char__std__char_traits_char__* cast861 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr860;
  struct std__basic_ios_char__std__char_traits_char__* cast862 = (struct std__basic_ios_char__std__char_traits_char__*)cast861;
  char c863 = 10;
  char r864 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast862, c863);
  struct std__basic_ostream_char__std__char_traits_char__* r865 = std__ostream__put(t850, r864);
  struct std__basic_ostream_char__std__char_traits_char__* r866 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r865);
  __retval849 = r866;
  struct std__basic_ostream_char__std__char_traits_char__* t867 = __retval849;
  return t867;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v868) {
bb869:
  struct std__vector_int__std__allocator_int__* this870;
  this870 = v868;
  struct std__vector_int__std__allocator_int__* t871 = this870;
    struct std___Vector_base_int__std__allocator_int__* base872 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base873 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base872->_M_impl) + 0);
    int* t874 = base873->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base875 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base876 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base875->_M_impl) + 0);
    int* t877 = base876->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base878 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
    struct std__allocator_int_* r879 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base878);
    void_std___Destroy_int___int_(t874, t877, r879);
  {
    struct std___Vector_base_int__std__allocator_int__* base880 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base880);
  }
  return;
}

// function: main
int main() {
bb881:
  int __retval882;
  struct std__vector_int__std__allocator_int__ myvector883;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it884;
  int c885 = 0;
  __retval882 = c885;
  std__vector_int__std__allocator_int_____vector(&myvector883);
      int i886;
      int c887 = 1;
      i886 = c887;
      while (1) {
        int t889 = i886;
        int c890 = 5;
        _Bool c891 = ((t889 <= c890)) ? 1 : 0;
        if (!c891) break;
        std__vector_int__std__allocator_int_____push_back(&myvector883, &i886);
      for_step888: ;
        int t892 = i886;
        int u893 = t892 + 1;
        i886 = u893;
      }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it884);
    char* cast894 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r895 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast894);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0896;
      struct std__strong_ordering agg_tmp0897;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1898;
      struct std____cmp_cat____unspec agg_tmp1899;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2900;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r901 = std__vector_int__std__allocator_int_____begin(&myvector883);
      ref_tmp0896 = r901;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r902 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it884, &ref_tmp0896);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r904 = std__vector_int__std__allocator_int_____end(&myvector883);
        ref_tmp1898 = r904;
        struct std__strong_ordering r905 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&it884, &ref_tmp1898);
        agg_tmp0897 = r905;
        agg_tmp1899 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t906 = agg_tmp0897;
        struct std____cmp_cat____unspec t907 = agg_tmp1899;
        _Bool r908 = std__operator_(t906, t907);
        if (!r908) break;
        char* cast909 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r910 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast909);
        int* r911 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it884);
        int t912 = *r911;
        struct std__basic_ostream_char__std__char_traits_char__* r913 = std__ostream__operator__(r910, t912);
      for_step903: ;
        int c914 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r915 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it884, c914);
        agg_tmp2900 = r915;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r916 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c917 = 0;
    __retval882 = c917;
    int t918 = __retval882;
    int ret_val919 = t918;
    {
      std__vector_int__std__allocator_int______vector(&myvector883);
    }
    return ret_val919;
  int t920 = __retval882;
  return t920;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v921) {
bb922:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this923;
  this923 = v921;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t924 = this923;
  struct std__allocator_int_* base925 = (struct std__allocator_int_*)((char *)t924 + 0);
  std__allocator_int___allocator(base925);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base926 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t924 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base926);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v927) {
bb928:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this929;
  this929 = v927;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t930 = this929;
  {
    struct std__allocator_int_* base931 = (struct std__allocator_int_*)((char *)t930 + 0);
    std__allocator_int____allocator(base931);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v932) {
bb933:
  struct std___Vector_base_int__std__allocator_int__* this934;
  this934 = v932;
  struct std___Vector_base_int__std__allocator_int__* t935 = this934;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t935->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb936:
  _Bool __retval937;
    _Bool c938 = 0;
    __retval937 = c938;
    _Bool t939 = __retval937;
    return t939;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v940, int* v941, unsigned long v942) {
bb943:
  struct std____new_allocator_int_* this944;
  int* __p945;
  unsigned long __n946;
  this944 = v940;
  __p945 = v941;
  __n946 = v942;
  struct std____new_allocator_int_* t947 = this944;
    unsigned long c948 = 4;
    unsigned long c949 = 16;
    _Bool c950 = ((c948 > c949)) ? 1 : 0;
    if (c950) {
      int* t951 = __p945;
      void* cast952 = (void*)t951;
      unsigned long t953 = __n946;
      unsigned long c954 = 4;
      unsigned long b955 = t953 * c954;
      unsigned long c956 = 4;
      operator_delete_3(cast952, b955, c956);
      return;
    }
  int* t957 = __p945;
  void* cast958 = (void*)t957;
  unsigned long t959 = __n946;
  unsigned long c960 = 4;
  unsigned long b961 = t959 * c960;
  operator_delete_2(cast958, b961);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v962, int* v963, unsigned long v964) {
bb965:
  struct std__allocator_int_* this966;
  int* __p967;
  unsigned long __n968;
  this966 = v962;
  __p967 = v963;
  __n968 = v964;
  struct std__allocator_int_* t969 = this966;
    _Bool r970 = std____is_constant_evaluated();
    if (r970) {
      int* t971 = __p967;
      void* cast972 = (void*)t971;
      operator_delete(cast972);
      return;
    }
  struct std____new_allocator_int_* base973 = (struct std____new_allocator_int_*)((char *)t969 + 0);
  int* t974 = __p967;
  unsigned long t975 = __n968;
  std____new_allocator_int___deallocate(base973, t974, t975);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v976, int* v977, unsigned long v978) {
bb979:
  struct std__allocator_int_* __a980;
  int* __p981;
  unsigned long __n982;
  __a980 = v976;
  __p981 = v977;
  __n982 = v978;
  struct std__allocator_int_* t983 = __a980;
  int* t984 = __p981;
  unsigned long t985 = __n982;
  std__allocator_int___deallocate(t983, t984, t985);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v986, int* v987, unsigned long v988) {
bb989:
  struct std___Vector_base_int__std__allocator_int__* this990;
  int* __p991;
  unsigned long __n992;
  this990 = v986;
  __p991 = v987;
  __n992 = v988;
  struct std___Vector_base_int__std__allocator_int__* t993 = this990;
    int* t994 = __p991;
    _Bool cast995 = (_Bool)t994;
    if (cast995) {
      struct std__allocator_int_* base996 = (struct std__allocator_int_*)((char *)&(t993->_M_impl) + 0);
      int* t997 = __p991;
      unsigned long t998 = __n992;
      std__allocator_traits_std__allocator_int_____deallocate(base996, t997, t998);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v999) {
bb1000:
  struct std___Vector_base_int__std__allocator_int__* this1001;
  this1001 = v999;
  struct std___Vector_base_int__std__allocator_int__* t1002 = this1001;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1003 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1002->_M_impl) + 0);
    int* t1004 = base1003->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1005 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1002->_M_impl) + 0);
    int* t1006 = base1005->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1007 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1002->_M_impl) + 0);
    int* t1008 = base1007->_M_start;
    long diff1009 = t1006 - t1008;
    unsigned long cast1010 = (unsigned long)diff1009;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1002, t1004, cast1010);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1002->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1011) {
bb1012:
  struct std____new_allocator_int_* this1013;
  this1013 = v1011;
  struct std____new_allocator_int_* t1014 = this1013;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1015) {
bb1016:
  struct std__allocator_int_* this1017;
  this1017 = v1015;
  struct std__allocator_int_* t1018 = this1017;
  struct std____new_allocator_int_* base1019 = (struct std____new_allocator_int_*)((char *)t1018 + 0);
  std____new_allocator_int_____new_allocator(base1019);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1020) {
bb1021:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1022;
  this1022 = v1020;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1023 = this1022;
  int* c1024 = ((void*)0);
  t1023->_M_start = c1024;
  int* c1025 = ((void*)0);
  t1023->_M_finish = c1025;
  int* c1026 = ((void*)0);
  t1023->_M_end_of_storage = c1026;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1027) {
bb1028:
  struct std__allocator_int_* this1029;
  this1029 = v1027;
  struct std__allocator_int_* t1030 = this1029;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1031, int* v1032) {
bb1033:
  int* __first1034;
  int* __last1035;
  __first1034 = v1031;
  __last1035 = v1032;
      _Bool r1036 = std____is_constant_evaluated();
      if (r1036) {
          while (1) {
            int* t1038 = __first1034;
            int* t1039 = __last1035;
            _Bool c1040 = ((t1038 != t1039)) ? 1 : 0;
            if (!c1040) break;
            int* t1041 = __first1034;
            void_std__destroy_at_int_(t1041);
          for_step1037: ;
            int* t1042 = __first1034;
            int c1043 = 1;
            int* ptr1044 = &(t1042)[c1043];
            __first1034 = ptr1044;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1045, int* v1046, struct std__allocator_int_* v1047) {
bb1048:
  int* __first1049;
  int* __last1050;
  struct std__allocator_int_* unnamed1051;
  __first1049 = v1045;
  __last1050 = v1046;
  unnamed1051 = v1047;
  int* t1052 = __first1049;
  int* t1053 = __last1050;
  void_std___Destroy_int__(t1052, t1053);
  return;
}

