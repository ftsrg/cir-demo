extern void abort(void);
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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str != \"to be the question\"";
char _str_5[118] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_final_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str != \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str != \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str != \"to be not to be that is the question\"";
char _str_14[38] = "to be not to be: that is the question";
char _str_15[47] = "str != \"to be not to be: that is the question\"";
char _str_16[39] = "to be, not to be: that is the question";
char _str_17[48] = "str != \"to be, not to be: that is the question\"";
char _str_18[42] = "to be, not to be: that is the question...";
char _str_19[51] = "str != \"to be, not to be: that is the question...\"";
char _str_20[45] = "to be, or not to be: that is the question...";
char _str_21[54] = "str != \"to be, or not to be: that is the question...\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_22[50] = "basic_string: construction from null is not valid";
char _str_23[24] = "basic_string::_M_create";
char _str_24[22] = "basic_string::replace";
char _str_25[25] = "basic_string::_M_replace";
char _str_26[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_27[21] = "basic_string::insert";
char _str_28[29] = "basic_string::_M_replace_aux";
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, unsigned long p3, char p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, unsigned long p2, char p3);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p3, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p3);
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
bb1: ;
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8: ;
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
        char* cast20 = (char*)&(_str_22);
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
bb29: ;
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
bb33: ;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this34;
  this34 = v32;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t35 = this34;
  char* c36 = ((void*)0);
  t35->_M_current = c36;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37, unsigned long v38, unsigned long v39, char* v40) {
bb41: ;
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
bb56: ;
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
bb78: ;
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
bb97: ;
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
bb117: ;
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
bb130: ;
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
bb187: ;
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
bb214: ;
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
bb233: ;
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
bb317: ;
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
bb328: ;
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
bb386: ;
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
  char* cast398 = (char*)&(_str_25);
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
bb481: ;
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
      char* cast490 = (char*)&(_str_26);
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
bb499: ;
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long v519, unsigned long v520, char* v521, unsigned long v522) {
bb523: ;
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
  char* cast532 = (char*)&(_str_24);
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
bb542: ;
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
bb556: ;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t561, t562, c563, r565, r567);
  __retval560 = r568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = __retval560;
  return t569;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v570, char* v571) {
bb572: ;
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
bb589: ;
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
bb638: ;
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
bb646: ;
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
bb671: ;
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
  char* cast685 = (char*)&(_str_27);
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t683, t684, cast685);
  char* ptr687 = &(r682)[r686];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __str674;
  unsigned long t689 = __pos2675;
  unsigned long t690 = __n676;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t688, t689, t690);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t678, t679, c680, ptr687, r691);
  __retval677 = r692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = __retval677;
  return t693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694, unsigned long v695, char* v696, unsigned long v697) {
bb698: ;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t704, t705, c706, t707, t708);
  __retval703 = r709;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = __retval703;
  return t710;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711, unsigned long v712, char* v713) {
bb714: ;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t719, t720, c721, t722, r724);
  __retval718 = r725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t726 = __retval718;
  return t726;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v727, char* v728) {
bb729: ;
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
bb744: ;
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
bb782: ;
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
bb809: ;
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
bb826: ;
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
  char* cast838 = (char*)&(_str_28);
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
bb889: ;
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
  char* cast897 = (char*)&(_str_27);
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
bb905: ;
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
bb911: ;
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
bb918: ;
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
bb932: ;
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
bb941: ;
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
bb963: ;
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
bb972: ;
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
bb984: ;
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
bb993: ;
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
bb1003: ;
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1015, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1016, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1017, unsigned long v1018, char v1019) {
bb1020: ;
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
bb1042: ;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t1053, t1059, t1060, t1057, t1058);
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
bb1067: ;
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

