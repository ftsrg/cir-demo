extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
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

char _str[3] = "f(";
char _str_1[3] = ") ";
char _str_2[9] = "f(x) = x";
char _str_3[19] = "str2 == \"f(x) = x\"";
char _str_4[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[29] = "basic_string::_M_replace_aux";
char _str_6[24] = "basic_string::_M_create";
char _str_7[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____4(char* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign_2(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

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

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v7) {
bb8: ;
  struct std__allocator_char_* __a9;
  unsigned long __retval10;
  __a9 = v7;
  unsigned long c11 = -1;
  unsigned long c12 = 1;
  unsigned long b13 = c11 / c12;
  __retval10 = b13;
  unsigned long t14 = __retval10;
  return t14;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v15) {
bb16: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  struct std__allocator_char_* __retval18;
  this17 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = this17;
  struct std__allocator_char_* base20 = (struct std__allocator_char_*)((char *)&(t19->_M_dataplus) + 0);
  __retval18 = base20;
  struct std__allocator_char_* t21 = __retval18;
  return t21;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v22, unsigned long* v23) {
bb24: ;
  unsigned long* __a25;
  unsigned long* __b26;
  unsigned long* __retval27;
  __a25 = v22;
  __b26 = v23;
    unsigned long* t28 = __b26;
    unsigned long t29 = *t28;
    unsigned long* t30 = __a25;
    unsigned long t31 = *t30;
    _Bool c32 = ((t29 < t31)) ? 1 : 0;
    if (c32) {
      unsigned long* t33 = __b26;
      __retval27 = t33;
      unsigned long* t34 = __retval27;
      return t34;
    }
  unsigned long* t35 = __a25;
  __retval27 = t35;
  unsigned long* t36 = __retval27;
  return t36;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __diffmax41;
  unsigned long __allocmax42;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = this39;
  unsigned long c44 = 9223372036854775807;
  __diffmax41 = c44;
  struct std__allocator_char_* r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t43);
  unsigned long r46 = std__allocator_traits_std__allocator_char_____max_size(r45);
  __allocmax42 = r46;
  unsigned long* r47 = unsigned_long_const__std__min_unsigned_long_(&__diffmax41, &__allocmax42);
  unsigned long t48 = *r47;
  unsigned long c49 = 1;
  unsigned long b50 = t48 - c49;
  __retval40 = b50;
  unsigned long t51 = __retval40;
  return t51;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52, unsigned long v53, unsigned long v54, char* v55) {
bb56: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __n158;
  unsigned long __n259;
  char* __s60;
  this57 = v52;
  __n158 = v53;
  __n259 = v54;
  __s60 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t61 = this57;
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t61);
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t61);
    unsigned long t64 = __n158;
    unsigned long b65 = r63 - t64;
    unsigned long b66 = r62 - b65;
    unsigned long t67 = __n259;
    _Bool c68 = ((b66 < t67)) ? 1 : 0;
    if (c68) {
      char* t69 = __s60;
      std____throw_length_error(t69);
    }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v70) {
bb71: ;
  char* __r72;
  char* __retval73;
  __r72 = v70;
  char* t74 = __r72;
  __retval73 = t74;
  char* t75 = __retval73;
  return t75;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v76) {
bb77: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this78;
  char* __retval79;
  this78 = v76;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = this78;
  char* cast81 = (char*)&(t80->field2._M_local_buf);
  char* r82 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast81);
  __retval79 = r82;
  char* t83 = __retval79;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84) {
bb85: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this86;
  _Bool __retval87;
  this86 = v84;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t88 = this86;
    char* r89 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t88);
    char* r90 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t88);
    _Bool c91 = ((r89 == r90)) ? 1 : 0;
    if (c91) {
        unsigned long t92 = t88->_M_string_length;
        unsigned long c93 = 15;
        _Bool c94 = ((t92 > c93)) ? 1 : 0;
        if (c94) {
          __builtin_unreachable();
        }
      _Bool c95 = 1;
      __retval87 = c95;
      _Bool t96 = __retval87;
      return t96;
    }
  _Bool c97 = 0;
  __retval87 = c97;
  _Bool t98 = __retval87;
  return t98;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v99) {
bb100: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this101;
  unsigned long __retval102;
  unsigned long __sz103;
  this101 = v99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = this101;
  _Bool r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t104);
  unsigned long ternary106;
  if (r105) {
    unsigned long c107 = 15;
    ternary106 = (unsigned long)c107;
  } else {
    unsigned long t108 = t104->field2._M_allocated_capacity;
    ternary106 = (unsigned long)t108;
  }
  __sz103 = ternary106;
    unsigned long t109 = __sz103;
    unsigned long c110 = 15;
    _Bool c111 = ((t109 < c110)) ? 1 : 0;
    _Bool ternary112;
    if (c111) {
      _Bool c113 = 1;
      ternary112 = (_Bool)c113;
    } else {
      unsigned long t114 = __sz103;
      unsigned long r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t104);
      _Bool c116 = ((t114 > r115)) ? 1 : 0;
      ternary112 = (_Bool)c116;
    }
    if (ternary112) {
      __builtin_unreachable();
    }
  unsigned long t117 = __sz103;
  __retval102 = t117;
  unsigned long t118 = __retval102;
  return t118;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v119, char* v120) {
bb121: ;
  char* __c1122;
  char* __c2123;
  __c1122 = v119;
  __c2123 = v120;
    _Bool r124 = std____is_constant_evaluated();
    if (r124) {
      char* t125 = __c1122;
      char* t126 = __c2123;
      char* r127 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t125, t126);
    } else {
      char* t128 = __c2123;
      char t129 = *t128;
      char* t130 = __c1122;
      *t130 = t129;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v131, char* v132, unsigned long v133) {
bb134: ;
  char* __s1135;
  char* __s2136;
  unsigned long __n137;
  char* __retval138;
  __s1135 = v131;
  __s2136 = v132;
  __n137 = v133;
    unsigned long t139 = __n137;
    unsigned long c140 = 0;
    _Bool c141 = ((t139 == c140)) ? 1 : 0;
    if (c141) {
      char* t142 = __s1135;
      __retval138 = t142;
      char* t143 = __retval138;
      return t143;
    }
    _Bool r144 = std____is_constant_evaluated();
    if (r144) {
        unsigned long __i145;
        unsigned long c146 = 0;
        __i145 = c146;
        while (1) {
          unsigned long t148 = __i145;
          unsigned long t149 = __n137;
          _Bool c150 = ((t148 < t149)) ? 1 : 0;
          if (!c150) break;
          char* t151 = __s1135;
          unsigned long t152 = __i145;
          char* ptr153 = &(t151)[t152];
          unsigned long t154 = __i145;
          char* t155 = __s2136;
          char* ptr156 = &(t155)[t154];
          char* r157 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr153, ptr156);
        for_step147: ;
          unsigned long t158 = __i145;
          unsigned long u159 = t158 + 1;
          __i145 = u159;
        }
      char* t160 = __s1135;
      __retval138 = t160;
      char* t161 = __retval138;
      return t161;
    }
  char* t162 = __s1135;
  void* cast163 = (void*)t162;
  char* t164 = __s2136;
  void* cast165 = (void*)t164;
  unsigned long t166 = __n137;
  unsigned long c167 = 1;
  unsigned long b168 = t166 * c167;
  void* r169 = memcpy(cast163, cast165, b168);
  char* t170 = __s1135;
  __retval138 = t170;
  char* t171 = __retval138;
  return t171;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v172, char* v173, unsigned long v174) {
bb175: ;
  char* __s1176;
  char* __s2177;
  unsigned long __n178;
  char* __retval179;
  __s1176 = v172;
  __s2177 = v173;
  __n178 = v174;
    unsigned long t180 = __n178;
    unsigned long c181 = 0;
    _Bool c182 = ((t180 == c181)) ? 1 : 0;
    if (c182) {
      char* t183 = __s1176;
      __retval179 = t183;
      char* t184 = __retval179;
      return t184;
    }
    _Bool r185 = std____is_constant_evaluated();
    if (r185) {
        char* t186 = __s2177;
        char* t187 = __s1176;
        _Bool c188 = ((t186 < t187)) ? 1 : 0;
        _Bool isconst189 = 0;
        _Bool ternary190;
        if (isconst189) {
          char* t191 = __s1176;
          char* t192 = __s2177;
          _Bool c193 = ((t191 > t192)) ? 1 : 0;
          ternary190 = (_Bool)c193;
        } else {
          _Bool c194 = 0;
          ternary190 = (_Bool)c194;
        }
        _Bool ternary195;
        if (ternary190) {
          char* t196 = __s1176;
          char* t197 = __s2177;
          unsigned long t198 = __n178;
          char* ptr199 = &(t197)[t198];
          _Bool c200 = ((t196 < ptr199)) ? 1 : 0;
          ternary195 = (_Bool)c200;
        } else {
          _Bool c201 = 0;
          ternary195 = (_Bool)c201;
        }
        if (ternary195) {
            do {
                unsigned long t202 = __n178;
                unsigned long u203 = t202 - 1;
                __n178 = u203;
                unsigned long t204 = __n178;
                char* t205 = __s1176;
                char* ptr206 = &(t205)[t204];
                unsigned long t207 = __n178;
                char* t208 = __s2177;
                char* ptr209 = &(t208)[t207];
                __gnu_cxx__char_traits_char___assign_2(ptr206, ptr209);
              unsigned long t210 = __n178;
              unsigned long c211 = 0;
              _Bool c212 = ((t210 > c211)) ? 1 : 0;
              if (!c212) break;
            } while (1);
        } else {
          char* t213 = __s1176;
          char* t214 = __s2177;
          unsigned long t215 = __n178;
          char* r216 = __gnu_cxx__char_traits_char___copy(t213, t214, t215);
        }
      char* t217 = __s1176;
      __retval179 = t217;
      char* t218 = __retval179;
      return t218;
    }
  char* t219 = __s1176;
  void* cast220 = (void*)t219;
  char* t221 = __s2177;
  void* cast222 = (void*)t221;
  unsigned long t223 = __n178;
  unsigned long c224 = 1;
  unsigned long b225 = t223 * c224;
  void* r226 = memmove(cast220, cast222, b225);
  char* t227 = __s1176;
  __retval179 = t227;
  char* t228 = __retval179;
  return t228;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v229, char* v230, unsigned long v231) {
bb232: ;
  char* __s1233;
  char* __s2234;
  unsigned long __n235;
  char* __retval236;
  __s1233 = v229;
  __s2234 = v230;
  __n235 = v231;
    unsigned long t237 = __n235;
    unsigned long c238 = 0;
    _Bool c239 = ((t237 == c238)) ? 1 : 0;
    if (c239) {
      char* t240 = __s1233;
      __retval236 = t240;
      char* t241 = __retval236;
      return t241;
    }
    _Bool r242 = std____is_constant_evaluated();
    if (r242) {
      char* t243 = __s1233;
      char* t244 = __s2234;
      unsigned long t245 = __n235;
      char* r246 = __gnu_cxx__char_traits_char___move(t243, t244, t245);
      __retval236 = r246;
      char* t247 = __retval236;
      return t247;
    }
  char* t248 = __s1233;
  void* cast249 = (void*)t248;
  char* t250 = __s2234;
  void* cast251 = (void*)t250;
  unsigned long t252 = __n235;
  void* r253 = memmove(cast249, cast251, t252);
  char* cast254 = (char*)r253;
  __retval236 = cast254;
  char* t255 = __retval236;
  return t255;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v256, char* v257, unsigned long v258) {
bb259: ;
  char* __d260;
  char* __s261;
  unsigned long __n262;
  __d260 = v256;
  __s261 = v257;
  __n262 = v258;
    unsigned long t263 = __n262;
    unsigned long c264 = 1;
    _Bool c265 = ((t263 == c264)) ? 1 : 0;
    if (c265) {
      char* t266 = __d260;
      char* t267 = __s261;
      std__char_traits_char___assign_2(t266, t267);
    } else {
      char* t268 = __d260;
      char* t269 = __s261;
      unsigned long t270 = __n262;
      char* r271 = std__char_traits_char___move(t268, t269, t270);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v272) {
bb273: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this274;
  unsigned long __retval275;
  this274 = v272;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = this274;
  unsigned long r277 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t276);
  __retval275 = r277;
  unsigned long t278 = __retval275;
  return t278;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v279) {
bb280: ;
  struct std____new_allocator_char_* this281;
  unsigned long __retval282;
  this281 = v279;
  struct std____new_allocator_char_* t283 = this281;
  unsigned long c284 = 9223372036854775807;
  unsigned long c285 = 1;
  unsigned long b286 = c284 / c285;
  __retval282 = b286;
  unsigned long t287 = __retval282;
  return t287;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v288, unsigned long v289, void* v290) {
bb291: ;
  struct std____new_allocator_char_* this292;
  unsigned long __n293;
  void* unnamed294;
  char* __retval295;
  this292 = v288;
  __n293 = v289;
  unnamed294 = v290;
  struct std____new_allocator_char_* t296 = this292;
    unsigned long t297 = __n293;
    unsigned long r298 = std____new_allocator_char____M_max_size___const(t296);
    _Bool c299 = ((t297 > r298)) ? 1 : 0;
    if (c299) {
        unsigned long t300 = __n293;
        unsigned long c301 = -1;
        unsigned long c302 = 1;
        unsigned long b303 = c301 / c302;
        _Bool c304 = ((t300 > b303)) ? 1 : 0;
        if (c304) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c305 = 1;
    unsigned long c306 = 16;
    _Bool c307 = ((c305 > c306)) ? 1 : 0;
    if (c307) {
      unsigned long __al308;
      unsigned long c309 = 1;
      __al308 = c309;
      unsigned long t310 = __n293;
      unsigned long c311 = 1;
      unsigned long b312 = t310 * c311;
      unsigned long t313 = __al308;
      void* r314 = operator_new_2(b312, t313);
      char* cast315 = (char*)r314;
      __retval295 = cast315;
      char* t316 = __retval295;
      return t316;
    }
  unsigned long t317 = __n293;
  unsigned long c318 = 1;
  unsigned long b319 = t317 * c318;
  void* r320 = operator_new(b319);
  char* cast321 = (char*)r320;
  __retval295 = cast321;
  char* t322 = __retval295;
  return t322;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v323, unsigned long v324) {
bb325: ;
  struct std__allocator_char_* this326;
  unsigned long __n327;
  char* __retval328;
  this326 = v323;
  __n327 = v324;
  struct std__allocator_char_* t329 = this326;
    _Bool r330 = std____is_constant_evaluated();
    if (r330) {
        unsigned long t331 = __n327;
        unsigned long c332 = 1;
        unsigned long ovr333;
        _Bool ovf334 = __builtin_mul_overflow(t331, c332, &ovr333);
        __n327 = ovr333;
        if (ovf334) {
          std____throw_bad_array_new_length();
        }
      unsigned long t335 = __n327;
      void* r336 = operator_new(t335);
      char* cast337 = (char*)r336;
      __retval328 = cast337;
      char* t338 = __retval328;
      return t338;
    }
  struct std____new_allocator_char_* base339 = (struct std____new_allocator_char_*)((char *)t329 + 0);
  unsigned long t340 = __n327;
  void* c341 = ((void*)0);
  char* r342 = std____new_allocator_char___allocate(base339, t340, c341);
  __retval328 = r342;
  char* t343 = __retval328;
  return t343;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v344, unsigned long v345) {
bb346: ;
  struct std__allocator_char_* __a347;
  unsigned long __n348;
  char* __retval349;
  __a347 = v344;
  __n348 = v345;
  struct std__allocator_char_* t350 = __a347;
  unsigned long t351 = __n348;
  char* r352 = std__allocator_char___allocate(t350, t351);
  __retval349 = r352;
  char* t353 = __retval349;
  return t353;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v354, unsigned long v355) {
bb356: ;
  struct std__allocator_char_* __a357;
  unsigned long __n358;
  char* __retval359;
  char* __p360;
  __a357 = v354;
  __n358 = v355;
  struct std__allocator_char_* t361 = __a357;
  unsigned long t362 = __n358;
  char* r363 = std__allocator_traits_std__allocator_char_____allocate(t361, t362);
  __p360 = r363;
  char* t364 = __p360;
  __retval359 = t364;
  char* t365 = __retval359;
  return t365;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v366) {
bb367: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this368;
  struct std__allocator_char_* __retval369;
  this368 = v366;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t370 = this368;
  struct std__allocator_char_* base371 = (struct std__allocator_char_*)((char *)&(t370->_M_dataplus) + 0);
  __retval369 = base371;
  struct std__allocator_char_* t372 = __retval369;
  return t372;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v373, unsigned long* v374, unsigned long v375) {
bb376: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this377;
  unsigned long* __capacity378;
  unsigned long __old_capacity379;
  char* __retval380;
  this377 = v373;
  __capacity378 = v374;
  __old_capacity379 = v375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t381 = this377;
    unsigned long* t382 = __capacity378;
    unsigned long t383 = *t382;
    unsigned long r384 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t381);
    _Bool c385 = ((t383 > r384)) ? 1 : 0;
    if (c385) {
      char* cast386 = (char*)&(_str_6);
      std____throw_length_error(cast386);
    }
    unsigned long* t387 = __capacity378;
    unsigned long t388 = *t387;
    unsigned long t389 = __old_capacity379;
    _Bool c390 = ((t388 > t389)) ? 1 : 0;
    _Bool ternary391;
    if (c390) {
      unsigned long* t392 = __capacity378;
      unsigned long t393 = *t392;
      unsigned long c394 = 2;
      unsigned long t395 = __old_capacity379;
      unsigned long b396 = c394 * t395;
      _Bool c397 = ((t393 < b396)) ? 1 : 0;
      ternary391 = (_Bool)c397;
    } else {
      _Bool c398 = 0;
      ternary391 = (_Bool)c398;
    }
    if (ternary391) {
      unsigned long c399 = 2;
      unsigned long t400 = __old_capacity379;
      unsigned long b401 = c399 * t400;
      unsigned long* t402 = __capacity378;
      *t402 = b401;
        unsigned long* t403 = __capacity378;
        unsigned long t404 = *t403;
        unsigned long r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t381);
        _Bool c406 = ((t404 > r405)) ? 1 : 0;
        if (c406) {
          unsigned long r407 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t381);
          unsigned long* t408 = __capacity378;
          *t408 = r407;
        }
    }
  struct std__allocator_char_* r409 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t381);
  unsigned long* t410 = __capacity378;
  unsigned long t411 = *t410;
  unsigned long c412 = 1;
  unsigned long b413 = t411 + c412;
  char* r414 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r409, b413);
  __retval380 = r414;
  char* t415 = __retval380;
  return t415;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v416, char* v417, unsigned long v418) {
bb419: ;
  char* __s1420;
  char* __s2421;
  unsigned long __n422;
  char* __retval423;
  __s1420 = v416;
  __s2421 = v417;
  __n422 = v418;
    unsigned long t424 = __n422;
    unsigned long c425 = 0;
    _Bool c426 = ((t424 == c425)) ? 1 : 0;
    if (c426) {
      char* t427 = __s1420;
      __retval423 = t427;
      char* t428 = __retval423;
      return t428;
    }
    _Bool r429 = std____is_constant_evaluated();
    if (r429) {
      char* t430 = __s1420;
      char* t431 = __s2421;
      unsigned long t432 = __n422;
      char* r433 = __gnu_cxx__char_traits_char___copy(t430, t431, t432);
      __retval423 = r433;
      char* t434 = __retval423;
      return t434;
    }
  char* t435 = __s1420;
  void* cast436 = (void*)t435;
  char* t437 = __s2421;
  void* cast438 = (void*)t437;
  unsigned long t439 = __n422;
  void* r440 = memcpy(cast436, cast438, t439);
  char* cast441 = (char*)r440;
  __retval423 = cast441;
  char* t442 = __retval423;
  return t442;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v443, char* v444, unsigned long v445) {
bb446: ;
  char* __d447;
  char* __s448;
  unsigned long __n449;
  __d447 = v443;
  __s448 = v444;
  __n449 = v445;
    unsigned long t450 = __n449;
    unsigned long c451 = 1;
    _Bool c452 = ((t450 == c451)) ? 1 : 0;
    if (c452) {
      char* t453 = __d447;
      char* t454 = __s448;
      std__char_traits_char___assign_2(t453, t454);
    } else {
      char* t455 = __d447;
      char* t456 = __s448;
      unsigned long t457 = __n449;
      char* r458 = std__char_traits_char___copy(t455, t456, t457);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v459, char* v460, unsigned long v461) {
bb462: ;
  struct std____new_allocator_char_* this463;
  char* __p464;
  unsigned long __n465;
  this463 = v459;
  __p464 = v460;
  __n465 = v461;
  struct std____new_allocator_char_* t466 = this463;
    unsigned long c467 = 1;
    unsigned long c468 = 16;
    _Bool c469 = ((c467 > c468)) ? 1 : 0;
    if (c469) {
      char* t470 = __p464;
      void* cast471 = (void*)t470;
      unsigned long t472 = __n465;
      unsigned long c473 = 1;
      unsigned long b474 = t472 * c473;
      unsigned long c475 = 1;
      operator_delete_3(cast471, b474, c475);
      return;
    }
  char* t476 = __p464;
  void* cast477 = (void*)t476;
  unsigned long t478 = __n465;
  unsigned long c479 = 1;
  unsigned long b480 = t478 * c479;
  operator_delete_2(cast477, b480);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v481, char* v482, unsigned long v483) {
bb484: ;
  struct std__allocator_char_* this485;
  char* __p486;
  unsigned long __n487;
  this485 = v481;
  __p486 = v482;
  __n487 = v483;
  struct std__allocator_char_* t488 = this485;
    _Bool r489 = std____is_constant_evaluated();
    if (r489) {
      char* t490 = __p486;
      void* cast491 = (void*)t490;
      operator_delete(cast491);
      return;
    }
  struct std____new_allocator_char_* base492 = (struct std____new_allocator_char_*)((char *)t488 + 0);
  char* t493 = __p486;
  unsigned long t494 = __n487;
  std____new_allocator_char___deallocate(base492, t493, t494);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v495, char* v496, unsigned long v497) {
bb498: ;
  struct std__allocator_char_* __a499;
  char* __p500;
  unsigned long __n501;
  __a499 = v495;
  __p500 = v496;
  __n501 = v497;
  struct std__allocator_char_* t502 = __a499;
  char* t503 = __p500;
  unsigned long t504 = __n501;
  std__allocator_char___deallocate(t502, t503, t504);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v505, unsigned long v506) {
bb507: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this508;
  unsigned long __size509;
  this508 = v505;
  __size509 = v506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t510 = this508;
  struct std__allocator_char_* r511 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t510);
  char* r512 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t510);
  unsigned long t513 = __size509;
  unsigned long c514 = 1;
  unsigned long b515 = t513 + c514;
  std__allocator_traits_std__allocator_char_____deallocate(r511, r512, b515);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v516) {
bb517: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this518;
  this518 = v516;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = this518;
    _Bool r520 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t519);
    _Bool u521 = !r520;
    if (u521) {
      unsigned long t522 = t519->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t519, t522);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v523, char* v524) {
bb525: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this526;
  char* __p527;
  this526 = v523;
  __p527 = v524;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = this526;
  char* t529 = __p527;
  t528->_M_dataplus._M_p = t529;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v530, unsigned long v531) {
bb532: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this533;
  unsigned long __capacity534;
  this533 = v530;
  __capacity534 = v531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t535 = this533;
  unsigned long t536 = __capacity534;
  t535->field2._M_allocated_capacity = t536;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v537, unsigned long v538, unsigned long v539, char* v540, unsigned long v541) {
bb542: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this543;
  unsigned long __pos544;
  unsigned long __len1545;
  char* __s546;
  unsigned long __len2547;
  unsigned long __how_much548;
  unsigned long __new_capacity549;
  char* __r550;
  this543 = v537;
  __pos544 = v538;
  __len1545 = v539;
  __s546 = v540;
  __len2547 = v541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t551 = this543;
  unsigned long r552 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t551);
  unsigned long t553 = __pos544;
  unsigned long b554 = r552 - t553;
  unsigned long t555 = __len1545;
  unsigned long b556 = b554 - t555;
  __how_much548 = b556;
  unsigned long r557 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t551);
  unsigned long t558 = __len2547;
  unsigned long b559 = r557 + t558;
  unsigned long t560 = __len1545;
  unsigned long b561 = b559 - t560;
  __new_capacity549 = b561;
  unsigned long r562 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t551);
  char* r563 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t551, &__new_capacity549, r562);
  __r550 = r563;
    unsigned long t564 = __pos544;
    _Bool cast565 = (_Bool)t564;
    if (cast565) {
      char* t566 = __r550;
      char* r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t551);
      unsigned long t568 = __pos544;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t566, r567, t568);
    }
    char* t569 = __s546;
    _Bool cast570 = (_Bool)t569;
    _Bool ternary571;
    if (cast570) {
      unsigned long t572 = __len2547;
      _Bool cast573 = (_Bool)t572;
      ternary571 = (_Bool)cast573;
    } else {
      _Bool c574 = 0;
      ternary571 = (_Bool)c574;
    }
    if (ternary571) {
      char* t575 = __r550;
      unsigned long t576 = __pos544;
      char* ptr577 = &(t575)[t576];
      char* t578 = __s546;
      unsigned long t579 = __len2547;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr577, t578, t579);
    }
    unsigned long t580 = __how_much548;
    _Bool cast581 = (_Bool)t580;
    if (cast581) {
      char* t582 = __r550;
      unsigned long t583 = __pos544;
      char* ptr584 = &(t582)[t583];
      unsigned long t585 = __len2547;
      char* ptr586 = &(ptr584)[t585];
      char* r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t551);
      unsigned long t588 = __pos544;
      char* ptr589 = &(r587)[t588];
      unsigned long t590 = __len1545;
      char* ptr591 = &(ptr589)[t590];
      unsigned long t592 = __how_much548;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr586, ptr591, t592);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t551);
  char* t593 = __r550;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t551, t593);
  unsigned long t594 = __new_capacity549;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t551, t594);
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v595, char* v596) {
bb597: ;
  char* __location598;
  char* __args599;
  char* __retval600;
  void* __loc601;
  __location598 = v595;
  __args599 = v596;
  char* t602 = __location598;
  void* cast603 = (void*)t602;
  __loc601 = cast603;
    void* t604 = __loc601;
    char* cast605 = (char*)t604;
    char* t606 = __args599;
    char t607 = *t606;
    *cast605 = t607;
    __retval600 = cast605;
    char* t608 = __retval600;
    return t608;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v609, unsigned long v610, char v611) {
bb612: ;
  char* __s613;
  unsigned long __n614;
  char __a615;
  char* __retval616;
  __s613 = v609;
  __n614 = v610;
  __a615 = v611;
    _Bool r617 = std____is_constant_evaluated();
    if (r617) {
        unsigned long __i618;
        unsigned long c619 = 0;
        __i618 = c619;
        while (1) {
          unsigned long t621 = __i618;
          unsigned long t622 = __n614;
          _Bool c623 = ((t621 < t622)) ? 1 : 0;
          if (!c623) break;
          char* t624 = __s613;
          unsigned long t625 = __i618;
          char* ptr626 = &(t624)[t625];
          char* r627 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr626, &__a615);
        for_step620: ;
          unsigned long t628 = __i618;
          unsigned long u629 = t628 + 1;
          __i618 = u629;
        }
      char* t630 = __s613;
      __retval616 = t630;
      char* t631 = __retval616;
      return t631;
    }
      unsigned long t632 = __n614;
      _Bool cast633 = (_Bool)t632;
      if (cast633) {
        unsigned char __c634;
        void* cast635 = (void*)&(__c634);
        void* cast636 = (void*)&(__a615);
        unsigned long c637 = 1;
        void* r638 = memcpy(cast635, cast636, c637);
        char* t639 = __s613;
        void* cast640 = (void*)t639;
        unsigned char t641 = __c634;
        int cast642 = (int)t641;
        unsigned long t643 = __n614;
        void* r644 = memset(cast640, cast642, t643);
      }
  char* t645 = __s613;
  __retval616 = t645;
  char* t646 = __retval616;
  return t646;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v647, unsigned long v648, char v649) {
bb650: ;
  char* __s651;
  unsigned long __n652;
  char __a653;
  char* __retval654;
  __s651 = v647;
  __n652 = v648;
  __a653 = v649;
    unsigned long t655 = __n652;
    unsigned long c656 = 0;
    _Bool c657 = ((t655 == c656)) ? 1 : 0;
    if (c657) {
      char* t658 = __s651;
      __retval654 = t658;
      char* t659 = __retval654;
      return t659;
    }
    _Bool r660 = std____is_constant_evaluated();
    if (r660) {
      char* t661 = __s651;
      unsigned long t662 = __n652;
      char t663 = __a653;
      char* r664 = __gnu_cxx__char_traits_char___assign(t661, t662, t663);
      __retval654 = r664;
      char* t665 = __retval654;
      return t665;
    }
  char* t666 = __s651;
  void* cast667 = (void*)t666;
  char t668 = __a653;
  int cast669 = (int)t668;
  unsigned long t670 = __n652;
  void* r671 = memset(cast667, cast669, t670);
  char* cast672 = (char*)r671;
  __retval654 = cast672;
  char* t673 = __retval654;
  return t673;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v674, unsigned long v675, char v676) {
bb677: ;
  char* __d678;
  unsigned long __n679;
  char __c680;
  __d678 = v674;
  __n679 = v675;
  __c680 = v676;
    unsigned long t681 = __n679;
    unsigned long c682 = 1;
    _Bool c683 = ((t681 == c682)) ? 1 : 0;
    if (c683) {
      char* t684 = __d678;
      std__char_traits_char___assign_2(t684, &__c680);
    } else {
      char* t685 = __d678;
      unsigned long t686 = __n679;
      char t687 = __c680;
      char* r688 = std__char_traits_char___assign(t685, t686, t687);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long v690, unsigned long v691, unsigned long v692, char v693) {
bb694: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this695;
  unsigned long __pos1696;
  unsigned long __n1697;
  unsigned long __n2698;
  char __c699;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval700;
  unsigned long __old_size701;
  unsigned long __new_size702;
  this695 = v689;
  __pos1696 = v690;
  __n1697 = v691;
  __n2698 = v692;
  __c699 = v693;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t703 = this695;
  unsigned long t704 = __n1697;
  unsigned long t705 = __n2698;
  char* cast706 = (char*)&(_str_5);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t703, t704, t705, cast706);
  unsigned long r707 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t703);
  __old_size701 = r707;
  unsigned long t708 = __old_size701;
  unsigned long t709 = __n2698;
  unsigned long b710 = t708 + t709;
  unsigned long t711 = __n1697;
  unsigned long b712 = b710 - t711;
  __new_size702 = b712;
    unsigned long t713 = __new_size702;
    unsigned long r714 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t703);
    _Bool c715 = ((t713 <= r714)) ? 1 : 0;
    if (c715) {
      char* __p716;
      unsigned long __how_much717;
      char* r718 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t703);
      unsigned long t719 = __pos1696;
      char* ptr720 = &(r718)[t719];
      __p716 = ptr720;
      unsigned long t721 = __old_size701;
      unsigned long t722 = __pos1696;
      unsigned long b723 = t721 - t722;
      unsigned long t724 = __n1697;
      unsigned long b725 = b723 - t724;
      __how_much717 = b725;
        unsigned long t726 = __how_much717;
        _Bool cast727 = (_Bool)t726;
        _Bool ternary728;
        if (cast727) {
          unsigned long t729 = __n1697;
          unsigned long t730 = __n2698;
          _Bool c731 = ((t729 != t730)) ? 1 : 0;
          ternary728 = (_Bool)c731;
        } else {
          _Bool c732 = 0;
          ternary728 = (_Bool)c732;
        }
        if (ternary728) {
          char* t733 = __p716;
          unsigned long t734 = __n2698;
          char* ptr735 = &(t733)[t734];
          char* t736 = __p716;
          unsigned long t737 = __n1697;
          char* ptr738 = &(t736)[t737];
          unsigned long t739 = __how_much717;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr735, ptr738, t739);
        }
    } else {
      unsigned long t740 = __pos1696;
      unsigned long t741 = __n1697;
      char* c742 = ((void*)0);
      unsigned long t743 = __n2698;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t703, t740, t741, c742, t743);
    }
    unsigned long t744 = __n2698;
    _Bool cast745 = (_Bool)t744;
    if (cast745) {
      char* r746 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t703);
      unsigned long t747 = __pos1696;
      char* ptr748 = &(r746)[t747];
      unsigned long t749 = __n2698;
      char t750 = __c699;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr748, t749, t750);
    }
  unsigned long t751 = __new_size702;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t703, t751);
  __retval700 = t703;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t752 = __retval700;
  return t752;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753) {
bb754: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this755;
  unsigned long __retval756;
  unsigned long __sz757;
  this755 = v753;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t758 = this755;
  unsigned long t759 = t758->_M_string_length;
  __sz757 = t759;
    unsigned long t760 = __sz757;
    unsigned long r761 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t758);
    _Bool c762 = ((t760 > r761)) ? 1 : 0;
    if (c762) {
      __builtin_unreachable();
    }
  unsigned long t763 = __sz757;
  __retval756 = t763;
  unsigned long t764 = __retval756;
  return t764;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v765, unsigned long v766, char v767) {
bb768: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this769;
  unsigned long __n770;
  char __c771;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval772;
  this769 = v765;
  __n770 = v766;
  __c771 = v767;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t773 = this769;
  unsigned long c774 = 0;
  unsigned long r775 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t773);
  unsigned long t776 = __n770;
  char t777 = __c771;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r778 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t773, c774, r775, t776, t777);
  __retval772 = r778;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t779 = __retval772;
  return t779;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v780, char v781) {
bb782: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this783;
  char __c784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval785;
  this783 = v780;
  __c784 = v781;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t786 = this783;
  unsigned long c787 = 1;
  char t788 = __c784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r789 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t786, c787, t788);
  __retval785 = t786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t790 = __retval785;
  return t790;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v791, char* v792, unsigned long v793) {
bb794: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this795;
  char* __s796;
  unsigned long __n797;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval798;
  unsigned long __len799;
  this795 = v791;
  __s796 = v792;
  __n797 = v793;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t800 = this795;
  unsigned long t801 = __n797;
  unsigned long r802 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t800);
  unsigned long b803 = t801 + r802;
  __len799 = b803;
    unsigned long t804 = __len799;
    unsigned long r805 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t800);
    _Bool c806 = ((t804 <= r805)) ? 1 : 0;
    if (c806) {
        unsigned long t807 = __n797;
        _Bool cast808 = (_Bool)t807;
        if (cast808) {
          char* r809 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t800);
          unsigned long r810 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t800);
          char* ptr811 = &(r809)[r810];
          char* t812 = __s796;
          unsigned long t813 = __n797;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr811, t812, t813);
        }
    } else {
      unsigned long r814 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t800);
      unsigned long c815 = 0;
      char* t816 = __s796;
      unsigned long t817 = __n797;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t800, r814, c815, t816, t817);
    }
  unsigned long t818 = __len799;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t800, t818);
  __retval798 = t800;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t819 = __retval798;
  return t819;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v820, char* v821, unsigned long v822) {
bb823: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this824;
  char* __s825;
  unsigned long __n826;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval827;
  this824 = v820;
  __s825 = v821;
  __n826 = v822;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t828 = this824;
  unsigned long c829 = 0;
  unsigned long t830 = __n826;
  char* cast831 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t828, c829, t830, cast831);
  char* t832 = __s825;
  unsigned long t833 = __n826;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r834 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t828, t832, t833);
  __retval827 = r834;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t835 = __retval827;
  return t835;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v836, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v837) {
bb838: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this839;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval841;
  this839 = v836;
  __str840 = v837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t842 = this839;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = __str840;
  char* r844 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t843);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t845 = __str840;
  unsigned long r846 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t845);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r847 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t842, r844, r846);
  __retval841 = r847;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t848 = __retval841;
  return t848;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v849, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v850) {
bb851: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this852;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str853;
  this852 = v849;
  __str853 = v850;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t854 = this852;
  char* r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t854);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t856 = __str853;
  struct std__allocator_char_* r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t856);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t854->_M_dataplus, r855, r857);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = __str853;
      _Bool r859 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t858);
      if (r859) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t854);
        char* cast860 = (char*)&(t854->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t861 = __str853;
        char* cast862 = (char*)&(t861->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t863 = __str853;
        unsigned long r864 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t863);
        unsigned long c865 = 1;
        unsigned long b866 = r864 + c865;
        char* r867 = std__char_traits_char___copy(cast860, cast862, b866);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t868 = __str853;
        char* r869 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t868);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t854, r869);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t870 = __str853;
        unsigned long t871 = t870->field2._M_allocated_capacity;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t854, t871);
      }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t872 = __str853;
    unsigned long r873 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t872);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t854, r873);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t874 = __str853;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t875 = __str853;
    char* r876 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t875);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t874, r876);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = __str853;
    unsigned long c878 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t877, c878);
  return;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_RKS8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v879, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v880) {
bb881: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs882;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs883;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval884;
  __lhs882 = v879;
  __rhs883 = v880;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t885 = __lhs882;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t886 = __rhs883;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(t885, t886);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval884, r887);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t888 = __retval884;
  return t888;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889, unsigned long v890, char v891) {
bb892: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this893;
  unsigned long __n894;
  char __c895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval896;
  this893 = v889;
  __n894 = v890;
  __c895 = v891;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t897 = this893;
  unsigned long r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t897);
  unsigned long c899 = 0;
  unsigned long t900 = __n894;
  char t901 = __c895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t897, r898, c899, t900, t901);
  __retval896 = r902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = __retval896;
  return t903;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_S5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v904, char v905) {
bb906: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs907;
  char __rhs908;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval909;
  __lhs907 = v904;
  __rhs908 = v905;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t910 = __lhs907;
  unsigned long c911 = 1;
  char t912 = __rhs908;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r913 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_4(t910, c911, t912);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval909, r913);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t914 = __retval909;
  return t914;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v915, char* v916) {
bb917: ;
  char* __c1918;
  char* __c2919;
  _Bool __retval920;
  __c1918 = v915;
  __c2919 = v916;
  char* t921 = __c1918;
  char t922 = *t921;
  int cast923 = (int)t922;
  char* t924 = __c2919;
  char t925 = *t924;
  int cast926 = (int)t925;
  _Bool c927 = ((cast923 == cast926)) ? 1 : 0;
  __retval920 = c927;
  _Bool t928 = __retval920;
  return t928;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v929) {
bb930: ;
  char* __p931;
  unsigned long __retval932;
  unsigned long __i933;
  __p931 = v929;
  unsigned long c934 = 0;
  __i933 = c934;
    char ref_tmp0935;
    while (1) {
      unsigned long t936 = __i933;
      char* t937 = __p931;
      char* ptr938 = &(t937)[t936];
      char c939 = 0;
      ref_tmp0935 = c939;
      _Bool r940 = __gnu_cxx__char_traits_char___eq(ptr938, &ref_tmp0935);
      _Bool u941 = !r940;
      if (!u941) break;
      unsigned long t942 = __i933;
      unsigned long u943 = t942 + 1;
      __i933 = u943;
    }
  unsigned long t944 = __i933;
  __retval932 = t944;
  unsigned long t945 = __retval932;
  return t945;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v946) {
bb947: ;
  char* __s948;
  unsigned long __retval949;
  __s948 = v946;
    _Bool r950 = std____is_constant_evaluated();
    if (r950) {
      char* t951 = __s948;
      unsigned long r952 = __gnu_cxx__char_traits_char___length(t951);
      __retval949 = r952;
      unsigned long t953 = __retval949;
      return t953;
    }
  char* t954 = __s948;
  unsigned long r955 = strlen(t954);
  __retval949 = r955;
  unsigned long t956 = __retval949;
  return t956;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v957, char* v958) {
bb959: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this960;
  char* __s961;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval962;
  unsigned long __n963;
  this960 = v957;
  __s961 = v958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t964 = this960;
  char* t965 = __s961;
  unsigned long r966 = std__char_traits_char___length(t965);
  __n963 = r966;
  unsigned long c967 = 0;
  unsigned long t968 = __n963;
  char* cast969 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t964, c967, t968, cast969);
  char* t970 = __s961;
  unsigned long t971 = __n963;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r972 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t964, t970, t971);
  __retval962 = r972;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t973 = __retval962;
  return t973;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v974, char* v975) {
bb976: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs977;
  char* __rhs978;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval979;
  __lhs977 = v974;
  __rhs978 = v975;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t980 = __lhs977;
  char* t981 = __rhs978;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r982 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t980, t981);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval979, r982);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t983 = __retval979;
  return t983;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v984, struct std__allocator_char_* v985) {
bb986: ;
  struct std__allocator_char_* this987;
  struct std__allocator_char_* __a988;
  this987 = v984;
  __a988 = v985;
  struct std__allocator_char_* t989 = this987;
  struct std____new_allocator_char_* base990 = (struct std____new_allocator_char_*)((char *)t989 + 0);
  struct std__allocator_char_* t991 = __a988;
  struct std____new_allocator_char_* base992 = (struct std____new_allocator_char_*)((char *)t991 + 0);
  std____new_allocator_char_____new_allocator(base990, base992);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v993) {
bb994: ;
  struct std__allocator_char_* __rhs995;
  struct std__allocator_char_ __retval996;
  __rhs995 = v993;
  struct std__allocator_char_* t997 = __rhs995;
  std__allocator_char___allocator(&__retval996, t997);
  struct std__allocator_char_ t998 = __retval996;
  return t998;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v999) {
bb1000: ;
  struct std__allocator_char_* __a1001;
  struct std__allocator_char_ __retval1002;
  __a1001 = v999;
  struct std__allocator_char_* t1003 = __a1001;
  struct std__allocator_char_ r1004 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1003);
  __retval1002 = r1004;
  struct std__allocator_char_ t1005 = __retval1002;
  return t1005;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1006, struct std__allocator_char_* v1007) {
bb1008: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1009;
  struct std__allocator_char_* __a1010;
  this1009 = v1006;
  __a1010 = v1007;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1011 = this1009;
  char* r1012 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1011);
  struct std__allocator_char_* t1013 = __a1010;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t1011->_M_dataplus, r1012, t1013);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1011);
    unsigned long c1014 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1011, c1014);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1015, unsigned long v1016) {
bb1017: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1018;
  unsigned long __res1019;
  unsigned long __capacity1020;
  char* __tmp1021;
  this1018 = v1015;
  __res1019 = v1016;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1022 = this1018;
  unsigned long r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1022);
  __capacity1020 = r1023;
    unsigned long t1024 = __res1019;
    unsigned long t1025 = __capacity1020;
    _Bool c1026 = ((t1024 <= t1025)) ? 1 : 0;
    if (c1026) {
      return;
    }
  unsigned long t1027 = __capacity1020;
  char* r1028 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1022, &__res1019, t1027);
  __tmp1021 = r1028;
  char* t1029 = __tmp1021;
  char* r1030 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1022);
  unsigned long r1031 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1022);
  unsigned long c1032 = 1;
  unsigned long b1033 = r1031 + c1032;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1029, r1030, b1033);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1022);
  char* t1034 = __tmp1021;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1022, t1034);
  unsigned long t1035 = __res1019;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1022, t1035);
  return;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v1036, unsigned long v1037, char* v1038, unsigned long v1039, struct std__allocator_char_* v1040) {
bb1041: ;
  char* __lhs1042;
  unsigned long __lhs_len1043;
  char* __rhs1044;
  unsigned long __rhs_len1045;
  struct std__allocator_char_* __a1046;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1047;
  _Bool nrvo1048;
  struct std__allocator_char_ ref_tmp01049;
  __lhs1042 = v1036;
  __lhs_len1043 = v1037;
  __rhs1044 = v1038;
  __rhs_len1045 = v1039;
  __a1046 = v1040;
  _Bool c1050 = 0;
  nrvo1048 = c1050;
  struct std__allocator_char_* t1051 = __a1046;
  struct std__allocator_char_ r1052 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t1051);
  ref_tmp01049 = r1052;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&__retval1047, &ref_tmp01049);
  {
    std__allocator_char____allocator(&ref_tmp01049);
  }
    unsigned long t1053 = __lhs_len1043;
    unsigned long t1054 = __rhs_len1045;
    unsigned long b1055 = t1053 + t1054;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval1047, b1055);
    char* t1056 = __lhs1042;
    unsigned long t1057 = __lhs_len1043;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1047, t1056, t1057);
    char* t1059 = __rhs1044;
    unsigned long t1060 = __rhs_len1045;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1047, t1059, t1060);
    _Bool c1062 = 1;
    nrvo1048 = c1062;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1063 = __retval1047;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1064 = t1063;
    {
      _Bool t1065 = nrvo1048;
      _Bool u1066 = !t1065;
      if (u1066) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1047);
      }
    }
    return ret_val1064;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1067) {
bb1068: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1069;
  char* __retval1070;
  this1069 = v1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = this1069;
  char* r1072 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1071);
  __retval1070 = r1072;
  char* t1073 = __retval1070;
  return t1073;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1074) {
bb1075: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1076;
  struct std__allocator_char_ __retval1077;
  this1076 = v1074;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1078 = this1076;
  struct std__allocator_char_* r1079 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1078);
  std__allocator_char___allocator(&__retval1077, r1079);
  struct std__allocator_char_ t1080 = __retval1077;
  return t1080;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_RKS8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____4(char* v1081, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1082) {
bb1083: ;
  char* __lhs1084;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1086;
  struct std__allocator_char_ ref_tmp01087;
  __lhs1084 = v1081;
  __rhs1085 = v1082;
  char* t1088 = __lhs1084;
  char* t1089 = __lhs1084;
  unsigned long r1090 = std__char_traits_char___length(t1089);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1091 = __rhs1085;
  char* r1092 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1091);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1093 = __rhs1085;
  unsigned long r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1093);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1095 = __rhs1085;
  struct std__allocator_char_ r1096 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1095);
  ref_tmp01087 = r1096;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1097 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(t1088, r1090, r1092, r1094, &ref_tmp01087);
    __retval1086 = r1097;
  {
    std__allocator_char____allocator(&ref_tmp01087);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1098 = __retval1086;
  return t1098;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb1099: ;
  _Bool __retval1100;
  _Bool t1101 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1100 = t1101;
  _Bool t1102 = __retval1100;
  return t1102;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v1103, struct std____new_allocator_char_* v1104) {
bb1105: ;
  struct std____new_allocator_char_* this1106;
  struct std____new_allocator_char_* unnamed1107;
  struct std____new_allocator_char_* __retval1108;
  this1106 = v1103;
  unnamed1107 = v1104;
  struct std____new_allocator_char_* t1109 = this1106;
  __retval1108 = t1109;
  struct std____new_allocator_char_* t1110 = __retval1108;
  return t1110;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v1111, struct std__allocator_char_* v1112) {
bb1113: ;
  struct std__allocator_char_* this1114;
  struct std__allocator_char_* unnamed1115;
  struct std__allocator_char_* __retval1116;
  this1114 = v1111;
  unnamed1115 = v1112;
  struct std__allocator_char_* t1117 = this1114;
  struct std____new_allocator_char_* base1118 = (struct std____new_allocator_char_*)((char *)t1117 + 0);
  struct std__allocator_char_* t1119 = unnamed1115;
  struct std____new_allocator_char_* base1120 = (struct std____new_allocator_char_*)((char *)t1119 + 0);
  struct std____new_allocator_char_* r1121 = std____new_allocator_char___operator_(base1118, base1120);
  __retval1116 = t1117;
  struct std__allocator_char_* t1122 = __retval1116;
  return t1122;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v1123, struct std__allocator_char_* v1124) {
bb1125: ;
  struct std__allocator_char_* __one1126;
  struct std__allocator_char_* __two1127;
  __one1126 = v1123;
  __two1127 = v1124;
    struct std__allocator_char_* t1128 = __two1127;
    struct std__allocator_char_* t1129 = __one1126;
    struct std__allocator_char_* r1130 = std__allocator_char___operator_(t1129, t1128);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1131, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1132) {
bb1133: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1135;
  this1134 = v1131;
  __str1135 = v1132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1136 = this1134;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1137 = __str1135;
    _Bool c1138 = ((t1136 != t1137)) ? 1 : 0;
    if (c1138) {
      unsigned long __rsize1139;
      unsigned long __capacity1140;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1141 = __str1135;
      unsigned long r1142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1141);
      __rsize1139 = r1142;
      unsigned long r1143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1136);
      __capacity1140 = r1143;
        unsigned long t1144 = __rsize1139;
        unsigned long t1145 = __capacity1140;
        _Bool c1146 = ((t1144 > t1145)) ? 1 : 0;
        if (c1146) {
          unsigned long __new_capacity1147;
          char* __tmp1148;
          unsigned long t1149 = __rsize1139;
          __new_capacity1147 = t1149;
          unsigned long t1150 = __capacity1140;
          char* r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1136, &__new_capacity1147, t1150);
          __tmp1148 = r1151;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1136);
          char* t1152 = __tmp1148;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1136, t1152);
          unsigned long t1153 = __new_capacity1147;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1136, t1153);
        }
        unsigned long t1154 = __rsize1139;
        _Bool cast1155 = (_Bool)t1154;
        if (cast1155) {
          char* r1156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1136);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1157 = __str1135;
          char* r1158 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1157);
          unsigned long t1159 = __rsize1139;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1156, r1158, t1159);
        }
      unsigned long t1160 = __rsize1139;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1136, t1160);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1161) {
bb1162: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1163;
  this1163 = v1161;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1164 = this1163;
  unsigned long c1165 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1164, c1165);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1166, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1167) {
bb1168: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1169;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1170;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1171;
  _Bool __equal_allocs1172;
  this1169 = v1166;
  __str1170 = v1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1173 = this1169;
  _Bool c1174 = 1;
  __equal_allocs1172 = c1174;
    _Bool r1175 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1173);
    _Bool u1176 = !r1175;
    _Bool ternary1177;
    if (u1176) {
      _Bool r1178 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary1177 = (_Bool)r1178;
    } else {
      _Bool c1179 = 0;
      ternary1177 = (_Bool)c1179;
    }
    _Bool ternary1180;
    if (ternary1177) {
      _Bool t1181 = __equal_allocs1172;
      _Bool u1182 = !t1181;
      ternary1180 = (_Bool)u1182;
    } else {
      _Bool c1183 = 0;
      ternary1180 = (_Bool)c1183;
    }
    if (ternary1180) {
      unsigned long t1184 = t1173->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1173, t1184);
      char* r1185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1173);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1173, r1185);
      unsigned long c1186 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1173, c1186);
    }
  struct std__allocator_char_* r1187 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1173);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1188 = __str1170;
  struct std__allocator_char_* r1189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1188);
  void_std____alloc_on_move_std__allocator_char___(r1187, r1189);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1190 = __str1170;
    _Bool r1191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1190);
    if (r1191) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1192 = __str1170;
        _Bool c1193 = ((t1192 != t1173)) ? 1 : 0;
        if (c1193) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1194 = __str1170;
            unsigned long r1195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1194);
            _Bool cast1196 = (_Bool)r1195;
            if (cast1196) {
              char* r1197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1173);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1198 = __str1170;
              char* r1199 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1198);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1200 = __str1170;
              unsigned long r1201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1200);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1197, r1199, r1201);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1202 = __str1170;
          unsigned long r1203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1202);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1173, r1203);
        }
    } else {
        _Bool r1204 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary1205;
        if (r1204) {
          _Bool c1206 = 1;
          ternary1205 = (_Bool)c1206;
        } else {
          _Bool t1207 = __equal_allocs1172;
          ternary1205 = (_Bool)t1207;
        }
        if (ternary1205) {
          char* __data1208;
          unsigned long __capacity1209;
          char* c1210 = ((void*)0);
          __data1208 = c1210;
            _Bool r1211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1173);
            _Bool u1212 = !r1211;
            if (u1212) {
                _Bool t1213 = __equal_allocs1172;
                if (t1213) {
                  char* r1214 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1173);
                  __data1208 = r1214;
                  unsigned long t1215 = t1173->field2._M_allocated_capacity;
                  __capacity1209 = t1215;
                } else {
                  unsigned long t1216 = t1173->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1173, t1216);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1217 = __str1170;
          char* r1218 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1217);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1173, r1218);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1219 = __str1170;
          unsigned long r1220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1219);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1173, r1220);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1221 = __str1170;
          unsigned long t1222 = t1221->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1173, t1222);
            char* t1223 = __data1208;
            _Bool cast1224 = (_Bool)t1223;
            if (cast1224) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1225 = __str1170;
              char* t1226 = __data1208;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1225, t1226);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1227 = __str1170;
              unsigned long t1228 = __capacity1209;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1227, t1228);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1229 = __str1170;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1230 = __str1170;
              char* r1231 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1230);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1229, r1231);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1232 = __str1170;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1173, t1232);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1233 = __str1170;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t1233);
  __retval1171 = t1173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1234 = __retval1171;
  return t1234;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1235) {
bb1236: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1237;
  this1237 = v1235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1238 = this1237;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1238);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1238->_M_dataplus);
  }
  return;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v1239, char* v1240) {
bb1241: ;
  char* __c11242;
  char* __c21243;
  _Bool __retval1244;
  __c11242 = v1239;
  __c21243 = v1240;
  char* t1245 = __c11242;
  char t1246 = *t1245;
  unsigned char cast1247 = (unsigned char)t1246;
  int cast1248 = (int)cast1247;
  char* t1249 = __c21243;
  char t1250 = *t1249;
  unsigned char cast1251 = (unsigned char)t1250;
  int cast1252 = (int)cast1251;
  _Bool c1253 = ((cast1248 < cast1252)) ? 1 : 0;
  __retval1244 = c1253;
  _Bool t1254 = __retval1244;
  return t1254;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v1255, char* v1256, unsigned long v1257) {
bb1258: ;
  char* __s11259;
  char* __s21260;
  unsigned long __n1261;
  int __retval1262;
  __s11259 = v1255;
  __s21260 = v1256;
  __n1261 = v1257;
    unsigned long t1263 = __n1261;
    unsigned long c1264 = 0;
    _Bool c1265 = ((t1263 == c1264)) ? 1 : 0;
    if (c1265) {
      int c1266 = 0;
      __retval1262 = c1266;
      int t1267 = __retval1262;
      return t1267;
    }
    _Bool r1268 = std____is_constant_evaluated();
    if (r1268) {
        unsigned long __i1269;
        unsigned long c1270 = 0;
        __i1269 = c1270;
        while (1) {
          unsigned long t1272 = __i1269;
          unsigned long t1273 = __n1261;
          _Bool c1274 = ((t1272 < t1273)) ? 1 : 0;
          if (!c1274) break;
            unsigned long t1275 = __i1269;
            char* t1276 = __s11259;
            char* ptr1277 = &(t1276)[t1275];
            unsigned long t1278 = __i1269;
            char* t1279 = __s21260;
            char* ptr1280 = &(t1279)[t1278];
            _Bool r1281 = std__char_traits_char___lt(ptr1277, ptr1280);
            if (r1281) {
              int c1282 = -1;
              __retval1262 = c1282;
              int t1283 = __retval1262;
              int ret_val1284 = t1283;
              return ret_val1284;
            } else {
                unsigned long t1285 = __i1269;
                char* t1286 = __s21260;
                char* ptr1287 = &(t1286)[t1285];
                unsigned long t1288 = __i1269;
                char* t1289 = __s11259;
                char* ptr1290 = &(t1289)[t1288];
                _Bool r1291 = std__char_traits_char___lt(ptr1287, ptr1290);
                if (r1291) {
                  int c1292 = 1;
                  __retval1262 = c1292;
                  int t1293 = __retval1262;
                  int ret_val1294 = t1293;
                  return ret_val1294;
                }
            }
        for_step1271: ;
          unsigned long t1295 = __i1269;
          unsigned long u1296 = t1295 + 1;
          __i1269 = u1296;
        }
      int c1297 = 0;
      __retval1262 = c1297;
      int t1298 = __retval1262;
      return t1298;
    }
  char* t1299 = __s11259;
  void* cast1300 = (void*)t1299;
  char* t1301 = __s21260;
  void* cast1302 = (void*)t1301;
  unsigned long t1303 = __n1261;
  int r1304 = memcmp(cast1300, cast1302, t1303);
  __retval1262 = r1304;
  int t1305 = __retval1262;
  return t1305;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1306) {
bb1307: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1308;
  char* __retval1309;
  this1308 = v1306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1310 = this1308;
  char* r1311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1310);
  __retval1309 = r1311;
  char* t1312 = __retval1309;
  return t1312;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1313, char* v1314) {
bb1315: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1316;
  char* __rhs1317;
  _Bool __retval1318;
  __lhs1316 = v1313;
  __rhs1317 = v1314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1319 = __lhs1316;
  unsigned long r1320 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1319);
  char* t1321 = __rhs1317;
  unsigned long r1322 = std__char_traits_char___length(t1321);
  _Bool c1323 = ((r1320 == r1322)) ? 1 : 0;
  _Bool ternary1324;
  if (c1323) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1325 = __lhs1316;
    char* r1326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1325);
    char* t1327 = __rhs1317;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1328 = __lhs1316;
    unsigned long r1329 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1328);
    int r1330 = std__char_traits_char___compare(r1326, t1327, r1329);
    _Bool cast1331 = (_Bool)r1330;
    _Bool u1332 = !cast1331;
    ternary1324 = (_Bool)u1332;
  } else {
    _Bool c1333 = 0;
    ternary1324 = (_Bool)c1333;
  }
  __retval1318 = ternary1324;
  _Bool t1334 = __retval1318;
  return t1334;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1335, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1336) {
bb1337: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1339;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1340;
  __os1338 = v1335;
  __str1339 = v1336;
  struct std__basic_ostream_char__std__char_traits_char__* t1341 = __os1338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1342 = __str1339;
  char* r1343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1342);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1344 = __str1339;
  unsigned long r1345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1344);
  long cast1346 = (long)r1345;
  struct std__basic_ostream_char__std__char_traits_char__* r1347 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1341, r1343, cast1346);
  __retval1340 = r1347;
  struct std__basic_ostream_char__std__char_traits_char__* t1348 = __retval1340;
  return t1348;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1349, void* v1350) {
bb1351: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1352;
  void* __pf1353;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1354;
  this1352 = v1349;
  __pf1353 = v1350;
  struct std__basic_ostream_char__std__char_traits_char__* t1355 = this1352;
  void* t1356 = __pf1353;
  struct std__basic_ostream_char__std__char_traits_char__* r1357 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1356)(t1355);
  __retval1354 = r1357;
  struct std__basic_ostream_char__std__char_traits_char__* t1358 = __retval1354;
  return t1358;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1359) {
bb1360: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1361;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1362;
  __os1361 = v1359;
  struct std__basic_ostream_char__std__char_traits_char__* t1363 = __os1361;
  struct std__basic_ostream_char__std__char_traits_char__* r1364 = std__ostream__flush(t1363);
  __retval1362 = r1364;
  struct std__basic_ostream_char__std__char_traits_char__* t1365 = __retval1362;
  return t1365;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1366) {
bb1367: ;
  struct std__ctype_char_* __f1368;
  struct std__ctype_char_* __retval1369;
  __f1368 = v1366;
    struct std__ctype_char_* t1370 = __f1368;
    _Bool cast1371 = (_Bool)t1370;
    _Bool u1372 = !cast1371;
    if (u1372) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1373 = __f1368;
  __retval1369 = t1373;
  struct std__ctype_char_* t1374 = __retval1369;
  return t1374;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1375, char v1376) {
bb1377: ;
  struct std__ctype_char_* this1378;
  char __c1379;
  char __retval1380;
  this1378 = v1375;
  __c1379 = v1376;
  struct std__ctype_char_* t1381 = this1378;
    char t1382 = t1381->_M_widen_ok;
    _Bool cast1383 = (_Bool)t1382;
    if (cast1383) {
      char t1384 = __c1379;
      unsigned char cast1385 = (unsigned char)t1384;
      unsigned long cast1386 = (unsigned long)cast1385;
      char t1387 = t1381->_M_widen[cast1386];
      __retval1380 = t1387;
      char t1388 = __retval1380;
      return t1388;
    }
  std__ctype_char____M_widen_init___const(t1381);
  char t1389 = __c1379;
  void** v1390 = (void**)t1381;
  void* v1391 = *((void**)v1390);
  char vcall1394 = (char)__VERIFIER_virtual_call_char_char(t1381, 6, t1389);
  __retval1380 = vcall1394;
  char t1395 = __retval1380;
  return t1395;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1396, char v1397) {
bb1398: ;
  struct std__basic_ios_char__std__char_traits_char__* this1399;
  char __c1400;
  char __retval1401;
  this1399 = v1396;
  __c1400 = v1397;
  struct std__basic_ios_char__std__char_traits_char__* t1402 = this1399;
  struct std__ctype_char_* t1403 = t1402->_M_ctype;
  struct std__ctype_char_* r1404 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1403);
  char t1405 = __c1400;
  char r1406 = std__ctype_char___widen_char__const(r1404, t1405);
  __retval1401 = r1406;
  char t1407 = __retval1401;
  return t1407;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1408) {
bb1409: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1410;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1411;
  __os1410 = v1408;
  struct std__basic_ostream_char__std__char_traits_char__* t1412 = __os1410;
  struct std__basic_ostream_char__std__char_traits_char__* t1413 = __os1410;
  void** v1414 = (void**)t1413;
  void* v1415 = *((void**)v1414);
  unsigned char* cast1416 = (unsigned char*)v1415;
  long c1417 = -24;
  unsigned char* ptr1418 = &(cast1416)[c1417];
  long* cast1419 = (long*)ptr1418;
  long t1420 = *cast1419;
  unsigned char* cast1421 = (unsigned char*)t1413;
  unsigned char* ptr1422 = &(cast1421)[t1420];
  struct std__basic_ostream_char__std__char_traits_char__* cast1423 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1422;
  struct std__basic_ios_char__std__char_traits_char__* cast1424 = (struct std__basic_ios_char__std__char_traits_char__*)cast1423;
  char c1425 = 10;
  char r1426 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1424, c1425);
  struct std__basic_ostream_char__std__char_traits_char__* r1427 = std__ostream__put(t1412, r1426);
  struct std__basic_ostream_char__std__char_traits_char__* r1428 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1427);
  __retval1411 = r1428;
  struct std__basic_ostream_char__std__char_traits_char__* t1429 = __retval1411;
  return t1429;
}

