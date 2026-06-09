extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
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

char _str[14] = "Test string: ";
char _str_1[6] = ", y, ";
char _str_2[2] = "z";
char _str_3[21] = "Test string: x, y, z";
char _str_4[31] = "str3 != \"Test string: x, y, z\"";
char _str_5[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_assign_5_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[25] = "basic_string::_M_replace";
char _str_7[24] = "basic_string::_M_create";
char _str_8[29] = "basic_string::_M_replace_aux";
char _str_9[21] = "basic_string::append";
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
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

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

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v7) {
bb8:
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
bb16:
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
bb24:
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
bb38:
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
bb56:
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
bb71:
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
bb77:
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
bb85:
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
bb100:
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

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v119) {
bb120:
  struct std____new_allocator_char_* this121;
  unsigned long __retval122;
  this121 = v119;
  struct std____new_allocator_char_* t123 = this121;
  unsigned long c124 = 9223372036854775807;
  unsigned long c125 = 1;
  unsigned long b126 = c124 / c125;
  __retval122 = b126;
  unsigned long t127 = __retval122;
  return t127;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v128, unsigned long v129, void* v130) {
bb131:
  struct std____new_allocator_char_* this132;
  unsigned long __n133;
  void* unnamed134;
  char* __retval135;
  this132 = v128;
  __n133 = v129;
  unnamed134 = v130;
  struct std____new_allocator_char_* t136 = this132;
    unsigned long t137 = __n133;
    unsigned long r138 = std____new_allocator_char____M_max_size___const(t136);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    if (c139) {
        unsigned long t140 = __n133;
        unsigned long c141 = -1;
        unsigned long c142 = 1;
        unsigned long b143 = c141 / c142;
        _Bool c144 = ((t140 > b143)) ? 1 : 0;
        if (c144) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c145 = 1;
    unsigned long c146 = 16;
    _Bool c147 = ((c145 > c146)) ? 1 : 0;
    if (c147) {
      unsigned long __al148;
      unsigned long c149 = 1;
      __al148 = c149;
      unsigned long t150 = __n133;
      unsigned long c151 = 1;
      unsigned long b152 = t150 * c151;
      unsigned long t153 = __al148;
      void* r154 = operator_new_2(b152, t153);
      char* cast155 = (char*)r154;
      __retval135 = cast155;
      char* t156 = __retval135;
      return t156;
    }
  unsigned long t157 = __n133;
  unsigned long c158 = 1;
  unsigned long b159 = t157 * c158;
  void* r160 = operator_new(b159);
  char* cast161 = (char*)r160;
  __retval135 = cast161;
  char* t162 = __retval135;
  return t162;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v163, unsigned long v164) {
bb165:
  struct std__allocator_char_* this166;
  unsigned long __n167;
  char* __retval168;
  this166 = v163;
  __n167 = v164;
  struct std__allocator_char_* t169 = this166;
    _Bool r170 = std____is_constant_evaluated();
    if (r170) {
        unsigned long t171 = __n167;
        unsigned long c172 = 1;
        unsigned long ovr173;
        _Bool ovf174 = __builtin_mul_overflow(t171, c172, &ovr173);
        __n167 = ovr173;
        if (ovf174) {
          std____throw_bad_array_new_length();
        }
      unsigned long t175 = __n167;
      void* r176 = operator_new(t175);
      char* cast177 = (char*)r176;
      __retval168 = cast177;
      char* t178 = __retval168;
      return t178;
    }
  struct std____new_allocator_char_* base179 = (struct std____new_allocator_char_*)((char *)t169 + 0);
  unsigned long t180 = __n167;
  void* c181 = ((void*)0);
  char* r182 = std____new_allocator_char___allocate(base179, t180, c181);
  __retval168 = r182;
  char* t183 = __retval168;
  return t183;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v184, unsigned long v185) {
bb186:
  struct std__allocator_char_* __a187;
  unsigned long __n188;
  char* __retval189;
  __a187 = v184;
  __n188 = v185;
  struct std__allocator_char_* t190 = __a187;
  unsigned long t191 = __n188;
  char* r192 = std__allocator_char___allocate(t190, t191);
  __retval189 = r192;
  char* t193 = __retval189;
  return t193;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v194, unsigned long v195) {
bb196:
  struct std__allocator_char_* __a197;
  unsigned long __n198;
  char* __retval199;
  char* __p200;
  __a197 = v194;
  __n198 = v195;
  struct std__allocator_char_* t201 = __a197;
  unsigned long t202 = __n198;
  char* r203 = std__allocator_traits_std__allocator_char_____allocate(t201, t202);
  __p200 = r203;
  char* t204 = __p200;
  __retval199 = t204;
  char* t205 = __retval199;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v206) {
bb207:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this208;
  struct std__allocator_char_* __retval209;
  this208 = v206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this208;
  struct std__allocator_char_* base211 = (struct std__allocator_char_*)((char *)&(t210->_M_dataplus) + 0);
  __retval209 = base211;
  struct std__allocator_char_* t212 = __retval209;
  return t212;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v213, char* v214, unsigned long v215) {
bb216:
  char* __s1217;
  char* __s2218;
  unsigned long __n219;
  char* __retval220;
  __s1217 = v213;
  __s2218 = v214;
  __n219 = v215;
    unsigned long t221 = __n219;
    unsigned long c222 = 0;
    _Bool c223 = ((t221 == c222)) ? 1 : 0;
    if (c223) {
      char* t224 = __s1217;
      __retval220 = t224;
      char* t225 = __retval220;
      return t225;
    }
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
        unsigned long __i227;
        unsigned long c228 = 0;
        __i227 = c228;
        while (1) {
          unsigned long t230 = __i227;
          unsigned long t231 = __n219;
          _Bool c232 = ((t230 < t231)) ? 1 : 0;
          if (!c232) break;
          char* t233 = __s1217;
          unsigned long t234 = __i227;
          char* ptr235 = &(t233)[t234];
          unsigned long t236 = __i227;
          char* t237 = __s2218;
          char* ptr238 = &(t237)[t236];
          char* r239 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr235, ptr238);
        for_step229: ;
          unsigned long t240 = __i227;
          unsigned long u241 = t240 + 1;
          __i227 = u241;
        }
      char* t242 = __s1217;
      __retval220 = t242;
      char* t243 = __retval220;
      return t243;
    }
  char* t244 = __s1217;
  void* cast245 = (void*)t244;
  char* t246 = __s2218;
  void* cast247 = (void*)t246;
  unsigned long t248 = __n219;
  unsigned long c249 = 1;
  unsigned long b250 = t248 * c249;
  void* r251 = memcpy(cast245, cast247, b250);
  char* t252 = __s1217;
  __retval220 = t252;
  char* t253 = __retval220;
  return t253;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v254, char* v255, unsigned long v256) {
bb257:
  char* __s1258;
  char* __s2259;
  unsigned long __n260;
  char* __retval261;
  __s1258 = v254;
  __s2259 = v255;
  __n260 = v256;
    unsigned long t262 = __n260;
    unsigned long c263 = 0;
    _Bool c264 = ((t262 == c263)) ? 1 : 0;
    if (c264) {
      char* t265 = __s1258;
      __retval261 = t265;
      char* t266 = __retval261;
      return t266;
    }
    _Bool r267 = std____is_constant_evaluated();
    if (r267) {
      char* t268 = __s1258;
      char* t269 = __s2259;
      unsigned long t270 = __n260;
      char* r271 = __gnu_cxx__char_traits_char___copy(t268, t269, t270);
      __retval261 = r271;
      char* t272 = __retval261;
      return t272;
    }
  char* t273 = __s1258;
  void* cast274 = (void*)t273;
  char* t275 = __s2259;
  void* cast276 = (void*)t275;
  unsigned long t277 = __n260;
  void* r278 = memcpy(cast274, cast276, t277);
  char* cast279 = (char*)r278;
  __retval261 = cast279;
  char* t280 = __retval261;
  return t280;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v281, char* v282, unsigned long v283) {
bb284:
  char* __d285;
  char* __s286;
  unsigned long __n287;
  __d285 = v281;
  __s286 = v282;
  __n287 = v283;
    unsigned long t288 = __n287;
    unsigned long c289 = 1;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      char* t291 = __d285;
      char* t292 = __s286;
      std__char_traits_char___assign_2(t291, t292);
    } else {
      char* t293 = __d285;
      char* t294 = __s286;
      unsigned long t295 = __n287;
      char* r296 = std__char_traits_char___copy(t293, t294, t295);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v297, char* v298, unsigned long v299) {
bb300:
  struct std____new_allocator_char_* this301;
  char* __p302;
  unsigned long __n303;
  this301 = v297;
  __p302 = v298;
  __n303 = v299;
  struct std____new_allocator_char_* t304 = this301;
    unsigned long c305 = 1;
    unsigned long c306 = 16;
    _Bool c307 = ((c305 > c306)) ? 1 : 0;
    if (c307) {
      char* t308 = __p302;
      void* cast309 = (void*)t308;
      unsigned long t310 = __n303;
      unsigned long c311 = 1;
      unsigned long b312 = t310 * c311;
      unsigned long c313 = 1;
      operator_delete_3(cast309, b312, c313);
      return;
    }
  char* t314 = __p302;
  void* cast315 = (void*)t314;
  unsigned long t316 = __n303;
  unsigned long c317 = 1;
  unsigned long b318 = t316 * c317;
  operator_delete_2(cast315, b318);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v319, char* v320, unsigned long v321) {
bb322:
  struct std__allocator_char_* this323;
  char* __p324;
  unsigned long __n325;
  this323 = v319;
  __p324 = v320;
  __n325 = v321;
  struct std__allocator_char_* t326 = this323;
    _Bool r327 = std____is_constant_evaluated();
    if (r327) {
      char* t328 = __p324;
      void* cast329 = (void*)t328;
      operator_delete(cast329);
      return;
    }
  struct std____new_allocator_char_* base330 = (struct std____new_allocator_char_*)((char *)t326 + 0);
  char* t331 = __p324;
  unsigned long t332 = __n325;
  std____new_allocator_char___deallocate(base330, t331, t332);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v333, char* v334, char* v335) {
bb336:
  struct std__less_const_char___* this337;
  char* __x338;
  char* __y339;
  _Bool __retval340;
  this337 = v333;
  __x338 = v334;
  __y339 = v335;
  struct std__less_const_char___* t341 = this337;
    _Bool r342 = std____is_constant_evaluated();
    if (r342) {
      char* t343 = __x338;
      char* t344 = __y339;
      _Bool c345 = ((t343 < t344)) ? 1 : 0;
      __retval340 = c345;
      _Bool t346 = __retval340;
      return t346;
    }
  char* t347 = __x338;
  unsigned long cast348 = (unsigned long)t347;
  char* t349 = __y339;
  unsigned long cast350 = (unsigned long)t349;
  _Bool c351 = ((cast348 < cast350)) ? 1 : 0;
  __retval340 = c351;
  _Bool t352 = __retval340;
  return t352;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v353, char* v354) {
bb355:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this356;
  char* __s357;
  _Bool __retval358;
  struct std__less_const_char___ ref_tmp0359;
  this356 = v353;
  __s357 = v354;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t360 = this356;
  char* t361 = __s357;
  char* r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
  _Bool r363 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0359, t361, r362);
  _Bool ternary364;
  if (r363) {
    _Bool c365 = 1;
    ternary364 = (_Bool)c365;
  } else {
    struct std__less_const_char___ ref_tmp1366;
    char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
    unsigned long r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t360);
    char* ptr369 = &(r367)[r368];
    char* t370 = __s357;
    _Bool r371 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1366, ptr369, t370);
    ternary364 = (_Bool)r371;
  }
  __retval358 = ternary364;
  _Bool t372 = __retval358;
  return t372;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v373, char* v374) {
bb375:
  char* __c1376;
  char* __c2377;
  __c1376 = v373;
  __c2377 = v374;
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
      char* t379 = __c1376;
      char* t380 = __c2377;
      char* r381 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t379, t380);
    } else {
      char* t382 = __c2377;
      char t383 = *t382;
      char* t384 = __c1376;
      *t384 = t383;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v385, char* v386, unsigned long v387) {
bb388:
  char* __s1389;
  char* __s2390;
  unsigned long __n391;
  char* __retval392;
  __s1389 = v385;
  __s2390 = v386;
  __n391 = v387;
    unsigned long t393 = __n391;
    unsigned long c394 = 0;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      char* t396 = __s1389;
      __retval392 = t396;
      char* t397 = __retval392;
      return t397;
    }
    _Bool r398 = std____is_constant_evaluated();
    if (r398) {
        char* t399 = __s2390;
        char* t400 = __s1389;
        _Bool c401 = ((t399 < t400)) ? 1 : 0;
        _Bool isconst402 = 0;
        _Bool ternary403;
        if (isconst402) {
          char* t404 = __s1389;
          char* t405 = __s2390;
          _Bool c406 = ((t404 > t405)) ? 1 : 0;
          ternary403 = (_Bool)c406;
        } else {
          _Bool c407 = 0;
          ternary403 = (_Bool)c407;
        }
        _Bool ternary408;
        if (ternary403) {
          char* t409 = __s1389;
          char* t410 = __s2390;
          unsigned long t411 = __n391;
          char* ptr412 = &(t410)[t411];
          _Bool c413 = ((t409 < ptr412)) ? 1 : 0;
          ternary408 = (_Bool)c413;
        } else {
          _Bool c414 = 0;
          ternary408 = (_Bool)c414;
        }
        if (ternary408) {
            do {
                unsigned long t415 = __n391;
                unsigned long u416 = t415 - 1;
                __n391 = u416;
                unsigned long t417 = __n391;
                char* t418 = __s1389;
                char* ptr419 = &(t418)[t417];
                unsigned long t420 = __n391;
                char* t421 = __s2390;
                char* ptr422 = &(t421)[t420];
                __gnu_cxx__char_traits_char___assign_2(ptr419, ptr422);
              unsigned long t423 = __n391;
              unsigned long c424 = 0;
              _Bool c425 = ((t423 > c424)) ? 1 : 0;
              if (!c425) break;
            } while (1);
        } else {
          char* t426 = __s1389;
          char* t427 = __s2390;
          unsigned long t428 = __n391;
          char* r429 = __gnu_cxx__char_traits_char___copy(t426, t427, t428);
        }
      char* t430 = __s1389;
      __retval392 = t430;
      char* t431 = __retval392;
      return t431;
    }
  char* t432 = __s1389;
  void* cast433 = (void*)t432;
  char* t434 = __s2390;
  void* cast435 = (void*)t434;
  unsigned long t436 = __n391;
  unsigned long c437 = 1;
  unsigned long b438 = t436 * c437;
  void* r439 = memmove(cast433, cast435, b438);
  char* t440 = __s1389;
  __retval392 = t440;
  char* t441 = __retval392;
  return t441;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v442, char* v443, unsigned long v444) {
bb445:
  char* __s1446;
  char* __s2447;
  unsigned long __n448;
  char* __retval449;
  __s1446 = v442;
  __s2447 = v443;
  __n448 = v444;
    unsigned long t450 = __n448;
    unsigned long c451 = 0;
    _Bool c452 = ((t450 == c451)) ? 1 : 0;
    if (c452) {
      char* t453 = __s1446;
      __retval449 = t453;
      char* t454 = __retval449;
      return t454;
    }
    _Bool r455 = std____is_constant_evaluated();
    if (r455) {
      char* t456 = __s1446;
      char* t457 = __s2447;
      unsigned long t458 = __n448;
      char* r459 = __gnu_cxx__char_traits_char___move(t456, t457, t458);
      __retval449 = r459;
      char* t460 = __retval449;
      return t460;
    }
  char* t461 = __s1446;
  void* cast462 = (void*)t461;
  char* t463 = __s2447;
  void* cast464 = (void*)t463;
  unsigned long t465 = __n448;
  void* r466 = memmove(cast462, cast464, t465);
  char* cast467 = (char*)r466;
  __retval449 = cast467;
  char* t468 = __retval449;
  return t468;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v469, char* v470, unsigned long v471) {
bb472:
  char* __d473;
  char* __s474;
  unsigned long __n475;
  __d473 = v469;
  __s474 = v470;
  __n475 = v471;
    unsigned long t476 = __n475;
    unsigned long c477 = 1;
    _Bool c478 = ((t476 == c477)) ? 1 : 0;
    if (c478) {
      char* t479 = __d473;
      char* t480 = __s474;
      std__char_traits_char___assign_2(t479, t480);
    } else {
      char* t481 = __d473;
      char* t482 = __s474;
      unsigned long t483 = __n475;
      char* r484 = std__char_traits_char___move(t481, t482, t483);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486, unsigned long v487, char* v488, unsigned long v489, unsigned long v490) {
bb491:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __p493;
  unsigned long __len1494;
  char* __s495;
  unsigned long __len2496;
  unsigned long __how_much497;
  this492 = v485;
  __p493 = v486;
  __len1494 = v487;
  __s495 = v488;
  __len2496 = v489;
  __how_much497 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = this492;
    unsigned long t499 = __len2496;
    _Bool cast500 = (_Bool)t499;
    _Bool ternary501;
    if (cast500) {
      unsigned long t502 = __len2496;
      unsigned long t503 = __len1494;
      _Bool c504 = ((t502 <= t503)) ? 1 : 0;
      ternary501 = (_Bool)c504;
    } else {
      _Bool c505 = 0;
      ternary501 = (_Bool)c505;
    }
    if (ternary501) {
      char* t506 = __p493;
      char* t507 = __s495;
      unsigned long t508 = __len2496;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
    }
    unsigned long t509 = __how_much497;
    _Bool cast510 = (_Bool)t509;
    _Bool ternary511;
    if (cast510) {
      unsigned long t512 = __len1494;
      unsigned long t513 = __len2496;
      _Bool c514 = ((t512 != t513)) ? 1 : 0;
      ternary511 = (_Bool)c514;
    } else {
      _Bool c515 = 0;
      ternary511 = (_Bool)c515;
    }
    if (ternary511) {
      char* t516 = __p493;
      unsigned long t517 = __len2496;
      char* ptr518 = &(t516)[t517];
      char* t519 = __p493;
      unsigned long t520 = __len1494;
      char* ptr521 = &(t519)[t520];
      unsigned long t522 = __how_much497;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr518, ptr521, t522);
    }
    unsigned long t523 = __len2496;
    unsigned long t524 = __len1494;
    _Bool c525 = ((t523 > t524)) ? 1 : 0;
    if (c525) {
        char* t526 = __s495;
        unsigned long t527 = __len2496;
        char* ptr528 = &(t526)[t527];
        char* t529 = __p493;
        unsigned long t530 = __len1494;
        char* ptr531 = &(t529)[t530];
        _Bool c532 = ((ptr528 <= ptr531)) ? 1 : 0;
        if (c532) {
          char* t533 = __p493;
          char* t534 = __s495;
          unsigned long t535 = __len2496;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t533, t534, t535);
        } else {
            char* t536 = __s495;
            char* t537 = __p493;
            unsigned long t538 = __len1494;
            char* ptr539 = &(t537)[t538];
            _Bool c540 = ((t536 >= ptr539)) ? 1 : 0;
            if (c540) {
              unsigned long __poff541;
              char* t542 = __s495;
              char* t543 = __p493;
              long diff544 = t542 - t543;
              unsigned long cast545 = (unsigned long)diff544;
              unsigned long t546 = __len2496;
              unsigned long t547 = __len1494;
              unsigned long b548 = t546 - t547;
              unsigned long b549 = cast545 + b548;
              __poff541 = b549;
              char* t550 = __p493;
              char* t551 = __p493;
              unsigned long t552 = __poff541;
              char* ptr553 = &(t551)[t552];
              unsigned long t554 = __len2496;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t550, ptr553, t554);
            } else {
              unsigned long __nleft555;
              char* t556 = __p493;
              unsigned long t557 = __len1494;
              char* ptr558 = &(t556)[t557];
              char* t559 = __s495;
              long diff560 = ptr558 - t559;
              unsigned long cast561 = (unsigned long)diff560;
              __nleft555 = cast561;
              char* t562 = __p493;
              char* t563 = __s495;
              unsigned long t564 = __nleft555;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t562, t563, t564);
              char* t565 = __p493;
              unsigned long t566 = __nleft555;
              char* ptr567 = &(t565)[t566];
              char* t568 = __p493;
              unsigned long t569 = __len2496;
              char* ptr570 = &(t568)[t569];
              unsigned long t571 = __len2496;
              unsigned long t572 = __nleft555;
              unsigned long b573 = t571 - t572;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr567, ptr570, b573);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574) {
bb575:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this576;
  unsigned long __retval577;
  this576 = v574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this576;
  unsigned long r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t578);
  __retval577 = r579;
  unsigned long t580 = __retval577;
  return t580;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v581, unsigned long* v582, unsigned long v583) {
bb584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this585;
  unsigned long* __capacity586;
  unsigned long __old_capacity587;
  char* __retval588;
  this585 = v581;
  __capacity586 = v582;
  __old_capacity587 = v583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t589 = this585;
    unsigned long* t590 = __capacity586;
    unsigned long t591 = *t590;
    unsigned long r592 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
    _Bool c593 = ((t591 > r592)) ? 1 : 0;
    if (c593) {
      char* cast594 = (char*)&(_str_7);
      std____throw_length_error(cast594);
    }
    unsigned long* t595 = __capacity586;
    unsigned long t596 = *t595;
    unsigned long t597 = __old_capacity587;
    _Bool c598 = ((t596 > t597)) ? 1 : 0;
    _Bool ternary599;
    if (c598) {
      unsigned long* t600 = __capacity586;
      unsigned long t601 = *t600;
      unsigned long c602 = 2;
      unsigned long t603 = __old_capacity587;
      unsigned long b604 = c602 * t603;
      _Bool c605 = ((t601 < b604)) ? 1 : 0;
      ternary599 = (_Bool)c605;
    } else {
      _Bool c606 = 0;
      ternary599 = (_Bool)c606;
    }
    if (ternary599) {
      unsigned long c607 = 2;
      unsigned long t608 = __old_capacity587;
      unsigned long b609 = c607 * t608;
      unsigned long* t610 = __capacity586;
      *t610 = b609;
        unsigned long* t611 = __capacity586;
        unsigned long t612 = *t611;
        unsigned long r613 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
        _Bool c614 = ((t612 > r613)) ? 1 : 0;
        if (c614) {
          unsigned long r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
          unsigned long* t616 = __capacity586;
          *t616 = r615;
        }
    }
  struct std__allocator_char_* r617 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t589);
  unsigned long* t618 = __capacity586;
  unsigned long t619 = *t618;
  unsigned long c620 = 1;
  unsigned long b621 = t619 + c620;
  char* r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r617, b621);
  __retval588 = r622;
  char* t623 = __retval588;
  return t623;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v624, char* v625, unsigned long v626) {
bb627:
  struct std__allocator_char_* __a628;
  char* __p629;
  unsigned long __n630;
  __a628 = v624;
  __p629 = v625;
  __n630 = v626;
  struct std__allocator_char_* t631 = __a628;
  char* t632 = __p629;
  unsigned long t633 = __n630;
  std__allocator_char___deallocate(t631, t632, t633);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v634, unsigned long v635) {
bb636:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this637;
  unsigned long __size638;
  this637 = v634;
  __size638 = v635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t639 = this637;
  struct std__allocator_char_* r640 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t639);
  char* r641 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t639);
  unsigned long t642 = __size638;
  unsigned long c643 = 1;
  unsigned long b644 = t642 + c643;
  std__allocator_traits_std__allocator_char_____deallocate(r640, r641, b644);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this647;
  this647 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t648 = this647;
    _Bool r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t648);
    _Bool u650 = !r649;
    if (u650) {
      unsigned long t651 = t648->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t648, t651);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652, char* v653) {
bb654:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  char* __p656;
  this655 = v652;
  __p656 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  char* t658 = __p656;
  t657->_M_dataplus._M_p = t658;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660) {
bb661:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this662;
  unsigned long __capacity663;
  this662 = v659;
  __capacity663 = v660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t664 = this662;
  unsigned long t665 = __capacity663;
  t664->field2._M_allocated_capacity = t665;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __len1674;
  char* __s675;
  unsigned long __len2676;
  unsigned long __how_much677;
  unsigned long __new_capacity678;
  char* __r679;
  this672 = v666;
  __pos673 = v667;
  __len1674 = v668;
  __s675 = v669;
  __len2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this672;
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t682 = __pos673;
  unsigned long b683 = r681 - t682;
  unsigned long t684 = __len1674;
  unsigned long b685 = b683 - t684;
  __how_much677 = b685;
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t687 = __len2676;
  unsigned long b688 = r686 + t687;
  unsigned long t689 = __len1674;
  unsigned long b690 = b688 - t689;
  __new_capacity678 = b690;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t680);
  char* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t680, &__new_capacity678, r691);
  __r679 = r692;
    unsigned long t693 = __pos673;
    _Bool cast694 = (_Bool)t693;
    if (cast694) {
      char* t695 = __r679;
      char* r696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t697 = __pos673;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t695, r696, t697);
    }
    char* t698 = __s675;
    _Bool cast699 = (_Bool)t698;
    _Bool ternary700;
    if (cast699) {
      unsigned long t701 = __len2676;
      _Bool cast702 = (_Bool)t701;
      ternary700 = (_Bool)cast702;
    } else {
      _Bool c703 = 0;
      ternary700 = (_Bool)c703;
    }
    if (ternary700) {
      char* t704 = __r679;
      unsigned long t705 = __pos673;
      char* ptr706 = &(t704)[t705];
      char* t707 = __s675;
      unsigned long t708 = __len2676;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr706, t707, t708);
    }
    unsigned long t709 = __how_much677;
    _Bool cast710 = (_Bool)t709;
    if (cast710) {
      char* t711 = __r679;
      unsigned long t712 = __pos673;
      char* ptr713 = &(t711)[t712];
      unsigned long t714 = __len2676;
      char* ptr715 = &(ptr713)[t714];
      char* r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t717 = __pos673;
      char* ptr718 = &(r716)[t717];
      unsigned long t719 = __len1674;
      char* ptr720 = &(ptr718)[t719];
      unsigned long t721 = __how_much677;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr715, ptr720, t721);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t680);
  char* t722 = __r679;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t680, t722);
  unsigned long t723 = __new_capacity678;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t680, t723);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v724, unsigned long v725, unsigned long v726, char* v727, unsigned long v728) {
bb729:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this730;
  unsigned long __pos731;
  unsigned long __len1732;
  char* __s733;
  unsigned long __len2734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval735;
  unsigned long __old_size736;
  unsigned long __new_size737;
  this730 = v724;
  __pos731 = v725;
  __len1732 = v726;
  __s733 = v727;
  __len2734 = v728;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this730;
  unsigned long t739 = __len1732;
  unsigned long t740 = __len2734;
  char* cast741 = (char*)&(_str_6);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t738, t739, t740, cast741);
  unsigned long r742 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t738);
  __old_size736 = r742;
  unsigned long t743 = __old_size736;
  unsigned long t744 = __len2734;
  unsigned long b745 = t743 + t744;
  unsigned long t746 = __len1732;
  unsigned long b747 = b745 - t746;
  __new_size737 = b747;
    unsigned long t748 = __new_size737;
    unsigned long r749 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t738);
    _Bool c750 = ((t748 <= r749)) ? 1 : 0;
    if (c750) {
      char* __p751;
      unsigned long __how_much752;
      char* r753 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
      unsigned long t754 = __pos731;
      char* ptr755 = &(r753)[t754];
      __p751 = ptr755;
      unsigned long t756 = __old_size736;
      unsigned long t757 = __pos731;
      unsigned long b758 = t756 - t757;
      unsigned long t759 = __len1732;
      unsigned long b760 = b758 - t759;
      __how_much752 = b760;
        _Bool r761 = std__is_constant_evaluated();
        if (r761) {
          char* __newp762;
          struct std__allocator_char_* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          unsigned long t764 = __new_size737;
          char* r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r763, t764);
          __newp762 = r765;
          char* t766 = __newp762;
          char* r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          unsigned long t768 = __pos731;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t766, r767, t768);
          char* t769 = __newp762;
          unsigned long t770 = __pos731;
          char* ptr771 = &(t769)[t770];
          char* t772 = __s733;
          unsigned long t773 = __len2734;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr771, t772, t773);
          char* t774 = __newp762;
          unsigned long t775 = __pos731;
          char* ptr776 = &(t774)[t775];
          unsigned long t777 = __len2734;
          char* ptr778 = &(ptr776)[t777];
          char* t779 = __p751;
          unsigned long t780 = __len1732;
          char* ptr781 = &(t779)[t780];
          unsigned long t782 = __how_much752;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr778, ptr781, t782);
          char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          char* t784 = __newp762;
          unsigned long t785 = __new_size737;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r783, t784, t785);
          struct std__allocator_char_* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          char* t787 = __newp762;
          unsigned long t788 = __new_size737;
          std__allocator_char___deallocate(r786, t787, t788);
        } else {
            char* t789 = __s733;
            _Bool r790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t738, t789);
            if (r790) {
                unsigned long t791 = __how_much752;
                _Bool cast792 = (_Bool)t791;
                _Bool ternary793;
                if (cast792) {
                  unsigned long t794 = __len1732;
                  unsigned long t795 = __len2734;
                  _Bool c796 = ((t794 != t795)) ? 1 : 0;
                  ternary793 = (_Bool)c796;
                } else {
                  _Bool c797 = 0;
                  ternary793 = (_Bool)c797;
                }
                if (ternary793) {
                  char* t798 = __p751;
                  unsigned long t799 = __len2734;
                  char* ptr800 = &(t798)[t799];
                  char* t801 = __p751;
                  unsigned long t802 = __len1732;
                  char* ptr803 = &(t801)[t802];
                  unsigned long t804 = __how_much752;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr800, ptr803, t804);
                }
                unsigned long t805 = __len2734;
                _Bool cast806 = (_Bool)t805;
                if (cast806) {
                  char* t807 = __p751;
                  char* t808 = __s733;
                  unsigned long t809 = __len2734;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t807, t808, t809);
                }
            } else {
              char* t810 = __p751;
              unsigned long t811 = __len1732;
              char* t812 = __s733;
              unsigned long t813 = __len2734;
              unsigned long t814 = __how_much752;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t738, t810, t811, t812, t813, t814);
            }
        }
    } else {
      unsigned long t815 = __pos731;
      unsigned long t816 = __len1732;
      char* t817 = __s733;
      unsigned long t818 = __len2734;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t738, t815, t816, t817, t818);
    }
  unsigned long t819 = __new_size737;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t738, t819);
  __retval735 = t738;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = __retval735;
  return t820;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821) {
bb822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this823;
  unsigned long __retval824;
  unsigned long __sz825;
  this823 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t826 = this823;
  unsigned long t827 = t826->_M_string_length;
  __sz825 = t827;
    unsigned long t828 = __sz825;
    unsigned long r829 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t826);
    _Bool c830 = ((t828 > r829)) ? 1 : 0;
    if (c830) {
      __builtin_unreachable();
    }
  unsigned long t831 = __sz825;
  __retval824 = t831;
  unsigned long t832 = __retval824;
  return t832;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v833, char* v834) {
bb835:
  char* __c1836;
  char* __c2837;
  _Bool __retval838;
  __c1836 = v833;
  __c2837 = v834;
  char* t839 = __c1836;
  char t840 = *t839;
  int cast841 = (int)t840;
  char* t842 = __c2837;
  char t843 = *t842;
  int cast844 = (int)t843;
  _Bool c845 = ((cast841 == cast844)) ? 1 : 0;
  __retval838 = c845;
  _Bool t846 = __retval838;
  return t846;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v847) {
bb848:
  char* __p849;
  unsigned long __retval850;
  unsigned long __i851;
  __p849 = v847;
  unsigned long c852 = 0;
  __i851 = c852;
    char ref_tmp0853;
    while (1) {
      unsigned long t854 = __i851;
      char* t855 = __p849;
      char* ptr856 = &(t855)[t854];
      char c857 = 0;
      ref_tmp0853 = c857;
      _Bool r858 = __gnu_cxx__char_traits_char___eq(ptr856, &ref_tmp0853);
      _Bool u859 = !r858;
      if (!u859) break;
      unsigned long t860 = __i851;
      unsigned long u861 = t860 + 1;
      __i851 = u861;
    }
  unsigned long t862 = __i851;
  __retval850 = t862;
  unsigned long t863 = __retval850;
  return t863;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v864) {
bb865:
  char* __s866;
  unsigned long __retval867;
  __s866 = v864;
    _Bool r868 = std____is_constant_evaluated();
    if (r868) {
      char* t869 = __s866;
      unsigned long r870 = __gnu_cxx__char_traits_char___length(t869);
      __retval867 = r870;
      unsigned long t871 = __retval867;
      return t871;
    }
  char* t872 = __s866;
  unsigned long r873 = strlen(t872);
  __retval867 = r873;
  unsigned long t874 = __retval867;
  return t874;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v875, char* v876) {
bb877:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this878;
  char* __s879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval880;
  this878 = v875;
  __s879 = v876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = this878;
  unsigned long c882 = 0;
  unsigned long r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t881);
  char* t884 = __s879;
  char* t885 = __s879;
  unsigned long r886 = std__char_traits_char___length(t885);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t881, c882, r883, t884, r886);
  __retval880 = r887;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t888 = __retval880;
  return t888;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889, char* v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  char* __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval894;
  this892 = v889;
  __s893 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = this892;
  char* t896 = __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t895, t896);
  __retval894 = r897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __retval894;
  return t898;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v899, char* v900) {
bb901:
  char* __location902;
  char* __args903;
  char* __retval904;
  void* __loc905;
  __location902 = v899;
  __args903 = v900;
  char* t906 = __location902;
  void* cast907 = (void*)t906;
  __loc905 = cast907;
    void* t908 = __loc905;
    char* cast909 = (char*)t908;
    char* t910 = __args903;
    char t911 = *t910;
    *cast909 = t911;
    __retval904 = cast909;
    char* t912 = __retval904;
    return t912;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v913, unsigned long v914, char v915) {
bb916:
  char* __s917;
  unsigned long __n918;
  char __a919;
  char* __retval920;
  __s917 = v913;
  __n918 = v914;
  __a919 = v915;
    _Bool r921 = std____is_constant_evaluated();
    if (r921) {
        unsigned long __i922;
        unsigned long c923 = 0;
        __i922 = c923;
        while (1) {
          unsigned long t925 = __i922;
          unsigned long t926 = __n918;
          _Bool c927 = ((t925 < t926)) ? 1 : 0;
          if (!c927) break;
          char* t928 = __s917;
          unsigned long t929 = __i922;
          char* ptr930 = &(t928)[t929];
          char* r931 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr930, &__a919);
        for_step924: ;
          unsigned long t932 = __i922;
          unsigned long u933 = t932 + 1;
          __i922 = u933;
        }
      char* t934 = __s917;
      __retval920 = t934;
      char* t935 = __retval920;
      return t935;
    }
      unsigned long t936 = __n918;
      _Bool cast937 = (_Bool)t936;
      if (cast937) {
        unsigned char __c938;
        void* cast939 = (void*)&(__c938);
        void* cast940 = (void*)&(__a919);
        unsigned long c941 = 1;
        void* r942 = memcpy(cast939, cast940, c941);
        char* t943 = __s917;
        void* cast944 = (void*)t943;
        unsigned char t945 = __c938;
        int cast946 = (int)t945;
        unsigned long t947 = __n918;
        void* r948 = memset(cast944, cast946, t947);
      }
  char* t949 = __s917;
  __retval920 = t949;
  char* t950 = __retval920;
  return t950;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v951, unsigned long v952, char v953) {
bb954:
  char* __s955;
  unsigned long __n956;
  char __a957;
  char* __retval958;
  __s955 = v951;
  __n956 = v952;
  __a957 = v953;
    unsigned long t959 = __n956;
    unsigned long c960 = 0;
    _Bool c961 = ((t959 == c960)) ? 1 : 0;
    if (c961) {
      char* t962 = __s955;
      __retval958 = t962;
      char* t963 = __retval958;
      return t963;
    }
    _Bool r964 = std____is_constant_evaluated();
    if (r964) {
      char* t965 = __s955;
      unsigned long t966 = __n956;
      char t967 = __a957;
      char* r968 = __gnu_cxx__char_traits_char___assign(t965, t966, t967);
      __retval958 = r968;
      char* t969 = __retval958;
      return t969;
    }
  char* t970 = __s955;
  void* cast971 = (void*)t970;
  char t972 = __a957;
  int cast973 = (int)t972;
  unsigned long t974 = __n956;
  void* r975 = memset(cast971, cast973, t974);
  char* cast976 = (char*)r975;
  __retval958 = cast976;
  char* t977 = __retval958;
  return t977;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v978, unsigned long v979, char v980) {
bb981:
  char* __d982;
  unsigned long __n983;
  char __c984;
  __d982 = v978;
  __n983 = v979;
  __c984 = v980;
    unsigned long t985 = __n983;
    unsigned long c986 = 1;
    _Bool c987 = ((t985 == c986)) ? 1 : 0;
    if (c987) {
      char* t988 = __d982;
      std__char_traits_char___assign_2(t988, &__c984);
    } else {
      char* t989 = __d982;
      unsigned long t990 = __n983;
      char t991 = __c984;
      char* r992 = std__char_traits_char___assign(t989, t990, t991);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v993, unsigned long v994, unsigned long v995, unsigned long v996, char v997) {
bb998:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this999;
  unsigned long __pos11000;
  unsigned long __n11001;
  unsigned long __n21002;
  char __c1003;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1004;
  unsigned long __old_size1005;
  unsigned long __new_size1006;
  this999 = v993;
  __pos11000 = v994;
  __n11001 = v995;
  __n21002 = v996;
  __c1003 = v997;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = this999;
  unsigned long t1008 = __n11001;
  unsigned long t1009 = __n21002;
  char* cast1010 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1007, t1008, t1009, cast1010);
  unsigned long r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1007);
  __old_size1005 = r1011;
  unsigned long t1012 = __old_size1005;
  unsigned long t1013 = __n21002;
  unsigned long b1014 = t1012 + t1013;
  unsigned long t1015 = __n11001;
  unsigned long b1016 = b1014 - t1015;
  __new_size1006 = b1016;
    unsigned long t1017 = __new_size1006;
    unsigned long r1018 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1007);
    _Bool c1019 = ((t1017 <= r1018)) ? 1 : 0;
    if (c1019) {
      char* __p1020;
      unsigned long __how_much1021;
      char* r1022 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
      unsigned long t1023 = __pos11000;
      char* ptr1024 = &(r1022)[t1023];
      __p1020 = ptr1024;
      unsigned long t1025 = __old_size1005;
      unsigned long t1026 = __pos11000;
      unsigned long b1027 = t1025 - t1026;
      unsigned long t1028 = __n11001;
      unsigned long b1029 = b1027 - t1028;
      __how_much1021 = b1029;
        unsigned long t1030 = __how_much1021;
        _Bool cast1031 = (_Bool)t1030;
        _Bool ternary1032;
        if (cast1031) {
          unsigned long t1033 = __n11001;
          unsigned long t1034 = __n21002;
          _Bool c1035 = ((t1033 != t1034)) ? 1 : 0;
          ternary1032 = (_Bool)c1035;
        } else {
          _Bool c1036 = 0;
          ternary1032 = (_Bool)c1036;
        }
        if (ternary1032) {
          char* t1037 = __p1020;
          unsigned long t1038 = __n21002;
          char* ptr1039 = &(t1037)[t1038];
          char* t1040 = __p1020;
          unsigned long t1041 = __n11001;
          char* ptr1042 = &(t1040)[t1041];
          unsigned long t1043 = __how_much1021;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1039, ptr1042, t1043);
        }
    } else {
      unsigned long t1044 = __pos11000;
      unsigned long t1045 = __n11001;
      char* c1046 = ((void*)0);
      unsigned long t1047 = __n21002;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1007, t1044, t1045, c1046, t1047);
    }
    unsigned long t1048 = __n21002;
    _Bool cast1049 = (_Bool)t1048;
    if (cast1049) {
      char* r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
      unsigned long t1051 = __pos11000;
      char* ptr1052 = &(r1050)[t1051];
      unsigned long t1053 = __n21002;
      char t1054 = __c1003;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr1052, t1053, t1054);
    }
  unsigned long t1055 = __new_size1006;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1007, t1055);
  __retval1004 = t1007;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = __retval1004;
  return t1056;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057, unsigned long v1058, char v1059) {
bb1060:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1061;
  unsigned long __n1062;
  char __c1063;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1064;
  this1061 = v1057;
  __n1062 = v1058;
  __c1063 = v1059;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1065 = this1061;
  unsigned long c1066 = 0;
  unsigned long r1067 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1065);
  unsigned long t1068 = __n1062;
  char t1069 = __c1063;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t1065, c1066, r1067, t1068, t1069);
  __retval1064 = r1070;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = __retval1064;
  return t1071;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1072, char v1073) {
bb1074:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1075;
  char __c1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1077;
  this1075 = v1072;
  __c1076 = v1073;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1078 = this1075;
  unsigned long c1079 = 1;
  char t1080 = __c1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1081 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(t1078, c1079, t1080);
  __retval1077 = t1078;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1082 = __retval1077;
  return t1082;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1083, struct std__allocator_char_* v1084) {
bb1085:
  struct std__allocator_char_* this1086;
  struct std__allocator_char_* __a1087;
  this1086 = v1083;
  __a1087 = v1084;
  struct std__allocator_char_* t1088 = this1086;
  struct std____new_allocator_char_* base1089 = (struct std____new_allocator_char_*)((char *)t1088 + 0);
  struct std__allocator_char_* t1090 = __a1087;
  struct std____new_allocator_char_* base1091 = (struct std____new_allocator_char_*)((char *)t1090 + 0);
  std____new_allocator_char_____new_allocator(base1089, base1091);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1092) {
bb1093:
  struct std__allocator_char_* __rhs1094;
  struct std__allocator_char_ __retval1095;
  __rhs1094 = v1092;
  struct std__allocator_char_* t1096 = __rhs1094;
  std__allocator_char___allocator(&__retval1095, t1096);
  struct std__allocator_char_ t1097 = __retval1095;
  return t1097;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1098) {
bb1099:
  struct std__allocator_char_* __a1100;
  struct std__allocator_char_ __retval1101;
  __a1100 = v1098;
  struct std__allocator_char_* t1102 = __a1100;
  struct std__allocator_char_ r1103 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1102);
  __retval1101 = r1103;
  struct std__allocator_char_ t1104 = __retval1101;
  return t1104;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1105, struct std__allocator_char_* v1106) {
bb1107:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1108;
  struct std__allocator_char_* __a1109;
  this1108 = v1105;
  __a1109 = v1106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1110 = this1108;
  char* r1111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1110);
  struct std__allocator_char_* t1112 = __a1109;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t1110->_M_dataplus, r1111, t1112);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1110);
    unsigned long c1113 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1110, c1113);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1114, unsigned long v1115) {
bb1116:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1117;
  unsigned long __res1118;
  unsigned long __capacity1119;
  char* __tmp1120;
  this1117 = v1114;
  __res1118 = v1115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1121 = this1117;
  unsigned long r1122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1121);
  __capacity1119 = r1122;
    unsigned long t1123 = __res1118;
    unsigned long t1124 = __capacity1119;
    _Bool c1125 = ((t1123 <= t1124)) ? 1 : 0;
    if (c1125) {
      return;
    }
  unsigned long t1126 = __capacity1119;
  char* r1127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1121, &__res1118, t1126);
  __tmp1120 = r1127;
  char* t1128 = __tmp1120;
  char* r1129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1121);
  unsigned long r1130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1121);
  unsigned long c1131 = 1;
  unsigned long b1132 = r1130 + c1131;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1128, r1129, b1132);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1121);
  char* t1133 = __tmp1120;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1121, t1133);
  unsigned long t1134 = __res1118;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1121, t1134);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1135, char* v1136, unsigned long v1137) {
bb1138:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1139;
  char* __s1140;
  unsigned long __n1141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1142;
  unsigned long __len1143;
  this1139 = v1135;
  __s1140 = v1136;
  __n1141 = v1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1144 = this1139;
  unsigned long t1145 = __n1141;
  unsigned long r1146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1144);
  unsigned long b1147 = t1145 + r1146;
  __len1143 = b1147;
    unsigned long t1148 = __len1143;
    unsigned long r1149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1144);
    _Bool c1150 = ((t1148 <= r1149)) ? 1 : 0;
    if (c1150) {
        unsigned long t1151 = __n1141;
        _Bool cast1152 = (_Bool)t1151;
        if (cast1152) {
          char* r1153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1144);
          unsigned long r1154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1144);
          char* ptr1155 = &(r1153)[r1154];
          char* t1156 = __s1140;
          unsigned long t1157 = __n1141;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1155, t1156, t1157);
        }
    } else {
      unsigned long r1158 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1144);
      unsigned long c1159 = 0;
      char* t1160 = __s1140;
      unsigned long t1161 = __n1141;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1144, r1158, c1159, t1160, t1161);
    }
  unsigned long t1162 = __len1143;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1144, t1162);
  __retval1142 = t1144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1163 = __retval1142;
  return t1163;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1164, char* v1165, unsigned long v1166) {
bb1167:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1168;
  char* __s1169;
  unsigned long __n1170;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1171;
  this1168 = v1164;
  __s1169 = v1165;
  __n1170 = v1166;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1172 = this1168;
  unsigned long c1173 = 0;
  unsigned long t1174 = __n1170;
  char* cast1175 = (char*)&(_str_9);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1172, c1173, t1174, cast1175);
  char* t1176 = __s1169;
  unsigned long t1177 = __n1170;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1178 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1172, t1176, t1177);
  __retval1171 = r1178;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = __retval1171;
  return t1179;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v1180, unsigned long v1181, char* v1182, unsigned long v1183, struct std__allocator_char_* v1184) {
bb1185:
  char* __lhs1186;
  unsigned long __lhs_len1187;
  char* __rhs1188;
  unsigned long __rhs_len1189;
  struct std__allocator_char_* __a1190;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1191;
  _Bool nrvo1192;
  struct std__allocator_char_ ref_tmp01193;
  __lhs1186 = v1180;
  __lhs_len1187 = v1181;
  __rhs1188 = v1182;
  __rhs_len1189 = v1183;
  __a1190 = v1184;
  _Bool c1194 = 0;
  nrvo1192 = c1194;
  struct std__allocator_char_* t1195 = __a1190;
  struct std__allocator_char_ r1196 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t1195);
  ref_tmp01193 = r1196;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&__retval1191, &ref_tmp01193);
  {
    std__allocator_char____allocator(&ref_tmp01193);
  }
    unsigned long t1197 = __lhs_len1187;
    unsigned long t1198 = __rhs_len1189;
    unsigned long b1199 = t1197 + t1198;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval1191, b1199);
    char* t1200 = __lhs1186;
    unsigned long t1201 = __lhs_len1187;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1191, t1200, t1201);
    char* t1203 = __rhs1188;
    unsigned long t1204 = __rhs_len1189;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1191, t1203, t1204);
    _Bool c1206 = 1;
    nrvo1192 = c1206;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1207 = __retval1191;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1208 = t1207;
    {
      _Bool t1209 = nrvo1192;
      _Bool u1210 = !t1209;
      if (u1210) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1191);
      }
    }
    return ret_val1208;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1211) {
bb1212:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1213;
  char* __retval1214;
  this1213 = v1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1215 = this1213;
  char* r1216 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1215);
  __retval1214 = r1216;
  char* t1217 = __retval1214;
  return t1217;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1218) {
bb1219:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1220;
  struct std__allocator_char_ __retval1221;
  this1220 = v1218;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1222 = this1220;
  struct std__allocator_char_* r1223 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1222);
  std__allocator_char___allocator(&__retval1221, r1223);
  struct std__allocator_char_ t1224 = __retval1221;
  return t1224;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1225, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1226) {
bb1227:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1228;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1229;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1230;
  struct std__allocator_char_ ref_tmp01231;
  __lhs1228 = v1225;
  __rhs1229 = v1226;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1232 = __lhs1228;
  char* r1233 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1232);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1234 = __lhs1228;
  unsigned long r1235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1234);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1236 = __rhs1229;
  char* r1237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1236);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1238 = __rhs1229;
  unsigned long r1239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1238);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1240 = __lhs1228;
  struct std__allocator_char_ r1241 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1240);
  ref_tmp01231 = r1241;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1233, r1235, r1237, r1239, &ref_tmp01231);
    __retval1230 = r1242;
  {
    std__allocator_char____allocator(&ref_tmp01231);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1243 = __retval1230;
  return t1243;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb1244:
  _Bool __retval1245;
  _Bool t1246 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1245 = t1246;
  _Bool t1247 = __retval1245;
  return t1247;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v1248, struct std____new_allocator_char_* v1249) {
bb1250:
  struct std____new_allocator_char_* this1251;
  struct std____new_allocator_char_* unnamed1252;
  struct std____new_allocator_char_* __retval1253;
  this1251 = v1248;
  unnamed1252 = v1249;
  struct std____new_allocator_char_* t1254 = this1251;
  __retval1253 = t1254;
  struct std____new_allocator_char_* t1255 = __retval1253;
  return t1255;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v1256, struct std__allocator_char_* v1257) {
bb1258:
  struct std__allocator_char_* this1259;
  struct std__allocator_char_* unnamed1260;
  struct std__allocator_char_* __retval1261;
  this1259 = v1256;
  unnamed1260 = v1257;
  struct std__allocator_char_* t1262 = this1259;
  struct std____new_allocator_char_* base1263 = (struct std____new_allocator_char_*)((char *)t1262 + 0);
  struct std__allocator_char_* t1264 = unnamed1260;
  struct std____new_allocator_char_* base1265 = (struct std____new_allocator_char_*)((char *)t1264 + 0);
  struct std____new_allocator_char_* r1266 = std____new_allocator_char___operator_(base1263, base1265);
  __retval1261 = t1262;
  struct std__allocator_char_* t1267 = __retval1261;
  return t1267;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v1268, struct std__allocator_char_* v1269) {
bb1270:
  struct std__allocator_char_* __one1271;
  struct std__allocator_char_* __two1272;
  __one1271 = v1268;
  __two1272 = v1269;
    struct std__allocator_char_* t1273 = __two1272;
    struct std__allocator_char_* t1274 = __one1271;
    struct std__allocator_char_* r1275 = std__allocator_char___operator_(t1274, t1273);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1276) {
bb1277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1278;
  char* __retval1279;
  this1278 = v1276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1280 = this1278;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1280);
  char* r1281 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1280);
  __retval1279 = r1281;
  char* t1282 = __retval1279;
  return t1282;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1283, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1284) {
bb1285:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1287;
  this1286 = v1283;
  __str1287 = v1284;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1288 = this1286;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1289 = __str1287;
    _Bool c1290 = ((t1288 != t1289)) ? 1 : 0;
    if (c1290) {
      unsigned long __rsize1291;
      unsigned long __capacity1292;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = __str1287;
      unsigned long r1294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1293);
      __rsize1291 = r1294;
      unsigned long r1295 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1288);
      __capacity1292 = r1295;
        unsigned long t1296 = __rsize1291;
        unsigned long t1297 = __capacity1292;
        _Bool c1298 = ((t1296 > t1297)) ? 1 : 0;
        if (c1298) {
          unsigned long __new_capacity1299;
          char* __tmp1300;
          unsigned long t1301 = __rsize1291;
          __new_capacity1299 = t1301;
          unsigned long t1302 = __capacity1292;
          char* r1303 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1288, &__new_capacity1299, t1302);
          __tmp1300 = r1303;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1288);
          char* t1304 = __tmp1300;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1288, t1304);
          unsigned long t1305 = __new_capacity1299;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1288, t1305);
        }
        unsigned long t1306 = __rsize1291;
        _Bool cast1307 = (_Bool)t1306;
        if (cast1307) {
          char* r1308 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1288);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1309 = __str1287;
          char* r1310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1309);
          unsigned long t1311 = __rsize1291;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1308, r1310, t1311);
        }
      unsigned long t1312 = __rsize1291;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1288, t1312);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1313) {
bb1314:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1315;
  this1315 = v1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1316 = this1315;
  unsigned long c1317 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1316, c1317);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1318, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1319) {
bb1320:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1321;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1323;
  _Bool __equal_allocs1324;
  this1321 = v1318;
  __str1322 = v1319;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1325 = this1321;
  _Bool c1326 = 1;
  __equal_allocs1324 = c1326;
    _Bool r1327 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1325);
    _Bool u1328 = !r1327;
    _Bool ternary1329;
    if (u1328) {
      _Bool r1330 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary1329 = (_Bool)r1330;
    } else {
      _Bool c1331 = 0;
      ternary1329 = (_Bool)c1331;
    }
    _Bool ternary1332;
    if (ternary1329) {
      _Bool t1333 = __equal_allocs1324;
      _Bool u1334 = !t1333;
      ternary1332 = (_Bool)u1334;
    } else {
      _Bool c1335 = 0;
      ternary1332 = (_Bool)c1335;
    }
    if (ternary1332) {
      unsigned long t1336 = t1325->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1325, t1336);
      char* r1337 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1325);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1325, r1337);
      unsigned long c1338 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1325, c1338);
    }
  struct std__allocator_char_* r1339 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1325);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1340 = __str1322;
  struct std__allocator_char_* r1341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1340);
  void_std____alloc_on_move_std__allocator_char___(r1339, r1341);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1342 = __str1322;
    _Bool r1343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1342);
    if (r1343) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1344 = __str1322;
        _Bool c1345 = ((t1344 != t1325)) ? 1 : 0;
        if (c1345) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1346 = __str1322;
            unsigned long r1347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1346);
            _Bool cast1348 = (_Bool)r1347;
            if (cast1348) {
              char* r1349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1325);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1350 = __str1322;
              char* r1351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1350);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1352 = __str1322;
              unsigned long r1353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1352);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1349, r1351, r1353);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1354 = __str1322;
          unsigned long r1355 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1354);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1325, r1355);
        }
    } else {
        _Bool r1356 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary1357;
        if (r1356) {
          _Bool c1358 = 1;
          ternary1357 = (_Bool)c1358;
        } else {
          _Bool t1359 = __equal_allocs1324;
          ternary1357 = (_Bool)t1359;
        }
        if (ternary1357) {
          char* __data1360;
          unsigned long __capacity1361;
          char* c1362 = ((void*)0);
          __data1360 = c1362;
            _Bool r1363 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1325);
            _Bool u1364 = !r1363;
            if (u1364) {
                _Bool t1365 = __equal_allocs1324;
                if (t1365) {
                  char* r1366 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1325);
                  __data1360 = r1366;
                  unsigned long t1367 = t1325->field2._M_allocated_capacity;
                  __capacity1361 = t1367;
                } else {
                  unsigned long t1368 = t1325->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1325, t1368);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1369 = __str1322;
          char* r1370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1369);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1325, r1370);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1371 = __str1322;
          unsigned long r1372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1371);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1325, r1372);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1373 = __str1322;
          unsigned long t1374 = t1373->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1325, t1374);
            char* t1375 = __data1360;
            _Bool cast1376 = (_Bool)t1375;
            if (cast1376) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1377 = __str1322;
              char* t1378 = __data1360;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1377, t1378);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1379 = __str1322;
              unsigned long t1380 = __capacity1361;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1379, t1380);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1381 = __str1322;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1382 = __str1322;
              char* r1383 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1382);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1381, r1383);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1384 = __str1322;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1325, t1384);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1385 = __str1322;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t1385);
  __retval1323 = t1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1386 = __retval1323;
  return t1386;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1387) {
bb1388:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1389;
  this1389 = v1387;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1390 = this1389;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1390);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1390->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1391, char* v1392) {
bb1393:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1394;
  char* __s1395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1396;
  unsigned long __n1397;
  this1394 = v1391;
  __s1395 = v1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1398 = this1394;
  char* t1399 = __s1395;
  unsigned long r1400 = std__char_traits_char___length(t1399);
  __n1397 = r1400;
  unsigned long c1401 = 0;
  unsigned long t1402 = __n1397;
  char* cast1403 = (char*)&(_str_9);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1398, c1401, t1402, cast1403);
  char* t1404 = __s1395;
  unsigned long t1405 = __n1397;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1398, t1404, t1405);
  __retval1396 = r1406;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1407 = __retval1396;
  return t1407;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1408, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1409) {
bb1410:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1412;
  this1411 = v1408;
  __str1412 = v1409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1413 = this1411;
  char* r1414 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1413);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1415 = __str1412;
  struct std__allocator_char_* r1416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1415);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1413->_M_dataplus, r1414, r1416);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1417 = __str1412;
      _Bool r1418 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1417);
      if (r1418) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1413);
        char* cast1419 = (char*)&(t1413->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1420 = __str1412;
        char* cast1421 = (char*)&(t1420->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1422 = __str1412;
        unsigned long r1423 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1422);
        unsigned long c1424 = 1;
        unsigned long b1425 = r1423 + c1424;
        char* r1426 = std__char_traits_char___copy(cast1419, cast1421, b1425);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1427 = __str1412;
        char* r1428 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1427);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1413, r1428);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1429 = __str1412;
        unsigned long t1430 = t1429->field2._M_allocated_capacity;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1413, t1430);
      }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1431 = __str1412;
    unsigned long r1432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1431);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1413, r1432);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1433 = __str1412;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1434 = __str1412;
    char* r1435 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1434);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1433, r1435);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1436 = __str1412;
    unsigned long c1437 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1436, c1437);
  return;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1438, char* v1439) {
bb1440:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1441;
  char* __rhs1442;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1443;
  __lhs1441 = v1438;
  __rhs1442 = v1439;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1444 = __lhs1441;
  char* t1445 = __rhs1442;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t1444, t1445);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1443, r1446);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1447 = __retval1443;
  return t1447;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1448, char* v1449) {
bb1450:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1451;
  char* __rhs1452;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1453;
  struct std__allocator_char_ ref_tmp01454;
  __lhs1451 = v1448;
  __rhs1452 = v1449;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1455 = __lhs1451;
  char* r1456 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1455);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1457 = __lhs1451;
  unsigned long r1458 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1457);
  char* t1459 = __rhs1452;
  char* t1460 = __rhs1452;
  unsigned long r1461 = std__char_traits_char___length(t1460);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1462 = __lhs1451;
  struct std__allocator_char_ r1463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1462);
  ref_tmp01454 = r1463;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1464 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1456, r1458, t1459, r1461, &ref_tmp01454);
    __retval1453 = r1464;
  {
    std__allocator_char____allocator(&ref_tmp01454);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1465 = __retval1453;
  return t1465;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v1466, char* v1467) {
bb1468:
  char* __c11469;
  char* __c21470;
  _Bool __retval1471;
  __c11469 = v1466;
  __c21470 = v1467;
  char* t1472 = __c11469;
  char t1473 = *t1472;
  unsigned char cast1474 = (unsigned char)t1473;
  int cast1475 = (int)cast1474;
  char* t1476 = __c21470;
  char t1477 = *t1476;
  unsigned char cast1478 = (unsigned char)t1477;
  int cast1479 = (int)cast1478;
  _Bool c1480 = ((cast1475 < cast1479)) ? 1 : 0;
  __retval1471 = c1480;
  _Bool t1481 = __retval1471;
  return t1481;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v1482, char* v1483, unsigned long v1484) {
bb1485:
  char* __s11486;
  char* __s21487;
  unsigned long __n1488;
  int __retval1489;
  __s11486 = v1482;
  __s21487 = v1483;
  __n1488 = v1484;
    unsigned long t1490 = __n1488;
    unsigned long c1491 = 0;
    _Bool c1492 = ((t1490 == c1491)) ? 1 : 0;
    if (c1492) {
      int c1493 = 0;
      __retval1489 = c1493;
      int t1494 = __retval1489;
      return t1494;
    }
    _Bool r1495 = std____is_constant_evaluated();
    if (r1495) {
        unsigned long __i1496;
        unsigned long c1497 = 0;
        __i1496 = c1497;
        while (1) {
          unsigned long t1499 = __i1496;
          unsigned long t1500 = __n1488;
          _Bool c1501 = ((t1499 < t1500)) ? 1 : 0;
          if (!c1501) break;
            unsigned long t1502 = __i1496;
            char* t1503 = __s11486;
            char* ptr1504 = &(t1503)[t1502];
            unsigned long t1505 = __i1496;
            char* t1506 = __s21487;
            char* ptr1507 = &(t1506)[t1505];
            _Bool r1508 = std__char_traits_char___lt(ptr1504, ptr1507);
            if (r1508) {
              int c1509 = -1;
              __retval1489 = c1509;
              int t1510 = __retval1489;
              int ret_val1511 = t1510;
              return ret_val1511;
            } else {
                unsigned long t1512 = __i1496;
                char* t1513 = __s21487;
                char* ptr1514 = &(t1513)[t1512];
                unsigned long t1515 = __i1496;
                char* t1516 = __s11486;
                char* ptr1517 = &(t1516)[t1515];
                _Bool r1518 = std__char_traits_char___lt(ptr1514, ptr1517);
                if (r1518) {
                  int c1519 = 1;
                  __retval1489 = c1519;
                  int t1520 = __retval1489;
                  int ret_val1521 = t1520;
                  return ret_val1521;
                }
            }
        for_step1498: ;
          unsigned long t1522 = __i1496;
          unsigned long u1523 = t1522 + 1;
          __i1496 = u1523;
        }
      int c1524 = 0;
      __retval1489 = c1524;
      int t1525 = __retval1489;
      return t1525;
    }
  char* t1526 = __s11486;
  void* cast1527 = (void*)t1526;
  char* t1528 = __s21487;
  void* cast1529 = (void*)t1528;
  unsigned long t1530 = __n1488;
  int r1531 = memcmp(cast1527, cast1529, t1530);
  __retval1489 = r1531;
  int t1532 = __retval1489;
  return t1532;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1533) {
bb1534:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1535;
  char* __retval1536;
  this1535 = v1533;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1537 = this1535;
  char* r1538 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1537);
  __retval1536 = r1538;
  char* t1539 = __retval1536;
  return t1539;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1540, char* v1541) {
bb1542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1543;
  char* __rhs1544;
  _Bool __retval1545;
  __lhs1543 = v1540;
  __rhs1544 = v1541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1546 = __lhs1543;
  unsigned long r1547 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1546);
  char* t1548 = __rhs1544;
  unsigned long r1549 = std__char_traits_char___length(t1548);
  _Bool c1550 = ((r1547 == r1549)) ? 1 : 0;
  _Bool ternary1551;
  if (c1550) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1552 = __lhs1543;
    char* r1553 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1552);
    char* t1554 = __rhs1544;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1555 = __lhs1543;
    unsigned long r1556 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1555);
    int r1557 = std__char_traits_char___compare(r1553, t1554, r1556);
    _Bool cast1558 = (_Bool)r1557;
    _Bool u1559 = !cast1558;
    ternary1551 = (_Bool)u1559;
  } else {
    _Bool c1560 = 0;
    ternary1551 = (_Bool)c1560;
  }
  __retval1545 = ternary1551;
  _Bool t1561 = __retval1545;
  return t1561;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1562, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1563) {
bb1564:
  struct std__basic_ostream_char__std__char_traits_char__* __os1565;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1566;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1567;
  __os1565 = v1562;
  __str1566 = v1563;
  struct std__basic_ostream_char__std__char_traits_char__* t1568 = __os1565;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1569 = __str1566;
  char* r1570 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1569);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1571 = __str1566;
  unsigned long r1572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1571);
  long cast1573 = (long)r1572;
  struct std__basic_ostream_char__std__char_traits_char__* r1574 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1568, r1570, cast1573);
  __retval1567 = r1574;
  struct std__basic_ostream_char__std__char_traits_char__* t1575 = __retval1567;
  return t1575;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1576, void* v1577) {
bb1578:
  struct std__basic_ostream_char__std__char_traits_char__* this1579;
  void* __pf1580;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1581;
  this1579 = v1576;
  __pf1580 = v1577;
  struct std__basic_ostream_char__std__char_traits_char__* t1582 = this1579;
  void* t1583 = __pf1580;
  struct std__basic_ostream_char__std__char_traits_char__* r1584 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1583)(t1582);
  __retval1581 = r1584;
  struct std__basic_ostream_char__std__char_traits_char__* t1585 = __retval1581;
  return t1585;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1586) {
bb1587:
  struct std__basic_ostream_char__std__char_traits_char__* __os1588;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1589;
  __os1588 = v1586;
  struct std__basic_ostream_char__std__char_traits_char__* t1590 = __os1588;
  struct std__basic_ostream_char__std__char_traits_char__* r1591 = std__ostream__flush(t1590);
  __retval1589 = r1591;
  struct std__basic_ostream_char__std__char_traits_char__* t1592 = __retval1589;
  return t1592;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1593) {
bb1594:
  struct std__ctype_char_* __f1595;
  struct std__ctype_char_* __retval1596;
  __f1595 = v1593;
    struct std__ctype_char_* t1597 = __f1595;
    _Bool cast1598 = (_Bool)t1597;
    _Bool u1599 = !cast1598;
    if (u1599) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1600 = __f1595;
  __retval1596 = t1600;
  struct std__ctype_char_* t1601 = __retval1596;
  return t1601;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1602, char v1603) {
bb1604:
  struct std__ctype_char_* this1605;
  char __c1606;
  char __retval1607;
  this1605 = v1602;
  __c1606 = v1603;
  struct std__ctype_char_* t1608 = this1605;
    char t1609 = t1608->_M_widen_ok;
    _Bool cast1610 = (_Bool)t1609;
    if (cast1610) {
      char t1611 = __c1606;
      unsigned char cast1612 = (unsigned char)t1611;
      unsigned long cast1613 = (unsigned long)cast1612;
      char t1614 = t1608->_M_widen[cast1613];
      __retval1607 = t1614;
      char t1615 = __retval1607;
      return t1615;
    }
  std__ctype_char____M_widen_init___const(t1608);
  char t1616 = __c1606;
  void** v1617 = (void**)t1608;
  void* v1618 = *((void**)v1617);
  char vcall1621 = (char)__VERIFIER_virtual_call_char_char(t1608, 6, t1616);
  __retval1607 = vcall1621;
  char t1622 = __retval1607;
  return t1622;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1623, char v1624) {
bb1625:
  struct std__basic_ios_char__std__char_traits_char__* this1626;
  char __c1627;
  char __retval1628;
  this1626 = v1623;
  __c1627 = v1624;
  struct std__basic_ios_char__std__char_traits_char__* t1629 = this1626;
  struct std__ctype_char_* t1630 = t1629->_M_ctype;
  struct std__ctype_char_* r1631 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1630);
  char t1632 = __c1627;
  char r1633 = std__ctype_char___widen_char__const(r1631, t1632);
  __retval1628 = r1633;
  char t1634 = __retval1628;
  return t1634;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1635) {
bb1636:
  struct std__basic_ostream_char__std__char_traits_char__* __os1637;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1638;
  __os1637 = v1635;
  struct std__basic_ostream_char__std__char_traits_char__* t1639 = __os1637;
  struct std__basic_ostream_char__std__char_traits_char__* t1640 = __os1637;
  void** v1641 = (void**)t1640;
  void* v1642 = *((void**)v1641);
  unsigned char* cast1643 = (unsigned char*)v1642;
  long c1644 = -24;
  unsigned char* ptr1645 = &(cast1643)[c1644];
  long* cast1646 = (long*)ptr1645;
  long t1647 = *cast1646;
  unsigned char* cast1648 = (unsigned char*)t1640;
  unsigned char* ptr1649 = &(cast1648)[t1647];
  struct std__basic_ostream_char__std__char_traits_char__* cast1650 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1649;
  struct std__basic_ios_char__std__char_traits_char__* cast1651 = (struct std__basic_ios_char__std__char_traits_char__*)cast1650;
  char c1652 = 10;
  char r1653 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1651, c1652);
  struct std__basic_ostream_char__std__char_traits_char__* r1654 = std__ostream__put(t1639, r1653);
  struct std__basic_ostream_char__std__char_traits_char__* r1655 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1654);
  __retval1638 = r1655;
  struct std__basic_ostream_char__std__char_traits_char__* t1656 = __retval1638;
  return t1656;
}

