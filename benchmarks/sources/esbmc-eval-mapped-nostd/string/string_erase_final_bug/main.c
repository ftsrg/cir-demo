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

char _str[27] = "This is an example phrase.";
char _str_1[19] = "This is an phrase.";
char _str_2[28] = "str != \"This is an phrase.\"";
char _str_3[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_erase_final_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "This is a phrase.";
char _str_5[27] = "str != \"This is a phrase.\"";
char _str_6[13] = "This phrase.";
char _str_7[22] = "str != \"This phrase.\"";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[20] = "basic_string::erase";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
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
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
_Bool _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
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
        char* cast20 = (char*)&(_str_8);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __sz41;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t42 = this39;
  unsigned long t43 = t42->_M_string_length;
  __sz41 = t43;
    unsigned long t44 = __sz41;
    unsigned long r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t42);
    _Bool c46 = ((t44 > r45)) ? 1 : 0;
    if (c46) {
      __builtin_unreachable();
    }
  unsigned long t47 = __sz41;
  __retval40 = t47;
  unsigned long t48 = __retval40;
  return t48;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v49, unsigned long v50, char* v51) {
bb52:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this53;
  unsigned long __pos54;
  char* __s55;
  unsigned long __retval56;
  this53 = v49;
  __pos54 = v50;
  __s55 = v51;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = this53;
    unsigned long t58 = __pos54;
    unsigned long r59 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t57);
    _Bool c60 = ((t58 > r59)) ? 1 : 0;
    if (c60) {
      char* cast61 = (char*)&(_str_11);
      char* t62 = __s55;
      unsigned long t63 = __pos54;
      unsigned long r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t57);
      std____throw_out_of_range_fmt(cast61, t62, t63, r64);
    }
  unsigned long t65 = __pos54;
  __retval56 = t65;
  unsigned long t66 = __retval56;
  return t66;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this69;
  unsigned long r72 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
  __retval70 = r72;
  unsigned long t73 = __retval70;
  return t73;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v74, char* v75) {
bb76:
  char* __c177;
  char* __c278;
  __c177 = v74;
  __c278 = v75;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      char* t80 = __c177;
      char* t81 = __c278;
      char* r82 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t80, t81);
    } else {
      char* t83 = __c278;
      char t84 = *t83;
      char* t85 = __c177;
      *t85 = t84;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v86, char* v87, unsigned long v88) {
bb89:
  char* __s190;
  char* __s291;
  unsigned long __n92;
  char* __retval93;
  __s190 = v86;
  __s291 = v87;
  __n92 = v88;
    unsigned long t94 = __n92;
    unsigned long c95 = 0;
    _Bool c96 = ((t94 == c95)) ? 1 : 0;
    if (c96) {
      char* t97 = __s190;
      __retval93 = t97;
      char* t98 = __retval93;
      return t98;
    }
    _Bool r99 = std____is_constant_evaluated();
    if (r99) {
        char* t100 = __s291;
        char* t101 = __s190;
        _Bool c102 = ((t100 < t101)) ? 1 : 0;
        _Bool isconst103 = 0;
        _Bool ternary104;
        if (isconst103) {
          char* t105 = __s190;
          char* t106 = __s291;
          _Bool c107 = ((t105 > t106)) ? 1 : 0;
          ternary104 = (_Bool)c107;
        } else {
          _Bool c108 = 0;
          ternary104 = (_Bool)c108;
        }
        _Bool ternary109;
        if (ternary104) {
          char* t110 = __s190;
          char* t111 = __s291;
          unsigned long t112 = __n92;
          char* ptr113 = &(t111)[t112];
          _Bool c114 = ((t110 < ptr113)) ? 1 : 0;
          ternary109 = (_Bool)c114;
        } else {
          _Bool c115 = 0;
          ternary109 = (_Bool)c115;
        }
        if (ternary109) {
            do {
                unsigned long t116 = __n92;
                unsigned long u117 = t116 - 1;
                __n92 = u117;
                unsigned long t118 = __n92;
                char* t119 = __s190;
                char* ptr120 = &(t119)[t118];
                unsigned long t121 = __n92;
                char* t122 = __s291;
                char* ptr123 = &(t122)[t121];
                __gnu_cxx__char_traits_char___assign(ptr120, ptr123);
              unsigned long t124 = __n92;
              unsigned long c125 = 0;
              _Bool c126 = ((t124 > c125)) ? 1 : 0;
              if (!c126) break;
            } while (1);
        } else {
          char* t127 = __s190;
          char* t128 = __s291;
          unsigned long t129 = __n92;
          char* r130 = __gnu_cxx__char_traits_char___copy(t127, t128, t129);
        }
      char* t131 = __s190;
      __retval93 = t131;
      char* t132 = __retval93;
      return t132;
    }
  char* t133 = __s190;
  void* cast134 = (void*)t133;
  char* t135 = __s291;
  void* cast136 = (void*)t135;
  unsigned long t137 = __n92;
  unsigned long c138 = 1;
  unsigned long b139 = t137 * c138;
  void* r140 = memmove(cast134, cast136, b139);
  char* t141 = __s190;
  __retval93 = t141;
  char* t142 = __retval93;
  return t142;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v143, char* v144, unsigned long v145) {
bb146:
  char* __s1147;
  char* __s2148;
  unsigned long __n149;
  char* __retval150;
  __s1147 = v143;
  __s2148 = v144;
  __n149 = v145;
    unsigned long t151 = __n149;
    unsigned long c152 = 0;
    _Bool c153 = ((t151 == c152)) ? 1 : 0;
    if (c153) {
      char* t154 = __s1147;
      __retval150 = t154;
      char* t155 = __retval150;
      return t155;
    }
    _Bool r156 = std____is_constant_evaluated();
    if (r156) {
      char* t157 = __s1147;
      char* t158 = __s2148;
      unsigned long t159 = __n149;
      char* r160 = __gnu_cxx__char_traits_char___move(t157, t158, t159);
      __retval150 = r160;
      char* t161 = __retval150;
      return t161;
    }
  char* t162 = __s1147;
  void* cast163 = (void*)t162;
  char* t164 = __s2148;
  void* cast165 = (void*)t164;
  unsigned long t166 = __n149;
  void* r167 = memmove(cast163, cast165, t166);
  char* cast168 = (char*)r167;
  __retval150 = cast168;
  char* t169 = __retval150;
  return t169;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v170, char* v171, unsigned long v172) {
bb173:
  char* __d174;
  char* __s175;
  unsigned long __n176;
  __d174 = v170;
  __s175 = v171;
  __n176 = v172;
    unsigned long t177 = __n176;
    unsigned long c178 = 1;
    _Bool c179 = ((t177 == c178)) ? 1 : 0;
    if (c179) {
      char* t180 = __d174;
      char* t181 = __s175;
      std__char_traits_char___assign(t180, t181);
    } else {
      char* t182 = __d174;
      char* t183 = __s175;
      unsigned long t184 = __n176;
      char* r185 = std__char_traits_char___move(t182, t183, t184);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_eraseEmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v186, unsigned long v187, unsigned long v188) {
bb189:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this190;
  unsigned long __pos191;
  unsigned long __n192;
  unsigned long __how_much193;
  this190 = v186;
  __pos191 = v187;
  __n192 = v188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t194 = this190;
  unsigned long r195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t194);
  unsigned long t196 = __pos191;
  unsigned long b197 = r195 - t196;
  unsigned long t198 = __n192;
  unsigned long b199 = b197 - t198;
  __how_much193 = b199;
    unsigned long t200 = __how_much193;
    _Bool cast201 = (_Bool)t200;
    _Bool ternary202;
    if (cast201) {
      unsigned long t203 = __n192;
      _Bool cast204 = (_Bool)t203;
      ternary202 = (_Bool)cast204;
    } else {
      _Bool c205 = 0;
      ternary202 = (_Bool)c205;
    }
    if (ternary202) {
      char* r206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t194);
      unsigned long t207 = __pos191;
      char* ptr208 = &(r206)[t207];
      char* r209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t194);
      unsigned long t210 = __pos191;
      char* ptr211 = &(r209)[t210];
      unsigned long t212 = __n192;
      char* ptr213 = &(ptr211)[t212];
      unsigned long t214 = __how_much193;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr208, ptr213, t214);
    }
  unsigned long r215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t194);
  unsigned long t216 = __n192;
  unsigned long b217 = r215 - t216;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t194, b217);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v218, unsigned long v219, unsigned long v220) {
bb221:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this222;
  unsigned long __pos223;
  unsigned long __off224;
  unsigned long __retval225;
  _Bool __testoff226;
  this222 = v218;
  __pos223 = v219;
  __off224 = v220;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t227 = this222;
  unsigned long t228 = __off224;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t227);
  unsigned long t230 = __pos223;
  unsigned long b231 = r229 - t230;
  _Bool c232 = ((t228 < b231)) ? 1 : 0;
  __testoff226 = c232;
  _Bool t233 = __testoff226;
  unsigned long ternary234;
  if (t233) {
    unsigned long t235 = __off224;
    ternary234 = (unsigned long)t235;
  } else {
    unsigned long r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t227);
    unsigned long t237 = __pos223;
    unsigned long b238 = r236 - t237;
    ternary234 = (unsigned long)b238;
  }
  __retval225 = ternary234;
  unsigned long t239 = __retval225;
  return t239;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240, unsigned long v241, unsigned long v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  unsigned long __pos245;
  unsigned long __n246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval247;
  this244 = v240;
  __pos245 = v241;
  __n246 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = this244;
  unsigned long t249 = __pos245;
  char* cast250 = (char*)&(_str_10);
  unsigned long r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t248, t249, cast250);
    unsigned long t252 = __n246;
    unsigned long t253 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    _Bool c254 = ((t252 == t253)) ? 1 : 0;
    if (c254) {
      unsigned long t255 = __pos245;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t248, t255);
    } else {
        unsigned long t256 = __n246;
        unsigned long c257 = 0;
        _Bool c258 = ((t256 != c257)) ? 1 : 0;
        if (c258) {
          unsigned long t259 = __pos245;
          unsigned long t260 = __pos245;
          unsigned long t261 = __n246;
          unsigned long r262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t248, t260, t261);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t248, t259, r262);
        }
    }
  __retval247 = t248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t263 = __retval247;
  return t263;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v264, char* v265) {
bb266:
  char* __c1267;
  char* __c2268;
  _Bool __retval269;
  __c1267 = v264;
  __c2268 = v265;
  char* t270 = __c1267;
  char t271 = *t270;
  unsigned char cast272 = (unsigned char)t271;
  int cast273 = (int)cast272;
  char* t274 = __c2268;
  char t275 = *t274;
  unsigned char cast276 = (unsigned char)t275;
  int cast277 = (int)cast276;
  _Bool c278 = ((cast273 < cast277)) ? 1 : 0;
  __retval269 = c278;
  _Bool t279 = __retval269;
  return t279;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v280, char* v281, unsigned long v282) {
bb283:
  char* __s1284;
  char* __s2285;
  unsigned long __n286;
  int __retval287;
  __s1284 = v280;
  __s2285 = v281;
  __n286 = v282;
    unsigned long t288 = __n286;
    unsigned long c289 = 0;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      int c291 = 0;
      __retval287 = c291;
      int t292 = __retval287;
      return t292;
    }
    _Bool r293 = std____is_constant_evaluated();
    if (r293) {
        unsigned long __i294;
        unsigned long c295 = 0;
        __i294 = c295;
        while (1) {
          unsigned long t297 = __i294;
          unsigned long t298 = __n286;
          _Bool c299 = ((t297 < t298)) ? 1 : 0;
          if (!c299) break;
            unsigned long t300 = __i294;
            char* t301 = __s1284;
            char* ptr302 = &(t301)[t300];
            unsigned long t303 = __i294;
            char* t304 = __s2285;
            char* ptr305 = &(t304)[t303];
            _Bool r306 = std__char_traits_char___lt(ptr302, ptr305);
            if (r306) {
              int c307 = -1;
              __retval287 = c307;
              int t308 = __retval287;
              int ret_val309 = t308;
              return ret_val309;
            } else {
                unsigned long t310 = __i294;
                char* t311 = __s2285;
                char* ptr312 = &(t311)[t310];
                unsigned long t313 = __i294;
                char* t314 = __s1284;
                char* ptr315 = &(t314)[t313];
                _Bool r316 = std__char_traits_char___lt(ptr312, ptr315);
                if (r316) {
                  int c317 = 1;
                  __retval287 = c317;
                  int t318 = __retval287;
                  int ret_val319 = t318;
                  return ret_val319;
                }
            }
        for_step296: ;
          unsigned long t320 = __i294;
          unsigned long u321 = t320 + 1;
          __i294 = u321;
        }
      int c322 = 0;
      __retval287 = c322;
      int t323 = __retval287;
      return t323;
    }
  char* t324 = __s1284;
  void* cast325 = (void*)t324;
  char* t326 = __s2285;
  void* cast327 = (void*)t326;
  unsigned long t328 = __n286;
  int r329 = memcmp(cast325, cast327, t328);
  __retval287 = r329;
  int t330 = __retval287;
  return t330;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v331) {
bb332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this333;
  char* __retval334;
  this333 = v331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = this333;
  char* r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t335);
  __retval334 = r336;
  char* t337 = __retval334;
  return t337;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v338, char* v339) {
bb340:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs341;
  char* __rhs342;
  _Bool __retval343;
  __lhs341 = v338;
  __rhs342 = v339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = __lhs341;
  unsigned long r345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t344);
  char* t346 = __rhs342;
  unsigned long r347 = std__char_traits_char___length(t346);
  _Bool c348 = ((r345 == r347)) ? 1 : 0;
  _Bool ternary349;
  if (c348) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t350 = __lhs341;
    char* r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t350);
    char* t352 = __rhs342;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t353 = __lhs341;
    unsigned long r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t353);
    int r355 = std__char_traits_char___compare(r351, t352, r354);
    _Bool cast356 = (_Bool)r355;
    _Bool u357 = !cast356;
    ternary349 = (_Bool)u357;
  } else {
    _Bool c358 = 0;
    ternary349 = (_Bool)c358;
  }
  __retval343 = ternary349;
  _Bool t359 = __retval343;
  return t359;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v360, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361) {
bb362:
  struct std__basic_ostream_char__std__char_traits_char__* __os363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str364;
  struct std__basic_ostream_char__std__char_traits_char__* __retval365;
  __os363 = v360;
  __str364 = v361;
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __os363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = __str364;
  char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t367);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t369 = __str364;
  unsigned long r370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t369);
  long cast371 = (long)r370;
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t366, r368, cast371);
  __retval365 = r372;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __retval365;
  return t373;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v374, void* v375) {
bb376:
  struct std__basic_ostream_char__std__char_traits_char__* this377;
  void* __pf378;
  struct std__basic_ostream_char__std__char_traits_char__* __retval379;
  this377 = v374;
  __pf378 = v375;
  struct std__basic_ostream_char__std__char_traits_char__* t380 = this377;
  void* t381 = __pf378;
  struct std__basic_ostream_char__std__char_traits_char__* r382 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t381)(t380);
  __retval379 = r382;
  struct std__basic_ostream_char__std__char_traits_char__* t383 = __retval379;
  return t383;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v384) {
bb385:
  struct std__basic_ostream_char__std__char_traits_char__* __os386;
  struct std__basic_ostream_char__std__char_traits_char__* __retval387;
  __os386 = v384;
  struct std__basic_ostream_char__std__char_traits_char__* t388 = __os386;
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__ostream__flush(t388);
  __retval387 = r389;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __retval387;
  return t390;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v391) {
bb392:
  struct std__ctype_char_* __f393;
  struct std__ctype_char_* __retval394;
  __f393 = v391;
    struct std__ctype_char_* t395 = __f393;
    _Bool cast396 = (_Bool)t395;
    _Bool u397 = !cast396;
    if (u397) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t398 = __f393;
  __retval394 = t398;
  struct std__ctype_char_* t399 = __retval394;
  return t399;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v400, char v401) {
bb402:
  struct std__ctype_char_* this403;
  char __c404;
  char __retval405;
  this403 = v400;
  __c404 = v401;
  struct std__ctype_char_* t406 = this403;
    char t407 = t406->_M_widen_ok;
    _Bool cast408 = (_Bool)t407;
    if (cast408) {
      char t409 = __c404;
      unsigned char cast410 = (unsigned char)t409;
      unsigned long cast411 = (unsigned long)cast410;
      char t412 = t406->_M_widen[cast411];
      __retval405 = t412;
      char t413 = __retval405;
      return t413;
    }
  std__ctype_char____M_widen_init___const(t406);
  char t414 = __c404;
  void** v415 = (void**)t406;
  void* v416 = *((void**)v415);
  char vcall419 = (char)__VERIFIER_virtual_call_char_char(t406, 6, t414);
  __retval405 = vcall419;
  char t420 = __retval405;
  return t420;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v421, char v422) {
bb423:
  struct std__basic_ios_char__std__char_traits_char__* this424;
  char __c425;
  char __retval426;
  this424 = v421;
  __c425 = v422;
  struct std__basic_ios_char__std__char_traits_char__* t427 = this424;
  struct std__ctype_char_* t428 = t427->_M_ctype;
  struct std__ctype_char_* r429 = std__ctype_char__const__std____check_facet_std__ctype_char___(t428);
  char t430 = __c425;
  char r431 = std__ctype_char___widen_char__const(r429, t430);
  __retval426 = r431;
  char t432 = __retval426;
  return t432;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v433) {
bb434:
  struct std__basic_ostream_char__std__char_traits_char__* __os435;
  struct std__basic_ostream_char__std__char_traits_char__* __retval436;
  __os435 = v433;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __os435;
  struct std__basic_ostream_char__std__char_traits_char__* t438 = __os435;
  void** v439 = (void**)t438;
  void* v440 = *((void**)v439);
  unsigned char* cast441 = (unsigned char*)v440;
  long c442 = -24;
  unsigned char* ptr443 = &(cast441)[c442];
  long* cast444 = (long*)ptr443;
  long t445 = *cast444;
  unsigned char* cast446 = (unsigned char*)t438;
  unsigned char* ptr447 = &(cast446)[t445];
  struct std__basic_ostream_char__std__char_traits_char__* cast448 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr447;
  struct std__basic_ios_char__std__char_traits_char__* cast449 = (struct std__basic_ios_char__std__char_traits_char__*)cast448;
  char c450 = 10;
  char r451 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast449, c450);
  struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__put(t437, r451);
  struct std__basic_ostream_char__std__char_traits_char__* r453 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r452);
  __retval436 = r453;
  struct std__basic_ostream_char__std__char_traits_char__* t454 = __retval436;
  return t454;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v455, char** v456) {
bb457:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this458;
  char** __i459;
  this458 = v455;
  __i459 = v456;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t460 = this458;
  char** t461 = __i459;
  char* t462 = *t461;
  t460->_M_current = t462;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v463) {
bb464:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this465;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval466;
  char* ref_tmp0467;
  this465 = v463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = this465;
  char* r469 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t468);
  ref_tmp0467 = r469;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval466, &ref_tmp0467);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t470 = __retval466;
  return t470;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v471, long v472) {
bb473:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this474;
  long __n475;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval476;
  char* ref_tmp0477;
  this474 = v471;
  __n475 = v472;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t478 = this474;
  char* t479 = t478->_M_current;
  long t480 = __n475;
  char* ptr481 = &(t479)[t480];
  ref_tmp0477 = ptr481;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval476, &ref_tmp0477);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t482 = __retval476;
  return t482;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEaSEOS8_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v483, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v484) {
bb485:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this486;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* unnamed487;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval488;
  this486 = v483;
  unnamed487 = v484;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t489 = this486;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t490 = unnamed487;
  char* t491 = t490->_M_current;
  t489->_M_current = t491;
  __retval488 = t489;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t492 = __retval488;
  return t492;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v493) {
bb494:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this495;
  char** __retval496;
  this495 = v493;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t497 = this495;
  __retval496 = &t497->_M_current;
  char** t498 = __retval496;
  return t498;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v499) {
bb500:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this501;
  char** __retval502;
  this501 = v499;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t503 = this501;
  __retval502 = &t503->_M_current;
  char** t504 = __retval502;
  return t504;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v505, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v506) {
bb507:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs508;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs509;
  long __retval510;
  __lhs508 = v505;
  __rhs509 = v506;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t511 = __lhs508;
  char** r512 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t511);
  char* t513 = *r512;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t514 = __rhs509;
  char** r515 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t514);
  char* t516 = *r515;
  long diff517 = t513 - t516;
  __retval510 = diff517;
  long t518 = __retval510;
  return t518;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEN9__gnu_cxx17__normal_iteratorIPKcS4_EE
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v519, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v520) {
bb521:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this522;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __position523;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval524;
  unsigned long __pos525;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0526;
  char* ref_tmp1527;
  this522 = v519;
  __position523 = v520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = this522;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r529 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t528);
  ref_tmp0526 = r529;
  long r530 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__position523, &ref_tmp0526);
  unsigned long cast531 = (unsigned long)r530;
  __pos525 = cast531;
  unsigned long t532 = __pos525;
  unsigned long c533 = 1;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t528, t532, c533);
  char* r534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t528);
  unsigned long t535 = __pos525;
  char* ptr536 = &(r534)[t535];
  ref_tmp1527 = ptr536;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval524, &ref_tmp1527);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t537 = __retval524;
  return t537;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v538, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v539) {
bb540:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this541;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i542;
  this541 = v538;
  __i542 = v539;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t543 = this541;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t544 = __i542;
  char** r545 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t544);
  char* t546 = *r545;
  t543->_M_current = t546;
  return;
}

