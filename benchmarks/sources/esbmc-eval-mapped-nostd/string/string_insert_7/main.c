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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str == \"to be the question\"";
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str == \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str == \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str == \"to be not to be that is the question\"";
char _str_14[38] = "to be not to be: that is the question";
char _str_15[47] = "str == \"to be not to be: that is the question\"";
char _str_16[39] = "to be, not to be: that is the question";
char _str_17[48] = "str == \"to be, not to be: that is the question\"";
char _str_18[42] = "to be, not to be: that is the question...";
char _str_19[51] = "str == \"to be, not to be: that is the question...\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_20[50] = "basic_string: construction from null is not valid";
char _str_21[24] = "basic_string::_M_create";
char _str_22[22] = "basic_string::replace";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_25[21] = "basic_string::insert";
char _str_26[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, unsigned long p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char p3);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, char p2);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, unsigned long p3, char p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, unsigned long p2, char p3);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_20);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
bb33:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this34;
  this34 = v32;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t35 = this34;
  char* c36 = ((void*)0);
  t35->_M_current = c36;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37, unsigned long v38, unsigned long v39, char* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  unsigned long __n143;
  unsigned long __n244;
  char* __s45;
  this42 = v37;
  __n143 = v38;
  __n244 = v39;
  __s45 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = this42;
    unsigned long r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t46);
    unsigned long r48 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t46);
    unsigned long t49 = __n143;
    unsigned long b50 = r48 - t49;
    unsigned long b51 = r47 - b50;
    unsigned long t52 = __n244;
    _Bool c53 = ((b51 < t52)) ? 1 : 0;
    if (c53) {
      char* t54 = __s45;
      std____throw_length_error(t54);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  _Bool r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t60);
  unsigned long ternary62;
  if (r61) {
    unsigned long c63 = 15;
    ternary62 = (unsigned long)c63;
  } else {
    unsigned long t64 = t60->field2._M_allocated_capacity;
    ternary62 = (unsigned long)t64;
  }
  __sz59 = ternary62;
    unsigned long t65 = __sz59;
    unsigned long c66 = 15;
    _Bool c67 = ((t65 < c66)) ? 1 : 0;
    _Bool ternary68;
    if (c67) {
      _Bool c69 = 1;
      ternary68 = (_Bool)c69;
    } else {
      unsigned long t70 = __sz59;
      unsigned long r71 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
      _Bool c72 = ((t70 > r71)) ? 1 : 0;
      ternary68 = (_Bool)c72;
    }
    if (ternary68) {
      __builtin_unreachable();
    }
  unsigned long t73 = __sz59;
  __retval58 = t73;
  unsigned long t74 = __retval58;
  return t74;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v75, char* v76, char* v77) {
bb78:
  struct std__less_const_char___* this79;
  char* __x80;
  char* __y81;
  _Bool __retval82;
  this79 = v75;
  __x80 = v76;
  __y81 = v77;
  struct std__less_const_char___* t83 = this79;
    _Bool r84 = std____is_constant_evaluated();
    if (r84) {
      char* t85 = __x80;
      char* t86 = __y81;
      _Bool c87 = ((t85 < t86)) ? 1 : 0;
      __retval82 = c87;
      _Bool t88 = __retval82;
      return t88;
    }
  char* t89 = __x80;
  unsigned long cast90 = (unsigned long)t89;
  char* t91 = __y81;
  unsigned long cast92 = (unsigned long)t91;
  _Bool c93 = ((cast90 < cast92)) ? 1 : 0;
  __retval82 = c93;
  _Bool t94 = __retval82;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95, char* v96) {
bb97:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this98;
  char* __s99;
  _Bool __retval100;
  struct std__less_const_char___ ref_tmp0101;
  this98 = v95;
  __s99 = v96;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this98;
  char* t103 = __s99;
  char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
  _Bool r105 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0101, t103, r104);
  _Bool ternary106;
  if (r105) {
    _Bool c107 = 1;
    ternary106 = (_Bool)c107;
  } else {
    struct std__less_const_char___ ref_tmp1108;
    char* r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
    unsigned long r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t102);
    char* ptr111 = &(r109)[r110];
    char* t112 = __s99;
    _Bool r113 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1108, ptr111, t112);
    ternary106 = (_Bool)r113;
  }
  __retval100 = ternary106;
  _Bool t114 = __retval100;
  return t114;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v115, char* v116) {
bb117:
  char* __c1118;
  char* __c2119;
  __c1118 = v115;
  __c2119 = v116;
    _Bool r120 = std____is_constant_evaluated();
    if (r120) {
      char* t121 = __c1118;
      char* t122 = __c2119;
      char* r123 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t121, t122);
    } else {
      char* t124 = __c2119;
      char t125 = *t124;
      char* t126 = __c1118;
      *t126 = t125;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v127, char* v128, unsigned long v129) {
bb130:
  char* __s1131;
  char* __s2132;
  unsigned long __n133;
  char* __retval134;
  __s1131 = v127;
  __s2132 = v128;
  __n133 = v129;
    unsigned long t135 = __n133;
    unsigned long c136 = 0;
    _Bool c137 = ((t135 == c136)) ? 1 : 0;
    if (c137) {
      char* t138 = __s1131;
      __retval134 = t138;
      char* t139 = __retval134;
      return t139;
    }
    _Bool r140 = std____is_constant_evaluated();
    if (r140) {
        char* t141 = __s2132;
        char* t142 = __s1131;
        _Bool c143 = ((t141 < t142)) ? 1 : 0;
        _Bool isconst144 = 0;
        _Bool ternary145;
        if (isconst144) {
          char* t146 = __s1131;
          char* t147 = __s2132;
          _Bool c148 = ((t146 > t147)) ? 1 : 0;
          ternary145 = (_Bool)c148;
        } else {
          _Bool c149 = 0;
          ternary145 = (_Bool)c149;
        }
        _Bool ternary150;
        if (ternary145) {
          char* t151 = __s1131;
          char* t152 = __s2132;
          unsigned long t153 = __n133;
          char* ptr154 = &(t152)[t153];
          _Bool c155 = ((t151 < ptr154)) ? 1 : 0;
          ternary150 = (_Bool)c155;
        } else {
          _Bool c156 = 0;
          ternary150 = (_Bool)c156;
        }
        if (ternary150) {
            do {
                unsigned long t157 = __n133;
                unsigned long u158 = t157 - 1;
                __n133 = u158;
                unsigned long t159 = __n133;
                char* t160 = __s1131;
                char* ptr161 = &(t160)[t159];
                unsigned long t162 = __n133;
                char* t163 = __s2132;
                char* ptr164 = &(t163)[t162];
                __gnu_cxx__char_traits_char___assign_2(ptr161, ptr164);
              unsigned long t165 = __n133;
              unsigned long c166 = 0;
              _Bool c167 = ((t165 > c166)) ? 1 : 0;
              if (!c167) break;
            } while (1);
        } else {
          char* t168 = __s1131;
          char* t169 = __s2132;
          unsigned long t170 = __n133;
          char* r171 = __gnu_cxx__char_traits_char___copy(t168, t169, t170);
        }
      char* t172 = __s1131;
      __retval134 = t172;
      char* t173 = __retval134;
      return t173;
    }
  char* t174 = __s1131;
  void* cast175 = (void*)t174;
  char* t176 = __s2132;
  void* cast177 = (void*)t176;
  unsigned long t178 = __n133;
  unsigned long c179 = 1;
  unsigned long b180 = t178 * c179;
  void* r181 = memmove(cast175, cast177, b180);
  char* t182 = __s1131;
  __retval134 = t182;
  char* t183 = __retval134;
  return t183;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v184, char* v185, unsigned long v186) {
bb187:
  char* __s1188;
  char* __s2189;
  unsigned long __n190;
  char* __retval191;
  __s1188 = v184;
  __s2189 = v185;
  __n190 = v186;
    unsigned long t192 = __n190;
    unsigned long c193 = 0;
    _Bool c194 = ((t192 == c193)) ? 1 : 0;
    if (c194) {
      char* t195 = __s1188;
      __retval191 = t195;
      char* t196 = __retval191;
      return t196;
    }
    _Bool r197 = std____is_constant_evaluated();
    if (r197) {
      char* t198 = __s1188;
      char* t199 = __s2189;
      unsigned long t200 = __n190;
      char* r201 = __gnu_cxx__char_traits_char___move(t198, t199, t200);
      __retval191 = r201;
      char* t202 = __retval191;
      return t202;
    }
  char* t203 = __s1188;
  void* cast204 = (void*)t203;
  char* t205 = __s2189;
  void* cast206 = (void*)t205;
  unsigned long t207 = __n190;
  void* r208 = memmove(cast204, cast206, t207);
  char* cast209 = (char*)r208;
  __retval191 = cast209;
  char* t210 = __retval191;
  return t210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v211, char* v212, unsigned long v213) {
bb214:
  char* __d215;
  char* __s216;
  unsigned long __n217;
  __d215 = v211;
  __s216 = v212;
  __n217 = v213;
    unsigned long t218 = __n217;
    unsigned long c219 = 1;
    _Bool c220 = ((t218 == c219)) ? 1 : 0;
    if (c220) {
      char* t221 = __d215;
      char* t222 = __s216;
      std__char_traits_char___assign_2(t221, t222);
    } else {
      char* t223 = __d215;
      char* t224 = __s216;
      unsigned long t225 = __n217;
      char* r226 = std__char_traits_char___move(t223, t224, t225);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227, char* v228, unsigned long v229, char* v230, unsigned long v231, unsigned long v232) {
bb233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this234;
  char* __p235;
  unsigned long __len1236;
  char* __s237;
  unsigned long __len2238;
  unsigned long __how_much239;
  this234 = v227;
  __p235 = v228;
  __len1236 = v229;
  __s237 = v230;
  __len2238 = v231;
  __how_much239 = v232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = this234;
    unsigned long t241 = __len2238;
    _Bool cast242 = (_Bool)t241;
    _Bool ternary243;
    if (cast242) {
      unsigned long t244 = __len2238;
      unsigned long t245 = __len1236;
      _Bool c246 = ((t244 <= t245)) ? 1 : 0;
      ternary243 = (_Bool)c246;
    } else {
      _Bool c247 = 0;
      ternary243 = (_Bool)c247;
    }
    if (ternary243) {
      char* t248 = __p235;
      char* t249 = __s237;
      unsigned long t250 = __len2238;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t248, t249, t250);
    }
    unsigned long t251 = __how_much239;
    _Bool cast252 = (_Bool)t251;
    _Bool ternary253;
    if (cast252) {
      unsigned long t254 = __len1236;
      unsigned long t255 = __len2238;
      _Bool c256 = ((t254 != t255)) ? 1 : 0;
      ternary253 = (_Bool)c256;
    } else {
      _Bool c257 = 0;
      ternary253 = (_Bool)c257;
    }
    if (ternary253) {
      char* t258 = __p235;
      unsigned long t259 = __len2238;
      char* ptr260 = &(t258)[t259];
      char* t261 = __p235;
      unsigned long t262 = __len1236;
      char* ptr263 = &(t261)[t262];
      unsigned long t264 = __how_much239;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr260, ptr263, t264);
    }
    unsigned long t265 = __len2238;
    unsigned long t266 = __len1236;
    _Bool c267 = ((t265 > t266)) ? 1 : 0;
    if (c267) {
        char* t268 = __s237;
        unsigned long t269 = __len2238;
        char* ptr270 = &(t268)[t269];
        char* t271 = __p235;
        unsigned long t272 = __len1236;
        char* ptr273 = &(t271)[t272];
        _Bool c274 = ((ptr270 <= ptr273)) ? 1 : 0;
        if (c274) {
          char* t275 = __p235;
          char* t276 = __s237;
          unsigned long t277 = __len2238;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t275, t276, t277);
        } else {
            char* t278 = __s237;
            char* t279 = __p235;
            unsigned long t280 = __len1236;
            char* ptr281 = &(t279)[t280];
            _Bool c282 = ((t278 >= ptr281)) ? 1 : 0;
            if (c282) {
              unsigned long __poff283;
              char* t284 = __s237;
              char* t285 = __p235;
              long diff286 = t284 - t285;
              unsigned long cast287 = (unsigned long)diff286;
              unsigned long t288 = __len2238;
              unsigned long t289 = __len1236;
              unsigned long b290 = t288 - t289;
              unsigned long b291 = cast287 + b290;
              __poff283 = b291;
              char* t292 = __p235;
              char* t293 = __p235;
              unsigned long t294 = __poff283;
              char* ptr295 = &(t293)[t294];
              unsigned long t296 = __len2238;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t292, ptr295, t296);
            } else {
              unsigned long __nleft297;
              char* t298 = __p235;
              unsigned long t299 = __len1236;
              char* ptr300 = &(t298)[t299];
              char* t301 = __s237;
              long diff302 = ptr300 - t301;
              unsigned long cast303 = (unsigned long)diff302;
              __nleft297 = cast303;
              char* t304 = __p235;
              char* t305 = __s237;
              unsigned long t306 = __nleft297;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t304, t305, t306);
              char* t307 = __p235;
              unsigned long t308 = __nleft297;
              char* ptr309 = &(t307)[t308];
              char* t310 = __p235;
              unsigned long t311 = __len2238;
              char* ptr312 = &(t310)[t311];
              unsigned long t313 = __len2238;
              unsigned long t314 = __nleft297;
              unsigned long b315 = t313 - t314;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr309, ptr312, b315);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v316) {
bb317:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this318;
  unsigned long __retval319;
  this318 = v316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t320 = this318;
  unsigned long r321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t320);
  __retval319 = r321;
  unsigned long t322 = __retval319;
  return t322;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v323, unsigned long v324, unsigned long v325, char* v326, unsigned long v327) {
bb328:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  unsigned long __pos330;
  unsigned long __len1331;
  char* __s332;
  unsigned long __len2333;
  unsigned long __how_much334;
  unsigned long __new_capacity335;
  char* __r336;
  this329 = v323;
  __pos330 = v324;
  __len1331 = v325;
  __s332 = v326;
  __len2333 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this329;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t339 = __pos330;
  unsigned long b340 = r338 - t339;
  unsigned long t341 = __len1331;
  unsigned long b342 = b340 - t341;
  __how_much334 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t344 = __len2333;
  unsigned long b345 = r343 + t344;
  unsigned long t346 = __len1331;
  unsigned long b347 = b345 - t346;
  __new_capacity335 = b347;
  unsigned long r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t337);
  char* r349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t337, &__new_capacity335, r348);
  __r336 = r349;
    unsigned long t350 = __pos330;
    _Bool cast351 = (_Bool)t350;
    if (cast351) {
      char* t352 = __r336;
      char* r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t354 = __pos330;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t352, r353, t354);
    }
    char* t355 = __s332;
    _Bool cast356 = (_Bool)t355;
    _Bool ternary357;
    if (cast356) {
      unsigned long t358 = __len2333;
      _Bool cast359 = (_Bool)t358;
      ternary357 = (_Bool)cast359;
    } else {
      _Bool c360 = 0;
      ternary357 = (_Bool)c360;
    }
    if (ternary357) {
      char* t361 = __r336;
      unsigned long t362 = __pos330;
      char* ptr363 = &(t361)[t362];
      char* t364 = __s332;
      unsigned long t365 = __len2333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr363, t364, t365);
    }
    unsigned long t366 = __how_much334;
    _Bool cast367 = (_Bool)t366;
    if (cast367) {
      char* t368 = __r336;
      unsigned long t369 = __pos330;
      char* ptr370 = &(t368)[t369];
      unsigned long t371 = __len2333;
      char* ptr372 = &(ptr370)[t371];
      char* r373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t374 = __pos330;
      char* ptr375 = &(r373)[t374];
      unsigned long t376 = __len1331;
      char* ptr377 = &(ptr375)[t376];
      unsigned long t378 = __how_much334;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr372, ptr377, t378);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t337);
  char* t379 = __r336;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t337, t379);
  unsigned long t380 = __new_capacity335;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t337, t380);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v381, unsigned long v382, unsigned long v383, char* v384, unsigned long v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long __pos388;
  unsigned long __len1389;
  char* __s390;
  unsigned long __len2391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval392;
  unsigned long __old_size393;
  unsigned long __new_size394;
  this387 = v381;
  __pos388 = v382;
  __len1389 = v383;
  __s390 = v384;
  __len2391 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t395 = this387;
  unsigned long t396 = __len1389;
  unsigned long t397 = __len2391;
  char* cast398 = (char*)&(_str_23);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t395, t396, t397, cast398);
  unsigned long r399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t395);
  __old_size393 = r399;
  unsigned long t400 = __old_size393;
  unsigned long t401 = __len2391;
  unsigned long b402 = t400 + t401;
  unsigned long t403 = __len1389;
  unsigned long b404 = b402 - t403;
  __new_size394 = b404;
    unsigned long t405 = __new_size394;
    unsigned long r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t395);
    _Bool c407 = ((t405 <= r406)) ? 1 : 0;
    if (c407) {
      char* __p408;
      unsigned long __how_much409;
      char* r410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
      unsigned long t411 = __pos388;
      char* ptr412 = &(r410)[t411];
      __p408 = ptr412;
      unsigned long t413 = __old_size393;
      unsigned long t414 = __pos388;
      unsigned long b415 = t413 - t414;
      unsigned long t416 = __len1389;
      unsigned long b417 = b415 - t416;
      __how_much409 = b417;
        _Bool r418 = std__is_constant_evaluated();
        if (r418) {
          char* __newp419;
          struct std__allocator_char_* r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          unsigned long t421 = __new_size394;
          char* r422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r420, t421);
          __newp419 = r422;
          char* t423 = __newp419;
          char* r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          unsigned long t425 = __pos388;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t423, r424, t425);
          char* t426 = __newp419;
          unsigned long t427 = __pos388;
          char* ptr428 = &(t426)[t427];
          char* t429 = __s390;
          unsigned long t430 = __len2391;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr428, t429, t430);
          char* t431 = __newp419;
          unsigned long t432 = __pos388;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __len2391;
          char* ptr435 = &(ptr433)[t434];
          char* t436 = __p408;
          unsigned long t437 = __len1389;
          char* ptr438 = &(t436)[t437];
          unsigned long t439 = __how_much409;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr435, ptr438, t439);
          char* r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          char* t441 = __newp419;
          unsigned long t442 = __new_size394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r440, t441, t442);
          struct std__allocator_char_* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          char* t444 = __newp419;
          unsigned long t445 = __new_size394;
          std__allocator_char___deallocate(r443, t444, t445);
        } else {
            char* t446 = __s390;
            _Bool r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t395, t446);
            if (r447) {
                unsigned long t448 = __how_much409;
                _Bool cast449 = (_Bool)t448;
                _Bool ternary450;
                if (cast449) {
                  unsigned long t451 = __len1389;
                  unsigned long t452 = __len2391;
                  _Bool c453 = ((t451 != t452)) ? 1 : 0;
                  ternary450 = (_Bool)c453;
                } else {
                  _Bool c454 = 0;
                  ternary450 = (_Bool)c454;
                }
                if (ternary450) {
                  char* t455 = __p408;
                  unsigned long t456 = __len2391;
                  char* ptr457 = &(t455)[t456];
                  char* t458 = __p408;
                  unsigned long t459 = __len1389;
                  char* ptr460 = &(t458)[t459];
                  unsigned long t461 = __how_much409;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr457, ptr460, t461);
                }
                unsigned long t462 = __len2391;
                _Bool cast463 = (_Bool)t462;
                if (cast463) {
                  char* t464 = __p408;
                  char* t465 = __s390;
                  unsigned long t466 = __len2391;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t464, t465, t466);
                }
            } else {
              char* t467 = __p408;
              unsigned long t468 = __len1389;
              char* t469 = __s390;
              unsigned long t470 = __len2391;
              unsigned long t471 = __how_much409;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t395, t467, t468, t469, t470, t471);
            }
        }
    } else {
      unsigned long t472 = __pos388;
      unsigned long t473 = __len1389;
      char* t474 = __s390;
      unsigned long t475 = __len2391;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t395, t472, t473, t474, t475);
    }
  unsigned long t476 = __new_size394;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t395, t476);
  __retval392 = t395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = __retval392;
  return t477;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v478, unsigned long v479, char* v480) {
bb481:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this482;
  unsigned long __pos483;
  char* __s484;
  unsigned long __retval485;
  this482 = v478;
  __pos483 = v479;
  __s484 = v480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t486 = this482;
    unsigned long t487 = __pos483;
    unsigned long r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
    _Bool c489 = ((t487 > r488)) ? 1 : 0;
    if (c489) {
      char* cast490 = (char*)&(_str_24);
      char* t491 = __s484;
      unsigned long t492 = __pos483;
      unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
      std____throw_out_of_range_fmt(cast490, t491, t492, r493);
    }
  unsigned long t494 = __pos483;
  __retval485 = t494;
  unsigned long t495 = __retval485;
  return t495;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v496, unsigned long v497, unsigned long v498) {
bb499:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this500;
  unsigned long __pos501;
  unsigned long __off502;
  unsigned long __retval503;
  _Bool __testoff504;
  this500 = v496;
  __pos501 = v497;
  __off502 = v498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this500;
  unsigned long t506 = __off502;
  unsigned long r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
  unsigned long t508 = __pos501;
  unsigned long b509 = r507 - t508;
  _Bool c510 = ((t506 < b509)) ? 1 : 0;
  __testoff504 = c510;
  _Bool t511 = __testoff504;
  unsigned long ternary512;
  if (t511) {
    unsigned long t513 = __off502;
    ternary512 = (unsigned long)t513;
  } else {
    unsigned long r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
    unsigned long t515 = __pos501;
    unsigned long b516 = r514 - t515;
    ternary512 = (unsigned long)b516;
  }
  __retval503 = ternary512;
  unsigned long t517 = __retval503;
  return t517;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long v519, unsigned long v520, char* v521, unsigned long v522) {
bb523:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this524;
  unsigned long __pos525;
  unsigned long __n1526;
  char* __s527;
  unsigned long __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval529;
  this524 = v518;
  __pos525 = v519;
  __n1526 = v520;
  __s527 = v521;
  __n2528 = v522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t530 = this524;
  unsigned long t531 = __pos525;
  char* cast532 = (char*)&(_str_22);
  unsigned long r533 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t530, t531, cast532);
  unsigned long t534 = __pos525;
  unsigned long t535 = __n1526;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t530, t534, t535);
  char* t537 = __s527;
  unsigned long t538 = __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r539 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t530, r533, r536, t537, t538);
  __retval529 = r539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t540 = __retval529;
  return t540;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v541) {
bb542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this543;
  unsigned long __retval544;
  unsigned long __sz545;
  this543 = v541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t546 = this543;
  unsigned long t547 = t546->_M_string_length;
  __sz545 = t547;
    unsigned long t548 = __sz545;
    unsigned long r549 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t546);
    _Bool c550 = ((t548 > r549)) ? 1 : 0;
    if (c550) {
      __builtin_unreachable();
    }
  unsigned long t551 = __sz545;
  __retval544 = t551;
  unsigned long t552 = __retval544;
  return t552;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, unsigned long v554, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
