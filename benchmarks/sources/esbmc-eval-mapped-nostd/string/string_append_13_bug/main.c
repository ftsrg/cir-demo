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

char _str[25] = "print 10 and then 5 more";
char _str_1[17] = " and then 5 more";
char _str_2[26] = "str != \" and then 5 more\"";
char _str_3[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_13_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[22] = "basic_string::replace";
char _str_7[25] = "basic_string::_M_replace";
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p3, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p4);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v7) {
bb8:
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this16;
  char* __s17;
  struct std__allocator_char_* __a18;
  char* __end19;
  struct std__forward_iterator_tag agg_tmp020;
  this16 = v12;
  __s17 = v13;
  __a18 = v14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = this16;
  char* r22 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t21);
  struct std__allocator_char_* t23 = __a18;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t21->_M_dataplus, r22, t23);
      char* t24 = __s17;
      char* c25 = ((void*)0);
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
        char* cast27 = (char*)&(_str_4);
        std____throw_logic_error(cast27);
      }
    char* t28 = __s17;
    char* t29 = __s17;
    unsigned long r30 = std__char_traits_char___length(t29);
    char* ptr31 = &(t28)[r30];
    __end19 = ptr31;
    char* t32 = __s17;
    char* t33 = __end19;
    struct std__forward_iterator_tag t34 = agg_tmp020;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t21, t32, t33, t34);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v35) {
bb36:
  struct std__allocator_char_* this37;
  this37 = v35;
  struct std__allocator_char_* t38 = this37;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39, unsigned long v40, unsigned long v41, char* v42) {
bb43:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this44;
  unsigned long __n145;
  unsigned long __n246;
  char* __s47;
  this44 = v39;
  __n145 = v40;
  __n246 = v41;
  __s47 = v42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = this44;
    unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t48);
    unsigned long r50 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
    unsigned long t51 = __n145;
    unsigned long b52 = r50 - t51;
    unsigned long b53 = r49 - b52;
    unsigned long t54 = __n246;
    _Bool c55 = ((b53 < t54)) ? 1 : 0;
    if (c55) {
      char* t56 = __s47;
      std____throw_length_error(t56);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v57) {
bb58:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this59;
  unsigned long __retval60;
  unsigned long __sz61;
  this59 = v57;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t62 = this59;
  unsigned long t63 = t62->_M_string_length;
  __sz61 = t63;
    unsigned long t64 = __sz61;
    unsigned long r65 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t62);
    _Bool c66 = ((t64 > r65)) ? 1 : 0;
    if (c66) {
      __builtin_unreachable();
    }
  unsigned long t67 = __sz61;
  __retval60 = t67;
  unsigned long t68 = __retval60;
  return t68;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69) {
bb70:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this71;
  unsigned long __retval72;
  unsigned long __sz73;
  this71 = v69;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t74 = this71;
  _Bool r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t74);
  unsigned long ternary76;
  if (r75) {
    unsigned long c77 = 15;
    ternary76 = (unsigned long)c77;
  } else {
    unsigned long t78 = t74->field2._M_allocated_capacity;
    ternary76 = (unsigned long)t78;
  }
  __sz73 = ternary76;
    unsigned long t79 = __sz73;
    unsigned long c80 = 15;
    _Bool c81 = ((t79 < c80)) ? 1 : 0;
    _Bool ternary82;
    if (c81) {
      _Bool c83 = 1;
      ternary82 = (_Bool)c83;
    } else {
      unsigned long t84 = __sz73;
      unsigned long r85 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t74);
      _Bool c86 = ((t84 > r85)) ? 1 : 0;
      ternary82 = (_Bool)c86;
    }
    if (ternary82) {
      __builtin_unreachable();
    }
  unsigned long t87 = __sz73;
  __retval72 = t87;
  unsigned long t88 = __retval72;
  return t88;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v89, char* v90, char* v91) {
bb92:
  struct std__less_const_char___* this93;
  char* __x94;
  char* __y95;
  _Bool __retval96;
  this93 = v89;
  __x94 = v90;
  __y95 = v91;
  struct std__less_const_char___* t97 = this93;
    _Bool r98 = std____is_constant_evaluated();
    if (r98) {
      char* t99 = __x94;
      char* t100 = __y95;
      _Bool c101 = ((t99 < t100)) ? 1 : 0;
      __retval96 = c101;
      _Bool t102 = __retval96;
      return t102;
    }
  char* t103 = __x94;
  unsigned long cast104 = (unsigned long)t103;
  char* t105 = __y95;
  unsigned long cast106 = (unsigned long)t105;
  _Bool c107 = ((cast104 < cast106)) ? 1 : 0;
  __retval96 = c107;
  _Bool t108 = __retval96;
  return t108;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v109, char* v110) {
bb111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this112;
  char* __s113;
  _Bool __retval114;
  struct std__less_const_char___ ref_tmp0115;
  this112 = v109;
  __s113 = v110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t116 = this112;
  char* t117 = __s113;
  char* r118 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t116);
  _Bool r119 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0115, t117, r118);
  _Bool ternary120;
  if (r119) {
    _Bool c121 = 1;
    ternary120 = (_Bool)c121;
  } else {
    struct std__less_const_char___ ref_tmp1122;
    char* r123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t116);
    unsigned long r124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t116);
    char* ptr125 = &(r123)[r124];
    char* t126 = __s113;
    _Bool r127 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1122, ptr125, t126);
    ternary120 = (_Bool)r127;
  }
  __retval114 = ternary120;
  _Bool t128 = __retval114;
  return t128;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v129, char* v130) {
bb131:
  char* __c1132;
  char* __c2133;
  __c1132 = v129;
  __c2133 = v130;
    _Bool r134 = std____is_constant_evaluated();
    if (r134) {
      char* t135 = __c1132;
      char* t136 = __c2133;
      char* r137 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t135, t136);
    } else {
      char* t138 = __c2133;
      char t139 = *t138;
      char* t140 = __c1132;
      *t140 = t139;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v141, char* v142, unsigned long v143) {
bb144:
  char* __s1145;
  char* __s2146;
  unsigned long __n147;
  char* __retval148;
  __s1145 = v141;
  __s2146 = v142;
  __n147 = v143;
    unsigned long t149 = __n147;
    unsigned long c150 = 0;
    _Bool c151 = ((t149 == c150)) ? 1 : 0;
    if (c151) {
      char* t152 = __s1145;
      __retval148 = t152;
      char* t153 = __retval148;
      return t153;
    }
    _Bool r154 = std____is_constant_evaluated();
    if (r154) {
        char* t155 = __s2146;
        char* t156 = __s1145;
        _Bool c157 = ((t155 < t156)) ? 1 : 0;
        _Bool isconst158 = 0;
        _Bool ternary159;
        if (isconst158) {
          char* t160 = __s1145;
          char* t161 = __s2146;
          _Bool c162 = ((t160 > t161)) ? 1 : 0;
          ternary159 = (_Bool)c162;
        } else {
          _Bool c163 = 0;
          ternary159 = (_Bool)c163;
        }
        _Bool ternary164;
        if (ternary159) {
          char* t165 = __s1145;
          char* t166 = __s2146;
          unsigned long t167 = __n147;
          char* ptr168 = &(t166)[t167];
          _Bool c169 = ((t165 < ptr168)) ? 1 : 0;
          ternary164 = (_Bool)c169;
        } else {
          _Bool c170 = 0;
          ternary164 = (_Bool)c170;
        }
        if (ternary164) {
            do {
                unsigned long t171 = __n147;
                unsigned long u172 = t171 - 1;
                __n147 = u172;
                unsigned long t173 = __n147;
                char* t174 = __s1145;
                char* ptr175 = &(t174)[t173];
                unsigned long t176 = __n147;
                char* t177 = __s2146;
                char* ptr178 = &(t177)[t176];
                __gnu_cxx__char_traits_char___assign(ptr175, ptr178);
              unsigned long t179 = __n147;
              unsigned long c180 = 0;
              _Bool c181 = ((t179 > c180)) ? 1 : 0;
              if (!c181) break;
            } while (1);
        } else {
          char* t182 = __s1145;
          char* t183 = __s2146;
          unsigned long t184 = __n147;
          char* r185 = __gnu_cxx__char_traits_char___copy(t182, t183, t184);
        }
      char* t186 = __s1145;
      __retval148 = t186;
      char* t187 = __retval148;
      return t187;
    }
  char* t188 = __s1145;
  void* cast189 = (void*)t188;
  char* t190 = __s2146;
  void* cast191 = (void*)t190;
  unsigned long t192 = __n147;
  unsigned long c193 = 1;
  unsigned long b194 = t192 * c193;
  void* r195 = memmove(cast189, cast191, b194);
  char* t196 = __s1145;
  __retval148 = t196;
  char* t197 = __retval148;
  return t197;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v198, char* v199, unsigned long v200) {
bb201:
  char* __s1202;
  char* __s2203;
  unsigned long __n204;
  char* __retval205;
  __s1202 = v198;
  __s2203 = v199;
  __n204 = v200;
    unsigned long t206 = __n204;
    unsigned long c207 = 0;
    _Bool c208 = ((t206 == c207)) ? 1 : 0;
    if (c208) {
      char* t209 = __s1202;
      __retval205 = t209;
      char* t210 = __retval205;
      return t210;
    }
    _Bool r211 = std____is_constant_evaluated();
    if (r211) {
      char* t212 = __s1202;
      char* t213 = __s2203;
      unsigned long t214 = __n204;
      char* r215 = __gnu_cxx__char_traits_char___move(t212, t213, t214);
      __retval205 = r215;
      char* t216 = __retval205;
      return t216;
    }
  char* t217 = __s1202;
  void* cast218 = (void*)t217;
  char* t219 = __s2203;
  void* cast220 = (void*)t219;
  unsigned long t221 = __n204;
  void* r222 = memmove(cast218, cast220, t221);
  char* cast223 = (char*)r222;
  __retval205 = cast223;
  char* t224 = __retval205;
  return t224;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v225, char* v226, unsigned long v227) {
bb228:
  char* __d229;
  char* __s230;
  unsigned long __n231;
  __d229 = v225;
  __s230 = v226;
  __n231 = v227;
    unsigned long t232 = __n231;
    unsigned long c233 = 1;
    _Bool c234 = ((t232 == c233)) ? 1 : 0;
    if (c234) {
      char* t235 = __d229;
      char* t236 = __s230;
      std__char_traits_char___assign(t235, t236);
    } else {
      char* t237 = __d229;
      char* t238 = __s230;
      unsigned long t239 = __n231;
      char* r240 = std__char_traits_char___move(t237, t238, t239);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v241, char* v242, unsigned long v243, char* v244, unsigned long v245, unsigned long v246) {
bb247:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this248;
  char* __p249;
  unsigned long __len1250;
  char* __s251;
  unsigned long __len2252;
  unsigned long __how_much253;
  this248 = v241;
  __p249 = v242;
  __len1250 = v243;
  __s251 = v244;
  __len2252 = v245;
  __how_much253 = v246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t254 = this248;
    unsigned long t255 = __len2252;
    _Bool cast256 = (_Bool)t255;
    _Bool ternary257;
    if (cast256) {
      unsigned long t258 = __len2252;
      unsigned long t259 = __len1250;
      _Bool c260 = ((t258 <= t259)) ? 1 : 0;
      ternary257 = (_Bool)c260;
    } else {
      _Bool c261 = 0;
      ternary257 = (_Bool)c261;
    }
    if (ternary257) {
      char* t262 = __p249;
      char* t263 = __s251;
      unsigned long t264 = __len2252;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t262, t263, t264);
    }
    unsigned long t265 = __how_much253;
    _Bool cast266 = (_Bool)t265;
    _Bool ternary267;
    if (cast266) {
      unsigned long t268 = __len1250;
      unsigned long t269 = __len2252;
      _Bool c270 = ((t268 != t269)) ? 1 : 0;
      ternary267 = (_Bool)c270;
    } else {
      _Bool c271 = 0;
      ternary267 = (_Bool)c271;
    }
    if (ternary267) {
      char* t272 = __p249;
      unsigned long t273 = __len2252;
      char* ptr274 = &(t272)[t273];
      char* t275 = __p249;
      unsigned long t276 = __len1250;
      char* ptr277 = &(t275)[t276];
      unsigned long t278 = __how_much253;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr274, ptr277, t278);
    }
    unsigned long t279 = __len2252;
    unsigned long t280 = __len1250;
    _Bool c281 = ((t279 > t280)) ? 1 : 0;
    if (c281) {
        char* t282 = __s251;
        unsigned long t283 = __len2252;
        char* ptr284 = &(t282)[t283];
        char* t285 = __p249;
        unsigned long t286 = __len1250;
        char* ptr287 = &(t285)[t286];
        _Bool c288 = ((ptr284 <= ptr287)) ? 1 : 0;
        if (c288) {
          char* t289 = __p249;
          char* t290 = __s251;
          unsigned long t291 = __len2252;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t289, t290, t291);
        } else {
            char* t292 = __s251;
            char* t293 = __p249;
            unsigned long t294 = __len1250;
            char* ptr295 = &(t293)[t294];
            _Bool c296 = ((t292 >= ptr295)) ? 1 : 0;
            if (c296) {
              unsigned long __poff297;
              char* t298 = __s251;
              char* t299 = __p249;
              long diff300 = t298 - t299;
              unsigned long cast301 = (unsigned long)diff300;
              unsigned long t302 = __len2252;
              unsigned long t303 = __len1250;
              unsigned long b304 = t302 - t303;
              unsigned long b305 = cast301 + b304;
              __poff297 = b305;
              char* t306 = __p249;
              char* t307 = __p249;
              unsigned long t308 = __poff297;
              char* ptr309 = &(t307)[t308];
              unsigned long t310 = __len2252;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t306, ptr309, t310);
            } else {
              unsigned long __nleft311;
              char* t312 = __p249;
              unsigned long t313 = __len1250;
              char* ptr314 = &(t312)[t313];
              char* t315 = __s251;
              long diff316 = ptr314 - t315;
              unsigned long cast317 = (unsigned long)diff316;
              __nleft311 = cast317;
              char* t318 = __p249;
              char* t319 = __s251;
              unsigned long t320 = __nleft311;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t318, t319, t320);
              char* t321 = __p249;
              unsigned long t322 = __nleft311;
              char* ptr323 = &(t321)[t322];
              char* t324 = __p249;
              unsigned long t325 = __len2252;
              char* ptr326 = &(t324)[t325];
              unsigned long t327 = __len2252;
              unsigned long t328 = __nleft311;
              unsigned long b329 = t327 - t328;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr323, ptr326, b329);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this332;
  unsigned long __retval333;
  this332 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t334 = this332;
  unsigned long r335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t334);
  __retval333 = r335;
  unsigned long t336 = __retval333;
  return t336;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v337, unsigned long v338, unsigned long v339, char* v340, unsigned long v341) {
bb342:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this343;
  unsigned long __pos344;
  unsigned long __len1345;
  char* __s346;
  unsigned long __len2347;
  unsigned long __how_much348;
  unsigned long __new_capacity349;
  char* __r350;
  this343 = v337;
  __pos344 = v338;
  __len1345 = v339;
  __s346 = v340;
  __len2347 = v341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t351 = this343;
  unsigned long r352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t351);
  unsigned long t353 = __pos344;
  unsigned long b354 = r352 - t353;
  unsigned long t355 = __len1345;
  unsigned long b356 = b354 - t355;
  __how_much348 = b356;
  unsigned long r357 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t351);
  unsigned long t358 = __len2347;
  unsigned long b359 = r357 + t358;
  unsigned long t360 = __len1345;
  unsigned long b361 = b359 - t360;
  __new_capacity349 = b361;
  unsigned long r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t351);
  char* r363 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t351, &__new_capacity349, r362);
  __r350 = r363;
    unsigned long t364 = __pos344;
    _Bool cast365 = (_Bool)t364;
    if (cast365) {
      char* t366 = __r350;
      char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t351);
      unsigned long t368 = __pos344;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t366, r367, t368);
    }
    char* t369 = __s346;
    _Bool cast370 = (_Bool)t369;
    _Bool ternary371;
    if (cast370) {
      unsigned long t372 = __len2347;
      _Bool cast373 = (_Bool)t372;
      ternary371 = (_Bool)cast373;
    } else {
      _Bool c374 = 0;
      ternary371 = (_Bool)c374;
    }
    if (ternary371) {
      char* t375 = __r350;
      unsigned long t376 = __pos344;
      char* ptr377 = &(t375)[t376];
      char* t378 = __s346;
      unsigned long t379 = __len2347;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr377, t378, t379);
    }
    unsigned long t380 = __how_much348;
    _Bool cast381 = (_Bool)t380;
    if (cast381) {
      char* t382 = __r350;
      unsigned long t383 = __pos344;
      char* ptr384 = &(t382)[t383];
      unsigned long t385 = __len2347;
      char* ptr386 = &(ptr384)[t385];
      char* r387 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t351);
      unsigned long t388 = __pos344;
      char* ptr389 = &(r387)[t388];
      unsigned long t390 = __len1345;
      char* ptr391 = &(ptr389)[t390];
      unsigned long t392 = __how_much348;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr386, ptr391, t392);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t351);
  char* t393 = __r350;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t351, t393);
  unsigned long t394 = __new_capacity349;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t351, t394);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v395, unsigned long v396, unsigned long v397, char* v398, unsigned long v399) {
bb400:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this401;
  unsigned long __pos402;
  unsigned long __len1403;
  char* __s404;
  unsigned long __len2405;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval406;
  unsigned long __old_size407;
  unsigned long __new_size408;
  this401 = v395;
  __pos402 = v396;
  __len1403 = v397;
  __s404 = v398;
  __len2405 = v399;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t409 = this401;
  unsigned long t410 = __len1403;
  unsigned long t411 = __len2405;
  char* cast412 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t409, t410, t411, cast412);
  unsigned long r413 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t409);
  __old_size407 = r413;
  unsigned long t414 = __old_size407;
  unsigned long t415 = __len2405;
  unsigned long b416 = t414 + t415;
  unsigned long t417 = __len1403;
  unsigned long b418 = b416 - t417;
  __new_size408 = b418;
    unsigned long t419 = __new_size408;
    unsigned long r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t409);
    _Bool c421 = ((t419 <= r420)) ? 1 : 0;
    if (c421) {
      char* __p422;
      unsigned long __how_much423;
      char* r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t409);
      unsigned long t425 = __pos402;
      char* ptr426 = &(r424)[t425];
      __p422 = ptr426;
      unsigned long t427 = __old_size407;
      unsigned long t428 = __pos402;
      unsigned long b429 = t427 - t428;
      unsigned long t430 = __len1403;
      unsigned long b431 = b429 - t430;
      __how_much423 = b431;
        _Bool r432 = std__is_constant_evaluated();
        if (r432) {
          char* __newp433;
          struct std__allocator_char_* r434 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t409);
          unsigned long t435 = __new_size408;
          char* r436 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r434, t435);
          __newp433 = r436;
          char* t437 = __newp433;
          char* r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t409);
          unsigned long t439 = __pos402;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t437, r438, t439);
          char* t440 = __newp433;
          unsigned long t441 = __pos402;
          char* ptr442 = &(t440)[t441];
          char* t443 = __s404;
          unsigned long t444 = __len2405;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr442, t443, t444);
          char* t445 = __newp433;
          unsigned long t446 = __pos402;
          char* ptr447 = &(t445)[t446];
          unsigned long t448 = __len2405;
          char* ptr449 = &(ptr447)[t448];
          char* t450 = __p422;
          unsigned long t451 = __len1403;
          char* ptr452 = &(t450)[t451];
          unsigned long t453 = __how_much423;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr449, ptr452, t453);
          char* r454 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t409);
          char* t455 = __newp433;
          unsigned long t456 = __new_size408;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r454, t455, t456);
          struct std__allocator_char_* r457 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t409);
          char* t458 = __newp433;
          unsigned long t459 = __new_size408;
          std__allocator_char___deallocate(r457, t458, t459);
        } else {
            char* t460 = __s404;
            _Bool r461 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t409, t460);
            if (r461) {
                unsigned long t462 = __how_much423;
                _Bool cast463 = (_Bool)t462;
                _Bool ternary464;
                if (cast463) {
                  unsigned long t465 = __len1403;
                  unsigned long t466 = __len2405;
                  _Bool c467 = ((t465 != t466)) ? 1 : 0;
                  ternary464 = (_Bool)c467;
                } else {
                  _Bool c468 = 0;
                  ternary464 = (_Bool)c468;
                }
                if (ternary464) {
                  char* t469 = __p422;
                  unsigned long t470 = __len2405;
                  char* ptr471 = &(t469)[t470];
                  char* t472 = __p422;
                  unsigned long t473 = __len1403;
                  char* ptr474 = &(t472)[t473];
                  unsigned long t475 = __how_much423;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr471, ptr474, t475);
                }
                unsigned long t476 = __len2405;
                _Bool cast477 = (_Bool)t476;
                if (cast477) {
                  char* t478 = __p422;
                  char* t479 = __s404;
                  unsigned long t480 = __len2405;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t478, t479, t480);
                }
            } else {
              char* t481 = __p422;
              unsigned long t482 = __len1403;
              char* t483 = __s404;
              unsigned long t484 = __len2405;
              unsigned long t485 = __how_much423;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t409, t481, t482, t483, t484, t485);
            }
        }
    } else {
      unsigned long t486 = __pos402;
      unsigned long t487 = __len1403;
      char* t488 = __s404;
      unsigned long t489 = __len2405;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t409, t486, t487, t488, t489);
    }
  unsigned long t490 = __new_size408;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t409, t490);
  __retval406 = t409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t491 = __retval406;
  return t491;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v492, unsigned long v493, char* v494) {
bb495:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this496;
  unsigned long __pos497;
  char* __s498;
  unsigned long __retval499;
  this496 = v492;
  __pos497 = v493;
  __s498 = v494;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t500 = this496;
    unsigned long t501 = __pos497;
    unsigned long r502 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t500);
    _Bool c503 = ((t501 > r502)) ? 1 : 0;
    if (c503) {
      char* cast504 = (char*)&(_str_8);
      char* t505 = __s498;
      unsigned long t506 = __pos497;
      unsigned long r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t500);
      std____throw_out_of_range_fmt(cast504, t505, t506, r507);
    }
  unsigned long t508 = __pos497;
  __retval499 = t508;
  unsigned long t509 = __retval499;
  return t509;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v510, unsigned long v511, unsigned long v512) {
bb513:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this514;
  unsigned long __pos515;
  unsigned long __off516;
  unsigned long __retval517;
  _Bool __testoff518;
  this514 = v510;
  __pos515 = v511;
  __off516 = v512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = this514;
  unsigned long t520 = __off516;
  unsigned long r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t519);
  unsigned long t522 = __pos515;
  unsigned long b523 = r521 - t522;
  _Bool c524 = ((t520 < b523)) ? 1 : 0;
  __testoff518 = c524;
  _Bool t525 = __testoff518;
  unsigned long ternary526;
  if (t525) {
    unsigned long t527 = __off516;
    ternary526 = (unsigned long)t527;
  } else {
    unsigned long r528 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t519);
    unsigned long t529 = __pos515;
    unsigned long b530 = r528 - t529;
    ternary526 = (unsigned long)b530;
  }
  __retval517 = ternary526;
  unsigned long t531 = __retval517;
  return t531;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v532, unsigned long v533, unsigned long v534, char* v535, unsigned long v536) {
bb537:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this538;
  unsigned long __pos539;
  unsigned long __n1540;
  char* __s541;
  unsigned long __n2542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval543;
  this538 = v532;
  __pos539 = v533;
  __n1540 = v534;
  __s541 = v535;
  __n2542 = v536;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t544 = this538;
  unsigned long t545 = __pos539;
  char* cast546 = (char*)&(_str_6);
  unsigned long r547 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t544, t545, cast546);
  unsigned long t548 = __pos539;
  unsigned long t549 = __n1540;
  unsigned long r550 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t544, t548, t549);
  char* t551 = __s541;
  unsigned long t552 = __n2542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r553 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t544, r547, r550, t551, t552);
  __retval543 = r553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t554 = __retval543;
  return t554;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v555) {
bb556:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this557;
  char** __retval558;
  this557 = v555;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t559 = this557;
  __retval558 = &t559->_M_current;
  char** t560 = __retval558;
  return t560;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v561, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v562) {
bb563:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs564;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs565;
  long __retval566;
  __lhs564 = v561;
  __rhs565 = v562;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t567 = __lhs564;
  char** r568 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t567);
  char* t569 = *r568;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t570 = __rhs565;
  char** r571 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t570);
  char* t572 = *r571;
  long diff573 = t569 - t572;
  __retval566 = diff573;
  long t574 = __retval566;
  return t574;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v575, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v576) {
bb577:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs578;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs579;
  long __retval580;
  __lhs578 = v575;
  __rhs579 = v576;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t581 = __lhs578;
  char** r582 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t581);
  char* t583 = *r582;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t584 = __rhs579;
  char** r585 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t584);
  char* t586 = *r585;
  long diff587 = t583 - t586;
  __retval580 = diff587;
  long t588 = __retval580;
  return t588;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v589) {
bb590:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this591;
  char** __retval592;
  this591 = v589;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t593 = this591;
  __retval592 = &t593->_M_current;
  char** t594 = __retval592;
  return t594;
}