// function: main
int main() {
bb1657:
  int __retval1658;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11659;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31661;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01662;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1663;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp11664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp21665;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1666;
  int c1667 = 0;
  __retval1658 = c1667;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11659);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str21660);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str31661);
        char* cast1668 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str11659, cast1668);
        char c1670 = 120;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__3(&str21660, c1670);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1672 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(&str11659, &str21660);
        ref_tmp01662 = r1672;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1673 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str31661, &ref_tmp01662);
          tmp_exprcleanup1663 = r1673;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01662);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1674 = tmp_exprcleanup1663;
        char* cast1675 = (char*)&(_str_1);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(&str31661, cast1675);
        ref_tmp21665 = r1676;
          char* cast1677 = (char*)&(_str_2);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1678 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&ref_tmp21665, cast1677);
          ref_tmp11664 = r1678;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1679 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str31661, &ref_tmp11664);
            tmp_exprcleanup1666 = r1679;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp11664);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp21665);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1680 = tmp_exprcleanup1666;
        char* cast1681 = (char*)&(_str_3);
        _Bool r1682 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str31661, cast1681);
        _Bool u1683 = !r1682;
        if (u1683) {
        } else {
          char* cast1684 = (char*)&(_str_4);
          char* c1685 = _str_5;
          unsigned int c1686 = 25;
          char* cast1687 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1684, c1685, c1686, cast1687);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1688 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str31661);
        struct std__basic_ostream_char__std__char_traits_char__* r1689 = std__ostream__operator___std__ostream_____(r1688, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1690 = 0;
        __retval1658 = c1690;
        int t1691 = __retval1658;
        int ret_val1692 = t1691;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31661);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21660);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11659);
        }
        return ret_val1692;
  int t1693 = __retval1658;
  return t1693;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1694) {
bb1695:
  char* __r1696;
  char* __retval1697;
  __r1696 = v1694;
  char* t1698 = __r1696;
  __retval1697 = t1698;
  char* t1699 = __retval1697;
  return t1699;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1700) {
bb1701:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1702;
  char* __retval1703;
  this1702 = v1700;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1704 = this1702;
  char* cast1705 = (char*)&(t1704->field2._M_local_buf);
  char* r1706 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1705);
  __retval1703 = r1706;
  char* t1707 = __retval1703;
  return t1707;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1708) {
bb1709:
  struct std__allocator_char_* this1710;
  this1710 = v1708;
  struct std__allocator_char_* t1711 = this1710;
  struct std____new_allocator_char_* base1712 = (struct std____new_allocator_char_*)((char *)t1711 + 0);
  std____new_allocator_char_____new_allocator_2(base1712);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1713, char* v1714, struct std__allocator_char_* v1715) {
bb1716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1717;
  char* __dat1718;
  struct std__allocator_char_* __a1719;
  this1717 = v1713;
  __dat1718 = v1714;
  __a1719 = v1715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1720 = this1717;
  struct std__allocator_char_* base1721 = (struct std__allocator_char_*)((char *)t1720 + 0);
  struct std__allocator_char_* t1722 = __a1719;
  std__allocator_char___allocator(base1721, t1722);
    char* t1723 = __dat1718;
    t1720->_M_p = t1723;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1724) {
bb1725:
  struct std__allocator_char_* this1726;
  this1726 = v1724;
  struct std__allocator_char_* t1727 = this1726;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1728:
  _Bool __retval1729;
    _Bool c1730 = 0;
    __retval1729 = c1730;
    _Bool t1731 = __retval1729;
    return t1731;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1732) {
bb1733:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1734;
  this1734 = v1732;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1735 = this1734;
    _Bool r1736 = std__is_constant_evaluated();
    if (r1736) {
        unsigned long __i1737;
        unsigned long c1738 = 0;
        __i1737 = c1738;
        while (1) {
          unsigned long t1740 = __i1737;
          unsigned long c1741 = 15;
          _Bool c1742 = ((t1740 <= c1741)) ? 1 : 0;
          if (!c1742) break;
          char c1743 = 0;
          unsigned long t1744 = __i1737;
          t1735->field2._M_local_buf[t1744] = c1743;
        for_step1739: ;
          unsigned long t1745 = __i1737;
          unsigned long u1746 = t1745 + 1;
          __i1737 = u1746;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1747, unsigned long v1748) {
bb1749:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1750;
  unsigned long __length1751;
  this1750 = v1747;
  __length1751 = v1748;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1752 = this1750;
  unsigned long t1753 = __length1751;
  t1752->_M_string_length = t1753;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1754:
  _Bool __retval1755;
    _Bool c1756 = 0;
    __retval1755 = c1756;
    _Bool t1757 = __retval1755;
    return t1757;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1758, char* v1759) {
bb1760:
  char* __location1761;
  char* __args1762;
  char* __retval1763;
  void* __loc1764;
  __location1761 = v1758;
  __args1762 = v1759;
  char* t1765 = __location1761;
  void* cast1766 = (void*)t1765;
  __loc1764 = cast1766;
    void* t1767 = __loc1764;
    char* cast1768 = (char*)t1767;
    char* t1769 = __args1762;
    char t1770 = *t1769;
    *cast1768 = t1770;
    __retval1763 = cast1768;
    char* t1771 = __retval1763;
    return t1771;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1772, char* v1773) {
bb1774:
  char* __c11775;
  char* __c21776;
  __c11775 = v1772;
  __c21776 = v1773;
    _Bool r1777 = std____is_constant_evaluated();
    if (r1777) {
      char* t1778 = __c11775;
      char* t1779 = __c21776;
      char* r1780 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1778, t1779);
    } else {
      char* t1781 = __c21776;
      char t1782 = *t1781;
      char* t1783 = __c11775;
      *t1783 = t1782;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1784) {
bb1785:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1786;
  char* __retval1787;
  this1786 = v1784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1788 = this1786;
  char* t1789 = t1788->_M_dataplus._M_p;
  __retval1787 = t1789;
  char* t1790 = __retval1787;
  return t1790;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1791, unsigned long v1792) {
bb1793:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1794;
  unsigned long __n1795;
  char ref_tmp01796;
  this1794 = v1791;
  __n1795 = v1792;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1797 = this1794;
  unsigned long t1798 = __n1795;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1797, t1798);
  unsigned long t1799 = __n1795;
  char* r1800 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1797);
  char* ptr1801 = &(r1800)[t1799];
  char c1802 = 0;
  ref_tmp01796 = c1802;
  std__char_traits_char___assign_2(ptr1801, &ref_tmp01796);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1803) {
bb1804:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1805;
  this1805 = v1803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1806 = this1805;
  {
    struct std__allocator_char_* base1807 = (struct std__allocator_char_*)((char *)t1806 + 0);
    std__allocator_char____allocator(base1807);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1808) {
bb1809:
  struct std____new_allocator_char_* this1810;
  this1810 = v1808;
  struct std____new_allocator_char_* t1811 = this1810;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1812, struct std____new_allocator_char_* v1813) {
bb1814:
  struct std____new_allocator_char_* this1815;
  struct std____new_allocator_char_* unnamed1816;
  this1815 = v1812;
  unnamed1816 = v1813;
  struct std____new_allocator_char_* t1817 = this1815;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1818, char* v1819, struct std__allocator_char_* v1820) {
bb1821:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1822;
  char* __dat1823;
  struct std__allocator_char_* __a1824;
  this1822 = v1818;
  __dat1823 = v1819;
  __a1824 = v1820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1825 = this1822;
  struct std__allocator_char_* base1826 = (struct std__allocator_char_*)((char *)t1825 + 0);
  struct std__allocator_char_* t1827 = __a1824;
  std__allocator_char___allocator(base1826, t1827);
    char* t1828 = __dat1823;
    t1825->_M_p = t1828;
  return;
}