// function: _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v547, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v548) {
bb549:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs550;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs551;
  _Bool __retval552;
  __lhs550 = v547;
  __rhs551 = v548;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t553 = __lhs550;
  char** r554 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t553);
  char* t555 = *r554;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t556 = __rhs551;
  char** r557 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t556);
  char* t558 = *r557;
  _Bool c559 = ((t555 == t558)) ? 1 : 0;
  __retval552 = c559;
  _Bool t560 = __retval552;
  return t560;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v561, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v562) {
bb563:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs564;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs565;
  long __retval566;
  __lhs564 = v561;
  __rhs565 = v562;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t567 = __lhs564;
  char** r568 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t567);
  char* t569 = *r568;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t570 = __rhs565;
  char** r571 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t570);
  char* t572 = *r571;
  long diff573 = t569 - t572;
  __retval566 = diff573;
  long t574 = __retval566;
  return t574;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v575, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v576, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v577) {
bb578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this579;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __first580;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __last581;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval582;
  unsigned long __pos583;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0584;
  char* ref_tmp2585;
  this579 = v575;
  __first580 = v576;
  __last581 = v577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t586 = this579;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t586);
  ref_tmp0584 = r587;
  long r588 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__first580, &ref_tmp0584);
  unsigned long cast589 = (unsigned long)r588;
  __pos583 = cast589;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1590;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r591 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(t586);
    ref_tmp1590 = r591;
    _Bool r592 = _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__last581, &ref_tmp1590);
    if (r592) {
      unsigned long t593 = __pos583;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t586, t593);
    } else {
      unsigned long t594 = __pos583;
      long r595 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__last581, &__first580);
      unsigned long cast596 = (unsigned long)r595;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t586, t594, cast596);
    }
  char* r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t586);
  unsigned long t598 = __pos583;
  char* ptr599 = &(r597)[t598];
  ref_tmp2585 = ptr599;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval582, &ref_tmp2585);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t600 = __retval582;
  return t600;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v601) {
bb602:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this603;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval604;
  char* ref_tmp0605;
  this603 = v601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t606 = this603;
  char* r607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t606);
  unsigned long r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t606);
  char* ptr609 = &(r607)[r608];
  ref_tmp0605 = ptr609;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval604, &ref_tmp0605);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t610 = __retval604;
  return t610;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v611, long v612) {
bb613:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this614;
  long __n615;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval616;
  char* ref_tmp0617;
  this614 = v611;
  __n615 = v612;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t618 = this614;
  char* t619 = t618->_M_current;
  long t620 = __n615;
  long u621 = -t620;
  char* ptr622 = &(t619)[u621];
  ref_tmp0617 = ptr622;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval616, &ref_tmp0617);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t623 = __retval616;
  return t623;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v624) {
bb625:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this626;
  this626 = v624;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t627 = this626;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t627);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t627->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb628:
  int __retval629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str630;
  struct std__allocator_char_ ref_tmp0631;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it632;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1633;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp2634;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0635;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1636;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp2637;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp3638;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp4639;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp3640;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp5641;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp6642;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp4643;
  int c644 = 0;
  __retval629 = c644;
  char* cast645 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0631);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str630, cast645, &ref_tmp0631);
  {
    std__allocator_char____allocator(&ref_tmp0631);
  }
    __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it632);
    unsigned long c646 = 10;
    unsigned long c647 = 8;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r648 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_3(&str630, c646, c647);
    char* cast649 = (char*)&(_str_1);
    _Bool r650 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str630, cast649);
    _Bool u651 = !r650;
    if (u651) {
    } else {
      char* cast652 = (char*)&(_str_2);
      char* c653 = _str_3;
      unsigned int c654 = 22;
      char* cast655 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast652, c653, c654, cast655);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r656 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str630);
    struct std__basic_ostream_char__std__char_traits_char__* r657 = std__ostream__operator___std__ostream_____(r656, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r658 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str630);
    ref_tmp2634 = r658;
    long c659 = 9;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r660 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&ref_tmp2634, c659);
    ref_tmp1633 = r660;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r661 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it632, &ref_tmp1633);
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp0635, &it632);
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t662 = agg_tmp0635;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r663 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(&str630, t662);
    agg_tmp1636 = r663;
    char* cast664 = (char*)&(_str_4);
    _Bool r665 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str630, cast664);
    _Bool u666 = !r665;
    if (u666) {
    } else {
      char* cast667 = (char*)&(_str_5);
      char* c668 = _str_3;
      unsigned int c669 = 27;
      char* cast670 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast667, c668, c669, cast670);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r671 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str630);
    struct std__basic_ostream_char__std__char_traits_char__* r672 = std__ostream__operator___std__ostream_____(r671, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r673 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str630);
    ref_tmp4639 = r673;
    long c674 = 5;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r675 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&ref_tmp4639, c674);
    ref_tmp3638 = r675;
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp2637, &ref_tmp3638);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str630);
    ref_tmp6642 = r676;
    long c677 = 7;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r678 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp6642, c677);
    ref_tmp5641 = r678;
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp3640, &ref_tmp5641);
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t679 = agg_tmp2637;
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t680 = agg_tmp3640;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(&str630, t679, t680);
    agg_tmp4643 = r681;
    char* cast682 = (char*)&(_str_6);
    _Bool r683 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str630, cast682);
    _Bool u684 = !r683;
    if (u684) {
    } else {
      char* cast685 = (char*)&(_str_7);
      char* c686 = _str_3;
      unsigned int c687 = 31;
      char* cast688 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast685, c686, c687, cast688);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r689 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str630);
    struct std__basic_ostream_char__std__char_traits_char__* r690 = std__ostream__operator___std__ostream_____(r689, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c691 = 0;
    __retval629 = c691;
    int t692 = __retval629;
    int ret_val693 = t692;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str630);
    }
    return ret_val693;
  int t694 = __retval629;
  return t694;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v695) {
bb696:
  struct std____new_allocator_char_* this697;
  this697 = v695;
  struct std____new_allocator_char_* t698 = this697;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v699) {
bb700:
  char* __r701;
  char* __retval702;
  __r701 = v699;
  char* t703 = __r701;
  __retval702 = t703;
  char* t704 = __retval702;
  return t704;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v705) {
bb706:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this707;
  char* __retval708;
  this707 = v705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t709 = this707;
  char* cast710 = (char*)&(t709->field2._M_local_buf);
  char* r711 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast710);
  __retval708 = r711;
  char* t712 = __retval708;
  return t712;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v713, char* v714, struct std__allocator_char_* v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this717;
  char* __dat718;
  struct std__allocator_char_* __a719;
  this717 = v713;
  __dat718 = v714;
  __a719 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t720 = this717;
  struct std__allocator_char_* base721 = (struct std__allocator_char_*)((char *)t720 + 0);
  struct std__allocator_char_* t722 = __a719;
  std__allocator_char___allocator(base721, t722);
    char* t723 = __dat718;
    t720->_M_p = t723;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb724:
  _Bool __retval725;
    _Bool c726 = 0;
    __retval725 = c726;
    _Bool t727 = __retval725;
    return t727;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v728, char* v729) {
bb730:
  char* __c1731;
  char* __c2732;
  _Bool __retval733;
  __c1731 = v728;
  __c2732 = v729;
  char* t734 = __c1731;
  char t735 = *t734;
  int cast736 = (int)t735;
  char* t737 = __c2732;
  char t738 = *t737;
  int cast739 = (int)t738;
  _Bool c740 = ((cast736 == cast739)) ? 1 : 0;
  __retval733 = c740;
  _Bool t741 = __retval733;
  return t741;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v742) {
bb743:
  char* __p744;
  unsigned long __retval745;
  unsigned long __i746;
  __p744 = v742;
  unsigned long c747 = 0;
  __i746 = c747;
    char ref_tmp0748;
    while (1) {
      unsigned long t749 = __i746;
      char* t750 = __p744;
      char* ptr751 = &(t750)[t749];
      char c752 = 0;
      ref_tmp0748 = c752;
      _Bool r753 = __gnu_cxx__char_traits_char___eq(ptr751, &ref_tmp0748);
      _Bool u754 = !r753;
      if (!u754) break;
      unsigned long t755 = __i746;
      unsigned long u756 = t755 + 1;
      __i746 = u756;
    }
  unsigned long t757 = __i746;
  __retval745 = t757;
  unsigned long t758 = __retval745;
  return t758;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v759) {
bb760:
  char* __s761;
  unsigned long __retval762;
  __s761 = v759;
    _Bool r763 = std____is_constant_evaluated();
    if (r763) {
      char* t764 = __s761;
      unsigned long r765 = __gnu_cxx__char_traits_char___length(t764);
      __retval762 = r765;
      unsigned long t766 = __retval762;
      return t766;
    }
  char* t767 = __s761;
  unsigned long r768 = strlen(t767);
  __retval762 = r768;
  unsigned long t769 = __retval762;
  return t769;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v770, char* v771, struct std__random_access_iterator_tag v772) {
bb773:
  char* __first774;
  char* __last775;
  struct std__random_access_iterator_tag unnamed776;
  long __retval777;
  __first774 = v770;
  __last775 = v771;
  unnamed776 = v772;
  char* t778 = __last775;
  char* t779 = __first774;
  long diff780 = t778 - t779;
  __retval777 = diff780;
  long t781 = __retval777;
  return t781;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v782) {
bb783:
  char** unnamed784;
  struct std__random_access_iterator_tag __retval785;
  unnamed784 = v782;
  struct std__random_access_iterator_tag t786 = __retval785;
  return t786;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v787, char* v788) {
bb789:
  char* __first790;
  char* __last791;
  long __retval792;
  struct std__random_access_iterator_tag agg_tmp0793;
  __first790 = v787;
  __last791 = v788;
  char* t794 = __first790;
  char* t795 = __last791;
  struct std__random_access_iterator_tag r796 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first790);
  agg_tmp0793 = r796;
  struct std__random_access_iterator_tag t797 = agg_tmp0793;
  long r798 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t794, t795, t797);
  __retval792 = r798;
  long t799 = __retval792;
  return t799;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v800, char* v801) {
bb802:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this803;
  char* __p804;
  this803 = v800;
  __p804 = v801;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t805 = this803;
  char* t806 = __p804;
  t805->_M_dataplus._M_p = t806;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v807) {
bb808:
  struct std__allocator_char_* __a809;
  unsigned long __retval810;
  __a809 = v807;
  unsigned long c811 = -1;
  unsigned long c812 = 1;
  unsigned long b813 = c811 / c812;
  __retval810 = b813;
  unsigned long t814 = __retval810;
  return t814;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v815) {
bb816:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this817;
  struct std__allocator_char_* __retval818;
  this817 = v815;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t819 = this817;
  struct std__allocator_char_* base820 = (struct std__allocator_char_*)((char *)&(t819->_M_dataplus) + 0);
  __retval818 = base820;
  struct std__allocator_char_* t821 = __retval818;
  return t821;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v822, unsigned long* v823) {
bb824:
  unsigned long* __a825;
  unsigned long* __b826;
  unsigned long* __retval827;
  __a825 = v822;
  __b826 = v823;
    unsigned long* t828 = __b826;
    unsigned long t829 = *t828;
    unsigned long* t830 = __a825;
    unsigned long t831 = *t830;
    _Bool c832 = ((t829 < t831)) ? 1 : 0;
    if (c832) {
      unsigned long* t833 = __b826;
      __retval827 = t833;
      unsigned long* t834 = __retval827;
      return t834;
    }
  unsigned long* t835 = __a825;
  __retval827 = t835;
  unsigned long* t836 = __retval827;
  return t836;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v837) {
bb838:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this839;
  unsigned long __retval840;
  unsigned long __diffmax841;
  unsigned long __allocmax842;
  this839 = v837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = this839;
  unsigned long c844 = 9223372036854775807;
  __diffmax841 = c844;
  struct std__allocator_char_* r845 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t843);
  unsigned long r846 = std__allocator_traits_std__allocator_char_____max_size(r845);
  __allocmax842 = r846;
  unsigned long* r847 = unsigned_long_const__std__min_unsigned_long_(&__diffmax841, &__allocmax842);
  unsigned long t848 = *r847;
  unsigned long c849 = 1;
  unsigned long b850 = t848 - c849;
  __retval840 = b850;
  unsigned long t851 = __retval840;
  return t851;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v852) {
bb853:
  struct std____new_allocator_char_* this854;
  unsigned long __retval855;
  this854 = v852;
  struct std____new_allocator_char_* t856 = this854;
  unsigned long c857 = 9223372036854775807;
  unsigned long c858 = 1;
  unsigned long b859 = c857 / c858;
  __retval855 = b859;
  unsigned long t860 = __retval855;
  return t860;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v861, unsigned long v862, void* v863) {
bb864:
  struct std____new_allocator_char_* this865;
  unsigned long __n866;
  void* unnamed867;
  char* __retval868;
  this865 = v861;
  __n866 = v862;
  unnamed867 = v863;
  struct std____new_allocator_char_* t869 = this865;
    unsigned long t870 = __n866;
    unsigned long r871 = std____new_allocator_char____M_max_size___const(t869);
    _Bool c872 = ((t870 > r871)) ? 1 : 0;
    if (c872) {
        unsigned long t873 = __n866;
        unsigned long c874 = -1;
        unsigned long c875 = 1;
        unsigned long b876 = c874 / c875;
        _Bool c877 = ((t873 > b876)) ? 1 : 0;
        if (c877) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c878 = 1;
    unsigned long c879 = 16;
    _Bool c880 = ((c878 > c879)) ? 1 : 0;
    if (c880) {
      unsigned long __al881;
      unsigned long c882 = 1;
      __al881 = c882;
      unsigned long t883 = __n866;
      unsigned long c884 = 1;
      unsigned long b885 = t883 * c884;
      unsigned long t886 = __al881;
      void* r887 = operator_new_2(b885, t886);
      char* cast888 = (char*)r887;
      __retval868 = cast888;
      char* t889 = __retval868;
      return t889;
    }
  unsigned long t890 = __n866;
  unsigned long c891 = 1;
  unsigned long b892 = t890 * c891;
  void* r893 = operator_new(b892);
  char* cast894 = (char*)r893;
  __retval868 = cast894;
  char* t895 = __retval868;
  return t895;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v896, unsigned long v897) {
bb898:
  struct std__allocator_char_* this899;
  unsigned long __n900;
  char* __retval901;
  this899 = v896;
  __n900 = v897;
  struct std__allocator_char_* t902 = this899;
    _Bool r903 = std____is_constant_evaluated();
    if (r903) {
        unsigned long t904 = __n900;
        unsigned long c905 = 1;
        unsigned long ovr906;
        _Bool ovf907 = __builtin_mul_overflow(t904, c905, &ovr906);
        __n900 = ovr906;
        if (ovf907) {
          std____throw_bad_array_new_length();
        }
      unsigned long t908 = __n900;
      void* r909 = operator_new(t908);
      char* cast910 = (char*)r909;
      __retval901 = cast910;
      char* t911 = __retval901;
      return t911;
    }
  struct std____new_allocator_char_* base912 = (struct std____new_allocator_char_*)((char *)t902 + 0);
  unsigned long t913 = __n900;
  void* c914 = ((void*)0);
  char* r915 = std____new_allocator_char___allocate(base912, t913, c914);
  __retval901 = r915;
  char* t916 = __retval901;
  return t916;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v917, unsigned long v918) {
bb919:
  struct std__allocator_char_* __a920;
  unsigned long __n921;
  char* __retval922;
  __a920 = v917;
  __n921 = v918;
  struct std__allocator_char_* t923 = __a920;
  unsigned long t924 = __n921;
  char* r925 = std__allocator_char___allocate(t923, t924);
  __retval922 = r925;
  char* t926 = __retval922;
  return t926;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v927, unsigned long v928) {
bb929:
  struct std__allocator_char_* __a930;
  unsigned long __n931;
  char* __retval932;
  char* __p933;
  __a930 = v927;
  __n931 = v928;
  struct std__allocator_char_* t934 = __a930;
  unsigned long t935 = __n931;
  char* r936 = std__allocator_traits_std__allocator_char_____allocate(t934, t935);
  __p933 = r936;
  char* t937 = __p933;
  __retval932 = t937;
  char* t938 = __retval932;
  return t938;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v939) {
bb940:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this941;
  struct std__allocator_char_* __retval942;
  this941 = v939;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t943 = this941;
  struct std__allocator_char_* base944 = (struct std__allocator_char_*)((char *)&(t943->_M_dataplus) + 0);
  __retval942 = base944;
  struct std__allocator_char_* t945 = __retval942;
  return t945;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v946, unsigned long* v947, unsigned long v948) {
bb949:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this950;
  unsigned long* __capacity951;
  unsigned long __old_capacity952;
  char* __retval953;
  this950 = v946;
  __capacity951 = v947;
  __old_capacity952 = v948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t954 = this950;
    unsigned long* t955 = __capacity951;
    unsigned long t956 = *t955;
    unsigned long r957 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t954);
    _Bool c958 = ((t956 > r957)) ? 1 : 0;
    if (c958) {
      char* cast959 = (char*)&(_str_9);
      std____throw_length_error(cast959);
    }
    unsigned long* t960 = __capacity951;
    unsigned long t961 = *t960;
    unsigned long t962 = __old_capacity952;
    _Bool c963 = ((t961 > t962)) ? 1 : 0;
    _Bool ternary964;
    if (c963) {
      unsigned long* t965 = __capacity951;
      unsigned long t966 = *t965;
      unsigned long c967 = 2;
      unsigned long t968 = __old_capacity952;
      unsigned long b969 = c967 * t968;
      _Bool c970 = ((t966 < b969)) ? 1 : 0;
      ternary964 = (_Bool)c970;
    } else {
      _Bool c971 = 0;
      ternary964 = (_Bool)c971;
    }
    if (ternary964) {
      unsigned long c972 = 2;
      unsigned long t973 = __old_capacity952;
      unsigned long b974 = c972 * t973;
      unsigned long* t975 = __capacity951;
      *t975 = b974;
        unsigned long* t976 = __capacity951;
        unsigned long t977 = *t976;
        unsigned long r978 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t954);
        _Bool c979 = ((t977 > r978)) ? 1 : 0;
        if (c979) {
          unsigned long r980 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t954);
          unsigned long* t981 = __capacity951;
          *t981 = r980;
        }
    }
  struct std__allocator_char_* r982 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t954);
  unsigned long* t983 = __capacity951;
  unsigned long t984 = *t983;
  unsigned long c985 = 1;
  unsigned long b986 = t984 + c985;
  char* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r982, b986);
  __retval953 = r987;
  char* t988 = __retval953;
  return t988;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v989, unsigned long v990) {
bb991:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this992;
  unsigned long __capacity993;
  this992 = v989;
  __capacity993 = v990;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t994 = this992;
  unsigned long t995 = __capacity993;
  t994->field2._M_allocated_capacity = t995;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb996:
  _Bool __retval997;
    _Bool c998 = 0;
    __retval997 = c998;
    _Bool t999 = __retval997;
    return t999;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1000) {
bb1001:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1002;
  this1002 = v1000;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1003 = this1002;
    _Bool r1004 = std__is_constant_evaluated();
    if (r1004) {
        unsigned long __i1005;
        unsigned long c1006 = 0;
        __i1005 = c1006;
        while (1) {
          unsigned long t1008 = __i1005;
          unsigned long c1009 = 15;
          _Bool c1010 = ((t1008 <= c1009)) ? 1 : 0;
          if (!c1010) break;
          char c1011 = 0;
          unsigned long t1012 = __i1005;
          t1003->field2._M_local_buf[t1012] = c1011;
        for_step1007: ;
          unsigned long t1013 = __i1005;
          unsigned long u1014 = t1013 + 1;
          __i1005 = u1014;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1015, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1016) {
bb1017:
  struct _Guard* this1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1019;
  this1018 = v1015;
  __s1019 = v1016;
  struct _Guard* t1020 = this1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1021 = __s1019;
  t1020->_M_guarded = t1021;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1022, char* v1023) {
bb1024:
  char* __location1025;
  char* __args1026;
  char* __retval1027;
  void* __loc1028;
  __location1025 = v1022;
  __args1026 = v1023;
  char* t1029 = __location1025;
  void* cast1030 = (void*)t1029;
  __loc1028 = cast1030;
    void* t1031 = __loc1028;
    char* cast1032 = (char*)t1031;
    char* t1033 = __args1026;
    char t1034 = *t1033;
    *cast1032 = t1034;
    __retval1027 = cast1032;
    char* t1035 = __retval1027;
    return t1035;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1036, char* v1037) {
bb1038:
  char* __c11039;
  char* __c21040;
  __c11039 = v1036;
  __c21040 = v1037;
    _Bool r1041 = std____is_constant_evaluated();
    if (r1041) {
      char* t1042 = __c11039;
      char* t1043 = __c21040;
      char* r1044 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1042, t1043);
    } else {
      char* t1045 = __c21040;
      char t1046 = *t1045;
      char* t1047 = __c11039;
      *t1047 = t1046;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1048, char* v1049, unsigned long v1050) {
bb1051:
  char* __s11052;
  char* __s21053;
  unsigned long __n1054;
  char* __retval1055;
  __s11052 = v1048;
  __s21053 = v1049;
  __n1054 = v1050;
    unsigned long t1056 = __n1054;
    unsigned long c1057 = 0;
    _Bool c1058 = ((t1056 == c1057)) ? 1 : 0;
    if (c1058) {
      char* t1059 = __s11052;
      __retval1055 = t1059;
      char* t1060 = __retval1055;
      return t1060;
    }
    _Bool r1061 = std____is_constant_evaluated();
    if (r1061) {
        unsigned long __i1062;
        unsigned long c1063 = 0;
        __i1062 = c1063;
        while (1) {
          unsigned long t1065 = __i1062;
          unsigned long t1066 = __n1054;
          _Bool c1067 = ((t1065 < t1066)) ? 1 : 0;
          if (!c1067) break;
          char* t1068 = __s11052;
          unsigned long t1069 = __i1062;
          char* ptr1070 = &(t1068)[t1069];
          unsigned long t1071 = __i1062;
          char* t1072 = __s21053;
          char* ptr1073 = &(t1072)[t1071];
          char* r1074 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1070, ptr1073);
        for_step1064: ;
          unsigned long t1075 = __i1062;
          unsigned long u1076 = t1075 + 1;
          __i1062 = u1076;
        }
      char* t1077 = __s11052;
      __retval1055 = t1077;
      char* t1078 = __retval1055;
      return t1078;
    }
  char* t1079 = __s11052;
  void* cast1080 = (void*)t1079;
  char* t1081 = __s21053;
  void* cast1082 = (void*)t1081;
  unsigned long t1083 = __n1054;
  unsigned long c1084 = 1;
  unsigned long b1085 = t1083 * c1084;
  void* r1086 = memcpy(cast1080, cast1082, b1085);
  char* t1087 = __s11052;
  __retval1055 = t1087;
  char* t1088 = __retval1055;
  return t1088;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1089, char* v1090, unsigned long v1091) {
bb1092:
  char* __s11093;
  char* __s21094;
  unsigned long __n1095;
  char* __retval1096;
  __s11093 = v1089;
  __s21094 = v1090;
  __n1095 = v1091;
    unsigned long t1097 = __n1095;
    unsigned long c1098 = 0;
    _Bool c1099 = ((t1097 == c1098)) ? 1 : 0;
    if (c1099) {
      char* t1100 = __s11093;
      __retval1096 = t1100;
      char* t1101 = __retval1096;
      return t1101;
    }
    _Bool r1102 = std____is_constant_evaluated();
    if (r1102) {
      char* t1103 = __s11093;
      char* t1104 = __s21094;
      unsigned long t1105 = __n1095;
      char* r1106 = __gnu_cxx__char_traits_char___copy(t1103, t1104, t1105);
      __retval1096 = r1106;
      char* t1107 = __retval1096;
      return t1107;
    }
  char* t1108 = __s11093;
  void* cast1109 = (void*)t1108;
  char* t1110 = __s21094;
  void* cast1111 = (void*)t1110;
  unsigned long t1112 = __n1095;
  void* r1113 = memcpy(cast1109, cast1111, t1112);
  char* cast1114 = (char*)r1113;
  __retval1096 = cast1114;
  char* t1115 = __retval1096;
  return t1115;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1116, char* v1117, unsigned long v1118) {
bb1119:
  char* __d1120;
  char* __s1121;
  unsigned long __n1122;
  __d1120 = v1116;
  __s1121 = v1117;
  __n1122 = v1118;
    unsigned long t1123 = __n1122;
    unsigned long c1124 = 1;
    _Bool c1125 = ((t1123 == c1124)) ? 1 : 0;
    if (c1125) {
      char* t1126 = __d1120;
      char* t1127 = __s1121;
      std__char_traits_char___assign(t1126, t1127);
    } else {
      char* t1128 = __d1120;
      char* t1129 = __s1121;
      unsigned long t1130 = __n1122;
      char* r1131 = std__char_traits_char___copy(t1128, t1129, t1130);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1132) {
bb1133:
  char* __it1134;
  char* __retval1135;
  __it1134 = v1132;
  char* t1136 = __it1134;
  __retval1135 = t1136;
  char* t1137 = __retval1135;
  return t1137;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1138, char* v1139, char* v1140) {
bb1141:
  char* __p1142;
  char* __k11143;
  char* __k21144;
  __p1142 = v1138;
  __k11143 = v1139;
  __k21144 = v1140;
    char* t1145 = __p1142;
    char* t1146 = __k11143;
    char* r1147 = char_const__std____niter_base_char_const__(t1146);
    char* t1148 = __k21144;
    char* t1149 = __k11143;
    long diff1150 = t1148 - t1149;
    unsigned long cast1151 = (unsigned long)diff1150;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1145, r1147, cast1151);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152) {
bb1153:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1154;
  char* __retval1155;
  this1154 = v1152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1156 = this1154;
  char* t1157 = t1156->_M_dataplus._M_p;
  __retval1155 = t1157;
  char* t1158 = __retval1155;
  return t1158;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1159, unsigned long v1160) {
bb1161:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1162;
  unsigned long __length1163;
  this1162 = v1159;
  __length1163 = v1160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1164 = this1162;
  unsigned long t1165 = __length1163;
  t1164->_M_string_length = t1165;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1166, unsigned long v1167) {
bb1168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1169;
  unsigned long __n1170;
  char ref_tmp01171;
  this1169 = v1166;
  __n1170 = v1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1172 = this1169;
  unsigned long t1173 = __n1170;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1172, t1173);
  unsigned long t1174 = __n1170;
  char* r1175 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1172);
  char* ptr1176 = &(r1175)[t1174];
  char c1177 = 0;
  ref_tmp01171 = c1177;
  std__char_traits_char___assign(ptr1176, &ref_tmp01171);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1178) {
bb1179:
  struct _Guard* this1180;
  this1180 = v1178;
  struct _Guard* t1181 = this1180;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1182 = t1181->_M_guarded;
    _Bool cast1183 = (_Bool)t1182;
    if (cast1183) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1184 = t1181->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1184);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1185, char* v1186, char* v1187, struct std__forward_iterator_tag v1188) {
bb1189:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1190;
  char* __beg1191;
  char* __end1192;
  struct std__forward_iterator_tag unnamed1193;
  unsigned long __dnew1194;
  struct _Guard __guard1195;
  this1190 = v1185;
  __beg1191 = v1186;
  __end1192 = v1187;
  unnamed1193 = v1188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1196 = this1190;
  char* t1197 = __beg1191;
  char* t1198 = __end1192;
  long r1199 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1197, t1198);
  unsigned long cast1200 = (unsigned long)r1199;
  __dnew1194 = cast1200;
    unsigned long t1201 = __dnew1194;
    unsigned long c1202 = 15;
    _Bool c1203 = ((t1201 > c1202)) ? 1 : 0;
    if (c1203) {
      unsigned long c1204 = 0;
      char* r1205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1196, &__dnew1194, c1204);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1196, r1205);
      unsigned long t1206 = __dnew1194;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1196, t1206);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1196);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1195, t1196);
    char* r1207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1196);
    char* t1208 = __beg1191;
    char* t1209 = __end1192;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1207, t1208, t1209);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1210 = ((void*)0);
    __guard1195._M_guarded = c1210;
    unsigned long t1211 = __dnew1194;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1196, t1211);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1195);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1212) {
bb1213:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1214;
  this1214 = v1212;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1215 = this1214;
  {
    struct std__allocator_char_* base1216 = (struct std__allocator_char_*)((char *)t1215 + 0);
    std__allocator_char____allocator(base1216);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1217, struct std____new_allocator_char_* v1218) {
bb1219:
  struct std____new_allocator_char_* this1220;
  struct std____new_allocator_char_* unnamed1221;
  this1220 = v1217;
  unnamed1221 = v1218;
  struct std____new_allocator_char_* t1222 = this1220;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1223, struct std__allocator_char_* v1224) {
bb1225:
  struct std__allocator_char_* this1226;
  struct std__allocator_char_* __a1227;
  this1226 = v1223;
  __a1227 = v1224;
  struct std__allocator_char_* t1228 = this1226;
  struct std____new_allocator_char_* base1229 = (struct std____new_allocator_char_*)((char *)t1228 + 0);
  struct std__allocator_char_* t1230 = __a1227;
  struct std____new_allocator_char_* base1231 = (struct std____new_allocator_char_*)((char *)t1230 + 0);
  std____new_allocator_char_____new_allocator(base1229, base1231);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1232) {
bb1233:
  char* __r1234;
  char* __retval1235;
  __r1234 = v1232;
  char* t1236 = __r1234;
  __retval1235 = t1236;
  char* t1237 = __retval1235;
  return t1237;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1238) {
bb1239:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1240;
  char* __retval1241;
  this1240 = v1238;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1242 = this1240;
  char* cast1243 = (char*)&(t1242->field2._M_local_buf);
  char* r1244 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1243);
  __retval1241 = r1244;
  char* t1245 = __retval1241;
  return t1245;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1246) {
bb1247:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1248;
  _Bool __retval1249;
  this1248 = v1246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1250 = this1248;
    char* r1251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1250);
    char* r1252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1250);
    _Bool c1253 = ((r1251 == r1252)) ? 1 : 0;
    if (c1253) {
        unsigned long t1254 = t1250->_M_string_length;
        unsigned long c1255 = 15;
        _Bool c1256 = ((t1254 > c1255)) ? 1 : 0;
        if (c1256) {
          __builtin_unreachable();
        }
      _Bool c1257 = 1;
      __retval1249 = c1257;
      _Bool t1258 = __retval1249;
      return t1258;
    }
  _Bool c1259 = 0;
  __retval1249 = c1259;
  _Bool t1260 = __retval1249;
  return t1260;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1261, char* v1262, unsigned long v1263) {
bb1264:
  struct std____new_allocator_char_* this1265;
  char* __p1266;
  unsigned long __n1267;
  this1265 = v1261;
  __p1266 = v1262;
  __n1267 = v1263;
  struct std____new_allocator_char_* t1268 = this1265;
    unsigned long c1269 = 1;
    unsigned long c1270 = 16;
    _Bool c1271 = ((c1269 > c1270)) ? 1 : 0;
    if (c1271) {
      char* t1272 = __p1266;
      void* cast1273 = (void*)t1272;
      unsigned long t1274 = __n1267;
      unsigned long c1275 = 1;
      unsigned long b1276 = t1274 * c1275;
      unsigned long c1277 = 1;
      operator_delete_3(cast1273, b1276, c1277);
      return;
    }
  char* t1278 = __p1266;
  void* cast1279 = (void*)t1278;
  unsigned long t1280 = __n1267;
  unsigned long c1281 = 1;
  unsigned long b1282 = t1280 * c1281;
  operator_delete_2(cast1279, b1282);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1283, char* v1284, unsigned long v1285) {
bb1286:
  struct std__allocator_char_* this1287;
  char* __p1288;
  unsigned long __n1289;
  this1287 = v1283;
  __p1288 = v1284;
  __n1289 = v1285;
  struct std__allocator_char_* t1290 = this1287;
    _Bool r1291 = std____is_constant_evaluated();
    if (r1291) {
      char* t1292 = __p1288;
      void* cast1293 = (void*)t1292;
      operator_delete(cast1293);
      return;
    }
  struct std____new_allocator_char_* base1294 = (struct std____new_allocator_char_*)((char *)t1290 + 0);
  char* t1295 = __p1288;
  unsigned long t1296 = __n1289;
  std____new_allocator_char___deallocate(base1294, t1295, t1296);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1297, char* v1298, unsigned long v1299) {
bb1300:
  struct std__allocator_char_* __a1301;
  char* __p1302;
  unsigned long __n1303;
  __a1301 = v1297;
  __p1302 = v1298;
  __n1303 = v1299;
  struct std__allocator_char_* t1304 = __a1301;
  char* t1305 = __p1302;
  unsigned long t1306 = __n1303;
  std__allocator_char___deallocate(t1304, t1305, t1306);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1307, unsigned long v1308) {
bb1309:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1310;
  unsigned long __size1311;
  this1310 = v1307;
  __size1311 = v1308;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1312 = this1310;
  struct std__allocator_char_* r1313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1312);
  char* r1314 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1312);
  unsigned long t1315 = __size1311;
  unsigned long c1316 = 1;
  unsigned long b1317 = t1315 + c1316;
  std__allocator_traits_std__allocator_char_____deallocate(r1313, r1314, b1317);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1318) {
bb1319:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1320;
  this1320 = v1318;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1321 = this1320;
    _Bool r1322 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1321);
    _Bool u1323 = !r1322;
    if (u1323) {
      unsigned long t1324 = t1321->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1321, t1324);
    }
  return;
}

