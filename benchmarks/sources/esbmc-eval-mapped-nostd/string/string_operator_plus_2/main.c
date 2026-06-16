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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char _str[14] = "Test string: ";
char _str_1[24] = "str1 == \"Test string: \"";
char _str_2[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = "x";
char _str_4[12] = "str2 == \"x\"";
char _str_5[15] = "Test string: x";
char _str_6[25] = "str3 == \"Test string: x\"";
char _str_7[6] = ", y, ";
char _str_8[20] = "Test string: x, y, ";
char _str_9[30] = "str3 == \"Test string: x, y, \"";
char _str_10[2] = "z";
char _str_11[21] = "Test string: x, y, z";
char _str_12[31] = "str3 == \"Test string: x, y, z\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[25] = "basic_string::_M_replace";
char _str_14[24] = "basic_string::_M_create";
char _str_15[21] = "basic_string::append";
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
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
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
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
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
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
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

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v119) {
bb120: ;
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
bb131: ;
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
bb165: ;
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
bb186: ;
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
bb196: ;
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
bb207: ;
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
bb216: ;
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
bb257: ;
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
bb284: ;
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
      std__char_traits_char___assign(t291, t292);
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
bb300: ;
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
bb322: ;
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
bb336: ;
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
bb355: ;
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
void __gnu_cxx__char_traits_char___assign(char* v373, char* v374) {
bb375: ;
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
bb388: ;
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
                __gnu_cxx__char_traits_char___assign(ptr419, ptr422);
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
bb445: ;
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
bb472: ;
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
      std__char_traits_char___assign(t479, t480);
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
bb491: ;
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
bb575: ;
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
bb584: ;
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
      char* cast594 = (char*)&(_str_14);
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
bb627: ;
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
bb636: ;
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
bb646: ;
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
bb654: ;
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
bb661: ;
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
bb671: ;
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
bb729: ;
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
  char* cast741 = (char*)&(_str_13);
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
bb822: ;
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
bb835: ;
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
bb848: ;
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
bb865: ;
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
bb877: ;
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
bb891: ;
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

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v899, char* v900) {
bb901: ;
  char* __c1902;
  char* __c2903;
  _Bool __retval904;
  __c1902 = v899;
  __c2903 = v900;
  char* t905 = __c1902;
  char t906 = *t905;
  unsigned char cast907 = (unsigned char)t906;
  int cast908 = (int)cast907;
  char* t909 = __c2903;
  char t910 = *t909;
  unsigned char cast911 = (unsigned char)t910;
  int cast912 = (int)cast911;
  _Bool c913 = ((cast908 < cast912)) ? 1 : 0;
  __retval904 = c913;
  _Bool t914 = __retval904;
  return t914;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v915, char* v916, unsigned long v917) {
bb918: ;
  char* __s1919;
  char* __s2920;
  unsigned long __n921;
  int __retval922;
  __s1919 = v915;
  __s2920 = v916;
  __n921 = v917;
    unsigned long t923 = __n921;
    unsigned long c924 = 0;
    _Bool c925 = ((t923 == c924)) ? 1 : 0;
    if (c925) {
      int c926 = 0;
      __retval922 = c926;
      int t927 = __retval922;
      return t927;
    }
    _Bool r928 = std____is_constant_evaluated();
    if (r928) {
        unsigned long __i929;
        unsigned long c930 = 0;
        __i929 = c930;
        while (1) {
          unsigned long t932 = __i929;
          unsigned long t933 = __n921;
          _Bool c934 = ((t932 < t933)) ? 1 : 0;
          if (!c934) break;
            unsigned long t935 = __i929;
            char* t936 = __s1919;
            char* ptr937 = &(t936)[t935];
            unsigned long t938 = __i929;
            char* t939 = __s2920;
            char* ptr940 = &(t939)[t938];
            _Bool r941 = std__char_traits_char___lt(ptr937, ptr940);
            if (r941) {
              int c942 = -1;
              __retval922 = c942;
              int t943 = __retval922;
              int ret_val944 = t943;
              return ret_val944;
            } else {
                unsigned long t945 = __i929;
                char* t946 = __s2920;
                char* ptr947 = &(t946)[t945];
                unsigned long t948 = __i929;
                char* t949 = __s1919;
                char* ptr950 = &(t949)[t948];
                _Bool r951 = std__char_traits_char___lt(ptr947, ptr950);
                if (r951) {
                  int c952 = 1;
                  __retval922 = c952;
                  int t953 = __retval922;
                  int ret_val954 = t953;
                  return ret_val954;
                }
            }
        for_step931: ;
          unsigned long t955 = __i929;
          unsigned long u956 = t955 + 1;
          __i929 = u956;
        }
      int c957 = 0;
      __retval922 = c957;
      int t958 = __retval922;
      return t958;
    }
  char* t959 = __s1919;
  void* cast960 = (void*)t959;
  char* t961 = __s2920;
  void* cast962 = (void*)t961;
  unsigned long t963 = __n921;
  int r964 = memcmp(cast960, cast962, t963);
  __retval922 = r964;
  int t965 = __retval922;
  return t965;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v966) {
bb967: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this968;
  char* __retval969;
  this968 = v966;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t970 = this968;
  char* r971 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t970);
  __retval969 = r971;
  char* t972 = __retval969;
  return t972;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v973, char* v974) {
bb975: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs976;
  char* __rhs977;
  _Bool __retval978;
  __lhs976 = v973;
  __rhs977 = v974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t979 = __lhs976;
  unsigned long r980 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t979);
  char* t981 = __rhs977;
  unsigned long r982 = std__char_traits_char___length(t981);
  _Bool c983 = ((r980 == r982)) ? 1 : 0;
  _Bool ternary984;
  if (c983) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t985 = __lhs976;
    char* r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t985);
    char* t987 = __rhs977;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t988 = __lhs976;
    unsigned long r989 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t988);
    int r990 = std__char_traits_char___compare(r986, t987, r989);
    _Bool cast991 = (_Bool)r990;
    _Bool u992 = !cast991;
    ternary984 = (_Bool)u992;
  } else {
    _Bool c993 = 0;
    ternary984 = (_Bool)c993;
  }
  __retval978 = ternary984;
  _Bool t994 = __retval978;
  return t994;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v995, struct std__allocator_char_* v996) {
bb997: ;
  struct std__allocator_char_* this998;
  struct std__allocator_char_* __a999;
  this998 = v995;
  __a999 = v996;
  struct std__allocator_char_* t1000 = this998;
  struct std____new_allocator_char_* base1001 = (struct std____new_allocator_char_*)((char *)t1000 + 0);
  struct std__allocator_char_* t1002 = __a999;
  struct std____new_allocator_char_* base1003 = (struct std____new_allocator_char_*)((char *)t1002 + 0);
  std____new_allocator_char_____new_allocator(base1001, base1003);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1004) {
bb1005: ;
  struct std__allocator_char_* __rhs1006;
  struct std__allocator_char_ __retval1007;
  __rhs1006 = v1004;
  struct std__allocator_char_* t1008 = __rhs1006;
  std__allocator_char___allocator(&__retval1007, t1008);
  struct std__allocator_char_ t1009 = __retval1007;
  return t1009;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1010) {
bb1011: ;
  struct std__allocator_char_* __a1012;
  struct std__allocator_char_ __retval1013;
  __a1012 = v1010;
  struct std__allocator_char_* t1014 = __a1012;
  struct std__allocator_char_ r1015 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1014);
  __retval1013 = r1015;
  struct std__allocator_char_ t1016 = __retval1013;
  return t1016;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1017, struct std__allocator_char_* v1018) {
bb1019: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1020;
  struct std__allocator_char_* __a1021;
  this1020 = v1017;
  __a1021 = v1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1022 = this1020;
  char* r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1022);
  struct std__allocator_char_* t1024 = __a1021;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t1022->_M_dataplus, r1023, t1024);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1022);
    unsigned long c1025 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1022, c1025);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1026, unsigned long v1027) {
bb1028: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1029;
  unsigned long __res1030;
  unsigned long __capacity1031;
  char* __tmp1032;
  this1029 = v1026;
  __res1030 = v1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1033 = this1029;
  unsigned long r1034 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1033);
  __capacity1031 = r1034;
    unsigned long t1035 = __res1030;
    unsigned long t1036 = __capacity1031;
    _Bool c1037 = ((t1035 <= t1036)) ? 1 : 0;
    if (c1037) {
      return;
    }
  unsigned long t1038 = __capacity1031;
  char* r1039 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1033, &__res1030, t1038);
  __tmp1032 = r1039;
  char* t1040 = __tmp1032;
  char* r1041 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1033);
  unsigned long r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1033);
  unsigned long c1043 = 1;
  unsigned long b1044 = r1042 + c1043;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1040, r1041, b1044);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1033);
  char* t1045 = __tmp1032;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1033, t1045);
  unsigned long t1046 = __res1030;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1033, t1046);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1047, char* v1048, unsigned long v1049) {
bb1050: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1051;
  char* __s1052;
  unsigned long __n1053;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1054;
  unsigned long __len1055;
  this1051 = v1047;
  __s1052 = v1048;
  __n1053 = v1049;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = this1051;
  unsigned long t1057 = __n1053;
  unsigned long r1058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1056);
  unsigned long b1059 = t1057 + r1058;
  __len1055 = b1059;
    unsigned long t1060 = __len1055;
    unsigned long r1061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1056);
    _Bool c1062 = ((t1060 <= r1061)) ? 1 : 0;
    if (c1062) {
        unsigned long t1063 = __n1053;
        _Bool cast1064 = (_Bool)t1063;
        if (cast1064) {
          char* r1065 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1056);
          unsigned long r1066 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1056);
          char* ptr1067 = &(r1065)[r1066];
          char* t1068 = __s1052;
          unsigned long t1069 = __n1053;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1067, t1068, t1069);
        }
    } else {
      unsigned long r1070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1056);
      unsigned long c1071 = 0;
      char* t1072 = __s1052;
      unsigned long t1073 = __n1053;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1056, r1070, c1071, t1072, t1073);
    }
  unsigned long t1074 = __len1055;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1056, t1074);
  __retval1054 = t1056;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1075 = __retval1054;
  return t1075;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1076, char* v1077, unsigned long v1078) {
bb1079: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1080;
  char* __s1081;
  unsigned long __n1082;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1083;
  this1080 = v1076;
  __s1081 = v1077;
  __n1082 = v1078;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1084 = this1080;
  unsigned long c1085 = 0;
  unsigned long t1086 = __n1082;
  char* cast1087 = (char*)&(_str_15);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1084, c1085, t1086, cast1087);
  char* t1088 = __s1081;
  unsigned long t1089 = __n1082;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1090 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1084, t1088, t1089);
  __retval1083 = r1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1091 = __retval1083;
  return t1091;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v1092, unsigned long v1093, char* v1094, unsigned long v1095, struct std__allocator_char_* v1096) {
bb1097: ;
  char* __lhs1098;
  unsigned long __lhs_len1099;
  char* __rhs1100;
  unsigned long __rhs_len1101;
  struct std__allocator_char_* __a1102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1103;
  _Bool nrvo1104;
  struct std__allocator_char_ ref_tmp01105;
  __lhs1098 = v1092;
  __lhs_len1099 = v1093;
  __rhs1100 = v1094;
  __rhs_len1101 = v1095;
  __a1102 = v1096;
  _Bool c1106 = 0;
  nrvo1104 = c1106;
  struct std__allocator_char_* t1107 = __a1102;
  struct std__allocator_char_ r1108 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t1107);
  ref_tmp01105 = r1108;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1103, &ref_tmp01105);
  {
    std__allocator_char____allocator(&ref_tmp01105);
  }
    unsigned long t1109 = __lhs_len1099;
    unsigned long t1110 = __rhs_len1101;
    unsigned long b1111 = t1109 + t1110;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval1103, b1111);
    char* t1112 = __lhs1098;
    unsigned long t1113 = __lhs_len1099;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1103, t1112, t1113);
    char* t1115 = __rhs1100;
    unsigned long t1116 = __rhs_len1101;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1103, t1115, t1116);
    _Bool c1118 = 1;
    nrvo1104 = c1118;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1119 = __retval1103;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1120 = t1119;
    {
      _Bool t1121 = nrvo1104;
      _Bool u1122 = !t1121;
      if (u1122) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1103);
      }
    }
    return ret_val1120;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1123) {
bb1124: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1125;
  char* __retval1126;
  this1125 = v1123;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1127 = this1125;
  char* r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1127);
  __retval1126 = r1128;
  char* t1129 = __retval1126;
  return t1129;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1130) {
bb1131: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1132;
  struct std__allocator_char_ __retval1133;
  this1132 = v1130;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1134 = this1132;
  struct std__allocator_char_* r1135 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1134);
  std__allocator_char___allocator(&__retval1133, r1135);
  struct std__allocator_char_ t1136 = __retval1133;
  return t1136;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1137, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1138) {
bb1139: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1140;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1142;
  struct std__allocator_char_ ref_tmp01143;
  __lhs1140 = v1137;
  __rhs1141 = v1138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1144 = __lhs1140;
  char* r1145 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1144);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1146 = __lhs1140;
  unsigned long r1147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1146);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1148 = __rhs1141;
  char* r1149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1148);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1150 = __rhs1141;
  unsigned long r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1150);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1152 = __lhs1140;
  struct std__allocator_char_ r1153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1152);
  ref_tmp01143 = r1153;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1145, r1147, r1149, r1151, &ref_tmp01143);
    __retval1142 = r1154;
  {
    std__allocator_char____allocator(&ref_tmp01143);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1155 = __retval1142;
  return t1155;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb1156: ;
  _Bool __retval1157;
  _Bool t1158 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1157 = t1158;
  _Bool t1159 = __retval1157;
  return t1159;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v1160, struct std____new_allocator_char_* v1161) {
bb1162: ;
  struct std____new_allocator_char_* this1163;
  struct std____new_allocator_char_* unnamed1164;
  struct std____new_allocator_char_* __retval1165;
  this1163 = v1160;
  unnamed1164 = v1161;
  struct std____new_allocator_char_* t1166 = this1163;
  __retval1165 = t1166;
  struct std____new_allocator_char_* t1167 = __retval1165;
  return t1167;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v1168, struct std__allocator_char_* v1169) {
bb1170: ;
  struct std__allocator_char_* this1171;
  struct std__allocator_char_* unnamed1172;
  struct std__allocator_char_* __retval1173;
  this1171 = v1168;
  unnamed1172 = v1169;
  struct std__allocator_char_* t1174 = this1171;
  struct std____new_allocator_char_* base1175 = (struct std____new_allocator_char_*)((char *)t1174 + 0);
  struct std__allocator_char_* t1176 = unnamed1172;
  struct std____new_allocator_char_* base1177 = (struct std____new_allocator_char_*)((char *)t1176 + 0);
  struct std____new_allocator_char_* r1178 = std____new_allocator_char___operator_(base1175, base1177);
  __retval1173 = t1174;
  struct std__allocator_char_* t1179 = __retval1173;
  return t1179;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v1180, struct std__allocator_char_* v1181) {
bb1182: ;
  struct std__allocator_char_* __one1183;
  struct std__allocator_char_* __two1184;
  __one1183 = v1180;
  __two1184 = v1181;
    struct std__allocator_char_* t1185 = __two1184;
    struct std__allocator_char_* t1186 = __one1183;
    struct std__allocator_char_* r1187 = std__allocator_char___operator_(t1186, t1185);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1188) {
bb1189: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1190;
  char* __retval1191;
  this1190 = v1188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1192 = this1190;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1192);
  char* r1193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1192);
  __retval1191 = r1193;
  char* t1194 = __retval1191;
  return t1194;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1195, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1196) {
bb1197: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1199;
  this1198 = v1195;
  __str1199 = v1196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1200 = this1198;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1201 = __str1199;
    _Bool c1202 = ((t1200 != t1201)) ? 1 : 0;
    if (c1202) {
      unsigned long __rsize1203;
      unsigned long __capacity1204;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1205 = __str1199;
      unsigned long r1206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1205);
      __rsize1203 = r1206;
      unsigned long r1207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1200);
      __capacity1204 = r1207;
        unsigned long t1208 = __rsize1203;
        unsigned long t1209 = __capacity1204;
        _Bool c1210 = ((t1208 > t1209)) ? 1 : 0;
        if (c1210) {
          unsigned long __new_capacity1211;
          char* __tmp1212;
          unsigned long t1213 = __rsize1203;
          __new_capacity1211 = t1213;
          unsigned long t1214 = __capacity1204;
          char* r1215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1200, &__new_capacity1211, t1214);
          __tmp1212 = r1215;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1200);
          char* t1216 = __tmp1212;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1200, t1216);
          unsigned long t1217 = __new_capacity1211;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1200, t1217);
        }
        unsigned long t1218 = __rsize1203;
        _Bool cast1219 = (_Bool)t1218;
        if (cast1219) {
          char* r1220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1200);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1221 = __str1199;
          char* r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1221);
          unsigned long t1223 = __rsize1203;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1220, r1222, t1223);
        }
      unsigned long t1224 = __rsize1203;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1200, t1224);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1225) {
bb1226: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1227;
  this1227 = v1225;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1228 = this1227;
  unsigned long c1229 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1228, c1229);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1230, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1231) {
bb1232: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1233;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1235;
  _Bool __equal_allocs1236;
  this1233 = v1230;
  __str1234 = v1231;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1237 = this1233;
  _Bool c1238 = 1;
  __equal_allocs1236 = c1238;
    _Bool r1239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1237);
    _Bool u1240 = !r1239;
    _Bool ternary1241;
    if (u1240) {
      _Bool r1242 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary1241 = (_Bool)r1242;
    } else {
      _Bool c1243 = 0;
      ternary1241 = (_Bool)c1243;
    }
    _Bool ternary1244;
    if (ternary1241) {
      _Bool t1245 = __equal_allocs1236;
      _Bool u1246 = !t1245;
      ternary1244 = (_Bool)u1246;
    } else {
      _Bool c1247 = 0;
      ternary1244 = (_Bool)c1247;
    }
    if (ternary1244) {
      unsigned long t1248 = t1237->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1237, t1248);
      char* r1249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1237);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1237, r1249);
      unsigned long c1250 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1237, c1250);
    }
  struct std__allocator_char_* r1251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1237);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1252 = __str1234;
  struct std__allocator_char_* r1253 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1252);
  void_std____alloc_on_move_std__allocator_char___(r1251, r1253);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1254 = __str1234;
    _Bool r1255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1254);
    if (r1255) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1256 = __str1234;
        _Bool c1257 = ((t1256 != t1237)) ? 1 : 0;
        if (c1257) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1258 = __str1234;
            unsigned long r1259 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1258);
            _Bool cast1260 = (_Bool)r1259;
            if (cast1260) {
              char* r1261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1237);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1262 = __str1234;
              char* r1263 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1262);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1264 = __str1234;
              unsigned long r1265 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1264);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1261, r1263, r1265);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1266 = __str1234;
          unsigned long r1267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1266);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1237, r1267);
        }
    } else {
        _Bool r1268 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary1269;
        if (r1268) {
          _Bool c1270 = 1;
          ternary1269 = (_Bool)c1270;
        } else {
          _Bool t1271 = __equal_allocs1236;
          ternary1269 = (_Bool)t1271;
        }
        if (ternary1269) {
          char* __data1272;
          unsigned long __capacity1273;
          char* c1274 = ((void*)0);
          __data1272 = c1274;
            _Bool r1275 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1237);
            _Bool u1276 = !r1275;
            if (u1276) {
                _Bool t1277 = __equal_allocs1236;
                if (t1277) {
                  char* r1278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1237);
                  __data1272 = r1278;
                  unsigned long t1279 = t1237->field2._M_allocated_capacity;
                  __capacity1273 = t1279;
                } else {
                  unsigned long t1280 = t1237->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1237, t1280);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1281 = __str1234;
          char* r1282 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1281);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1237, r1282);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1283 = __str1234;
          unsigned long r1284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1283);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1237, r1284);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1285 = __str1234;
          unsigned long t1286 = t1285->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1237, t1286);
            char* t1287 = __data1272;
            _Bool cast1288 = (_Bool)t1287;
            if (cast1288) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1289 = __str1234;
              char* t1290 = __data1272;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1289, t1290);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1291 = __str1234;
              unsigned long t1292 = __capacity1273;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1291, t1292);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = __str1234;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1294 = __str1234;
              char* r1295 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1294);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1293, r1295);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1296 = __str1234;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1237, t1296);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1297 = __str1234;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t1297);
  __retval1235 = t1237;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1298 = __retval1235;
  return t1298;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1299) {
bb1300: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1301;
  this1301 = v1299;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1302 = this1301;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1302);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1302->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1303, char* v1304) {
bb1305: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1306;
  char* __s1307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1308;
  unsigned long __n1309;
  this1306 = v1303;
  __s1307 = v1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1310 = this1306;
  char* t1311 = __s1307;
  unsigned long r1312 = std__char_traits_char___length(t1311);
  __n1309 = r1312;
  unsigned long c1313 = 0;
  unsigned long t1314 = __n1309;
  char* cast1315 = (char*)&(_str_15);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1310, c1313, t1314, cast1315);
  char* t1316 = __s1307;
  unsigned long t1317 = __n1309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1310, t1316, t1317);
  __retval1308 = r1318;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1319 = __retval1308;
  return t1319;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1320, char* v1321) {
bb1322: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1323;
  char* __s1324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1325;
  this1323 = v1320;
  __s1324 = v1321;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1326 = this1323;
  char* t1327 = __s1324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t1326, t1327);
  __retval1325 = r1328;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1329 = __retval1325;
  return t1329;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1330, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1331) {
bb1332: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1333;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1334;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1335;
  __os1333 = v1330;
  __str1334 = v1331;
  struct std__basic_ostream_char__std__char_traits_char__* t1336 = __os1333;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1337 = __str1334;
  char* r1338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1337);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1339 = __str1334;
  unsigned long r1340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1339);
  long cast1341 = (long)r1340;
  struct std__basic_ostream_char__std__char_traits_char__* r1342 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1336, r1338, cast1341);
  __retval1335 = r1342;
  struct std__basic_ostream_char__std__char_traits_char__* t1343 = __retval1335;
  return t1343;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1344, void* v1345) {
bb1346: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1347;
  void* __pf1348;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1349;
  this1347 = v1344;
  __pf1348 = v1345;
  struct std__basic_ostream_char__std__char_traits_char__* t1350 = this1347;
  void* t1351 = __pf1348;
  struct std__basic_ostream_char__std__char_traits_char__* r1352 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1351)(t1350);
  __retval1349 = r1352;
  struct std__basic_ostream_char__std__char_traits_char__* t1353 = __retval1349;
  return t1353;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1354) {
bb1355: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1356;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1357;
  __os1356 = v1354;
  struct std__basic_ostream_char__std__char_traits_char__* t1358 = __os1356;
  struct std__basic_ostream_char__std__char_traits_char__* r1359 = std__ostream__flush(t1358);
  __retval1357 = r1359;
  struct std__basic_ostream_char__std__char_traits_char__* t1360 = __retval1357;
  return t1360;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1361) {
bb1362: ;
  struct std__ctype_char_* __f1363;
  struct std__ctype_char_* __retval1364;
  __f1363 = v1361;
    struct std__ctype_char_* t1365 = __f1363;
    _Bool cast1366 = (_Bool)t1365;
    _Bool u1367 = !cast1366;
    if (u1367) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1368 = __f1363;
  __retval1364 = t1368;
  struct std__ctype_char_* t1369 = __retval1364;
  return t1369;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1370, char v1371) {
bb1372: ;
  struct std__ctype_char_* this1373;
  char __c1374;
  char __retval1375;
  this1373 = v1370;
  __c1374 = v1371;
  struct std__ctype_char_* t1376 = this1373;
    char t1377 = t1376->_M_widen_ok;
    _Bool cast1378 = (_Bool)t1377;
    if (cast1378) {
      char t1379 = __c1374;
      unsigned char cast1380 = (unsigned char)t1379;
      unsigned long cast1381 = (unsigned long)cast1380;
      char t1382 = t1376->_M_widen[cast1381];
      __retval1375 = t1382;
      char t1383 = __retval1375;
      return t1383;
    }
  std__ctype_char____M_widen_init___const(t1376);
  char t1384 = __c1374;
  void** v1385 = (void**)t1376;
  void* v1386 = *((void**)v1385);
  char vcall1389 = (char)__VERIFIER_virtual_call_char_char(t1376, 6, t1384);
  __retval1375 = vcall1389;
  char t1390 = __retval1375;
  return t1390;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1391, char v1392) {
bb1393: ;
  struct std__basic_ios_char__std__char_traits_char__* this1394;
  char __c1395;
  char __retval1396;
  this1394 = v1391;
  __c1395 = v1392;
  struct std__basic_ios_char__std__char_traits_char__* t1397 = this1394;
  struct std__ctype_char_* t1398 = t1397->_M_ctype;
  struct std__ctype_char_* r1399 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1398);
  char t1400 = __c1395;
  char r1401 = std__ctype_char___widen_char__const(r1399, t1400);
  __retval1396 = r1401;
  char t1402 = __retval1396;
  return t1402;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1403) {
bb1404: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1405;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1406;
  __os1405 = v1403;
  struct std__basic_ostream_char__std__char_traits_char__* t1407 = __os1405;
  struct std__basic_ostream_char__std__char_traits_char__* t1408 = __os1405;
  void** v1409 = (void**)t1408;
  void* v1410 = *((void**)v1409);
  unsigned char* cast1411 = (unsigned char*)v1410;
  long c1412 = -24;
  unsigned char* ptr1413 = &(cast1411)[c1412];
  long* cast1414 = (long*)ptr1413;
  long t1415 = *cast1414;
  unsigned char* cast1416 = (unsigned char*)t1408;
  unsigned char* ptr1417 = &(cast1416)[t1415];
  struct std__basic_ostream_char__std__char_traits_char__* cast1418 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1417;
  struct std__basic_ios_char__std__char_traits_char__* cast1419 = (struct std__basic_ios_char__std__char_traits_char__*)cast1418;
  char c1420 = 10;
  char r1421 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1419, c1420);
  struct std__basic_ostream_char__std__char_traits_char__* r1422 = std__ostream__put(t1407, r1421);
  struct std__basic_ostream_char__std__char_traits_char__* r1423 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1422);
  __retval1406 = r1423;
  struct std__basic_ostream_char__std__char_traits_char__* t1424 = __retval1406;
  return t1424;
}

