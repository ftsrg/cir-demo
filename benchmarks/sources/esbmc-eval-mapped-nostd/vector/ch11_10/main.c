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
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ current; };
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
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
void std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator_2(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0);
void std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rbegin(struct std__vector_int__std__allocator_int__* p0);
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* p0, struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator_(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________base___const(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0);
struct std__strong_ordering _ZStssITkSt20three_way_comparableN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt8__detail18__cmp3way_res_implIT_S9_E4typeERKSt16reverse_iteratorIS9_ESF_(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p1);
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rend(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator____const(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0);
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator__(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v159, int** v160) {
bb161:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this162;
  int** __i163;
  this162 = v159;
  __i163 = v160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t164 = this162;
  int** t165 = __i163;
  int* t166 = *t165;
  t164->_M_current = t166;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v167) {
bb168:
  struct std__vector_int__std__allocator_int__* this169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval170;
  this169 = v167;
  struct std__vector_int__std__allocator_int__* t171 = this169;
  struct std___Vector_base_int__std__allocator_int__* base172 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t171 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base173 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base172->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval170, &base173->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t174 = __retval170;
  return t174;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v175) {
bb176:
  struct std__vector_int__std__allocator_int__* this177;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval178;
  this177 = v175;
  struct std__vector_int__std__allocator_int__* t179 = this177;
  struct std___Vector_base_int__std__allocator_int__* base180 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t179 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base181 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base180->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval178, &base181->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t182 = __retval178;
  return t182;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v183) {
bb184:
  struct std____new_allocator_int_* this185;
  unsigned long __retval186;
  this185 = v183;
  struct std____new_allocator_int_* t187 = this185;
  unsigned long c188 = 9223372036854775807;
  unsigned long c189 = 4;
  unsigned long b190 = c188 / c189;
  __retval186 = b190;
  unsigned long t191 = __retval186;
  return t191;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v192, unsigned long v193, void* v194) {
bb195:
  struct std____new_allocator_int_* this196;
  unsigned long __n197;
  void* unnamed198;
  int* __retval199;
  this196 = v192;
  __n197 = v193;
  unnamed198 = v194;
  struct std____new_allocator_int_* t200 = this196;
    unsigned long t201 = __n197;
    unsigned long r202 = std____new_allocator_int____M_max_size___const(t200);
    _Bool c203 = ((t201 > r202)) ? 1 : 0;
    if (c203) {
        unsigned long t204 = __n197;
        unsigned long c205 = -1;
        unsigned long c206 = 4;
        unsigned long b207 = c205 / c206;
        _Bool c208 = ((t204 > b207)) ? 1 : 0;
        if (c208) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c209 = 4;
    unsigned long c210 = 16;
    _Bool c211 = ((c209 > c210)) ? 1 : 0;
    if (c211) {
      unsigned long __al212;
      unsigned long c213 = 4;
      __al212 = c213;
      unsigned long t214 = __n197;
      unsigned long c215 = 4;
      unsigned long b216 = t214 * c215;
      unsigned long t217 = __al212;
      void* r218 = operator_new_2(b216, t217);
      int* cast219 = (int*)r218;
      __retval199 = cast219;
      int* t220 = __retval199;
      return t220;
    }
  unsigned long t221 = __n197;
  unsigned long c222 = 4;
  unsigned long b223 = t221 * c222;
  void* r224 = operator_new(b223);
  int* cast225 = (int*)r224;
  __retval199 = cast225;
  int* t226 = __retval199;
  return t226;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v227, unsigned long v228) {
bb229:
  struct std__allocator_int_* this230;
  unsigned long __n231;
  int* __retval232;
  this230 = v227;
  __n231 = v228;
  struct std__allocator_int_* t233 = this230;
    _Bool r234 = std____is_constant_evaluated();
    if (r234) {
        unsigned long t235 = __n231;
        unsigned long c236 = 4;
        unsigned long ovr237;
        _Bool ovf238 = __builtin_mul_overflow(t235, c236, &ovr237);
        __n231 = ovr237;
        if (ovf238) {
          std____throw_bad_array_new_length();
        }
      unsigned long t239 = __n231;
      void* r240 = operator_new(t239);
      int* cast241 = (int*)r240;
      __retval232 = cast241;
      int* t242 = __retval232;
      return t242;
    }
  struct std____new_allocator_int_* base243 = (struct std____new_allocator_int_*)((char *)t233 + 0);
  unsigned long t244 = __n231;
  void* c245 = ((void*)0);
  int* r246 = std____new_allocator_int___allocate(base243, t244, c245);
  __retval232 = r246;
  int* t247 = __retval232;
  return t247;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v248, unsigned long v249) {
bb250:
  struct std__allocator_int_* __a251;
  unsigned long __n252;
  int* __retval253;
  __a251 = v248;
  __n252 = v249;
  struct std__allocator_int_* t254 = __a251;
  unsigned long t255 = __n252;
  int* r256 = std__allocator_int___allocate(t254, t255);
  __retval253 = r256;
  int* t257 = __retval253;
  return t257;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v258, unsigned long v259) {
bb260:
  struct std___Vector_base_int__std__allocator_int__* this261;
  unsigned long __n262;
  int* __retval263;
  this261 = v258;
  __n262 = v259;
  struct std___Vector_base_int__std__allocator_int__* t264 = this261;
  unsigned long t265 = __n262;
  unsigned long c266 = 0;
  _Bool c267 = ((t265 != c266)) ? 1 : 0;
  int* ternary268;
  if (c267) {
    struct std__allocator_int_* base269 = (struct std__allocator_int_*)((char *)&(t264->_M_impl) + 0);
    unsigned long t270 = __n262;
    int* r271 = std__allocator_traits_std__allocator_int_____allocate(base269, t270);
    ternary268 = (int*)r271;
  } else {
    int* c272 = ((void*)0);
    ternary268 = (int*)c272;
  }
  __retval263 = ternary268;
  int* t273 = __retval263;
  return t273;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v274, int* v275, unsigned long v276, struct std___Vector_base_int__std__allocator_int__* v277) {
bb278:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this279;
  int* __s280;
  unsigned long __l281;
  struct std___Vector_base_int__std__allocator_int__* __vect282;
  this279 = v274;
  __s280 = v275;
  __l281 = v276;
  __vect282 = v277;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t283 = this279;
  int* t284 = __s280;
  t283->_M_storage = t284;
  unsigned long t285 = __l281;
  t283->_M_len = t285;
  struct std___Vector_base_int__std__allocator_int__* t286 = __vect282;
  t283->_M_vect = t286;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v287) {
bb288:
  int* __ptr289;
  int* __retval290;
  __ptr289 = v287;
  int* t291 = __ptr289;
  __retval290 = t291;
  int* t292 = __retval290;
  return t292;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v293) {
bb294:
  int** __ptr295;
  int* __retval296;
  __ptr295 = v293;
  int** t297 = __ptr295;
  int* t298 = *t297;
  int* r299 = int__std__to_address_int_(t298);
  __retval296 = r299;
  int* t300 = __retval296;
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v305, int** v306) {
bb307:
  struct __gnu_cxx____normal_iterator_int____void_* this308;
  int** __i309;
  this308 = v305;
  __i309 = v306;
  struct __gnu_cxx____normal_iterator_int____void_* t310 = this308;
  int** t311 = __i309;
  int* t312 = *t311;
  t310->_M_current = t312;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v313, int* v314) {
bb315:
  int* __location316;
  int* __args317;
  int* __retval318;
  void* __loc319;
  __location316 = v313;
  __args317 = v314;
  int* t320 = __location316;
  void* cast321 = (void*)t320;
  __loc319 = cast321;
    void* t322 = __loc319;
    int* cast323 = (int*)t322;
    int* t324 = __args317;
    int t325 = *t324;
    *cast323 = t325;
    __retval318 = cast323;
    int* t326 = __retval318;
    return t326;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v327, int* v328, int* v329) {
bb330:
  struct std__allocator_int_* __a331;
  int* __p332;
  int* __args333;
  __a331 = v327;
  __p332 = v328;
  __args333 = v329;
  int* t334 = __p332;
  int* t335 = __args333;
  int* r336 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t334, t335);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v337) {
bb338:
  int* __location339;
  __location339 = v337;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v340, int* v341) {
bb342:
  struct std__allocator_int_* __a343;
  int* __p344;
  __a343 = v340;
  __p344 = v341;
  int* t345 = __p344;
  void_std__destroy_at_int_(t345);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v346, int* v347, struct std__allocator_int_* v348) {
bb349:
  int* __dest350;
  int* __orig351;
  struct std__allocator_int_* __alloc352;
  __dest350 = v346;
  __orig351 = v347;
  __alloc352 = v348;
  struct std__allocator_int_* t353 = __alloc352;
  int* t354 = __dest350;
  int* t355 = __orig351;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t353, t354, t355);
  struct std__allocator_int_* t356 = __alloc352;
  int* t357 = __orig351;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t356, t357);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v358) {
bb359:
  struct __gnu_cxx____normal_iterator_int____void_* this360;
  int* __retval361;
  this360 = v358;
  struct __gnu_cxx____normal_iterator_int____void_* t362 = this360;
  int* t363 = t362->_M_current;
  __retval361 = t363;
  int* t364 = __retval361;
  return t364;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v365) {
bb366:
  struct __gnu_cxx____normal_iterator_int____void_* this367;
  struct __gnu_cxx____normal_iterator_int____void_* __retval368;
  this367 = v365;
  struct __gnu_cxx____normal_iterator_int____void_* t369 = this367;
  int* t370 = t369->_M_current;
  int c371 = 1;
  int* ptr372 = &(t370)[c371];
  t369->_M_current = ptr372;
  __retval368 = t369;
  struct __gnu_cxx____normal_iterator_int____void_* t373 = __retval368;
  return t373;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v374, int* v375, struct __gnu_cxx____normal_iterator_int____void_ v376, struct std__allocator_int_* v377) {
bb378:
  int* __first379;
  int* __last380;
  struct __gnu_cxx____normal_iterator_int____void_ __result381;
  struct std__allocator_int_* __alloc382;
  struct __gnu_cxx____normal_iterator_int____void_ __retval383;
  __first379 = v374;
  __last380 = v375;
  __result381 = v376;
  __alloc382 = v377;
  __retval383 = __result381; // copy
    while (1) {
      int* t385 = __first379;
      int* t386 = __last380;
      _Bool c387 = ((t385 != t386)) ? 1 : 0;
      if (!c387) break;
      int* r388 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval383);
      int* t389 = __first379;
      struct std__allocator_int_* t390 = __alloc382;
      void_std____relocate_object_a_int__int__std__allocator_int___(r388, t389, t390);
    for_step384: ;
      int* t391 = __first379;
      int c392 = 1;
      int* ptr393 = &(t391)[c392];
      __first379 = ptr393;
      struct __gnu_cxx____normal_iterator_int____void_* r394 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval383);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t395 = __retval383;
  return t395;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v396, struct __gnu_cxx____normal_iterator_int____void_* v397) {
bb398:
  struct __gnu_cxx____normal_iterator_int____void_* this399;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed400;
  struct __gnu_cxx____normal_iterator_int____void_* __retval401;
  this399 = v396;
  unnamed400 = v397;
  struct __gnu_cxx____normal_iterator_int____void_* t402 = this399;
  struct __gnu_cxx____normal_iterator_int____void_* t403 = unnamed400;
  int* t404 = t403->_M_current;
  t402->_M_current = t404;
  __retval401 = t402;
  struct __gnu_cxx____normal_iterator_int____void_* t405 = __retval401;
  return t405;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v406) {
bb407:
  struct __gnu_cxx____normal_iterator_int____void_* this408;
  int** __retval409;
  this408 = v406;
  struct __gnu_cxx____normal_iterator_int____void_* t410 = this408;
  __retval409 = &t410->_M_current;
  int** t411 = __retval409;
  return t411;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v412, int* v413, int* v414, struct std__allocator_int_* v415) {
bb416:
  int* __first417;
  int* __last418;
  int* __result419;
  struct std__allocator_int_* __alloc420;
  int* __retval421;
  long __count422;
  __first417 = v412;
  __last418 = v413;
  __result419 = v414;
  __alloc420 = v415;
  int* t423 = __last418;
  int* t424 = __first417;
  long diff425 = t423 - t424;
  __count422 = diff425;
    long t426 = __count422;
    long c427 = 0;
    _Bool c428 = ((t426 > c427)) ? 1 : 0;
    if (c428) {
        _Bool r429 = std__is_constant_evaluated();
        if (r429) {
          struct __gnu_cxx____normal_iterator_int____void_ __out430;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0431;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0432;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out430, &__result419);
          int* t433 = __first417;
          int* t434 = __last418;
          agg_tmp0432 = __out430; // copy
          struct std__allocator_int_* t435 = __alloc420;
          struct __gnu_cxx____normal_iterator_int____void_ t436 = agg_tmp0432;
          struct __gnu_cxx____normal_iterator_int____void_ r437 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t433, t434, t436, t435);
          ref_tmp0431 = r437;
          struct __gnu_cxx____normal_iterator_int____void_* r438 = __gnu_cxx____normal_iterator_int___void___operator_(&__out430, &ref_tmp0431);
          int** r439 = __gnu_cxx____normal_iterator_int___void___base___const(&__out430);
          int* t440 = *r439;
          __retval421 = t440;
          int* t441 = __retval421;
          return t441;
        }
      int* t442 = __result419;
      void* cast443 = (void*)t442;
      int* t444 = __first417;
      void* cast445 = (void*)t444;
      long t446 = __count422;
      unsigned long cast447 = (unsigned long)t446;
      unsigned long c448 = 4;
      unsigned long b449 = cast447 * c448;
      void* r450 = memcpy(cast443, cast445, b449);
    }
  int* t451 = __result419;
  long t452 = __count422;
  int* ptr453 = &(t451)[t452];
  __retval421 = ptr453;
  int* t454 = __retval421;
  return t454;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v455) {
bb456:
  int* __it457;
  int* __retval458;
  __it457 = v455;
  int* t459 = __it457;
  __retval458 = t459;
  int* t460 = __retval458;
  return t460;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v461, int* v462, int* v463, struct std__allocator_int_* v464) {
bb465:
  int* __first466;
  int* __last467;
  int* __result468;
  struct std__allocator_int_* __alloc469;
  int* __retval470;
  __first466 = v461;
  __last467 = v462;
  __result468 = v463;
  __alloc469 = v464;
  int* t471 = __first466;
  int* r472 = int__std____niter_base_int__(t471);
  int* t473 = __last467;
  int* r474 = int__std____niter_base_int__(t473);
  int* t475 = __result468;
  int* r476 = int__std____niter_base_int__(t475);
  struct std__allocator_int_* t477 = __alloc469;
  int* r478 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r472, r474, r476, t477);
  __retval470 = r478;
  int* t479 = __retval470;
  return t479;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v480, int* v481, int* v482, struct std__allocator_int_* v483) {
bb484:
  int* __first485;
  int* __last486;
  int* __result487;
  struct std__allocator_int_* __alloc488;
  int* __retval489;
  __first485 = v480;
  __last486 = v481;
  __result487 = v482;
  __alloc488 = v483;
  int* t490 = __first485;
  int* t491 = __last486;
  int* t492 = __result487;
  struct std__allocator_int_* t493 = __alloc488;
  int* r494 = int__std____relocate_a_int___int___std__allocator_int___(t490, t491, t492, t493);
  __retval489 = r494;
  int* t495 = __retval489;
  return t495;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v496) {
bb497:
  struct std___Vector_base_int__std__allocator_int__* this498;
  struct std__allocator_int_* __retval499;
  this498 = v496;
  struct std___Vector_base_int__std__allocator_int__* t500 = this498;
  struct std__allocator_int_* base501 = (struct std__allocator_int_*)((char *)&(t500->_M_impl) + 0);
  __retval499 = base501;
  struct std__allocator_int_* t502 = __retval499;
  return t502;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v503) {
bb504:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this505;
  this505 = v503;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t506 = this505;
    int* t507 = t506->_M_storage;
    _Bool cast508 = (_Bool)t507;
    if (cast508) {
      struct std___Vector_base_int__std__allocator_int__* t509 = t506->_M_vect;
      int* t510 = t506->_M_storage;
      unsigned long t511 = t506->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t509, t510, t511);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v512, int* v513) {
bb514:
  struct std__vector_int__std__allocator_int__* this515;
  int* __args516;
  unsigned long __len517;
  int* __old_start518;
  int* __old_finish519;
  unsigned long __elems520;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0521;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1522;
  int* __new_start523;
  int* __new_finish524;
  this515 = v512;
  __args516 = v513;
  struct std__vector_int__std__allocator_int__* t525 = this515;
  unsigned long c526 = 1;
  char* cast527 = (char*)&(_str_2);
  unsigned long r528 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t525, c526, cast527);
  __len517 = r528;
    unsigned long t529 = __len517;
    unsigned long c530 = 0;
    _Bool c531 = ((t529 <= c530)) ? 1 : 0;
    if (c531) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base533 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base532->_M_impl) + 0);
  int* t534 = base533->_M_start;
  __old_start518 = t534;
  struct std___Vector_base_int__std__allocator_int__* base535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base535->_M_impl) + 0);
  int* t537 = base536->_M_finish;
  __old_finish519 = t537;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r538 = std__vector_int__std__allocator_int_____end(t525);
  ref_tmp0521 = r538;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r539 = std__vector_int__std__allocator_int_____begin(t525);
  ref_tmp1522 = r539;
  long r540 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0521, &ref_tmp1522);
  unsigned long cast541 = (unsigned long)r540;
  __elems520 = cast541;
  struct std___Vector_base_int__std__allocator_int__* base542 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
  unsigned long t543 = __len517;
  int* r544 = std___Vector_base_int__std__allocator_int______M_allocate(base542, t543);
  __new_start523 = r544;
  int* t545 = __new_start523;
  __new_finish524 = t545;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard546;
    int* ref_tmp2547;
    int* t548 = __new_start523;
    unsigned long t549 = __len517;
    struct std___Vector_base_int__std__allocator_int__* base550 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard546, t548, t549, base550);
      struct std___Vector_base_int__std__allocator_int__* base551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
      struct std__allocator_int_* base552 = (struct std__allocator_int_*)((char *)&(base551->_M_impl) + 0);
      int* t553 = __new_start523;
      unsigned long t554 = __elems520;
      int* ptr555 = &(t553)[t554];
      ref_tmp2547 = ptr555;
      int* r556 = auto_std____to_address_int__(&ref_tmp2547);
      int* t557 = __args516;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base552, r556, t557);
        int* t558 = __old_start518;
        int* t559 = __old_finish519;
        int* t560 = __new_start523;
        struct std___Vector_base_int__std__allocator_int__* base561 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
        struct std__allocator_int_* r562 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base561);
        int* r563 = std__vector_int__std__allocator_int______S_relocate(t558, t559, t560, r562);
        __new_finish524 = r563;
        int* t564 = __new_finish524;
        int c565 = 1;
        int* ptr566 = &(t564)[c565];
        __new_finish524 = ptr566;
      int* t567 = __old_start518;
      __guard546._M_storage = t567;
      struct std___Vector_base_int__std__allocator_int__* base568 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base569 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base568->_M_impl) + 0);
      int* t570 = base569->_M_end_of_storage;
      int* t571 = __old_start518;
      long diff572 = t570 - t571;
      unsigned long cast573 = (unsigned long)diff572;
      __guard546._M_len = cast573;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard546);
    }
  int* t574 = __new_start523;
  struct std___Vector_base_int__std__allocator_int__* base575 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base576 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base575->_M_impl) + 0);
  base576->_M_start = t574;
  int* t577 = __new_finish524;
  struct std___Vector_base_int__std__allocator_int__* base578 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base579 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base578->_M_impl) + 0);
  base579->_M_finish = t577;
  int* t580 = __new_start523;
  unsigned long t581 = __len517;
  int* ptr582 = &(t580)[t581];
  struct std___Vector_base_int__std__allocator_int__* base583 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t525 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base584 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base583->_M_impl) + 0);
  base584->_M_end_of_storage = ptr582;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v585, int* v586) {
bb587:
  struct std__vector_int__std__allocator_int__* this588;
  int* __x589;
  this588 = v585;
  __x589 = v586;
  struct std__vector_int__std__allocator_int__* t590 = this588;
    struct std___Vector_base_int__std__allocator_int__* base591 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base592 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base591->_M_impl) + 0);
    int* t593 = base592->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base594 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base595 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base594->_M_impl) + 0);
    int* t596 = base595->_M_end_of_storage;
    _Bool c597 = ((t593 != t596)) ? 1 : 0;
    if (c597) {
      struct std___Vector_base_int__std__allocator_int__* base598 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std__allocator_int_* base599 = (struct std__allocator_int_*)((char *)&(base598->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base600 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base601 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base600->_M_impl) + 0);
      int* t602 = base601->_M_finish;
      int* t603 = __x589;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base599, t602, t603);
      struct std___Vector_base_int__std__allocator_int__* base604 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t590 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base605 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base604->_M_impl) + 0);
      int* t606 = base605->_M_finish;
      int c607 = 1;
      int* ptr608 = &(t606)[c607];
      base605->_M_finish = ptr608;
    } else {
      int* t609 = __x589;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t590, t609);
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v610, int v611) {
bb612:
  int __a613;
  int __b614;
  int __retval615;
  __a613 = v610;
  __b614 = v611;
  int t616 = __a613;
  int t617 = __b614;
  int b618 = t616 | t617;
  __retval615 = b618;
  int t619 = __retval615;
  return t619;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v620) {
bb621:
  struct std__basic_ios_char__std__char_traits_char__* this622;
  int __retval623;
  this622 = v620;
  struct std__basic_ios_char__std__char_traits_char__* t624 = this622;
  struct std__ios_base* base625 = (struct std__ios_base*)((char *)t624 + 0);
  int t626 = base625->_M_streambuf_state;
  __retval623 = t626;
  int t627 = __retval623;
  return t627;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v628, int v629) {
bb630:
  struct std__basic_ios_char__std__char_traits_char__* this631;
  int __state632;
  this631 = v628;
  __state632 = v629;
  struct std__basic_ios_char__std__char_traits_char__* t633 = this631;
  int r634 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t633);
  int t635 = __state632;
  int r636 = std__operator__2(r634, t635);
  std__basic_ios_char__std__char_traits_char_____clear(t633, r636);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v637, char* v638) {
bb639:
  char* __c1640;
  char* __c2641;
  _Bool __retval642;
  __c1640 = v637;
  __c2641 = v638;
  char* t643 = __c1640;
  char t644 = *t643;
  int cast645 = (int)t644;
  char* t646 = __c2641;
  char t647 = *t646;
  int cast648 = (int)t647;
  _Bool c649 = ((cast645 == cast648)) ? 1 : 0;
  __retval642 = c649;
  _Bool t650 = __retval642;
  return t650;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v651) {
bb652:
  char* __p653;
  unsigned long __retval654;
  unsigned long __i655;
  __p653 = v651;
  unsigned long c656 = 0;
  __i655 = c656;
    char ref_tmp0657;
    while (1) {
      unsigned long t658 = __i655;
      char* t659 = __p653;
      char* ptr660 = &(t659)[t658];
      char c661 = 0;
      ref_tmp0657 = c661;
      _Bool r662 = __gnu_cxx__char_traits_char___eq(ptr660, &ref_tmp0657);
      _Bool u663 = !r662;
      if (!u663) break;
      unsigned long t664 = __i655;
      unsigned long u665 = t664 + 1;
      __i655 = u665;
    }
  unsigned long t666 = __i655;
  __retval654 = t666;
  unsigned long t667 = __retval654;
  return t667;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v668) {
bb669:
  char* __s670;
  unsigned long __retval671;
  __s670 = v668;
    _Bool r672 = std____is_constant_evaluated();
    if (r672) {
      char* t673 = __s670;
      unsigned long r674 = __gnu_cxx__char_traits_char___length(t673);
      __retval671 = r674;
      unsigned long t675 = __retval671;
      return t675;
    }
  char* t676 = __s670;
  unsigned long r677 = strlen(t676);
  __retval671 = r677;
  unsigned long t678 = __retval671;
  return t678;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v679, char* v680) {
bb681:
  struct std__basic_ostream_char__std__char_traits_char__* __out682;
  char* __s683;
  struct std__basic_ostream_char__std__char_traits_char__* __retval684;
  __out682 = v679;
  __s683 = v680;
    char* t685 = __s683;
    _Bool cast686 = (_Bool)t685;
    _Bool u687 = !cast686;
    if (u687) {
      struct std__basic_ostream_char__std__char_traits_char__* t688 = __out682;
      void** v689 = (void**)t688;
      void* v690 = *((void**)v689);
      unsigned char* cast691 = (unsigned char*)v690;
      long c692 = -24;
      unsigned char* ptr693 = &(cast691)[c692];
      long* cast694 = (long*)ptr693;
      long t695 = *cast694;
      unsigned char* cast696 = (unsigned char*)t688;
      unsigned char* ptr697 = &(cast696)[t695];
      struct std__basic_ostream_char__std__char_traits_char__* cast698 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr697;
      struct std__basic_ios_char__std__char_traits_char__* cast699 = (struct std__basic_ios_char__std__char_traits_char__*)cast698;
      int t700 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast699, t700);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t701 = __out682;
      char* t702 = __s683;
      char* t703 = __s683;
      unsigned long r704 = std__char_traits_char___length(t703);
      long cast705 = (long)r704;
      struct std__basic_ostream_char__std__char_traits_char__* r706 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t701, t702, cast705);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t707 = __out682;
  __retval684 = t707;
  struct std__basic_ostream_char__std__char_traits_char__* t708 = __retval684;
  return t708;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEC2Ev
