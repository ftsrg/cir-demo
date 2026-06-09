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
char _str_4[17] = "sample phraseng.";
char _str_5[26] = "str == \"sample phraseng.\"";
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_8/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[11] = "replace it";
char _str_8[18] = "replace phraseng.";
char _str_9[27] = "str == \"replace phraseng.\"";
char _str_10[8] = "is cool";
char _str_11[19] = "replace is coolng.";
char _str_12[28] = "str == \"replace is coolng.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[50] = "basic_string: construction from null is not valid";
char _str_14[24] = "basic_string::_M_create";
char _str_15[22] = "basic_string::replace";
char _str_16[25] = "basic_string::_M_replace";
char _str_17[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, char* p3, unsigned long p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, char* p3);
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
void std__char_traits_char___assign(char* p0, char* p1);
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
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);

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
        char* cast20 = (char*)&(_str_13);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v47, char** v48) {
bb49:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this50;
  char** __i51;
  this50 = v47;
  __i51 = v48;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t52 = this50;
  char** t53 = __i51;
  char* t54 = *t53;
  t52->_M_current = t54;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval58;
  char* ref_tmp059;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  char* r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t60);
  ref_tmp059 = r61;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval58, &ref_tmp059);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t62 = __retval58;
  return t62;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_RKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v63, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v64, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v65, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v66) {
bb67:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this68;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i169;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str71;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval72;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp073;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp174;
  this68 = v63;
  __i169 = v64;
  __i270 = v65;
  __str71 = v66;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t75 = this68;
  agg_tmp073 = __i169; // copy
  agg_tmp174 = __i270; // copy
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t76 = __str71;
  char* r77 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t76);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t78 = __str71;
  unsigned long r79 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t78);
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t80 = agg_tmp073;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t81 = agg_tmp174;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r82 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t75, t80, t81, r77, r79);
  __retval72 = r82;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = __retval72;
  return t83;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v84, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v85) {
bb86:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this87;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i88;
  this87 = v84;
  __i88 = v85;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t89 = this87;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t90 = __i88;
  char** r91 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t90);
  char* t92 = *r91;
  t89->_M_current = t92;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v93) {
bb94:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this95;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval96;
  char* ref_tmp097;
  this95 = v93;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = this95;
  char* r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t98);
  unsigned long r100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t98);
  char* ptr101 = &(r99)[r100];
  ref_tmp097 = ptr101;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval96, &ref_tmp097);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t102 = __retval96;
  return t102;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v103, long v104) {
bb105:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this106;
  long __n107;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval108;
  char* ref_tmp0109;
  this106 = v103;
  __n107 = v104;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t110 = this106;
  char* t111 = t110->_M_current;
  long t112 = __n107;
  long u113 = -t112;
  char* ptr114 = &(t111)[u113];
  ref_tmp0109 = ptr114;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval108, &ref_tmp0109);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t115 = __retval108;
  return t115;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v116, char* v117) {
bb118:
  char* __c1119;
  char* __c2120;
  _Bool __retval121;
  __c1119 = v116;
  __c2120 = v117;
  char* t122 = __c1119;
  char t123 = *t122;
  unsigned char cast124 = (unsigned char)t123;
  int cast125 = (int)cast124;
  char* t126 = __c2120;
  char t127 = *t126;
  unsigned char cast128 = (unsigned char)t127;
  int cast129 = (int)cast128;
  _Bool c130 = ((cast125 < cast129)) ? 1 : 0;
  __retval121 = c130;
  _Bool t131 = __retval121;
  return t131;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v132, char* v133, unsigned long v134) {
bb135:
  char* __s1136;
  char* __s2137;
  unsigned long __n138;
  int __retval139;
  __s1136 = v132;
  __s2137 = v133;
  __n138 = v134;
    unsigned long t140 = __n138;
    unsigned long c141 = 0;
    _Bool c142 = ((t140 == c141)) ? 1 : 0;
    if (c142) {
      int c143 = 0;
      __retval139 = c143;
      int t144 = __retval139;
      return t144;
    }
    _Bool r145 = std____is_constant_evaluated();
    if (r145) {
        unsigned long __i146;
        unsigned long c147 = 0;
        __i146 = c147;
        while (1) {
          unsigned long t149 = __i146;
          unsigned long t150 = __n138;
          _Bool c151 = ((t149 < t150)) ? 1 : 0;
          if (!c151) break;
            unsigned long t152 = __i146;
            char* t153 = __s1136;
            char* ptr154 = &(t153)[t152];
            unsigned long t155 = __i146;
            char* t156 = __s2137;
            char* ptr157 = &(t156)[t155];
            _Bool r158 = std__char_traits_char___lt(ptr154, ptr157);
            if (r158) {
              int c159 = -1;
              __retval139 = c159;
              int t160 = __retval139;
              int ret_val161 = t160;
              return ret_val161;
            } else {
                unsigned long t162 = __i146;
                char* t163 = __s2137;
                char* ptr164 = &(t163)[t162];
                unsigned long t165 = __i146;
                char* t166 = __s1136;
                char* ptr167 = &(t166)[t165];
                _Bool r168 = std__char_traits_char___lt(ptr164, ptr167);
                if (r168) {
                  int c169 = 1;
                  __retval139 = c169;
                  int t170 = __retval139;
                  int ret_val171 = t170;
                  return ret_val171;
                }
            }
        for_step148: ;
          unsigned long t172 = __i146;
          unsigned long u173 = t172 + 1;
          __i146 = u173;
        }
      int c174 = 0;
      __retval139 = c174;
      int t175 = __retval139;
      return t175;
    }
  char* t176 = __s1136;
  void* cast177 = (void*)t176;
  char* t178 = __s2137;
  void* cast179 = (void*)t178;
  unsigned long t180 = __n138;
  int r181 = memcmp(cast177, cast179, t180);
  __retval139 = r181;
  int t182 = __retval139;
  return t182;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v183) {
bb184:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this185;
  char* __retval186;
  this185 = v183;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t187 = this185;
  char* r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t187);
  __retval186 = r188;
  char* t189 = __retval186;
  return t189;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v190, char* v191) {
bb192:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs193;
  char* __rhs194;
  _Bool __retval195;
  __lhs193 = v190;
  __rhs194 = v191;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t196 = __lhs193;
  unsigned long r197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t196);
  char* t198 = __rhs194;
  unsigned long r199 = std__char_traits_char___length(t198);
  _Bool c200 = ((r197 == r199)) ? 1 : 0;
  _Bool ternary201;
  if (c200) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t202 = __lhs193;
    char* r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t202);
    char* t204 = __rhs194;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t205 = __lhs193;
    unsigned long r206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t205);
    int r207 = std__char_traits_char___compare(r203, t204, r206);
    _Bool cast208 = (_Bool)r207;
    _Bool u209 = !cast208;
    ternary201 = (_Bool)u209;
  } else {
    _Bool c210 = 0;
    ternary201 = (_Bool)c210;
  }
  __retval195 = ternary201;
  _Bool t211 = __retval195;
  return t211;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v212, unsigned long v213, unsigned long v214, char* v215) {
bb216:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this217;
  unsigned long __n1218;
  unsigned long __n2219;
  char* __s220;
  this217 = v212;
  __n1218 = v213;
  __n2219 = v214;
  __s220 = v215;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t221 = this217;
    unsigned long r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t221);
    unsigned long r223 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t221);
    unsigned long t224 = __n1218;
    unsigned long b225 = r223 - t224;
    unsigned long b226 = r222 - b225;
    unsigned long t227 = __n2219;
    _Bool c228 = ((b226 < t227)) ? 1 : 0;
    if (c228) {
      char* t229 = __s220;
      std____throw_length_error(t229);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v230) {
bb231:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this232;
  unsigned long __retval233;
  unsigned long __sz234;
  this232 = v230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = this232;
  _Bool r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t235);
  unsigned long ternary237;
  if (r236) {
    unsigned long c238 = 15;
    ternary237 = (unsigned long)c238;
  } else {
    unsigned long t239 = t235->field2._M_allocated_capacity;
    ternary237 = (unsigned long)t239;
  }
  __sz234 = ternary237;
    unsigned long t240 = __sz234;
    unsigned long c241 = 15;
    _Bool c242 = ((t240 < c241)) ? 1 : 0;
    _Bool ternary243;
    if (c242) {
      _Bool c244 = 1;
      ternary243 = (_Bool)c244;
    } else {
      unsigned long t245 = __sz234;
      unsigned long r246 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t235);
      _Bool c247 = ((t245 > r246)) ? 1 : 0;
      ternary243 = (_Bool)c247;
    }
    if (ternary243) {
      __builtin_unreachable();
    }
  unsigned long t248 = __sz234;
  __retval233 = t248;
  unsigned long t249 = __retval233;
  return t249;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v250, char* v251, char* v252) {
bb253:
  struct std__less_const_char___* this254;
  char* __x255;
  char* __y256;
  _Bool __retval257;
  this254 = v250;
  __x255 = v251;
  __y256 = v252;
  struct std__less_const_char___* t258 = this254;
    _Bool r259 = std____is_constant_evaluated();
    if (r259) {
      char* t260 = __x255;
      char* t261 = __y256;
      _Bool c262 = ((t260 < t261)) ? 1 : 0;
      __retval257 = c262;
      _Bool t263 = __retval257;
      return t263;
    }
  char* t264 = __x255;
  unsigned long cast265 = (unsigned long)t264;
  char* t266 = __y256;
  unsigned long cast267 = (unsigned long)t266;
  _Bool c268 = ((cast265 < cast267)) ? 1 : 0;
  __retval257 = c268;
  _Bool t269 = __retval257;
  return t269;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v270, char* v271) {
bb272:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this273;
  char* __s274;
  _Bool __retval275;
  struct std__less_const_char___ ref_tmp0276;
  this273 = v270;
  __s274 = v271;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = this273;
  char* t278 = __s274;
  char* r279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t277);
  _Bool r280 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0276, t278, r279);
  _Bool ternary281;
  if (r280) {
    _Bool c282 = 1;
    ternary281 = (_Bool)c282;
  } else {
    struct std__less_const_char___ ref_tmp1283;
    char* r284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t277);
    unsigned long r285 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t277);
    char* ptr286 = &(r284)[r285];
    char* t287 = __s274;
    _Bool r288 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1283, ptr286, t287);
    ternary281 = (_Bool)r288;
  }
  __retval275 = ternary281;
  _Bool t289 = __retval275;
  return t289;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v290, char* v291) {
bb292:
  char* __c1293;
  char* __c2294;
  __c1293 = v290;
  __c2294 = v291;
    _Bool r295 = std____is_constant_evaluated();
    if (r295) {
      char* t296 = __c1293;
      char* t297 = __c2294;
      char* r298 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t296, t297);
    } else {
      char* t299 = __c2294;
      char t300 = *t299;
      char* t301 = __c1293;
      *t301 = t300;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v302, char* v303, unsigned long v304) {
bb305:
  char* __s1306;
  char* __s2307;
  unsigned long __n308;
  char* __retval309;
  __s1306 = v302;
  __s2307 = v303;
  __n308 = v304;
    unsigned long t310 = __n308;
    unsigned long c311 = 0;
    _Bool c312 = ((t310 == c311)) ? 1 : 0;
    if (c312) {
      char* t313 = __s1306;
      __retval309 = t313;
      char* t314 = __retval309;
      return t314;
    }
    _Bool r315 = std____is_constant_evaluated();
    if (r315) {
        char* t316 = __s2307;
        char* t317 = __s1306;
        _Bool c318 = ((t316 < t317)) ? 1 : 0;
        _Bool isconst319 = 0;
        _Bool ternary320;
        if (isconst319) {
          char* t321 = __s1306;
          char* t322 = __s2307;
          _Bool c323 = ((t321 > t322)) ? 1 : 0;
          ternary320 = (_Bool)c323;
        } else {
          _Bool c324 = 0;
          ternary320 = (_Bool)c324;
        }
        _Bool ternary325;
        if (ternary320) {
          char* t326 = __s1306;
          char* t327 = __s2307;
          unsigned long t328 = __n308;
          char* ptr329 = &(t327)[t328];
          _Bool c330 = ((t326 < ptr329)) ? 1 : 0;
          ternary325 = (_Bool)c330;
        } else {
          _Bool c331 = 0;
          ternary325 = (_Bool)c331;
        }
        if (ternary325) {
            do {
                unsigned long t332 = __n308;
                unsigned long u333 = t332 - 1;
                __n308 = u333;
                unsigned long t334 = __n308;
                char* t335 = __s1306;
                char* ptr336 = &(t335)[t334];
                unsigned long t337 = __n308;
                char* t338 = __s2307;
                char* ptr339 = &(t338)[t337];
                __gnu_cxx__char_traits_char___assign(ptr336, ptr339);
              unsigned long t340 = __n308;
              unsigned long c341 = 0;
              _Bool c342 = ((t340 > c341)) ? 1 : 0;
              if (!c342) break;
            } while (1);
        } else {
          char* t343 = __s1306;
          char* t344 = __s2307;
          unsigned long t345 = __n308;
          char* r346 = __gnu_cxx__char_traits_char___copy(t343, t344, t345);
        }
      char* t347 = __s1306;
      __retval309 = t347;
      char* t348 = __retval309;
      return t348;
    }
  char* t349 = __s1306;
  void* cast350 = (void*)t349;
  char* t351 = __s2307;
  void* cast352 = (void*)t351;
  unsigned long t353 = __n308;
  unsigned long c354 = 1;
  unsigned long b355 = t353 * c354;
  void* r356 = memmove(cast350, cast352, b355);
  char* t357 = __s1306;
  __retval309 = t357;
  char* t358 = __retval309;
  return t358;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v359, char* v360, unsigned long v361) {
bb362:
  char* __s1363;
  char* __s2364;
  unsigned long __n365;
  char* __retval366;
  __s1363 = v359;
  __s2364 = v360;
  __n365 = v361;
    unsigned long t367 = __n365;
    unsigned long c368 = 0;
    _Bool c369 = ((t367 == c368)) ? 1 : 0;
    if (c369) {
      char* t370 = __s1363;
      __retval366 = t370;
      char* t371 = __retval366;
      return t371;
    }
    _Bool r372 = std____is_constant_evaluated();
    if (r372) {
      char* t373 = __s1363;
      char* t374 = __s2364;
      unsigned long t375 = __n365;
      char* r376 = __gnu_cxx__char_traits_char___move(t373, t374, t375);
      __retval366 = r376;
      char* t377 = __retval366;
      return t377;
    }
  char* t378 = __s1363;
  void* cast379 = (void*)t378;
  char* t380 = __s2364;
  void* cast381 = (void*)t380;
  unsigned long t382 = __n365;
  void* r383 = memmove(cast379, cast381, t382);
  char* cast384 = (char*)r383;
  __retval366 = cast384;
  char* t385 = __retval366;
  return t385;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v386, char* v387, unsigned long v388) {
bb389:
  char* __d390;
  char* __s391;
  unsigned long __n392;
  __d390 = v386;
  __s391 = v387;
  __n392 = v388;
    unsigned long t393 = __n392;
    unsigned long c394 = 1;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      char* t396 = __d390;
      char* t397 = __s391;
      std__char_traits_char___assign(t396, t397);
    } else {
      char* t398 = __d390;
      char* t399 = __s391;
      unsigned long t400 = __n392;
      char* r401 = std__char_traits_char___move(t398, t399, t400);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v402, char* v403, unsigned long v404, char* v405, unsigned long v406, unsigned long v407) {
bb408:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this409;
  char* __p410;
  unsigned long __len1411;
  char* __s412;
  unsigned long __len2413;
  unsigned long __how_much414;
  this409 = v402;
  __p410 = v403;
  __len1411 = v404;
  __s412 = v405;
  __len2413 = v406;
  __how_much414 = v407;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this409;
    unsigned long t416 = __len2413;
    _Bool cast417 = (_Bool)t416;
    _Bool ternary418;
    if (cast417) {
      unsigned long t419 = __len2413;
      unsigned long t420 = __len1411;
      _Bool c421 = ((t419 <= t420)) ? 1 : 0;
      ternary418 = (_Bool)c421;
    } else {
      _Bool c422 = 0;
      ternary418 = (_Bool)c422;
    }
    if (ternary418) {
      char* t423 = __p410;
      char* t424 = __s412;
      unsigned long t425 = __len2413;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t423, t424, t425);
    }
    unsigned long t426 = __how_much414;
    _Bool cast427 = (_Bool)t426;
    _Bool ternary428;
    if (cast427) {
      unsigned long t429 = __len1411;
      unsigned long t430 = __len2413;
      _Bool c431 = ((t429 != t430)) ? 1 : 0;
      ternary428 = (_Bool)c431;
    } else {
      _Bool c432 = 0;
      ternary428 = (_Bool)c432;
    }
    if (ternary428) {
      char* t433 = __p410;
      unsigned long t434 = __len2413;
      char* ptr435 = &(t433)[t434];
      char* t436 = __p410;
      unsigned long t437 = __len1411;
      char* ptr438 = &(t436)[t437];
      unsigned long t439 = __how_much414;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr435, ptr438, t439);
    }
    unsigned long t440 = __len2413;
    unsigned long t441 = __len1411;
    _Bool c442 = ((t440 > t441)) ? 1 : 0;
    if (c442) {
        char* t443 = __s412;
        unsigned long t444 = __len2413;
        char* ptr445 = &(t443)[t444];
        char* t446 = __p410;
        unsigned long t447 = __len1411;
        char* ptr448 = &(t446)[t447];
        _Bool c449 = ((ptr445 <= ptr448)) ? 1 : 0;
        if (c449) {
          char* t450 = __p410;
          char* t451 = __s412;
          unsigned long t452 = __len2413;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t450, t451, t452);
        } else {
            char* t453 = __s412;
            char* t454 = __p410;
            unsigned long t455 = __len1411;
            char* ptr456 = &(t454)[t455];
            _Bool c457 = ((t453 >= ptr456)) ? 1 : 0;
            if (c457) {
              unsigned long __poff458;
              char* t459 = __s412;
              char* t460 = __p410;
              long diff461 = t459 - t460;
              unsigned long cast462 = (unsigned long)diff461;
              unsigned long t463 = __len2413;
              unsigned long t464 = __len1411;
              unsigned long b465 = t463 - t464;
              unsigned long b466 = cast462 + b465;
              __poff458 = b466;
              char* t467 = __p410;
              char* t468 = __p410;
              unsigned long t469 = __poff458;
              char* ptr470 = &(t468)[t469];
              unsigned long t471 = __len2413;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t467, ptr470, t471);
            } else {
              unsigned long __nleft472;
              char* t473 = __p410;
              unsigned long t474 = __len1411;
              char* ptr475 = &(t473)[t474];
              char* t476 = __s412;
              long diff477 = ptr475 - t476;
              unsigned long cast478 = (unsigned long)diff477;
              __nleft472 = cast478;
              char* t479 = __p410;
              char* t480 = __s412;
              unsigned long t481 = __nleft472;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t479, t480, t481);
              char* t482 = __p410;
              unsigned long t483 = __nleft472;
              char* ptr484 = &(t482)[t483];
              char* t485 = __p410;
              unsigned long t486 = __len2413;
              char* ptr487 = &(t485)[t486];
              unsigned long t488 = __len2413;
              unsigned long t489 = __nleft472;
              unsigned long b490 = t488 - t489;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr484, ptr487, b490);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v491, unsigned long v492, unsigned long v493, char* v494, unsigned long v495) {
bb496:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this497;
  unsigned long __pos498;
  unsigned long __len1499;
  char* __s500;
  unsigned long __len2501;
  unsigned long __how_much502;
  unsigned long __new_capacity503;
  char* __r504;
  this497 = v491;
  __pos498 = v492;
  __len1499 = v493;
  __s500 = v494;
  __len2501 = v495;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this497;
  unsigned long r506 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t505);
  unsigned long t507 = __pos498;
  unsigned long b508 = r506 - t507;
  unsigned long t509 = __len1499;
  unsigned long b510 = b508 - t509;
  __how_much502 = b510;
  unsigned long r511 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t505);
  unsigned long t512 = __len2501;
  unsigned long b513 = r511 + t512;
  unsigned long t514 = __len1499;
  unsigned long b515 = b513 - t514;
  __new_capacity503 = b515;
  unsigned long r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t505);
  char* r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t505, &__new_capacity503, r516);
  __r504 = r517;
    unsigned long t518 = __pos498;
    _Bool cast519 = (_Bool)t518;
    if (cast519) {
      char* t520 = __r504;
      char* r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t505);
      unsigned long t522 = __pos498;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t520, r521, t522);
    }
    char* t523 = __s500;
    _Bool cast524 = (_Bool)t523;
    _Bool ternary525;
    if (cast524) {
      unsigned long t526 = __len2501;
      _Bool cast527 = (_Bool)t526;
      ternary525 = (_Bool)cast527;
    } else {
      _Bool c528 = 0;
      ternary525 = (_Bool)c528;
    }
    if (ternary525) {
      char* t529 = __r504;
      unsigned long t530 = __pos498;
      char* ptr531 = &(t529)[t530];
      char* t532 = __s500;
      unsigned long t533 = __len2501;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr531, t532, t533);
    }
    unsigned long t534 = __how_much502;
    _Bool cast535 = (_Bool)t534;
    if (cast535) {
      char* t536 = __r504;
      unsigned long t537 = __pos498;
      char* ptr538 = &(t536)[t537];
      unsigned long t539 = __len2501;
      char* ptr540 = &(ptr538)[t539];
      char* r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t505);
      unsigned long t542 = __pos498;
      char* ptr543 = &(r541)[t542];
      unsigned long t544 = __len1499;
      char* ptr545 = &(ptr543)[t544];
      unsigned long t546 = __how_much502;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr540, ptr545, t546);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t505);
  char* t547 = __r504;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t505, t547);
  unsigned long t548 = __new_capacity503;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t505, t548);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v549, unsigned long v550, unsigned long v551, char* v552, unsigned long v553) {
bb554:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this555;
  unsigned long __pos556;
  unsigned long __len1557;
  char* __s558;
  unsigned long __len2559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval560;
  unsigned long __old_size561;
  unsigned long __new_size562;
  this555 = v549;
  __pos556 = v550;
  __len1557 = v551;
  __s558 = v552;
  __len2559 = v553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t563 = this555;
  unsigned long t564 = __len1557;
  unsigned long t565 = __len2559;
  char* cast566 = (char*)&(_str_16);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t563, t564, t565, cast566);
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t563);
  __old_size561 = r567;
  unsigned long t568 = __old_size561;
  unsigned long t569 = __len2559;
  unsigned long b570 = t568 + t569;
  unsigned long t571 = __len1557;
  unsigned long b572 = b570 - t571;
  __new_size562 = b572;
    unsigned long t573 = __new_size562;
    unsigned long r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t563);
    _Bool c575 = ((t573 <= r574)) ? 1 : 0;
    if (c575) {
      char* __p576;
      unsigned long __how_much577;
      char* r578 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t563);
      unsigned long t579 = __pos556;
      char* ptr580 = &(r578)[t579];
      __p576 = ptr580;
      unsigned long t581 = __old_size561;
      unsigned long t582 = __pos556;
      unsigned long b583 = t581 - t582;
      unsigned long t584 = __len1557;
      unsigned long b585 = b583 - t584;
      __how_much577 = b585;
        _Bool r586 = std__is_constant_evaluated();
        if (r586) {
          char* __newp587;
          struct std__allocator_char_* r588 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t563);
          unsigned long t589 = __new_size562;
          char* r590 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r588, t589);
          __newp587 = r590;
          char* t591 = __newp587;
          char* r592 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t563);
          unsigned long t593 = __pos556;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t591, r592, t593);
          char* t594 = __newp587;
          unsigned long t595 = __pos556;
          char* ptr596 = &(t594)[t595];
          char* t597 = __s558;
          unsigned long t598 = __len2559;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr596, t597, t598);
          char* t599 = __newp587;
          unsigned long t600 = __pos556;
          char* ptr601 = &(t599)[t600];
          unsigned long t602 = __len2559;
          char* ptr603 = &(ptr601)[t602];
          char* t604 = __p576;
          unsigned long t605 = __len1557;
          char* ptr606 = &(t604)[t605];
          unsigned long t607 = __how_much577;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr603, ptr606, t607);
          char* r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t563);
          char* t609 = __newp587;
          unsigned long t610 = __new_size562;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r608, t609, t610);
          struct std__allocator_char_* r611 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t563);
          char* t612 = __newp587;
          unsigned long t613 = __new_size562;
          std__allocator_char___deallocate(r611, t612, t613);
        } else {
            char* t614 = __s558;
            _Bool r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t563, t614);
            if (r615) {
                unsigned long t616 = __how_much577;
                _Bool cast617 = (_Bool)t616;
                _Bool ternary618;
                if (cast617) {
                  unsigned long t619 = __len1557;
                  unsigned long t620 = __len2559;
                  _Bool c621 = ((t619 != t620)) ? 1 : 0;
                  ternary618 = (_Bool)c621;
                } else {
                  _Bool c622 = 0;
                  ternary618 = (_Bool)c622;
                }
                if (ternary618) {
                  char* t623 = __p576;
                  unsigned long t624 = __len2559;
                  char* ptr625 = &(t623)[t624];
                  char* t626 = __p576;
                  unsigned long t627 = __len1557;
                  char* ptr628 = &(t626)[t627];
                  unsigned long t629 = __how_much577;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr625, ptr628, t629);
                }
                unsigned long t630 = __len2559;
                _Bool cast631 = (_Bool)t630;
                if (cast631) {
                  char* t632 = __p576;
                  char* t633 = __s558;
                  unsigned long t634 = __len2559;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t632, t633, t634);
                }
            } else {
              char* t635 = __p576;
              unsigned long t636 = __len1557;
              char* t637 = __s558;
              unsigned long t638 = __len2559;
              unsigned long t639 = __how_much577;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t563, t635, t636, t637, t638, t639);
            }
        }
    } else {
      unsigned long t640 = __pos556;
      unsigned long t641 = __len1557;
      char* t642 = __s558;
      unsigned long t643 = __len2559;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t563, t640, t641, t642, t643);
    }
  unsigned long t644 = __new_size562;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t563, t644);
  __retval560 = t563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t645 = __retval560;
  return t645;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v646, unsigned long v647, char* v648) {
bb649:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this650;
  unsigned long __pos651;
  char* __s652;
  unsigned long __retval653;
  this650 = v646;
  __pos651 = v647;
  __s652 = v648;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t654 = this650;
    unsigned long t655 = __pos651;
    unsigned long r656 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t654);
    _Bool c657 = ((t655 > r656)) ? 1 : 0;
    if (c657) {
      char* cast658 = (char*)&(_str_17);
      char* t659 = __s652;
      unsigned long t660 = __pos651;
      unsigned long r661 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t654);
      std____throw_out_of_range_fmt(cast658, t659, t660, r661);
    }
  unsigned long t662 = __pos651;
  __retval653 = t662;
  unsigned long t663 = __retval653;
  return t663;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v664, unsigned long v665, unsigned long v666) {
bb667:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this668;
  unsigned long __pos669;
  unsigned long __off670;
  unsigned long __retval671;
  _Bool __testoff672;
  this668 = v664;
  __pos669 = v665;
  __off670 = v666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t673 = this668;
  unsigned long t674 = __off670;
  unsigned long r675 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t673);
  unsigned long t676 = __pos669;
  unsigned long b677 = r675 - t676;
  _Bool c678 = ((t674 < b677)) ? 1 : 0;
  __testoff672 = c678;
  _Bool t679 = __testoff672;
  unsigned long ternary680;
  if (t679) {
    unsigned long t681 = __off670;
    ternary680 = (unsigned long)t681;
  } else {
    unsigned long r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t673);
    unsigned long t683 = __pos669;
    unsigned long b684 = r682 - t683;
    ternary680 = (unsigned long)b684;
  }
  __retval671 = ternary680;
  unsigned long t685 = __retval671;
  return t685;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v686, unsigned long v687, unsigned long v688, char* v689, unsigned long v690) {
bb691:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this692;
  unsigned long __pos693;
  unsigned long __n1694;
  char* __s695;
  unsigned long __n2696;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval697;
  this692 = v686;
  __pos693 = v687;
  __n1694 = v688;
  __s695 = v689;
  __n2696 = v690;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = this692;
  unsigned long t699 = __pos693;
  char* cast700 = (char*)&(_str_15);
  unsigned long r701 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t698, t699, cast700);
  unsigned long t702 = __pos693;
  unsigned long t703 = __n1694;
  unsigned long r704 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t698, t702, t703);
  char* t705 = __s695;
  unsigned long t706 = __n2696;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r707 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t698, r701, r704, t705, t706);
  __retval697 = r707;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t708 = __retval697;
  return t708;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v709) {
bb710:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this711;
  char** __retval712;
  this711 = v709;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t713 = this711;
  __retval712 = &t713->_M_current;
  char** t714 = __retval712;
  return t714;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v715, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v716) {
bb717:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs718;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs719;
  long __retval720;
  __lhs718 = v715;
  __rhs719 = v716;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t721 = __lhs718;
  char** r722 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t721);
  char* t723 = *r722;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t724 = __rhs719;
  char** r725 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t724);
  char* t726 = *r725;
  long diff727 = t723 - t726;
  __retval720 = diff727;
  long t728 = __retval720;
  return t728;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v729, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v730) {
bb731:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs732;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs733;
  long __retval734;
  __lhs732 = v729;
  __rhs733 = v730;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t735 = __lhs732;
  char** r736 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t735);
  char* t737 = *r736;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t738 = __rhs733;
  char** r739 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t738);
  char* t740 = *r739;
  long diff741 = t737 - t740;
  __retval734 = diff741;
  long t742 = __retval734;
  return t742;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_S8_m
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v743, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v744, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v745, char* v746, unsigned long v747) {
bb748:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this749;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1750;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2751;
  char* __s752;
  unsigned long __n753;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval754;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0755;
  this749 = v743;
  __i1750 = v744;
  __i2751 = v745;
  __s752 = v746;
  __n753 = v747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t756 = this749;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r757 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t756);
  ref_tmp0755 = r757;
  long r758 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i1750, &ref_tmp0755);
  unsigned long cast759 = (unsigned long)r758;
  long r760 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i2751, &__i1750);
  unsigned long cast761 = (unsigned long)r760;
  char* t762 = __s752;
  unsigned long t763 = __n753;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r764 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t756, cast759, cast761, t762, t763);
  __retval754 = r764;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t765 = __retval754;
  return t765;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v766, long v767) {
bb768:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this769;
  long __n770;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval771;
  char* ref_tmp0772;
  this769 = v766;
  __n770 = v767;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t773 = this769;
  char* t774 = t773->_M_current;
  long t775 = __n770;
  char* ptr776 = &(t774)[t775];
  ref_tmp0772 = ptr776;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval771, &ref_tmp0772);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t777 = __retval771;
  return t777;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEpLEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v778, long v779) {
bb780:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this781;
  long __n782;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval783;
  this781 = v778;
  __n782 = v779;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t784 = this781;
  long t785 = __n782;
  char* t786 = t784->_M_current;
  char* ptr787 = &(t786)[t785];
  t784->_M_current = ptr787;
  __retval783 = t784;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t788 = __retval783;
  return t788;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v789, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v790, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v791, char* v792) {
bb793:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this794;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1795;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2796;
  char* __s797;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval798;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0799;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1800;
  this794 = v789;
  __i1795 = v790;
  __i2796 = v791;
  __s797 = v792;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t801 = this794;
  agg_tmp0799 = __i1795; // copy
  agg_tmp1800 = __i2796; // copy
  char* t802 = __s797;
  char* t803 = __s797;
  unsigned long r804 = std__char_traits_char___length(t803);
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t805 = agg_tmp0799;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t806 = agg_tmp1800;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r807 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t801, t805, t806, t802, r804);
  __retval798 = r807;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t808 = __retval798;
  return t808;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v809, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v810) {
bb811:
  struct std__basic_ostream_char__std__char_traits_char__* __os812;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str813;
  struct std__basic_ostream_char__std__char_traits_char__* __retval814;
  __os812 = v809;
  __str813 = v810;
  struct std__basic_ostream_char__std__char_traits_char__* t815 = __os812;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t816 = __str813;
  char* r817 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t816);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t818 = __str813;
  unsigned long r819 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t818);
  long cast820 = (long)r819;
  struct std__basic_ostream_char__std__char_traits_char__* r821 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t815, r817, cast820);
  __retval814 = r821;
  struct std__basic_ostream_char__std__char_traits_char__* t822 = __retval814;
  return t822;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v823, void* v824) {
bb825:
  struct std__basic_ostream_char__std__char_traits_char__* this826;
  void* __pf827;
  struct std__basic_ostream_char__std__char_traits_char__* __retval828;
  this826 = v823;
  __pf827 = v824;
  struct std__basic_ostream_char__std__char_traits_char__* t829 = this826;
  void* t830 = __pf827;
  struct std__basic_ostream_char__std__char_traits_char__* r831 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t830)(t829);
  __retval828 = r831;
  struct std__basic_ostream_char__std__char_traits_char__* t832 = __retval828;
  return t832;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v833) {
bb834:
  struct std__basic_ostream_char__std__char_traits_char__* __os835;
  struct std__basic_ostream_char__std__char_traits_char__* __retval836;
  __os835 = v833;
  struct std__basic_ostream_char__std__char_traits_char__* t837 = __os835;
  struct std__basic_ostream_char__std__char_traits_char__* r838 = std__ostream__flush(t837);
  __retval836 = r838;
  struct std__basic_ostream_char__std__char_traits_char__* t839 = __retval836;
  return t839;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v840) {
bb841:
  struct std__ctype_char_* __f842;
  struct std__ctype_char_* __retval843;
  __f842 = v840;
    struct std__ctype_char_* t844 = __f842;
    _Bool cast845 = (_Bool)t844;
    _Bool u846 = !cast845;
    if (u846) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t847 = __f842;
  __retval843 = t847;
  struct std__ctype_char_* t848 = __retval843;
  return t848;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v849, char v850) {
bb851:
  struct std__ctype_char_* this852;
  char __c853;
  char __retval854;
  this852 = v849;
  __c853 = v850;
  struct std__ctype_char_* t855 = this852;
    char t856 = t855->_M_widen_ok;
    _Bool cast857 = (_Bool)t856;
    if (cast857) {
      char t858 = __c853;
      unsigned char cast859 = (unsigned char)t858;
      unsigned long cast860 = (unsigned long)cast859;
      char t861 = t855->_M_widen[cast860];
      __retval854 = t861;
      char t862 = __retval854;
      return t862;
    }
  std__ctype_char____M_widen_init___const(t855);
  char t863 = __c853;
  void** v864 = (void**)t855;
  void* v865 = *((void**)v864);
  char vcall868 = (char)__VERIFIER_virtual_call_char_char(t855, 6, t863);
  __retval854 = vcall868;
  char t869 = __retval854;
  return t869;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v870, char v871) {
bb872:
  struct std__basic_ios_char__std__char_traits_char__* this873;
  char __c874;
  char __retval875;
  this873 = v870;
  __c874 = v871;
  struct std__basic_ios_char__std__char_traits_char__* t876 = this873;
  struct std__ctype_char_* t877 = t876->_M_ctype;
  struct std__ctype_char_* r878 = std__ctype_char__const__std____check_facet_std__ctype_char___(t877);
  char t879 = __c874;
  char r880 = std__ctype_char___widen_char__const(r878, t879);
  __retval875 = r880;
  char t881 = __retval875;
  return t881;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v882) {
bb883:
  struct std__basic_ostream_char__std__char_traits_char__* __os884;
  struct std__basic_ostream_char__std__char_traits_char__* __retval885;
  __os884 = v882;
  struct std__basic_ostream_char__std__char_traits_char__* t886 = __os884;
  struct std__basic_ostream_char__std__char_traits_char__* t887 = __os884;
  void** v888 = (void**)t887;
  void* v889 = *((void**)v888);
  unsigned char* cast890 = (unsigned char*)v889;
  long c891 = -24;
  unsigned char* ptr892 = &(cast890)[c891];
  long* cast893 = (long*)ptr892;
  long t894 = *cast893;
  unsigned char* cast895 = (unsigned char*)t887;
  unsigned char* ptr896 = &(cast895)[t894];
  struct std__basic_ostream_char__std__char_traits_char__* cast897 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr896;
  struct std__basic_ios_char__std__char_traits_char__* cast898 = (struct std__basic_ios_char__std__char_traits_char__*)cast897;
  char c899 = 10;
  char r900 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast898, c899);
  struct std__basic_ostream_char__std__char_traits_char__* r901 = std__ostream__put(t886, r900);
  struct std__basic_ostream_char__std__char_traits_char__* r902 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r901);
  __retval885 = r902;
  struct std__basic_ostream_char__std__char_traits_char__* t903 = __retval885;
  return t903;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v904) {
bb905:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this906;
  this906 = v904;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t907 = this906;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t907);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t907->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb908:
  int __retval909;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base910;
  struct std__allocator_char_ ref_tmp0911;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2912;
  struct std__allocator_char_ ref_tmp1913;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3914;
  struct std__allocator_char_ ref_tmp2915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4916;
  struct std__allocator_char_ ref_tmp3917;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str918;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it919;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0920;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1921;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp4922;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp5923;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp2924;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp3925;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp6926;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp4927;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp5928;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp7929;
  int c930 = 0;
  __retval909 = c930;
  char* cast931 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0911);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base910, cast931, &ref_tmp0911);
  {
    std__allocator_char____allocator(&ref_tmp0911);
  }
    char* cast932 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1913);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2912, cast932, &ref_tmp1913);
    {
      std__allocator_char____allocator(&ref_tmp1913);
    }
      char* cast933 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2915);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3914, cast933, &ref_tmp2915);
      {
        std__allocator_char____allocator(&ref_tmp2915);
      }
        char* cast934 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp3917);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str4916, cast934, &ref_tmp3917);
        {
          std__allocator_char____allocator(&ref_tmp3917);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str918, &base910);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r935 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str918);
            it919 = r935;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp0920, &it919);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r936 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str918);
            ref_tmp5923 = r936;
            long c937 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r938 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp5923, c937);
            ref_tmp4922 = r938;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp1921, &ref_tmp4922);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t939 = agg_tmp0920;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t940 = agg_tmp1921;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r941 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str918, t939, t940, &str3914);
            char* cast942 = (char*)&(_str_4);
            _Bool r943 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str918, cast942);
            if (r943) {
            } else {
              char* cast944 = (char*)&(_str_5);
              char* c945 = _str_6;
              unsigned int c946 = 43;
              char* cast947 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast944, c945, c946, cast947);
            }
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp2924, &it919);
            long c948 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r949 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&it919, c948);
            ref_tmp6926 = r949;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp3925, &ref_tmp6926);
            char* cast950 = (char*)&(_str_7);
            unsigned long c951 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t952 = agg_tmp2924;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t953 = agg_tmp3925;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r954 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str918, t952, t953, cast950, c951);
            char* cast955 = (char*)&(_str_8);
            _Bool r956 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str918, cast955);
            if (r956) {
            } else {
              char* cast957 = (char*)&(_str_9);
              char* c958 = _str_6;
              unsigned int c959 = 46;
              char* cast960 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast957, c958, c959, cast960);
            }
            long c961 = 8;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r962 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(&it919, c961);
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp4927, &it919);
            long c963 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r964 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&it919, c963);
            ref_tmp7929 = r964;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp5928, &ref_tmp7929);
            char* cast965 = (char*)&(_str_10);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t966 = agg_tmp4927;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t967 = agg_tmp5928;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str918, t966, t967, cast965);
            char* cast969 = (char*)&(_str_11);
            _Bool r970 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str918, cast969);
            if (r970) {
            } else {
              char* cast971 = (char*)&(_str_12);
              char* c972 = _str_6;
              unsigned int c973 = 50;
              char* cast974 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast971, c972, c973, cast974);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str918);
            struct std__basic_ostream_char__std__char_traits_char__* r976 = std__ostream__operator___std__ostream_____(r975, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c977 = 0;
            __retval909 = c977;
            int t978 = __retval909;
            int ret_val979 = t978;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str918);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4916);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3914);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2912);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base910);
            }
            return ret_val979;
  int t980 = __retval909;
  return t980;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v981) {
bb982:
  struct std____new_allocator_char_* this983;
  this983 = v981;
  struct std____new_allocator_char_* t984 = this983;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v985) {
bb986:
  char* __r987;
  char* __retval988;
  __r987 = v985;
  char* t989 = __r987;
  __retval988 = t989;
  char* t990 = __retval988;
  return t990;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v991) {
bb992:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this993;
  char* __retval994;
  this993 = v991;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t995 = this993;
  char* cast996 = (char*)&(t995->field2._M_local_buf);
  char* r997 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast996);
  __retval994 = r997;
  char* t998 = __retval994;
  return t998;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v999, char* v1000, struct std__allocator_char_* v1001) {
bb1002:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1003;
  char* __dat1004;
  struct std__allocator_char_* __a1005;
  this1003 = v999;
  __dat1004 = v1000;
  __a1005 = v1001;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1006 = this1003;
  struct std__allocator_char_* base1007 = (struct std__allocator_char_*)((char *)t1006 + 0);
  struct std__allocator_char_* t1008 = __a1005;
  std__allocator_char___allocator(base1007, t1008);
    char* t1009 = __dat1004;
    t1006->_M_p = t1009;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1010:
  _Bool __retval1011;
    _Bool c1012 = 0;
    __retval1011 = c1012;
    _Bool t1013 = __retval1011;
    return t1013;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1014, char* v1015) {
bb1016:
  char* __c11017;
  char* __c21018;
  _Bool __retval1019;
  __c11017 = v1014;
  __c21018 = v1015;
  char* t1020 = __c11017;
  char t1021 = *t1020;
  int cast1022 = (int)t1021;
  char* t1023 = __c21018;
  char t1024 = *t1023;
  int cast1025 = (int)t1024;
  _Bool c1026 = ((cast1022 == cast1025)) ? 1 : 0;
  __retval1019 = c1026;
  _Bool t1027 = __retval1019;
  return t1027;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1028) {
bb1029:
  char* __p1030;
  unsigned long __retval1031;
  unsigned long __i1032;
  __p1030 = v1028;
  unsigned long c1033 = 0;
  __i1032 = c1033;
    char ref_tmp01034;
    while (1) {
      unsigned long t1035 = __i1032;
      char* t1036 = __p1030;
      char* ptr1037 = &(t1036)[t1035];
      char c1038 = 0;
      ref_tmp01034 = c1038;
      _Bool r1039 = __gnu_cxx__char_traits_char___eq(ptr1037, &ref_tmp01034);
      _Bool u1040 = !r1039;
      if (!u1040) break;
      unsigned long t1041 = __i1032;
      unsigned long u1042 = t1041 + 1;
      __i1032 = u1042;
    }
  unsigned long t1043 = __i1032;
  __retval1031 = t1043;
  unsigned long t1044 = __retval1031;
  return t1044;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1045) {
bb1046:
  char* __s1047;
  unsigned long __retval1048;
  __s1047 = v1045;
    _Bool r1049 = std____is_constant_evaluated();
    if (r1049) {
      char* t1050 = __s1047;
      unsigned long r1051 = __gnu_cxx__char_traits_char___length(t1050);
      __retval1048 = r1051;
      unsigned long t1052 = __retval1048;
      return t1052;
    }
  char* t1053 = __s1047;
  unsigned long r1054 = strlen(t1053);
  __retval1048 = r1054;
  unsigned long t1055 = __retval1048;
  return t1055;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1056, char* v1057, struct std__random_access_iterator_tag v1058) {
bb1059:
  char* __first1060;
  char* __last1061;
  struct std__random_access_iterator_tag unnamed1062;
  long __retval1063;
  __first1060 = v1056;
  __last1061 = v1057;
  unnamed1062 = v1058;
  char* t1064 = __last1061;
  char* t1065 = __first1060;
  long diff1066 = t1064 - t1065;
  __retval1063 = diff1066;
  long t1067 = __retval1063;
  return t1067;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1068) {
bb1069:
  char** unnamed1070;
  struct std__random_access_iterator_tag __retval1071;
  unnamed1070 = v1068;
  struct std__random_access_iterator_tag t1072 = __retval1071;
  return t1072;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1073, char* v1074) {
bb1075:
  char* __first1076;
  char* __last1077;
  long __retval1078;
  struct std__random_access_iterator_tag agg_tmp01079;
  __first1076 = v1073;
  __last1077 = v1074;
  char* t1080 = __first1076;
  char* t1081 = __last1077;
  struct std__random_access_iterator_tag r1082 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1076);
  agg_tmp01079 = r1082;
  struct std__random_access_iterator_tag t1083 = agg_tmp01079;
  long r1084 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1080, t1081, t1083);
  __retval1078 = r1084;
  long t1085 = __retval1078;
  return t1085;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1086, char* v1087) {
bb1088:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1089;
  char* __p1090;
  this1089 = v1086;
  __p1090 = v1087;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1091 = this1089;
  char* t1092 = __p1090;
  t1091->_M_dataplus._M_p = t1092;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1093) {
bb1094:
  struct std__allocator_char_* __a1095;
  unsigned long __retval1096;
  __a1095 = v1093;
  unsigned long c1097 = -1;
  unsigned long c1098 = 1;
  unsigned long b1099 = c1097 / c1098;
  __retval1096 = b1099;
  unsigned long t1100 = __retval1096;
  return t1100;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1101) {
bb1102:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1103;
  struct std__allocator_char_* __retval1104;
  this1103 = v1101;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1105 = this1103;
  struct std__allocator_char_* base1106 = (struct std__allocator_char_*)((char *)&(t1105->_M_dataplus) + 0);
  __retval1104 = base1106;
  struct std__allocator_char_* t1107 = __retval1104;
  return t1107;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1108, unsigned long* v1109) {
bb1110:
  unsigned long* __a1111;
  unsigned long* __b1112;
  unsigned long* __retval1113;
  __a1111 = v1108;
  __b1112 = v1109;
    unsigned long* t1114 = __b1112;
    unsigned long t1115 = *t1114;
    unsigned long* t1116 = __a1111;
    unsigned long t1117 = *t1116;
    _Bool c1118 = ((t1115 < t1117)) ? 1 : 0;
    if (c1118) {
      unsigned long* t1119 = __b1112;
      __retval1113 = t1119;
      unsigned long* t1120 = __retval1113;
      return t1120;
    }
  unsigned long* t1121 = __a1111;
  __retval1113 = t1121;
  unsigned long* t1122 = __retval1113;
  return t1122;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1123) {
bb1124:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1125;
  unsigned long __retval1126;
  unsigned long __diffmax1127;
  unsigned long __allocmax1128;
  this1125 = v1123;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1129 = this1125;
  unsigned long c1130 = 9223372036854775807;
  __diffmax1127 = c1130;
  struct std__allocator_char_* r1131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1129);
  unsigned long r1132 = std__allocator_traits_std__allocator_char_____max_size(r1131);
  __allocmax1128 = r1132;
  unsigned long* r1133 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1127, &__allocmax1128);
  unsigned long t1134 = *r1133;
  unsigned long c1135 = 1;
  unsigned long b1136 = t1134 - c1135;
  __retval1126 = b1136;
  unsigned long t1137 = __retval1126;
  return t1137;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1138) {
bb1139:
  struct std____new_allocator_char_* this1140;
  unsigned long __retval1141;
  this1140 = v1138;
  struct std____new_allocator_char_* t1142 = this1140;
  unsigned long c1143 = 9223372036854775807;
  unsigned long c1144 = 1;
  unsigned long b1145 = c1143 / c1144;
  __retval1141 = b1145;
  unsigned long t1146 = __retval1141;
  return t1146;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1147, unsigned long v1148, void* v1149) {
bb1150:
  struct std____new_allocator_char_* this1151;
  unsigned long __n1152;
  void* unnamed1153;
  char* __retval1154;
  this1151 = v1147;
  __n1152 = v1148;
  unnamed1153 = v1149;
  struct std____new_allocator_char_* t1155 = this1151;
    unsigned long t1156 = __n1152;
    unsigned long r1157 = std____new_allocator_char____M_max_size___const(t1155);
    _Bool c1158 = ((t1156 > r1157)) ? 1 : 0;
    if (c1158) {
        unsigned long t1159 = __n1152;
        unsigned long c1160 = -1;
        unsigned long c1161 = 1;
        unsigned long b1162 = c1160 / c1161;
        _Bool c1163 = ((t1159 > b1162)) ? 1 : 0;
        if (c1163) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1164 = 1;
    unsigned long c1165 = 16;
    _Bool c1166 = ((c1164 > c1165)) ? 1 : 0;
    if (c1166) {
      unsigned long __al1167;
      unsigned long c1168 = 1;
      __al1167 = c1168;
      unsigned long t1169 = __n1152;
      unsigned long c1170 = 1;
      unsigned long b1171 = t1169 * c1170;
      unsigned long t1172 = __al1167;
      void* r1173 = operator_new_2(b1171, t1172);
      char* cast1174 = (char*)r1173;
      __retval1154 = cast1174;
      char* t1175 = __retval1154;
      return t1175;
    }
  unsigned long t1176 = __n1152;
  unsigned long c1177 = 1;
  unsigned long b1178 = t1176 * c1177;
  void* r1179 = operator_new(b1178);
  char* cast1180 = (char*)r1179;
  __retval1154 = cast1180;
  char* t1181 = __retval1154;
  return t1181;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1182, unsigned long v1183) {
bb1184:
  struct std__allocator_char_* this1185;
  unsigned long __n1186;
  char* __retval1187;
  this1185 = v1182;
  __n1186 = v1183;
  struct std__allocator_char_* t1188 = this1185;
    _Bool r1189 = std____is_constant_evaluated();
    if (r1189) {
        unsigned long t1190 = __n1186;
        unsigned long c1191 = 1;
        unsigned long ovr1192;
        _Bool ovf1193 = __builtin_mul_overflow(t1190, c1191, &ovr1192);
        __n1186 = ovr1192;
        if (ovf1193) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1194 = __n1186;
      void* r1195 = operator_new(t1194);
      char* cast1196 = (char*)r1195;
      __retval1187 = cast1196;
      char* t1197 = __retval1187;
      return t1197;
    }
  struct std____new_allocator_char_* base1198 = (struct std____new_allocator_char_*)((char *)t1188 + 0);
  unsigned long t1199 = __n1186;
  void* c1200 = ((void*)0);
  char* r1201 = std____new_allocator_char___allocate(base1198, t1199, c1200);
  __retval1187 = r1201;
  char* t1202 = __retval1187;
  return t1202;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1203, unsigned long v1204) {
bb1205:
  struct std__allocator_char_* __a1206;
  unsigned long __n1207;
  char* __retval1208;
  __a1206 = v1203;
  __n1207 = v1204;
  struct std__allocator_char_* t1209 = __a1206;
  unsigned long t1210 = __n1207;
  char* r1211 = std__allocator_char___allocate(t1209, t1210);
  __retval1208 = r1211;
  char* t1212 = __retval1208;
  return t1212;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1213, unsigned long v1214) {
bb1215:
  struct std__allocator_char_* __a1216;
  unsigned long __n1217;
  char* __retval1218;
  char* __p1219;
  __a1216 = v1213;
  __n1217 = v1214;
  struct std__allocator_char_* t1220 = __a1216;
  unsigned long t1221 = __n1217;
  char* r1222 = std__allocator_traits_std__allocator_char_____allocate(t1220, t1221);
  __p1219 = r1222;
  char* t1223 = __p1219;
  __retval1218 = t1223;
  char* t1224 = __retval1218;
  return t1224;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1225) {
bb1226:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1227;
  struct std__allocator_char_* __retval1228;
  this1227 = v1225;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1229 = this1227;
  struct std__allocator_char_* base1230 = (struct std__allocator_char_*)((char *)&(t1229->_M_dataplus) + 0);
  __retval1228 = base1230;
  struct std__allocator_char_* t1231 = __retval1228;
  return t1231;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232, unsigned long* v1233, unsigned long v1234) {
bb1235:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1236;
  unsigned long* __capacity1237;
  unsigned long __old_capacity1238;
  char* __retval1239;
  this1236 = v1232;
  __capacity1237 = v1233;
  __old_capacity1238 = v1234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1240 = this1236;
    unsigned long* t1241 = __capacity1237;
    unsigned long t1242 = *t1241;
    unsigned long r1243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1240);
    _Bool c1244 = ((t1242 > r1243)) ? 1 : 0;
    if (c1244) {
      char* cast1245 = (char*)&(_str_14);
      std____throw_length_error(cast1245);
    }
    unsigned long* t1246 = __capacity1237;
    unsigned long t1247 = *t1246;
    unsigned long t1248 = __old_capacity1238;
    _Bool c1249 = ((t1247 > t1248)) ? 1 : 0;
    _Bool ternary1250;
    if (c1249) {
      unsigned long* t1251 = __capacity1237;
      unsigned long t1252 = *t1251;
      unsigned long c1253 = 2;
      unsigned long t1254 = __old_capacity1238;
      unsigned long b1255 = c1253 * t1254;
      _Bool c1256 = ((t1252 < b1255)) ? 1 : 0;
      ternary1250 = (_Bool)c1256;
    } else {
      _Bool c1257 = 0;
      ternary1250 = (_Bool)c1257;
    }
    if (ternary1250) {
      unsigned long c1258 = 2;
      unsigned long t1259 = __old_capacity1238;
      unsigned long b1260 = c1258 * t1259;
      unsigned long* t1261 = __capacity1237;
      *t1261 = b1260;
        unsigned long* t1262 = __capacity1237;
        unsigned long t1263 = *t1262;
        unsigned long r1264 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1240);
        _Bool c1265 = ((t1263 > r1264)) ? 1 : 0;
        if (c1265) {
          unsigned long r1266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1240);
          unsigned long* t1267 = __capacity1237;
          *t1267 = r1266;
        }
    }
  struct std__allocator_char_* r1268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1240);
  unsigned long* t1269 = __capacity1237;
  unsigned long t1270 = *t1269;
  unsigned long c1271 = 1;
  unsigned long b1272 = t1270 + c1271;
  char* r1273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1268, b1272);
  __retval1239 = r1273;
  char* t1274 = __retval1239;
  return t1274;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1275, unsigned long v1276) {
bb1277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1278;
  unsigned long __capacity1279;
  this1278 = v1275;
  __capacity1279 = v1276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1280 = this1278;
  unsigned long t1281 = __capacity1279;
  t1280->field2._M_allocated_capacity = t1281;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1282:
  _Bool __retval1283;
    _Bool c1284 = 0;
    __retval1283 = c1284;
    _Bool t1285 = __retval1283;
    return t1285;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1286) {
bb1287:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1288;
  this1288 = v1286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1289 = this1288;
    _Bool r1290 = std__is_constant_evaluated();
    if (r1290) {
        unsigned long __i1291;
        unsigned long c1292 = 0;
        __i1291 = c1292;
        while (1) {
          unsigned long t1294 = __i1291;
          unsigned long c1295 = 15;
          _Bool c1296 = ((t1294 <= c1295)) ? 1 : 0;
          if (!c1296) break;
          char c1297 = 0;
          unsigned long t1298 = __i1291;
          t1289->field2._M_local_buf[t1298] = c1297;
        for_step1293: ;
          unsigned long t1299 = __i1291;
          unsigned long u1300 = t1299 + 1;
          __i1291 = u1300;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1301, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1302) {
bb1303:
  struct _Guard* this1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1305;
  this1304 = v1301;
  __s1305 = v1302;
  struct _Guard* t1306 = this1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1307 = __s1305;
  t1306->_M_guarded = t1307;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1308, char* v1309) {
bb1310:
  char* __location1311;
  char* __args1312;
  char* __retval1313;
  void* __loc1314;
  __location1311 = v1308;
  __args1312 = v1309;
  char* t1315 = __location1311;
  void* cast1316 = (void*)t1315;
  __loc1314 = cast1316;
    void* t1317 = __loc1314;
    char* cast1318 = (char*)t1317;
    char* t1319 = __args1312;
    char t1320 = *t1319;
    *cast1318 = t1320;
    __retval1313 = cast1318;
    char* t1321 = __retval1313;
    return t1321;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1322, char* v1323) {
bb1324:
  char* __c11325;
  char* __c21326;
  __c11325 = v1322;
  __c21326 = v1323;
    _Bool r1327 = std____is_constant_evaluated();
    if (r1327) {
      char* t1328 = __c11325;
      char* t1329 = __c21326;
      char* r1330 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1328, t1329);
    } else {
      char* t1331 = __c21326;
      char t1332 = *t1331;
      char* t1333 = __c11325;
      *t1333 = t1332;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1334, char* v1335, unsigned long v1336) {
bb1337:
  char* __s11338;
  char* __s21339;
  unsigned long __n1340;
  char* __retval1341;
  __s11338 = v1334;
  __s21339 = v1335;
  __n1340 = v1336;
    unsigned long t1342 = __n1340;
    unsigned long c1343 = 0;
    _Bool c1344 = ((t1342 == c1343)) ? 1 : 0;
    if (c1344) {
      char* t1345 = __s11338;
      __retval1341 = t1345;
      char* t1346 = __retval1341;
      return t1346;
    }
    _Bool r1347 = std____is_constant_evaluated();
    if (r1347) {
        unsigned long __i1348;
        unsigned long c1349 = 0;
        __i1348 = c1349;
        while (1) {
          unsigned long t1351 = __i1348;
          unsigned long t1352 = __n1340;
          _Bool c1353 = ((t1351 < t1352)) ? 1 : 0;
          if (!c1353) break;
          char* t1354 = __s11338;
          unsigned long t1355 = __i1348;
          char* ptr1356 = &(t1354)[t1355];
          unsigned long t1357 = __i1348;
          char* t1358 = __s21339;
          char* ptr1359 = &(t1358)[t1357];
          char* r1360 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1356, ptr1359);
        for_step1350: ;
          unsigned long t1361 = __i1348;
          unsigned long u1362 = t1361 + 1;
          __i1348 = u1362;
        }
      char* t1363 = __s11338;
      __retval1341 = t1363;
      char* t1364 = __retval1341;
      return t1364;
    }
  char* t1365 = __s11338;
  void* cast1366 = (void*)t1365;
  char* t1367 = __s21339;
  void* cast1368 = (void*)t1367;
  unsigned long t1369 = __n1340;
  unsigned long c1370 = 1;
  unsigned long b1371 = t1369 * c1370;
  void* r1372 = memcpy(cast1366, cast1368, b1371);
  char* t1373 = __s11338;
  __retval1341 = t1373;
  char* t1374 = __retval1341;
  return t1374;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1375, char* v1376, unsigned long v1377) {
bb1378:
  char* __s11379;
  char* __s21380;
  unsigned long __n1381;
  char* __retval1382;
  __s11379 = v1375;
  __s21380 = v1376;
  __n1381 = v1377;
    unsigned long t1383 = __n1381;
    unsigned long c1384 = 0;
    _Bool c1385 = ((t1383 == c1384)) ? 1 : 0;
    if (c1385) {
      char* t1386 = __s11379;
      __retval1382 = t1386;
      char* t1387 = __retval1382;
      return t1387;
    }
    _Bool r1388 = std____is_constant_evaluated();
    if (r1388) {
      char* t1389 = __s11379;
      char* t1390 = __s21380;
      unsigned long t1391 = __n1381;
      char* r1392 = __gnu_cxx__char_traits_char___copy(t1389, t1390, t1391);
      __retval1382 = r1392;
      char* t1393 = __retval1382;
      return t1393;
    }
  char* t1394 = __s11379;
  void* cast1395 = (void*)t1394;
  char* t1396 = __s21380;
  void* cast1397 = (void*)t1396;
  unsigned long t1398 = __n1381;
  void* r1399 = memcpy(cast1395, cast1397, t1398);
  char* cast1400 = (char*)r1399;
  __retval1382 = cast1400;
  char* t1401 = __retval1382;
  return t1401;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1402, char* v1403, unsigned long v1404) {
bb1405:
  char* __d1406;
  char* __s1407;
  unsigned long __n1408;
  __d1406 = v1402;
  __s1407 = v1403;
  __n1408 = v1404;
    unsigned long t1409 = __n1408;
    unsigned long c1410 = 1;
    _Bool c1411 = ((t1409 == c1410)) ? 1 : 0;
    if (c1411) {
      char* t1412 = __d1406;
      char* t1413 = __s1407;
      std__char_traits_char___assign(t1412, t1413);
    } else {
      char* t1414 = __d1406;
      char* t1415 = __s1407;
      unsigned long t1416 = __n1408;
      char* r1417 = std__char_traits_char___copy(t1414, t1415, t1416);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1418) {
bb1419:
  char* __it1420;
  char* __retval1421;
  __it1420 = v1418;
  char* t1422 = __it1420;
  __retval1421 = t1422;
  char* t1423 = __retval1421;
  return t1423;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1424, char* v1425, char* v1426) {
bb1427:
  char* __p1428;
  char* __k11429;
  char* __k21430;
  __p1428 = v1424;
  __k11429 = v1425;
  __k21430 = v1426;
    char* t1431 = __p1428;
    char* t1432 = __k11429;
    char* r1433 = char_const__std____niter_base_char_const__(t1432);
    char* t1434 = __k21430;
    char* t1435 = __k11429;
    long diff1436 = t1434 - t1435;
    unsigned long cast1437 = (unsigned long)diff1436;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1431, r1433, cast1437);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1438) {
bb1439:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1440;
  char* __retval1441;
  this1440 = v1438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1442 = this1440;
  char* t1443 = t1442->_M_dataplus._M_p;
  __retval1441 = t1443;
  char* t1444 = __retval1441;
  return t1444;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1445, unsigned long v1446) {
bb1447:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1448;
  unsigned long __length1449;
  this1448 = v1445;
  __length1449 = v1446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1450 = this1448;
  unsigned long t1451 = __length1449;
  t1450->_M_string_length = t1451;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1452, unsigned long v1453) {
bb1454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1455;
  unsigned long __n1456;
  char ref_tmp01457;
  this1455 = v1452;
  __n1456 = v1453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1458 = this1455;
  unsigned long t1459 = __n1456;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1458, t1459);
  unsigned long t1460 = __n1456;
  char* r1461 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1458);
  char* ptr1462 = &(r1461)[t1460];
  char c1463 = 0;
  ref_tmp01457 = c1463;
  std__char_traits_char___assign(ptr1462, &ref_tmp01457);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1464) {
bb1465:
  struct _Guard* this1466;
  this1466 = v1464;
  struct _Guard* t1467 = this1466;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1468 = t1467->_M_guarded;
    _Bool cast1469 = (_Bool)t1468;
    if (cast1469) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1470 = t1467->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1470);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1471, char* v1472, char* v1473, struct std__forward_iterator_tag v1474) {
bb1475:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1476;
  char* __beg1477;
  char* __end1478;
  struct std__forward_iterator_tag unnamed1479;
  unsigned long __dnew1480;
  struct _Guard __guard1481;
  this1476 = v1471;
  __beg1477 = v1472;
  __end1478 = v1473;
  unnamed1479 = v1474;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1482 = this1476;
  char* t1483 = __beg1477;
  char* t1484 = __end1478;
  long r1485 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1483, t1484);
  unsigned long cast1486 = (unsigned long)r1485;
  __dnew1480 = cast1486;
    unsigned long t1487 = __dnew1480;
    unsigned long c1488 = 15;
    _Bool c1489 = ((t1487 > c1488)) ? 1 : 0;
    if (c1489) {
      unsigned long c1490 = 0;
      char* r1491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1482, &__dnew1480, c1490);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1482, r1491);
      unsigned long t1492 = __dnew1480;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1482, t1492);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1482);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1481, t1482);
    char* r1493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1482);
    char* t1494 = __beg1477;
    char* t1495 = __end1478;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1493, t1494, t1495);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1496 = ((void*)0);
    __guard1481._M_guarded = c1496;
    unsigned long t1497 = __dnew1480;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1482, t1497);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1481);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1498) {
bb1499:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1500;
  this1500 = v1498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1501 = this1500;
  {
    struct std__allocator_char_* base1502 = (struct std__allocator_char_*)((char *)t1501 + 0);
    std__allocator_char____allocator(base1502);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1503, struct std____new_allocator_char_* v1504) {
bb1505:
  struct std____new_allocator_char_* this1506;
  struct std____new_allocator_char_* unnamed1507;
  this1506 = v1503;
  unnamed1507 = v1504;
  struct std____new_allocator_char_* t1508 = this1506;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1509) {
bb1510:
  char* __r1511;
  char* __retval1512;
  __r1511 = v1509;
  char* t1513 = __r1511;
  __retval1512 = t1513;
  char* t1514 = __retval1512;
  return t1514;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1515) {
bb1516:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1517;
  char* __retval1518;
  this1517 = v1515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1519 = this1517;
  char* cast1520 = (char*)&(t1519->field2._M_local_buf);
  char* r1521 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1520);
  __retval1518 = r1521;
  char* t1522 = __retval1518;
  return t1522;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1523) {
bb1524:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1525;
  _Bool __retval1526;
  this1525 = v1523;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1527 = this1525;
    char* r1528 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1527);
    char* r1529 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1527);
    _Bool c1530 = ((r1528 == r1529)) ? 1 : 0;
    if (c1530) {
        unsigned long t1531 = t1527->_M_string_length;
        unsigned long c1532 = 15;
        _Bool c1533 = ((t1531 > c1532)) ? 1 : 0;
        if (c1533) {
          __builtin_unreachable();
        }
      _Bool c1534 = 1;
      __retval1526 = c1534;
      _Bool t1535 = __retval1526;
      return t1535;
    }
  _Bool c1536 = 0;
  __retval1526 = c1536;
  _Bool t1537 = __retval1526;
  return t1537;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1538, char* v1539, unsigned long v1540) {
bb1541:
  struct std____new_allocator_char_* this1542;
  char* __p1543;
  unsigned long __n1544;
  this1542 = v1538;
  __p1543 = v1539;
  __n1544 = v1540;
  struct std____new_allocator_char_* t1545 = this1542;
    unsigned long c1546 = 1;
    unsigned long c1547 = 16;
    _Bool c1548 = ((c1546 > c1547)) ? 1 : 0;
    if (c1548) {
      char* t1549 = __p1543;
      void* cast1550 = (void*)t1549;
      unsigned long t1551 = __n1544;
      unsigned long c1552 = 1;
      unsigned long b1553 = t1551 * c1552;
      unsigned long c1554 = 1;
      operator_delete_3(cast1550, b1553, c1554);
      return;
    }
  char* t1555 = __p1543;
  void* cast1556 = (void*)t1555;
  unsigned long t1557 = __n1544;
  unsigned long c1558 = 1;
  unsigned long b1559 = t1557 * c1558;
  operator_delete_2(cast1556, b1559);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1560, char* v1561, unsigned long v1562) {
bb1563:
  struct std__allocator_char_* this1564;
  char* __p1565;
  unsigned long __n1566;
  this1564 = v1560;
  __p1565 = v1561;
  __n1566 = v1562;
  struct std__allocator_char_* t1567 = this1564;
    _Bool r1568 = std____is_constant_evaluated();
    if (r1568) {
      char* t1569 = __p1565;
      void* cast1570 = (void*)t1569;
      operator_delete(cast1570);
      return;
    }
  struct std____new_allocator_char_* base1571 = (struct std____new_allocator_char_*)((char *)t1567 + 0);
  char* t1572 = __p1565;
  unsigned long t1573 = __n1566;
  std____new_allocator_char___deallocate(base1571, t1572, t1573);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1574, char* v1575, unsigned long v1576) {
bb1577:
  struct std__allocator_char_* __a1578;
  char* __p1579;
  unsigned long __n1580;
  __a1578 = v1574;
  __p1579 = v1575;
  __n1580 = v1576;
  struct std__allocator_char_* t1581 = __a1578;
  char* t1582 = __p1579;
  unsigned long t1583 = __n1580;
  std__allocator_char___deallocate(t1581, t1582, t1583);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1584, unsigned long v1585) {
bb1586:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1587;
  unsigned long __size1588;
  this1587 = v1584;
  __size1588 = v1585;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1589 = this1587;
  struct std__allocator_char_* r1590 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1589);
  char* r1591 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1589);
  unsigned long t1592 = __size1588;
  unsigned long c1593 = 1;
  unsigned long b1594 = t1592 + c1593;
  std__allocator_traits_std__allocator_char_____deallocate(r1590, r1591, b1594);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1595) {
bb1596:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1597;
  this1597 = v1595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1598 = this1597;
    _Bool r1599 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1598);
    _Bool u1600 = !r1599;
    if (u1600) {
      unsigned long t1601 = t1598->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1598, t1601);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1602, struct std__allocator_char_* v1603) {
bb1604:
  struct std__allocator_char_* this1605;
  struct std__allocator_char_* __a1606;
  this1605 = v1602;
  __a1606 = v1603;
  struct std__allocator_char_* t1607 = this1605;
  struct std____new_allocator_char_* base1608 = (struct std____new_allocator_char_*)((char *)t1607 + 0);
  struct std__allocator_char_* t1609 = __a1606;
  struct std____new_allocator_char_* base1610 = (struct std____new_allocator_char_*)((char *)t1609 + 0);
  std____new_allocator_char_____new_allocator(base1608, base1610);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1611) {
bb1612:
  struct std__allocator_char_* __rhs1613;
  struct std__allocator_char_ __retval1614;
  __rhs1613 = v1611;
  struct std__allocator_char_* t1615 = __rhs1613;
  std__allocator_char___allocator(&__retval1614, t1615);
  struct std__allocator_char_ t1616 = __retval1614;
  return t1616;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1617) {
bb1618:
  struct std__allocator_char_* __a1619;
  struct std__allocator_char_ __retval1620;
  __a1619 = v1617;
  struct std__allocator_char_* t1621 = __a1619;
  struct std__allocator_char_ r1622 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1621);
  __retval1620 = r1622;
  struct std__allocator_char_ t1623 = __retval1620;
  return t1623;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1624, char* v1625, struct std__allocator_char_* v1626) {
bb1627:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1628;
  char* __dat1629;
  struct std__allocator_char_* __a1630;
  this1628 = v1624;
  __dat1629 = v1625;
  __a1630 = v1626;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1631 = this1628;
  struct std__allocator_char_* base1632 = (struct std__allocator_char_*)((char *)t1631 + 0);
  struct std__allocator_char_* t1633 = __a1630;
  std__allocator_char___allocator(base1632, t1633);
    char* t1634 = __dat1629;
    t1631->_M_p = t1634;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1635, char* v1636, unsigned long v1637) {
bb1638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1639;
  char* __str1640;
  unsigned long __n1641;
  this1639 = v1635;
  __str1640 = v1636;
  __n1641 = v1637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1642 = this1639;
    unsigned long t1643 = __n1641;
    unsigned long c1644 = 15;
    _Bool c1645 = ((t1643 > c1644)) ? 1 : 0;
    if (c1645) {
      unsigned long c1646 = 0;
      char* r1647 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1642, &__n1641, c1646);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1642, r1647);
      unsigned long t1648 = __n1641;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1642, t1648);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1642);
    }
    unsigned long t1649 = __n1641;
    _Bool cast1650 = (_Bool)t1649;
    _Bool ternary1651;
    if (cast1650) {
      _Bool c1652 = 1;
      ternary1651 = (_Bool)c1652;
    } else {
      _Bool c1653 = 1;
      ternary1651 = (_Bool)c1653;
    }
    if (ternary1651) {
      char* r1654 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1642);
      char* t1655 = __str1640;
      unsigned long t1656 = __n1641;
      _Bool c1657 = 1;
      unsigned long cast1658 = (unsigned long)c1657;
      unsigned long b1659 = t1656 + cast1658;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1654, t1655, b1659);
    }
  unsigned long t1660 = __n1641;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1642, t1660);
    _Bool c1661 = 0;
    if (c1661) {
      char ref_tmp01662;
      unsigned long t1663 = __n1641;
      char* r1664 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1642);
      char* ptr1665 = &(r1664)[t1663];
      char c1666 = 0;
      ref_tmp01662 = c1666;
      std__char_traits_char___assign(ptr1665, &ref_tmp01662);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1667) {
bb1668:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1669;
  unsigned long __retval1670;
  unsigned long __sz1671;
  this1669 = v1667;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1672 = this1669;
  unsigned long t1673 = t1672->_M_string_length;
  __sz1671 = t1673;
    unsigned long t1674 = __sz1671;
    unsigned long r1675 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1672);
    _Bool c1676 = ((t1674 > r1675)) ? 1 : 0;
    if (c1676) {
      __builtin_unreachable();
    }
  unsigned long t1677 = __sz1671;
  __retval1670 = t1677;
  unsigned long t1678 = __retval1670;
  return t1678;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1679) {
bb1680:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1681;
  unsigned long __retval1682;
  this1681 = v1679;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1683 = this1681;
  unsigned long r1684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1683);
  __retval1682 = r1684;
  unsigned long t1685 = __retval1682;
  return t1685;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1686) {
bb1687:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this1688;
  char** __retval1689;
  this1688 = v1686;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1690 = this1688;
  __retval1689 = &t1690->_M_current;
  char** t1691 = __retval1689;
  return t1691;
}