bb556:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this557;
  unsigned long __pos1558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval560;
  this557 = v553;
  __pos1558 = v554;
  __str559 = v555;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this557;
  unsigned long t562 = __pos1558;
  unsigned long c563 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = __str559;
  char* r565 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t564);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t566 = __str559;
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t566);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t561, t562, c563, r565, r567);
  __retval560 = r568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = __retval560;
  return t569;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v570, char* v571) {
bb572:
  char* __c1573;
  char* __c2574;
  _Bool __retval575;
  __c1573 = v570;
  __c2574 = v571;
  char* t576 = __c1573;
  char t577 = *t576;
  unsigned char cast578 = (unsigned char)t577;
  int cast579 = (int)cast578;
  char* t580 = __c2574;
  char t581 = *t580;
  unsigned char cast582 = (unsigned char)t581;
  int cast583 = (int)cast582;
  _Bool c584 = ((cast579 < cast583)) ? 1 : 0;
  __retval575 = c584;
  _Bool t585 = __retval575;
  return t585;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v586, char* v587, unsigned long v588) {
bb589:
  char* __s1590;
  char* __s2591;
  unsigned long __n592;
  int __retval593;
  __s1590 = v586;
  __s2591 = v587;
  __n592 = v588;
    unsigned long t594 = __n592;
    unsigned long c595 = 0;
    _Bool c596 = ((t594 == c595)) ? 1 : 0;
    if (c596) {
      int c597 = 0;
      __retval593 = c597;
      int t598 = __retval593;
      return t598;
    }
    _Bool r599 = std____is_constant_evaluated();
    if (r599) {
        unsigned long __i600;
        unsigned long c601 = 0;
        __i600 = c601;
        while (1) {
          unsigned long t603 = __i600;
          unsigned long t604 = __n592;
          _Bool c605 = ((t603 < t604)) ? 1 : 0;
          if (!c605) break;
            unsigned long t606 = __i600;
            char* t607 = __s1590;
            char* ptr608 = &(t607)[t606];
            unsigned long t609 = __i600;
            char* t610 = __s2591;
            char* ptr611 = &(t610)[t609];
            _Bool r612 = std__char_traits_char___lt(ptr608, ptr611);
            if (r612) {
              int c613 = -1;
              __retval593 = c613;
              int t614 = __retval593;
              int ret_val615 = t614;
              return ret_val615;
            } else {
                unsigned long t616 = __i600;
                char* t617 = __s2591;
                char* ptr618 = &(t617)[t616];
                unsigned long t619 = __i600;
                char* t620 = __s1590;
                char* ptr621 = &(t620)[t619];
                _Bool r622 = std__char_traits_char___lt(ptr618, ptr621);
                if (r622) {
                  int c623 = 1;
                  __retval593 = c623;
                  int t624 = __retval593;
                  int ret_val625 = t624;
                  return ret_val625;
                }
            }
        for_step602: ;
          unsigned long t626 = __i600;
          unsigned long u627 = t626 + 1;
          __i600 = u627;
        }
      int c628 = 0;
      __retval593 = c628;
      int t629 = __retval593;
      return t629;
    }
  char* t630 = __s1590;
  void* cast631 = (void*)t630;
  char* t632 = __s2591;
  void* cast633 = (void*)t632;
  unsigned long t634 = __n592;
  int r635 = memcmp(cast631, cast633, t634);
  __retval593 = r635;
  int t636 = __retval593;
  return t636;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637) {
bb638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this639;
  char* __retval640;
  this639 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this639;
  char* r642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t641);
  __retval640 = r642;
  char* t643 = __retval640;
  return t643;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v644, char* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs647;
  char* __rhs648;
  _Bool __retval649;
  __lhs647 = v644;
  __rhs648 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = __lhs647;
  unsigned long r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t650);
  char* t652 = __rhs648;
  unsigned long r653 = std__char_traits_char___length(t652);
  _Bool c654 = ((r651 == r653)) ? 1 : 0;
  _Bool ternary655;
  if (c654) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t656 = __lhs647;
    char* r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t656);
    char* t658 = __rhs648;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t659 = __lhs647;
    unsigned long r660 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t659);
    int r661 = std__char_traits_char___compare(r657, t658, r660);
    _Bool cast662 = (_Bool)r661;
    _Bool u663 = !cast662;
    ternary655 = (_Bool)u663;
  } else {
    _Bool c664 = 0;
    ternary655 = (_Bool)c664;
  }
  __retval649 = ternary655;
  _Bool t665 = __retval649;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668, unsigned long v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos1673;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str674;
  unsigned long __pos2675;
  unsigned long __n676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval677;
  this672 = v666;
  __pos1673 = v667;
  __str674 = v668;
  __pos2675 = v669;
  __n676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this672;
  unsigned long t679 = __pos1673;
  unsigned long c680 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t681 = __str674;
  char* r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t681);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = __str674;
  unsigned long t684 = __pos2675;
  char* cast685 = (char*)&(_str_25);
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t683, t684, cast685);
  char* ptr687 = &(r682)[r686];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __str674;
  unsigned long t689 = __pos2675;
  unsigned long t690 = __n676;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t688, t689, t690);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t678, t679, c680, ptr687, r691);
  __retval677 = r692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = __retval677;
  return t693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694, unsigned long v695, char* v696, unsigned long v697) {
bb698:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this699;
  unsigned long __pos700;
  char* __s701;
  unsigned long __n702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval703;
  this699 = v694;
  __pos700 = v695;
  __s701 = v696;
  __n702 = v697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t704 = this699;
  unsigned long t705 = __pos700;
  unsigned long c706 = 0;
  char* t707 = __s701;
  unsigned long t708 = __n702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t704, t705, c706, t707, t708);
  __retval703 = r709;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = __retval703;
  return t710;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711, unsigned long v712, char* v713) {
bb714:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this715;
  unsigned long __pos716;
  char* __s717;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval718;
  this715 = v711;
  __pos716 = v712;
  __s717 = v713;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this715;
  unsigned long t720 = __pos716;
  unsigned long c721 = 0;
  char* t722 = __s717;
  char* t723 = __s717;
  unsigned long r724 = std__char_traits_char___length(t723);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t719, t720, c721, t722, r724);
  __retval718 = r725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t726 = __retval718;
  return t726;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v727, char* v728) {
bb729:
  char* __location730;
  char* __args731;
  char* __retval732;
  void* __loc733;
  __location730 = v727;
  __args731 = v728;
  char* t734 = __location730;
  void* cast735 = (void*)t734;
  __loc733 = cast735;
    void* t736 = __loc733;
    char* cast737 = (char*)t736;
    char* t738 = __args731;
    char t739 = *t738;
    *cast737 = t739;
    __retval732 = cast737;
    char* t740 = __retval732;
    return t740;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v741, unsigned long v742, char v743) {
bb744:
  char* __s745;
  unsigned long __n746;
  char __a747;
  char* __retval748;
  __s745 = v741;
  __n746 = v742;
  __a747 = v743;
    _Bool r749 = std____is_constant_evaluated();
    if (r749) {
        unsigned long __i750;
        unsigned long c751 = 0;
        __i750 = c751;
        while (1) {
          unsigned long t753 = __i750;
          unsigned long t754 = __n746;
          _Bool c755 = ((t753 < t754)) ? 1 : 0;
          if (!c755) break;
          char* t756 = __s745;
          unsigned long t757 = __i750;
          char* ptr758 = &(t756)[t757];
          char* r759 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr758, &__a747);
        for_step752: ;
          unsigned long t760 = __i750;
          unsigned long u761 = t760 + 1;
          __i750 = u761;
        }
      char* t762 = __s745;
      __retval748 = t762;
      char* t763 = __retval748;
      return t763;
    }
      unsigned long t764 = __n746;
      _Bool cast765 = (_Bool)t764;
      if (cast765) {
        unsigned char __c766;
        void* cast767 = (void*)&(__c766);
        void* cast768 = (void*)&(__a747);
        unsigned long c769 = 1;
        void* r770 = memcpy(cast767, cast768, c769);
        char* t771 = __s745;
        void* cast772 = (void*)t771;
        unsigned char t773 = __c766;
        int cast774 = (int)t773;
        unsigned long t775 = __n746;
        void* r776 = memset(cast772, cast774, t775);
      }
  char* t777 = __s745;
  __retval748 = t777;
  char* t778 = __retval748;
  return t778;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v779, unsigned long v780, char v781) {
bb782:
  char* __s783;
  unsigned long __n784;
  char __a785;
  char* __retval786;
  __s783 = v779;
  __n784 = v780;
  __a785 = v781;
    unsigned long t787 = __n784;
    unsigned long c788 = 0;
    _Bool c789 = ((t787 == c788)) ? 1 : 0;
    if (c789) {
      char* t790 = __s783;
      __retval786 = t790;
      char* t791 = __retval786;
      return t791;
    }
    _Bool r792 = std____is_constant_evaluated();
    if (r792) {
      char* t793 = __s783;
      unsigned long t794 = __n784;
      char t795 = __a785;
      char* r796 = __gnu_cxx__char_traits_char___assign(t793, t794, t795);
      __retval786 = r796;
      char* t797 = __retval786;
      return t797;
    }
  char* t798 = __s783;
  void* cast799 = (void*)t798;
  char t800 = __a785;
  int cast801 = (int)t800;
  unsigned long t802 = __n784;
  void* r803 = memset(cast799, cast801, t802);
  char* cast804 = (char*)r803;
  __retval786 = cast804;
  char* t805 = __retval786;
  return t805;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v806, unsigned long v807, char v808) {
bb809:
  char* __d810;
  unsigned long __n811;
  char __c812;
  __d810 = v806;
  __n811 = v807;
  __c812 = v808;
    unsigned long t813 = __n811;
    unsigned long c814 = 1;
    _Bool c815 = ((t813 == c814)) ? 1 : 0;
    if (c815) {
      char* t816 = __d810;
      std__char_traits_char___assign_2(t816, &__c812);
    } else {
      char* t817 = __d810;
      unsigned long t818 = __n811;
      char t819 = __c812;
      char* r820 = std__char_traits_char___assign(t817, t818, t819);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821, unsigned long v822, unsigned long v823, unsigned long v824, char v825) {
bb826:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this827;
  unsigned long __pos1828;
  unsigned long __n1829;
  unsigned long __n2830;
  char __c831;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval832;
  unsigned long __old_size833;
  unsigned long __new_size834;
  this827 = v821;
  __pos1828 = v822;
  __n1829 = v823;
  __n2830 = v824;
  __c831 = v825;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t835 = this827;
  unsigned long t836 = __n1829;
  unsigned long t837 = __n2830;
  char* cast838 = (char*)&(_str_26);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t835, t836, t837, cast838);
  unsigned long r839 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t835);
  __old_size833 = r839;
  unsigned long t840 = __old_size833;
  unsigned long t841 = __n2830;
  unsigned long b842 = t840 + t841;
  unsigned long t843 = __n1829;
  unsigned long b844 = b842 - t843;
  __new_size834 = b844;
    unsigned long t845 = __new_size834;
    unsigned long r846 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t835);
    _Bool c847 = ((t845 <= r846)) ? 1 : 0;
    if (c847) {
      char* __p848;
      unsigned long __how_much849;
      char* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t835);
      unsigned long t851 = __pos1828;
      char* ptr852 = &(r850)[t851];
      __p848 = ptr852;
      unsigned long t853 = __old_size833;
      unsigned long t854 = __pos1828;
      unsigned long b855 = t853 - t854;
      unsigned long t856 = __n1829;
      unsigned long b857 = b855 - t856;
      __how_much849 = b857;
        unsigned long t858 = __how_much849;
        _Bool cast859 = (_Bool)t858;
        _Bool ternary860;
        if (cast859) {
          unsigned long t861 = __n1829;
          unsigned long t862 = __n2830;
          _Bool c863 = ((t861 != t862)) ? 1 : 0;
          ternary860 = (_Bool)c863;
        } else {
          _Bool c864 = 0;
          ternary860 = (_Bool)c864;
        }
        if (ternary860) {
          char* t865 = __p848;
          unsigned long t866 = __n2830;
          char* ptr867 = &(t865)[t866];
          char* t868 = __p848;
          unsigned long t869 = __n1829;
          char* ptr870 = &(t868)[t869];
          unsigned long t871 = __how_much849;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr867, ptr870, t871);
        }
    } else {
      unsigned long t872 = __pos1828;
      unsigned long t873 = __n1829;
      char* c874 = ((void*)0);
      unsigned long t875 = __n2830;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t835, t872, t873, c874, t875);
    }
    unsigned long t876 = __n2830;
    _Bool cast877 = (_Bool)t876;
    if (cast877) {
      char* r878 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t835);
      unsigned long t879 = __pos1828;
      char* ptr880 = &(r878)[t879];
      unsigned long t881 = __n2830;
      char t882 = __c831;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr880, t881, t882);
    }
  unsigned long t883 = __new_size834;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t835, t883);
  __retval832 = t835;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = __retval832;
  return t884;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v885, unsigned long v886, unsigned long v887, char v888) {
bb889:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this890;
  unsigned long __pos891;
  unsigned long __n892;
  char __c893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval894;
  this890 = v885;
  __pos891 = v886;
  __n892 = v887;
  __c893 = v888;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = this890;
  unsigned long t896 = __pos891;
  char* cast897 = (char*)&(_str_25);
  unsigned long r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t895, t896, cast897);
  unsigned long c899 = 0;
  unsigned long t900 = __n892;
  char t901 = __c893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t895, r898, c899, t900, t901);
  __retval894 = r902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = __retval894;
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v930, char** v931) {
bb932:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this933;
  char** __i934;
  this933 = v930;
  __i934 = v931;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t935 = this933;
  char** t936 = __i934;
  char* t937 = *t936;
  t935->_M_current = t937;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEN9__gnu_cxx17__normal_iteratorIPKcS4_EEc
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v939, char v940) {
bb941:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this942;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __p943;
  char __c944;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval945;
  unsigned long __pos946;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0947;
  char* ref_tmp1948;
  this942 = v938;
  __p943 = v939;
  __c944 = v940;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = this942;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r950 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t949);
  ref_tmp0947 = r950;
  long r951 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__p943, &ref_tmp0947);
  unsigned long cast952 = (unsigned long)r951;
  __pos946 = cast952;
  unsigned long t953 = __pos946;
  unsigned long c954 = 0;
  unsigned long c955 = 1;
  char t956 = __c944;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r957 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t949, t953, c954, c955, t956);
  char* r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t949);
  unsigned long t959 = __pos946;
  char* ptr960 = &(r958)[t959];
  ref_tmp1948 = ptr960;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval945, &ref_tmp1948);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t961 = __retval945;
  return t961;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v962) {
bb963:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this964;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval965;
  char* ref_tmp0966;
  this964 = v962;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t967 = this964;
  char* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t967);
  ref_tmp0966 = r968;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval965, &ref_tmp0966);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t969 = __retval965;
  return t969;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v970, long v971) {
bb972:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this973;
  long __n974;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval975;
  char* ref_tmp0976;
  this973 = v970;
  __n974 = v971;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t977 = this973;
  char* t978 = t977->_M_current;
  long t979 = __n974;
  char* ptr980 = &(t978)[t979];
  ref_tmp0976 = ptr980;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval975, &ref_tmp0976);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t981 = __retval975;
  return t981;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v982, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v983) {
bb984:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this985;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i986;
  this985 = v982;
  __i986 = v983;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t987 = this985;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t988 = __i986;
  char** r989 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t988);
  char* t990 = *r989;
  t987->_M_current = t990;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEaSEOS8_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v991, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v992) {
bb993:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this994;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* unnamed995;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval996;
  this994 = v991;
  unnamed995 = v992;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t997 = this994;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t998 = unnamed995;
  char* t999 = t998->_M_current;
  t997->_M_current = t999;
  __retval996 = t997;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1000 = __retval996;
  return t1000;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1001, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1002) {
bb1003:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs1004;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs1005;
  long __retval1006;
  __lhs1004 = v1001;
  __rhs1005 = v1002;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1007 = __lhs1004;
  char** r1008 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1007);
  char* t1009 = *r1008;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1010 = __rhs1005;
  char** r1011 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1010);
  char* t1012 = *r1011;
  long diff1013 = t1009 - t1012;
  __retval1006 = diff1013;
  long t1014 = __retval1006;
  return t1014;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_mc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1015, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1016, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1017, unsigned long v1018, char v1019) {
bb1020:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1021;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11022;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21023;
  unsigned long __n1024;
  char __c1025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1026;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01027;
  this1021 = v1015;
  __i11022 = v1016;
  __i21023 = v1017;
  __n1024 = v1018;
  __c1025 = v1019;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1028 = this1021;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1028);
  ref_tmp01027 = r1029;
  long r1030 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i11022, &ref_tmp01027);
  unsigned long cast1031 = (unsigned long)r1030;
  long r1032 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i21023, &__i11022);
  unsigned long cast1033 = (unsigned long)r1032;
  unsigned long t1034 = __n1024;
  char t1035 = __c1025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1036 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t1028, cast1031, cast1033, t1034, t1035);
  __retval1026 = r1036;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1037 = __retval1026;
  return t1037;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEN9__gnu_cxx17__normal_iteratorIPKcS4_EEmc
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1038, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1039, unsigned long v1040, char v1041) {
bb1042:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1043;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __p1044;
  unsigned long __n1045;
  char __c1046;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1047;
  unsigned long __pos1048;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01049;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01050;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11051;
  char* ref_tmp11052;
  this1043 = v1038;
  __p1044 = v1039;
  __n1045 = v1040;
  __c1046 = v1041;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1053 = this1043;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1054 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1053);
  ref_tmp01049 = r1054;
  long r1055 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__p1044, &ref_tmp01049);
  unsigned long cast1056 = (unsigned long)r1055;
  __pos1048 = cast1056;
  agg_tmp01050 = __p1044; // copy
  agg_tmp11051 = __p1044; // copy
  unsigned long t1057 = __n1045;
  char t1058 = __c1046;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1059 = agg_tmp01050;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1060 = agg_tmp11051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t1053, t1059, t1060, t1057, t1058);
  char* r1062 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1053);
  unsigned long t1063 = __pos1048;
  char* ptr1064 = &(r1062)[t1063];
  ref_tmp11052 = ptr1064;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1047, &ref_tmp11052);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1065 = __retval1047;
  return t1065;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1066) {
bb1067:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1068;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1069;
  char* ref_tmp01070;
  this1068 = v1066;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = this1068;
  char* r1072 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1071);
  unsigned long r1073 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1071);
  char* ptr1074 = &(r1072)[r1073];
  ref_tmp01070 = ptr1074;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1069, &ref_tmp01070);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1075 = __retval1069;
  return t1075;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1076, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1077) {
bb1078:
  struct std__basic_ostream_char__std__char_traits_char__* __os1079;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1080;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1081;
  __os1079 = v1076;
  __str1080 = v1077;
  struct std__basic_ostream_char__std__char_traits_char__* t1082 = __os1079;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1083 = __str1080;
  char* r1084 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1083);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1085 = __str1080;
  unsigned long r1086 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1085);
  long cast1087 = (long)r1086;
  struct std__basic_ostream_char__std__char_traits_char__* r1088 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1082, r1084, cast1087);
  __retval1081 = r1088;
  struct std__basic_ostream_char__std__char_traits_char__* t1089 = __retval1081;
  return t1089;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1090, void* v1091) {
bb1092:
  struct std__basic_ostream_char__std__char_traits_char__* this1093;
  void* __pf1094;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1095;
  this1093 = v1090;
  __pf1094 = v1091;
  struct std__basic_ostream_char__std__char_traits_char__* t1096 = this1093;
  void* t1097 = __pf1094;
  struct std__basic_ostream_char__std__char_traits_char__* r1098 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1097)(t1096);
  __retval1095 = r1098;
  struct std__basic_ostream_char__std__char_traits_char__* t1099 = __retval1095;
  return t1099;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1100) {
bb1101:
  struct std__basic_ostream_char__std__char_traits_char__* __os1102;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1103;
  __os1102 = v1100;
  struct std__basic_ostream_char__std__char_traits_char__* t1104 = __os1102;
  struct std__basic_ostream_char__std__char_traits_char__* r1105 = std__ostream__flush(t1104);
  __retval1103 = r1105;
  struct std__basic_ostream_char__std__char_traits_char__* t1106 = __retval1103;
  return t1106;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1107) {
bb1108:
  struct std__ctype_char_* __f1109;
  struct std__ctype_char_* __retval1110;
  __f1109 = v1107;
    struct std__ctype_char_* t1111 = __f1109;
    _Bool cast1112 = (_Bool)t1111;
    _Bool u1113 = !cast1112;
    if (u1113) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1114 = __f1109;
  __retval1110 = t1114;
  struct std__ctype_char_* t1115 = __retval1110;
  return t1115;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1116, char v1117) {
bb1118:
  struct std__ctype_char_* this1119;
  char __c1120;
  char __retval1121;
  this1119 = v1116;
  __c1120 = v1117;
  struct std__ctype_char_* t1122 = this1119;
    char t1123 = t1122->_M_widen_ok;
    _Bool cast1124 = (_Bool)t1123;
    if (cast1124) {
      char t1125 = __c1120;
      unsigned char cast1126 = (unsigned char)t1125;
      unsigned long cast1127 = (unsigned long)cast1126;
      char t1128 = t1122->_M_widen[cast1127];
      __retval1121 = t1128;
      char t1129 = __retval1121;
      return t1129;
    }
  std__ctype_char____M_widen_init___const(t1122);
  char t1130 = __c1120;
  void** v1131 = (void**)t1122;
  void* v1132 = *((void**)v1131);
  char vcall1135 = (char)__VERIFIER_virtual_call_char_char(t1122, 6, t1130);
  __retval1121 = vcall1135;
  char t1136 = __retval1121;
  return t1136;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1137, char v1138) {
bb1139:
  struct std__basic_ios_char__std__char_traits_char__* this1140;
  char __c1141;
  char __retval1142;
  this1140 = v1137;
  __c1141 = v1138;
  struct std__basic_ios_char__std__char_traits_char__* t1143 = this1140;
  struct std__ctype_char_* t1144 = t1143->_M_ctype;
  struct std__ctype_char_* r1145 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1144);
  char t1146 = __c1141;
  char r1147 = std__ctype_char___widen_char__const(r1145, t1146);
  __retval1142 = r1147;
  char t1148 = __retval1142;
  return t1148;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1149) {
bb1150:
  struct std__basic_ostream_char__std__char_traits_char__* __os1151;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1152;
  __os1151 = v1149;
  struct std__basic_ostream_char__std__char_traits_char__* t1153 = __os1151;
  struct std__basic_ostream_char__std__char_traits_char__* t1154 = __os1151;
  void** v1155 = (void**)t1154;
  void* v1156 = *((void**)v1155);
  unsigned char* cast1157 = (unsigned char*)v1156;
  long c1158 = -24;
  unsigned char* ptr1159 = &(cast1157)[c1158];
  long* cast1160 = (long*)ptr1159;
  long t1161 = *cast1160;
  unsigned char* cast1162 = (unsigned char*)t1154;
  unsigned char* ptr1163 = &(cast1162)[t1161];
  struct std__basic_ostream_char__std__char_traits_char__* cast1164 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1163;
  struct std__basic_ios_char__std__char_traits_char__* cast1165 = (struct std__basic_ios_char__std__char_traits_char__*)cast1164;
  char c1166 = 10;
  char r1167 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1165, c1166);
  struct std__basic_ostream_char__std__char_traits_char__* r1168 = std__ostream__put(t1153, r1167);
  struct std__basic_ostream_char__std__char_traits_char__* r1169 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1168);
  __retval1152 = r1169;
  struct std__basic_ostream_char__std__char_traits_char__* t1170 = __retval1152;
  return t1170;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1171) {
bb1172:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1173;
  this1173 = v1171;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1174 = this1173;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1174);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1174->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1175:
  int __retval1176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1177;
  struct std__allocator_char_ ref_tmp01178;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21179;
  struct std__allocator_char_ ref_tmp11180;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31181;
  struct std__allocator_char_ ref_tmp21182;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1183;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp31184;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01185;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41186;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51187;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11188;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp61189;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21190;
  int c1191 = 0;
  __retval1176 = c1191;
  char* cast1192 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01178);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str1177, cast1192, &ref_tmp01178);
  {
    std__allocator_char____allocator(&ref_tmp01178);
  }
    char* cast1193 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11180);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21179, cast1193, &ref_tmp11180);
    {
      std__allocator_char____allocator(&ref_tmp11180);
    }
      char* cast1194 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21182);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31181, cast1194, &ref_tmp21182);
      {
        std__allocator_char____allocator(&ref_tmp21182);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it1183);
        unsigned long c1195 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1196 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(&str1177, c1195, &str21179);
        char* cast1197 = (char*)&(_str_3);
        _Bool r1198 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1197);
        if (r1198) {
        } else {
          char* cast1199 = (char*)&(_str_4);
          char* c1200 = _str_5;
          unsigned int c1201 = 23;
          char* cast1202 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1199, c1200, c1201, cast1202);
        }
        unsigned long c1203 = 6;
        unsigned long c1204 = 3;
        unsigned long c1205 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(&str1177, c1203, &str31181, c1204, c1205);
        char* cast1207 = (char*)&(_str_6);
        _Bool r1208 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1207);
        if (r1208) {
        } else {
          char* cast1209 = (char*)&(_str_7);
          char* c1210 = _str_5;
          unsigned int c1211 = 26;
          char* cast1212 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1209, c1210, c1211, cast1212);
        }
        unsigned long c1213 = 10;
        char* cast1214 = (char*)&(_str_8);
        unsigned long c1215 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1216 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(&str1177, c1213, cast1214, c1215);
        char* cast1217 = (char*)&(_str_9);
        _Bool r1218 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1217);
        if (r1218) {
        } else {
          char* cast1219 = (char*)&(_str_10);
          char* c1220 = _str_5;
          unsigned int c1221 = 29;
          char* cast1222 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1219, c1220, c1221, cast1222);
        }
        unsigned long c1223 = 10;
        char* cast1224 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1225 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(&str1177, c1223, cast1224);
        char* cast1226 = (char*)&(_str_12);
        _Bool r1227 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1226);
        if (r1227) {
        } else {
          char* cast1228 = (char*)&(_str_13);
          char* c1229 = _str_5;
          unsigned int c1230 = 32;
          char* cast1231 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1228, c1229, c1230, cast1231);
        }
        unsigned long c1232 = 15;
        unsigned long c1233 = 1;
        char c1234 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(&str1177, c1232, c1233, c1234);
        char* cast1236 = (char*)&(_str_14);
        _Bool r1237 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1236);
        if (r1237) {
        } else {
          char* cast1238 = (char*)&(_str_15);
          char* c1239 = _str_5;
          unsigned int c1240 = 35;
          char* cast1241 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1238, c1239, c1240, cast1241);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1177);
        ref_tmp51187 = r1242;
        long c1243 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1244 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51187, c1243);
        ref_tmp41186 = r1244;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01185, &ref_tmp41186);
        char c1245 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1246 = agg_tmp01185;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str1177, t1246, c1245);
        ref_tmp31184 = r1247;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r1248 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it1183, &ref_tmp31184);
        char* cast1249 = (char*)&(_str_16);
        _Bool r1250 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1249);
        if (r1250) {
        } else {
          char* cast1251 = (char*)&(_str_17);
          char* c1252 = _str_5;
          unsigned int c1253 = 38;
          char* cast1254 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1251, c1252, c1253, cast1254);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1177);
        ref_tmp61189 = r1255;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp11188, &ref_tmp61189);
        unsigned long c1256 = 3;
        char c1257 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1258 = agg_tmp11188;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1259 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&str1177, t1258, c1256, c1257);
        agg_tmp21190 = r1259;
        char* cast1260 = (char*)&(_str_18);
        _Bool r1261 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1177, cast1260);
        if (r1261) {
        } else {
          char* cast1262 = (char*)&(_str_19);
          char* c1263 = _str_5;
          unsigned int c1264 = 41;
          char* cast1265 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1262, c1263, c1264, cast1265);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1266 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1177);
        struct std__basic_ostream_char__std__char_traits_char__* r1267 = std__ostream__operator___std__ostream_____(r1266, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1268 = 0;
        __retval1176 = c1268;
        int t1269 = __retval1176;
        int ret_val1270 = t1269;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31181);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21179);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1177);
        }
        return ret_val1270;
  int t1271 = __retval1176;
  return t1271;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1272) {
bb1273:
  struct std____new_allocator_char_* this1274;
  this1274 = v1272;
  struct std____new_allocator_char_* t1275 = this1274;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1276) {
bb1277:
  char* __r1278;
  char* __retval1279;
  __r1278 = v1276;
  char* t1280 = __r1278;
  __retval1279 = t1280;
  char* t1281 = __retval1279;
  return t1281;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1282) {
bb1283:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1284;
  char* __retval1285;
  this1284 = v1282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1286 = this1284;
  char* cast1287 = (char*)&(t1286->field2._M_local_buf);
  char* r1288 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1287);
  __retval1285 = r1288;
  char* t1289 = __retval1285;
  return t1289;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1290, char* v1291, struct std__allocator_char_* v1292) {
bb1293:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1294;
  char* __dat1295;
  struct std__allocator_char_* __a1296;
  this1294 = v1290;
  __dat1295 = v1291;
  __a1296 = v1292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1297 = this1294;
  struct std__allocator_char_* base1298 = (struct std__allocator_char_*)((char *)t1297 + 0);
  struct std__allocator_char_* t1299 = __a1296;
  std__allocator_char___allocator(base1298, t1299);
    char* t1300 = __dat1295;
    t1297->_M_p = t1300;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1301:
  _Bool __retval1302;
    _Bool c1303 = 0;
    __retval1302 = c1303;
    _Bool t1304 = __retval1302;
    return t1304;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1305, char* v1306) {
bb1307:
  char* __c11308;
  char* __c21309;
  _Bool __retval1310;
  __c11308 = v1305;
  __c21309 = v1306;
  char* t1311 = __c11308;
  char t1312 = *t1311;
  int cast1313 = (int)t1312;
  char* t1314 = __c21309;
  char t1315 = *t1314;
  int cast1316 = (int)t1315;
  _Bool c1317 = ((cast1313 == cast1316)) ? 1 : 0;
  __retval1310 = c1317;
  _Bool t1318 = __retval1310;
  return t1318;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1319) {
bb1320:
  char* __p1321;
  unsigned long __retval1322;
  unsigned long __i1323;
  __p1321 = v1319;
  unsigned long c1324 = 0;
  __i1323 = c1324;
    char ref_tmp01325;
    while (1) {
      unsigned long t1326 = __i1323;
      char* t1327 = __p1321;
      char* ptr1328 = &(t1327)[t1326];
      char c1329 = 0;
      ref_tmp01325 = c1329;
      _Bool r1330 = __gnu_cxx__char_traits_char___eq(ptr1328, &ref_tmp01325);
      _Bool u1331 = !r1330;
      if (!u1331) break;
      unsigned long t1332 = __i1323;
      unsigned long u1333 = t1332 + 1;
      __i1323 = u1333;
    }
  unsigned long t1334 = __i1323;
  __retval1322 = t1334;
  unsigned long t1335 = __retval1322;
  return t1335;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1336) {
bb1337:
  char* __s1338;
  unsigned long __retval1339;
  __s1338 = v1336;
    _Bool r1340 = std____is_constant_evaluated();
    if (r1340) {
      char* t1341 = __s1338;
      unsigned long r1342 = __gnu_cxx__char_traits_char___length(t1341);
      __retval1339 = r1342;
      unsigned long t1343 = __retval1339;
      return t1343;
    }
  char* t1344 = __s1338;
  unsigned long r1345 = strlen(t1344);
  __retval1339 = r1345;
  unsigned long t1346 = __retval1339;
  return t1346;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1347, char* v1348, struct std__random_access_iterator_tag v1349) {
bb1350:
  char* __first1351;
  char* __last1352;
  struct std__random_access_iterator_tag unnamed1353;
  long __retval1354;
  __first1351 = v1347;
  __last1352 = v1348;
  unnamed1353 = v1349;
  char* t1355 = __last1352;
  char* t1356 = __first1351;
  long diff1357 = t1355 - t1356;
  __retval1354 = diff1357;
  long t1358 = __retval1354;
  return t1358;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1359) {
bb1360:
  char** unnamed1361;
  struct std__random_access_iterator_tag __retval1362;
  unnamed1361 = v1359;
  struct std__random_access_iterator_tag t1363 = __retval1362;
  return t1363;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1364, char* v1365) {
bb1366:
  char* __first1367;
  char* __last1368;
  long __retval1369;
  struct std__random_access_iterator_tag agg_tmp01370;
  __first1367 = v1364;
  __last1368 = v1365;
  char* t1371 = __first1367;
  char* t1372 = __last1368;
  struct std__random_access_iterator_tag r1373 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1367);
  agg_tmp01370 = r1373;
  struct std__random_access_iterator_tag t1374 = agg_tmp01370;
  long r1375 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1371, t1372, t1374);
  __retval1369 = r1375;
  long t1376 = __retval1369;
  return t1376;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1377, char* v1378) {
bb1379:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1380;
  char* __p1381;
  this1380 = v1377;
  __p1381 = v1378;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1382 = this1380;
  char* t1383 = __p1381;
  t1382->_M_dataplus._M_p = t1383;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1384) {
bb1385:
  struct std__allocator_char_* __a1386;
  unsigned long __retval1387;
  __a1386 = v1384;
  unsigned long c1388 = -1;
  unsigned long c1389 = 1;
  unsigned long b1390 = c1388 / c1389;
  __retval1387 = b1390;
  unsigned long t1391 = __retval1387;
  return t1391;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1392) {
bb1393:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1394;
  struct std__allocator_char_* __retval1395;
  this1394 = v1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1396 = this1394;
  struct std__allocator_char_* base1397 = (struct std__allocator_char_*)((char *)&(t1396->_M_dataplus) + 0);
  __retval1395 = base1397;
  struct std__allocator_char_* t1398 = __retval1395;
  return t1398;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1399, unsigned long* v1400) {
bb1401:
  unsigned long* __a1402;
  unsigned long* __b1403;
  unsigned long* __retval1404;
  __a1402 = v1399;
  __b1403 = v1400;
    unsigned long* t1405 = __b1403;
    unsigned long t1406 = *t1405;
    unsigned long* t1407 = __a1402;
    unsigned long t1408 = *t1407;
    _Bool c1409 = ((t1406 < t1408)) ? 1 : 0;
    if (c1409) {
      unsigned long* t1410 = __b1403;
      __retval1404 = t1410;
      unsigned long* t1411 = __retval1404;
      return t1411;
    }
  unsigned long* t1412 = __a1402;
  __retval1404 = t1412;
  unsigned long* t1413 = __retval1404;
  return t1413;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1414) {
bb1415:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1416;
  unsigned long __retval1417;
  unsigned long __diffmax1418;
  unsigned long __allocmax1419;
  this1416 = v1414;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1420 = this1416;
  unsigned long c1421 = 9223372036854775807;
  __diffmax1418 = c1421;
  struct std__allocator_char_* r1422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1420);
  unsigned long r1423 = std__allocator_traits_std__allocator_char_____max_size(r1422);
  __allocmax1419 = r1423;
  unsigned long* r1424 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1418, &__allocmax1419);
  unsigned long t1425 = *r1424;
  unsigned long c1426 = 1;
  unsigned long b1427 = t1425 - c1426;
  __retval1417 = b1427;
  unsigned long t1428 = __retval1417;
  return t1428;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1429) {
bb1430:
  struct std____new_allocator_char_* this1431;
  unsigned long __retval1432;
  this1431 = v1429;
  struct std____new_allocator_char_* t1433 = this1431;
  unsigned long c1434 = 9223372036854775807;
  unsigned long c1435 = 1;
  unsigned long b1436 = c1434 / c1435;
  __retval1432 = b1436;
  unsigned long t1437 = __retval1432;
  return t1437;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1438, unsigned long v1439, void* v1440) {
bb1441:
  struct std____new_allocator_char_* this1442;
  unsigned long __n1443;
  void* unnamed1444;
  char* __retval1445;
  this1442 = v1438;
  __n1443 = v1439;
  unnamed1444 = v1440;
  struct std____new_allocator_char_* t1446 = this1442;
    unsigned long t1447 = __n1443;
    unsigned long r1448 = std____new_allocator_char____M_max_size___const(t1446);
    _Bool c1449 = ((t1447 > r1448)) ? 1 : 0;
    if (c1449) {
        unsigned long t1450 = __n1443;
        unsigned long c1451 = -1;
        unsigned long c1452 = 1;
        unsigned long b1453 = c1451 / c1452;
        _Bool c1454 = ((t1450 > b1453)) ? 1 : 0;
        if (c1454) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1455 = 1;
    unsigned long c1456 = 16;
    _Bool c1457 = ((c1455 > c1456)) ? 1 : 0;
    if (c1457) {
      unsigned long __al1458;
      unsigned long c1459 = 1;
      __al1458 = c1459;
      unsigned long t1460 = __n1443;
      unsigned long c1461 = 1;
      unsigned long b1462 = t1460 * c1461;
      unsigned long t1463 = __al1458;
      void* r1464 = operator_new_2(b1462, t1463);
      char* cast1465 = (char*)r1464;
      __retval1445 = cast1465;
      char* t1466 = __retval1445;
      return t1466;
    }
  unsigned long t1467 = __n1443;
  unsigned long c1468 = 1;
  unsigned long b1469 = t1467 * c1468;
  void* r1470 = operator_new(b1469);
  char* cast1471 = (char*)r1470;
  __retval1445 = cast1471;
  char* t1472 = __retval1445;
  return t1472;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1473, unsigned long v1474) {
bb1475:
  struct std__allocator_char_* this1476;
  unsigned long __n1477;
  char* __retval1478;
  this1476 = v1473;
  __n1477 = v1474;
  struct std__allocator_char_* t1479 = this1476;
    _Bool r1480 = std____is_constant_evaluated();
    if (r1480) {
        unsigned long t1481 = __n1477;
        unsigned long c1482 = 1;
        unsigned long ovr1483;
        _Bool ovf1484 = __builtin_mul_overflow(t1481, c1482, &ovr1483);
        __n1477 = ovr1483;
        if (ovf1484) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1485 = __n1477;
      void* r1486 = operator_new(t1485);
      char* cast1487 = (char*)r1486;
      __retval1478 = cast1487;
      char* t1488 = __retval1478;
      return t1488;
    }
  struct std____new_allocator_char_* base1489 = (struct std____new_allocator_char_*)((char *)t1479 + 0);
  unsigned long t1490 = __n1477;
  void* c1491 = ((void*)0);
  char* r1492 = std____new_allocator_char___allocate(base1489, t1490, c1491);
  __retval1478 = r1492;
  char* t1493 = __retval1478;
  return t1493;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1494, unsigned long v1495) {
bb1496:
  struct std__allocator_char_* __a1497;
  unsigned long __n1498;
  char* __retval1499;
  __a1497 = v1494;
  __n1498 = v1495;
  struct std__allocator_char_* t1500 = __a1497;
  unsigned long t1501 = __n1498;
  char* r1502 = std__allocator_char___allocate(t1500, t1501);
  __retval1499 = r1502;
  char* t1503 = __retval1499;
  return t1503;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1504, unsigned long v1505) {
bb1506:
  struct std__allocator_char_* __a1507;
  unsigned long __n1508;
  char* __retval1509;
  char* __p1510;
  __a1507 = v1504;
  __n1508 = v1505;
  struct std__allocator_char_* t1511 = __a1507;
  unsigned long t1512 = __n1508;
  char* r1513 = std__allocator_traits_std__allocator_char_____allocate(t1511, t1512);
  __p1510 = r1513;
  char* t1514 = __p1510;
  __retval1509 = t1514;
  char* t1515 = __retval1509;
  return t1515;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1516) {
bb1517:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1518;
  struct std__allocator_char_* __retval1519;
  this1518 = v1516;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1520 = this1518;
  struct std__allocator_char_* base1521 = (struct std__allocator_char_*)((char *)&(t1520->_M_dataplus) + 0);
  __retval1519 = base1521;
  struct std__allocator_char_* t1522 = __retval1519;
  return t1522;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1523, unsigned long* v1524, unsigned long v1525) {
bb1526:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1527;
  unsigned long* __capacity1528;
  unsigned long __old_capacity1529;
  char* __retval1530;
  this1527 = v1523;
  __capacity1528 = v1524;
  __old_capacity1529 = v1525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1531 = this1527;
    unsigned long* t1532 = __capacity1528;
    unsigned long t1533 = *t1532;
    unsigned long r1534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1531);
    _Bool c1535 = ((t1533 > r1534)) ? 1 : 0;
    if (c1535) {
      char* cast1536 = (char*)&(_str_21);
      std____throw_length_error(cast1536);
    }
    unsigned long* t1537 = __capacity1528;
    unsigned long t1538 = *t1537;
    unsigned long t1539 = __old_capacity1529;
    _Bool c1540 = ((t1538 > t1539)) ? 1 : 0;
    _Bool ternary1541;
    if (c1540) {
      unsigned long* t1542 = __capacity1528;
      unsigned long t1543 = *t1542;
      unsigned long c1544 = 2;
      unsigned long t1545 = __old_capacity1529;
      unsigned long b1546 = c1544 * t1545;
      _Bool c1547 = ((t1543 < b1546)) ? 1 : 0;
      ternary1541 = (_Bool)c1547;
    } else {
      _Bool c1548 = 0;
      ternary1541 = (_Bool)c1548;
    }
    if (ternary1541) {
      unsigned long c1549 = 2;
      unsigned long t1550 = __old_capacity1529;
      unsigned long b1551 = c1549 * t1550;
      unsigned long* t1552 = __capacity1528;
      *t1552 = b1551;
        unsigned long* t1553 = __capacity1528;
        unsigned long t1554 = *t1553;
        unsigned long r1555 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1531);
        _Bool c1556 = ((t1554 > r1555)) ? 1 : 0;
        if (c1556) {
          unsigned long r1557 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1531);
          unsigned long* t1558 = __capacity1528;
          *t1558 = r1557;
        }
    }
  struct std__allocator_char_* r1559 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1531);
  unsigned long* t1560 = __capacity1528;
  unsigned long t1561 = *t1560;
  unsigned long c1562 = 1;
  unsigned long b1563 = t1561 + c1562;
  char* r1564 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1559, b1563);
  __retval1530 = r1564;
  char* t1565 = __retval1530;
  return t1565;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1566, unsigned long v1567) {
bb1568:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1569;
  unsigned long __capacity1570;
  this1569 = v1566;
  __capacity1570 = v1567;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1571 = this1569;
  unsigned long t1572 = __capacity1570;
  t1571->field2._M_allocated_capacity = t1572;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1573:
  _Bool __retval1574;
    _Bool c1575 = 0;
    __retval1574 = c1575;
    _Bool t1576 = __retval1574;
    return t1576;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1577) {
bb1578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1579;
  this1579 = v1577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1580 = this1579;
    _Bool r1581 = std__is_constant_evaluated();
    if (r1581) {
        unsigned long __i1582;
        unsigned long c1583 = 0;
        __i1582 = c1583;
        while (1) {
          unsigned long t1585 = __i1582;
          unsigned long c1586 = 15;
          _Bool c1587 = ((t1585 <= c1586)) ? 1 : 0;
          if (!c1587) break;
          char c1588 = 0;
          unsigned long t1589 = __i1582;
          t1580->field2._M_local_buf[t1589] = c1588;
        for_step1584: ;
          unsigned long t1590 = __i1582;
          unsigned long u1591 = t1590 + 1;
          __i1582 = u1591;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1592, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1593) {
bb1594:
  struct _Guard* this1595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1596;
  this1595 = v1592;
  __s1596 = v1593;
  struct _Guard* t1597 = this1595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1598 = __s1596;
  t1597->_M_guarded = t1598;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1599, char* v1600) {
bb1601:
  char* __location1602;
  char* __args1603;
  char* __retval1604;
  void* __loc1605;
  __location1602 = v1599;
  __args1603 = v1600;
  char* t1606 = __location1602;
  void* cast1607 = (void*)t1606;
  __loc1605 = cast1607;
    void* t1608 = __loc1605;
    char* cast1609 = (char*)t1608;
    char* t1610 = __args1603;
    char t1611 = *t1610;
    *cast1609 = t1611;
    __retval1604 = cast1609;
    char* t1612 = __retval1604;
    return t1612;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1613, char* v1614) {
bb1615:
  char* __c11616;
  char* __c21617;
  __c11616 = v1613;
  __c21617 = v1614;
    _Bool r1618 = std____is_constant_evaluated();
    if (r1618) {
      char* t1619 = __c11616;
      char* t1620 = __c21617;
      char* r1621 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1619, t1620);
    } else {
      char* t1622 = __c21617;
      char t1623 = *t1622;
      char* t1624 = __c11616;
      *t1624 = t1623;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1625, char* v1626, unsigned long v1627) {
bb1628:
  char* __s11629;
  char* __s21630;
  unsigned long __n1631;
  char* __retval1632;
  __s11629 = v1625;
  __s21630 = v1626;
  __n1631 = v1627;
    unsigned long t1633 = __n1631;
    unsigned long c1634 = 0;
    _Bool c1635 = ((t1633 == c1634)) ? 1 : 0;
    if (c1635) {
      char* t1636 = __s11629;
      __retval1632 = t1636;
      char* t1637 = __retval1632;
      return t1637;
    }
    _Bool r1638 = std____is_constant_evaluated();
    if (r1638) {
        unsigned long __i1639;
        unsigned long c1640 = 0;
        __i1639 = c1640;
        while (1) {
          unsigned long t1642 = __i1639;
          unsigned long t1643 = __n1631;
          _Bool c1644 = ((t1642 < t1643)) ? 1 : 0;
          if (!c1644) break;
          char* t1645 = __s11629;
          unsigned long t1646 = __i1639;
          char* ptr1647 = &(t1645)[t1646];
          unsigned long t1648 = __i1639;
          char* t1649 = __s21630;
          char* ptr1650 = &(t1649)[t1648];
          char* r1651 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1647, ptr1650);
        for_step1641: ;
          unsigned long t1652 = __i1639;
          unsigned long u1653 = t1652 + 1;
          __i1639 = u1653;
        }
      char* t1654 = __s11629;
      __retval1632 = t1654;
      char* t1655 = __retval1632;
      return t1655;
    }
  char* t1656 = __s11629;
  void* cast1657 = (void*)t1656;
  char* t1658 = __s21630;
  void* cast1659 = (void*)t1658;
  unsigned long t1660 = __n1631;
  unsigned long c1661 = 1;
  unsigned long b1662 = t1660 * c1661;
  void* r1663 = memcpy(cast1657, cast1659, b1662);
  char* t1664 = __s11629;
  __retval1632 = t1664;
  char* t1665 = __retval1632;
  return t1665;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1666, char* v1667, unsigned long v1668) {
bb1669:
  char* __s11670;
  char* __s21671;
  unsigned long __n1672;
  char* __retval1673;
  __s11670 = v1666;
  __s21671 = v1667;
  __n1672 = v1668;
    unsigned long t1674 = __n1672;
    unsigned long c1675 = 0;
    _Bool c1676 = ((t1674 == c1675)) ? 1 : 0;
    if (c1676) {
      char* t1677 = __s11670;
      __retval1673 = t1677;
      char* t1678 = __retval1673;
      return t1678;
    }
    _Bool r1679 = std____is_constant_evaluated();
    if (r1679) {
      char* t1680 = __s11670;
      char* t1681 = __s21671;
      unsigned long t1682 = __n1672;
      char* r1683 = __gnu_cxx__char_traits_char___copy(t1680, t1681, t1682);
      __retval1673 = r1683;
      char* t1684 = __retval1673;
      return t1684;
    }
  char* t1685 = __s11670;
  void* cast1686 = (void*)t1685;
  char* t1687 = __s21671;
  void* cast1688 = (void*)t1687;
  unsigned long t1689 = __n1672;
  void* r1690 = memcpy(cast1686, cast1688, t1689);
  char* cast1691 = (char*)r1690;
  __retval1673 = cast1691;
  char* t1692 = __retval1673;
  return t1692;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1693, char* v1694, unsigned long v1695) {
bb1696:
  char* __d1697;
  char* __s1698;
  unsigned long __n1699;
  __d1697 = v1693;
  __s1698 = v1694;
  __n1699 = v1695;
    unsigned long t1700 = __n1699;
    unsigned long c1701 = 1;
    _Bool c1702 = ((t1700 == c1701)) ? 1 : 0;
    if (c1702) {
      char* t1703 = __d1697;
      char* t1704 = __s1698;
      std__char_traits_char___assign_2(t1703, t1704);
    } else {
      char* t1705 = __d1697;
      char* t1706 = __s1698;
      unsigned long t1707 = __n1699;
      char* r1708 = std__char_traits_char___copy(t1705, t1706, t1707);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1709) {
bb1710:
  char* __it1711;
  char* __retval1712;
  __it1711 = v1709;
  char* t1713 = __it1711;
  __retval1712 = t1713;
  char* t1714 = __retval1712;
  return t1714;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1715, char* v1716, char* v1717) {
bb1718:
  char* __p1719;
  char* __k11720;
  char* __k21721;
  __p1719 = v1715;
  __k11720 = v1716;
  __k21721 = v1717;
    char* t1722 = __p1719;
    char* t1723 = __k11720;
    char* r1724 = char_const__std____niter_base_char_const__(t1723);
    char* t1725 = __k21721;
    char* t1726 = __k11720;
    long diff1727 = t1725 - t1726;
    unsigned long cast1728 = (unsigned long)diff1727;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1722, r1724, cast1728);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1729) {
bb1730:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1731;
  char* __retval1732;
  this1731 = v1729;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1733 = this1731;
  char* t1734 = t1733->_M_dataplus._M_p;
  __retval1732 = t1734;
  char* t1735 = __retval1732;
  return t1735;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1736, unsigned long v1737) {
bb1738:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1739;
  unsigned long __length1740;
  this1739 = v1736;
  __length1740 = v1737;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1741 = this1739;
  unsigned long t1742 = __length1740;
  t1741->_M_string_length = t1742;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1743, unsigned long v1744) {
bb1745:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1746;
  unsigned long __n1747;
  char ref_tmp01748;
  this1746 = v1743;
  __n1747 = v1744;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1749 = this1746;
  unsigned long t1750 = __n1747;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1749, t1750);
  unsigned long t1751 = __n1747;
  char* r1752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1749);
  char* ptr1753 = &(r1752)[t1751];
  char c1754 = 0;
  ref_tmp01748 = c1754;
  std__char_traits_char___assign_2(ptr1753, &ref_tmp01748);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1755) {
bb1756:
  struct _Guard* this1757;
  this1757 = v1755;
  struct _Guard* t1758 = this1757;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1759 = t1758->_M_guarded;
    _Bool cast1760 = (_Bool)t1759;
    if (cast1760) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1761 = t1758->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1761);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1762, char* v1763, char* v1764, struct std__forward_iterator_tag v1765) {
bb1766:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1767;
  char* __beg1768;
  char* __end1769;
  struct std__forward_iterator_tag unnamed1770;
  unsigned long __dnew1771;
  struct _Guard __guard1772;
  this1767 = v1762;
  __beg1768 = v1763;
  __end1769 = v1764;
  unnamed1770 = v1765;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1773 = this1767;
  char* t1774 = __beg1768;
  char* t1775 = __end1769;
  long r1776 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1774, t1775);
  unsigned long cast1777 = (unsigned long)r1776;
  __dnew1771 = cast1777;
    unsigned long t1778 = __dnew1771;
    unsigned long c1779 = 15;
    _Bool c1780 = ((t1778 > c1779)) ? 1 : 0;
    if (c1780) {
      unsigned long c1781 = 0;
      char* r1782 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1773, &__dnew1771, c1781);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1773, r1782);
      unsigned long t1783 = __dnew1771;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1773, t1783);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1773);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1772, t1773);
    char* r1784 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1773);
    char* t1785 = __beg1768;
    char* t1786 = __end1769;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1784, t1785, t1786);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1787 = ((void*)0);
    __guard1772._M_guarded = c1787;
    unsigned long t1788 = __dnew1771;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1773, t1788);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1772);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1789) {
bb1790:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1791;
  this1791 = v1789;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1792 = this1791;
  {
    struct std__allocator_char_* base1793 = (struct std__allocator_char_*)((char *)t1792 + 0);
    std__allocator_char____allocator(base1793);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1794, struct std____new_allocator_char_* v1795) {
bb1796:
  struct std____new_allocator_char_* this1797;
  struct std____new_allocator_char_* unnamed1798;
  this1797 = v1794;
  unnamed1798 = v1795;
  struct std____new_allocator_char_* t1799 = this1797;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1800, struct std__allocator_char_* v1801) {
bb1802:
  struct std__allocator_char_* this1803;
  struct std__allocator_char_* __a1804;
  this1803 = v1800;
  __a1804 = v1801;
  struct std__allocator_char_* t1805 = this1803;
  struct std____new_allocator_char_* base1806 = (struct std____new_allocator_char_*)((char *)t1805 + 0);
  struct std__allocator_char_* t1807 = __a1804;
  struct std____new_allocator_char_* base1808 = (struct std____new_allocator_char_*)((char *)t1807 + 0);
  std____new_allocator_char_____new_allocator(base1806, base1808);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1809) {
bb1810:
  char* __r1811;
  char* __retval1812;
  __r1811 = v1809;
  char* t1813 = __r1811;
  __retval1812 = t1813;
  char* t1814 = __retval1812;
  return t1814;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1815) {
bb1816:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1817;
  char* __retval1818;
  this1817 = v1815;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1819 = this1817;
  char* cast1820 = (char*)&(t1819->field2._M_local_buf);
  char* r1821 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1820);
  __retval1818 = r1821;
  char* t1822 = __retval1818;
  return t1822;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1823) {
bb1824:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1825;
  _Bool __retval1826;
  this1825 = v1823;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1827 = this1825;
    char* r1828 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1827);
    char* r1829 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1827);
    _Bool c1830 = ((r1828 == r1829)) ? 1 : 0;
    if (c1830) {
        unsigned long t1831 = t1827->_M_string_length;
        unsigned long c1832 = 15;
        _Bool c1833 = ((t1831 > c1832)) ? 1 : 0;
        if (c1833) {
          __builtin_unreachable();
        }
      _Bool c1834 = 1;
      __retval1826 = c1834;
      _Bool t1835 = __retval1826;
      return t1835;
    }
  _Bool c1836 = 0;
  __retval1826 = c1836;
  _Bool t1837 = __retval1826;
  return t1837;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1838, char* v1839, unsigned long v1840) {
bb1841:
  struct std____new_allocator_char_* this1842;
  char* __p1843;
  unsigned long __n1844;
  this1842 = v1838;
  __p1843 = v1839;
  __n1844 = v1840;
  struct std____new_allocator_char_* t1845 = this1842;
    unsigned long c1846 = 1;
    unsigned long c1847 = 16;
    _Bool c1848 = ((c1846 > c1847)) ? 1 : 0;
    if (c1848) {
      char* t1849 = __p1843;
      void* cast1850 = (void*)t1849;
      unsigned long t1851 = __n1844;
      unsigned long c1852 = 1;
      unsigned long b1853 = t1851 * c1852;
      unsigned long c1854 = 1;
      operator_delete_3(cast1850, b1853, c1854);
      return;
    }
  char* t1855 = __p1843;
  void* cast1856 = (void*)t1855;
  unsigned long t1857 = __n1844;
  unsigned long c1858 = 1;
  unsigned long b1859 = t1857 * c1858;
  operator_delete_2(cast1856, b1859);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1860, char* v1861, unsigned long v1862) {
bb1863:
  struct std__allocator_char_* this1864;
  char* __p1865;
  unsigned long __n1866;
  this1864 = v1860;
  __p1865 = v1861;
  __n1866 = v1862;
  struct std__allocator_char_* t1867 = this1864;
    _Bool r1868 = std____is_constant_evaluated();
    if (r1868) {
      char* t1869 = __p1865;
      void* cast1870 = (void*)t1869;
      operator_delete(cast1870);
      return;
    }
  struct std____new_allocator_char_* base1871 = (struct std____new_allocator_char_*)((char *)t1867 + 0);
  char* t1872 = __p1865;
  unsigned long t1873 = __n1866;
  std____new_allocator_char___deallocate(base1871, t1872, t1873);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1874, char* v1875, unsigned long v1876) {
bb1877:
  struct std__allocator_char_* __a1878;
  char* __p1879;
  unsigned long __n1880;
  __a1878 = v1874;
  __p1879 = v1875;
  __n1880 = v1876;
  struct std__allocator_char_* t1881 = __a1878;
  char* t1882 = __p1879;
  unsigned long t1883 = __n1880;
  std__allocator_char___deallocate(t1881, t1882, t1883);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1884, unsigned long v1885) {
bb1886:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1887;
  unsigned long __size1888;
  this1887 = v1884;
  __size1888 = v1885;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1889 = this1887;
  struct std__allocator_char_* r1890 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1889);
  char* r1891 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1889);
  unsigned long t1892 = __size1888;
  unsigned long c1893 = 1;
  unsigned long b1894 = t1892 + c1893;
  std__allocator_traits_std__allocator_char_____deallocate(r1890, r1891, b1894);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1895) {
bb1896:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1897;
  this1897 = v1895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1898 = this1897;
    _Bool r1899 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1898);
    _Bool u1900 = !r1899;
    if (u1900) {
      unsigned long t1901 = t1898->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1898, t1901);
    }
  return;
}