void std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator_2(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v709) {
bb710:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this711;
  this711 = v709;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t712 = this711;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base713 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t712 + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&t712->current);
  return;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEC2ES6_
void std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v714, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v715) {
bb716:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __x718;
  this717 = v714;
  __x718 = v715;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t719 = this717;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base720 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t719 + 0);
  t719->current = __x718; // copy
  return;
}

// function: _ZNSt6vectorIiSaIiEE6rbeginEv
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rbegin(struct std__vector_int__std__allocator_int__* v721) {
bb722:
  struct std__vector_int__std__allocator_int__* this723;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0725;
  this723 = v721;
  struct std__vector_int__std__allocator_int__* t726 = this723;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r727 = std__vector_int__std__allocator_int_____end(t726);
  agg_tmp0725 = r727;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t728 = agg_tmp0725;
  std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(&__retval724, t728);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t729 = __retval724;
  return t729;
}

// function: _ZNSt8iteratorISt26random_access_iterator_tagilPiRiEaSERKS3_
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* v730, struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* v731) {
bb732:
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* this733;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* unnamed734;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* __retval735;
  this733 = v730;
  unnamed734 = v731;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* t736 = this733;
  __retval735 = t736;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* t737 = __retval735;
  return t737;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v738, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v739) {
bb740:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this741;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed742;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval743;
  this741 = v738;
  unnamed742 = v739;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t744 = this741;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t745 = unnamed742;
  int* t746 = t745->_M_current;
  t744->_M_current = t746;
  __retval743 = t744;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t747 = __retval743;
  return t747;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEaSERKS7_
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator_(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v748, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v749) {
bb750:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this751;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* unnamed752;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __retval753;
  this751 = v748;
  unnamed752 = v749;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t754 = this751;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base755 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t754 + 0);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t756 = unnamed752;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base757 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t756 + 0);
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* r758 = std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(base755, base757);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t759 = unnamed752;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r760 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&t754->current, &t759->current);
  __retval753 = t754;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t761 = __retval753;
  return t761;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v762, struct std____cmp_cat____unspec v763) {
bb764:
  struct std__strong_ordering __v765;
  struct std____cmp_cat____unspec unnamed766;
  _Bool __retval767;
  __v765 = v762;
  unnamed766 = v763;
  char t768 = __v765._M_value;
  int cast769 = (int)t768;
  int c770 = 0;
  _Bool c771 = ((cast769 < c770)) ? 1 : 0;
  __retval767 = c771;
  _Bool t772 = __retval767;
  return t772;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v773, int** v774, int** v775) {
bb776:
  struct std____detail___Synth3way* this777;
  int** __t778;
  int** __u779;
  struct std__strong_ordering __retval780;
  this777 = v773;
  __t778 = v774;
  __u779 = v775;
  struct std____detail___Synth3way* t781 = this777;
    int** t782 = __t778;
    int* t783 = *t782;
    int** t784 = __u779;
    int* t785 = *t784;
    char c786 = -1;
    char c787 = 0;
    char c788 = 1;
    _Bool c789 = ((t783 < t785)) ? 1 : 0;
    char sel790 = c789 ? c786 : c788;
    _Bool c791 = ((t783 == t785)) ? 1 : 0;
    char sel792 = c791 ? c787 : sel790;
    __retval780._M_value = sel792;
    struct std__strong_ordering t793 = __retval780;
    return t793;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v794, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v795) {
bb796:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs797;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs798;
  struct std__strong_ordering __retval799;
  __lhs797 = v794;
  __rhs798 = v795;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t800 = __lhs797;
  int** r801 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t800);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t802 = __rhs798;
  int** r803 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t802);
  struct std__strong_ordering r804 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r801, r803);
  __retval799 = r804;
  struct std__strong_ordering t805 = __retval799;
  return t805;
}

