extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_16_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str != \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str != \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str != \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str != \"this is a short phrase!!!\"";
char _str_17[17] = "sample phrase!!!";
char _str_18[26] = "str != \"sample phrase!!!\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_19[50] = "basic_string: construction from null is not valid";
char _str_20[24] = "basic_string::_M_create";
char _str_21[22] = "basic_string::replace";
char _str_22[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_19);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v33) {
bb34:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str36;
  struct std__allocator_char_ ref_tmp037;
  this35 = v32;
  __str36 = v33;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t38 = this35;
  char* r39 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t38);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t40 = __str36;
  struct std__allocator_char_* r41 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t40);
  struct std__allocator_char_ r42 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(r41);
  ref_tmp037 = r42;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t38->_M_dataplus, r39, &ref_tmp037);
  {
    std__allocator_char____allocator(&ref_tmp037);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = __str36;
    char* r44 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t43);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = __str36;
    unsigned long r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t45);
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(t38, r44, r46);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __pos53;
  unsigned long __n54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval56;
  this52 = v47;
  __pos53 = v48;
  __n54 = v49;
  __str55 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = this52;
  unsigned long t58 = __pos53;
  unsigned long t59 = __n54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = __str55;
  char* r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t60);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t62 = __str55;
  unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t62);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t57, t58, t59, r61, r63);
  __retval56 = r64;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t65 = __retval56;
  return t65;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v66, char* v67) {
bb68:
  char* __c169;
  char* __c270;
  _Bool __retval71;
  __c169 = v66;
  __c270 = v67;
  char* t72 = __c169;
  char t73 = *t72;
  unsigned char cast74 = (unsigned char)t73;
  int cast75 = (int)cast74;
  char* t76 = __c270;
  char t77 = *t76;
  unsigned char cast78 = (unsigned char)t77;
  int cast79 = (int)cast78;
  _Bool c80 = ((cast75 < cast79)) ? 1 : 0;
  __retval71 = c80;
  _Bool t81 = __retval71;
  return t81;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v82, char* v83, unsigned long v84) {
bb85:
  char* __s186;
  char* __s287;
  unsigned long __n88;
  int __retval89;
  __s186 = v82;
  __s287 = v83;
  __n88 = v84;
    unsigned long t90 = __n88;
    unsigned long c91 = 0;
    _Bool c92 = ((t90 == c91)) ? 1 : 0;
    if (c92) {
      int c93 = 0;
      __retval89 = c93;
      int t94 = __retval89;
      return t94;
    }
    _Bool r95 = std____is_constant_evaluated();
    if (r95) {
        unsigned long __i96;
        unsigned long c97 = 0;
        __i96 = c97;
        while (1) {
          unsigned long t99 = __i96;
          unsigned long t100 = __n88;
          _Bool c101 = ((t99 < t100)) ? 1 : 0;
          if (!c101) break;
            unsigned long t102 = __i96;
            char* t103 = __s186;
            char* ptr104 = &(t103)[t102];
            unsigned long t105 = __i96;
            char* t106 = __s287;
            char* ptr107 = &(t106)[t105];
            _Bool r108 = std__char_traits_char___lt(ptr104, ptr107);
            if (r108) {
              int c109 = -1;
              __retval89 = c109;
              int t110 = __retval89;
              int ret_val111 = t110;
              return ret_val111;
            } else {
                unsigned long t112 = __i96;
                char* t113 = __s287;
                char* ptr114 = &(t113)[t112];
                unsigned long t115 = __i96;
                char* t116 = __s186;
                char* ptr117 = &(t116)[t115];
                _Bool r118 = std__char_traits_char___lt(ptr114, ptr117);
                if (r118) {
                  int c119 = 1;
                  __retval89 = c119;
                  int t120 = __retval89;
                  int ret_val121 = t120;
                  return ret_val121;
                }
            }
        for_step98: ;
          unsigned long t122 = __i96;
          unsigned long u123 = t122 + 1;
          __i96 = u123;
        }
      int c124 = 0;
      __retval89 = c124;
      int t125 = __retval89;
      return t125;
    }
  char* t126 = __s186;
  void* cast127 = (void*)t126;
  char* t128 = __s287;
  void* cast129 = (void*)t128;
  unsigned long t130 = __n88;
  int r131 = memcmp(cast127, cast129, t130);
  __retval89 = r131;
  int t132 = __retval89;
  return t132;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v133) {
bb134:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this135;
  char* __retval136;
  this135 = v133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t137 = this135;
  char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t137);
  __retval136 = r138;
  char* t139 = __retval136;
  return t139;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v140, char* v141) {
bb142:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs143;
  char* __rhs144;
  _Bool __retval145;
  __lhs143 = v140;
  __rhs144 = v141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = __lhs143;
  unsigned long r147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t146);
  char* t148 = __rhs144;
  unsigned long r149 = std__char_traits_char___length(t148);
  _Bool c150 = ((r147 == r149)) ? 1 : 0;
  _Bool ternary151;
  if (c150) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t152 = __lhs143;
    char* r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t152);
    char* t154 = __rhs144;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = __lhs143;
    unsigned long r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t155);
    int r157 = std__char_traits_char___compare(r153, t154, r156);
    _Bool cast158 = (_Bool)r157;
    _Bool u159 = !cast158;
    ternary151 = (_Bool)u159;
  } else {
    _Bool c160 = 0;
    ternary151 = (_Bool)c160;
  }
  __retval145 = ternary151;
  _Bool t161 = __retval145;
  return t161;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v162, unsigned long v163, char* v164) {
bb165:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this166;
  unsigned long __pos167;
  char* __s168;
  unsigned long __retval169;
  this166 = v162;
  __pos167 = v163;
  __s168 = v164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = this166;
    unsigned long t171 = __pos167;
    unsigned long r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t170);
    _Bool c173 = ((t171 > r172)) ? 1 : 0;
    if (c173) {
      char* cast174 = (char*)&(_str_22);
      char* t175 = __s168;
      unsigned long t176 = __pos167;
      unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t170);
      std____throw_out_of_range_fmt(cast174, t175, t176, r177);
    }
  unsigned long t178 = __pos167;
  __retval169 = t178;
  unsigned long t179 = __retval169;
  return t179;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v180, unsigned long v181, unsigned long v182) {
bb183:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this184;
  unsigned long __pos185;
  unsigned long __off186;
  unsigned long __retval187;
  _Bool __testoff188;
  this184 = v180;
  __pos185 = v181;
  __off186 = v182;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = this184;
  unsigned long t190 = __off186;
  unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t189);
  unsigned long t192 = __pos185;
  unsigned long b193 = r191 - t192;
  _Bool c194 = ((t190 < b193)) ? 1 : 0;
  __testoff188 = c194;
  _Bool t195 = __testoff188;
  unsigned long ternary196;
  if (t195) {
    unsigned long t197 = __off186;
    ternary196 = (unsigned long)t197;
  } else {
    unsigned long r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t189);
    unsigned long t199 = __pos185;
    unsigned long b200 = r198 - t199;
    ternary196 = (unsigned long)b200;
  }
  __retval187 = ternary196;
  unsigned long t201 = __retval187;
  return t201;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v202, unsigned long v203, unsigned long v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205, unsigned long v206, unsigned long v207) {
bb208:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this209;
  unsigned long __pos1210;
  unsigned long __n1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str212;
  unsigned long __pos2213;
  unsigned long __n2214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval215;
  this209 = v202;
  __pos1210 = v203;
  __n1211 = v204;
  __str212 = v205;
  __pos2213 = v206;
  __n2214 = v207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = this209;
  unsigned long t217 = __pos1210;
  unsigned long t218 = __n1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t219 = __str212;
  char* r220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t219);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t221 = __str212;
  unsigned long t222 = __pos2213;
  char* cast223 = (char*)&(_str_21);
  unsigned long r224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t221, t222, cast223);
  char* ptr225 = &(r220)[r224];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t226 = __str212;
  unsigned long t227 = __pos2213;
  unsigned long t228 = __n2214;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t226, t227, t228);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t216, t217, t218, ptr225, r229);
  __retval215 = r230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = __retval215;
  return t231;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v232, unsigned long v233, unsigned long v234, char* v235) {
bb236:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this237;
  unsigned long __n1238;
  unsigned long __n2239;
  char* __s240;
  this237 = v232;
  __n1238 = v233;
  __n2239 = v234;
  __s240 = v235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t241 = this237;
    unsigned long r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t241);
    unsigned long r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t241);
    unsigned long t244 = __n1238;
    unsigned long b245 = r243 - t244;
    unsigned long b246 = r242 - b245;
    unsigned long t247 = __n2239;
    _Bool c248 = ((b246 < t247)) ? 1 : 0;
    if (c248) {
      char* t249 = __s240;
      std____throw_length_error(t249);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v250) {
bb251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this252;
  unsigned long __retval253;
  unsigned long __sz254;
  this252 = v250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t255 = this252;
  _Bool r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t255);
  unsigned long ternary257;
  if (r256) {
    unsigned long c258 = 15;
    ternary257 = (unsigned long)c258;
  } else {
    unsigned long t259 = t255->field2._M_allocated_capacity;
    ternary257 = (unsigned long)t259;
  }
  __sz254 = ternary257;
    unsigned long t260 = __sz254;
    unsigned long c261 = 15;
    _Bool c262 = ((t260 < c261)) ? 1 : 0;
    _Bool ternary263;
    if (c262) {
      _Bool c264 = 1;
      ternary263 = (_Bool)c264;
    } else {
      unsigned long t265 = __sz254;
      unsigned long r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t255);
      _Bool c267 = ((t265 > r266)) ? 1 : 0;
      ternary263 = (_Bool)c267;
    }
    if (ternary263) {
      __builtin_unreachable();
    }
  unsigned long t268 = __sz254;
  __retval253 = t268;
  unsigned long t269 = __retval253;
  return t269;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v270, char* v271, char* v272) {
bb273:
  struct std__less_const_char___* this274;
  char* __x275;
  char* __y276;
  _Bool __retval277;
  this274 = v270;
  __x275 = v271;
  __y276 = v272;
  struct std__less_const_char___* t278 = this274;
    _Bool r279 = std____is_constant_evaluated();
    if (r279) {
      char* t280 = __x275;
      char* t281 = __y276;
      _Bool c282 = ((t280 < t281)) ? 1 : 0;
      __retval277 = c282;
      _Bool t283 = __retval277;
      return t283;
    }
  char* t284 = __x275;
  unsigned long cast285 = (unsigned long)t284;
  char* t286 = __y276;
  unsigned long cast287 = (unsigned long)t286;
  _Bool c288 = ((cast285 < cast287)) ? 1 : 0;
  __retval277 = c288;
  _Bool t289 = __retval277;
  return t289;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v290, char* v291) {
bb292:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this293;
  char* __s294;
  _Bool __retval295;
  struct std__less_const_char___ ref_tmp0296;
  this293 = v290;
  __s294 = v291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t297 = this293;
  char* t298 = __s294;
  char* r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t297);
  _Bool r300 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0296, t298, r299);
  _Bool ternary301;
  if (r300) {
    _Bool c302 = 1;
    ternary301 = (_Bool)c302;
  } else {
    struct std__less_const_char___ ref_tmp1303;
    char* r304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t297);
    unsigned long r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t297);
    char* ptr306 = &(r304)[r305];
    char* t307 = __s294;
    _Bool r308 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1303, ptr306, t307);
    ternary301 = (_Bool)r308;
  }
  __retval295 = ternary301;
  _Bool t309 = __retval295;
  return t309;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v310, char* v311) {
bb312:
  char* __c1313;
  char* __c2314;
  __c1313 = v310;
  __c2314 = v311;
    _Bool r315 = std____is_constant_evaluated();
    if (r315) {
      char* t316 = __c1313;
      char* t317 = __c2314;
      char* r318 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t316, t317);
    } else {
      char* t319 = __c2314;
      char t320 = *t319;
      char* t321 = __c1313;
      *t321 = t320;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v322, char* v323, unsigned long v324) {
bb325:
  char* __s1326;
  char* __s2327;
  unsigned long __n328;
  char* __retval329;
  __s1326 = v322;
  __s2327 = v323;
  __n328 = v324;
    unsigned long t330 = __n328;
    unsigned long c331 = 0;
    _Bool c332 = ((t330 == c331)) ? 1 : 0;
    if (c332) {
      char* t333 = __s1326;
      __retval329 = t333;
      char* t334 = __retval329;
      return t334;
    }
    _Bool r335 = std____is_constant_evaluated();
    if (r335) {
        char* t336 = __s2327;
        char* t337 = __s1326;
        _Bool c338 = ((t336 < t337)) ? 1 : 0;
        _Bool isconst339 = 0;
        _Bool ternary340;
        if (isconst339) {
          char* t341 = __s1326;
          char* t342 = __s2327;
          _Bool c343 = ((t341 > t342)) ? 1 : 0;
          ternary340 = (_Bool)c343;
        } else {
          _Bool c344 = 0;
          ternary340 = (_Bool)c344;
        }
        _Bool ternary345;
        if (ternary340) {
          char* t346 = __s1326;
          char* t347 = __s2327;
          unsigned long t348 = __n328;
          char* ptr349 = &(t347)[t348];
          _Bool c350 = ((t346 < ptr349)) ? 1 : 0;
          ternary345 = (_Bool)c350;
        } else {
          _Bool c351 = 0;
          ternary345 = (_Bool)c351;
        }
        if (ternary345) {
            do {
                unsigned long t352 = __n328;
                unsigned long u353 = t352 - 1;
                __n328 = u353;
                unsigned long t354 = __n328;
                char* t355 = __s1326;
                char* ptr356 = &(t355)[t354];
                unsigned long t357 = __n328;
                char* t358 = __s2327;
                char* ptr359 = &(t358)[t357];
                __gnu_cxx__char_traits_char___assign_2(ptr356, ptr359);
              unsigned long t360 = __n328;
              unsigned long c361 = 0;
              _Bool c362 = ((t360 > c361)) ? 1 : 0;
              if (!c362) break;
            } while (1);
        } else {
          char* t363 = __s1326;
          char* t364 = __s2327;
          unsigned long t365 = __n328;
          char* r366 = __gnu_cxx__char_traits_char___copy(t363, t364, t365);
        }
      char* t367 = __s1326;
      __retval329 = t367;
      char* t368 = __retval329;
      return t368;
    }
  char* t369 = __s1326;
  void* cast370 = (void*)t369;
  char* t371 = __s2327;
  void* cast372 = (void*)t371;
  unsigned long t373 = __n328;
  unsigned long c374 = 1;
  unsigned long b375 = t373 * c374;
  void* r376 = memmove(cast370, cast372, b375);
  char* t377 = __s1326;
  __retval329 = t377;
  char* t378 = __retval329;
  return t378;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v379, char* v380, unsigned long v381) {
bb382:
  char* __s1383;
  char* __s2384;
  unsigned long __n385;
  char* __retval386;
  __s1383 = v379;
  __s2384 = v380;
  __n385 = v381;
    unsigned long t387 = __n385;
    unsigned long c388 = 0;
    _Bool c389 = ((t387 == c388)) ? 1 : 0;
    if (c389) {
      char* t390 = __s1383;
      __retval386 = t390;
      char* t391 = __retval386;
      return t391;
    }
    _Bool r392 = std____is_constant_evaluated();
    if (r392) {
      char* t393 = __s1383;
      char* t394 = __s2384;
      unsigned long t395 = __n385;
      char* r396 = __gnu_cxx__char_traits_char___move(t393, t394, t395);
      __retval386 = r396;
      char* t397 = __retval386;
      return t397;
    }
  char* t398 = __s1383;
  void* cast399 = (void*)t398;
  char* t400 = __s2384;
  void* cast401 = (void*)t400;
  unsigned long t402 = __n385;
  void* r403 = memmove(cast399, cast401, t402);
  char* cast404 = (char*)r403;
  __retval386 = cast404;
  char* t405 = __retval386;
  return t405;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v406, char* v407, unsigned long v408) {
bb409:
  char* __d410;
  char* __s411;
  unsigned long __n412;
  __d410 = v406;
  __s411 = v407;
  __n412 = v408;
    unsigned long t413 = __n412;
    unsigned long c414 = 1;
    _Bool c415 = ((t413 == c414)) ? 1 : 0;
    if (c415) {
      char* t416 = __d410;
      char* t417 = __s411;
      std__char_traits_char___assign_2(t416, t417);
    } else {
      char* t418 = __d410;
      char* t419 = __s411;
      unsigned long t420 = __n412;
      char* r421 = std__char_traits_char___move(t418, t419, t420);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v422, char* v423, unsigned long v424, char* v425, unsigned long v426, unsigned long v427) {
bb428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this429;
  char* __p430;
  unsigned long __len1431;
  char* __s432;
  unsigned long __len2433;
  unsigned long __how_much434;
  this429 = v422;
  __p430 = v423;
  __len1431 = v424;
  __s432 = v425;
  __len2433 = v426;
  __how_much434 = v427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t435 = this429;
    unsigned long t436 = __len2433;
    _Bool cast437 = (_Bool)t436;
    _Bool ternary438;
    if (cast437) {
      unsigned long t439 = __len2433;
      unsigned long t440 = __len1431;
      _Bool c441 = ((t439 <= t440)) ? 1 : 0;
      ternary438 = (_Bool)c441;
    } else {
      _Bool c442 = 0;
      ternary438 = (_Bool)c442;
    }
    if (ternary438) {
      char* t443 = __p430;
      char* t444 = __s432;
      unsigned long t445 = __len2433;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t443, t444, t445);
    }
    unsigned long t446 = __how_much434;
    _Bool cast447 = (_Bool)t446;
    _Bool ternary448;
    if (cast447) {
      unsigned long t449 = __len1431;
      unsigned long t450 = __len2433;
      _Bool c451 = ((t449 != t450)) ? 1 : 0;
      ternary448 = (_Bool)c451;
    } else {
      _Bool c452 = 0;
      ternary448 = (_Bool)c452;
    }
    if (ternary448) {
      char* t453 = __p430;
      unsigned long t454 = __len2433;
      char* ptr455 = &(t453)[t454];
      char* t456 = __p430;
      unsigned long t457 = __len1431;
      char* ptr458 = &(t456)[t457];
      unsigned long t459 = __how_much434;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr455, ptr458, t459);
    }
    unsigned long t460 = __len2433;
    unsigned long t461 = __len1431;
    _Bool c462 = ((t460 > t461)) ? 1 : 0;
    if (c462) {
        char* t463 = __s432;
        unsigned long t464 = __len2433;
        char* ptr465 = &(t463)[t464];
        char* t466 = __p430;
        unsigned long t467 = __len1431;
        char* ptr468 = &(t466)[t467];
        _Bool c469 = ((ptr465 <= ptr468)) ? 1 : 0;
        if (c469) {
          char* t470 = __p430;
          char* t471 = __s432;
          unsigned long t472 = __len2433;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t470, t471, t472);
        } else {
            char* t473 = __s432;
            char* t474 = __p430;
            unsigned long t475 = __len1431;
            char* ptr476 = &(t474)[t475];
            _Bool c477 = ((t473 >= ptr476)) ? 1 : 0;
            if (c477) {
              unsigned long __poff478;
              char* t479 = __s432;
              char* t480 = __p430;
              long diff481 = t479 - t480;
              unsigned long cast482 = (unsigned long)diff481;
              unsigned long t483 = __len2433;
              unsigned long t484 = __len1431;
              unsigned long b485 = t483 - t484;
              unsigned long b486 = cast482 + b485;
              __poff478 = b486;
              char* t487 = __p430;
              char* t488 = __p430;
              unsigned long t489 = __poff478;
              char* ptr490 = &(t488)[t489];
              unsigned long t491 = __len2433;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t487, ptr490, t491);
            } else {
              unsigned long __nleft492;
              char* t493 = __p430;
              unsigned long t494 = __len1431;
              char* ptr495 = &(t493)[t494];
              char* t496 = __s432;
              long diff497 = ptr495 - t496;
              unsigned long cast498 = (unsigned long)diff497;
              __nleft492 = cast498;
              char* t499 = __p430;
              char* t500 = __s432;
              unsigned long t501 = __nleft492;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t499, t500, t501);
              char* t502 = __p430;
              unsigned long t503 = __nleft492;
              char* ptr504 = &(t502)[t503];
              char* t505 = __p430;
              unsigned long t506 = __len2433;
              char* ptr507 = &(t505)[t506];
              unsigned long t508 = __len2433;
              unsigned long t509 = __nleft492;
              unsigned long b510 = t508 - t509;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr504, ptr507, b510);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v511, unsigned long v512, unsigned long v513, char* v514, unsigned long v515) {
bb516:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this517;
  unsigned long __pos518;
  unsigned long __len1519;
  char* __s520;
  unsigned long __len2521;
  unsigned long __how_much522;
  unsigned long __new_capacity523;
  char* __r524;
  this517 = v511;
  __pos518 = v512;
  __len1519 = v513;
  __s520 = v514;
  __len2521 = v515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = this517;
  unsigned long r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t525);
  unsigned long t527 = __pos518;
  unsigned long b528 = r526 - t527;
  unsigned long t529 = __len1519;
  unsigned long b530 = b528 - t529;
  __how_much522 = b530;
  unsigned long r531 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t525);
  unsigned long t532 = __len2521;
  unsigned long b533 = r531 + t532;
  unsigned long t534 = __len1519;
  unsigned long b535 = b533 - t534;
  __new_capacity523 = b535;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t525);
  char* r537 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t525, &__new_capacity523, r536);
  __r524 = r537;
    unsigned long t538 = __pos518;
    _Bool cast539 = (_Bool)t538;
    if (cast539) {
      char* t540 = __r524;
      char* r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
      unsigned long t542 = __pos518;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t540, r541, t542);
    }
    char* t543 = __s520;
    _Bool cast544 = (_Bool)t543;
    _Bool ternary545;
    if (cast544) {
      unsigned long t546 = __len2521;
      _Bool cast547 = (_Bool)t546;
      ternary545 = (_Bool)cast547;
    } else {
      _Bool c548 = 0;
      ternary545 = (_Bool)c548;
    }
    if (ternary545) {
      char* t549 = __r524;
      unsigned long t550 = __pos518;
      char* ptr551 = &(t549)[t550];
      char* t552 = __s520;
      unsigned long t553 = __len2521;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr551, t552, t553);
    }
    unsigned long t554 = __how_much522;
    _Bool cast555 = (_Bool)t554;
    if (cast555) {
      char* t556 = __r524;
      unsigned long t557 = __pos518;
      char* ptr558 = &(t556)[t557];
      unsigned long t559 = __len2521;
      char* ptr560 = &(ptr558)[t559];
      char* r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
      unsigned long t562 = __pos518;
      char* ptr563 = &(r561)[t562];
      unsigned long t564 = __len1519;
      char* ptr565 = &(ptr563)[t564];
      unsigned long t566 = __how_much522;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr560, ptr565, t566);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t525);
  char* t567 = __r524;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t525, t567);
  unsigned long t568 = __new_capacity523;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t525, t568);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v569, unsigned long v570, unsigned long v571, char* v572, unsigned long v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  unsigned long __pos576;
  unsigned long __len1577;
  char* __s578;
  unsigned long __len2579;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval580;
  unsigned long __old_size581;
  unsigned long __new_size582;
  this575 = v569;
  __pos576 = v570;
  __len1577 = v571;
  __s578 = v572;
  __len2579 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t583 = this575;
  unsigned long t584 = __len1577;
  unsigned long t585 = __len2579;
  char* cast586 = (char*)&(_str_23);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t583, t584, t585, cast586);
  unsigned long r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t583);
  __old_size581 = r587;
  unsigned long t588 = __old_size581;
  unsigned long t589 = __len2579;
  unsigned long b590 = t588 + t589;
  unsigned long t591 = __len1577;
  unsigned long b592 = b590 - t591;
  __new_size582 = b592;
    unsigned long t593 = __new_size582;
    unsigned long r594 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t583);
    _Bool c595 = ((t593 <= r594)) ? 1 : 0;
    if (c595) {
      char* __p596;
      unsigned long __how_much597;
      char* r598 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
      unsigned long t599 = __pos576;
      char* ptr600 = &(r598)[t599];
      __p596 = ptr600;
      unsigned long t601 = __old_size581;
      unsigned long t602 = __pos576;
      unsigned long b603 = t601 - t602;
      unsigned long t604 = __len1577;
      unsigned long b605 = b603 - t604;
      __how_much597 = b605;
        _Bool r606 = std__is_constant_evaluated();
        if (r606) {
          char* __newp607;
          struct std__allocator_char_* r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t583);
          unsigned long t609 = __new_size582;
          char* r610 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r608, t609);
          __newp607 = r610;
          char* t611 = __newp607;
          char* r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
          unsigned long t613 = __pos576;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t611, r612, t613);
          char* t614 = __newp607;
          unsigned long t615 = __pos576;
          char* ptr616 = &(t614)[t615];
          char* t617 = __s578;
          unsigned long t618 = __len2579;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr616, t617, t618);
          char* t619 = __newp607;
          unsigned long t620 = __pos576;
          char* ptr621 = &(t619)[t620];
          unsigned long t622 = __len2579;
          char* ptr623 = &(ptr621)[t622];
          char* t624 = __p596;
          unsigned long t625 = __len1577;
          char* ptr626 = &(t624)[t625];
          unsigned long t627 = __how_much597;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr623, ptr626, t627);
          char* r628 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
          char* t629 = __newp607;
          unsigned long t630 = __new_size582;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r628, t629, t630);
          struct std__allocator_char_* r631 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t583);
          char* t632 = __newp607;
          unsigned long t633 = __new_size582;
          std__allocator_char___deallocate(r631, t632, t633);
        } else {
            char* t634 = __s578;
            _Bool r635 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t583, t634);
            if (r635) {
                unsigned long t636 = __how_much597;
                _Bool cast637 = (_Bool)t636;
                _Bool ternary638;
                if (cast637) {
                  unsigned long t639 = __len1577;
                  unsigned long t640 = __len2579;
                  _Bool c641 = ((t639 != t640)) ? 1 : 0;
                  ternary638 = (_Bool)c641;
                } else {
                  _Bool c642 = 0;
                  ternary638 = (_Bool)c642;
                }
                if (ternary638) {
                  char* t643 = __p596;
                  unsigned long t644 = __len2579;
                  char* ptr645 = &(t643)[t644];
                  char* t646 = __p596;
                  unsigned long t647 = __len1577;
                  char* ptr648 = &(t646)[t647];
                  unsigned long t649 = __how_much597;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr645, ptr648, t649);
                }
                unsigned long t650 = __len2579;
                _Bool cast651 = (_Bool)t650;
                if (cast651) {
                  char* t652 = __p596;
                  char* t653 = __s578;
                  unsigned long t654 = __len2579;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t652, t653, t654);
                }
            } else {
              char* t655 = __p596;
              unsigned long t656 = __len1577;
              char* t657 = __s578;
              unsigned long t658 = __len2579;
              unsigned long t659 = __how_much597;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t583, t655, t656, t657, t658, t659);
            }
        }
    } else {
      unsigned long t660 = __pos576;
      unsigned long t661 = __len1577;
      char* t662 = __s578;
      unsigned long t663 = __len2579;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t583, t660, t661, t662, t663);
    }
  unsigned long t664 = __new_size582;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t583, t664);
  __retval580 = t583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = __retval580;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __n1674;
  char* __s675;
  unsigned long __n2676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval677;
  this672 = v666;
  __pos673 = v667;
  __n1674 = v668;
  __s675 = v669;
  __n2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this672;
  unsigned long t679 = __pos673;
  char* cast680 = (char*)&(_str_21);
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t678, t679, cast680);
  unsigned long t682 = __pos673;
  unsigned long t683 = __n1674;
  unsigned long r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t678, t682, t683);
  char* t685 = __s675;
  unsigned long t686 = __n2676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t678, r681, r684, t685, t686);
  __retval677 = r687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __retval677;
  return t688;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long v690, unsigned long v691, char* v692) {
bb693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this694;
  unsigned long __pos695;
  unsigned long __n1696;
  char* __s697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval698;
  this694 = v689;
  __pos695 = v690;
  __n1696 = v691;
  __s697 = v692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t699 = this694;
  unsigned long t700 = __pos695;
  unsigned long t701 = __n1696;
  char* t702 = __s697;
  char* t703 = __s697;
  unsigned long r704 = std__char_traits_char___length(t703);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t699, t700, t701, t702, r704);
  __retval698 = r705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t706 = __retval698;
  return t706;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v707, char* v708) {
bb709:
  char* __location710;
  char* __args711;
  char* __retval712;
  void* __loc713;
  __location710 = v707;
  __args711 = v708;
  char* t714 = __location710;
  void* cast715 = (void*)t714;
  __loc713 = cast715;
    void* t716 = __loc713;
    char* cast717 = (char*)t716;
    char* t718 = __args711;
    char t719 = *t718;
    *cast717 = t719;
    __retval712 = cast717;
    char* t720 = __retval712;
    return t720;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v721, unsigned long v722, char v723) {
bb724:
  char* __s725;
  unsigned long __n726;
  char __a727;
  char* __retval728;
  __s725 = v721;
  __n726 = v722;
  __a727 = v723;
    _Bool r729 = std____is_constant_evaluated();
    if (r729) {
        unsigned long __i730;
        unsigned long c731 = 0;
        __i730 = c731;
        while (1) {
          unsigned long t733 = __i730;
          unsigned long t734 = __n726;
          _Bool c735 = ((t733 < t734)) ? 1 : 0;
          if (!c735) break;
          char* t736 = __s725;
          unsigned long t737 = __i730;
          char* ptr738 = &(t736)[t737];
          char* r739 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr738, &__a727);
        for_step732: ;
          unsigned long t740 = __i730;
          unsigned long u741 = t740 + 1;
          __i730 = u741;
        }
      char* t742 = __s725;
      __retval728 = t742;
      char* t743 = __retval728;
      return t743;
    }
      unsigned long t744 = __n726;
      _Bool cast745 = (_Bool)t744;
      if (cast745) {
        unsigned char __c746;
        void* cast747 = (void*)&(__c746);
        void* cast748 = (void*)&(__a727);
        unsigned long c749 = 1;
        void* r750 = memcpy(cast747, cast748, c749);
        char* t751 = __s725;
        void* cast752 = (void*)t751;
        unsigned char t753 = __c746;
        int cast754 = (int)t753;
        unsigned long t755 = __n726;
        void* r756 = memset(cast752, cast754, t755);
      }
  char* t757 = __s725;
  __retval728 = t757;
  char* t758 = __retval728;
  return t758;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v759, unsigned long v760, char v761) {
bb762:
  char* __s763;
  unsigned long __n764;
  char __a765;
  char* __retval766;
  __s763 = v759;
  __n764 = v760;
  __a765 = v761;
    unsigned long t767 = __n764;
    unsigned long c768 = 0;
    _Bool c769 = ((t767 == c768)) ? 1 : 0;
    if (c769) {
      char* t770 = __s763;
      __retval766 = t770;
      char* t771 = __retval766;
      return t771;
    }
    _Bool r772 = std____is_constant_evaluated();
    if (r772) {
      char* t773 = __s763;
      unsigned long t774 = __n764;
      char t775 = __a765;
      char* r776 = __gnu_cxx__char_traits_char___assign(t773, t774, t775);
      __retval766 = r776;
      char* t777 = __retval766;
      return t777;
    }
  char* t778 = __s763;
  void* cast779 = (void*)t778;
  char t780 = __a765;
  int cast781 = (int)t780;
  unsigned long t782 = __n764;
  void* r783 = memset(cast779, cast781, t782);
  char* cast784 = (char*)r783;
  __retval766 = cast784;
  char* t785 = __retval766;
  return t785;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v786, unsigned long v787, char v788) {
bb789:
  char* __d790;
  unsigned long __n791;
  char __c792;
  __d790 = v786;
  __n791 = v787;
  __c792 = v788;
    unsigned long t793 = __n791;
    unsigned long c794 = 1;
    _Bool c795 = ((t793 == c794)) ? 1 : 0;
    if (c795) {
      char* t796 = __d790;
      std__char_traits_char___assign_2(t796, &__c792);
    } else {
      char* t797 = __d790;
      unsigned long t798 = __n791;
      char t799 = __c792;
      char* r800 = std__char_traits_char___assign(t797, t798, t799);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v801, unsigned long v802, unsigned long v803, unsigned long v804, char v805) {
bb806:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this807;
  unsigned long __pos1808;
  unsigned long __n1809;
  unsigned long __n2810;
  char __c811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval812;
  unsigned long __old_size813;
  unsigned long __new_size814;
  this807 = v801;
  __pos1808 = v802;
  __n1809 = v803;
  __n2810 = v804;
  __c811 = v805;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t815 = this807;
  unsigned long t816 = __n1809;
  unsigned long t817 = __n2810;
  char* cast818 = (char*)&(_str_24);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t815, t816, t817, cast818);
  unsigned long r819 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t815);
  __old_size813 = r819;
  unsigned long t820 = __old_size813;
  unsigned long t821 = __n2810;
  unsigned long b822 = t820 + t821;
  unsigned long t823 = __n1809;
  unsigned long b824 = b822 - t823;
  __new_size814 = b824;
    unsigned long t825 = __new_size814;
    unsigned long r826 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t815);
    _Bool c827 = ((t825 <= r826)) ? 1 : 0;
    if (c827) {
      char* __p828;
      unsigned long __how_much829;
      char* r830 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t815);
      unsigned long t831 = __pos1808;
      char* ptr832 = &(r830)[t831];
      __p828 = ptr832;
      unsigned long t833 = __old_size813;
      unsigned long t834 = __pos1808;
      unsigned long b835 = t833 - t834;
      unsigned long t836 = __n1809;
      unsigned long b837 = b835 - t836;
      __how_much829 = b837;
        unsigned long t838 = __how_much829;
        _Bool cast839 = (_Bool)t838;
        _Bool ternary840;
        if (cast839) {
          unsigned long t841 = __n1809;
          unsigned long t842 = __n2810;
          _Bool c843 = ((t841 != t842)) ? 1 : 0;
          ternary840 = (_Bool)c843;
        } else {
          _Bool c844 = 0;
          ternary840 = (_Bool)c844;
        }
        if (ternary840) {
          char* t845 = __p828;
          unsigned long t846 = __n2810;
          char* ptr847 = &(t845)[t846];
          char* t848 = __p828;
          unsigned long t849 = __n1809;
          char* ptr850 = &(t848)[t849];
          unsigned long t851 = __how_much829;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr847, ptr850, t851);
        }
    } else {
      unsigned long t852 = __pos1808;
      unsigned long t853 = __n1809;
      char* c854 = ((void*)0);
      unsigned long t855 = __n2810;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t815, t852, t853, c854, t855);
    }
    unsigned long t856 = __n2810;
    _Bool cast857 = (_Bool)t856;
    if (cast857) {
      char* r858 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t815);
      unsigned long t859 = __pos1808;
      char* ptr860 = &(r858)[t859];
      unsigned long t861 = __n2810;
      char t862 = __c811;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr860, t861, t862);
    }
  unsigned long t863 = __new_size814;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t815, t863);
  __retval812 = t815;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t864 = __retval812;
  return t864;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v865, unsigned long v866, unsigned long v867, unsigned long v868, char v869) {
bb870:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this871;
  unsigned long __pos872;
  unsigned long __n1873;
  unsigned long __n2874;
  char __c875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval876;
  this871 = v865;
  __pos872 = v866;
  __n1873 = v867;
  __n2874 = v868;
  __c875 = v869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = this871;
  unsigned long t878 = __pos872;
  char* cast879 = (char*)&(_str_21);
  unsigned long r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t877, t878, cast879);
  unsigned long t881 = __pos872;
  unsigned long t882 = __n1873;
  unsigned long r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t877, t881, t882);
  unsigned long t884 = __n2874;
  char t885 = __c875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r886 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t877, r880, r883, t884, t885);
  __retval876 = r886;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t887 = __retval876;
  return t887;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v888, char** v889) {
bb890:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this891;
  char** __i892;
  this891 = v888;
  __i892 = v889;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t893 = this891;
  char** t894 = __i892;
  char* t895 = *t894;
  t893->_M_current = t895;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v896) {
bb897:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this898;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval899;
  char* ref_tmp0900;
  this898 = v896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t901 = this898;
  char* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t901);
  ref_tmp0900 = r902;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval899, &ref_tmp0900);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t903 = __retval899;
  return t903;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v904) {
bb905:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this906;
  char** __retval907;
  this906 = v904;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t908 = this906;
  __retval907 = &t908->_M_current;
  char** t909 = __retval907;
  return t909;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v910) {
bb911:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this912;
  char** __retval913;
  this912 = v910;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t914 = this912;
  __retval913 = &t914->_M_current;
  char** t915 = __retval913;
  return t915;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v916, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v917) {
bb918:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs919;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs920;
  long __retval921;
  __lhs919 = v916;
  __rhs920 = v917;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t922 = __lhs919;
  char** r923 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t922);
  char* t924 = *r923;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t925 = __rhs920;
  char** r926 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t925);
  char* t927 = *r926;
  long diff928 = t924 - t927;
  __retval921 = diff928;
  long t929 = __retval921;
  return t929;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v930, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v931) {
bb932:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs933;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs934;
  long __retval935;
  __lhs933 = v930;
  __rhs934 = v931;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t936 = __lhs933;
  char** r937 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t936);
  char* t938 = *r937;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t939 = __rhs934;
  char** r940 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t939);
  char* t941 = *r940;
  long diff942 = t938 - t941;
  __retval935 = diff942;
  long t943 = __retval935;
  return t943;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_S8_m
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v944, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v945, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v946, char* v947, unsigned long v948) {
bb949:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this950;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1951;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2952;
  char* __s953;
  unsigned long __n954;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval955;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0956;
  this950 = v944;
  __i1951 = v945;
  __i2952 = v946;
  __s953 = v947;
  __n954 = v948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t957 = this950;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t957);
  ref_tmp0956 = r958;
  long r959 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i1951, &ref_tmp0956);
  unsigned long cast960 = (unsigned long)r959;
  long r961 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i2952, &__i1951);
  unsigned long cast962 = (unsigned long)r961;
  char* t963 = __s953;
  unsigned long t964 = __n954;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r965 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t957, cast960, cast962, t963, t964);
  __retval955 = r965;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t966 = __retval955;
  return t966;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_RKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v967, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v968, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v969, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v970) {
bb971:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this972;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1973;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str975;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval976;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0977;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1978;
  this972 = v967;
  __i1973 = v968;
  __i2974 = v969;
  __str975 = v970;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t979 = this972;
  agg_tmp0977 = __i1973; // copy
  agg_tmp1978 = __i2974; // copy
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t980 = __str975;
  char* r981 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t980);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t982 = __str975;
  unsigned long r983 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t982);
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t984 = agg_tmp0977;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t985 = agg_tmp1978;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t979, t984, t985, r981, r983);
  __retval976 = r986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t987 = __retval976;
  return t987;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v988, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v989) {
bb990:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this991;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i992;
  this991 = v988;
  __i992 = v989;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t993 = this991;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t994 = __i992;
  char** r995 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t994);
  char* t996 = *r995;
  t993->_M_current = t996;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v997) {
bb998:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this999;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1000;
  char* ref_tmp01001;
  this999 = v997;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1002 = this999;
  char* r1003 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1002);
  unsigned long r1004 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1002);
  char* ptr1005 = &(r1003)[r1004];
  ref_tmp01001 = ptr1005;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1000, &ref_tmp01001);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1006 = __retval1000;
  return t1006;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1007, long v1008) {
bb1009:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this1010;
  long __n1011;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1012;
  char* ref_tmp01013;
  this1010 = v1007;
  __n1011 = v1008;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1014 = this1010;
  char* t1015 = t1014->_M_current;
  long t1016 = __n1011;
  long u1017 = -t1016;
  char* ptr1018 = &(t1015)[u1017];
  ref_tmp01013 = ptr1018;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1012, &ref_tmp01013);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1019 = __retval1012;
  return t1019;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1020, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1021) {
bb1022:
  struct std__basic_ostream_char__std__char_traits_char__* __os1023;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1024;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1025;
  __os1023 = v1020;
  __str1024 = v1021;
  struct std__basic_ostream_char__std__char_traits_char__* t1026 = __os1023;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1027 = __str1024;
  char* r1028 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1027);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1029 = __str1024;
  unsigned long r1030 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1029);
  long cast1031 = (long)r1030;
  struct std__basic_ostream_char__std__char_traits_char__* r1032 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1026, r1028, cast1031);
  __retval1025 = r1032;
  struct std__basic_ostream_char__std__char_traits_char__* t1033 = __retval1025;
  return t1033;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1034, void* v1035) {
bb1036:
  struct std__basic_ostream_char__std__char_traits_char__* this1037;
  void* __pf1038;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1039;
  this1037 = v1034;
  __pf1038 = v1035;
  struct std__basic_ostream_char__std__char_traits_char__* t1040 = this1037;
  void* t1041 = __pf1038;
  struct std__basic_ostream_char__std__char_traits_char__* r1042 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1041)(t1040);
  __retval1039 = r1042;
  struct std__basic_ostream_char__std__char_traits_char__* t1043 = __retval1039;
  return t1043;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1044) {
bb1045:
  struct std__basic_ostream_char__std__char_traits_char__* __os1046;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1047;
  __os1046 = v1044;
  struct std__basic_ostream_char__std__char_traits_char__* t1048 = __os1046;
  struct std__basic_ostream_char__std__char_traits_char__* r1049 = std__ostream__flush(t1048);
  __retval1047 = r1049;
  struct std__basic_ostream_char__std__char_traits_char__* t1050 = __retval1047;
  return t1050;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1051) {
bb1052:
  struct std__ctype_char_* __f1053;
  struct std__ctype_char_* __retval1054;
  __f1053 = v1051;
    struct std__ctype_char_* t1055 = __f1053;
    _Bool cast1056 = (_Bool)t1055;
    _Bool u1057 = !cast1056;
    if (u1057) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1058 = __f1053;
  __retval1054 = t1058;
  struct std__ctype_char_* t1059 = __retval1054;
  return t1059;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1060, char v1061) {
bb1062:
  struct std__ctype_char_* this1063;
  char __c1064;
  char __retval1065;
  this1063 = v1060;
  __c1064 = v1061;
  struct std__ctype_char_* t1066 = this1063;
    char t1067 = t1066->_M_widen_ok;
    _Bool cast1068 = (_Bool)t1067;
    if (cast1068) {
      char t1069 = __c1064;
      unsigned char cast1070 = (unsigned char)t1069;
      unsigned long cast1071 = (unsigned long)cast1070;
      char t1072 = t1066->_M_widen[cast1071];
      __retval1065 = t1072;
      char t1073 = __retval1065;
      return t1073;
    }
  std__ctype_char____M_widen_init___const(t1066);
  char t1074 = __c1064;
  void** v1075 = (void**)t1066;
  void* v1076 = *((void**)v1075);
  char vcall1079 = (char)__VERIFIER_virtual_call_char_char(t1066, 6, t1074);
  __retval1065 = vcall1079;
  char t1080 = __retval1065;
  return t1080;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1081, char v1082) {
bb1083:
  struct std__basic_ios_char__std__char_traits_char__* this1084;
  char __c1085;
  char __retval1086;
  this1084 = v1081;
  __c1085 = v1082;
  struct std__basic_ios_char__std__char_traits_char__* t1087 = this1084;
  struct std__ctype_char_* t1088 = t1087->_M_ctype;
  struct std__ctype_char_* r1089 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1088);
  char t1090 = __c1085;
  char r1091 = std__ctype_char___widen_char__const(r1089, t1090);
  __retval1086 = r1091;
  char t1092 = __retval1086;
  return t1092;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1093) {
bb1094:
  struct std__basic_ostream_char__std__char_traits_char__* __os1095;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1096;
  __os1095 = v1093;
  struct std__basic_ostream_char__std__char_traits_char__* t1097 = __os1095;
  struct std__basic_ostream_char__std__char_traits_char__* t1098 = __os1095;
  void** v1099 = (void**)t1098;
  void* v1100 = *((void**)v1099);
  unsigned char* cast1101 = (unsigned char*)v1100;
  long c1102 = -24;
  unsigned char* ptr1103 = &(cast1101)[c1102];
  long* cast1104 = (long*)ptr1103;
  long t1105 = *cast1104;
  unsigned char* cast1106 = (unsigned char*)t1098;
  unsigned char* ptr1107 = &(cast1106)[t1105];
  struct std__basic_ostream_char__std__char_traits_char__* cast1108 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1107;
  struct std__basic_ios_char__std__char_traits_char__* cast1109 = (struct std__basic_ios_char__std__char_traits_char__*)cast1108;
  char c1110 = 10;
  char r1111 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1109, c1110);
  struct std__basic_ostream_char__std__char_traits_char__* r1112 = std__ostream__put(t1097, r1111);
  struct std__basic_ostream_char__std__char_traits_char__* r1113 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1112);
  __retval1096 = r1113;
  struct std__basic_ostream_char__std__char_traits_char__* t1114 = __retval1096;
  return t1114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1115) {
bb1116:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1117;
  this1117 = v1115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1118 = this1117;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1118);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1119:
  int __retval1120;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base1121;
  struct std__allocator_char_ ref_tmp01122;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21123;
  struct std__allocator_char_ ref_tmp11124;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31125;
  struct std__allocator_char_ ref_tmp21126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str41127;
  struct std__allocator_char_ ref_tmp31128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1130;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01131;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11132;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41133;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51134;
  int c1135 = 0;
  __retval1120 = c1135;
  char* cast1136 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01122);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base1121, cast1136, &ref_tmp01122);
  {
    std__allocator_char____allocator(&ref_tmp01122);
  }
    char* cast1137 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11124);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21123, cast1137, &ref_tmp11124);
    {
      std__allocator_char____allocator(&ref_tmp11124);
    }
      char* cast1138 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21126);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31125, cast1138, &ref_tmp21126);
      {
        std__allocator_char____allocator(&ref_tmp21126);
      }
        char* cast1139 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp31128);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str41127, cast1139, &ref_tmp31128);
        {
          std__allocator_char____allocator(&ref_tmp31128);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str1129, &base1121);
            unsigned long c1140 = 9;
            unsigned long c1141 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(&str1129, c1140, c1141, &str21123);
            char* cast1143 = (char*)&(_str_4);
            _Bool r1144 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1129, cast1143);
            _Bool u1145 = !r1144;
            if (u1145) {
            } else {
              char* cast1146 = (char*)&(_str_5);
              char* c1147 = _str_6;
              unsigned int c1148 = 26;
              char* cast1149 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1146, c1147, c1148, cast1149);
            }
            unsigned long c1150 = 19;
            unsigned long c1151 = 6;
            unsigned long c1152 = 7;
            unsigned long c1153 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(&str1129, c1150, c1151, &str31125, c1152, c1153);
            char* cast1155 = (char*)&(_str_7);
            _Bool r1156 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1129, cast1155);
            _Bool u1157 = !r1156;
            if (u1157) {
            } else {
              char* cast1158 = (char*)&(_str_8);
              char* c1159 = _str_6;
              unsigned int c1160 = 29;
              char* cast1161 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1158, c1159, c1160, cast1161);
            }
            unsigned long c1162 = 8;
            unsigned long c1163 = 10;
            char* cast1164 = (char*)&(_str_9);
            unsigned long c1165 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1166 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(&str1129, c1162, c1163, cast1164, c1165);
            char* cast1167 = (char*)&(_str_10);
            _Bool r1168 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1129, cast1167);
            _Bool u1169 = !r1168;
            if (u1169) {
            } else {
              char* cast1170 = (char*)&(_str_11);
              char* c1171 = _str_6;
              unsigned int c1172 = 32;
              char* cast1173 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1170, c1171, c1172, cast1173);
            }
            unsigned long c1174 = 8;
            unsigned long c1175 = 6;
            char* cast1176 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str1129, c1174, c1175, cast1176);
            char* cast1178 = (char*)&(_str_13);
            _Bool r1179 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1129, cast1178);
            _Bool u1180 = !r1179;
            if (u1180) {
            } else {
              char* cast1181 = (char*)&(_str_14);
              char* c1182 = _str_6;
              unsigned int c1183 = 35;
              char* cast1184 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1181, c1182, c1183, cast1184);
            }
            unsigned long c1185 = 22;
            unsigned long c1186 = 1;
            unsigned long c1187 = 3;
            char c1188 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(&str1129, c1185, c1186, c1187, c1188);
            char* cast1190 = (char*)&(_str_15);
            _Bool r1191 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1129, cast1190);
            _Bool u1192 = !r1191;
            if (u1192) {
            } else {
              char* cast1193 = (char*)&(_str_16);
              char* c1194 = _str_6;
              unsigned int c1195 = 38;
              char* cast1196 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1193, c1194, c1195, cast1196);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1129);
            it1130 = r1197;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01131, &it1130);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1129);
            ref_tmp51134 = r1198;
            long c1199 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1200 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51134, c1199);
            ref_tmp41133 = r1200;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp11132, &ref_tmp41133);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1201 = agg_tmp01131;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1202 = agg_tmp11132;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str1129, t1201, t1202, &str31125);
            char* cast1204 = (char*)&(_str_17);
            _Bool r1205 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1129, cast1204);
            _Bool u1206 = !r1205;
            if (u1206) {
            } else {
              char* cast1207 = (char*)&(_str_18);
              char* c1208 = _str_6;
              unsigned int c1209 = 43;
              char* cast1210 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1207, c1208, c1209, cast1210);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1211 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1129);
            struct std__basic_ostream_char__std__char_traits_char__* r1212 = std__ostream__operator___std__ostream_____(r1211, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1213 = 0;
            __retval1120 = c1213;
            int t1214 = __retval1120;
            int ret_val1215 = t1214;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1129);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str41127);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31125);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21123);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base1121);
            }
            return ret_val1215;
  int t1216 = __retval1120;
  return t1216;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1217) {
bb1218:
  struct std____new_allocator_char_* this1219;
  this1219 = v1217;
  struct std____new_allocator_char_* t1220 = this1219;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1221) {
bb1222:
  char* __r1223;
  char* __retval1224;
  __r1223 = v1221;
  char* t1225 = __r1223;
  __retval1224 = t1225;
  char* t1226 = __retval1224;
  return t1226;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1227) {
bb1228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1229;
  char* __retval1230;
  this1229 = v1227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1231 = this1229;
  char* cast1232 = (char*)&(t1231->field2._M_local_buf);
  char* r1233 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1232);
  __retval1230 = r1233;
  char* t1234 = __retval1230;
  return t1234;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1235, char* v1236, struct std__allocator_char_* v1237) {
bb1238:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1239;
  char* __dat1240;
  struct std__allocator_char_* __a1241;
  this1239 = v1235;
  __dat1240 = v1236;
  __a1241 = v1237;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1242 = this1239;
  struct std__allocator_char_* base1243 = (struct std__allocator_char_*)((char *)t1242 + 0);
  struct std__allocator_char_* t1244 = __a1241;
  std__allocator_char___allocator(base1243, t1244);
    char* t1245 = __dat1240;
    t1242->_M_p = t1245;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1246:
  _Bool __retval1247;
    _Bool c1248 = 0;
    __retval1247 = c1248;
    _Bool t1249 = __retval1247;
    return t1249;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1250, char* v1251) {
bb1252:
  char* __c11253;
  char* __c21254;
  _Bool __retval1255;
  __c11253 = v1250;
  __c21254 = v1251;
  char* t1256 = __c11253;
  char t1257 = *t1256;
  int cast1258 = (int)t1257;
  char* t1259 = __c21254;
  char t1260 = *t1259;
  int cast1261 = (int)t1260;
  _Bool c1262 = ((cast1258 == cast1261)) ? 1 : 0;
  __retval1255 = c1262;
  _Bool t1263 = __retval1255;
  return t1263;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1264) {
bb1265:
  char* __p1266;
  unsigned long __retval1267;
  unsigned long __i1268;
  __p1266 = v1264;
  unsigned long c1269 = 0;
  __i1268 = c1269;
    char ref_tmp01270;
    while (1) {
      unsigned long t1271 = __i1268;
      char* t1272 = __p1266;
      char* ptr1273 = &(t1272)[t1271];
      char c1274 = 0;
      ref_tmp01270 = c1274;
      _Bool r1275 = __gnu_cxx__char_traits_char___eq(ptr1273, &ref_tmp01270);
      _Bool u1276 = !r1275;
      if (!u1276) break;
      unsigned long t1277 = __i1268;
      unsigned long u1278 = t1277 + 1;
      __i1268 = u1278;
    }
  unsigned long t1279 = __i1268;
  __retval1267 = t1279;
  unsigned long t1280 = __retval1267;
  return t1280;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1281) {
bb1282:
  char* __s1283;
  unsigned long __retval1284;
  __s1283 = v1281;
    _Bool r1285 = std____is_constant_evaluated();
    if (r1285) {
      char* t1286 = __s1283;
      unsigned long r1287 = __gnu_cxx__char_traits_char___length(t1286);
      __retval1284 = r1287;
      unsigned long t1288 = __retval1284;
      return t1288;
    }
  char* t1289 = __s1283;
  unsigned long r1290 = strlen(t1289);
  __retval1284 = r1290;
  unsigned long t1291 = __retval1284;
  return t1291;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1292, char* v1293, struct std__random_access_iterator_tag v1294) {
bb1295:
  char* __first1296;
  char* __last1297;
  struct std__random_access_iterator_tag unnamed1298;
  long __retval1299;
  __first1296 = v1292;
  __last1297 = v1293;
  unnamed1298 = v1294;
  char* t1300 = __last1297;
  char* t1301 = __first1296;
  long diff1302 = t1300 - t1301;
  __retval1299 = diff1302;
  long t1303 = __retval1299;
  return t1303;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1304) {
bb1305:
  char** unnamed1306;
  struct std__random_access_iterator_tag __retval1307;
  unnamed1306 = v1304;
  struct std__random_access_iterator_tag t1308 = __retval1307;
  return t1308;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1309, char* v1310) {
bb1311:
  char* __first1312;
  char* __last1313;
  long __retval1314;
  struct std__random_access_iterator_tag agg_tmp01315;
  __first1312 = v1309;
  __last1313 = v1310;
  char* t1316 = __first1312;
  char* t1317 = __last1313;
  struct std__random_access_iterator_tag r1318 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1312);
  agg_tmp01315 = r1318;
  struct std__random_access_iterator_tag t1319 = agg_tmp01315;
  long r1320 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1316, t1317, t1319);
  __retval1314 = r1320;
  long t1321 = __retval1314;
  return t1321;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1322, char* v1323) {
bb1324:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1325;
  char* __p1326;
  this1325 = v1322;
  __p1326 = v1323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1327 = this1325;
  char* t1328 = __p1326;
  t1327->_M_dataplus._M_p = t1328;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1329) {
bb1330:
  struct std__allocator_char_* __a1331;
  unsigned long __retval1332;
  __a1331 = v1329;
  unsigned long c1333 = -1;
  unsigned long c1334 = 1;
  unsigned long b1335 = c1333 / c1334;
  __retval1332 = b1335;
  unsigned long t1336 = __retval1332;
  return t1336;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1337) {
bb1338:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1339;
  struct std__allocator_char_* __retval1340;
  this1339 = v1337;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1341 = this1339;
  struct std__allocator_char_* base1342 = (struct std__allocator_char_*)((char *)&(t1341->_M_dataplus) + 0);
  __retval1340 = base1342;
  struct std__allocator_char_* t1343 = __retval1340;
  return t1343;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1344, unsigned long* v1345) {
bb1346:
  unsigned long* __a1347;
  unsigned long* __b1348;
  unsigned long* __retval1349;
  __a1347 = v1344;
  __b1348 = v1345;
    unsigned long* t1350 = __b1348;
    unsigned long t1351 = *t1350;
    unsigned long* t1352 = __a1347;
    unsigned long t1353 = *t1352;
    _Bool c1354 = ((t1351 < t1353)) ? 1 : 0;
    if (c1354) {
      unsigned long* t1355 = __b1348;
      __retval1349 = t1355;
      unsigned long* t1356 = __retval1349;
      return t1356;
    }
  unsigned long* t1357 = __a1347;
  __retval1349 = t1357;
  unsigned long* t1358 = __retval1349;
  return t1358;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1359) {
bb1360:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1361;
  unsigned long __retval1362;
  unsigned long __diffmax1363;
  unsigned long __allocmax1364;
  this1361 = v1359;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1365 = this1361;
  unsigned long c1366 = 9223372036854775807;
  __diffmax1363 = c1366;
  struct std__allocator_char_* r1367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1365);
  unsigned long r1368 = std__allocator_traits_std__allocator_char_____max_size(r1367);
  __allocmax1364 = r1368;
  unsigned long* r1369 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1363, &__allocmax1364);
  unsigned long t1370 = *r1369;
  unsigned long c1371 = 1;
  unsigned long b1372 = t1370 - c1371;
  __retval1362 = b1372;
  unsigned long t1373 = __retval1362;
  return t1373;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1374) {
bb1375:
  struct std____new_allocator_char_* this1376;
  unsigned long __retval1377;
  this1376 = v1374;
  struct std____new_allocator_char_* t1378 = this1376;
  unsigned long c1379 = 9223372036854775807;
  unsigned long c1380 = 1;
  unsigned long b1381 = c1379 / c1380;
  __retval1377 = b1381;
  unsigned long t1382 = __retval1377;
  return t1382;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1383, unsigned long v1384, void* v1385) {
bb1386:
  struct std____new_allocator_char_* this1387;
  unsigned long __n1388;
  void* unnamed1389;
  char* __retval1390;
  this1387 = v1383;
  __n1388 = v1384;
  unnamed1389 = v1385;
  struct std____new_allocator_char_* t1391 = this1387;
    unsigned long t1392 = __n1388;
    unsigned long r1393 = std____new_allocator_char____M_max_size___const(t1391);
    _Bool c1394 = ((t1392 > r1393)) ? 1 : 0;
    if (c1394) {
        unsigned long t1395 = __n1388;
        unsigned long c1396 = -1;
        unsigned long c1397 = 1;
        unsigned long b1398 = c1396 / c1397;
        _Bool c1399 = ((t1395 > b1398)) ? 1 : 0;
        if (c1399) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1400 = 1;
    unsigned long c1401 = 16;
    _Bool c1402 = ((c1400 > c1401)) ? 1 : 0;
    if (c1402) {
      unsigned long __al1403;
      unsigned long c1404 = 1;
      __al1403 = c1404;
      unsigned long t1405 = __n1388;
      unsigned long c1406 = 1;
      unsigned long b1407 = t1405 * c1406;
      unsigned long t1408 = __al1403;
      void* r1409 = operator_new_2(b1407, t1408);
      char* cast1410 = (char*)r1409;
      __retval1390 = cast1410;
      char* t1411 = __retval1390;
      return t1411;
    }
  unsigned long t1412 = __n1388;
  unsigned long c1413 = 1;
  unsigned long b1414 = t1412 * c1413;
  void* r1415 = operator_new(b1414);
  char* cast1416 = (char*)r1415;
  __retval1390 = cast1416;
  char* t1417 = __retval1390;
  return t1417;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1418, unsigned long v1419) {
bb1420:
  struct std__allocator_char_* this1421;
  unsigned long __n1422;
  char* __retval1423;
  this1421 = v1418;
  __n1422 = v1419;
  struct std__allocator_char_* t1424 = this1421;
    _Bool r1425 = std____is_constant_evaluated();
    if (r1425) {
        unsigned long t1426 = __n1422;
        unsigned long c1427 = 1;
        unsigned long ovr1428;
        _Bool ovf1429 = __builtin_mul_overflow(t1426, c1427, &ovr1428);
        __n1422 = ovr1428;
        if (ovf1429) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1430 = __n1422;
      void* r1431 = operator_new(t1430);
      char* cast1432 = (char*)r1431;
      __retval1423 = cast1432;
      char* t1433 = __retval1423;
      return t1433;
    }
  struct std____new_allocator_char_* base1434 = (struct std____new_allocator_char_*)((char *)t1424 + 0);
  unsigned long t1435 = __n1422;
  void* c1436 = ((void*)0);
  char* r1437 = std____new_allocator_char___allocate(base1434, t1435, c1436);
  __retval1423 = r1437;
  char* t1438 = __retval1423;
  return t1438;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1439, unsigned long v1440) {
bb1441:
  struct std__allocator_char_* __a1442;
  unsigned long __n1443;
  char* __retval1444;
  __a1442 = v1439;
  __n1443 = v1440;
  struct std__allocator_char_* t1445 = __a1442;
  unsigned long t1446 = __n1443;
  char* r1447 = std__allocator_char___allocate(t1445, t1446);
  __retval1444 = r1447;
  char* t1448 = __retval1444;
  return t1448;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1449, unsigned long v1450) {
bb1451:
  struct std__allocator_char_* __a1452;
  unsigned long __n1453;
  char* __retval1454;
  char* __p1455;
  __a1452 = v1449;
  __n1453 = v1450;
  struct std__allocator_char_* t1456 = __a1452;
  unsigned long t1457 = __n1453;
  char* r1458 = std__allocator_traits_std__allocator_char_____allocate(t1456, t1457);
  __p1455 = r1458;
  char* t1459 = __p1455;
  __retval1454 = t1459;
  char* t1460 = __retval1454;
  return t1460;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1461) {
bb1462:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1463;
  struct std__allocator_char_* __retval1464;
  this1463 = v1461;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1465 = this1463;
  struct std__allocator_char_* base1466 = (struct std__allocator_char_*)((char *)&(t1465->_M_dataplus) + 0);
  __retval1464 = base1466;
  struct std__allocator_char_* t1467 = __retval1464;
  return t1467;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1468, unsigned long* v1469, unsigned long v1470) {
bb1471:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1472;
  unsigned long* __capacity1473;
  unsigned long __old_capacity1474;
  char* __retval1475;
  this1472 = v1468;
  __capacity1473 = v1469;
  __old_capacity1474 = v1470;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1476 = this1472;
    unsigned long* t1477 = __capacity1473;
    unsigned long t1478 = *t1477;
    unsigned long r1479 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1476);
    _Bool c1480 = ((t1478 > r1479)) ? 1 : 0;
    if (c1480) {
      char* cast1481 = (char*)&(_str_20);
      std____throw_length_error(cast1481);
    }
    unsigned long* t1482 = __capacity1473;
    unsigned long t1483 = *t1482;
    unsigned long t1484 = __old_capacity1474;
    _Bool c1485 = ((t1483 > t1484)) ? 1 : 0;
    _Bool ternary1486;
    if (c1485) {
      unsigned long* t1487 = __capacity1473;
      unsigned long t1488 = *t1487;
      unsigned long c1489 = 2;
      unsigned long t1490 = __old_capacity1474;
      unsigned long b1491 = c1489 * t1490;
      _Bool c1492 = ((t1488 < b1491)) ? 1 : 0;
      ternary1486 = (_Bool)c1492;
    } else {
      _Bool c1493 = 0;
      ternary1486 = (_Bool)c1493;
    }
    if (ternary1486) {
      unsigned long c1494 = 2;
      unsigned long t1495 = __old_capacity1474;
      unsigned long b1496 = c1494 * t1495;
      unsigned long* t1497 = __capacity1473;
      *t1497 = b1496;
        unsigned long* t1498 = __capacity1473;
        unsigned long t1499 = *t1498;
        unsigned long r1500 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1476);
        _Bool c1501 = ((t1499 > r1500)) ? 1 : 0;
        if (c1501) {
          unsigned long r1502 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1476);
          unsigned long* t1503 = __capacity1473;
          *t1503 = r1502;
        }
    }
  struct std__allocator_char_* r1504 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1476);
  unsigned long* t1505 = __capacity1473;
  unsigned long t1506 = *t1505;
  unsigned long c1507 = 1;
  unsigned long b1508 = t1506 + c1507;
  char* r1509 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1504, b1508);
  __retval1475 = r1509;
  char* t1510 = __retval1475;
  return t1510;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1511, unsigned long v1512) {
bb1513:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1514;
  unsigned long __capacity1515;
  this1514 = v1511;
  __capacity1515 = v1512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1516 = this1514;
  unsigned long t1517 = __capacity1515;
  t1516->field2._M_allocated_capacity = t1517;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1518:
  _Bool __retval1519;
    _Bool c1520 = 0;
    __retval1519 = c1520;
    _Bool t1521 = __retval1519;
    return t1521;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1522) {
bb1523:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1524;
  this1524 = v1522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1525 = this1524;
    _Bool r1526 = std__is_constant_evaluated();
    if (r1526) {
        unsigned long __i1527;
        unsigned long c1528 = 0;
        __i1527 = c1528;
        while (1) {
          unsigned long t1530 = __i1527;
          unsigned long c1531 = 15;
          _Bool c1532 = ((t1530 <= c1531)) ? 1 : 0;
          if (!c1532) break;
          char c1533 = 0;
          unsigned long t1534 = __i1527;
          t1525->field2._M_local_buf[t1534] = c1533;
        for_step1529: ;
          unsigned long t1535 = __i1527;
          unsigned long u1536 = t1535 + 1;
          __i1527 = u1536;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1537, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1538) {
bb1539:
  struct _Guard* this1540;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1541;
  this1540 = v1537;
  __s1541 = v1538;
  struct _Guard* t1542 = this1540;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1543 = __s1541;
  t1542->_M_guarded = t1543;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1544, char* v1545) {
bb1546:
  char* __location1547;
  char* __args1548;
  char* __retval1549;
  void* __loc1550;
  __location1547 = v1544;
  __args1548 = v1545;
  char* t1551 = __location1547;
  void* cast1552 = (void*)t1551;
  __loc1550 = cast1552;
    void* t1553 = __loc1550;
    char* cast1554 = (char*)t1553;
    char* t1555 = __args1548;
    char t1556 = *t1555;
    *cast1554 = t1556;
    __retval1549 = cast1554;
    char* t1557 = __retval1549;
    return t1557;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1558, char* v1559) {
bb1560:
  char* __c11561;
  char* __c21562;
  __c11561 = v1558;
  __c21562 = v1559;
    _Bool r1563 = std____is_constant_evaluated();
    if (r1563) {
      char* t1564 = __c11561;
      char* t1565 = __c21562;
      char* r1566 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1564, t1565);
    } else {
      char* t1567 = __c21562;
      char t1568 = *t1567;
      char* t1569 = __c11561;
      *t1569 = t1568;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1570, char* v1571, unsigned long v1572) {
bb1573:
  char* __s11574;
  char* __s21575;
  unsigned long __n1576;
  char* __retval1577;
  __s11574 = v1570;
  __s21575 = v1571;
  __n1576 = v1572;
    unsigned long t1578 = __n1576;
    unsigned long c1579 = 0;
    _Bool c1580 = ((t1578 == c1579)) ? 1 : 0;
    if (c1580) {
      char* t1581 = __s11574;
      __retval1577 = t1581;
      char* t1582 = __retval1577;
      return t1582;
    }
    _Bool r1583 = std____is_constant_evaluated();
    if (r1583) {
        unsigned long __i1584;
        unsigned long c1585 = 0;
        __i1584 = c1585;
        while (1) {
          unsigned long t1587 = __i1584;
          unsigned long t1588 = __n1576;
          _Bool c1589 = ((t1587 < t1588)) ? 1 : 0;
          if (!c1589) break;
          char* t1590 = __s11574;
          unsigned long t1591 = __i1584;
          char* ptr1592 = &(t1590)[t1591];
          unsigned long t1593 = __i1584;
          char* t1594 = __s21575;
          char* ptr1595 = &(t1594)[t1593];
          char* r1596 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1592, ptr1595);
        for_step1586: ;
          unsigned long t1597 = __i1584;
          unsigned long u1598 = t1597 + 1;
          __i1584 = u1598;
        }
      char* t1599 = __s11574;
      __retval1577 = t1599;
      char* t1600 = __retval1577;
      return t1600;
    }
  char* t1601 = __s11574;
  void* cast1602 = (void*)t1601;
  char* t1603 = __s21575;
  void* cast1604 = (void*)t1603;
  unsigned long t1605 = __n1576;
  unsigned long c1606 = 1;
  unsigned long b1607 = t1605 * c1606;
  void* r1608 = memcpy(cast1602, cast1604, b1607);
  char* t1609 = __s11574;
  __retval1577 = t1609;
  char* t1610 = __retval1577;
  return t1610;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1611, char* v1612, unsigned long v1613) {
bb1614:
  char* __s11615;
  char* __s21616;
  unsigned long __n1617;
  char* __retval1618;
  __s11615 = v1611;
  __s21616 = v1612;
  __n1617 = v1613;
    unsigned long t1619 = __n1617;
    unsigned long c1620 = 0;
    _Bool c1621 = ((t1619 == c1620)) ? 1 : 0;
    if (c1621) {
      char* t1622 = __s11615;
      __retval1618 = t1622;
      char* t1623 = __retval1618;
      return t1623;
    }
    _Bool r1624 = std____is_constant_evaluated();
    if (r1624) {
      char* t1625 = __s11615;
      char* t1626 = __s21616;
      unsigned long t1627 = __n1617;
      char* r1628 = __gnu_cxx__char_traits_char___copy(t1625, t1626, t1627);
      __retval1618 = r1628;
      char* t1629 = __retval1618;
      return t1629;
    }
  char* t1630 = __s11615;
  void* cast1631 = (void*)t1630;
  char* t1632 = __s21616;
  void* cast1633 = (void*)t1632;
  unsigned long t1634 = __n1617;
  void* r1635 = memcpy(cast1631, cast1633, t1634);
  char* cast1636 = (char*)r1635;
  __retval1618 = cast1636;
  char* t1637 = __retval1618;
  return t1637;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1638, char* v1639, unsigned long v1640) {
bb1641:
  char* __d1642;
  char* __s1643;
  unsigned long __n1644;
  __d1642 = v1638;
  __s1643 = v1639;
  __n1644 = v1640;
    unsigned long t1645 = __n1644;
    unsigned long c1646 = 1;
    _Bool c1647 = ((t1645 == c1646)) ? 1 : 0;
    if (c1647) {
      char* t1648 = __d1642;
      char* t1649 = __s1643;
      std__char_traits_char___assign_2(t1648, t1649);
    } else {
      char* t1650 = __d1642;
      char* t1651 = __s1643;
      unsigned long t1652 = __n1644;
      char* r1653 = std__char_traits_char___copy(t1650, t1651, t1652);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1654) {
bb1655:
  char* __it1656;
  char* __retval1657;
  __it1656 = v1654;
  char* t1658 = __it1656;
  __retval1657 = t1658;
  char* t1659 = __retval1657;
  return t1659;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1660, char* v1661, char* v1662) {
bb1663:
  char* __p1664;
  char* __k11665;
  char* __k21666;
  __p1664 = v1660;
  __k11665 = v1661;
  __k21666 = v1662;
    char* t1667 = __p1664;
    char* t1668 = __k11665;
    char* r1669 = char_const__std____niter_base_char_const__(t1668);
    char* t1670 = __k21666;
    char* t1671 = __k11665;
    long diff1672 = t1670 - t1671;
    unsigned long cast1673 = (unsigned long)diff1672;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1667, r1669, cast1673);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1674) {
bb1675:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1676;
  char* __retval1677;
  this1676 = v1674;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1678 = this1676;
  char* t1679 = t1678->_M_dataplus._M_p;
  __retval1677 = t1679;
  char* t1680 = __retval1677;
  return t1680;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1681, unsigned long v1682) {
bb1683:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1684;
  unsigned long __length1685;
  this1684 = v1681;
  __length1685 = v1682;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1686 = this1684;
  unsigned long t1687 = __length1685;
  t1686->_M_string_length = t1687;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1688, unsigned long v1689) {
bb1690:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1691;
  unsigned long __n1692;
  char ref_tmp01693;
  this1691 = v1688;
  __n1692 = v1689;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1694 = this1691;
  unsigned long t1695 = __n1692;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1694, t1695);
  unsigned long t1696 = __n1692;
  char* r1697 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1694);
  char* ptr1698 = &(r1697)[t1696];
  char c1699 = 0;
  ref_tmp01693 = c1699;
  std__char_traits_char___assign_2(ptr1698, &ref_tmp01693);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1700) {
bb1701:
  struct _Guard* this1702;
  this1702 = v1700;
  struct _Guard* t1703 = this1702;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1704 = t1703->_M_guarded;
    _Bool cast1705 = (_Bool)t1704;
    if (cast1705) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1706 = t1703->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1706);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1707, char* v1708, char* v1709, struct std__forward_iterator_tag v1710) {
bb1711:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1712;
  char* __beg1713;
  char* __end1714;
  struct std__forward_iterator_tag unnamed1715;
  unsigned long __dnew1716;
  struct _Guard __guard1717;
  this1712 = v1707;
  __beg1713 = v1708;
  __end1714 = v1709;
  unnamed1715 = v1710;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1718 = this1712;
  char* t1719 = __beg1713;
  char* t1720 = __end1714;
  long r1721 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1719, t1720);
  unsigned long cast1722 = (unsigned long)r1721;
  __dnew1716 = cast1722;
    unsigned long t1723 = __dnew1716;
    unsigned long c1724 = 15;
    _Bool c1725 = ((t1723 > c1724)) ? 1 : 0;
    if (c1725) {
      unsigned long c1726 = 0;
      char* r1727 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1718, &__dnew1716, c1726);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1718, r1727);
      unsigned long t1728 = __dnew1716;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1718, t1728);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1718);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1717, t1718);
    char* r1729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1718);
    char* t1730 = __beg1713;
    char* t1731 = __end1714;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1729, t1730, t1731);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1732 = ((void*)0);
    __guard1717._M_guarded = c1732;
    unsigned long t1733 = __dnew1716;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1718, t1733);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1717);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1734) {
bb1735:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1736;
  this1736 = v1734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1737 = this1736;
  {
    struct std__allocator_char_* base1738 = (struct std__allocator_char_*)((char *)t1737 + 0);
    std__allocator_char____allocator(base1738);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1739, struct std____new_allocator_char_* v1740) {
bb1741:
  struct std____new_allocator_char_* this1742;
  struct std____new_allocator_char_* unnamed1743;
  this1742 = v1739;
  unnamed1743 = v1740;
  struct std____new_allocator_char_* t1744 = this1742;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1745) {
bb1746:
  char* __r1747;
  char* __retval1748;
  __r1747 = v1745;
  char* t1749 = __r1747;
  __retval1748 = t1749;
  char* t1750 = __retval1748;
  return t1750;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1751) {
bb1752:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1753;
  char* __retval1754;
  this1753 = v1751;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1755 = this1753;
  char* cast1756 = (char*)&(t1755->field2._M_local_buf);
  char* r1757 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1756);
  __retval1754 = r1757;
  char* t1758 = __retval1754;
  return t1758;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1759) {
bb1760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1761;
  _Bool __retval1762;
  this1761 = v1759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1763 = this1761;
    char* r1764 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1763);
    char* r1765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1763);
    _Bool c1766 = ((r1764 == r1765)) ? 1 : 0;
    if (c1766) {
        unsigned long t1767 = t1763->_M_string_length;
        unsigned long c1768 = 15;
        _Bool c1769 = ((t1767 > c1768)) ? 1 : 0;
        if (c1769) {
          __builtin_unreachable();
        }
      _Bool c1770 = 1;
      __retval1762 = c1770;
      _Bool t1771 = __retval1762;
      return t1771;
    }
  _Bool c1772 = 0;
  __retval1762 = c1772;
  _Bool t1773 = __retval1762;
  return t1773;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1774, char* v1775, unsigned long v1776) {
bb1777:
  struct std____new_allocator_char_* this1778;
  char* __p1779;
  unsigned long __n1780;
  this1778 = v1774;
  __p1779 = v1775;
  __n1780 = v1776;
  struct std____new_allocator_char_* t1781 = this1778;
    unsigned long c1782 = 1;
    unsigned long c1783 = 16;
    _Bool c1784 = ((c1782 > c1783)) ? 1 : 0;
    if (c1784) {
      char* t1785 = __p1779;
      void* cast1786 = (void*)t1785;
      unsigned long t1787 = __n1780;
      unsigned long c1788 = 1;
      unsigned long b1789 = t1787 * c1788;
      unsigned long c1790 = 1;
      operator_delete_3(cast1786, b1789, c1790);
      return;
    }
  char* t1791 = __p1779;
  void* cast1792 = (void*)t1791;
  unsigned long t1793 = __n1780;
  unsigned long c1794 = 1;
  unsigned long b1795 = t1793 * c1794;
  operator_delete_2(cast1792, b1795);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1796, char* v1797, unsigned long v1798) {
bb1799:
  struct std__allocator_char_* this1800;
  char* __p1801;
  unsigned long __n1802;
  this1800 = v1796;
  __p1801 = v1797;
  __n1802 = v1798;
  struct std__allocator_char_* t1803 = this1800;
    _Bool r1804 = std____is_constant_evaluated();
    if (r1804) {
      char* t1805 = __p1801;
      void* cast1806 = (void*)t1805;
      operator_delete(cast1806);
      return;
    }
  struct std____new_allocator_char_* base1807 = (struct std____new_allocator_char_*)((char *)t1803 + 0);
  char* t1808 = __p1801;
  unsigned long t1809 = __n1802;
  std____new_allocator_char___deallocate(base1807, t1808, t1809);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1810, char* v1811, unsigned long v1812) {
bb1813:
  struct std__allocator_char_* __a1814;
  char* __p1815;
  unsigned long __n1816;
  __a1814 = v1810;
  __p1815 = v1811;
  __n1816 = v1812;
  struct std__allocator_char_* t1817 = __a1814;
  char* t1818 = __p1815;
  unsigned long t1819 = __n1816;
  std__allocator_char___deallocate(t1817, t1818, t1819);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1820, unsigned long v1821) {
bb1822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1823;
  unsigned long __size1824;
  this1823 = v1820;
  __size1824 = v1821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1825 = this1823;
  struct std__allocator_char_* r1826 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1825);
  char* r1827 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1825);
  unsigned long t1828 = __size1824;
  unsigned long c1829 = 1;
  unsigned long b1830 = t1828 + c1829;
  std__allocator_traits_std__allocator_char_____deallocate(r1826, r1827, b1830);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1831) {
bb1832:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1833;
  this1833 = v1831;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1834 = this1833;
    _Bool r1835 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1834);
    _Bool u1836 = !r1835;
    if (u1836) {
      unsigned long t1837 = t1834->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1834, t1837);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1838, struct std__allocator_char_* v1839) {
bb1840:
  struct std__allocator_char_* this1841;
  struct std__allocator_char_* __a1842;
  this1841 = v1838;
  __a1842 = v1839;
  struct std__allocator_char_* t1843 = this1841;
  struct std____new_allocator_char_* base1844 = (struct std____new_allocator_char_*)((char *)t1843 + 0);
  struct std__allocator_char_* t1845 = __a1842;
  struct std____new_allocator_char_* base1846 = (struct std____new_allocator_char_*)((char *)t1845 + 0);
  std____new_allocator_char_____new_allocator(base1844, base1846);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1847) {
bb1848:
  struct std__allocator_char_* __rhs1849;
  struct std__allocator_char_ __retval1850;
  __rhs1849 = v1847;
  struct std__allocator_char_* t1851 = __rhs1849;
  std__allocator_char___allocator(&__retval1850, t1851);
  struct std__allocator_char_ t1852 = __retval1850;
  return t1852;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1853) {
bb1854:
  struct std__allocator_char_* __a1855;
  struct std__allocator_char_ __retval1856;
  __a1855 = v1853;
  struct std__allocator_char_* t1857 = __a1855;
  struct std__allocator_char_ r1858 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1857);
  __retval1856 = r1858;
  struct std__allocator_char_ t1859 = __retval1856;
  return t1859;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1860, char* v1861, struct std__allocator_char_* v1862) {
bb1863:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1864;
  char* __dat1865;
  struct std__allocator_char_* __a1866;
  this1864 = v1860;
  __dat1865 = v1861;
  __a1866 = v1862;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1867 = this1864;
  struct std__allocator_char_* base1868 = (struct std__allocator_char_*)((char *)t1867 + 0);
  struct std__allocator_char_* t1869 = __a1866;
  std__allocator_char___allocator(base1868, t1869);
    char* t1870 = __dat1865;
    t1867->_M_p = t1870;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1871, char* v1872, unsigned long v1873) {
bb1874:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1875;
  char* __str1876;
  unsigned long __n1877;
  this1875 = v1871;
  __str1876 = v1872;
  __n1877 = v1873;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1878 = this1875;
    unsigned long t1879 = __n1877;
    unsigned long c1880 = 15;
    _Bool c1881 = ((t1879 > c1880)) ? 1 : 0;
    if (c1881) {
      unsigned long c1882 = 0;
      char* r1883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1878, &__n1877, c1882);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1878, r1883);
      unsigned long t1884 = __n1877;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1878, t1884);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1878);
    }
    unsigned long t1885 = __n1877;
    _Bool cast1886 = (_Bool)t1885;
    _Bool ternary1887;
    if (cast1886) {
      _Bool c1888 = 1;
      ternary1887 = (_Bool)c1888;
    } else {
      _Bool c1889 = 1;
      ternary1887 = (_Bool)c1889;
    }
    if (ternary1887) {
      char* r1890 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1878);
      char* t1891 = __str1876;
      unsigned long t1892 = __n1877;
      _Bool c1893 = 1;
      unsigned long cast1894 = (unsigned long)c1893;
      unsigned long b1895 = t1892 + cast1894;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1890, t1891, b1895);
    }
  unsigned long t1896 = __n1877;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1878, t1896);
    _Bool c1897 = 0;
    if (c1897) {
      char ref_tmp01898;
      unsigned long t1899 = __n1877;
      char* r1900 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1878);
      char* ptr1901 = &(r1900)[t1899];
      char c1902 = 0;
      ref_tmp01898 = c1902;
      std__char_traits_char___assign_2(ptr1901, &ref_tmp01898);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1903) {
bb1904:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1905;
  unsigned long __retval1906;
  unsigned long __sz1907;
  this1905 = v1903;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1908 = this1905;
  unsigned long t1909 = t1908->_M_string_length;
  __sz1907 = t1909;
    unsigned long t1910 = __sz1907;
    unsigned long r1911 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1908);
    _Bool c1912 = ((t1910 > r1911)) ? 1 : 0;
    if (c1912) {
      __builtin_unreachable();
    }
  unsigned long t1913 = __sz1907;
  __retval1906 = t1913;
  unsigned long t1914 = __retval1906;
  return t1914;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1915) {
bb1916:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1917;
  unsigned long __retval1918;
  this1917 = v1915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1919 = this1917;
  unsigned long r1920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1919);
  __retval1918 = r1920;
  unsigned long t1921 = __retval1918;
  return t1921;
}