// function: _ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1076, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1077) {
bb1078: ;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs1079;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs1080;
  long __retval1081;
  __lhs1079 = v1076;
  __rhs1080 = v1077;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1082 = __lhs1079;
  char** r1083 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1082);
  char* t1084 = *r1083;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1085 = __rhs1080;
  char** r1086 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1085);
  char* t1087 = *r1086;
  long diff1088 = t1084 - t1087;
  __retval1081 = diff1088;
  long t1089 = __retval1081;
  return t1089;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_NS6_IPcS4_EESB_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1090, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1091, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1092, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1093, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1094) {
bb1095: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11097;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21098;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k11099;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k21100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1101;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01102;
  this1096 = v1090;
  __i11097 = v1091;
  __i21098 = v1092;
  __k11099 = v1093;
  __k21100 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1103 = this1096;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1103);
  ref_tmp01102 = r1104;
  long r1105 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i11097, &ref_tmp01102);
  unsigned long cast1106 = (unsigned long)r1105;
  long r1107 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i21098, &__i11097);
  unsigned long cast1108 = (unsigned long)r1107;
  char** r1109 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(&__k11099);
  char* t1110 = *r1109;
  long r1111 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__k21100, &__k11099);
  unsigned long cast1112 = (unsigned long)r1111;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1113 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t1103, cast1106, cast1108, t1110, cast1112);
  __retval1101 = r1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1114 = __retval1101;
  return t1114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertIN9__gnu_cxx17__normal_iteratorIPcS4_EEvEES9_NS7_IPKcS4_EET_SD_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1115, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1116, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1117, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1118) {
bb1119: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1120;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __p1121;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __beg1122;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __end1123;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1124;
  unsigned long __pos1125;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01126;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01127;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11128;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31130;
  char* ref_tmp11131;
  this1120 = v1115;
  __p1121 = v1116;
  __beg1122 = v1117;
  __end1123 = v1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1132 = this1120;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1132);
  ref_tmp01126 = r1133;
  long r1134 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__p1121, &ref_tmp01126);
  unsigned long cast1135 = (unsigned long)r1134;
  __pos1125 = cast1135;
  agg_tmp01127 = __p1121; // copy
  agg_tmp11128 = __p1121; // copy
  agg_tmp21129 = __beg1122; // copy
  agg_tmp31130 = __end1123; // copy
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1136 = agg_tmp01127;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1137 = agg_tmp11128;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1138 = agg_tmp21129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1139 = agg_tmp31130;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t1132, t1136, t1137, t1138, t1139);
  char* r1141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1132);
  unsigned long t1142 = __pos1125;
  char* ptr1143 = &(r1141)[t1142];
  ref_tmp11131 = ptr1143;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1124, &ref_tmp11131);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1144 = __retval1124;
  return t1144;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1146) {
bb1147: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1149;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1150;
  __os1148 = v1145;
  __str1149 = v1146;
  struct std__basic_ostream_char__std__char_traits_char__* t1151 = __os1148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1152 = __str1149;
  char* r1153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1152);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1154 = __str1149;
  unsigned long r1155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1154);
  long cast1156 = (long)r1155;
  struct std__basic_ostream_char__std__char_traits_char__* r1157 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1151, r1153, cast1156);
  __retval1150 = r1157;
  struct std__basic_ostream_char__std__char_traits_char__* t1158 = __retval1150;
  return t1158;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1159, void* v1160) {
bb1161: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1162;
  void* __pf1163;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1164;
  this1162 = v1159;
  __pf1163 = v1160;
  struct std__basic_ostream_char__std__char_traits_char__* t1165 = this1162;
  void* t1166 = __pf1163;
  struct std__basic_ostream_char__std__char_traits_char__* r1167 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1166)(t1165);
  __retval1164 = r1167;
  struct std__basic_ostream_char__std__char_traits_char__* t1168 = __retval1164;
  return t1168;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1169) {
bb1170: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1171;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1172;
  __os1171 = v1169;
  struct std__basic_ostream_char__std__char_traits_char__* t1173 = __os1171;
  struct std__basic_ostream_char__std__char_traits_char__* r1174 = std__ostream__flush(t1173);
  __retval1172 = r1174;
  struct std__basic_ostream_char__std__char_traits_char__* t1175 = __retval1172;
  return t1175;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1176) {
bb1177: ;
  struct std__ctype_char_* __f1178;
  struct std__ctype_char_* __retval1179;
  __f1178 = v1176;
    struct std__ctype_char_* t1180 = __f1178;
    _Bool cast1181 = (_Bool)t1180;
    _Bool u1182 = !cast1181;
    if (u1182) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1183 = __f1178;
  __retval1179 = t1183;
  struct std__ctype_char_* t1184 = __retval1179;
  return t1184;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1185, char v1186) {
bb1187: ;
  struct std__ctype_char_* this1188;
  char __c1189;
  char __retval1190;
  this1188 = v1185;
  __c1189 = v1186;
  struct std__ctype_char_* t1191 = this1188;
    char t1192 = t1191->_M_widen_ok;
    _Bool cast1193 = (_Bool)t1192;
    if (cast1193) {
      char t1194 = __c1189;
      unsigned char cast1195 = (unsigned char)t1194;
      unsigned long cast1196 = (unsigned long)cast1195;
      char t1197 = t1191->_M_widen[cast1196];
      __retval1190 = t1197;
      char t1198 = __retval1190;
      return t1198;
    }
  std__ctype_char____M_widen_init___const(t1191);
  char t1199 = __c1189;
  void** v1200 = (void**)t1191;
  void* v1201 = *((void**)v1200);
  char vcall1204 = (char)__VERIFIER_virtual_call_char_char(t1191, 6, t1199);
  __retval1190 = vcall1204;
  char t1205 = __retval1190;
  return t1205;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1206, char v1207) {
bb1208: ;
  struct std__basic_ios_char__std__char_traits_char__* this1209;
  char __c1210;
  char __retval1211;
  this1209 = v1206;
  __c1210 = v1207;
  struct std__basic_ios_char__std__char_traits_char__* t1212 = this1209;
  struct std__ctype_char_* t1213 = t1212->_M_ctype;
  struct std__ctype_char_* r1214 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1213);
  char t1215 = __c1210;
  char r1216 = std__ctype_char___widen_char__const(r1214, t1215);
  __retval1211 = r1216;
  char t1217 = __retval1211;
  return t1217;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1218) {
bb1219: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1221;
  __os1220 = v1218;
  struct std__basic_ostream_char__std__char_traits_char__* t1222 = __os1220;
  struct std__basic_ostream_char__std__char_traits_char__* t1223 = __os1220;
  void** v1224 = (void**)t1223;
  void* v1225 = *((void**)v1224);
  unsigned char* cast1226 = (unsigned char*)v1225;
  long c1227 = -24;
  unsigned char* ptr1228 = &(cast1226)[c1227];
  long* cast1229 = (long*)ptr1228;
  long t1230 = *cast1229;
  unsigned char* cast1231 = (unsigned char*)t1223;
  unsigned char* ptr1232 = &(cast1231)[t1230];
  struct std__basic_ostream_char__std__char_traits_char__* cast1233 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1232;
  struct std__basic_ios_char__std__char_traits_char__* cast1234 = (struct std__basic_ios_char__std__char_traits_char__*)cast1233;
  char c1235 = 10;
  char r1236 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1234, c1235);
  struct std__basic_ostream_char__std__char_traits_char__* r1237 = std__ostream__put(t1222, r1236);
  struct std__basic_ostream_char__std__char_traits_char__* r1238 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1237);
  __retval1221 = r1238;
  struct std__basic_ostream_char__std__char_traits_char__* t1239 = __retval1221;
  return t1239;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1240) {
bb1241: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1242;
  this1242 = v1240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1243 = this1242;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1243);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1243->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1244: ;
  int __retval1245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1246;
  struct std__allocator_char_ ref_tmp01247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21248;
  struct std__allocator_char_ ref_tmp11249;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31250;
  struct std__allocator_char_ ref_tmp21251;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1252;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp31253;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01254;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41255;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51256;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11257;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp61258;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21259;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31260;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp71261;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp41262;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp51263;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp81264;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp61265;
  int c1266 = 0;
  __retval1245 = c1266;
  char* cast1267 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01247);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str1246, cast1267, &ref_tmp01247);
  {
    std__allocator_char____allocator(&ref_tmp01247);
  }
    char* cast1268 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11249);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21248, cast1268, &ref_tmp11249);
    {
      std__allocator_char____allocator(&ref_tmp11249);
    }
      char* cast1269 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21251);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31250, cast1269, &ref_tmp21251);
      {
        std__allocator_char____allocator(&ref_tmp21251);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it1252);
        unsigned long c1270 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(&str1246, c1270, &str21248);
        char* cast1272 = (char*)&(_str_3);
        _Bool r1273 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1272);
        _Bool u1274 = !r1273;
        if (u1274) {
        } else {
          char* cast1275 = (char*)&(_str_4);
          char* c1276 = (char*)_str_5;
          unsigned int c1277 = 24;
          char* cast1278 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1275, c1276, c1277, cast1278);
        }
        unsigned long c1279 = 6;
        unsigned long c1280 = 3;
        unsigned long c1281 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1282 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(&str1246, c1279, &str31250, c1280, c1281);
        char* cast1283 = (char*)&(_str_6);
        _Bool r1284 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1283);
        _Bool u1285 = !r1284;
        if (u1285) {
        } else {
          char* cast1286 = (char*)&(_str_7);
          char* c1287 = (char*)_str_5;
          unsigned int c1288 = 27;
          char* cast1289 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1286, c1287, c1288, cast1289);
        }
        unsigned long c1290 = 10;
        char* cast1291 = (char*)&(_str_8);
        unsigned long c1292 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1293 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(&str1246, c1290, cast1291, c1292);
        char* cast1294 = (char*)&(_str_9);
        _Bool r1295 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1294);
        _Bool u1296 = !r1295;
        if (u1296) {
        } else {
          char* cast1297 = (char*)&(_str_10);
          char* c1298 = (char*)_str_5;
          unsigned int c1299 = 30;
          char* cast1300 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1297, c1298, c1299, cast1300);
        }
        unsigned long c1301 = 10;
        char* cast1302 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1303 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(&str1246, c1301, cast1302);
        char* cast1304 = (char*)&(_str_12);
        _Bool r1305 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1304);
        _Bool u1306 = !r1305;
        if (u1306) {
        } else {
          char* cast1307 = (char*)&(_str_13);
          char* c1308 = (char*)_str_5;
          unsigned int c1309 = 33;
          char* cast1310 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1307, c1308, c1309, cast1310);
        }
        unsigned long c1311 = 15;
        unsigned long c1312 = 1;
        char c1313 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1314 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(&str1246, c1311, c1312, c1313);
        char* cast1315 = (char*)&(_str_14);
        _Bool r1316 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1315);
        _Bool u1317 = !r1316;
        if (u1317) {
        } else {
          char* cast1318 = (char*)&(_str_15);
          char* c1319 = (char*)_str_5;
          unsigned int c1320 = 36;
          char* cast1321 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1318, c1319, c1320, cast1321);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1322 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1246);
        ref_tmp51256 = r1322;
        long c1323 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1324 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51256, c1323);
        ref_tmp41255 = r1324;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01254, &ref_tmp41255);
        char c1325 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1326 = agg_tmp01254;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1327 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str1246, t1326, c1325);
        ref_tmp31253 = r1327;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r1328 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it1252, &ref_tmp31253);
        char* cast1329 = (char*)&(_str_16);
        _Bool r1330 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1329);
        _Bool u1331 = !r1330;
        if (u1331) {
        } else {
          char* cast1332 = (char*)&(_str_17);
          char* c1333 = (char*)_str_5;
          unsigned int c1334 = 39;
          char* cast1335 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1332, c1333, c1334, cast1335);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1246);
        ref_tmp61258 = r1336;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp11257, &ref_tmp61258);
        unsigned long c1337 = 3;
        char c1338 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1339 = agg_tmp11257;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&str1246, t1339, c1337, c1338);
        agg_tmp21259 = r1340;
        char* cast1341 = (char*)&(_str_18);
        _Bool r1342 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1341);
        _Bool u1343 = !r1342;
        if (u1343) {
        } else {
          char* cast1344 = (char*)&(_str_19);
          char* c1345 = (char*)_str_5;
          unsigned int c1346 = 42;
          char* cast1347 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1344, c1345, c1346, cast1347);
        }
        long c1348 = 2;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1349 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&it1252, c1348);
        ref_tmp71261 = r1349;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp31260, &ref_tmp71261);
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1350 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str31250);
        agg_tmp41262 = r1350;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str31250);
        ref_tmp81264 = r1351;
        long c1352 = 3;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1353 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp81264, c1352);
        agg_tmp51263 = r1353;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1354 = agg_tmp31260;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1355 = agg_tmp41262;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1356 = agg_tmp51263;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1357 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(&str1246, t1354, t1355, t1356);
        agg_tmp61265 = r1357;
        char* cast1358 = (char*)&(_str_20);
        _Bool r1359 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1358);
        _Bool u1360 = !r1359;
        if (u1360) {
        } else {
          char* cast1361 = (char*)&(_str_21);
          char* c1362 = (char*)_str_5;
          unsigned int c1363 = 45;
          char* cast1364 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1361, c1362, c1363, cast1364);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1365 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1246);
        struct std__basic_ostream_char__std__char_traits_char__* r1366 = std__ostream__operator___std__ostream_____(r1365, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1367 = 0;
        __retval1245 = c1367;
        int t1368 = __retval1245;
        int ret_val1369 = t1368;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31250);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21248);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1246);
        }
        return ret_val1369;
  int t1370 = __retval1245;
  return t1370;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1371) {
bb1372: ;
  struct std____new_allocator_char_* this1373;
  this1373 = v1371;
  struct std____new_allocator_char_* t1374 = this1373;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1375) {
bb1376: ;
  char* __r1377;
  char* __retval1378;
  __r1377 = v1375;
  char* t1379 = __r1377;
  __retval1378 = t1379;
  char* t1380 = __retval1378;
  return t1380;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1381) {
bb1382: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1383;
  char* __retval1384;
  this1383 = v1381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1385 = this1383;
  char* cast1386 = (char*)&(t1385->field2._M_local_buf);
  char* r1387 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1386);
  __retval1384 = r1387;
  char* t1388 = __retval1384;
  return t1388;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1389, char* v1390, struct std__allocator_char_* v1391) {
bb1392: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1393;
  char* __dat1394;
  struct std__allocator_char_* __a1395;
  this1393 = v1389;
  __dat1394 = v1390;
  __a1395 = v1391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1396 = this1393;
  struct std__allocator_char_* base1397 = (struct std__allocator_char_*)((char *)t1396 + 0);
  struct std__allocator_char_* t1398 = __a1395;
  std__allocator_char___allocator(base1397, t1398);
    char* t1399 = __dat1394;
    t1396->_M_p = t1399;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1400: ;
  _Bool __retval1401;
    _Bool c1402 = 0;
    __retval1401 = c1402;
    _Bool t1403 = __retval1401;
    return t1403;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1404, char* v1405) {
bb1406: ;
  char* __c11407;
  char* __c21408;
  _Bool __retval1409;
  __c11407 = v1404;
  __c21408 = v1405;
  char* t1410 = __c11407;
  char t1411 = *t1410;
  int cast1412 = (int)t1411;
  char* t1413 = __c21408;
  char t1414 = *t1413;
  int cast1415 = (int)t1414;
  _Bool c1416 = ((cast1412 == cast1415)) ? 1 : 0;
  __retval1409 = c1416;
  _Bool t1417 = __retval1409;
  return t1417;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1418) {
bb1419: ;
  char* __p1420;
  unsigned long __retval1421;
  unsigned long __i1422;
  __p1420 = v1418;
  unsigned long c1423 = 0;
  __i1422 = c1423;
    char ref_tmp01424;
    while (1) {
      unsigned long t1425 = __i1422;
      char* t1426 = __p1420;
      char* ptr1427 = &(t1426)[t1425];
      char c1428 = 0;
      ref_tmp01424 = c1428;
      _Bool r1429 = __gnu_cxx__char_traits_char___eq(ptr1427, &ref_tmp01424);
      _Bool u1430 = !r1429;
      if (!u1430) break;
      unsigned long t1431 = __i1422;
      unsigned long u1432 = t1431 + 1;
      __i1422 = u1432;
    }
  unsigned long t1433 = __i1422;
  __retval1421 = t1433;
  unsigned long t1434 = __retval1421;
  return t1434;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1435) {
bb1436: ;
  char* __s1437;
  unsigned long __retval1438;
  __s1437 = v1435;
    _Bool r1439 = std____is_constant_evaluated();
    if (r1439) {
      char* t1440 = __s1437;
      unsigned long r1441 = __gnu_cxx__char_traits_char___length(t1440);
      __retval1438 = r1441;
      unsigned long t1442 = __retval1438;
      return t1442;
    }
  char* t1443 = __s1437;
  unsigned long r1444 = strlen(t1443);
  __retval1438 = r1444;
  unsigned long t1445 = __retval1438;
  return t1445;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1446, char* v1447, struct std__random_access_iterator_tag v1448) {
bb1449: ;
  char* __first1450;
  char* __last1451;
  struct std__random_access_iterator_tag unnamed1452;
  long __retval1453;
  __first1450 = v1446;
  __last1451 = v1447;
  unnamed1452 = v1448;
  char* t1454 = __last1451;
  char* t1455 = __first1450;
  long diff1456 = t1454 - t1455;
  __retval1453 = diff1456;
  long t1457 = __retval1453;
  return t1457;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1458) {
bb1459: ;
  char** unnamed1460;
  struct std__random_access_iterator_tag __retval1461;
  unnamed1460 = v1458;
  struct std__random_access_iterator_tag t1462 = __retval1461;
  return t1462;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1463, char* v1464) {
bb1465: ;
  char* __first1466;
  char* __last1467;
  long __retval1468;
  struct std__random_access_iterator_tag agg_tmp01469;
  __first1466 = v1463;
  __last1467 = v1464;
  char* t1470 = __first1466;
  char* t1471 = __last1467;
  struct std__random_access_iterator_tag r1472 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1466);
  agg_tmp01469 = r1472;
  struct std__random_access_iterator_tag t1473 = agg_tmp01469;
  long r1474 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1470, t1471, t1473);
  __retval1468 = r1474;
  long t1475 = __retval1468;
  return t1475;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1476, char* v1477) {
bb1478: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1479;
  char* __p1480;
  this1479 = v1476;
  __p1480 = v1477;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1481 = this1479;
  char* t1482 = __p1480;
  t1481->_M_dataplus._M_p = t1482;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1483) {
bb1484: ;
  struct std__allocator_char_* __a1485;
  unsigned long __retval1486;
  __a1485 = v1483;
  unsigned long c1487 = -1;
  unsigned long c1488 = 1;
  unsigned long b1489 = c1487 / c1488;
  __retval1486 = b1489;
  unsigned long t1490 = __retval1486;
  return t1490;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1491) {
bb1492: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1493;
  struct std__allocator_char_* __retval1494;
  this1493 = v1491;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1495 = this1493;
  struct std__allocator_char_* base1496 = (struct std__allocator_char_*)((char *)&(t1495->_M_dataplus) + 0);
  __retval1494 = base1496;
  struct std__allocator_char_* t1497 = __retval1494;
  return t1497;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1498, unsigned long* v1499) {
bb1500: ;
  unsigned long* __a1501;
  unsigned long* __b1502;
  unsigned long* __retval1503;
  __a1501 = v1498;
  __b1502 = v1499;
    unsigned long* t1504 = __b1502;
    unsigned long t1505 = *t1504;
    unsigned long* t1506 = __a1501;
    unsigned long t1507 = *t1506;
    _Bool c1508 = ((t1505 < t1507)) ? 1 : 0;
    if (c1508) {
      unsigned long* t1509 = __b1502;
      __retval1503 = t1509;
      unsigned long* t1510 = __retval1503;
      return t1510;
    }
  unsigned long* t1511 = __a1501;
  __retval1503 = t1511;
  unsigned long* t1512 = __retval1503;
  return t1512;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1513) {
bb1514: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1515;
  unsigned long __retval1516;
  unsigned long __diffmax1517;
  unsigned long __allocmax1518;
  this1515 = v1513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1519 = this1515;
  unsigned long c1520 = 9223372036854775807;
  __diffmax1517 = c1520;
  struct std__allocator_char_* r1521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1519);
  unsigned long r1522 = std__allocator_traits_std__allocator_char_____max_size(r1521);
  __allocmax1518 = r1522;
  unsigned long* r1523 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1517, &__allocmax1518);
  unsigned long t1524 = *r1523;
  unsigned long c1525 = 1;
  unsigned long b1526 = t1524 - c1525;
  __retval1516 = b1526;
  unsigned long t1527 = __retval1516;
  return t1527;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1528) {
bb1529: ;
  struct std____new_allocator_char_* this1530;
  unsigned long __retval1531;
  this1530 = v1528;
  struct std____new_allocator_char_* t1532 = this1530;
  unsigned long c1533 = 9223372036854775807;
  unsigned long c1534 = 1;
  unsigned long b1535 = c1533 / c1534;
  __retval1531 = b1535;
  unsigned long t1536 = __retval1531;
  return t1536;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1537, unsigned long v1538, void* v1539) {
bb1540: ;
  struct std____new_allocator_char_* this1541;
  unsigned long __n1542;
  void* unnamed1543;
  char* __retval1544;
  this1541 = v1537;
  __n1542 = v1538;
  unnamed1543 = v1539;
  struct std____new_allocator_char_* t1545 = this1541;
    unsigned long t1546 = __n1542;
    unsigned long r1547 = std____new_allocator_char____M_max_size___const(t1545);
    _Bool c1548 = ((t1546 > r1547)) ? 1 : 0;
    if (c1548) {
        unsigned long t1549 = __n1542;
        unsigned long c1550 = -1;
        unsigned long c1551 = 1;
        unsigned long b1552 = c1550 / c1551;
        _Bool c1553 = ((t1549 > b1552)) ? 1 : 0;
        if (c1553) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1554 = 1;
    unsigned long c1555 = 16;
    _Bool c1556 = ((c1554 > c1555)) ? 1 : 0;
    if (c1556) {
      unsigned long __al1557;
      unsigned long c1558 = 1;
      __al1557 = c1558;
      unsigned long t1559 = __n1542;
      unsigned long c1560 = 1;
      unsigned long b1561 = t1559 * c1560;
      unsigned long t1562 = __al1557;
      void* r1563 = operator_new_2(b1561, t1562);
      char* cast1564 = (char*)r1563;
      __retval1544 = cast1564;
      char* t1565 = __retval1544;
      return t1565;
    }
  unsigned long t1566 = __n1542;
  unsigned long c1567 = 1;
  unsigned long b1568 = t1566 * c1567;
  void* r1569 = operator_new(b1568);
  char* cast1570 = (char*)r1569;
  __retval1544 = cast1570;
  char* t1571 = __retval1544;
  return t1571;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1572, unsigned long v1573) {
bb1574: ;
  struct std__allocator_char_* this1575;
  unsigned long __n1576;
  char* __retval1577;
  this1575 = v1572;
  __n1576 = v1573;
  struct std__allocator_char_* t1578 = this1575;
    _Bool r1579 = std____is_constant_evaluated();
    if (r1579) {
        unsigned long t1580 = __n1576;
        unsigned long c1581 = 1;
        unsigned long ovr1582;
        _Bool ovf1583 = __builtin_mul_overflow(t1580, c1581, &ovr1582);
        __n1576 = ovr1582;
        if (ovf1583) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1584 = __n1576;
      void* r1585 = operator_new(t1584);
      char* cast1586 = (char*)r1585;
      __retval1577 = cast1586;
      char* t1587 = __retval1577;
      return t1587;
    }
  struct std____new_allocator_char_* base1588 = (struct std____new_allocator_char_*)((char *)t1578 + 0);
  unsigned long t1589 = __n1576;
  void* c1590 = ((void*)0);
  char* r1591 = std____new_allocator_char___allocate(base1588, t1589, c1590);
  __retval1577 = r1591;
  char* t1592 = __retval1577;
  return t1592;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1593, unsigned long v1594) {
bb1595: ;
  struct std__allocator_char_* __a1596;
  unsigned long __n1597;
  char* __retval1598;
  __a1596 = v1593;
  __n1597 = v1594;
  struct std__allocator_char_* t1599 = __a1596;
  unsigned long t1600 = __n1597;
  char* r1601 = std__allocator_char___allocate(t1599, t1600);
  __retval1598 = r1601;
  char* t1602 = __retval1598;
  return t1602;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1603, unsigned long v1604) {
bb1605: ;
  struct std__allocator_char_* __a1606;
  unsigned long __n1607;
  char* __retval1608;
  char* __p1609;
  __a1606 = v1603;
  __n1607 = v1604;
  struct std__allocator_char_* t1610 = __a1606;
  unsigned long t1611 = __n1607;
  char* r1612 = std__allocator_traits_std__allocator_char_____allocate(t1610, t1611);
  __p1609 = r1612;
  char* t1613 = __p1609;
  __retval1608 = t1613;
  char* t1614 = __retval1608;
  return t1614;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1615) {
bb1616: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1617;
  struct std__allocator_char_* __retval1618;
  this1617 = v1615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1619 = this1617;
  struct std__allocator_char_* base1620 = (struct std__allocator_char_*)((char *)&(t1619->_M_dataplus) + 0);
  __retval1618 = base1620;
  struct std__allocator_char_* t1621 = __retval1618;
  return t1621;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1622, unsigned long* v1623, unsigned long v1624) {
bb1625: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1626;
  unsigned long* __capacity1627;
  unsigned long __old_capacity1628;
  char* __retval1629;
  this1626 = v1622;
  __capacity1627 = v1623;
  __old_capacity1628 = v1624;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1630 = this1626;
    unsigned long* t1631 = __capacity1627;
    unsigned long t1632 = *t1631;
    unsigned long r1633 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1630);
    _Bool c1634 = ((t1632 > r1633)) ? 1 : 0;
    if (c1634) {
      char* cast1635 = (char*)&(_str_23);
      std____throw_length_error(cast1635);
    }
    unsigned long* t1636 = __capacity1627;
    unsigned long t1637 = *t1636;
    unsigned long t1638 = __old_capacity1628;
    _Bool c1639 = ((t1637 > t1638)) ? 1 : 0;
    _Bool ternary1640;
    if (c1639) {
      unsigned long* t1641 = __capacity1627;
      unsigned long t1642 = *t1641;
      unsigned long c1643 = 2;
      unsigned long t1644 = __old_capacity1628;
      unsigned long b1645 = c1643 * t1644;
      _Bool c1646 = ((t1642 < b1645)) ? 1 : 0;
      ternary1640 = (_Bool)c1646;
    } else {
      _Bool c1647 = 0;
      ternary1640 = (_Bool)c1647;
    }
    if (ternary1640) {
      unsigned long c1648 = 2;
      unsigned long t1649 = __old_capacity1628;
      unsigned long b1650 = c1648 * t1649;
      unsigned long* t1651 = __capacity1627;
      *t1651 = b1650;
        unsigned long* t1652 = __capacity1627;
        unsigned long t1653 = *t1652;
        unsigned long r1654 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1630);
        _Bool c1655 = ((t1653 > r1654)) ? 1 : 0;
        if (c1655) {
          unsigned long r1656 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1630);
          unsigned long* t1657 = __capacity1627;
          *t1657 = r1656;
        }
    }
  struct std__allocator_char_* r1658 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1630);
  unsigned long* t1659 = __capacity1627;
  unsigned long t1660 = *t1659;
  unsigned long c1661 = 1;
  unsigned long b1662 = t1660 + c1661;
  char* r1663 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1658, b1662);
  __retval1629 = r1663;
  char* t1664 = __retval1629;
  return t1664;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1665, unsigned long v1666) {
bb1667: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1668;
  unsigned long __capacity1669;
  this1668 = v1665;
  __capacity1669 = v1666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1670 = this1668;
  unsigned long t1671 = __capacity1669;
  t1670->field2._M_allocated_capacity = t1671;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1672: ;
  _Bool __retval1673;
    _Bool c1674 = 0;
    __retval1673 = c1674;
    _Bool t1675 = __retval1673;
    return t1675;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1676) {
bb1677: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1678;
  this1678 = v1676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1679 = this1678;
    _Bool r1680 = std__is_constant_evaluated();
    if (r1680) {
        unsigned long __i1681;
        unsigned long c1682 = 0;
        __i1681 = c1682;
        while (1) {
          unsigned long t1684 = __i1681;
          unsigned long c1685 = 15;
          _Bool c1686 = ((t1684 <= c1685)) ? 1 : 0;
          if (!c1686) break;
          char c1687 = 0;
          unsigned long t1688 = __i1681;
          t1679->field2._M_local_buf[t1688] = c1687;
        for_step1683: ;
          unsigned long t1689 = __i1681;
          unsigned long u1690 = t1689 + 1;
          __i1681 = u1690;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1691, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1692) {
bb1693: ;
  struct _Guard* this1694;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1695;
  this1694 = v1691;
  __s1695 = v1692;
  struct _Guard* t1696 = this1694;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1697 = __s1695;
  t1696->_M_guarded = t1697;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1698, char* v1699) {
bb1700: ;
  char* __location1701;
  char* __args1702;
  char* __retval1703;
  void* __loc1704;
  __location1701 = v1698;
  __args1702 = v1699;
  char* t1705 = __location1701;
  void* cast1706 = (void*)t1705;
  __loc1704 = cast1706;
    void* t1707 = __loc1704;
    char* cast1708 = (char*)t1707;
    char* t1709 = __args1702;
    char t1710 = *t1709;
    *cast1708 = t1710;
    __retval1703 = cast1708;
    char* t1711 = __retval1703;
    return t1711;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1712, char* v1713) {
bb1714: ;
  char* __c11715;
  char* __c21716;
  __c11715 = v1712;
  __c21716 = v1713;
    _Bool r1717 = std____is_constant_evaluated();
    if (r1717) {
      char* t1718 = __c11715;
      char* t1719 = __c21716;
      char* r1720 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1718, t1719);
    } else {
      char* t1721 = __c21716;
      char t1722 = *t1721;
      char* t1723 = __c11715;
      *t1723 = t1722;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1724, char* v1725, unsigned long v1726) {
bb1727: ;
  char* __s11728;
  char* __s21729;
  unsigned long __n1730;
  char* __retval1731;
  __s11728 = v1724;
  __s21729 = v1725;
  __n1730 = v1726;
    unsigned long t1732 = __n1730;
    unsigned long c1733 = 0;
    _Bool c1734 = ((t1732 == c1733)) ? 1 : 0;
    if (c1734) {
      char* t1735 = __s11728;
      __retval1731 = t1735;
      char* t1736 = __retval1731;
      return t1736;
    }
    _Bool r1737 = std____is_constant_evaluated();
    if (r1737) {
        unsigned long __i1738;
        unsigned long c1739 = 0;
        __i1738 = c1739;
        while (1) {
          unsigned long t1741 = __i1738;
          unsigned long t1742 = __n1730;
          _Bool c1743 = ((t1741 < t1742)) ? 1 : 0;
          if (!c1743) break;
          char* t1744 = __s11728;
          unsigned long t1745 = __i1738;
          char* ptr1746 = &(t1744)[t1745];
          unsigned long t1747 = __i1738;
          char* t1748 = __s21729;
          char* ptr1749 = &(t1748)[t1747];
          char* r1750 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1746, ptr1749);
        for_step1740: ;
          unsigned long t1751 = __i1738;
          unsigned long u1752 = t1751 + 1;
          __i1738 = u1752;
        }
      char* t1753 = __s11728;
      __retval1731 = t1753;
      char* t1754 = __retval1731;
      return t1754;
    }
  char* t1755 = __s11728;
  void* cast1756 = (void*)t1755;
  char* t1757 = __s21729;
  void* cast1758 = (void*)t1757;
  unsigned long t1759 = __n1730;
  unsigned long c1760 = 1;
  unsigned long b1761 = t1759 * c1760;
  void* r1762 = memcpy(cast1756, cast1758, b1761);
  char* t1763 = __s11728;
  __retval1731 = t1763;
  char* t1764 = __retval1731;
  return t1764;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1765, char* v1766, unsigned long v1767) {
bb1768: ;
  char* __s11769;
  char* __s21770;
  unsigned long __n1771;
  char* __retval1772;
  __s11769 = v1765;
  __s21770 = v1766;
  __n1771 = v1767;
    unsigned long t1773 = __n1771;
    unsigned long c1774 = 0;
    _Bool c1775 = ((t1773 == c1774)) ? 1 : 0;
    if (c1775) {
      char* t1776 = __s11769;
      __retval1772 = t1776;
      char* t1777 = __retval1772;
      return t1777;
    }
    _Bool r1778 = std____is_constant_evaluated();
    if (r1778) {
      char* t1779 = __s11769;
      char* t1780 = __s21770;
      unsigned long t1781 = __n1771;
      char* r1782 = __gnu_cxx__char_traits_char___copy(t1779, t1780, t1781);
      __retval1772 = r1782;
      char* t1783 = __retval1772;
      return t1783;
    }
  char* t1784 = __s11769;
  void* cast1785 = (void*)t1784;
  char* t1786 = __s21770;
  void* cast1787 = (void*)t1786;
  unsigned long t1788 = __n1771;
  void* r1789 = memcpy(cast1785, cast1787, t1788);
  char* cast1790 = (char*)r1789;
  __retval1772 = cast1790;
  char* t1791 = __retval1772;
  return t1791;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1792, char* v1793, unsigned long v1794) {
bb1795: ;
  char* __d1796;
  char* __s1797;
  unsigned long __n1798;
  __d1796 = v1792;
  __s1797 = v1793;
  __n1798 = v1794;
    unsigned long t1799 = __n1798;
    unsigned long c1800 = 1;
    _Bool c1801 = ((t1799 == c1800)) ? 1 : 0;
    if (c1801) {
      char* t1802 = __d1796;
      char* t1803 = __s1797;
      std__char_traits_char___assign_2(t1802, t1803);
    } else {
      char* t1804 = __d1796;
      char* t1805 = __s1797;
      unsigned long t1806 = __n1798;
      char* r1807 = std__char_traits_char___copy(t1804, t1805, t1806);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1808) {
bb1809: ;
  char* __it1810;
  char* __retval1811;
  __it1810 = v1808;
  char* t1812 = __it1810;
  __retval1811 = t1812;
  char* t1813 = __retval1811;
  return t1813;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1814, char* v1815, char* v1816) {
bb1817: ;
  char* __p1818;
  char* __k11819;
  char* __k21820;
  __p1818 = v1814;
  __k11819 = v1815;
  __k21820 = v1816;
    char* t1821 = __p1818;
    char* t1822 = __k11819;
    char* r1823 = char_const__std____niter_base_char_const__(t1822);
    char* t1824 = __k21820;
    char* t1825 = __k11819;
    long diff1826 = t1824 - t1825;
    unsigned long cast1827 = (unsigned long)diff1826;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1821, r1823, cast1827);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1828) {
bb1829: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1830;
  char* __retval1831;
  this1830 = v1828;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1832 = this1830;
  char* t1833 = t1832->_M_dataplus._M_p;
  __retval1831 = t1833;
  char* t1834 = __retval1831;
  return t1834;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1835, unsigned long v1836) {
bb1837: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1838;
  unsigned long __length1839;
  this1838 = v1835;
  __length1839 = v1836;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1840 = this1838;
  unsigned long t1841 = __length1839;
  t1840->_M_string_length = t1841;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1842, unsigned long v1843) {
bb1844: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1845;
  unsigned long __n1846;
  char ref_tmp01847;
  this1845 = v1842;
  __n1846 = v1843;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1848 = this1845;
  unsigned long t1849 = __n1846;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1848, t1849);
  unsigned long t1850 = __n1846;
  char* r1851 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1848);
  char* ptr1852 = &(r1851)[t1850];
  char c1853 = 0;
  ref_tmp01847 = c1853;
  std__char_traits_char___assign_2(ptr1852, &ref_tmp01847);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1854) {
bb1855: ;
  struct _Guard* this1856;
  this1856 = v1854;
  struct _Guard* t1857 = this1856;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1858 = t1857->_M_guarded;
    _Bool cast1859 = (_Bool)t1858;
    if (cast1859) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1860 = t1857->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1860);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1861, char* v1862, char* v1863, struct std__forward_iterator_tag v1864) {
bb1865: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1866;
  char* __beg1867;
  char* __end1868;
  struct std__forward_iterator_tag unnamed1869;
  unsigned long __dnew1870;
  struct _Guard __guard1871;
  this1866 = v1861;
  __beg1867 = v1862;
  __end1868 = v1863;
  unnamed1869 = v1864;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1872 = this1866;
  char* t1873 = __beg1867;
  char* t1874 = __end1868;
  long r1875 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1873, t1874);
  unsigned long cast1876 = (unsigned long)r1875;
  __dnew1870 = cast1876;
    unsigned long t1877 = __dnew1870;
    unsigned long c1878 = 15;
    _Bool c1879 = ((t1877 > c1878)) ? 1 : 0;
    if (c1879) {
      unsigned long c1880 = 0;
      char* r1881 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1872, &__dnew1870, c1880);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1872, r1881);
      unsigned long t1882 = __dnew1870;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1872, t1882);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1872);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1871, t1872);
    char* r1883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1872);
    char* t1884 = __beg1867;
    char* t1885 = __end1868;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1883, t1884, t1885);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1886 = ((void*)0);
    __guard1871._M_guarded = c1886;
    unsigned long t1887 = __dnew1870;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1872, t1887);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1871);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1888) {
bb1889: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1890;
  this1890 = v1888;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1891 = this1890;
  {
    struct std__allocator_char_* base1892 = (struct std__allocator_char_*)((char *)t1891 + 0);
    std__allocator_char____allocator(base1892);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1893, struct std____new_allocator_char_* v1894) {
bb1895: ;
  struct std____new_allocator_char_* this1896;
  struct std____new_allocator_char_* unnamed1897;
  this1896 = v1893;
  unnamed1897 = v1894;
  struct std____new_allocator_char_* t1898 = this1896;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1899, struct std__allocator_char_* v1900) {
bb1901: ;
  struct std__allocator_char_* this1902;
  struct std__allocator_char_* __a1903;
  this1902 = v1899;
  __a1903 = v1900;
  struct std__allocator_char_* t1904 = this1902;
  struct std____new_allocator_char_* base1905 = (struct std____new_allocator_char_*)((char *)t1904 + 0);
  struct std__allocator_char_* t1906 = __a1903;
  struct std____new_allocator_char_* base1907 = (struct std____new_allocator_char_*)((char *)t1906 + 0);
  std____new_allocator_char_____new_allocator(base1905, base1907);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1908) {
bb1909: ;
  char* __r1910;
  char* __retval1911;
  __r1910 = v1908;
  char* t1912 = __r1910;
  __retval1911 = t1912;
  char* t1913 = __retval1911;
  return t1913;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1914) {
bb1915: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1916;
  char* __retval1917;
  this1916 = v1914;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1918 = this1916;
  char* cast1919 = (char*)&(t1918->field2._M_local_buf);
  char* r1920 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1919);
  __retval1917 = r1920;
  char* t1921 = __retval1917;
  return t1921;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1922) {
bb1923: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1924;
  _Bool __retval1925;
  this1924 = v1922;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1926 = this1924;
    char* r1927 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1926);
    char* r1928 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1926);
    _Bool c1929 = ((r1927 == r1928)) ? 1 : 0;
    if (c1929) {
        unsigned long t1930 = t1926->_M_string_length;
        unsigned long c1931 = 15;
        _Bool c1932 = ((t1930 > c1931)) ? 1 : 0;
        if (c1932) {
          __builtin_unreachable();
        }
      _Bool c1933 = 1;
      __retval1925 = c1933;
      _Bool t1934 = __retval1925;
      return t1934;
    }
  _Bool c1935 = 0;
  __retval1925 = c1935;
  _Bool t1936 = __retval1925;
  return t1936;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1937, char* v1938, unsigned long v1939) {
bb1940: ;
  struct std____new_allocator_char_* this1941;
  char* __p1942;
  unsigned long __n1943;
  this1941 = v1937;
  __p1942 = v1938;
  __n1943 = v1939;
  struct std____new_allocator_char_* t1944 = this1941;
    unsigned long c1945 = 1;
    unsigned long c1946 = 16;
    _Bool c1947 = ((c1945 > c1946)) ? 1 : 0;
    if (c1947) {
      char* t1948 = __p1942;
      void* cast1949 = (void*)t1948;
      unsigned long t1950 = __n1943;
      unsigned long c1951 = 1;
      unsigned long b1952 = t1950 * c1951;
      unsigned long c1953 = 1;
      operator_delete_3(cast1949, b1952, c1953);
      return;
    }
  char* t1954 = __p1942;
  void* cast1955 = (void*)t1954;
  unsigned long t1956 = __n1943;
  unsigned long c1957 = 1;
  unsigned long b1958 = t1956 * c1957;
  operator_delete_2(cast1955, b1958);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1959, char* v1960, unsigned long v1961) {
bb1962: ;
  struct std__allocator_char_* this1963;
  char* __p1964;
  unsigned long __n1965;
  this1963 = v1959;
  __p1964 = v1960;
  __n1965 = v1961;
  struct std__allocator_char_* t1966 = this1963;
    _Bool r1967 = std____is_constant_evaluated();
    if (r1967) {
      char* t1968 = __p1964;
      void* cast1969 = (void*)t1968;
      operator_delete(cast1969);
      return;
    }
  struct std____new_allocator_char_* base1970 = (struct std____new_allocator_char_*)((char *)t1966 + 0);
  char* t1971 = __p1964;
  unsigned long t1972 = __n1965;
  std____new_allocator_char___deallocate(base1970, t1971, t1972);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1973, char* v1974, unsigned long v1975) {
bb1976: ;
  struct std__allocator_char_* __a1977;
  char* __p1978;
  unsigned long __n1979;
  __a1977 = v1973;
  __p1978 = v1974;
  __n1979 = v1975;
  struct std__allocator_char_* t1980 = __a1977;
  char* t1981 = __p1978;
  unsigned long t1982 = __n1979;
  std__allocator_char___deallocate(t1980, t1981, t1982);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1983, unsigned long v1984) {
bb1985: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1986;
  unsigned long __size1987;
  this1986 = v1983;
  __size1987 = v1984;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1988 = this1986;
  struct std__allocator_char_* r1989 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1988);
  char* r1990 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1988);
  unsigned long t1991 = __size1987;
  unsigned long c1992 = 1;
  unsigned long b1993 = t1991 + c1992;
  std__allocator_traits_std__allocator_char_____deallocate(r1989, r1990, b1993);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1994) {
bb1995: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1996;
  this1996 = v1994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1997 = this1996;
    _Bool r1998 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1997);
    _Bool u1999 = !r1998;
    if (u1999) {
      unsigned long t2000 = t1997->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1997, t2000);
    }
  return;
}