// function: _ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEE4baseEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________base___const(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v806) {
bb807:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this808;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval809;
  this808 = v806;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t810 = this808;
  __retval809 = t810->current; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t811 = __retval809;
  return t811;
}

// function: _ZStssITkSt20three_way_comparableN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt8__detail18__cmp3way_res_implIT_S9_E4typeERKSt16reverse_iteratorIS9_ESF_
struct std__strong_ordering _ZStssITkSt20three_way_comparableN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt8__detail18__cmp3way_res_implIT_S9_E4typeERKSt16reverse_iteratorIS9_ESF_(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v812, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v813) {
bb814:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __x815;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __y816;
  struct std__strong_ordering __retval817;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0818;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1819;
  __x815 = v812;
  __y816 = v813;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t820 = __y816;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r821 = std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________base___const(t820);
  ref_tmp0818 = r821;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t822 = __x815;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r823 = std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________base___const(t822);
  ref_tmp1819 = r823;
  struct std__strong_ordering r824 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&ref_tmp0818, &ref_tmp1819);
  __retval817 = r824;
  struct std__strong_ordering t825 = __retval817;
  return t825;
}

// function: _ZNSt6vectorIiSaIiEE4rendEv
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rend(struct std__vector_int__std__allocator_int__* v826) {
bb827:
  struct std__vector_int__std__allocator_int__* this828;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval829;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0830;
  this828 = v826;
  struct std__vector_int__std__allocator_int__* t831 = this828;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r832 = std__vector_int__std__allocator_int_____begin(t831);
  agg_tmp0830 = r832;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t833 = agg_tmp0830;
  std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(&__retval829, t833);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t834 = __retval829;
  return t834;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v835) {
bb836:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this837;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval838;
  this837 = v835;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t839 = this837;
  int* t840 = t839->_M_current;
  int c841 = -1;
  int* ptr842 = &(t840)[c841];
  t839->_M_current = ptr842;
  __retval838 = t839;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t843 = __retval838;
  return t843;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v844) {
bb845:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this846;
  int* __retval847;
  this846 = v844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t848 = this846;
  int* t849 = t848->_M_current;
  __retval847 = t849;
  int* t850 = __retval847;
  return t850;
}