// function: main
int main() {
bb1425: ;
  int __retval1426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21428;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31429;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1431;
  int c1432 = 0;
  __retval1426 = c1432;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11427);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str21428);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str31429);
        char* cast1433 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1434 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str11427, cast1433);
        char* cast1435 = (char*)&(_str);
        _Bool r1436 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str11427, cast1435);
        if (r1436) {
        } else {
          char* cast1437 = (char*)&(_str_1);
          char* c1438 = (char*)_str_2;
          unsigned int c1439 = 19;
          char* cast1440 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1437, c1438, c1439, cast1440);
        }
        char* cast1441 = (char*)&(_str_3);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str21428, cast1441);
        char* cast1443 = (char*)&(_str_3);
        _Bool r1444 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str21428, cast1443);
        if (r1444) {
        } else {
          char* cast1445 = (char*)&(_str_4);
          char* c1446 = (char*)_str_2;
          unsigned int c1447 = 21;
          char* cast1448 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1445, c1446, c1447, cast1448);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&str11427, &str21428);
        ref_tmp01430 = r1449;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str31429, &ref_tmp01430);
          tmp_exprcleanup1431 = r1450;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01430);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1451 = tmp_exprcleanup1431;
        char* cast1452 = (char*)&(_str_5);
        _Bool r1453 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str31429, cast1452);
        if (r1453) {
        } else {
          char* cast1454 = (char*)&(_str_6);
          char* c1455 = (char*)_str_2;
          unsigned int c1456 = 23;
          char* cast1457 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1454, c1455, c1456, cast1457);
        }
        char* cast1458 = (char*)&(_str_7);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str31429, cast1458);
        char* cast1460 = (char*)&(_str_8);
        _Bool r1461 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str31429, cast1460);
        if (r1461) {
        } else {
          char* cast1462 = (char*)&(_str_9);
          char* c1463 = (char*)_str_2;
          unsigned int c1464 = 26;
          char* cast1465 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1462, c1463, c1464, cast1465);
        }
        char* cast1466 = (char*)&(_str_10);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1467 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str31429, cast1466);
        char* cast1468 = (char*)&(_str_11);
        _Bool r1469 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str31429, cast1468);
        if (r1469) {
        } else {
          char* cast1470 = (char*)&(_str_12);
          char* c1471 = (char*)_str_2;
          unsigned int c1472 = 29;
          char* cast1473 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1470, c1471, c1472, cast1473);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1474 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str31429);
        struct std__basic_ostream_char__std__char_traits_char__* r1475 = std__ostream__operator___std__ostream_____(r1474, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1476 = 0;
        __retval1426 = c1476;
        int t1477 = __retval1426;
        int ret_val1478 = t1477;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31429);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21428);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11427);
        }
        return ret_val1478;
  int t1479 = __retval1426;
  return t1479;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1480) {
bb1481: ;
  char* __r1482;
  char* __retval1483;
  __r1482 = v1480;
  char* t1484 = __r1482;
  __retval1483 = t1484;
  char* t1485 = __retval1483;
  return t1485;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1486) {
bb1487: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1488;
  char* __retval1489;
  this1488 = v1486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1490 = this1488;
  char* cast1491 = (char*)&(t1490->field2._M_local_buf);
  char* r1492 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1491);
  __retval1489 = r1492;
  char* t1493 = __retval1489;
  return t1493;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1494) {
bb1495: ;
  struct std__allocator_char_* this1496;
  this1496 = v1494;
  struct std__allocator_char_* t1497 = this1496;
  struct std____new_allocator_char_* base1498 = (struct std____new_allocator_char_*)((char *)t1497 + 0);
  std____new_allocator_char_____new_allocator_2(base1498);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1499, char* v1500, struct std__allocator_char_* v1501) {
bb1502: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1503;
  char* __dat1504;
  struct std__allocator_char_* __a1505;
  this1503 = v1499;
  __dat1504 = v1500;
  __a1505 = v1501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1506 = this1503;
  struct std__allocator_char_* base1507 = (struct std__allocator_char_*)((char *)t1506 + 0);
  struct std__allocator_char_* t1508 = __a1505;
  std__allocator_char___allocator(base1507, t1508);
    char* t1509 = __dat1504;
    t1506->_M_p = t1509;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1510) {
bb1511: ;
  struct std__allocator_char_* this1512;
  this1512 = v1510;
  struct std__allocator_char_* t1513 = this1512;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1514: ;
  _Bool __retval1515;
    _Bool c1516 = 0;
    __retval1515 = c1516;
    _Bool t1517 = __retval1515;
    return t1517;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1518) {
bb1519: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1520;
  this1520 = v1518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1521 = this1520;
    _Bool r1522 = std__is_constant_evaluated();
    if (r1522) {
        unsigned long __i1523;
        unsigned long c1524 = 0;
        __i1523 = c1524;
        while (1) {
          unsigned long t1526 = __i1523;
          unsigned long c1527 = 15;
          _Bool c1528 = ((t1526 <= c1527)) ? 1 : 0;
          if (!c1528) break;
          char c1529 = 0;
          unsigned long t1530 = __i1523;
          t1521->field2._M_local_buf[t1530] = c1529;
        for_step1525: ;
          unsigned long t1531 = __i1523;
          unsigned long u1532 = t1531 + 1;
          __i1523 = u1532;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1533, unsigned long v1534) {
bb1535: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1536;
  unsigned long __length1537;
  this1536 = v1533;
  __length1537 = v1534;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1538 = this1536;
  unsigned long t1539 = __length1537;
  t1538->_M_string_length = t1539;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1540: ;
  _Bool __retval1541;
    _Bool c1542 = 0;
    __retval1541 = c1542;
    _Bool t1543 = __retval1541;
    return t1543;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1544, char* v1545) {
bb1546: ;
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
void std__char_traits_char___assign(char* v1558, char* v1559) {
bb1560: ;
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1570) {
bb1571: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1572;
  char* __retval1573;
  this1572 = v1570;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1574 = this1572;
  char* t1575 = t1574->_M_dataplus._M_p;
  __retval1573 = t1575;
  char* t1576 = __retval1573;
  return t1576;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1577, unsigned long v1578) {
bb1579: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1580;
  unsigned long __n1581;
  char ref_tmp01582;
  this1580 = v1577;
  __n1581 = v1578;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1583 = this1580;
  unsigned long t1584 = __n1581;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1583, t1584);
  unsigned long t1585 = __n1581;
  char* r1586 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1583);
  char* ptr1587 = &(r1586)[t1585];
  char c1588 = 0;
  ref_tmp01582 = c1588;
  std__char_traits_char___assign(ptr1587, &ref_tmp01582);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1589) {
bb1590: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1591;
  this1591 = v1589;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1592 = this1591;
  {
    struct std__allocator_char_* base1593 = (struct std__allocator_char_*)((char *)t1592 + 0);
    std__allocator_char____allocator(base1593);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1594) {
bb1595: ;
  struct std____new_allocator_char_* this1596;
  this1596 = v1594;
  struct std____new_allocator_char_* t1597 = this1596;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1598, struct std____new_allocator_char_* v1599) {
bb1600: ;
  struct std____new_allocator_char_* this1601;
  struct std____new_allocator_char_* unnamed1602;
  this1601 = v1598;
  unnamed1602 = v1599;
  struct std____new_allocator_char_* t1603 = this1601;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1604, char* v1605, struct std__allocator_char_* v1606) {
bb1607: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1608;
  char* __dat1609;
  struct std__allocator_char_* __a1610;
  this1608 = v1604;
  __dat1609 = v1605;
  __a1610 = v1606;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1611 = this1608;
  struct std__allocator_char_* base1612 = (struct std__allocator_char_*)((char *)t1611 + 0);
  struct std__allocator_char_* t1613 = __a1610;
  std__allocator_char___allocator(base1612, t1613);
    char* t1614 = __dat1609;
    t1611->_M_p = t1614;
  return;
}

