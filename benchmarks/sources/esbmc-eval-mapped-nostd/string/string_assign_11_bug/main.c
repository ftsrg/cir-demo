extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
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

char _str[43] = "The quick brown fox jumps over a lazy dog.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "pangrams are cool";
char _str_2[9] = "c-string";
char _str_3[11] = "**********";
char _str_4[20] = "str != \"**********\"";
char _str_5[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_assign_11_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_8[21] = "basic_string::assign";
char _str_9[25] = "basic_string::_M_replace";
char _str_10[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_11[29] = "basic_string::_M_replace_aux";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
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
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std__char_traits_char___assign_2(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
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
bb1: ;
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
bb8: ;
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15: ;
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
        char* cast27 = (char*)&(_str_6);
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
bb36: ;
  struct std__allocator_char_* this37;
  this37 = v35;
  struct std__allocator_char_* t38 = this37;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb39: ;
  _Bool __retval40;
  _Bool t41 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval40 = t41;
  _Bool t42 = __retval40;
  return t42;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb43: ;
  _Bool __retval44;
  _Bool t45 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval44 = t45;
  _Bool t46 = __retval44;
  return t46;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49: ;
  struct std__allocator_char_* unnamed50;
  struct std__allocator_char_* unnamed51;
  _Bool __retval52;
  unnamed50 = v47;
  unnamed51 = v48;
  _Bool c53 = 1;
  __retval52 = c53;
  _Bool t54 = __retval52;
  return t54;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  unsigned long t61 = t60->_M_string_length;
  __sz59 = t61;
    unsigned long t62 = __sz59;
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
    _Bool c64 = ((t62 > r63)) ? 1 : 0;
    if (c64) {
      __builtin_unreachable();
    }
  unsigned long t65 = __sz59;
  __retval58 = t65;
  unsigned long t66 = __retval58;
  return t66;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  char* __retval70;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this69;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t71);
  char* r72 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t71);
  __retval70 = r72;
  char* t73 = __retval70;
  return t73;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v74, struct std__allocator_char_* v75) {
bb76: ;
  struct std__allocator_char_* this77;
  struct std__allocator_char_* __a78;
  this77 = v74;
  __a78 = v75;
  struct std__allocator_char_* t79 = this77;
  struct std____new_allocator_char_* base80 = (struct std____new_allocator_char_*)((char *)t79 + 0);
  struct std__allocator_char_* t81 = __a78;
  struct std____new_allocator_char_* base82 = (struct std____new_allocator_char_*)((char *)t81 + 0);
  std____new_allocator_char_____new_allocator(base80, base82);
  return;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v83, struct std__allocator_char_* v84) {
bb85: ;
  struct std__allocator_char_* __one86;
  struct std__allocator_char_* __two87;
  __one86 = v83;
  __two87 = v84;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v88) {
bb89: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this90;
  unsigned long __retval91;
  this90 = v88;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t92 = this90;
  unsigned long r93 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t92);
  __retval91 = r93;
  unsigned long t94 = __retval91;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95) {
bb96: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this97;
  unsigned long __retval98;
  unsigned long __sz99;
  this97 = v95;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t100 = this97;
  _Bool r101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t100);
  unsigned long ternary102;
  if (r101) {
    unsigned long c103 = 15;
    ternary102 = (unsigned long)c103;
  } else {
    unsigned long t104 = t100->field2._M_allocated_capacity;
    ternary102 = (unsigned long)t104;
  }
  __sz99 = ternary102;
    unsigned long t105 = __sz99;
    unsigned long c106 = 15;
    _Bool c107 = ((t105 < c106)) ? 1 : 0;
    _Bool ternary108;
    if (c107) {
      _Bool c109 = 1;
      ternary108 = (_Bool)c109;
    } else {
      unsigned long t110 = __sz99;
      unsigned long r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t100);
      _Bool c112 = ((t110 > r111)) ? 1 : 0;
      ternary108 = (_Bool)c112;
    }
    if (ternary108) {
      __builtin_unreachable();
    }
  unsigned long t113 = __sz99;
  __retval98 = t113;
  unsigned long t114 = __retval98;
  return t114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v115, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v116) {
bb117: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str119;
  this118 = v115;
  __str119 = v116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t120 = this118;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t121 = __str119;
    _Bool c122 = ((t120 != t121)) ? 1 : 0;
    if (c122) {
      unsigned long __rsize123;
      unsigned long __capacity124;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t125 = __str119;
      unsigned long r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t125);
      __rsize123 = r126;
      unsigned long r127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t120);
      __capacity124 = r127;
        unsigned long t128 = __rsize123;
        unsigned long t129 = __capacity124;
        _Bool c130 = ((t128 > t129)) ? 1 : 0;
        if (c130) {
          unsigned long __new_capacity131;
          char* __tmp132;
          unsigned long t133 = __rsize123;
          __new_capacity131 = t133;
          unsigned long t134 = __capacity124;
          char* r135 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t120, &__new_capacity131, t134);
          __tmp132 = r135;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t120);
          char* t136 = __tmp132;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t120, t136);
          unsigned long t137 = __new_capacity131;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t120, t137);
        }
        unsigned long t138 = __rsize123;
        _Bool cast139 = (_Bool)t138;
        if (cast139) {
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t120);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t141 = __str119;
          char* r142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t141);
          unsigned long t143 = __rsize123;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r140, r142, t143);
        }
      unsigned long t144 = __rsize123;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t120, t144);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v146) {
bb147: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval150;
  this148 = v145;
  __str149 = v146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = this148;
    _Bool r152 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r152) {
        _Bool r153 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u154 = !r153;
        _Bool ternary155;
        if (u154) {
          _Bool r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t151);
          _Bool u157 = !r156;
          ternary155 = (_Bool)u157;
        } else {
          _Bool c158 = 0;
          ternary155 = (_Bool)c158;
        }
        _Bool ternary159;
        if (ternary155) {
          struct std__allocator_char_* r160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t161 = __str149;
          struct std__allocator_char_* r162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t161);
          _Bool r163 = std__operator__(r160, r162);
          _Bool u164 = !r163;
          ternary159 = (_Bool)u164;
        } else {
          _Bool c165 = 0;
          ternary159 = (_Bool)c165;
        }
        if (ternary159) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t166 = __str149;
            unsigned long r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t166);
            unsigned long c168 = 15;
            _Bool c169 = ((r167 <= c168)) ? 1 : 0;
            if (c169) {
              unsigned long t170 = t151->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t151, t170);
              char* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t151);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t151, r171);
              unsigned long c172 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, c172);
            } else {
              unsigned long __len173;
              struct std__allocator_char_ __alloc174;
              char* __ptr175;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str149;
              unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
              __len173 = r177;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = __str149;
              struct std__allocator_char_* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t178);
              std__allocator_char___allocator(&__alloc174, r179);
              unsigned long t180 = __len173;
              unsigned long c181 = 1;
              unsigned long b182 = t180 + c181;
              char* r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc174, b182);
              __ptr175 = r183;
              unsigned long t184 = t151->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t151, t184);
              char* t185 = __ptr175;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t151, t185);
              unsigned long t186 = __len173;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t151, t186);
              unsigned long t187 = __len173;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, t187);
            }
        }
      struct std__allocator_char_* r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = __str149;
      struct std__allocator_char_* r190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t189);
      void_std____alloc_on_copy_std__allocator_char___(r188, r190);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t191 = __str149;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t151, t191);
  __retval150 = t151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t192 = __retval150;
  return t192;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v193, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v194) {
bb195: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __os196 = v193;
  __str197 = v194;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __os196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t200 = __str197;
  char* r201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t200);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t202 = __str197;
  unsigned long r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t202);
  long cast204 = (long)r203;
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t199, r201, cast204);
  __retval198 = r205;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __retval198;
  return t206;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v207, void* v208) {
bb209: ;
  struct std__basic_ostream_char__std__char_traits_char__* this210;
  void* __pf211;
  struct std__basic_ostream_char__std__char_traits_char__* __retval212;
  this210 = v207;
  __pf211 = v208;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = this210;
  void* t214 = __pf211;
  struct std__basic_ostream_char__std__char_traits_char__* r215 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t214)(t213);
  __retval212 = r215;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __retval212;
  return t216;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v217) {
bb218: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os219;
  struct std__basic_ostream_char__std__char_traits_char__* __retval220;
  __os219 = v217;
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __os219;
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__flush(t221);
  __retval220 = r222;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = __retval220;
  return t223;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v224) {
bb225: ;
  struct std__ctype_char_* __f226;
  struct std__ctype_char_* __retval227;
  __f226 = v224;
    struct std__ctype_char_* t228 = __f226;
    _Bool cast229 = (_Bool)t228;
    _Bool u230 = !cast229;
    if (u230) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t231 = __f226;
  __retval227 = t231;
  struct std__ctype_char_* t232 = __retval227;
  return t232;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v233, char v234) {
bb235: ;
  struct std__ctype_char_* this236;
  char __c237;
  char __retval238;
  this236 = v233;
  __c237 = v234;
  struct std__ctype_char_* t239 = this236;
    char t240 = t239->_M_widen_ok;
    _Bool cast241 = (_Bool)t240;
    if (cast241) {
      char t242 = __c237;
      unsigned char cast243 = (unsigned char)t242;
      unsigned long cast244 = (unsigned long)cast243;
      char t245 = t239->_M_widen[cast244];
      __retval238 = t245;
      char t246 = __retval238;
      return t246;
    }
  std__ctype_char____M_widen_init___const(t239);
  char t247 = __c237;
  void** v248 = (void**)t239;
  void* v249 = *((void**)v248);
  char vcall252 = (char)__VERIFIER_virtual_call_char_char(t239, 6, t247);
  __retval238 = vcall252;
  char t253 = __retval238;
  return t253;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v254, char v255) {
bb256: ;
  struct std__basic_ios_char__std__char_traits_char__* this257;
  char __c258;
  char __retval259;
  this257 = v254;
  __c258 = v255;
  struct std__basic_ios_char__std__char_traits_char__* t260 = this257;
  struct std__ctype_char_* t261 = t260->_M_ctype;
  struct std__ctype_char_* r262 = std__ctype_char__const__std____check_facet_std__ctype_char___(t261);
  char t263 = __c258;
  char r264 = std__ctype_char___widen_char__const(r262, t263);
  __retval259 = r264;
  char t265 = __retval259;
  return t265;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v266) {
bb267: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os268;
  struct std__basic_ostream_char__std__char_traits_char__* __retval269;
  __os268 = v266;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os268;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __os268;
  void** v272 = (void**)t271;
  void* v273 = *((void**)v272);
  unsigned char* cast274 = (unsigned char*)v273;
  long c275 = -24;
  unsigned char* ptr276 = &(cast274)[c275];
  long* cast277 = (long*)ptr276;
  long t278 = *cast277;
  unsigned char* cast279 = (unsigned char*)t271;
  unsigned char* ptr280 = &(cast279)[t278];
  struct std__basic_ostream_char__std__char_traits_char__* cast281 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr280;
  struct std__basic_ios_char__std__char_traits_char__* cast282 = (struct std__basic_ios_char__std__char_traits_char__*)cast281;
  char c283 = 10;
  char r284 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast282, c283);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__ostream__put(t270, r284);
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r285);
  __retval269 = r286;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __retval269;
  return t287;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v288, unsigned long v289, unsigned long v290, char* v291) {
bb292: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this293;
  unsigned long __n1294;
  unsigned long __n2295;
  char* __s296;
  this293 = v288;
  __n1294 = v289;
  __n2295 = v290;
  __s296 = v291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t297 = this293;
    unsigned long r298 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t297);
    unsigned long r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t297);
    unsigned long t300 = __n1294;
    unsigned long b301 = r299 - t300;
    unsigned long b302 = r298 - b301;
    unsigned long t303 = __n2295;
    _Bool c304 = ((b302 < t303)) ? 1 : 0;
    if (c304) {
      char* t305 = __s296;
      std____throw_length_error(t305);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v306, char* v307, char* v308) {
bb309: ;
  struct std__less_const_char___* this310;
  char* __x311;
  char* __y312;
  _Bool __retval313;
  this310 = v306;
  __x311 = v307;
  __y312 = v308;
  struct std__less_const_char___* t314 = this310;
    _Bool r315 = std____is_constant_evaluated();
    if (r315) {
      char* t316 = __x311;
      char* t317 = __y312;
      _Bool c318 = ((t316 < t317)) ? 1 : 0;
      __retval313 = c318;
      _Bool t319 = __retval313;
      return t319;
    }
  char* t320 = __x311;
  unsigned long cast321 = (unsigned long)t320;
  char* t322 = __y312;
  unsigned long cast323 = (unsigned long)t322;
  _Bool c324 = ((cast321 < cast323)) ? 1 : 0;
  __retval313 = c324;
  _Bool t325 = __retval313;
  return t325;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v326, char* v327) {
bb328: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  char* __s330;
  _Bool __retval331;
  struct std__less_const_char___ ref_tmp0332;
  this329 = v326;
  __s330 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t333 = this329;
  char* t334 = __s330;
  char* r335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t333);
  _Bool r336 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0332, t334, r335);
  _Bool ternary337;
  if (r336) {
    _Bool c338 = 1;
    ternary337 = (_Bool)c338;
  } else {
    struct std__less_const_char___ ref_tmp1339;
    char* r340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t333);
    unsigned long r341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t333);
    char* ptr342 = &(r340)[r341];
    char* t343 = __s330;
    _Bool r344 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1339, ptr342, t343);
    ternary337 = (_Bool)r344;
  }
  __retval331 = ternary337;
  _Bool t345 = __retval331;
  return t345;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v346, char* v347) {
bb348: ;
  char* __c1349;
  char* __c2350;
  __c1349 = v346;
  __c2350 = v347;
    _Bool r351 = std____is_constant_evaluated();
    if (r351) {
      char* t352 = __c1349;
      char* t353 = __c2350;
      char* r354 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t352, t353);
    } else {
      char* t355 = __c2350;
      char t356 = *t355;
      char* t357 = __c1349;
      *t357 = t356;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v358, char* v359, unsigned long v360) {
bb361: ;
  char* __s1362;
  char* __s2363;
  unsigned long __n364;
  char* __retval365;
  __s1362 = v358;
  __s2363 = v359;
  __n364 = v360;
    unsigned long t366 = __n364;
    unsigned long c367 = 0;
    _Bool c368 = ((t366 == c367)) ? 1 : 0;
    if (c368) {
      char* t369 = __s1362;
      __retval365 = t369;
      char* t370 = __retval365;
      return t370;
    }
    _Bool r371 = std____is_constant_evaluated();
    if (r371) {
        char* t372 = __s2363;
        char* t373 = __s1362;
        _Bool c374 = ((t372 < t373)) ? 1 : 0;
        _Bool isconst375 = 0;
        _Bool ternary376;
        if (isconst375) {
          char* t377 = __s1362;
          char* t378 = __s2363;
          _Bool c379 = ((t377 > t378)) ? 1 : 0;
          ternary376 = (_Bool)c379;
        } else {
          _Bool c380 = 0;
          ternary376 = (_Bool)c380;
        }
        _Bool ternary381;
        if (ternary376) {
          char* t382 = __s1362;
          char* t383 = __s2363;
          unsigned long t384 = __n364;
          char* ptr385 = &(t383)[t384];
          _Bool c386 = ((t382 < ptr385)) ? 1 : 0;
          ternary381 = (_Bool)c386;
        } else {
          _Bool c387 = 0;
          ternary381 = (_Bool)c387;
        }
        if (ternary381) {
            do {
                unsigned long t388 = __n364;
                unsigned long u389 = t388 - 1;
                __n364 = u389;
                unsigned long t390 = __n364;
                char* t391 = __s1362;
                char* ptr392 = &(t391)[t390];
                unsigned long t393 = __n364;
                char* t394 = __s2363;
                char* ptr395 = &(t394)[t393];
                __gnu_cxx__char_traits_char___assign_2(ptr392, ptr395);
              unsigned long t396 = __n364;
              unsigned long c397 = 0;
              _Bool c398 = ((t396 > c397)) ? 1 : 0;
              if (!c398) break;
            } while (1);
        } else {
          char* t399 = __s1362;
          char* t400 = __s2363;
          unsigned long t401 = __n364;
          char* r402 = __gnu_cxx__char_traits_char___copy(t399, t400, t401);
        }
      char* t403 = __s1362;
      __retval365 = t403;
      char* t404 = __retval365;
      return t404;
    }
  char* t405 = __s1362;
  void* cast406 = (void*)t405;
  char* t407 = __s2363;
  void* cast408 = (void*)t407;
  unsigned long t409 = __n364;
  unsigned long c410 = 1;
  unsigned long b411 = t409 * c410;
  void* r412 = memmove(cast406, cast408, b411);
  char* t413 = __s1362;
  __retval365 = t413;
  char* t414 = __retval365;
  return t414;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v415, char* v416, unsigned long v417) {
bb418: ;
  char* __s1419;
  char* __s2420;
  unsigned long __n421;
  char* __retval422;
  __s1419 = v415;
  __s2420 = v416;
  __n421 = v417;
    unsigned long t423 = __n421;
    unsigned long c424 = 0;
    _Bool c425 = ((t423 == c424)) ? 1 : 0;
    if (c425) {
      char* t426 = __s1419;
      __retval422 = t426;
      char* t427 = __retval422;
      return t427;
    }
    _Bool r428 = std____is_constant_evaluated();
    if (r428) {
      char* t429 = __s1419;
      char* t430 = __s2420;
      unsigned long t431 = __n421;
      char* r432 = __gnu_cxx__char_traits_char___move(t429, t430, t431);
      __retval422 = r432;
      char* t433 = __retval422;
      return t433;
    }
  char* t434 = __s1419;
  void* cast435 = (void*)t434;
  char* t436 = __s2420;
  void* cast437 = (void*)t436;
  unsigned long t438 = __n421;
  void* r439 = memmove(cast435, cast437, t438);
  char* cast440 = (char*)r439;
  __retval422 = cast440;
  char* t441 = __retval422;
  return t441;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v442, char* v443, unsigned long v444) {
bb445: ;
  char* __d446;
  char* __s447;
  unsigned long __n448;
  __d446 = v442;
  __s447 = v443;
  __n448 = v444;
    unsigned long t449 = __n448;
    unsigned long c450 = 1;
    _Bool c451 = ((t449 == c450)) ? 1 : 0;
    if (c451) {
      char* t452 = __d446;
      char* t453 = __s447;
      std__char_traits_char___assign_2(t452, t453);
    } else {
      char* t454 = __d446;
      char* t455 = __s447;
      unsigned long t456 = __n448;
      char* r457 = std__char_traits_char___move(t454, t455, t456);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v458, char* v459, unsigned long v460, char* v461, unsigned long v462, unsigned long v463) {
bb464: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this465;
  char* __p466;
  unsigned long __len1467;
  char* __s468;
  unsigned long __len2469;
  unsigned long __how_much470;
  this465 = v458;
  __p466 = v459;
  __len1467 = v460;
  __s468 = v461;
  __len2469 = v462;
  __how_much470 = v463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t471 = this465;
    unsigned long t472 = __len2469;
    _Bool cast473 = (_Bool)t472;
    _Bool ternary474;
    if (cast473) {
      unsigned long t475 = __len2469;
      unsigned long t476 = __len1467;
      _Bool c477 = ((t475 <= t476)) ? 1 : 0;
      ternary474 = (_Bool)c477;
    } else {
      _Bool c478 = 0;
      ternary474 = (_Bool)c478;
    }
    if (ternary474) {
      char* t479 = __p466;
      char* t480 = __s468;
      unsigned long t481 = __len2469;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t479, t480, t481);
    }
    unsigned long t482 = __how_much470;
    _Bool cast483 = (_Bool)t482;
    _Bool ternary484;
    if (cast483) {
      unsigned long t485 = __len1467;
      unsigned long t486 = __len2469;
      _Bool c487 = ((t485 != t486)) ? 1 : 0;
      ternary484 = (_Bool)c487;
    } else {
      _Bool c488 = 0;
      ternary484 = (_Bool)c488;
    }
    if (ternary484) {
      char* t489 = __p466;
      unsigned long t490 = __len2469;
      char* ptr491 = &(t489)[t490];
      char* t492 = __p466;
      unsigned long t493 = __len1467;
      char* ptr494 = &(t492)[t493];
      unsigned long t495 = __how_much470;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr491, ptr494, t495);
    }
    unsigned long t496 = __len2469;
    unsigned long t497 = __len1467;
    _Bool c498 = ((t496 > t497)) ? 1 : 0;
    if (c498) {
        char* t499 = __s468;
        unsigned long t500 = __len2469;
        char* ptr501 = &(t499)[t500];
        char* t502 = __p466;
        unsigned long t503 = __len1467;
        char* ptr504 = &(t502)[t503];
        _Bool c505 = ((ptr501 <= ptr504)) ? 1 : 0;
        if (c505) {
          char* t506 = __p466;
          char* t507 = __s468;
          unsigned long t508 = __len2469;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
        } else {
            char* t509 = __s468;
            char* t510 = __p466;
            unsigned long t511 = __len1467;
            char* ptr512 = &(t510)[t511];
            _Bool c513 = ((t509 >= ptr512)) ? 1 : 0;
            if (c513) {
              unsigned long __poff514;
              char* t515 = __s468;
              char* t516 = __p466;
              long diff517 = t515 - t516;
              unsigned long cast518 = (unsigned long)diff517;
              unsigned long t519 = __len2469;
              unsigned long t520 = __len1467;
              unsigned long b521 = t519 - t520;
              unsigned long b522 = cast518 + b521;
              __poff514 = b522;
              char* t523 = __p466;
              char* t524 = __p466;
              unsigned long t525 = __poff514;
              char* ptr526 = &(t524)[t525];
              unsigned long t527 = __len2469;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t523, ptr526, t527);
            } else {
              unsigned long __nleft528;
              char* t529 = __p466;
              unsigned long t530 = __len1467;
              char* ptr531 = &(t529)[t530];
              char* t532 = __s468;
              long diff533 = ptr531 - t532;
              unsigned long cast534 = (unsigned long)diff533;
              __nleft528 = cast534;
              char* t535 = __p466;
              char* t536 = __s468;
              unsigned long t537 = __nleft528;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t535, t536, t537);
              char* t538 = __p466;
              unsigned long t539 = __nleft528;
              char* ptr540 = &(t538)[t539];
              char* t541 = __p466;
              unsigned long t542 = __len2469;
              char* ptr543 = &(t541)[t542];
              unsigned long t544 = __len2469;
              unsigned long t545 = __nleft528;
              unsigned long b546 = t544 - t545;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr540, ptr543, b546);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v547, unsigned long v548, unsigned long v549, char* v550, unsigned long v551) {
bb552: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this553;
  unsigned long __pos554;
  unsigned long __len1555;
  char* __s556;
  unsigned long __len2557;
  unsigned long __how_much558;
  unsigned long __new_capacity559;
  char* __r560;
  this553 = v547;
  __pos554 = v548;
  __len1555 = v549;
  __s556 = v550;
  __len2557 = v551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this553;
  unsigned long r562 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t561);
  unsigned long t563 = __pos554;
  unsigned long b564 = r562 - t563;
  unsigned long t565 = __len1555;
  unsigned long b566 = b564 - t565;
  __how_much558 = b566;
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t561);
  unsigned long t568 = __len2557;
  unsigned long b569 = r567 + t568;
  unsigned long t570 = __len1555;
  unsigned long b571 = b569 - t570;
  __new_capacity559 = b571;
  unsigned long r572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t561);
  char* r573 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t561, &__new_capacity559, r572);
  __r560 = r573;
    unsigned long t574 = __pos554;
    _Bool cast575 = (_Bool)t574;
    if (cast575) {
      char* t576 = __r560;
      char* r577 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t561);
      unsigned long t578 = __pos554;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t576, r577, t578);
    }
    char* t579 = __s556;
    _Bool cast580 = (_Bool)t579;
    _Bool ternary581;
    if (cast580) {
      unsigned long t582 = __len2557;
      _Bool cast583 = (_Bool)t582;
      ternary581 = (_Bool)cast583;
    } else {
      _Bool c584 = 0;
      ternary581 = (_Bool)c584;
    }
    if (ternary581) {
      char* t585 = __r560;
      unsigned long t586 = __pos554;
      char* ptr587 = &(t585)[t586];
      char* t588 = __s556;
      unsigned long t589 = __len2557;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr587, t588, t589);
    }
    unsigned long t590 = __how_much558;
    _Bool cast591 = (_Bool)t590;
    if (cast591) {
      char* t592 = __r560;
      unsigned long t593 = __pos554;
      char* ptr594 = &(t592)[t593];
      unsigned long t595 = __len2557;
      char* ptr596 = &(ptr594)[t595];
      char* r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t561);
      unsigned long t598 = __pos554;
      char* ptr599 = &(r597)[t598];
      unsigned long t600 = __len1555;
      char* ptr601 = &(ptr599)[t600];
      unsigned long t602 = __how_much558;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr596, ptr601, t602);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t561);
  char* t603 = __r560;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t561, t603);
  unsigned long t604 = __new_capacity559;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t561, t604);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v605, unsigned long v606, unsigned long v607, char* v608, unsigned long v609) {
bb610: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this611;
  unsigned long __pos612;
  unsigned long __len1613;
  char* __s614;
  unsigned long __len2615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval616;
  unsigned long __old_size617;
  unsigned long __new_size618;
  this611 = v605;
  __pos612 = v606;
  __len1613 = v607;
  __s614 = v608;
  __len2615 = v609;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this611;
  unsigned long t620 = __len1613;
  unsigned long t621 = __len2615;
  char* cast622 = (char*)&(_str_9);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t619, t620, t621, cast622);
  unsigned long r623 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t619);
  __old_size617 = r623;
  unsigned long t624 = __old_size617;
  unsigned long t625 = __len2615;
  unsigned long b626 = t624 + t625;
  unsigned long t627 = __len1613;
  unsigned long b628 = b626 - t627;
  __new_size618 = b628;
    unsigned long t629 = __new_size618;
    unsigned long r630 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t619);
    _Bool c631 = ((t629 <= r630)) ? 1 : 0;
    if (c631) {
      char* __p632;
      unsigned long __how_much633;
      char* r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
      unsigned long t635 = __pos612;
      char* ptr636 = &(r634)[t635];
      __p632 = ptr636;
      unsigned long t637 = __old_size617;
      unsigned long t638 = __pos612;
      unsigned long b639 = t637 - t638;
      unsigned long t640 = __len1613;
      unsigned long b641 = b639 - t640;
      __how_much633 = b641;
        _Bool r642 = std__is_constant_evaluated();
        if (r642) {
          char* __newp643;
          struct std__allocator_char_* r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t619);
          unsigned long t645 = __new_size618;
          char* r646 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r644, t645);
          __newp643 = r646;
          char* t647 = __newp643;
          char* r648 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
          unsigned long t649 = __pos612;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t647, r648, t649);
          char* t650 = __newp643;
          unsigned long t651 = __pos612;
          char* ptr652 = &(t650)[t651];
          char* t653 = __s614;
          unsigned long t654 = __len2615;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr652, t653, t654);
          char* t655 = __newp643;
          unsigned long t656 = __pos612;
          char* ptr657 = &(t655)[t656];
          unsigned long t658 = __len2615;
          char* ptr659 = &(ptr657)[t658];
          char* t660 = __p632;
          unsigned long t661 = __len1613;
          char* ptr662 = &(t660)[t661];
          unsigned long t663 = __how_much633;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr659, ptr662, t663);
          char* r664 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t619);
          char* t665 = __newp643;
          unsigned long t666 = __new_size618;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r664, t665, t666);
          struct std__allocator_char_* r667 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t619);
          char* t668 = __newp643;
          unsigned long t669 = __new_size618;
          std__allocator_char___deallocate(r667, t668, t669);
        } else {
            char* t670 = __s614;
            _Bool r671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t619, t670);
            if (r671) {
                unsigned long t672 = __how_much633;
                _Bool cast673 = (_Bool)t672;
                _Bool ternary674;
                if (cast673) {
                  unsigned long t675 = __len1613;
                  unsigned long t676 = __len2615;
                  _Bool c677 = ((t675 != t676)) ? 1 : 0;
                  ternary674 = (_Bool)c677;
                } else {
                  _Bool c678 = 0;
                  ternary674 = (_Bool)c678;
                }
                if (ternary674) {
                  char* t679 = __p632;
                  unsigned long t680 = __len2615;
                  char* ptr681 = &(t679)[t680];
                  char* t682 = __p632;
                  unsigned long t683 = __len1613;
                  char* ptr684 = &(t682)[t683];
                  unsigned long t685 = __how_much633;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr681, ptr684, t685);
                }
                unsigned long t686 = __len2615;
                _Bool cast687 = (_Bool)t686;
                if (cast687) {
                  char* t688 = __p632;
                  char* t689 = __s614;
                  unsigned long t690 = __len2615;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t688, t689, t690);
                }
            } else {
              char* t691 = __p632;
              unsigned long t692 = __len1613;
              char* t693 = __s614;
              unsigned long t694 = __len2615;
              unsigned long t695 = __how_much633;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t619, t691, t692, t693, t694, t695);
            }
        }
    } else {
      unsigned long t696 = __pos612;
      unsigned long t697 = __len1613;
      char* t698 = __s614;
      unsigned long t699 = __len2615;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t619, t696, t697, t698, t699);
    }
  unsigned long t700 = __new_size618;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t619, t700);
  __retval616 = t619;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t701 = __retval616;
  return t701;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v702, unsigned long v703, char* v704) {
bb705: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this706;
  unsigned long __pos707;
  char* __s708;
  unsigned long __retval709;
  this706 = v702;
  __pos707 = v703;
  __s708 = v704;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = this706;
    unsigned long t711 = __pos707;
    unsigned long r712 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t710);
    _Bool c713 = ((t711 > r712)) ? 1 : 0;
    if (c713) {
      char* cast714 = (char*)&(_str_10);
      char* t715 = __s708;
      unsigned long t716 = __pos707;
      unsigned long r717 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t710);
      std____throw_out_of_range_fmt(cast714, t715, t716, r717);
    }
  unsigned long t718 = __pos707;
  __retval709 = t718;
  unsigned long t719 = __retval709;
  return t719;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v720, unsigned long v721, unsigned long v722) {
bb723: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this724;
  unsigned long __pos725;
  unsigned long __off726;
  unsigned long __retval727;
  _Bool __testoff728;
  this724 = v720;
  __pos725 = v721;
  __off726 = v722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t729 = this724;
  unsigned long t730 = __off726;
  unsigned long r731 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t729);
  unsigned long t732 = __pos725;
  unsigned long b733 = r731 - t732;
  _Bool c734 = ((t730 < b733)) ? 1 : 0;
  __testoff728 = c734;
  _Bool t735 = __testoff728;
  unsigned long ternary736;
  if (t735) {
    unsigned long t737 = __off726;
    ternary736 = (unsigned long)t737;
  } else {
    unsigned long r738 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t729);
    unsigned long t739 = __pos725;
    unsigned long b740 = r738 - t739;
    ternary736 = (unsigned long)b740;
  }
  __retval727 = ternary736;
  unsigned long t741 = __retval727;
  return t741;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v742, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v743, unsigned long v744, unsigned long v745) {
bb746: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str748;
  unsigned long __pos749;
  unsigned long __n750;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval751;
  this747 = v742;
  __str748 = v743;
  __pos749 = v744;
  __n750 = v745;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t752 = this747;
  unsigned long c753 = 0;
  unsigned long r754 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t752);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t755 = __str748;
  char* r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t755);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t757 = __str748;
  unsigned long t758 = __pos749;
  char* cast759 = (char*)&(_str_8);
  unsigned long r760 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t757, t758, cast759);
  char* ptr761 = &(r756)[r760];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t762 = __str748;
  unsigned long t763 = __pos749;
  unsigned long t764 = __n750;
  unsigned long r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t762, t763, t764);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r766 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t752, c753, r754, ptr761, r765);
  __retval751 = r766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t767 = __retval751;
  return t767;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v768, char* v769, unsigned long v770) {
bb771: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this772;
  char* __s773;
  unsigned long __n774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval775;
  this772 = v768;
  __s773 = v769;
  __n774 = v770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t776 = this772;
  unsigned long c777 = 0;
  unsigned long r778 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t776);
  char* t779 = __s773;
  unsigned long t780 = __n774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r781 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t776, c777, r778, t779, t780);
  __retval775 = r781;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t782 = __retval775;
  return t782;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v783, char* v784) {
bb785: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this786;
  char* __s787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval788;
  this786 = v783;
  __s787 = v784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t789 = this786;
  unsigned long c790 = 0;
  unsigned long r791 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t789);
  char* t792 = __s787;
  char* t793 = __s787;
  unsigned long r794 = std__char_traits_char___length(t793);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r795 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t789, c790, r791, t792, r794);
  __retval788 = r795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t796 = __retval788;
  return t796;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v797, char* v798) {
bb799: ;
  char* __location800;
  char* __args801;
  char* __retval802;
  void* __loc803;
  __location800 = v797;
  __args801 = v798;
  char* t804 = __location800;
  void* cast805 = (void*)t804;
  __loc803 = cast805;
    void* t806 = __loc803;
    char* cast807 = (char*)t806;
    char* t808 = __args801;
    char t809 = *t808;
    *cast807 = t809;
    __retval802 = cast807;
    char* t810 = __retval802;
    return t810;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v811, unsigned long v812, char v813) {
bb814: ;
  char* __s815;
  unsigned long __n816;
  char __a817;
  char* __retval818;
  __s815 = v811;
  __n816 = v812;
  __a817 = v813;
    _Bool r819 = std____is_constant_evaluated();
    if (r819) {
        unsigned long __i820;
        unsigned long c821 = 0;
        __i820 = c821;
        while (1) {
          unsigned long t823 = __i820;
          unsigned long t824 = __n816;
          _Bool c825 = ((t823 < t824)) ? 1 : 0;
          if (!c825) break;
          char* t826 = __s815;
          unsigned long t827 = __i820;
          char* ptr828 = &(t826)[t827];
          char* r829 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr828, &__a817);
        for_step822: ;
          unsigned long t830 = __i820;
          unsigned long u831 = t830 + 1;
          __i820 = u831;
        }
      char* t832 = __s815;
      __retval818 = t832;
      char* t833 = __retval818;
      return t833;
    }
      unsigned long t834 = __n816;
      _Bool cast835 = (_Bool)t834;
      if (cast835) {
        unsigned char __c836;
        void* cast837 = (void*)&(__c836);
        void* cast838 = (void*)&(__a817);
        unsigned long c839 = 1;
        void* r840 = memcpy(cast837, cast838, c839);
        char* t841 = __s815;
        void* cast842 = (void*)t841;
        unsigned char t843 = __c836;
        int cast844 = (int)t843;
        unsigned long t845 = __n816;
        void* r846 = memset(cast842, cast844, t845);
      }
  char* t847 = __s815;
  __retval818 = t847;
  char* t848 = __retval818;
  return t848;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v849, unsigned long v850, char v851) {
bb852: ;
  char* __s853;
  unsigned long __n854;
  char __a855;
  char* __retval856;
  __s853 = v849;
  __n854 = v850;
  __a855 = v851;
    unsigned long t857 = __n854;
    unsigned long c858 = 0;
    _Bool c859 = ((t857 == c858)) ? 1 : 0;
    if (c859) {
      char* t860 = __s853;
      __retval856 = t860;
      char* t861 = __retval856;
      return t861;
    }
    _Bool r862 = std____is_constant_evaluated();
    if (r862) {
      char* t863 = __s853;
      unsigned long t864 = __n854;
      char t865 = __a855;
      char* r866 = __gnu_cxx__char_traits_char___assign(t863, t864, t865);
      __retval856 = r866;
      char* t867 = __retval856;
      return t867;
    }
  char* t868 = __s853;
  void* cast869 = (void*)t868;
  char t870 = __a855;
  int cast871 = (int)t870;
  unsigned long t872 = __n854;
  void* r873 = memset(cast869, cast871, t872);
  char* cast874 = (char*)r873;
  __retval856 = cast874;
  char* t875 = __retval856;
  return t875;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v876, unsigned long v877, char v878) {
bb879: ;
  char* __d880;
  unsigned long __n881;
  char __c882;
  __d880 = v876;
  __n881 = v877;
  __c882 = v878;
    unsigned long t883 = __n881;
    unsigned long c884 = 1;
    _Bool c885 = ((t883 == c884)) ? 1 : 0;
    if (c885) {
      char* t886 = __d880;
      std__char_traits_char___assign_2(t886, &__c882);
    } else {
      char* t887 = __d880;
      unsigned long t888 = __n881;
      char t889 = __c882;
      char* r890 = std__char_traits_char___assign(t887, t888, t889);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v891, unsigned long v892, unsigned long v893, unsigned long v894, char v895) {
bb896: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this897;
  unsigned long __pos1898;
  unsigned long __n1899;
  unsigned long __n2900;
  char __c901;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval902;
  unsigned long __old_size903;
  unsigned long __new_size904;
  this897 = v891;
  __pos1898 = v892;
  __n1899 = v893;
  __n2900 = v894;
  __c901 = v895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t905 = this897;
  unsigned long t906 = __n1899;
  unsigned long t907 = __n2900;
  char* cast908 = (char*)&(_str_11);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t905, t906, t907, cast908);
  unsigned long r909 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t905);
  __old_size903 = r909;
  unsigned long t910 = __old_size903;
  unsigned long t911 = __n2900;
  unsigned long b912 = t910 + t911;
  unsigned long t913 = __n1899;
  unsigned long b914 = b912 - t913;
  __new_size904 = b914;
    unsigned long t915 = __new_size904;
    unsigned long r916 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t905);
    _Bool c917 = ((t915 <= r916)) ? 1 : 0;
    if (c917) {
      char* __p918;
      unsigned long __how_much919;
      char* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t905);
      unsigned long t921 = __pos1898;
      char* ptr922 = &(r920)[t921];
      __p918 = ptr922;
      unsigned long t923 = __old_size903;
      unsigned long t924 = __pos1898;
      unsigned long b925 = t923 - t924;
      unsigned long t926 = __n1899;
      unsigned long b927 = b925 - t926;
      __how_much919 = b927;
        unsigned long t928 = __how_much919;
        _Bool cast929 = (_Bool)t928;
        _Bool ternary930;
        if (cast929) {
          unsigned long t931 = __n1899;
          unsigned long t932 = __n2900;
          _Bool c933 = ((t931 != t932)) ? 1 : 0;
          ternary930 = (_Bool)c933;
        } else {
          _Bool c934 = 0;
          ternary930 = (_Bool)c934;
        }
        if (ternary930) {
          char* t935 = __p918;
          unsigned long t936 = __n2900;
          char* ptr937 = &(t935)[t936];
          char* t938 = __p918;
          unsigned long t939 = __n1899;
          char* ptr940 = &(t938)[t939];
          unsigned long t941 = __how_much919;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr937, ptr940, t941);
        }
    } else {
      unsigned long t942 = __pos1898;
      unsigned long t943 = __n1899;
      char* c944 = ((void*)0);
      unsigned long t945 = __n2900;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t905, t942, t943, c944, t945);
    }
    unsigned long t946 = __n2900;
    _Bool cast947 = (_Bool)t946;
    if (cast947) {
      char* r948 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t905);
      unsigned long t949 = __pos1898;
      char* ptr950 = &(r948)[t949];
      unsigned long t951 = __n2900;
      char t952 = __c901;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr950, t951, t952);
    }
  unsigned long t953 = __new_size904;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t905, t953);
  __retval902 = t905;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t954 = __retval902;
  return t954;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v955, unsigned long v956, char v957) {
bb958: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this959;
  unsigned long __n960;
  char __c961;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval962;
  this959 = v955;
  __n960 = v956;
  __c961 = v957;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t963 = this959;
  unsigned long c964 = 0;
  unsigned long r965 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t963);
  unsigned long t966 = __n960;
  char t967 = __c961;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t963, c964, r965, t966, t967);
  __retval962 = r968;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t969 = __retval962;
  return t969;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v970, char* v971) {
bb972: ;
  char* __c1973;
  char* __c2974;
  _Bool __retval975;
  __c1973 = v970;
  __c2974 = v971;
  char* t976 = __c1973;
  char t977 = *t976;
  unsigned char cast978 = (unsigned char)t977;
  int cast979 = (int)cast978;
  char* t980 = __c2974;
  char t981 = *t980;
  unsigned char cast982 = (unsigned char)t981;
  int cast983 = (int)cast982;
  _Bool c984 = ((cast979 < cast983)) ? 1 : 0;
  __retval975 = c984;
  _Bool t985 = __retval975;
  return t985;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v986, char* v987, unsigned long v988) {
bb989: ;
  char* __s1990;
  char* __s2991;
  unsigned long __n992;
  int __retval993;
  __s1990 = v986;
  __s2991 = v987;
  __n992 = v988;
    unsigned long t994 = __n992;
    unsigned long c995 = 0;
    _Bool c996 = ((t994 == c995)) ? 1 : 0;
    if (c996) {
      int c997 = 0;
      __retval993 = c997;
      int t998 = __retval993;
      return t998;
    }
    _Bool r999 = std____is_constant_evaluated();
    if (r999) {
        unsigned long __i1000;
        unsigned long c1001 = 0;
        __i1000 = c1001;
        while (1) {
          unsigned long t1003 = __i1000;
          unsigned long t1004 = __n992;
          _Bool c1005 = ((t1003 < t1004)) ? 1 : 0;
          if (!c1005) break;
            unsigned long t1006 = __i1000;
            char* t1007 = __s1990;
            char* ptr1008 = &(t1007)[t1006];
            unsigned long t1009 = __i1000;
            char* t1010 = __s2991;
            char* ptr1011 = &(t1010)[t1009];
            _Bool r1012 = std__char_traits_char___lt(ptr1008, ptr1011);
            if (r1012) {
              int c1013 = -1;
              __retval993 = c1013;
              int t1014 = __retval993;
              int ret_val1015 = t1014;
              return ret_val1015;
            } else {
                unsigned long t1016 = __i1000;
                char* t1017 = __s2991;
                char* ptr1018 = &(t1017)[t1016];
                unsigned long t1019 = __i1000;
                char* t1020 = __s1990;
                char* ptr1021 = &(t1020)[t1019];
                _Bool r1022 = std__char_traits_char___lt(ptr1018, ptr1021);
                if (r1022) {
                  int c1023 = 1;
                  __retval993 = c1023;
                  int t1024 = __retval993;
                  int ret_val1025 = t1024;
                  return ret_val1025;
                }
            }
        for_step1002: ;
          unsigned long t1026 = __i1000;
          unsigned long u1027 = t1026 + 1;
          __i1000 = u1027;
        }
      int c1028 = 0;
      __retval993 = c1028;
      int t1029 = __retval993;
      return t1029;
    }
  char* t1030 = __s1990;
  void* cast1031 = (void*)t1030;
  char* t1032 = __s2991;
  void* cast1033 = (void*)t1032;
  unsigned long t1034 = __n992;
  int r1035 = memcmp(cast1031, cast1033, t1034);
  __retval993 = r1035;
  int t1036 = __retval993;
  return t1036;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037) {
bb1038: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1039;
  char* __retval1040;
  this1039 = v1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = this1039;
  char* r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1041);
  __retval1040 = r1042;
  char* t1043 = __retval1040;
  return t1043;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1044, char* v1045) {
bb1046: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1047;
  char* __rhs1048;
  _Bool __retval1049;
  __lhs1047 = v1044;
  __rhs1048 = v1045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1050 = __lhs1047;
  unsigned long r1051 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1050);
  char* t1052 = __rhs1048;
  unsigned long r1053 = std__char_traits_char___length(t1052);
  _Bool c1054 = ((r1051 == r1053)) ? 1 : 0;
  _Bool ternary1055;
  if (c1054) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = __lhs1047;
    char* r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1056);
    char* t1058 = __rhs1048;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1059 = __lhs1047;
    unsigned long r1060 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1059);
    int r1061 = std__char_traits_char___compare(r1057, t1058, r1060);
    _Bool cast1062 = (_Bool)r1061;
    _Bool u1063 = !cast1062;
    ternary1055 = (_Bool)u1063;
  } else {
    _Bool c1064 = 0;
    ternary1055 = (_Bool)c1064;
  }
  __retval1049 = ternary1055;
  _Bool t1065 = __retval1049;
  return t1065;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1066) {
bb1067: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1068;
  this1068 = v1066;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1069 = this1068;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1069);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1069->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1070: ;
  int __retval1071;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1072;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base1073;
  struct std__allocator_char_ ref_tmp01074;
  int c1075 = 0;
  __retval1071 = c1075;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1072);
    char* cast1076 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp01074);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base1073, cast1076, &ref_tmp01074);
    {
      std__allocator_char____allocator(&ref_tmp01074);
    }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1077 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_3(&str1072, &base1073);
      struct std__basic_ostream_char__std__char_traits_char__* r1078 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1072);
      struct std__basic_ostream_char__std__char_traits_char__* r1079 = std__ostream__operator___std__ostream_____(r1078, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      unsigned long c1080 = 10;
      unsigned long c1081 = 9;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1082 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_4(&str1072, &base1073, c1080, c1081);
      struct std__basic_ostream_char__std__char_traits_char__* r1083 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1072);
      struct std__basic_ostream_char__std__char_traits_char__* r1084 = std__ostream__operator___std__ostream_____(r1083, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast1085 = (char*)&(_str_1);
      unsigned long c1086 = 7;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1087 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(&str1072, cast1085, c1086);
      struct std__basic_ostream_char__std__char_traits_char__* r1088 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1072);
      struct std__basic_ostream_char__std__char_traits_char__* r1089 = std__ostream__operator___std__ostream_____(r1088, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast1090 = (char*)&(_str_2);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1091 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(&str1072, cast1090);
      struct std__basic_ostream_char__std__char_traits_char__* r1092 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1072);
      struct std__basic_ostream_char__std__char_traits_char__* r1093 = std__ostream__operator___std__ostream_____(r1092, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      unsigned long c1094 = 10;
      char c1095 = 42;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1096 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_5(&str1072, c1094, c1095);
      struct std__basic_ostream_char__std__char_traits_char__* r1097 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1072);
      struct std__basic_ostream_char__std__char_traits_char__* r1098 = std__ostream__operator___std__ostream_____(r1097, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast1099 = (char*)&(_str_3);
      _Bool r1100 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1072, cast1099);
      _Bool u1101 = !r1100;
      if (u1101) {
      } else {
        char* cast1102 = (char*)&(_str_4);
        char* c1103 = (char*)_str_5;
        unsigned int c1104 = 39;
        char* cast1105 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1102, c1103, c1104, cast1105);
      }
      int c1106 = 0;
      __retval1071 = c1106;
      int t1107 = __retval1071;
      int ret_val1108 = t1107;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base1073);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1072);
      }
      return ret_val1108;
  int t1109 = __retval1071;
  return t1109;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1110) {
bb1111: ;
  char* __r1112;
  char* __retval1113;
  __r1112 = v1110;
  char* t1114 = __r1112;
  __retval1113 = t1114;
  char* t1115 = __retval1113;
  return t1115;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1116) {
bb1117: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1118;
  char* __retval1119;
  this1118 = v1116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1120 = this1118;
  char* cast1121 = (char*)&(t1120->field2._M_local_buf);
  char* r1122 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1121);
  __retval1119 = r1122;
  char* t1123 = __retval1119;
  return t1123;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1124, char* v1125, struct std__allocator_char_* v1126) {
bb1127: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1128;
  char* __dat1129;
  struct std__allocator_char_* __a1130;
  this1128 = v1124;
  __dat1129 = v1125;
  __a1130 = v1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1131 = this1128;
  struct std__allocator_char_* base1132 = (struct std__allocator_char_*)((char *)t1131 + 0);
  struct std__allocator_char_* t1133 = __a1130;
  std__allocator_char___allocator(base1132, t1133);
    char* t1134 = __dat1129;
    t1131->_M_p = t1134;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1135: ;
  _Bool __retval1136;
    _Bool c1137 = 0;
    __retval1136 = c1137;
    _Bool t1138 = __retval1136;
    return t1138;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1139) {
bb1140: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1141;
  this1141 = v1139;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1142 = this1141;
    _Bool r1143 = std__is_constant_evaluated();
    if (r1143) {
        unsigned long __i1144;
        unsigned long c1145 = 0;
        __i1144 = c1145;
        while (1) {
          unsigned long t1147 = __i1144;
          unsigned long c1148 = 15;
          _Bool c1149 = ((t1147 <= c1148)) ? 1 : 0;
          if (!c1149) break;
          char c1150 = 0;
          unsigned long t1151 = __i1144;
          t1142->field2._M_local_buf[t1151] = c1150;
        for_step1146: ;
          unsigned long t1152 = __i1144;
          unsigned long u1153 = t1152 + 1;
          __i1144 = u1153;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1154, unsigned long v1155) {
bb1156: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1157;
  unsigned long __length1158;
  this1157 = v1154;
  __length1158 = v1155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1159 = this1157;
  unsigned long t1160 = __length1158;
  t1159->_M_string_length = t1160;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1161: ;
  _Bool __retval1162;
    _Bool c1163 = 0;
    __retval1162 = c1163;
    _Bool t1164 = __retval1162;
    return t1164;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1165, char* v1166) {
bb1167: ;
  char* __location1168;
  char* __args1169;
  char* __retval1170;
  void* __loc1171;
  __location1168 = v1165;
  __args1169 = v1166;
  char* t1172 = __location1168;
  void* cast1173 = (void*)t1172;
  __loc1171 = cast1173;
    void* t1174 = __loc1171;
    char* cast1175 = (char*)t1174;
    char* t1176 = __args1169;
    char t1177 = *t1176;
    *cast1175 = t1177;
    __retval1170 = cast1175;
    char* t1178 = __retval1170;
    return t1178;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1179, char* v1180) {
bb1181: ;
  char* __c11182;
  char* __c21183;
  __c11182 = v1179;
  __c21183 = v1180;
    _Bool r1184 = std____is_constant_evaluated();
    if (r1184) {
      char* t1185 = __c11182;
      char* t1186 = __c21183;
      char* r1187 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1185, t1186);
    } else {
      char* t1188 = __c21183;
      char t1189 = *t1188;
      char* t1190 = __c11182;
      *t1190 = t1189;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1191) {
bb1192: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1193;
  char* __retval1194;
  this1193 = v1191;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1195 = this1193;
  char* t1196 = t1195->_M_dataplus._M_p;
  __retval1194 = t1196;
  char* t1197 = __retval1194;
  return t1197;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1198, unsigned long v1199) {
bb1200: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1201;
  unsigned long __n1202;
  char ref_tmp01203;
  this1201 = v1198;
  __n1202 = v1199;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1204 = this1201;
  unsigned long t1205 = __n1202;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1204, t1205);
  unsigned long t1206 = __n1202;
  char* r1207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1204);
  char* ptr1208 = &(r1207)[t1206];
  char c1209 = 0;
  ref_tmp01203 = c1209;
  std__char_traits_char___assign_2(ptr1208, &ref_tmp01203);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1210) {
bb1211: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1212;
  this1212 = v1210;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1213 = this1212;
  {
    struct std__allocator_char_* base1214 = (struct std__allocator_char_*)((char *)t1213 + 0);
    std__allocator_char____allocator(base1214);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1215, struct std____new_allocator_char_* v1216) {
bb1217: ;
  struct std____new_allocator_char_* this1218;
  struct std____new_allocator_char_* unnamed1219;
  this1218 = v1215;
  unnamed1219 = v1216;
  struct std____new_allocator_char_* t1220 = this1218;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1221) {
bb1222: ;
  struct std____new_allocator_char_* this1223;
  this1223 = v1221;
  struct std____new_allocator_char_* t1224 = this1223;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1225, char* v1226, struct std__allocator_char_* v1227) {
bb1228: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1229;
  char* __dat1230;
  struct std__allocator_char_* __a1231;
  this1229 = v1225;
  __dat1230 = v1226;
  __a1231 = v1227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1232 = this1229;
  struct std__allocator_char_* base1233 = (struct std__allocator_char_*)((char *)t1232 + 0);
  struct std__allocator_char_* t1234 = __a1231;
  std__allocator_char___allocator(base1233, t1234);
    char* t1235 = __dat1230;
    t1232->_M_p = t1235;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1236, char* v1237) {
bb1238: ;
  char* __c11239;
  char* __c21240;
  _Bool __retval1241;
  __c11239 = v1236;
  __c21240 = v1237;
  char* t1242 = __c11239;
  char t1243 = *t1242;
  int cast1244 = (int)t1243;
  char* t1245 = __c21240;
  char t1246 = *t1245;
  int cast1247 = (int)t1246;
  _Bool c1248 = ((cast1244 == cast1247)) ? 1 : 0;
  __retval1241 = c1248;
  _Bool t1249 = __retval1241;
  return t1249;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1250) {
bb1251: ;
  char* __p1252;
  unsigned long __retval1253;
  unsigned long __i1254;
  __p1252 = v1250;
  unsigned long c1255 = 0;
  __i1254 = c1255;
    char ref_tmp01256;
    while (1) {
      unsigned long t1257 = __i1254;
      char* t1258 = __p1252;
      char* ptr1259 = &(t1258)[t1257];
      char c1260 = 0;
      ref_tmp01256 = c1260;
      _Bool r1261 = __gnu_cxx__char_traits_char___eq(ptr1259, &ref_tmp01256);
      _Bool u1262 = !r1261;
      if (!u1262) break;
      unsigned long t1263 = __i1254;
      unsigned long u1264 = t1263 + 1;
      __i1254 = u1264;
    }
  unsigned long t1265 = __i1254;
  __retval1253 = t1265;
  unsigned long t1266 = __retval1253;
  return t1266;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1267) {
bb1268: ;
  char* __s1269;
  unsigned long __retval1270;
  __s1269 = v1267;
    _Bool r1271 = std____is_constant_evaluated();
    if (r1271) {
      char* t1272 = __s1269;
      unsigned long r1273 = __gnu_cxx__char_traits_char___length(t1272);
      __retval1270 = r1273;
      unsigned long t1274 = __retval1270;
      return t1274;
    }
  char* t1275 = __s1269;
  unsigned long r1276 = strlen(t1275);
  __retval1270 = r1276;
  unsigned long t1277 = __retval1270;
  return t1277;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1278, char* v1279, struct std__random_access_iterator_tag v1280) {
bb1281: ;
  char* __first1282;
  char* __last1283;
  struct std__random_access_iterator_tag unnamed1284;
  long __retval1285;
  __first1282 = v1278;
  __last1283 = v1279;
  unnamed1284 = v1280;
  char* t1286 = __last1283;
  char* t1287 = __first1282;
  long diff1288 = t1286 - t1287;
  __retval1285 = diff1288;
  long t1289 = __retval1285;
  return t1289;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1290) {
bb1291: ;
  char** unnamed1292;
  struct std__random_access_iterator_tag __retval1293;
  unnamed1292 = v1290;
  struct std__random_access_iterator_tag t1294 = __retval1293;
  return t1294;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1295, char* v1296) {
bb1297: ;
  char* __first1298;
  char* __last1299;
  long __retval1300;
  struct std__random_access_iterator_tag agg_tmp01301;
  __first1298 = v1295;
  __last1299 = v1296;
  char* t1302 = __first1298;
  char* t1303 = __last1299;
  struct std__random_access_iterator_tag r1304 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1298);
  agg_tmp01301 = r1304;
  struct std__random_access_iterator_tag t1305 = agg_tmp01301;
  long r1306 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1302, t1303, t1305);
  __retval1300 = r1306;
  long t1307 = __retval1300;
  return t1307;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1308, char* v1309) {
bb1310: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1311;
  char* __p1312;
  this1311 = v1308;
  __p1312 = v1309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1313 = this1311;
  char* t1314 = __p1312;
  t1313->_M_dataplus._M_p = t1314;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1315) {
bb1316: ;
  struct std__allocator_char_* __a1317;
  unsigned long __retval1318;
  __a1317 = v1315;
  unsigned long c1319 = -1;
  unsigned long c1320 = 1;
  unsigned long b1321 = c1319 / c1320;
  __retval1318 = b1321;
  unsigned long t1322 = __retval1318;
  return t1322;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1323) {
bb1324: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1325;
  struct std__allocator_char_* __retval1326;
  this1325 = v1323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1327 = this1325;
  struct std__allocator_char_* base1328 = (struct std__allocator_char_*)((char *)&(t1327->_M_dataplus) + 0);
  __retval1326 = base1328;
  struct std__allocator_char_* t1329 = __retval1326;
  return t1329;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1330, unsigned long* v1331) {
bb1332: ;
  unsigned long* __a1333;
  unsigned long* __b1334;
  unsigned long* __retval1335;
  __a1333 = v1330;
  __b1334 = v1331;
    unsigned long* t1336 = __b1334;
    unsigned long t1337 = *t1336;
    unsigned long* t1338 = __a1333;
    unsigned long t1339 = *t1338;
    _Bool c1340 = ((t1337 < t1339)) ? 1 : 0;
    if (c1340) {
      unsigned long* t1341 = __b1334;
      __retval1335 = t1341;
      unsigned long* t1342 = __retval1335;
      return t1342;
    }
  unsigned long* t1343 = __a1333;
  __retval1335 = t1343;
  unsigned long* t1344 = __retval1335;
  return t1344;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1345) {
bb1346: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1347;
  unsigned long __retval1348;
  unsigned long __diffmax1349;
  unsigned long __allocmax1350;
  this1347 = v1345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1351 = this1347;
  unsigned long c1352 = 9223372036854775807;
  __diffmax1349 = c1352;
  struct std__allocator_char_* r1353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1351);
  unsigned long r1354 = std__allocator_traits_std__allocator_char_____max_size(r1353);
  __allocmax1350 = r1354;
  unsigned long* r1355 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1349, &__allocmax1350);
  unsigned long t1356 = *r1355;
  unsigned long c1357 = 1;
  unsigned long b1358 = t1356 - c1357;
  __retval1348 = b1358;
  unsigned long t1359 = __retval1348;
  return t1359;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1360) {
bb1361: ;
  struct std____new_allocator_char_* this1362;
  unsigned long __retval1363;
  this1362 = v1360;
  struct std____new_allocator_char_* t1364 = this1362;
  unsigned long c1365 = 9223372036854775807;
  unsigned long c1366 = 1;
  unsigned long b1367 = c1365 / c1366;
  __retval1363 = b1367;
  unsigned long t1368 = __retval1363;
  return t1368;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1369, unsigned long v1370, void* v1371) {
bb1372: ;
  struct std____new_allocator_char_* this1373;
  unsigned long __n1374;
  void* unnamed1375;
  char* __retval1376;
  this1373 = v1369;
  __n1374 = v1370;
  unnamed1375 = v1371;
  struct std____new_allocator_char_* t1377 = this1373;
    unsigned long t1378 = __n1374;
    unsigned long r1379 = std____new_allocator_char____M_max_size___const(t1377);
    _Bool c1380 = ((t1378 > r1379)) ? 1 : 0;
    if (c1380) {
        unsigned long t1381 = __n1374;
        unsigned long c1382 = -1;
        unsigned long c1383 = 1;
        unsigned long b1384 = c1382 / c1383;
        _Bool c1385 = ((t1381 > b1384)) ? 1 : 0;
        if (c1385) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1386 = 1;
    unsigned long c1387 = 16;
    _Bool c1388 = ((c1386 > c1387)) ? 1 : 0;
    if (c1388) {
      unsigned long __al1389;
      unsigned long c1390 = 1;
      __al1389 = c1390;
      unsigned long t1391 = __n1374;
      unsigned long c1392 = 1;
      unsigned long b1393 = t1391 * c1392;
      unsigned long t1394 = __al1389;
      void* r1395 = operator_new_2(b1393, t1394);
      char* cast1396 = (char*)r1395;
      __retval1376 = cast1396;
      char* t1397 = __retval1376;
      return t1397;
    }
  unsigned long t1398 = __n1374;
  unsigned long c1399 = 1;
  unsigned long b1400 = t1398 * c1399;
  void* r1401 = operator_new(b1400);
  char* cast1402 = (char*)r1401;
  __retval1376 = cast1402;
  char* t1403 = __retval1376;
  return t1403;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1404, unsigned long v1405) {
bb1406: ;
  struct std__allocator_char_* this1407;
  unsigned long __n1408;
  char* __retval1409;
  this1407 = v1404;
  __n1408 = v1405;
  struct std__allocator_char_* t1410 = this1407;
    _Bool r1411 = std____is_constant_evaluated();
    if (r1411) {
        unsigned long t1412 = __n1408;
        unsigned long c1413 = 1;
        unsigned long ovr1414;
        _Bool ovf1415 = __builtin_mul_overflow(t1412, c1413, &ovr1414);
        __n1408 = ovr1414;
        if (ovf1415) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1416 = __n1408;
      void* r1417 = operator_new(t1416);
      char* cast1418 = (char*)r1417;
      __retval1409 = cast1418;
      char* t1419 = __retval1409;
      return t1419;
    }
  struct std____new_allocator_char_* base1420 = (struct std____new_allocator_char_*)((char *)t1410 + 0);
  unsigned long t1421 = __n1408;
  void* c1422 = ((void*)0);
  char* r1423 = std____new_allocator_char___allocate(base1420, t1421, c1422);
  __retval1409 = r1423;
  char* t1424 = __retval1409;
  return t1424;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1425, unsigned long v1426) {
bb1427: ;
  struct std__allocator_char_* __a1428;
  unsigned long __n1429;
  char* __retval1430;
  __a1428 = v1425;
  __n1429 = v1426;
  struct std__allocator_char_* t1431 = __a1428;
  unsigned long t1432 = __n1429;
  char* r1433 = std__allocator_char___allocate(t1431, t1432);
  __retval1430 = r1433;
  char* t1434 = __retval1430;
  return t1434;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1435, unsigned long v1436) {
bb1437: ;
  struct std__allocator_char_* __a1438;
  unsigned long __n1439;
  char* __retval1440;
  char* __p1441;
  __a1438 = v1435;
  __n1439 = v1436;
  struct std__allocator_char_* t1442 = __a1438;
  unsigned long t1443 = __n1439;
  char* r1444 = std__allocator_traits_std__allocator_char_____allocate(t1442, t1443);
  __p1441 = r1444;
  char* t1445 = __p1441;
  __retval1440 = t1445;
  char* t1446 = __retval1440;
  return t1446;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1447) {
bb1448: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1449;
  struct std__allocator_char_* __retval1450;
  this1449 = v1447;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1451 = this1449;
  struct std__allocator_char_* base1452 = (struct std__allocator_char_*)((char *)&(t1451->_M_dataplus) + 0);
  __retval1450 = base1452;
  struct std__allocator_char_* t1453 = __retval1450;
  return t1453;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1454, unsigned long* v1455, unsigned long v1456) {
bb1457: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1458;
  unsigned long* __capacity1459;
  unsigned long __old_capacity1460;
  char* __retval1461;
  this1458 = v1454;
  __capacity1459 = v1455;
  __old_capacity1460 = v1456;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1462 = this1458;
    unsigned long* t1463 = __capacity1459;
    unsigned long t1464 = *t1463;
    unsigned long r1465 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1462);
    _Bool c1466 = ((t1464 > r1465)) ? 1 : 0;
    if (c1466) {
      char* cast1467 = (char*)&(_str_7);
      std____throw_length_error(cast1467);
    }
    unsigned long* t1468 = __capacity1459;
    unsigned long t1469 = *t1468;
    unsigned long t1470 = __old_capacity1460;
    _Bool c1471 = ((t1469 > t1470)) ? 1 : 0;
    _Bool ternary1472;
    if (c1471) {
      unsigned long* t1473 = __capacity1459;
      unsigned long t1474 = *t1473;
      unsigned long c1475 = 2;
      unsigned long t1476 = __old_capacity1460;
      unsigned long b1477 = c1475 * t1476;
      _Bool c1478 = ((t1474 < b1477)) ? 1 : 0;
      ternary1472 = (_Bool)c1478;
    } else {
      _Bool c1479 = 0;
      ternary1472 = (_Bool)c1479;
    }
    if (ternary1472) {
      unsigned long c1480 = 2;
      unsigned long t1481 = __old_capacity1460;
      unsigned long b1482 = c1480 * t1481;
      unsigned long* t1483 = __capacity1459;
      *t1483 = b1482;
        unsigned long* t1484 = __capacity1459;
        unsigned long t1485 = *t1484;
        unsigned long r1486 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1462);
        _Bool c1487 = ((t1485 > r1486)) ? 1 : 0;
        if (c1487) {
          unsigned long r1488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1462);
          unsigned long* t1489 = __capacity1459;
          *t1489 = r1488;
        }
    }
  struct std__allocator_char_* r1490 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1462);
  unsigned long* t1491 = __capacity1459;
  unsigned long t1492 = *t1491;
  unsigned long c1493 = 1;
  unsigned long b1494 = t1492 + c1493;
  char* r1495 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1490, b1494);
  __retval1461 = r1495;
  char* t1496 = __retval1461;
  return t1496;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1497, unsigned long v1498) {
bb1499: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1500;
  unsigned long __capacity1501;
  this1500 = v1497;
  __capacity1501 = v1498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1502 = this1500;
  unsigned long t1503 = __capacity1501;
  t1502->field2._M_allocated_capacity = t1503;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1504, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1505) {
bb1506: ;
  struct _Guard* this1507;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1508;
  this1507 = v1504;
  __s1508 = v1505;
  struct _Guard* t1509 = this1507;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1510 = __s1508;
  t1509->_M_guarded = t1510;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1511, char* v1512, unsigned long v1513) {
bb1514: ;
  char* __s11515;
  char* __s21516;
  unsigned long __n1517;
  char* __retval1518;
  __s11515 = v1511;
  __s21516 = v1512;
  __n1517 = v1513;
    unsigned long t1519 = __n1517;
    unsigned long c1520 = 0;
    _Bool c1521 = ((t1519 == c1520)) ? 1 : 0;
    if (c1521) {
      char* t1522 = __s11515;
      __retval1518 = t1522;
      char* t1523 = __retval1518;
      return t1523;
    }
    _Bool r1524 = std____is_constant_evaluated();
    if (r1524) {
        unsigned long __i1525;
        unsigned long c1526 = 0;
        __i1525 = c1526;
        while (1) {
          unsigned long t1528 = __i1525;
          unsigned long t1529 = __n1517;
          _Bool c1530 = ((t1528 < t1529)) ? 1 : 0;
          if (!c1530) break;
          char* t1531 = __s11515;
          unsigned long t1532 = __i1525;
          char* ptr1533 = &(t1531)[t1532];
          unsigned long t1534 = __i1525;
          char* t1535 = __s21516;
          char* ptr1536 = &(t1535)[t1534];
          char* r1537 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1533, ptr1536);
        for_step1527: ;
          unsigned long t1538 = __i1525;
          unsigned long u1539 = t1538 + 1;
          __i1525 = u1539;
        }
      char* t1540 = __s11515;
      __retval1518 = t1540;
      char* t1541 = __retval1518;
      return t1541;
    }
  char* t1542 = __s11515;
  void* cast1543 = (void*)t1542;
  char* t1544 = __s21516;
  void* cast1545 = (void*)t1544;
  unsigned long t1546 = __n1517;
  unsigned long c1547 = 1;
  unsigned long b1548 = t1546 * c1547;
  void* r1549 = memcpy(cast1543, cast1545, b1548);
  char* t1550 = __s11515;
  __retval1518 = t1550;
  char* t1551 = __retval1518;
  return t1551;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1552, char* v1553, unsigned long v1554) {
bb1555: ;
  char* __s11556;
  char* __s21557;
  unsigned long __n1558;
  char* __retval1559;
  __s11556 = v1552;
  __s21557 = v1553;
  __n1558 = v1554;
    unsigned long t1560 = __n1558;
    unsigned long c1561 = 0;
    _Bool c1562 = ((t1560 == c1561)) ? 1 : 0;
    if (c1562) {
      char* t1563 = __s11556;
      __retval1559 = t1563;
      char* t1564 = __retval1559;
      return t1564;
    }
    _Bool r1565 = std____is_constant_evaluated();
    if (r1565) {
      char* t1566 = __s11556;
      char* t1567 = __s21557;
      unsigned long t1568 = __n1558;
      char* r1569 = __gnu_cxx__char_traits_char___copy(t1566, t1567, t1568);
      __retval1559 = r1569;
      char* t1570 = __retval1559;
      return t1570;
    }
  char* t1571 = __s11556;
  void* cast1572 = (void*)t1571;
  char* t1573 = __s21557;
  void* cast1574 = (void*)t1573;
  unsigned long t1575 = __n1558;
  void* r1576 = memcpy(cast1572, cast1574, t1575);
  char* cast1577 = (char*)r1576;
  __retval1559 = cast1577;
  char* t1578 = __retval1559;
  return t1578;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1579, char* v1580, unsigned long v1581) {
bb1582: ;
  char* __d1583;
  char* __s1584;
  unsigned long __n1585;
  __d1583 = v1579;
  __s1584 = v1580;
  __n1585 = v1581;
    unsigned long t1586 = __n1585;
    unsigned long c1587 = 1;
    _Bool c1588 = ((t1586 == c1587)) ? 1 : 0;
    if (c1588) {
      char* t1589 = __d1583;
      char* t1590 = __s1584;
      std__char_traits_char___assign_2(t1589, t1590);
    } else {
      char* t1591 = __d1583;
      char* t1592 = __s1584;
      unsigned long t1593 = __n1585;
      char* r1594 = std__char_traits_char___copy(t1591, t1592, t1593);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1595) {
bb1596: ;
  char* __it1597;
  char* __retval1598;
  __it1597 = v1595;
  char* t1599 = __it1597;
  __retval1598 = t1599;
  char* t1600 = __retval1598;
  return t1600;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1601, char* v1602, char* v1603) {
bb1604: ;
  char* __p1605;
  char* __k11606;
  char* __k21607;
  __p1605 = v1601;
  __k11606 = v1602;
  __k21607 = v1603;
    char* t1608 = __p1605;
    char* t1609 = __k11606;
    char* r1610 = char_const__std____niter_base_char_const__(t1609);
    char* t1611 = __k21607;
    char* t1612 = __k11606;
    long diff1613 = t1611 - t1612;
    unsigned long cast1614 = (unsigned long)diff1613;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1608, r1610, cast1614);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1615) {
bb1616: ;
  struct _Guard* this1617;
  this1617 = v1615;
  struct _Guard* t1618 = this1617;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1619 = t1618->_M_guarded;
    _Bool cast1620 = (_Bool)t1619;
    if (cast1620) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1621 = t1618->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1621);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1622, char* v1623, char* v1624, struct std__forward_iterator_tag v1625) {
bb1626: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1627;
  char* __beg1628;
  char* __end1629;
  struct std__forward_iterator_tag unnamed1630;
  unsigned long __dnew1631;
  struct _Guard __guard1632;
  this1627 = v1622;
  __beg1628 = v1623;
  __end1629 = v1624;
  unnamed1630 = v1625;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1633 = this1627;
  char* t1634 = __beg1628;
  char* t1635 = __end1629;
  long r1636 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1634, t1635);
  unsigned long cast1637 = (unsigned long)r1636;
  __dnew1631 = cast1637;
    unsigned long t1638 = __dnew1631;
    unsigned long c1639 = 15;
    _Bool c1640 = ((t1638 > c1639)) ? 1 : 0;
    if (c1640) {
      unsigned long c1641 = 0;
      char* r1642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1633, &__dnew1631, c1641);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1633, r1642);
      unsigned long t1643 = __dnew1631;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1633, t1643);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1633);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1632, t1633);
    char* r1644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1633);
    char* t1645 = __beg1628;
    char* t1646 = __end1629;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1644, t1645, t1646);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1647 = ((void*)0);
    __guard1632._M_guarded = c1647;
    unsigned long t1648 = __dnew1631;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1633, t1648);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1632);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1649) {
bb1650: ;
  char* __r1651;
  char* __retval1652;
  __r1651 = v1649;
  char* t1653 = __r1651;
  __retval1652 = t1653;
  char* t1654 = __retval1652;
  return t1654;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1655) {
bb1656: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1657;
  char* __retval1658;
  this1657 = v1655;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1659 = this1657;
  char* cast1660 = (char*)&(t1659->field2._M_local_buf);
  char* r1661 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1660);
  __retval1658 = r1661;
  char* t1662 = __retval1658;
  return t1662;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1663) {
bb1664: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1665;
  _Bool __retval1666;
  this1665 = v1663;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1667 = this1665;
    char* r1668 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1667);
    char* r1669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1667);
    _Bool c1670 = ((r1668 == r1669)) ? 1 : 0;
    if (c1670) {
        unsigned long t1671 = t1667->_M_string_length;
        unsigned long c1672 = 15;
        _Bool c1673 = ((t1671 > c1672)) ? 1 : 0;
        if (c1673) {
          __builtin_unreachable();
        }
      _Bool c1674 = 1;
      __retval1666 = c1674;
      _Bool t1675 = __retval1666;
      return t1675;
    }
  _Bool c1676 = 0;
  __retval1666 = c1676;
  _Bool t1677 = __retval1666;
  return t1677;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1678, char* v1679, unsigned long v1680) {
bb1681: ;
  struct std____new_allocator_char_* this1682;
  char* __p1683;
  unsigned long __n1684;
  this1682 = v1678;
  __p1683 = v1679;
  __n1684 = v1680;
  struct std____new_allocator_char_* t1685 = this1682;
    unsigned long c1686 = 1;
    unsigned long c1687 = 16;
    _Bool c1688 = ((c1686 > c1687)) ? 1 : 0;
    if (c1688) {
      char* t1689 = __p1683;
      void* cast1690 = (void*)t1689;
      unsigned long t1691 = __n1684;
      unsigned long c1692 = 1;
      unsigned long b1693 = t1691 * c1692;
      unsigned long c1694 = 1;
      operator_delete_3(cast1690, b1693, c1694);
      return;
    }
  char* t1695 = __p1683;
  void* cast1696 = (void*)t1695;
  unsigned long t1697 = __n1684;
  unsigned long c1698 = 1;
  unsigned long b1699 = t1697 * c1698;
  operator_delete_2(cast1696, b1699);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1700, char* v1701, unsigned long v1702) {
bb1703: ;
  struct std__allocator_char_* this1704;
  char* __p1705;
  unsigned long __n1706;
  this1704 = v1700;
  __p1705 = v1701;
  __n1706 = v1702;
  struct std__allocator_char_* t1707 = this1704;
    _Bool r1708 = std____is_constant_evaluated();
    if (r1708) {
      char* t1709 = __p1705;
      void* cast1710 = (void*)t1709;
      operator_delete(cast1710);
      return;
    }
  struct std____new_allocator_char_* base1711 = (struct std____new_allocator_char_*)((char *)t1707 + 0);
  char* t1712 = __p1705;
  unsigned long t1713 = __n1706;
  std____new_allocator_char___deallocate(base1711, t1712, t1713);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1714, char* v1715, unsigned long v1716) {
bb1717: ;
  struct std__allocator_char_* __a1718;
  char* __p1719;
  unsigned long __n1720;
  __a1718 = v1714;
  __p1719 = v1715;
  __n1720 = v1716;
  struct std__allocator_char_* t1721 = __a1718;
  char* t1722 = __p1719;
  unsigned long t1723 = __n1720;
  std__allocator_char___deallocate(t1721, t1722, t1723);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1724, unsigned long v1725) {
bb1726: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1727;
  unsigned long __size1728;
  this1727 = v1724;
  __size1728 = v1725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1729 = this1727;
  struct std__allocator_char_* r1730 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1729);
  char* r1731 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1729);
  unsigned long t1732 = __size1728;
  unsigned long c1733 = 1;
  unsigned long b1734 = t1732 + c1733;
  std__allocator_traits_std__allocator_char_____deallocate(r1730, r1731, b1734);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1735) {
bb1736: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1737;
  this1737 = v1735;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1738 = this1737;
    _Bool r1739 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1738);
    _Bool u1740 = !r1739;
    if (u1740) {
      unsigned long t1741 = t1738->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1738, t1741);
    }
  return;
}