// function: _ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEdeEv
int* std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator____const(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v851) {
bb852:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this853;
  int* __retval854;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __tmp855;
  this853 = v851;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t856 = this853;
  __tmp855 = t856->current; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r857 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__tmp855);
  int* r858 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r857);
  __retval854 = r858;
  int* t859 = __retval854;
  return t859;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEppEv
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator__(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v860) {
bb861:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this862;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __retval863;
  this862 = v860;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t864 = this862;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r865 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&t864->current);
  __retval863 = t864;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t866 = __retval863;
  return t866;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v867, void* v868) {
bb869:
  struct std__basic_ostream_char__std__char_traits_char__* this870;
  void* __pf871;
  struct std__basic_ostream_char__std__char_traits_char__* __retval872;
  this870 = v867;
  __pf871 = v868;
  struct std__basic_ostream_char__std__char_traits_char__* t873 = this870;
  void* t874 = __pf871;
  struct std__basic_ostream_char__std__char_traits_char__* r875 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t874)(t873);
  __retval872 = r875;
  struct std__basic_ostream_char__std__char_traits_char__* t876 = __retval872;
  return t876;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v877) {
bb878:
  struct std__basic_ostream_char__std__char_traits_char__* __os879;
  struct std__basic_ostream_char__std__char_traits_char__* __retval880;
  __os879 = v877;
  struct std__basic_ostream_char__std__char_traits_char__* t881 = __os879;
  struct std__basic_ostream_char__std__char_traits_char__* r882 = std__ostream__flush(t881);
  __retval880 = r882;
  struct std__basic_ostream_char__std__char_traits_char__* t883 = __retval880;
  return t883;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v884) {
bb885:
  struct std__ctype_char_* __f886;
  struct std__ctype_char_* __retval887;
  __f886 = v884;
    struct std__ctype_char_* t888 = __f886;
    _Bool cast889 = (_Bool)t888;
    _Bool u890 = !cast889;
    if (u890) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t891 = __f886;
  __retval887 = t891;
  struct std__ctype_char_* t892 = __retval887;
  return t892;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v893, char v894) {
bb895:
  struct std__ctype_char_* this896;
  char __c897;
  char __retval898;
  this896 = v893;
  __c897 = v894;
  struct std__ctype_char_* t899 = this896;
    char t900 = t899->_M_widen_ok;
    _Bool cast901 = (_Bool)t900;
    if (cast901) {
      char t902 = __c897;
      unsigned char cast903 = (unsigned char)t902;
      unsigned long cast904 = (unsigned long)cast903;
      char t905 = t899->_M_widen[cast904];
      __retval898 = t905;
      char t906 = __retval898;
      return t906;
    }
  std__ctype_char____M_widen_init___const(t899);
  char t907 = __c897;
  void** v908 = (void**)t899;
  void* v909 = *((void**)v908);
  char vcall912 = (char)__VERIFIER_virtual_call_char_char(t899, 6, t907);
  __retval898 = vcall912;
  char t913 = __retval898;
  return t913;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v914, char v915) {
bb916:
  struct std__basic_ios_char__std__char_traits_char__* this917;
  char __c918;
  char __retval919;
  this917 = v914;
  __c918 = v915;
  struct std__basic_ios_char__std__char_traits_char__* t920 = this917;
  struct std__ctype_char_* t921 = t920->_M_ctype;
  struct std__ctype_char_* r922 = std__ctype_char__const__std____check_facet_std__ctype_char___(t921);
  char t923 = __c918;
  char r924 = std__ctype_char___widen_char__const(r922, t923);
  __retval919 = r924;
  char t925 = __retval919;
  return t925;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v926) {
bb927:
  struct std__basic_ostream_char__std__char_traits_char__* __os928;
  struct std__basic_ostream_char__std__char_traits_char__* __retval929;
  __os928 = v926;
  struct std__basic_ostream_char__std__char_traits_char__* t930 = __os928;
  struct std__basic_ostream_char__std__char_traits_char__* t931 = __os928;
  void** v932 = (void**)t931;
  void* v933 = *((void**)v932);
  unsigned char* cast934 = (unsigned char*)v933;
  long c935 = -24;
  unsigned char* ptr936 = &(cast934)[c935];
  long* cast937 = (long*)ptr936;
  long t938 = *cast937;
  unsigned char* cast939 = (unsigned char*)t931;
  unsigned char* ptr940 = &(cast939)[t938];
  struct std__basic_ostream_char__std__char_traits_char__* cast941 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr940;
  struct std__basic_ios_char__std__char_traits_char__* cast942 = (struct std__basic_ios_char__std__char_traits_char__*)cast941;
  char c943 = 10;
  char r944 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast942, c943);
  struct std__basic_ostream_char__std__char_traits_char__* r945 = std__ostream__put(t930, r944);
  struct std__basic_ostream_char__std__char_traits_char__* r946 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r945);
  __retval929 = r946;
  struct std__basic_ostream_char__std__char_traits_char__* t947 = __retval929;
  return t947;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v948) {
bb949:
  struct std__vector_int__std__allocator_int__* this950;
  this950 = v948;
  struct std__vector_int__std__allocator_int__* t951 = this950;
    struct std___Vector_base_int__std__allocator_int__* base952 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t951 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base953 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base952->_M_impl) + 0);
    int* t954 = base953->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base955 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t951 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base956 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base955->_M_impl) + 0);
    int* t957 = base956->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base958 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t951 + 0);
    struct std__allocator_int_* r959 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base958);
    void_std___Destroy_int___int_(t954, t957, r959);
  {
    struct std___Vector_base_int__std__allocator_int__* base960 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t951 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base960);
  }
  return;
}