// function: _ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v595, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v596) {
bb597:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs598;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs599;
  long __retval600;
  __lhs598 = v595;
  __rhs599 = v596;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t601 = __lhs598;
  char** r602 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t601);
  char* t603 = *r602;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t604 = __rhs599;
  char** r605 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t604);
  char* t606 = *r605;
  long diff607 = t603 - t606;
  __retval600 = diff607;
  long t608 = __retval600;
  return t608;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_NS6_IPcS4_EESB_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v609, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v610, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v611, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v612, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v613) {
bb614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this615;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1616;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2617;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k1618;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k2619;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval620;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0621;
  this615 = v609;
  __i1616 = v610;
  __i2617 = v611;
  __k1618 = v612;
  __k2619 = v613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t622 = this615;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r623 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t622);
  ref_tmp0621 = r623;
  long r624 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i1616, &ref_tmp0621);
  unsigned long cast625 = (unsigned long)r624;
  long r626 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i2617, &__i1616);
  unsigned long cast627 = (unsigned long)r626;
  char** r628 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(&__k1618);
  char* t629 = *r628;
  long r630 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__k2619, &__k1618);
  unsigned long cast631 = (unsigned long)r630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r632 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t622, cast625, cast627, t629, cast631);
  __retval620 = r632;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = __retval620;
  return t633;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v634, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v635) {
bb636:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this637;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i638;
  this637 = v634;
  __i638 = v635;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t639 = this637;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t640 = __i638;
  char** r641 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t640);
  char* t642 = *r641;
  t639->_M_current = t642;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendIN9__gnu_cxx17__normal_iteratorIPcS4_EEvEERS4_T_SB_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v643, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v644, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this647;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __first648;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __last649;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval650;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0651;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0652;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1653;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1654;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp2655;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp3656;
  this647 = v643;
  __first648 = v644;
  __last649 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this647;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r658 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(t657);
  ref_tmp0652 = r658;
  _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp0651, &ref_tmp0652);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r659 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(t657);
  ref_tmp1654 = r659;
  _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp1653, &ref_tmp1654);
  agg_tmp2655 = __first648; // copy
  agg_tmp3656 = __last649; // copy
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t660 = agg_tmp0651;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t661 = agg_tmp1653;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t662 = agg_tmp2655;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t663 = agg_tmp3656;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r664 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t657, t660, t661, t662, t663);
  __retval650 = r664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = __retval650;
  return t665;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v666, char** v667) {
bb668:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this669;
  char** __i670;
  this669 = v666;
  __i670 = v667;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t671 = this669;
  char** t672 = __i670;
  char* t673 = *t672;
  t671->_M_current = t673;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v674) {
bb675:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this676;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval677;
  char* ref_tmp0678;
  this676 = v674;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t679 = this676;
  char* r680 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t679);
  ref_tmp0678 = r680;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval677, &ref_tmp0678);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t681 = __retval677;
  return t681;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v682, long v683) {
bb684:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this685;
  long __n686;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval687;
  char* ref_tmp0688;
  this685 = v682;
  __n686 = v683;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t689 = this685;
  char* t690 = t689->_M_current;
  long t691 = __n686;
  char* ptr692 = &(t690)[t691];
  ref_tmp0688 = ptr692;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval687, &ref_tmp0688);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t693 = __retval687;
  return t693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694) {
bb695:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this696;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval697;
  char* ref_tmp0698;
  this696 = v694;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t699 = this696;
  char* r700 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t699);
  unsigned long r701 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t699);
  char* ptr702 = &(r700)[r701];
  ref_tmp0698 = ptr702;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval697, &ref_tmp0698);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t703 = __retval697;
  return t703;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v704, char* v705) {
bb706:
  char* __c1707;
  char* __c2708;
  _Bool __retval709;
  __c1707 = v704;
  __c2708 = v705;
  char* t710 = __c1707;
  char t711 = *t710;
  unsigned char cast712 = (unsigned char)t711;
  int cast713 = (int)cast712;
  char* t714 = __c2708;
  char t715 = *t714;
  unsigned char cast716 = (unsigned char)t715;
  int cast717 = (int)cast716;
  _Bool c718 = ((cast713 < cast717)) ? 1 : 0;
  __retval709 = c718;
  _Bool t719 = __retval709;
  return t719;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v720, char* v721, unsigned long v722) {
bb723:
  char* __s1724;
  char* __s2725;
  unsigned long __n726;
  int __retval727;
  __s1724 = v720;
  __s2725 = v721;
  __n726 = v722;
    unsigned long t728 = __n726;
    unsigned long c729 = 0;
    _Bool c730 = ((t728 == c729)) ? 1 : 0;
    if (c730) {
      int c731 = 0;
      __retval727 = c731;
      int t732 = __retval727;
      return t732;
    }
    _Bool r733 = std____is_constant_evaluated();
    if (r733) {
        unsigned long __i734;
        unsigned long c735 = 0;
        __i734 = c735;
        while (1) {
          unsigned long t737 = __i734;
          unsigned long t738 = __n726;
          _Bool c739 = ((t737 < t738)) ? 1 : 0;
          if (!c739) break;
            unsigned long t740 = __i734;
            char* t741 = __s1724;
            char* ptr742 = &(t741)[t740];
            unsigned long t743 = __i734;
            char* t744 = __s2725;
            char* ptr745 = &(t744)[t743];
            _Bool r746 = std__char_traits_char___lt(ptr742, ptr745);
            if (r746) {
              int c747 = -1;
              __retval727 = c747;
              int t748 = __retval727;
              int ret_val749 = t748;
              return ret_val749;
            } else {
                unsigned long t750 = __i734;
                char* t751 = __s2725;
                char* ptr752 = &(t751)[t750];
                unsigned long t753 = __i734;
                char* t754 = __s1724;
                char* ptr755 = &(t754)[t753];
                _Bool r756 = std__char_traits_char___lt(ptr752, ptr755);
                if (r756) {
                  int c757 = 1;
                  __retval727 = c757;
                  int t758 = __retval727;
                  int ret_val759 = t758;
                  return ret_val759;
                }
            }
        for_step736: ;
          unsigned long t760 = __i734;
          unsigned long u761 = t760 + 1;
          __i734 = u761;
        }
      int c762 = 0;
      __retval727 = c762;
      int t763 = __retval727;
      return t763;
    }
  char* t764 = __s1724;
  void* cast765 = (void*)t764;
  char* t766 = __s2725;
  void* cast767 = (void*)t766;
  unsigned long t768 = __n726;
  int r769 = memcmp(cast765, cast767, t768);
  __retval727 = r769;
  int t770 = __retval727;
  return t770;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v771) {
bb772:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this773;
  char* __retval774;
  this773 = v771;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t775 = this773;
  char* r776 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t775);
  __retval774 = r776;
  char* t777 = __retval774;
  return t777;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v778, char* v779) {
bb780:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs781;
  char* __rhs782;
  _Bool __retval783;
  __lhs781 = v778;
  __rhs782 = v779;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t784 = __lhs781;
  unsigned long r785 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t784);
  char* t786 = __rhs782;
  unsigned long r787 = std__char_traits_char___length(t786);
  _Bool c788 = ((r785 == r787)) ? 1 : 0;
  _Bool ternary789;
  if (c788) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t790 = __lhs781;
    char* r791 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t790);
    char* t792 = __rhs782;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t793 = __lhs781;
    unsigned long r794 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t793);
    int r795 = std__char_traits_char___compare(r791, t792, r794);
    _Bool cast796 = (_Bool)r795;
    _Bool u797 = !cast796;
    ternary789 = (_Bool)u797;
  } else {
    _Bool c798 = 0;
    ternary789 = (_Bool)c798;
  }
  __retval783 = ternary789;
  _Bool t799 = __retval783;
  return t799;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v800, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v801) {
bb802:
  struct std__basic_ostream_char__std__char_traits_char__* __os803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str804;
  struct std__basic_ostream_char__std__char_traits_char__* __retval805;
  __os803 = v800;
  __str804 = v801;
  struct std__basic_ostream_char__std__char_traits_char__* t806 = __os803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t807 = __str804;
  char* r808 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t807);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t809 = __str804;
  unsigned long r810 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t809);
  long cast811 = (long)r810;
  struct std__basic_ostream_char__std__char_traits_char__* r812 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t806, r808, cast811);
  __retval805 = r812;
  struct std__basic_ostream_char__std__char_traits_char__* t813 = __retval805;
  return t813;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v814, void* v815) {
bb816:
  struct std__basic_ostream_char__std__char_traits_char__* this817;
  void* __pf818;
  struct std__basic_ostream_char__std__char_traits_char__* __retval819;
  this817 = v814;
  __pf818 = v815;
  struct std__basic_ostream_char__std__char_traits_char__* t820 = this817;
  void* t821 = __pf818;
  struct std__basic_ostream_char__std__char_traits_char__* r822 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t821)(t820);
  __retval819 = r822;
  struct std__basic_ostream_char__std__char_traits_char__* t823 = __retval819;
  return t823;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v824) {
bb825:
  struct std__basic_ostream_char__std__char_traits_char__* __os826;
  struct std__basic_ostream_char__std__char_traits_char__* __retval827;
  __os826 = v824;
  struct std__basic_ostream_char__std__char_traits_char__* t828 = __os826;
  struct std__basic_ostream_char__std__char_traits_char__* r829 = std__ostream__flush(t828);
  __retval827 = r829;
  struct std__basic_ostream_char__std__char_traits_char__* t830 = __retval827;
  return t830;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v831) {
bb832:
  struct std__ctype_char_* __f833;
  struct std__ctype_char_* __retval834;
  __f833 = v831;
    struct std__ctype_char_* t835 = __f833;
    _Bool cast836 = (_Bool)t835;
    _Bool u837 = !cast836;
    if (u837) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t838 = __f833;
  __retval834 = t838;
  struct std__ctype_char_* t839 = __retval834;
  return t839;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v840, char v841) {
bb842:
  struct std__ctype_char_* this843;
  char __c844;
  char __retval845;
  this843 = v840;
  __c844 = v841;
  struct std__ctype_char_* t846 = this843;
    char t847 = t846->_M_widen_ok;
    _Bool cast848 = (_Bool)t847;
    if (cast848) {
      char t849 = __c844;
      unsigned char cast850 = (unsigned char)t849;
      unsigned long cast851 = (unsigned long)cast850;
      char t852 = t846->_M_widen[cast851];
      __retval845 = t852;
      char t853 = __retval845;
      return t853;
    }
  std__ctype_char____M_widen_init___const(t846);
  char t854 = __c844;
  void** v855 = (void**)t846;
  void* v856 = *((void**)v855);
  char vcall859 = (char)__VERIFIER_virtual_call_char_char(t846, 6, t854);
  __retval845 = vcall859;
  char t860 = __retval845;
  return t860;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v861, char v862) {
bb863:
  struct std__basic_ios_char__std__char_traits_char__* this864;
  char __c865;
  char __retval866;
  this864 = v861;
  __c865 = v862;
  struct std__basic_ios_char__std__char_traits_char__* t867 = this864;
  struct std__ctype_char_* t868 = t867->_M_ctype;
  struct std__ctype_char_* r869 = std__ctype_char__const__std____check_facet_std__ctype_char___(t868);
  char t870 = __c865;
  char r871 = std__ctype_char___widen_char__const(r869, t870);
  __retval866 = r871;
  char t872 = __retval866;
  return t872;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v873) {
bb874:
  struct std__basic_ostream_char__std__char_traits_char__* __os875;
  struct std__basic_ostream_char__std__char_traits_char__* __retval876;
  __os875 = v873;
  struct std__basic_ostream_char__std__char_traits_char__* t877 = __os875;
  struct std__basic_ostream_char__std__char_traits_char__* t878 = __os875;
  void** v879 = (void**)t878;
  void* v880 = *((void**)v879);
  unsigned char* cast881 = (unsigned char*)v880;
  long c882 = -24;
  unsigned char* ptr883 = &(cast881)[c882];
  long* cast884 = (long*)ptr883;
  long t885 = *cast884;
  unsigned char* cast886 = (unsigned char*)t878;
  unsigned char* ptr887 = &(cast886)[t885];
  struct std__basic_ostream_char__std__char_traits_char__* cast888 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr887;
  struct std__basic_ios_char__std__char_traits_char__* cast889 = (struct std__basic_ios_char__std__char_traits_char__*)cast888;
  char c890 = 10;
  char r891 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast889, c890);
  struct std__basic_ostream_char__std__char_traits_char__* r892 = std__ostream__put(t877, r891);
  struct std__basic_ostream_char__std__char_traits_char__* r893 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r892);
  __retval876 = r893;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __retval876;
  return t894;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v895) {
bb896:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this897;
  this897 = v895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = this897;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t898);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t898->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb899:
  int __retval900;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str901;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3902;
  struct std__allocator_char_ ref_tmp0903;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0904;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1905;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1906;
  int c907 = 0;
  __retval900 = c907;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str901);
    char* cast908 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0903);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3902, cast908, &ref_tmp0903);
    {
      std__allocator_char____allocator(&ref_tmp0903);
    }
      struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r909 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str3902);
      ref_tmp1905 = r909;
      long c910 = 8;
      struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r911 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp1905, c910);
      agg_tmp0904 = r911;
      struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str3902);
      agg_tmp1906 = r912;
      struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t913 = agg_tmp0904;
      struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t914 = agg_tmp1906;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r915 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(&str901, t913, t914);
      char* cast916 = (char*)&(_str_1);
      _Bool r917 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str901, cast916);
      _Bool u918 = !r917;
      if (u918) {
      } else {
        char* cast919 = (char*)&(_str_2);
        char* c920 = _str_3;
        unsigned int c921 = 20;
        char* cast922 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast919, c920, c921, cast922);
      }
      struct std__basic_ostream_char__std__char_traits_char__* r923 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str901);
      struct std__basic_ostream_char__std__char_traits_char__* r924 = std__ostream__operator___std__ostream_____(r923, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c925 = 0;
      __retval900 = c925;
      int t926 = __retval900;
      int ret_val927 = t926;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3902);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str901);
      }
      return ret_val927;
  int t928 = __retval900;
  return t928;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v929) {
bb930:
  char* __r931;
  char* __retval932;
  __r931 = v929;
  char* t933 = __r931;
  __retval932 = t933;
  char* t934 = __retval932;
  return t934;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935) {
bb936:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this937;
  char* __retval938;
  this937 = v935;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t939 = this937;
  char* cast940 = (char*)&(t939->field2._M_local_buf);
  char* r941 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast940);
  __retval938 = r941;
  char* t942 = __retval938;
  return t942;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v943, char* v944, struct std__allocator_char_* v945) {
bb946:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this947;
  char* __dat948;
  struct std__allocator_char_* __a949;
  this947 = v943;
  __dat948 = v944;
  __a949 = v945;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t950 = this947;
  struct std__allocator_char_* base951 = (struct std__allocator_char_*)((char *)t950 + 0);
  struct std__allocator_char_* t952 = __a949;
  std__allocator_char___allocator(base951, t952);
    char* t953 = __dat948;
    t950->_M_p = t953;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb954:
  _Bool __retval955;
    _Bool c956 = 0;
    __retval955 = c956;
    _Bool t957 = __retval955;
    return t957;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v958) {
bb959:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this960;
  this960 = v958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t961 = this960;
    _Bool r962 = std__is_constant_evaluated();
    if (r962) {
        unsigned long __i963;
        unsigned long c964 = 0;
        __i963 = c964;
        while (1) {
          unsigned long t966 = __i963;
          unsigned long c967 = 15;
          _Bool c968 = ((t966 <= c967)) ? 1 : 0;
          if (!c968) break;
          char c969 = 0;
          unsigned long t970 = __i963;
          t961->field2._M_local_buf[t970] = c969;
        for_step965: ;
          unsigned long t971 = __i963;
          unsigned long u972 = t971 + 1;
          __i963 = u972;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v973, unsigned long v974) {
bb975:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this976;
  unsigned long __length977;
  this976 = v973;
  __length977 = v974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t978 = this976;
  unsigned long t979 = __length977;
  t978->_M_string_length = t979;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb980:
  _Bool __retval981;
    _Bool c982 = 0;
    __retval981 = c982;
    _Bool t983 = __retval981;
    return t983;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v984, char* v985) {
bb986:
  char* __location987;
  char* __args988;
  char* __retval989;
  void* __loc990;
  __location987 = v984;
  __args988 = v985;
  char* t991 = __location987;
  void* cast992 = (void*)t991;
  __loc990 = cast992;
    void* t993 = __loc990;
    char* cast994 = (char*)t993;
    char* t995 = __args988;
    char t996 = *t995;
    *cast994 = t996;
    __retval989 = cast994;
    char* t997 = __retval989;
    return t997;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v998, char* v999) {
bb1000:
  char* __c11001;
  char* __c21002;
  __c11001 = v998;
  __c21002 = v999;
    _Bool r1003 = std____is_constant_evaluated();
    if (r1003) {
      char* t1004 = __c11001;
      char* t1005 = __c21002;
      char* r1006 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1004, t1005);
    } else {
      char* t1007 = __c21002;
      char t1008 = *t1007;
      char* t1009 = __c11001;
      *t1009 = t1008;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1010) {
bb1011:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1012;
  char* __retval1013;
  this1012 = v1010;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1014 = this1012;
  char* t1015 = t1014->_M_dataplus._M_p;
  __retval1013 = t1015;
  char* t1016 = __retval1013;
  return t1016;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1017, unsigned long v1018) {
bb1019:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1020;
  unsigned long __n1021;
  char ref_tmp01022;
  this1020 = v1017;
  __n1021 = v1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1023 = this1020;
  unsigned long t1024 = __n1021;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1023, t1024);
  unsigned long t1025 = __n1021;
  char* r1026 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1023);
  char* ptr1027 = &(r1026)[t1025];
  char c1028 = 0;
  ref_tmp01022 = c1028;
  std__char_traits_char___assign(ptr1027, &ref_tmp01022);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1029) {
bb1030:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1031;
  this1031 = v1029;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1032 = this1031;
  {
    struct std__allocator_char_* base1033 = (struct std__allocator_char_*)((char *)t1032 + 0);
    std__allocator_char____allocator(base1033);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1034, struct std____new_allocator_char_* v1035) {
bb1036:
  struct std____new_allocator_char_* this1037;
  struct std____new_allocator_char_* unnamed1038;
  this1037 = v1034;
  unnamed1038 = v1035;
  struct std____new_allocator_char_* t1039 = this1037;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1040, struct std__allocator_char_* v1041) {
bb1042:
  struct std__allocator_char_* this1043;
  struct std__allocator_char_* __a1044;
  this1043 = v1040;
  __a1044 = v1041;
  struct std__allocator_char_* t1045 = this1043;
  struct std____new_allocator_char_* base1046 = (struct std____new_allocator_char_*)((char *)t1045 + 0);
  struct std__allocator_char_* t1047 = __a1044;
  struct std____new_allocator_char_* base1048 = (struct std____new_allocator_char_*)((char *)t1047 + 0);
  std____new_allocator_char_____new_allocator(base1046, base1048);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1049) {
bb1050:
  struct std____new_allocator_char_* this1051;
  this1051 = v1049;
  struct std____new_allocator_char_* t1052 = this1051;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1053, char* v1054, struct std__allocator_char_* v1055) {
bb1056:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1057;
  char* __dat1058;
  struct std__allocator_char_* __a1059;
  this1057 = v1053;
  __dat1058 = v1054;
  __a1059 = v1055;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1060 = this1057;
  struct std__allocator_char_* base1061 = (struct std__allocator_char_*)((char *)t1060 + 0);
  struct std__allocator_char_* t1062 = __a1059;
  std__allocator_char___allocator(base1061, t1062);
    char* t1063 = __dat1058;
    t1060->_M_p = t1063;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1064, char* v1065) {
bb1066:
  char* __c11067;
  char* __c21068;
  _Bool __retval1069;
  __c11067 = v1064;
  __c21068 = v1065;
  char* t1070 = __c11067;
  char t1071 = *t1070;
  int cast1072 = (int)t1071;
  char* t1073 = __c21068;
  char t1074 = *t1073;
  int cast1075 = (int)t1074;
  _Bool c1076 = ((cast1072 == cast1075)) ? 1 : 0;
  __retval1069 = c1076;
  _Bool t1077 = __retval1069;
  return t1077;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1078) {
bb1079:
  char* __p1080;
  unsigned long __retval1081;
  unsigned long __i1082;
  __p1080 = v1078;
  unsigned long c1083 = 0;
  __i1082 = c1083;
    char ref_tmp01084;
    while (1) {
      unsigned long t1085 = __i1082;
      char* t1086 = __p1080;
      char* ptr1087 = &(t1086)[t1085];
      char c1088 = 0;
      ref_tmp01084 = c1088;
      _Bool r1089 = __gnu_cxx__char_traits_char___eq(ptr1087, &ref_tmp01084);
      _Bool u1090 = !r1089;
      if (!u1090) break;
      unsigned long t1091 = __i1082;
      unsigned long u1092 = t1091 + 1;
      __i1082 = u1092;
    }
  unsigned long t1093 = __i1082;
  __retval1081 = t1093;
  unsigned long t1094 = __retval1081;
  return t1094;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1095) {
bb1096:
  char* __s1097;
  unsigned long __retval1098;
  __s1097 = v1095;
    _Bool r1099 = std____is_constant_evaluated();
    if (r1099) {
      char* t1100 = __s1097;
      unsigned long r1101 = __gnu_cxx__char_traits_char___length(t1100);
      __retval1098 = r1101;
      unsigned long t1102 = __retval1098;
      return t1102;
    }
  char* t1103 = __s1097;
  unsigned long r1104 = strlen(t1103);
  __retval1098 = r1104;
  unsigned long t1105 = __retval1098;
  return t1105;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1106, char* v1107, struct std__random_access_iterator_tag v1108) {
bb1109:
  char* __first1110;
  char* __last1111;
  struct std__random_access_iterator_tag unnamed1112;
  long __retval1113;
  __first1110 = v1106;
  __last1111 = v1107;
  unnamed1112 = v1108;
  char* t1114 = __last1111;
  char* t1115 = __first1110;
  long diff1116 = t1114 - t1115;
  __retval1113 = diff1116;
  long t1117 = __retval1113;
  return t1117;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1118) {
bb1119:
  char** unnamed1120;
  struct std__random_access_iterator_tag __retval1121;
  unnamed1120 = v1118;
  struct std__random_access_iterator_tag t1122 = __retval1121;
  return t1122;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1123, char* v1124) {
bb1125:
  char* __first1126;
  char* __last1127;
  long __retval1128;
  struct std__random_access_iterator_tag agg_tmp01129;
  __first1126 = v1123;
  __last1127 = v1124;
  char* t1130 = __first1126;
  char* t1131 = __last1127;
  struct std__random_access_iterator_tag r1132 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1126);
  agg_tmp01129 = r1132;
  struct std__random_access_iterator_tag t1133 = agg_tmp01129;
  long r1134 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1130, t1131, t1133);
  __retval1128 = r1134;
  long t1135 = __retval1128;
  return t1135;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1136, char* v1137) {
bb1138:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1139;
  char* __p1140;
  this1139 = v1136;
  __p1140 = v1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1141 = this1139;
  char* t1142 = __p1140;
  t1141->_M_dataplus._M_p = t1142;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1143) {
bb1144:
  struct std__allocator_char_* __a1145;
  unsigned long __retval1146;
  __a1145 = v1143;
  unsigned long c1147 = -1;
  unsigned long c1148 = 1;
  unsigned long b1149 = c1147 / c1148;
  __retval1146 = b1149;
  unsigned long t1150 = __retval1146;
  return t1150;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1151) {
bb1152:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1153;
  struct std__allocator_char_* __retval1154;
  this1153 = v1151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1155 = this1153;
  struct std__allocator_char_* base1156 = (struct std__allocator_char_*)((char *)&(t1155->_M_dataplus) + 0);
  __retval1154 = base1156;
  struct std__allocator_char_* t1157 = __retval1154;
  return t1157;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1158, unsigned long* v1159) {
bb1160:
  unsigned long* __a1161;
  unsigned long* __b1162;
  unsigned long* __retval1163;
  __a1161 = v1158;
  __b1162 = v1159;
    unsigned long* t1164 = __b1162;
    unsigned long t1165 = *t1164;
    unsigned long* t1166 = __a1161;
    unsigned long t1167 = *t1166;
    _Bool c1168 = ((t1165 < t1167)) ? 1 : 0;
    if (c1168) {
      unsigned long* t1169 = __b1162;
      __retval1163 = t1169;
      unsigned long* t1170 = __retval1163;
      return t1170;
    }
  unsigned long* t1171 = __a1161;
  __retval1163 = t1171;
  unsigned long* t1172 = __retval1163;
  return t1172;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1173) {
bb1174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1175;
  unsigned long __retval1176;
  unsigned long __diffmax1177;
  unsigned long __allocmax1178;
  this1175 = v1173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = this1175;
  unsigned long c1180 = 9223372036854775807;
  __diffmax1177 = c1180;
  struct std__allocator_char_* r1181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1179);
  unsigned long r1182 = std__allocator_traits_std__allocator_char_____max_size(r1181);
  __allocmax1178 = r1182;
  unsigned long* r1183 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1177, &__allocmax1178);
  unsigned long t1184 = *r1183;
  unsigned long c1185 = 1;
  unsigned long b1186 = t1184 - c1185;
  __retval1176 = b1186;
  unsigned long t1187 = __retval1176;
  return t1187;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1188) {
bb1189:
  struct std____new_allocator_char_* this1190;
  unsigned long __retval1191;
  this1190 = v1188;
  struct std____new_allocator_char_* t1192 = this1190;
  unsigned long c1193 = 9223372036854775807;
  unsigned long c1194 = 1;
  unsigned long b1195 = c1193 / c1194;
  __retval1191 = b1195;
  unsigned long t1196 = __retval1191;
  return t1196;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1197, unsigned long v1198, void* v1199) {
bb1200:
  struct std____new_allocator_char_* this1201;
  unsigned long __n1202;
  void* unnamed1203;
  char* __retval1204;
  this1201 = v1197;
  __n1202 = v1198;
  unnamed1203 = v1199;
  struct std____new_allocator_char_* t1205 = this1201;
    unsigned long t1206 = __n1202;
    unsigned long r1207 = std____new_allocator_char____M_max_size___const(t1205);
    _Bool c1208 = ((t1206 > r1207)) ? 1 : 0;
    if (c1208) {
        unsigned long t1209 = __n1202;
        unsigned long c1210 = -1;
        unsigned long c1211 = 1;
        unsigned long b1212 = c1210 / c1211;
        _Bool c1213 = ((t1209 > b1212)) ? 1 : 0;
        if (c1213) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1214 = 1;
    unsigned long c1215 = 16;
    _Bool c1216 = ((c1214 > c1215)) ? 1 : 0;
    if (c1216) {
      unsigned long __al1217;
      unsigned long c1218 = 1;
      __al1217 = c1218;
      unsigned long t1219 = __n1202;
      unsigned long c1220 = 1;
      unsigned long b1221 = t1219 * c1220;
      unsigned long t1222 = __al1217;
      void* r1223 = operator_new_2(b1221, t1222);
      char* cast1224 = (char*)r1223;
      __retval1204 = cast1224;
      char* t1225 = __retval1204;
      return t1225;
    }
  unsigned long t1226 = __n1202;
  unsigned long c1227 = 1;
  unsigned long b1228 = t1226 * c1227;
  void* r1229 = operator_new(b1228);
  char* cast1230 = (char*)r1229;
  __retval1204 = cast1230;
  char* t1231 = __retval1204;
  return t1231;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1232, unsigned long v1233) {
bb1234:
  struct std__allocator_char_* this1235;
  unsigned long __n1236;
  char* __retval1237;
  this1235 = v1232;
  __n1236 = v1233;
  struct std__allocator_char_* t1238 = this1235;
    _Bool r1239 = std____is_constant_evaluated();
    if (r1239) {
        unsigned long t1240 = __n1236;
        unsigned long c1241 = 1;
        unsigned long ovr1242;
        _Bool ovf1243 = __builtin_mul_overflow(t1240, c1241, &ovr1242);
        __n1236 = ovr1242;
        if (ovf1243) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1244 = __n1236;
      void* r1245 = operator_new(t1244);
      char* cast1246 = (char*)r1245;
      __retval1237 = cast1246;
      char* t1247 = __retval1237;
      return t1247;
    }
  struct std____new_allocator_char_* base1248 = (struct std____new_allocator_char_*)((char *)t1238 + 0);
  unsigned long t1249 = __n1236;
  void* c1250 = ((void*)0);
  char* r1251 = std____new_allocator_char___allocate(base1248, t1249, c1250);
  __retval1237 = r1251;
  char* t1252 = __retval1237;
  return t1252;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1253, unsigned long v1254) {
bb1255:
  struct std__allocator_char_* __a1256;
  unsigned long __n1257;
  char* __retval1258;
  __a1256 = v1253;
  __n1257 = v1254;
  struct std__allocator_char_* t1259 = __a1256;
  unsigned long t1260 = __n1257;
  char* r1261 = std__allocator_char___allocate(t1259, t1260);
  __retval1258 = r1261;
  char* t1262 = __retval1258;
  return t1262;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1263, unsigned long v1264) {
bb1265:
  struct std__allocator_char_* __a1266;
  unsigned long __n1267;
  char* __retval1268;
  char* __p1269;
  __a1266 = v1263;
  __n1267 = v1264;
  struct std__allocator_char_* t1270 = __a1266;
  unsigned long t1271 = __n1267;
  char* r1272 = std__allocator_traits_std__allocator_char_____allocate(t1270, t1271);
  __p1269 = r1272;
  char* t1273 = __p1269;
  __retval1268 = t1273;
  char* t1274 = __retval1268;
  return t1274;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1275) {
bb1276:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1277;
  struct std__allocator_char_* __retval1278;
  this1277 = v1275;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1279 = this1277;
  struct std__allocator_char_* base1280 = (struct std__allocator_char_*)((char *)&(t1279->_M_dataplus) + 0);
  __retval1278 = base1280;
  struct std__allocator_char_* t1281 = __retval1278;
  return t1281;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1282, unsigned long* v1283, unsigned long v1284) {
bb1285:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1286;
  unsigned long* __capacity1287;
  unsigned long __old_capacity1288;
  char* __retval1289;
  this1286 = v1282;
  __capacity1287 = v1283;
  __old_capacity1288 = v1284;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1290 = this1286;
    unsigned long* t1291 = __capacity1287;
    unsigned long t1292 = *t1291;
    unsigned long r1293 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1290);
    _Bool c1294 = ((t1292 > r1293)) ? 1 : 0;
    if (c1294) {
      char* cast1295 = (char*)&(_str_5);
      std____throw_length_error(cast1295);
    }
    unsigned long* t1296 = __capacity1287;
    unsigned long t1297 = *t1296;
    unsigned long t1298 = __old_capacity1288;
    _Bool c1299 = ((t1297 > t1298)) ? 1 : 0;
    _Bool ternary1300;
    if (c1299) {
      unsigned long* t1301 = __capacity1287;
      unsigned long t1302 = *t1301;
      unsigned long c1303 = 2;
      unsigned long t1304 = __old_capacity1288;
      unsigned long b1305 = c1303 * t1304;
      _Bool c1306 = ((t1302 < b1305)) ? 1 : 0;
      ternary1300 = (_Bool)c1306;
    } else {
      _Bool c1307 = 0;
      ternary1300 = (_Bool)c1307;
    }
    if (ternary1300) {
      unsigned long c1308 = 2;
      unsigned long t1309 = __old_capacity1288;
      unsigned long b1310 = c1308 * t1309;
      unsigned long* t1311 = __capacity1287;
      *t1311 = b1310;
        unsigned long* t1312 = __capacity1287;
        unsigned long t1313 = *t1312;
        unsigned long r1314 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1290);
        _Bool c1315 = ((t1313 > r1314)) ? 1 : 0;
        if (c1315) {
          unsigned long r1316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1290);
          unsigned long* t1317 = __capacity1287;
          *t1317 = r1316;
        }
    }
  struct std__allocator_char_* r1318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1290);
  unsigned long* t1319 = __capacity1287;
  unsigned long t1320 = *t1319;
  unsigned long c1321 = 1;
  unsigned long b1322 = t1320 + c1321;
  char* r1323 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1318, b1322);
  __retval1289 = r1323;
  char* t1324 = __retval1289;
  return t1324;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1325, unsigned long v1326) {
bb1327:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1328;
  unsigned long __capacity1329;
  this1328 = v1325;
  __capacity1329 = v1326;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1330 = this1328;
  unsigned long t1331 = __capacity1329;
  t1330->field2._M_allocated_capacity = t1331;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1332, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1333) {
bb1334:
  struct _Guard* this1335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1336;
  this1335 = v1332;
  __s1336 = v1333;
  struct _Guard* t1337 = this1335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1338 = __s1336;
  t1337->_M_guarded = t1338;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1339, char* v1340, unsigned long v1341) {
bb1342:
  char* __s11343;
  char* __s21344;
  unsigned long __n1345;
  char* __retval1346;
  __s11343 = v1339;
  __s21344 = v1340;
  __n1345 = v1341;
    unsigned long t1347 = __n1345;
    unsigned long c1348 = 0;
    _Bool c1349 = ((t1347 == c1348)) ? 1 : 0;
    if (c1349) {
      char* t1350 = __s11343;
      __retval1346 = t1350;
      char* t1351 = __retval1346;
      return t1351;
    }
    _Bool r1352 = std____is_constant_evaluated();
    if (r1352) {
        unsigned long __i1353;
        unsigned long c1354 = 0;
        __i1353 = c1354;
        while (1) {
          unsigned long t1356 = __i1353;
          unsigned long t1357 = __n1345;
          _Bool c1358 = ((t1356 < t1357)) ? 1 : 0;
          if (!c1358) break;
          char* t1359 = __s11343;
          unsigned long t1360 = __i1353;
          char* ptr1361 = &(t1359)[t1360];
          unsigned long t1362 = __i1353;
          char* t1363 = __s21344;
          char* ptr1364 = &(t1363)[t1362];
          char* r1365 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1361, ptr1364);
        for_step1355: ;
          unsigned long t1366 = __i1353;
          unsigned long u1367 = t1366 + 1;
          __i1353 = u1367;
        }
      char* t1368 = __s11343;
      __retval1346 = t1368;
      char* t1369 = __retval1346;
      return t1369;
    }
  char* t1370 = __s11343;
  void* cast1371 = (void*)t1370;
  char* t1372 = __s21344;
  void* cast1373 = (void*)t1372;
  unsigned long t1374 = __n1345;
  unsigned long c1375 = 1;
  unsigned long b1376 = t1374 * c1375;
  void* r1377 = memcpy(cast1371, cast1373, b1376);
  char* t1378 = __s11343;
  __retval1346 = t1378;
  char* t1379 = __retval1346;
  return t1379;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1380, char* v1381, unsigned long v1382) {
bb1383:
  char* __s11384;
  char* __s21385;
  unsigned long __n1386;
  char* __retval1387;
  __s11384 = v1380;
  __s21385 = v1381;
  __n1386 = v1382;
    unsigned long t1388 = __n1386;
    unsigned long c1389 = 0;
    _Bool c1390 = ((t1388 == c1389)) ? 1 : 0;
    if (c1390) {
      char* t1391 = __s11384;
      __retval1387 = t1391;
      char* t1392 = __retval1387;
      return t1392;
    }
    _Bool r1393 = std____is_constant_evaluated();
    if (r1393) {
      char* t1394 = __s11384;
      char* t1395 = __s21385;
      unsigned long t1396 = __n1386;
      char* r1397 = __gnu_cxx__char_traits_char___copy(t1394, t1395, t1396);
      __retval1387 = r1397;
      char* t1398 = __retval1387;
      return t1398;
    }
  char* t1399 = __s11384;
  void* cast1400 = (void*)t1399;
  char* t1401 = __s21385;
  void* cast1402 = (void*)t1401;
  unsigned long t1403 = __n1386;
  void* r1404 = memcpy(cast1400, cast1402, t1403);
  char* cast1405 = (char*)r1404;
  __retval1387 = cast1405;
  char* t1406 = __retval1387;
  return t1406;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1407, char* v1408, unsigned long v1409) {
bb1410:
  char* __d1411;
  char* __s1412;
  unsigned long __n1413;
  __d1411 = v1407;
  __s1412 = v1408;
  __n1413 = v1409;
    unsigned long t1414 = __n1413;
    unsigned long c1415 = 1;
    _Bool c1416 = ((t1414 == c1415)) ? 1 : 0;
    if (c1416) {
      char* t1417 = __d1411;
      char* t1418 = __s1412;
      std__char_traits_char___assign(t1417, t1418);
    } else {
      char* t1419 = __d1411;
      char* t1420 = __s1412;
      unsigned long t1421 = __n1413;
      char* r1422 = std__char_traits_char___copy(t1419, t1420, t1421);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1423) {
bb1424:
  char* __it1425;
  char* __retval1426;
  __it1425 = v1423;
  char* t1427 = __it1425;
  __retval1426 = t1427;
  char* t1428 = __retval1426;
  return t1428;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1429, char* v1430, char* v1431) {
bb1432:
  char* __p1433;
  char* __k11434;
  char* __k21435;
  __p1433 = v1429;
  __k11434 = v1430;
  __k21435 = v1431;
    char* t1436 = __p1433;
    char* t1437 = __k11434;
    char* r1438 = char_const__std____niter_base_char_const__(t1437);
    char* t1439 = __k21435;
    char* t1440 = __k11434;
    long diff1441 = t1439 - t1440;
    unsigned long cast1442 = (unsigned long)diff1441;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1436, r1438, cast1442);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1443) {
bb1444:
  struct _Guard* this1445;
  this1445 = v1443;
  struct _Guard* t1446 = this1445;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1447 = t1446->_M_guarded;
    _Bool cast1448 = (_Bool)t1447;
    if (cast1448) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1449 = t1446->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1449);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1450, char* v1451, char* v1452, struct std__forward_iterator_tag v1453) {
bb1454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1455;
  char* __beg1456;
  char* __end1457;
  struct std__forward_iterator_tag unnamed1458;
  unsigned long __dnew1459;
  struct _Guard __guard1460;
  this1455 = v1450;
  __beg1456 = v1451;
  __end1457 = v1452;
  unnamed1458 = v1453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1461 = this1455;
  char* t1462 = __beg1456;
  char* t1463 = __end1457;
  long r1464 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1462, t1463);
  unsigned long cast1465 = (unsigned long)r1464;
  __dnew1459 = cast1465;
    unsigned long t1466 = __dnew1459;
    unsigned long c1467 = 15;
    _Bool c1468 = ((t1466 > c1467)) ? 1 : 0;
    if (c1468) {
      unsigned long c1469 = 0;
      char* r1470 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1461, &__dnew1459, c1469);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1461, r1470);
      unsigned long t1471 = __dnew1459;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1461, t1471);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1461);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1460, t1461);
    char* r1472 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1461);
    char* t1473 = __beg1456;
    char* t1474 = __end1457;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1472, t1473, t1474);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1475 = ((void*)0);
    __guard1460._M_guarded = c1475;
    unsigned long t1476 = __dnew1459;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1461, t1476);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1460);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1477) {
bb1478:
  char* __r1479;
  char* __retval1480;
  __r1479 = v1477;
  char* t1481 = __r1479;
  __retval1480 = t1481;
  char* t1482 = __retval1480;
  return t1482;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1483) {
bb1484:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1485;
  char* __retval1486;
  this1485 = v1483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1487 = this1485;
  char* cast1488 = (char*)&(t1487->field2._M_local_buf);
  char* r1489 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1488);
  __retval1486 = r1489;
  char* t1490 = __retval1486;
  return t1490;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1491) {
bb1492:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1493;
  _Bool __retval1494;
  this1493 = v1491;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1495 = this1493;
    char* r1496 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1495);
    char* r1497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1495);
    _Bool c1498 = ((r1496 == r1497)) ? 1 : 0;
    if (c1498) {
        unsigned long t1499 = t1495->_M_string_length;
        unsigned long c1500 = 15;
        _Bool c1501 = ((t1499 > c1500)) ? 1 : 0;
        if (c1501) {
          __builtin_unreachable();
        }
      _Bool c1502 = 1;
      __retval1494 = c1502;
      _Bool t1503 = __retval1494;
      return t1503;
    }
  _Bool c1504 = 0;
  __retval1494 = c1504;
  _Bool t1505 = __retval1494;
  return t1505;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1506, char* v1507, unsigned long v1508) {
bb1509:
  struct std____new_allocator_char_* this1510;
  char* __p1511;
  unsigned long __n1512;
  this1510 = v1506;
  __p1511 = v1507;
  __n1512 = v1508;
  struct std____new_allocator_char_* t1513 = this1510;
    unsigned long c1514 = 1;
    unsigned long c1515 = 16;
    _Bool c1516 = ((c1514 > c1515)) ? 1 : 0;
    if (c1516) {
      char* t1517 = __p1511;
      void* cast1518 = (void*)t1517;
      unsigned long t1519 = __n1512;
      unsigned long c1520 = 1;
      unsigned long b1521 = t1519 * c1520;
      unsigned long c1522 = 1;
      operator_delete_3(cast1518, b1521, c1522);
      return;
    }
  char* t1523 = __p1511;
  void* cast1524 = (void*)t1523;
  unsigned long t1525 = __n1512;
  unsigned long c1526 = 1;
  unsigned long b1527 = t1525 * c1526;
  operator_delete_2(cast1524, b1527);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1528, char* v1529, unsigned long v1530) {
bb1531:
  struct std__allocator_char_* this1532;
  char* __p1533;
  unsigned long __n1534;
  this1532 = v1528;
  __p1533 = v1529;
  __n1534 = v1530;
  struct std__allocator_char_* t1535 = this1532;
    _Bool r1536 = std____is_constant_evaluated();
    if (r1536) {
      char* t1537 = __p1533;
      void* cast1538 = (void*)t1537;
      operator_delete(cast1538);
      return;
    }
  struct std____new_allocator_char_* base1539 = (struct std____new_allocator_char_*)((char *)t1535 + 0);
  char* t1540 = __p1533;
  unsigned long t1541 = __n1534;
  std____new_allocator_char___deallocate(base1539, t1540, t1541);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1542, char* v1543, unsigned long v1544) {
bb1545:
  struct std__allocator_char_* __a1546;
  char* __p1547;
  unsigned long __n1548;
  __a1546 = v1542;
  __p1547 = v1543;
  __n1548 = v1544;
  struct std__allocator_char_* t1549 = __a1546;
  char* t1550 = __p1547;
  unsigned long t1551 = __n1548;
  std__allocator_char___deallocate(t1549, t1550, t1551);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1552, unsigned long v1553) {
bb1554:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1555;
  unsigned long __size1556;
  this1555 = v1552;
  __size1556 = v1553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1557 = this1555;
  struct std__allocator_char_* r1558 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1557);
  char* r1559 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1557);
  unsigned long t1560 = __size1556;
  unsigned long c1561 = 1;
  unsigned long b1562 = t1560 + c1561;
  std__allocator_traits_std__allocator_char_____deallocate(r1558, r1559, b1562);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1563) {
bb1564:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1565;
  this1565 = v1563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1566 = this1565;
    _Bool r1567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1566);
    _Bool u1568 = !r1567;
    if (u1568) {
      unsigned long t1569 = t1566->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1566, t1569);
    }
  return;
}