// function: main
int main() {
bb1430: ;
  int __retval1431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11432;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21433;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp11435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp21436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp31437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp41438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1439;
  int c1440 = 0;
  __retval1431 = c1440;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11432);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str21433);
      char c1441 = 120;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str11432, c1441);
      char* cast1443 = (char*)&(_str);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1444 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____4(cast1443, &str11432);
      ref_tmp41438 = r1444;
        char* cast1445 = (char*)&(_str_1);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&ref_tmp41438, cast1445);
        ref_tmp31437 = r1446;
          char c1447 = 61;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(&ref_tmp31437, c1447);
          ref_tmp21436 = r1448;
            char c1449 = 32;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(&ref_tmp21436, c1449);
            ref_tmp11435 = r1450;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1451 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(&ref_tmp11435, &str11432);
              ref_tmp01434 = r1451;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str21433, &ref_tmp01434);
                tmp_exprcleanup1439 = r1452;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01434);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp11435);
            }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp21436);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp31437);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp41438);
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1453 = tmp_exprcleanup1439;
      char* cast1454 = (char*)&(_str_2);
      _Bool r1455 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str21433, cast1454);
      if (r1455) {
      } else {
        char* cast1456 = (char*)&(_str_3);
        char* c1457 = (char*)_str_4;
        unsigned int c1458 = 20;
        char* cast1459 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1456, c1457, c1458, cast1459);
      }
      struct std__basic_ostream_char__std__char_traits_char__* r1460 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str21433);
      struct std__basic_ostream_char__std__char_traits_char__* r1461 = std__ostream__operator___std__ostream_____(r1460, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1462 = 0;
      __retval1431 = c1462;
      int t1463 = __retval1431;
      int ret_val1464 = t1463;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21433);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11432);
      }
      return ret_val1464;
  int t1465 = __retval1431;
  return t1465;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1466) {
bb1467: ;
  char* __r1468;
  char* __retval1469;
  __r1468 = v1466;
  char* t1470 = __r1468;
  __retval1469 = t1470;
  char* t1471 = __retval1469;
  return t1471;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1472) {
bb1473: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1474;
  char* __retval1475;
  this1474 = v1472;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1476 = this1474;
  char* cast1477 = (char*)&(t1476->field2._M_local_buf);
  char* r1478 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1477);
  __retval1475 = r1478;
  char* t1479 = __retval1475;
  return t1479;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1480) {
bb1481: ;
  struct std__allocator_char_* this1482;
  this1482 = v1480;
  struct std__allocator_char_* t1483 = this1482;
  struct std____new_allocator_char_* base1484 = (struct std____new_allocator_char_*)((char *)t1483 + 0);
  std____new_allocator_char_____new_allocator_2(base1484);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1485, char* v1486, struct std__allocator_char_* v1487) {
bb1488: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1489;
  char* __dat1490;
  struct std__allocator_char_* __a1491;
  this1489 = v1485;
  __dat1490 = v1486;
  __a1491 = v1487;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1492 = this1489;
  struct std__allocator_char_* base1493 = (struct std__allocator_char_*)((char *)t1492 + 0);
  struct std__allocator_char_* t1494 = __a1491;
  std__allocator_char___allocator(base1493, t1494);
    char* t1495 = __dat1490;
    t1492->_M_p = t1495;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1496) {
bb1497: ;
  struct std__allocator_char_* this1498;
  this1498 = v1496;
  struct std__allocator_char_* t1499 = this1498;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1500: ;
  _Bool __retval1501;
    _Bool c1502 = 0;
    __retval1501 = c1502;
    _Bool t1503 = __retval1501;
    return t1503;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1504) {
bb1505: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1506;
  this1506 = v1504;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1507 = this1506;
    _Bool r1508 = std__is_constant_evaluated();
    if (r1508) {
        unsigned long __i1509;
        unsigned long c1510 = 0;
        __i1509 = c1510;
        while (1) {
          unsigned long t1512 = __i1509;
          unsigned long c1513 = 15;
          _Bool c1514 = ((t1512 <= c1513)) ? 1 : 0;
          if (!c1514) break;
          char c1515 = 0;
          unsigned long t1516 = __i1509;
          t1507->field2._M_local_buf[t1516] = c1515;
        for_step1511: ;
          unsigned long t1517 = __i1509;
          unsigned long u1518 = t1517 + 1;
          __i1509 = u1518;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1519, unsigned long v1520) {
bb1521: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1522;
  unsigned long __length1523;
  this1522 = v1519;
  __length1523 = v1520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1524 = this1522;
  unsigned long t1525 = __length1523;
  t1524->_M_string_length = t1525;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1526: ;
  _Bool __retval1527;
    _Bool c1528 = 0;
    __retval1527 = c1528;
    _Bool t1529 = __retval1527;
    return t1529;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1530, char* v1531) {
bb1532: ;
  char* __location1533;
  char* __args1534;
  char* __retval1535;
  void* __loc1536;
  __location1533 = v1530;
  __args1534 = v1531;
  char* t1537 = __location1533;
  void* cast1538 = (void*)t1537;
  __loc1536 = cast1538;
    void* t1539 = __loc1536;
    char* cast1540 = (char*)t1539;
    char* t1541 = __args1534;
    char t1542 = *t1541;
    *cast1540 = t1542;
    __retval1535 = cast1540;
    char* t1543 = __retval1535;
    return t1543;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1544, char* v1545) {
bb1546: ;
  char* __c11547;
  char* __c21548;
  __c11547 = v1544;
  __c21548 = v1545;
    _Bool r1549 = std____is_constant_evaluated();
    if (r1549) {
      char* t1550 = __c11547;
      char* t1551 = __c21548;
      char* r1552 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1550, t1551);
    } else {
      char* t1553 = __c21548;
      char t1554 = *t1553;
      char* t1555 = __c11547;
      *t1555 = t1554;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1556) {
bb1557: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1558;
  char* __retval1559;
  this1558 = v1556;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1560 = this1558;
  char* t1561 = t1560->_M_dataplus._M_p;
  __retval1559 = t1561;
  char* t1562 = __retval1559;
  return t1562;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1563, unsigned long v1564) {
bb1565: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1566;
  unsigned long __n1567;
  char ref_tmp01568;
  this1566 = v1563;
  __n1567 = v1564;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1569 = this1566;
  unsigned long t1570 = __n1567;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1569, t1570);
  unsigned long t1571 = __n1567;
  char* r1572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1569);
  char* ptr1573 = &(r1572)[t1571];
  char c1574 = 0;
  ref_tmp01568 = c1574;
  std__char_traits_char___assign_2(ptr1573, &ref_tmp01568);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1575) {
bb1576: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1577;
  this1577 = v1575;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1578 = this1577;
  {
    struct std__allocator_char_* base1579 = (struct std__allocator_char_*)((char *)t1578 + 0);
    std__allocator_char____allocator(base1579);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1580) {
bb1581: ;
  struct std____new_allocator_char_* this1582;
  this1582 = v1580;
  struct std____new_allocator_char_* t1583 = this1582;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1584, struct std____new_allocator_char_* v1585) {
bb1586: ;
  struct std____new_allocator_char_* this1587;
  struct std____new_allocator_char_* unnamed1588;
  this1587 = v1584;
  unnamed1588 = v1585;
  struct std____new_allocator_char_* t1589 = this1587;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1590) {
bb1591: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1592;
  char* __retval1593;
  this1592 = v1590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1594 = this1592;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1594);
  char* r1595 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1594);
  __retval1593 = r1595;
  char* t1596 = __retval1593;
  return t1596;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1597, char* v1598, struct std__allocator_char_* v1599) {
bb1600: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1601;
  char* __dat1602;
  struct std__allocator_char_* __a1603;
  this1601 = v1597;
  __dat1602 = v1598;
  __a1603 = v1599;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1604 = this1601;
  struct std__allocator_char_* base1605 = (struct std__allocator_char_*)((char *)t1604 + 0);
  struct std__allocator_char_* t1606 = __a1603;
  std__allocator_char___allocator(base1605, t1606);
    char* t1607 = __dat1602;
    t1604->_M_p = t1607;
  return;
}