// function: main
int main() {
bb961:
  int __retval962;
  struct std__vector_int__std__allocator_int__ myvector963;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ rit964;
  int c965 = 0;
  __retval962 = c965;
  std__vector_int__std__allocator_int_____vector(&myvector963);
      int i966;
      int c967 = 1;
      i966 = c967;
      while (1) {
        int t969 = i966;
        int c970 = 5;
        _Bool c971 = ((t969 <= c970)) ? 1 : 0;
        if (!c971) break;
        std__vector_int__std__allocator_int_____push_back(&myvector963, &i966);
      for_step968: ;
        int t972 = i966;
        int u973 = t972 + 1;
        i966 = u973;
      }
    char* cast974 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast974);
    std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator_2(&rit964);
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp0976;
      struct std__strong_ordering agg_tmp0977;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp1978;
      struct std____cmp_cat____unspec agg_tmp1979;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r980 = std__vector_int__std__allocator_int_____rbegin(&myvector963);
      ref_tmp0976 = r980;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* r981 = std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator_(&rit964, &ref_tmp0976);
      while (1) {
        struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r983 = std__vector_int__std__allocator_int_____rend(&myvector963);
        ref_tmp1978 = r983;
        struct std__strong_ordering r984 = _ZStssITkSt20three_way_comparableN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt8__detail18__cmp3way_res_implIT_S9_E4typeERKSt16reverse_iteratorIS9_ESF_(&rit964, &ref_tmp1978);
        agg_tmp0977 = r984;
        agg_tmp1979 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t985 = agg_tmp0977;
        struct std____cmp_cat____unspec t986 = agg_tmp1979;
        _Bool r987 = std__operator_(t985, t986);
        if (!r987) break;
        char* cast988 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r989 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast988);
        int* r990 = std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator____const(&rit964);
        int t991 = *r990;
        struct std__basic_ostream_char__std__char_traits_char__* r992 = std__ostream__operator__(r989, t991);
      for_step982: ;
        struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* r993 = std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________operator__(&rit964);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r994 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c995 = 0;
    __retval962 = c995;
    int t996 = __retval962;
    int ret_val997 = t996;
    {
      std__vector_int__std__allocator_int______vector(&myvector963);
    }
    return ret_val997;
  int t998 = __retval962;
  return t998;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v999) {
bb1000:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1001;
  this1001 = v999;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1002 = this1001;
  struct std__allocator_int_* base1003 = (struct std__allocator_int_*)((char *)t1002 + 0);
  std__allocator_int___allocator(base1003);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1004 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1002 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1004);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1005) {
bb1006:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1007;
  this1007 = v1005;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1008 = this1007;
  {
    struct std__allocator_int_* base1009 = (struct std__allocator_int_*)((char *)t1008 + 0);
    std__allocator_int____allocator(base1009);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1010) {
bb1011:
  struct std___Vector_base_int__std__allocator_int__* this1012;
  this1012 = v1010;
  struct std___Vector_base_int__std__allocator_int__* t1013 = this1012;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1013->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1014:
  _Bool __retval1015;
    _Bool c1016 = 0;
    __retval1015 = c1016;
    _Bool t1017 = __retval1015;
    return t1017;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1018, int* v1019, unsigned long v1020) {
bb1021:
  struct std____new_allocator_int_* this1022;
  int* __p1023;
  unsigned long __n1024;
  this1022 = v1018;
  __p1023 = v1019;
  __n1024 = v1020;
  struct std____new_allocator_int_* t1025 = this1022;
    unsigned long c1026 = 4;
    unsigned long c1027 = 16;
    _Bool c1028 = ((c1026 > c1027)) ? 1 : 0;
    if (c1028) {
      int* t1029 = __p1023;
      void* cast1030 = (void*)t1029;
      unsigned long t1031 = __n1024;
      unsigned long c1032 = 4;
      unsigned long b1033 = t1031 * c1032;
      unsigned long c1034 = 4;
      operator_delete_3(cast1030, b1033, c1034);
      return;
    }
  int* t1035 = __p1023;
  void* cast1036 = (void*)t1035;
  unsigned long t1037 = __n1024;
  unsigned long c1038 = 4;
  unsigned long b1039 = t1037 * c1038;
  operator_delete_2(cast1036, b1039);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1040, int* v1041, unsigned long v1042) {
bb1043:
  struct std__allocator_int_* this1044;
  int* __p1045;
  unsigned long __n1046;
  this1044 = v1040;
  __p1045 = v1041;
  __n1046 = v1042;
  struct std__allocator_int_* t1047 = this1044;
    _Bool r1048 = std____is_constant_evaluated();
    if (r1048) {
      int* t1049 = __p1045;
      void* cast1050 = (void*)t1049;
      operator_delete(cast1050);
      return;
    }
  struct std____new_allocator_int_* base1051 = (struct std____new_allocator_int_*)((char *)t1047 + 0);
  int* t1052 = __p1045;
  unsigned long t1053 = __n1046;
  std____new_allocator_int___deallocate(base1051, t1052, t1053);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1054, int* v1055, unsigned long v1056) {
bb1057:
  struct std__allocator_int_* __a1058;
  int* __p1059;
  unsigned long __n1060;
  __a1058 = v1054;
  __p1059 = v1055;
  __n1060 = v1056;
  struct std__allocator_int_* t1061 = __a1058;
  int* t1062 = __p1059;
  unsigned long t1063 = __n1060;
  std__allocator_int___deallocate(t1061, t1062, t1063);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1064, int* v1065, unsigned long v1066) {
bb1067:
  struct std___Vector_base_int__std__allocator_int__* this1068;
  int* __p1069;
  unsigned long __n1070;
  this1068 = v1064;
  __p1069 = v1065;
  __n1070 = v1066;
  struct std___Vector_base_int__std__allocator_int__* t1071 = this1068;
    int* t1072 = __p1069;
    _Bool cast1073 = (_Bool)t1072;
    if (cast1073) {
      struct std__allocator_int_* base1074 = (struct std__allocator_int_*)((char *)&(t1071->_M_impl) + 0);
      int* t1075 = __p1069;
      unsigned long t1076 = __n1070;
      std__allocator_traits_std__allocator_int_____deallocate(base1074, t1075, t1076);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1077) {
bb1078:
  struct std___Vector_base_int__std__allocator_int__* this1079;
  this1079 = v1077;
  struct std___Vector_base_int__std__allocator_int__* t1080 = this1079;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1081 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1080->_M_impl) + 0);
    int* t1082 = base1081->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1083 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1080->_M_impl) + 0);
    int* t1084 = base1083->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1085 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1080->_M_impl) + 0);
    int* t1086 = base1085->_M_start;
    long diff1087 = t1084 - t1086;
    unsigned long cast1088 = (unsigned long)diff1087;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1080, t1082, cast1088);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1080->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1089) {
bb1090:
  struct std____new_allocator_int_* this1091;
  this1091 = v1089;
  struct std____new_allocator_int_* t1092 = this1091;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1093) {
bb1094:
  struct std__allocator_int_* this1095;
  this1095 = v1093;
  struct std__allocator_int_* t1096 = this1095;
  struct std____new_allocator_int_* base1097 = (struct std____new_allocator_int_*)((char *)t1096 + 0);
  std____new_allocator_int_____new_allocator(base1097);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1098) {
bb1099:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1100;
  this1100 = v1098;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1101 = this1100;
  int* c1102 = ((void*)0);
  t1101->_M_start = c1102;
  int* c1103 = ((void*)0);
  t1101->_M_finish = c1103;
  int* c1104 = ((void*)0);
  t1101->_M_end_of_storage = c1104;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1105) {
bb1106:
  struct std__allocator_int_* this1107;
  this1107 = v1105;
  struct std__allocator_int_* t1108 = this1107;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1109) {
bb1110:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1111;
  this1111 = v1109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1112 = this1111;
  int* c1113 = ((void*)0);
  t1112->_M_current = c1113;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1114, int* v1115) {
bb1116:
  int* __first1117;
  int* __last1118;
  __first1117 = v1114;
  __last1118 = v1115;
      _Bool r1119 = std____is_constant_evaluated();
      if (r1119) {
          while (1) {
            int* t1121 = __first1117;
            int* t1122 = __last1118;
            _Bool c1123 = ((t1121 != t1122)) ? 1 : 0;
            if (!c1123) break;
            int* t1124 = __first1117;
            void_std__destroy_at_int_(t1124);
          for_step1120: ;
            int* t1125 = __first1117;
            int c1126 = 1;
            int* ptr1127 = &(t1125)[c1126];
            __first1117 = ptr1127;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1128, int* v1129, struct std__allocator_int_* v1130) {
bb1131:
  int* __first1132;
  int* __last1133;
  struct std__allocator_int_* unnamed1134;
  __first1132 = v1128;
  __last1133 = v1129;
  unnamed1134 = v1130;
  int* t1135 = __first1132;
  int* t1136 = __last1133;
  void_std___Destroy_int__(t1135, t1136);
  return;
}

