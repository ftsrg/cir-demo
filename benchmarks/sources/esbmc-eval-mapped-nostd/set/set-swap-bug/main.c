extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__binary_function_int__int__bool_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[6] = {12, 75, 10, 32, 20, 25};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 3";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-swap-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 12";
char _str_4[10] = "*it == 75";
char _str_5[19] = "second.size() == 3";
char _str_6[10] = "*it == 20";
char _str_7[10] = "*it == 25";
char _str_8[10] = "*it == 32";
char _str_9[10] = "*it != 25";
char _str_10[19] = "second.size() != 3";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[16] = "first contains:";
char _str_12[2] = " ";
char _str_13[18] = "\nsecond contains:";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_header___M_move_data(struct std___Rb_tree_header* p0, struct std___Rb_tree_header* p1);
void std__enable_if___and__std____not__std____is_tuple_like_std___Rb_tree_node_base______std__is_move_constructible_std___Rb_tree_node_base____std__is_move_assignable_std___Rb_tree_node_base______value__void___type_std__swap_std___Rb_tree_node_base__(struct std___Rb_tree_node_base** p0, struct std___Rb_tree_node_base** p1);
void std__enable_if___and__std____not__std____is_tuple_like_unsigned_long_____std__is_move_constructible_unsigned_long___std__is_move_assignable_unsigned_long_____value__void___type_std__swap_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__binary_function_int__int__bool_* std__binary_function_int__int__bool___operator_(struct std__binary_function_int__int__bool_* p0, struct std__binary_function_int__int__bool_* p1);
struct std__less_int_* std__less_int___operator_(struct std__less_int_* p0, struct std__less_int_* p1);
void std__enable_if___and__std____not__std____is_tuple_like_std__less_int_______std__is_move_constructible_std__less_int_____std__is_move_assignable_std__less_int_______value__void___type_std__swap_std__less_int___(struct std__less_int_* p0, struct std__less_int_* p1);
void void_std____alloc_on_swap_std__allocator_std___Rb_tree_node_int_____(struct std__allocator_std___Rb_tree_node_int__* p0, struct std__allocator_std___Rb_tree_node_int__* p1);
void __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_on_swap(struct std__allocator_std___Rb_tree_node_int__* p0, struct std__allocator_std___Rb_tree_node_int__* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____swap(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
void std__set_int__std__less_int___std__allocator_int_____swap(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std__set_int__std__less_int___std__allocator_int__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* p0);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, unsigned long p1, void* p2);
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern int __gxx_personality_v0();
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v0, int* v1, int* v2) {
bb3:
  struct std__set_int__std__less_int___std__allocator_int__* this4;
  int* __first5;
  int* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std__set_int__std__less_int___std__allocator_int__* t7 = this4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c8 = {0};
  t7->_M_t = c8;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t7->_M_t);
    int* t9 = __first5;
    int* t10 = __last6;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t7->_M_t, t9, t10);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t7->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v11) {
bb12:
  struct std___Rb_tree_const_iterator_int_* this13;
  this13 = v11;
  struct std___Rb_tree_const_iterator_int_* t14 = this13;
  struct std___Rb_tree_node_base* c15 = ((void*)0);
  t14->_M_node = c15;
  return;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v16) {
bb17:
  struct std__set_int__std__less_int___std__allocator_int__* this18;
  unsigned long __retval19;
  this18 = v16;
  struct std__set_int__std__less_int___std__allocator_int__* t20 = this18;
  unsigned long r21 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t20->_M_t);
  __retval19 = r21;
  unsigned long t22 = __retval19;
  return t22;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v23, struct std___Rb_tree_node_base* v24) {
bb25:
  struct std___Rb_tree_const_iterator_int_* this26;
  struct std___Rb_tree_node_base* __x27;
  this26 = v23;
  __x27 = v24;
  struct std___Rb_tree_const_iterator_int_* t28 = this26;
  struct std___Rb_tree_node_base* t29 = __x27;
  t28->_M_node = t29;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v30) {
bb31:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this32;
  struct std___Rb_tree_const_iterator_int_ __retval33;
  this32 = v30;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t34 = this32;
  struct std___Rb_tree_header* base35 = (struct std___Rb_tree_header*)((char *)&(t34->_M_impl) + 8);
  struct std___Rb_tree_node_base* t36 = base35->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval33, t36);
  struct std___Rb_tree_const_iterator_int_ t37 = __retval33;
  return t37;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v38) {
bb39:
  struct std__set_int__std__less_int___std__allocator_int__* this40;
  struct std___Rb_tree_const_iterator_int_ __retval41;
  this40 = v38;
  struct std__set_int__std__less_int___std__allocator_int__* t42 = this40;
  struct std___Rb_tree_const_iterator_int_ r43 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t42->_M_t);
  __retval41 = r43;
  struct std___Rb_tree_const_iterator_int_ t44 = __retval41;
  return t44;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v45, struct std___Rb_tree_const_iterator_int_* v46) {
bb47:
  struct std___Rb_tree_const_iterator_int_* this48;
  struct std___Rb_tree_const_iterator_int_* unnamed49;
  struct std___Rb_tree_const_iterator_int_* __retval50;
  this48 = v45;
  unnamed49 = v46;
  struct std___Rb_tree_const_iterator_int_* t51 = this48;
  struct std___Rb_tree_const_iterator_int_* t52 = unnamed49;
  struct std___Rb_tree_node_base* t53 = t52->_M_node;
  t51->_M_node = t53;
  __retval50 = t51;
  struct std___Rb_tree_const_iterator_int_* t54 = __retval50;
  return t54;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v55) {
bb56:
  struct std___Rb_tree_const_iterator_int_* this57;
  int* __retval58;
  this57 = v55;
  struct std___Rb_tree_const_iterator_int_* t59 = this57;
  struct std___Rb_tree_node_base* t60 = t59->_M_node;
  struct std___Rb_tree_node_int_* derived61 = ((t60) ? (struct std___Rb_tree_node_int_*)((char *)t60 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r62 = std___Rb_tree_node_int____M_valptr___const(derived61);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval58 = r62;
  int* t63 = __retval58;
  return t63;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v64, int v65) {
bb66:
  struct std___Rb_tree_const_iterator_int_* this67;
  int unnamed68;
  struct std___Rb_tree_const_iterator_int_ __retval69;
  this67 = v64;
  unnamed68 = v65;
  struct std___Rb_tree_const_iterator_int_* t70 = this67;
  __retval69 = *t70; // copy
  struct std___Rb_tree_node_base* t71 = t70->_M_node;
  struct std___Rb_tree_node_base* r72 = std___Rb_tree_increment(t71);
  t70->_M_node = r72;
  struct std___Rb_tree_const_iterator_int_ t73 = __retval69;
  return t73;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_rootEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v74) {
bb75:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this76;
  struct std___Rb_tree_node_base** __retval77;
  this76 = v74;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t78 = this76;
  struct std___Rb_tree_header* base79 = (struct std___Rb_tree_header*)((char *)&(t78->_M_impl) + 8);
  __retval77 = &base79->_M_header._M_parent;
  struct std___Rb_tree_node_base** t80 = __retval77;
  return t80;
}

// function: _ZNSt15_Rb_tree_header12_M_move_dataERS_
void std___Rb_tree_header___M_move_data(struct std___Rb_tree_header* v81, struct std___Rb_tree_header* v82) {
bb83:
  struct std___Rb_tree_header* this84;
  struct std___Rb_tree_header* __from85;
  this84 = v81;
  __from85 = v82;
  struct std___Rb_tree_header* t86 = this84;
  struct std___Rb_tree_header* t87 = __from85;
  unsigned int t88 = t87->_M_header._M_color;
  t86->_M_header._M_color = t88;
  struct std___Rb_tree_header* t89 = __from85;
  struct std___Rb_tree_node_base* t90 = t89->_M_header._M_parent;
  t86->_M_header._M_parent = t90;
  struct std___Rb_tree_header* t91 = __from85;
  struct std___Rb_tree_node_base* t92 = t91->_M_header._M_left;
  t86->_M_header._M_left = t92;
  struct std___Rb_tree_header* t93 = __from85;
  struct std___Rb_tree_node_base* t94 = t93->_M_header._M_right;
  t86->_M_header._M_right = t94;
  struct std___Rb_tree_node_base* t95 = t86->_M_header._M_parent;
  t95->_M_parent = &t86->_M_header;
  struct std___Rb_tree_header* t96 = __from85;
  unsigned long t97 = t96->_M_node_count;
  t86->_M_node_count = t97;
  struct std___Rb_tree_header* t98 = __from85;
  std___Rb_tree_header___M_reset(t98);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4swapIPSt18_Rb_tree_node_baseENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS5_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SE_
void std__enable_if___and__std____not__std____is_tuple_like_std___Rb_tree_node_base______std__is_move_constructible_std___Rb_tree_node_base____std__is_move_assignable_std___Rb_tree_node_base______value__void___type_std__swap_std___Rb_tree_node_base__(struct std___Rb_tree_node_base** v99, struct std___Rb_tree_node_base** v100) {
bb101:
  struct std___Rb_tree_node_base** __a102;
  struct std___Rb_tree_node_base** __b103;
  struct std___Rb_tree_node_base* __tmp104;
  __a102 = v99;
  __b103 = v100;
  struct std___Rb_tree_node_base** t105 = __a102;
  struct std___Rb_tree_node_base* t106 = *t105;
  __tmp104 = t106;
  struct std___Rb_tree_node_base** t107 = __b103;
  struct std___Rb_tree_node_base* t108 = *t107;
  struct std___Rb_tree_node_base** t109 = __a102;
  *t109 = t108;
  struct std___Rb_tree_node_base* t110 = __tmp104;
  struct std___Rb_tree_node_base** t111 = __b103;
  *t111 = t110;
  return;
}

// function: _ZSt4swapImENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_unsigned_long_____std__is_move_constructible_unsigned_long___std__is_move_assignable_unsigned_long_____value__void___type_std__swap_unsigned_long_(unsigned long* v112, unsigned long* v113) {
bb114:
  unsigned long* __a115;
  unsigned long* __b116;
  unsigned long __tmp117;
  __a115 = v112;
  __b116 = v113;
  unsigned long* t118 = __a115;
  unsigned long t119 = *t118;
  __tmp117 = t119;
  unsigned long* t120 = __b116;
  unsigned long t121 = *t120;
  unsigned long* t122 = __a115;
  *t122 = t121;
  unsigned long t123 = __tmp117;
  unsigned long* t124 = __b116;
  *t124 = t123;
  return;
}

// function: _ZNSt15binary_functionIiibEaSEOS0_
struct std__binary_function_int__int__bool_* std__binary_function_int__int__bool___operator_(struct std__binary_function_int__int__bool_* v125, struct std__binary_function_int__int__bool_* v126) {
bb127:
  struct std__binary_function_int__int__bool_* this128;
  struct std__binary_function_int__int__bool_* unnamed129;
  struct std__binary_function_int__int__bool_* __retval130;
  this128 = v125;
  unnamed129 = v126;
  struct std__binary_function_int__int__bool_* t131 = this128;
  __retval130 = t131;
  struct std__binary_function_int__int__bool_* t132 = __retval130;
  return t132;
}

// function: _ZNSt4lessIiEaSEOS0_
struct std__less_int_* std__less_int___operator_(struct std__less_int_* v133, struct std__less_int_* v134) {
bb135:
  struct std__less_int_* this136;
  struct std__less_int_* unnamed137;
  struct std__less_int_* __retval138;
  this136 = v133;
  unnamed137 = v134;
  struct std__less_int_* t139 = this136;
  struct std__binary_function_int__int__bool_* base140 = (struct std__binary_function_int__int__bool_*)((char *)t139 + 0);
  struct std__less_int_* t141 = unnamed137;
  struct std__binary_function_int__int__bool_* base142 = (struct std__binary_function_int__int__bool_*)((char *)t141 + 0);
  struct std__binary_function_int__int__bool_* r143 = std__binary_function_int__int__bool___operator_(base140, base142);
  __retval138 = t139;
  struct std__less_int_* t144 = __retval138;
  return t144;
}

// function: _ZSt4swapISt4lessIiEENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS5_ESt18is_move_assignableIS5_EEE5valueEvE4typeERS5_SE_
void std__enable_if___and__std____not__std____is_tuple_like_std__less_int_______std__is_move_constructible_std__less_int_____std__is_move_assignable_std__less_int_______value__void___type_std__swap_std__less_int___(struct std__less_int_* v145, struct std__less_int_* v146) {
bb147:
  struct std__less_int_* __a148;
  struct std__less_int_* __b149;
  struct std__less_int_ __tmp150;
  __a148 = v145;
  __b149 = v146;
  struct std__less_int_* t151 = __a148;
  struct std__less_int_* t152 = __b149;
  struct std__less_int_* t153 = __a148;
  struct std__less_int_* r154 = std__less_int___operator_(t153, t152);
  struct std__less_int_* t155 = __b149;
  struct std__less_int_* r156 = std__less_int___operator_(t155, &__tmp150);
  return;
}

// function: _ZSt15__alloc_on_swapISaISt13_Rb_tree_nodeIiEEEvRT_S4_
void void_std____alloc_on_swap_std__allocator_std___Rb_tree_node_int_____(struct std__allocator_std___Rb_tree_node_int__* v157, struct std__allocator_std___Rb_tree_node_int__* v158) {
bb159:
  struct std__allocator_std___Rb_tree_node_int__* __one160;
  struct std__allocator_std___Rb_tree_node_int__* __two161;
  __one160 = v157;
  __two161 = v158;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeIiEES2_E10_S_on_swapERS3_S5_
void __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_on_swap(struct std__allocator_std___Rb_tree_node_int__* v162, struct std__allocator_std___Rb_tree_node_int__* v163) {
bb164:
  struct std__allocator_std___Rb_tree_node_int__* __a165;
  struct std__allocator_std___Rb_tree_node_int__* __b166;
  __a165 = v162;
  __b166 = v163;
  struct std__allocator_std___Rb_tree_node_int__* t167 = __a165;
  struct std__allocator_std___Rb_tree_node_int__* t168 = __b166;
  void_std____alloc_on_swap_std__allocator_std___Rb_tree_node_int_____(t167, t168);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4swapERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____swap(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v169, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v170) {
bb171:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this172;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t173;
  this172 = v169;
  __t173 = v170;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t174 = this172;
    struct std___Rb_tree_node_base** r175 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t174);
    struct std___Rb_tree_node_base* t176 = *r175;
    _Bool cast177 = (_Bool)t176;
    _Bool u178 = !cast177;
    if (u178) {
        struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t179 = __t173;
        struct std___Rb_tree_node_base** r180 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t179);
        struct std___Rb_tree_node_base* t181 = *r180;
        _Bool cast182 = (_Bool)t181;
        if (cast182) {
          struct std___Rb_tree_header* base183 = (struct std___Rb_tree_header*)((char *)&(t174->_M_impl) + 8);
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t184 = __t173;
          struct std___Rb_tree_header* base185 = (struct std___Rb_tree_header*)((char *)&(t184->_M_impl) + 8);
          std___Rb_tree_header___M_move_data(base183, base185);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
        struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t186 = __t173;
        struct std___Rb_tree_node_base** r187 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t186);
        struct std___Rb_tree_node_base* t188 = *r187;
        _Bool cast189 = (_Bool)t188;
        _Bool u190 = !cast189;
        if (u190) {
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t191 = __t173;
          struct std___Rb_tree_header* base192 = (struct std___Rb_tree_header*)((char *)&(t191->_M_impl) + 8);
          struct std___Rb_tree_header* base193 = (struct std___Rb_tree_header*)((char *)&(t174->_M_impl) + 8);
          std___Rb_tree_header___M_move_data(base192, base193);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Rb_tree_node_base** r194 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t174);
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t195 = __t173;
          struct std___Rb_tree_node_base** r196 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t195);
          std__enable_if___and__std____not__std____is_tuple_like_std___Rb_tree_node_base______std__is_move_constructible_std___Rb_tree_node_base____std__is_move_assignable_std___Rb_tree_node_base______value__void___type_std__swap_std___Rb_tree_node_base__(r194, r196);
          struct std___Rb_tree_node_base** r197 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t174);
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t198 = __t173;
          struct std___Rb_tree_node_base** r199 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t198);
          std__enable_if___and__std____not__std____is_tuple_like_std___Rb_tree_node_base______std__is_move_constructible_std___Rb_tree_node_base____std__is_move_assignable_std___Rb_tree_node_base______value__void___type_std__swap_std___Rb_tree_node_base__(r197, r199);
          struct std___Rb_tree_node_base** r200 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t174);
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t201 = __t173;
          struct std___Rb_tree_node_base** r202 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t201);
          std__enable_if___and__std____not__std____is_tuple_like_std___Rb_tree_node_base______std__is_move_constructible_std___Rb_tree_node_base____std__is_move_assignable_std___Rb_tree_node_base______value__void___type_std__swap_std___Rb_tree_node_base__(r200, r202);
          struct std___Rb_tree_node_base* r203 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t174);
          struct std___Rb_tree_node_base** r204 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t174);
          struct std___Rb_tree_node_base* t205 = *r204;
          t205->_M_parent = r203;
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t206 = __t173;
          struct std___Rb_tree_node_base* r207 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t206);
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t208 = __t173;
          struct std___Rb_tree_node_base** r209 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t208);
          struct std___Rb_tree_node_base* t210 = *r209;
          t210->_M_parent = r207;
          struct std___Rb_tree_header* base211 = (struct std___Rb_tree_header*)((char *)&(t174->_M_impl) + 8);
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t212 = __t173;
          struct std___Rb_tree_header* base213 = (struct std___Rb_tree_header*)((char *)&(t212->_M_impl) + 8);
          std__enable_if___and__std____not__std____is_tuple_like_unsigned_long_____std__is_move_constructible_unsigned_long___std__is_move_assignable_unsigned_long_____value__void___type_std__swap_unsigned_long_(&base211->_M_node_count, &base213->_M_node_count);
        }
    }
  struct std___Rb_tree_key_compare_std__less_int__* base214 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t174->_M_impl) + 0);
  struct std__less_int_* cast215 = (struct std__less_int_*)base214;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t216 = __t173;
  struct std___Rb_tree_key_compare_std__less_int__* base217 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t216->_M_impl) + 0);
  struct std__less_int_* cast218 = (struct std__less_int_*)base217;
  std__enable_if___and__std____not__std____is_tuple_like_std__less_int_______std__is_move_constructible_std__less_int_____std__is_move_assignable_std__less_int_______value__void___type_std__swap_std__less_int___(cast215, cast218);
  struct std__allocator_std___Rb_tree_node_int__* r219 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t174);
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t220 = __t173;
  struct std__allocator_std___Rb_tree_node_int__* r221 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t220);
  __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_on_swap(r219, r221);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE4swapERS3_
void std__set_int__std__less_int___std__allocator_int_____swap(struct std__set_int__std__less_int___std__allocator_int__* v222, struct std__set_int__std__less_int___std__allocator_int__* v223) {
bb224:
  struct std__set_int__std__less_int___std__allocator_int__* this225;
  struct std__set_int__std__less_int___std__allocator_int__* __x226;
  this225 = v222;
  __x226 = v223;
  struct std__set_int__std__less_int___std__allocator_int__* t227 = this225;
  struct std__set_int__std__less_int___std__allocator_int__* t228 = __x226;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____swap(&t227->_M_t, &t228->_M_t);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v229, int v230) {
bb231:
  int __a232;
  int __b233;
  int __retval234;
  __a232 = v229;
  __b233 = v230;
  int t235 = __a232;
  int t236 = __b233;
  int b237 = t235 | t236;
  __retval234 = b237;
  int t238 = __retval234;
  return t238;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v239) {
bb240:
  struct std__basic_ios_char__std__char_traits_char__* this241;
  int __retval242;
  this241 = v239;
  struct std__basic_ios_char__std__char_traits_char__* t243 = this241;
  struct std__ios_base* base244 = (struct std__ios_base*)((char *)t243 + 0);
  int t245 = base244->_M_streambuf_state;
  __retval242 = t245;
  int t246 = __retval242;
  return t246;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v247, int v248) {
bb249:
  struct std__basic_ios_char__std__char_traits_char__* this250;
  int __state251;
  this250 = v247;
  __state251 = v248;
  struct std__basic_ios_char__std__char_traits_char__* t252 = this250;
  int r253 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t252);
  if (__cir_exc_active) {
    return;
  }
  int t254 = __state251;
  int r255 = std__operator_(r253, t254);
  std__basic_ios_char__std__char_traits_char_____clear(t252, r255);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v256, char* v257) {
bb258:
  char* __c1259;
  char* __c2260;
  _Bool __retval261;
  __c1259 = v256;
  __c2260 = v257;
  char* t262 = __c1259;
  char t263 = *t262;
  int cast264 = (int)t263;
  char* t265 = __c2260;
  char t266 = *t265;
  int cast267 = (int)t266;
  _Bool c268 = ((cast264 == cast267)) ? 1 : 0;
  __retval261 = c268;
  _Bool t269 = __retval261;
  return t269;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v270) {
bb271:
  char* __p272;
  unsigned long __retval273;
  unsigned long __i274;
  __p272 = v270;
  unsigned long c275 = 0;
  __i274 = c275;
    char ref_tmp0276;
    while (1) {
      unsigned long t277 = __i274;
      char* t278 = __p272;
      char* ptr279 = &(t278)[t277];
      char c280 = 0;
      ref_tmp0276 = c280;
      _Bool r281 = __gnu_cxx__char_traits_char___eq(ptr279, &ref_tmp0276);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u282 = !r281;
      if (!u282) break;
      unsigned long t283 = __i274;
      unsigned long u284 = t283 + 1;
      __i274 = u284;
    }
  unsigned long t285 = __i274;
  __retval273 = t285;
  unsigned long t286 = __retval273;
  return t286;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v287) {
bb288:
  char* __s289;
  unsigned long __retval290;
  __s289 = v287;
    _Bool r291 = std____is_constant_evaluated();
    if (r291) {
      char* t292 = __s289;
      unsigned long r293 = __gnu_cxx__char_traits_char___length(t292);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval290 = r293;
      unsigned long t294 = __retval290;
      return t294;
    }
  char* t295 = __s289;
  unsigned long r296 = strlen(t295);
  __retval290 = r296;
  unsigned long t297 = __retval290;
  return t297;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v298, char* v299) {
bb300:
  struct std__basic_ostream_char__std__char_traits_char__* __out301;
  char* __s302;
  struct std__basic_ostream_char__std__char_traits_char__* __retval303;
  __out301 = v298;
  __s302 = v299;
    char* t304 = __s302;
    _Bool cast305 = (_Bool)t304;
    _Bool u306 = !cast305;
    if (u306) {
      struct std__basic_ostream_char__std__char_traits_char__* t307 = __out301;
      void** v308 = (void**)t307;
      void* v309 = *((void**)v308);
      unsigned char* cast310 = (unsigned char*)v309;
      long c311 = -24;
      unsigned char* ptr312 = &(cast310)[c311];
      long* cast313 = (long*)ptr312;
      long t314 = *cast313;
      unsigned char* cast315 = (unsigned char*)t307;
      unsigned char* ptr316 = &(cast315)[t314];
      struct std__basic_ostream_char__std__char_traits_char__* cast317 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr316;
      struct std__basic_ios_char__std__char_traits_char__* cast318 = (struct std__basic_ios_char__std__char_traits_char__*)cast317;
      int t319 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast318, t319);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t320 = __out301;
      char* t321 = __s302;
      char* t322 = __s302;
      unsigned long r323 = std__char_traits_char___length(t322);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast324 = (long)r323;
      struct std__basic_ostream_char__std__char_traits_char__* r325 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t320, t321, cast324);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __out301;
  __retval303 = t326;
  struct std__basic_ostream_char__std__char_traits_char__* t327 = __retval303;
  return t327;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v328, struct std___Rb_tree_const_iterator_int_* v329) {
bb330:
  struct std___Rb_tree_const_iterator_int_* __x331;
  struct std___Rb_tree_const_iterator_int_* __y332;
  _Bool __retval333;
  __x331 = v328;
  __y332 = v329;
  struct std___Rb_tree_const_iterator_int_* t334 = __x331;
  struct std___Rb_tree_node_base* t335 = t334->_M_node;
  struct std___Rb_tree_const_iterator_int_* t336 = __y332;
  struct std___Rb_tree_node_base* t337 = t336->_M_node;
  _Bool c338 = ((t335 == t337)) ? 1 : 0;
  __retval333 = c338;
  _Bool t339 = __retval333;
  return t339;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v340) {
bb341:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this342;
  struct std___Rb_tree_const_iterator_int_ __retval343;
  this342 = v340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t344 = this342;
  struct std___Rb_tree_node_base* r345 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t344);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval343, r345);
  struct std___Rb_tree_const_iterator_int_ t346 = __retval343;
  return t346;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v347) {
bb348:
  struct std__set_int__std__less_int___std__allocator_int__* this349;
  struct std___Rb_tree_const_iterator_int_ __retval350;
  this349 = v347;
  struct std__set_int__std__less_int___std__allocator_int__* t351 = this349;
  struct std___Rb_tree_const_iterator_int_ r352 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t351->_M_t);
  __retval350 = r352;
  struct std___Rb_tree_const_iterator_int_ t353 = __retval350;
  return t353;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v354, void* v355) {
bb356:
  struct std__basic_ostream_char__std__char_traits_char__* this357;
  void* __pf358;
  struct std__basic_ostream_char__std__char_traits_char__* __retval359;
  this357 = v354;
  __pf358 = v355;
  struct std__basic_ostream_char__std__char_traits_char__* t360 = this357;
  void* t361 = __pf358;
  struct std__basic_ostream_char__std__char_traits_char__* r362 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t361)(t360);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval359 = r362;
  struct std__basic_ostream_char__std__char_traits_char__* t363 = __retval359;
  return t363;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v364) {
bb365:
  struct std__basic_ostream_char__std__char_traits_char__* __os366;
  struct std__basic_ostream_char__std__char_traits_char__* __retval367;
  __os366 = v364;
  struct std__basic_ostream_char__std__char_traits_char__* t368 = __os366;
  struct std__basic_ostream_char__std__char_traits_char__* r369 = std__ostream__flush(t368);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval367 = r369;
  struct std__basic_ostream_char__std__char_traits_char__* t370 = __retval367;
  return t370;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v371) {
bb372:
  struct std__ctype_char_* __f373;
  struct std__ctype_char_* __retval374;
  __f373 = v371;
    struct std__ctype_char_* t375 = __f373;
    _Bool cast376 = (_Bool)t375;
    _Bool u377 = !cast376;
    if (u377) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t378 = __f373;
  __retval374 = t378;
  struct std__ctype_char_* t379 = __retval374;
  return t379;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v380, char v381) {
bb382:
  struct std__ctype_char_* this383;
  char __c384;
  char __retval385;
  this383 = v380;
  __c384 = v381;
  struct std__ctype_char_* t386 = this383;
    char t387 = t386->_M_widen_ok;
    _Bool cast388 = (_Bool)t387;
    if (cast388) {
      char t389 = __c384;
      unsigned char cast390 = (unsigned char)t389;
      unsigned long cast391 = (unsigned long)cast390;
      char t392 = t386->_M_widen[cast391];
      __retval385 = t392;
      char t393 = __retval385;
      return t393;
    }
  std__ctype_char____M_widen_init___const(t386);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t394 = __c384;
  void** v395 = (void**)t386;
  void* v396 = *((void**)v395);
  char vcall399 = (char)__VERIFIER_virtual_call_char_char(t386, 6, t394);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval385 = vcall399;
  char t400 = __retval385;
  return t400;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v401, char v402) {
bb403:
  struct std__basic_ios_char__std__char_traits_char__* this404;
  char __c405;
  char __retval406;
  this404 = v401;
  __c405 = v402;
  struct std__basic_ios_char__std__char_traits_char__* t407 = this404;
  struct std__ctype_char_* t408 = t407->_M_ctype;
  struct std__ctype_char_* r409 = std__ctype_char__const__std____check_facet_std__ctype_char___(t408);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t410 = __c405;
  char r411 = std__ctype_char___widen_char__const(r409, t410);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval406 = r411;
  char t412 = __retval406;
  return t412;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v413) {
bb414:
  struct std__basic_ostream_char__std__char_traits_char__* __os415;
  struct std__basic_ostream_char__std__char_traits_char__* __retval416;
  __os415 = v413;
  struct std__basic_ostream_char__std__char_traits_char__* t417 = __os415;
  struct std__basic_ostream_char__std__char_traits_char__* t418 = __os415;
  void** v419 = (void**)t418;
  void* v420 = *((void**)v419);
  unsigned char* cast421 = (unsigned char*)v420;
  long c422 = -24;
  unsigned char* ptr423 = &(cast421)[c422];
  long* cast424 = (long*)ptr423;
  long t425 = *cast424;
  unsigned char* cast426 = (unsigned char*)t418;
  unsigned char* ptr427 = &(cast426)[t425];
  struct std__basic_ostream_char__std__char_traits_char__* cast428 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr427;
  struct std__basic_ios_char__std__char_traits_char__* cast429 = (struct std__basic_ios_char__std__char_traits_char__*)cast428;
  char c430 = 10;
  char r431 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast429, c430);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r432 = std__ostream__put(t417, r431);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r433 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r432);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval416 = r433;
  struct std__basic_ostream_char__std__char_traits_char__* t434 = __retval416;
  return t434;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v435) {
bb436:
  struct std__set_int__std__less_int___std__allocator_int__* this437;
  this437 = v435;
  struct std__set_int__std__less_int___std__allocator_int__* t438 = this437;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t438->_M_t);
  }
  return;
}

// function: main
int main() {
bb439:
  int __retval440;
  int myints441[6];
  struct std__set_int__std__less_int___std__allocator_int__ first442;
  struct std__set_int__std__less_int___std__allocator_int__ second443;
  struct std___Rb_tree_const_iterator_int_ it444;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0445;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0446;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1447;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2448;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1449;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3450;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4451;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5452;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2453;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6454;
  struct std___Rb_tree_const_iterator_int_ agg_tmp7455;
  struct std___Rb_tree_const_iterator_int_ agg_tmp8456;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3457;
  struct std___Rb_tree_const_iterator_int_ agg_tmp9458;
  struct std___Rb_tree_const_iterator_int_ agg_tmp10459;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11460;
  int c461 = 0;
  __retval440 = c461;
  // array copy
  __builtin_memcpy(myints441, __const_main_myints, (unsigned long)6 * sizeof(__const_main_myints[0]));
  int* cast462 = (int*)&(myints441);
  int* cast463 = (int*)&(myints441);
  int c464 = 3;
  int* ptr465 = &(cast463)[c464];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&first442, cast462, ptr465);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int* cast466 = (int*)&(myints441);
    int c467 = 3;
    int* ptr468 = &(cast466)[c467];
    int* cast469 = (int*)&(myints441);
    int c470 = 6;
    int* ptr471 = &(cast469)[c470];
    std__set_int__std__less_int___std__allocator_int_____set_int__(&second443, ptr468, ptr471);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&first442);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it444);
      unsigned long r472 = std__set_int__std__less_int___std__allocator_int_____size___const(&first442);
      unsigned long c473 = 3;
      _Bool c474 = ((r472 == c473)) ? 1 : 0;
      if (c474) {
      } else {
        char* cast475 = (char*)&(_str);
        char* c476 = _str_1;
        unsigned int c477 = 20;
        char* cast478 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast475, c476, c477, cast478);
      }
      struct std___Rb_tree_const_iterator_int_ r479 = std__set_int__std__less_int___std__allocator_int_____begin___const(&first442);
      ref_tmp0445 = r479;
      struct std___Rb_tree_const_iterator_int_* r480 = std___Rb_tree_const_iterator_int___operator_(&it444, &ref_tmp0445);
      int* r481 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t482 = *r481;
      int c483 = 10;
      _Bool c484 = ((t482 == c483)) ? 1 : 0;
      if (c484) {
      } else {
        char* cast485 = (char*)&(_str_2);
        char* c486 = _str_1;
        unsigned int c487 = 22;
        char* cast488 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast485, c486, c487, cast488);
      }
      int c489 = 0;
      struct std___Rb_tree_const_iterator_int_ r490 = std___Rb_tree_const_iterator_int___operator__(&it444, c489);
      agg_tmp0446 = r490;
      int* r491 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t492 = *r491;
      int c493 = 12;
      _Bool c494 = ((t492 == c493)) ? 1 : 0;
      if (c494) {
      } else {
        char* cast495 = (char*)&(_str_3);
        char* c496 = _str_1;
        unsigned int c497 = 24;
        char* cast498 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast495, c496, c497, cast498);
      }
      int c499 = 0;
      struct std___Rb_tree_const_iterator_int_ r500 = std___Rb_tree_const_iterator_int___operator__(&it444, c499);
      agg_tmp1447 = r500;
      int* r501 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t502 = *r501;
      int c503 = 75;
      _Bool c504 = ((t502 == c503)) ? 1 : 0;
      if (c504) {
      } else {
        char* cast505 = (char*)&(_str_4);
        char* c506 = _str_1;
        unsigned int c507 = 26;
        char* cast508 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast505, c506, c507, cast508);
      }
      int c509 = 0;
      struct std___Rb_tree_const_iterator_int_ r510 = std___Rb_tree_const_iterator_int___operator__(&it444, c509);
      agg_tmp2448 = r510;
      unsigned long r511 = std__set_int__std__less_int___std__allocator_int_____size___const(&second443);
      unsigned long c512 = 3;
      _Bool c513 = ((r511 == c512)) ? 1 : 0;
      if (c513) {
      } else {
        char* cast514 = (char*)&(_str_5);
        char* c515 = _str_1;
        unsigned int c516 = 28;
        char* cast517 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast514, c515, c516, cast517);
      }
      struct std___Rb_tree_const_iterator_int_ r518 = std__set_int__std__less_int___std__allocator_int_____begin___const(&second443);
      ref_tmp1449 = r518;
      struct std___Rb_tree_const_iterator_int_* r519 = std___Rb_tree_const_iterator_int___operator_(&it444, &ref_tmp1449);
      int* r520 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t521 = *r520;
      int c522 = 20;
      _Bool c523 = ((t521 == c522)) ? 1 : 0;
      if (c523) {
      } else {
        char* cast524 = (char*)&(_str_6);
        char* c525 = _str_1;
        unsigned int c526 = 30;
        char* cast527 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast524, c525, c526, cast527);
      }
      int c528 = 0;
      struct std___Rb_tree_const_iterator_int_ r529 = std___Rb_tree_const_iterator_int___operator__(&it444, c528);
      agg_tmp3450 = r529;
      int* r530 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t531 = *r530;
      int c532 = 25;
      _Bool c533 = ((t531 == c532)) ? 1 : 0;
      if (c533) {
      } else {
        char* cast534 = (char*)&(_str_7);
        char* c535 = _str_1;
        unsigned int c536 = 32;
        char* cast537 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast534, c535, c536, cast537);
      }
      int c538 = 0;
      struct std___Rb_tree_const_iterator_int_ r539 = std___Rb_tree_const_iterator_int___operator__(&it444, c538);
      agg_tmp4451 = r539;
      int* r540 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t541 = *r540;
      int c542 = 32;
      _Bool c543 = ((t541 == c542)) ? 1 : 0;
      if (c543) {
      } else {
        char* cast544 = (char*)&(_str_8);
        char* c545 = _str_1;
        unsigned int c546 = 34;
        char* cast547 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast544, c545, c546, cast547);
      }
      int c548 = 0;
      struct std___Rb_tree_const_iterator_int_ r549 = std___Rb_tree_const_iterator_int___operator__(&it444, c548);
      agg_tmp5452 = r549;
      std__set_int__std__less_int___std__allocator_int_____swap(&first442, &second443);
      unsigned long r550 = std__set_int__std__less_int___std__allocator_int_____size___const(&first442);
      unsigned long c551 = 3;
      _Bool c552 = ((r550 == c551)) ? 1 : 0;
      if (c552) {
      } else {
        char* cast553 = (char*)&(_str);
        char* c554 = _str_1;
        unsigned int c555 = 39;
        char* cast556 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast553, c554, c555, cast556);
      }
      struct std___Rb_tree_const_iterator_int_ r557 = std__set_int__std__less_int___std__allocator_int_____begin___const(&first442);
      ref_tmp2453 = r557;
      struct std___Rb_tree_const_iterator_int_* r558 = std___Rb_tree_const_iterator_int___operator_(&it444, &ref_tmp2453);
      int* r559 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t560 = *r559;
      int c561 = 20;
      _Bool c562 = ((t560 == c561)) ? 1 : 0;
      if (c562) {
      } else {
        char* cast563 = (char*)&(_str_6);
        char* c564 = _str_1;
        unsigned int c565 = 41;
        char* cast566 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast563, c564, c565, cast566);
      }
      int c567 = 0;
      struct std___Rb_tree_const_iterator_int_ r568 = std___Rb_tree_const_iterator_int___operator__(&it444, c567);
      agg_tmp6454 = r568;
      int* r569 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t570 = *r569;
      int c571 = 25;
      _Bool c572 = ((t570 != c571)) ? 1 : 0;
      if (c572) {
      } else {
        char* cast573 = (char*)&(_str_9);
        char* c574 = _str_1;
        unsigned int c575 = 43;
        char* cast576 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast573, c574, c575, cast576);
      }
      int c577 = 0;
      struct std___Rb_tree_const_iterator_int_ r578 = std___Rb_tree_const_iterator_int___operator__(&it444, c577);
      agg_tmp7455 = r578;
      int* r579 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t580 = *r579;
      int c581 = 32;
      _Bool c582 = ((t580 == c581)) ? 1 : 0;
      if (c582) {
      } else {
        char* cast583 = (char*)&(_str_8);
        char* c584 = _str_1;
        unsigned int c585 = 45;
        char* cast586 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast583, c584, c585, cast586);
      }
      int c587 = 0;
      struct std___Rb_tree_const_iterator_int_ r588 = std___Rb_tree_const_iterator_int___operator__(&it444, c587);
      agg_tmp8456 = r588;
      unsigned long r589 = std__set_int__std__less_int___std__allocator_int_____size___const(&second443);
      unsigned long c590 = 3;
      _Bool c591 = ((r589 != c590)) ? 1 : 0;
      if (c591) {
      } else {
        char* cast592 = (char*)&(_str_10);
        char* c593 = _str_1;
        unsigned int c594 = 47;
        char* cast595 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast592, c593, c594, cast595);
      }
      struct std___Rb_tree_const_iterator_int_ r596 = std__set_int__std__less_int___std__allocator_int_____begin___const(&second443);
      ref_tmp3457 = r596;
      struct std___Rb_tree_const_iterator_int_* r597 = std___Rb_tree_const_iterator_int___operator_(&it444, &ref_tmp3457);
      int* r598 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t599 = *r598;
      int c600 = 10;
      _Bool c601 = ((t599 == c600)) ? 1 : 0;
      if (c601) {
      } else {
        char* cast602 = (char*)&(_str_2);
        char* c603 = _str_1;
        unsigned int c604 = 49;
        char* cast605 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast602, c603, c604, cast605);
      }
      int c606 = 0;
      struct std___Rb_tree_const_iterator_int_ r607 = std___Rb_tree_const_iterator_int___operator__(&it444, c606);
      agg_tmp9458 = r607;
      int* r608 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t609 = *r608;
      int c610 = 12;
      _Bool c611 = ((t609 == c610)) ? 1 : 0;
      if (c611) {
      } else {
        char* cast612 = (char*)&(_str_3);
        char* c613 = _str_1;
        unsigned int c614 = 51;
        char* cast615 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast612, c613, c614, cast615);
      }
      int c616 = 0;
      struct std___Rb_tree_const_iterator_int_ r617 = std___Rb_tree_const_iterator_int___operator__(&it444, c616);
      agg_tmp10459 = r617;
      int* r618 = std___Rb_tree_const_iterator_int___operator____const(&it444);
      int t619 = *r618;
      int c620 = 75;
      _Bool c621 = ((t619 == c620)) ? 1 : 0;
      if (c621) {
      } else {
        char* cast622 = (char*)&(_str_4);
        char* c623 = _str_1;
        unsigned int c624 = 53;
        char* cast625 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast622, c623, c624, cast625);
      }
      int c626 = 0;
      struct std___Rb_tree_const_iterator_int_ r627 = std___Rb_tree_const_iterator_int___operator__(&it444, c626);
      agg_tmp11460 = r627;
      char* cast628 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* r629 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast628);
      if (__cir_exc_active) {
        {
          std__set_int__std__less_int___std__allocator_int______set(&second443);
        }
        {
          std__set_int__std__less_int___std__allocator_int______set(&first442);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        struct std___Rb_tree_const_iterator_int_ ref_tmp4630;
        struct std___Rb_tree_const_iterator_int_ ref_tmp5631;
        struct std___Rb_tree_const_iterator_int_ agg_tmp12632;
        struct std___Rb_tree_const_iterator_int_ r633 = std__set_int__std__less_int___std__allocator_int_____begin___const(&first442);
        ref_tmp4630 = r633;
        struct std___Rb_tree_const_iterator_int_* r634 = std___Rb_tree_const_iterator_int___operator_(&it444, &ref_tmp4630);
        while (1) {
          struct std___Rb_tree_const_iterator_int_ r636 = std__set_int__std__less_int___std__allocator_int_____end___const(&first442);
          ref_tmp5631 = r636;
          _Bool r637 = std__operator___2(&it444, &ref_tmp5631);
          _Bool u638 = !r637;
          if (!u638) break;
          char* cast639 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* r640 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast639);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&second443);
            }
            {
              std__set_int__std__less_int___std__allocator_int______set(&first442);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r641 = std___Rb_tree_const_iterator_int___operator____const(&it444);
          int t642 = *r641;
          struct std__basic_ostream_char__std__char_traits_char__* r643 = std__ostream__operator__(r640, t642);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&second443);
            }
            {
              std__set_int__std__less_int___std__allocator_int______set(&first442);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step635: ;
          int c644 = 0;
          struct std___Rb_tree_const_iterator_int_ r645 = std___Rb_tree_const_iterator_int___operator__(&it444, c644);
          agg_tmp12632 = r645;
        }
      char* cast646 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* r647 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast646);
      if (__cir_exc_active) {
        {
          std__set_int__std__less_int___std__allocator_int______set(&second443);
        }
        {
          std__set_int__std__less_int___std__allocator_int______set(&first442);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        struct std___Rb_tree_const_iterator_int_ ref_tmp6648;
        struct std___Rb_tree_const_iterator_int_ ref_tmp7649;
        struct std___Rb_tree_const_iterator_int_ agg_tmp13650;
        struct std___Rb_tree_const_iterator_int_ r651 = std__set_int__std__less_int___std__allocator_int_____begin___const(&second443);
        ref_tmp6648 = r651;
        struct std___Rb_tree_const_iterator_int_* r652 = std___Rb_tree_const_iterator_int___operator_(&it444, &ref_tmp6648);
        while (1) {
          struct std___Rb_tree_const_iterator_int_ r654 = std__set_int__std__less_int___std__allocator_int_____end___const(&second443);
          ref_tmp7649 = r654;
          _Bool r655 = std__operator___2(&it444, &ref_tmp7649);
          _Bool u656 = !r655;
          if (!u656) break;
          char* cast657 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* r658 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast657);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&second443);
            }
            {
              std__set_int__std__less_int___std__allocator_int______set(&first442);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r659 = std___Rb_tree_const_iterator_int___operator____const(&it444);
          int t660 = *r659;
          struct std__basic_ostream_char__std__char_traits_char__* r661 = std__ostream__operator__(r658, t660);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&second443);
            }
            {
              std__set_int__std__less_int___std__allocator_int______set(&first442);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step653: ;
          int c662 = 0;
          struct std___Rb_tree_const_iterator_int_ r663 = std___Rb_tree_const_iterator_int___operator__(&it444, c662);
          agg_tmp13650 = r663;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r664 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std__set_int__std__less_int___std__allocator_int______set(&second443);
        }
        {
          std__set_int__std__less_int___std__allocator_int______set(&first442);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c665 = 0;
      __retval440 = c665;
      int t666 = __retval440;
      int ret_val667 = t666;
      {
        std__set_int__std__less_int___std__allocator_int______set(&second443);
      }
      {
        std__set_int__std__less_int___std__allocator_int______set(&first442);
      }
      return ret_val667;
  int t668 = __retval440;
  return t668;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v669) {
bb670:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this671;
  this671 = v669;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t672 = this671;
    struct std___Rb_tree_node_int_* r673 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t672);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t672, r673);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t672->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t672->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v674) {
bb675:
  struct std___Rb_tree_node_int_* this676;
  struct std___Rb_tree_node_int_* __retval677;
  this676 = v674;
  struct std___Rb_tree_node_int_* t678 = this676;
  __retval677 = t678;
  struct std___Rb_tree_node_int_* t679 = __retval677;
  return t679;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v680) {
bb681:
  struct std___Rb_tree_node_int_* __x682;
  struct std___Rb_tree_node_int_* __retval683;
  __x682 = v680;
  struct std___Rb_tree_node_int_* t684 = __x682;
  struct std___Rb_tree_node_base* base685 = (struct std___Rb_tree_node_base*)((char *)t684 + 0);
  struct std___Rb_tree_node_base* t686 = base685->_M_right;
  _Bool cast687 = (_Bool)t686;
  struct std___Rb_tree_node_int_* ternary688;
  if (cast687) {
    struct std___Rb_tree_node_int_* t689 = __x682;
    struct std___Rb_tree_node_base* base690 = (struct std___Rb_tree_node_base*)((char *)t689 + 0);
    struct std___Rb_tree_node_base* t691 = base690->_M_right;
    struct std___Rb_tree_node_int_* derived692 = (struct std___Rb_tree_node_int_*)((char *)t691 - 0);
    struct std___Rb_tree_node_int_* r693 = std___Rb_tree_node_int____M_node_ptr(derived692);
    ternary688 = (struct std___Rb_tree_node_int_*)r693;
  } else {
    struct std___Rb_tree_node_int_* c694 = ((void*)0);
    ternary688 = (struct std___Rb_tree_node_int_*)c694;
  }
  __retval683 = ternary688;
  struct std___Rb_tree_node_int_* t695 = __retval683;
  return t695;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v696) {
bb697:
  struct std___Rb_tree_node_int_* __x698;
  struct std___Rb_tree_node_int_* __retval699;
  __x698 = v696;
  struct std___Rb_tree_node_int_* t700 = __x698;
  struct std___Rb_tree_node_base* base701 = (struct std___Rb_tree_node_base*)((char *)t700 + 0);
  struct std___Rb_tree_node_base* t702 = base701->_M_left;
  _Bool cast703 = (_Bool)t702;
  struct std___Rb_tree_node_int_* ternary704;
  if (cast703) {
    struct std___Rb_tree_node_int_* t705 = __x698;
    struct std___Rb_tree_node_base* base706 = (struct std___Rb_tree_node_base*)((char *)t705 + 0);
    struct std___Rb_tree_node_base* t707 = base706->_M_left;
    struct std___Rb_tree_node_int_* derived708 = (struct std___Rb_tree_node_int_*)((char *)t707 - 0);
    struct std___Rb_tree_node_int_* r709 = std___Rb_tree_node_int____M_node_ptr(derived708);
    ternary704 = (struct std___Rb_tree_node_int_*)r709;
  } else {
    struct std___Rb_tree_node_int_* c710 = ((void*)0);
    ternary704 = (struct std___Rb_tree_node_int_*)c710;
  }
  __retval699 = ternary704;
  struct std___Rb_tree_node_int_* t711 = __retval699;
  return t711;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v712) {
bb713:
  int* __location714;
  __location714 = v712;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v715, int* v716) {
bb717:
  struct std__allocator_std___Rb_tree_node_int__* __a718;
  int* __p719;
  __a718 = v715;
  __p719 = v716;
  int* t720 = __p719;
  void_std__destroy_at_int_(t720);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v721) {
bb722:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this723;
  struct std__allocator_std___Rb_tree_node_int__* __retval724;
  this723 = v721;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t725 = this723;
  struct std__allocator_std___Rb_tree_node_int__* base726 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t725->_M_impl) + 0);
  __retval724 = base726;
  struct std__allocator_std___Rb_tree_node_int__* t727 = __retval724;
  return t727;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v728) {
bb729:
  struct __gnu_cxx____aligned_membuf_int_* this730;
  void* __retval731;
  this730 = v728;
  struct __gnu_cxx____aligned_membuf_int_* t732 = this730;
  void* cast733 = (void*)&(t732->_M_storage);
  __retval731 = cast733;
  void* t734 = __retval731;
  return t734;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v735) {
bb736:
  struct __gnu_cxx____aligned_membuf_int_* this737;
  int* __retval738;
  this737 = v735;
  struct __gnu_cxx____aligned_membuf_int_* t739 = this737;
  void* r740 = __gnu_cxx____aligned_membuf_int____M_addr(t739);
  int* cast741 = (int*)r740;
  __retval738 = cast741;
  int* t742 = __retval738;
  return t742;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v743) {
bb744:
  struct std___Rb_tree_node_int_* this745;
  int* __retval746;
  this745 = v743;
  struct std___Rb_tree_node_int_* t747 = this745;
  int* r748 = __gnu_cxx____aligned_membuf_int____M_ptr(&t747->_M_storage);
  __retval746 = r748;
  int* t749 = __retval746;
  return t749;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v750, struct std___Rb_tree_node_int_* v751) {
bb752:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this753;
  struct std___Rb_tree_node_int_* __p754;
  this753 = v750;
  __p754 = v751;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t755 = this753;
  struct std__allocator_std___Rb_tree_node_int__* r756 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t755);
  struct std___Rb_tree_node_int_* t757 = __p754;
  int* r758 = std___Rb_tree_node_int____M_valptr(t757);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r756, r758);
  struct std___Rb_tree_node_int_* t759 = __p754;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb760:
  _Bool __retval761;
    _Bool c762 = 0;
    __retval761 = c762;
    _Bool t763 = __retval761;
    return t763;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v764, struct std___Rb_tree_node_int_* v765, unsigned long v766) {
bb767:
  struct std____new_allocator_std___Rb_tree_node_int__* this768;
  struct std___Rb_tree_node_int_* __p769;
  unsigned long __n770;
  this768 = v764;
  __p769 = v765;
  __n770 = v766;
  struct std____new_allocator_std___Rb_tree_node_int__* t771 = this768;
    unsigned long c772 = 8;
    unsigned long c773 = 16;
    _Bool c774 = ((c772 > c773)) ? 1 : 0;
    if (c774) {
      struct std___Rb_tree_node_int_* t775 = __p769;
      void* cast776 = (void*)t775;
      unsigned long t777 = __n770;
      unsigned long c778 = 40;
      unsigned long b779 = t777 * c778;
      unsigned long c780 = 8;
      operator_delete_3(cast776, b779, c780);
      return;
    }
  struct std___Rb_tree_node_int_* t781 = __p769;
  void* cast782 = (void*)t781;
  unsigned long t783 = __n770;
  unsigned long c784 = 40;
  unsigned long b785 = t783 * c784;
  operator_delete_2(cast782, b785);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v786, struct std___Rb_tree_node_int_* v787, unsigned long v788) {
bb789:
  struct std__allocator_std___Rb_tree_node_int__* this790;
  struct std___Rb_tree_node_int_* __p791;
  unsigned long __n792;
  this790 = v786;
  __p791 = v787;
  __n792 = v788;
  struct std__allocator_std___Rb_tree_node_int__* t793 = this790;
    _Bool r794 = std____is_constant_evaluated();
    if (r794) {
      struct std___Rb_tree_node_int_* t795 = __p791;
      void* cast796 = (void*)t795;
      operator_delete(cast796);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base797 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t793 + 0);
  struct std___Rb_tree_node_int_* t798 = __p791;
  unsigned long t799 = __n792;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base797, t798, t799);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v800, struct std___Rb_tree_node_int_* v801, unsigned long v802) {
bb803:
  struct std__allocator_std___Rb_tree_node_int__* __a804;
  struct std___Rb_tree_node_int_* __p805;
  unsigned long __n806;
  __a804 = v800;
  __p805 = v801;
  __n806 = v802;
  struct std__allocator_std___Rb_tree_node_int__* t807 = __a804;
  struct std___Rb_tree_node_int_* t808 = __p805;
  unsigned long t809 = __n806;
  std__allocator_std___Rb_tree_node_int_____deallocate(t807, t808, t809);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v810, struct std___Rb_tree_node_int_* v811) {
bb812:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this813;
  struct std___Rb_tree_node_int_* __p814;
  this813 = v810;
  __p814 = v811;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t815 = this813;
  struct std__allocator_std___Rb_tree_node_int__* r816 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t815);
  struct std___Rb_tree_node_int_* t817 = __p814;
  unsigned long c818 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r816, t817, c818);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v819, struct std___Rb_tree_node_int_* v820) {
bb821:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this822;
  struct std___Rb_tree_node_int_* __p823;
  this822 = v819;
  __p823 = v820;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t824 = this822;
  struct std___Rb_tree_node_int_* t825 = __p823;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t824, t825);
  struct std___Rb_tree_node_int_* t826 = __p823;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t824, t826);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v827, struct std___Rb_tree_node_int_* v828) {
bb829:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this830;
  struct std___Rb_tree_node_int_* __x831;
  this830 = v827;
  __x831 = v828;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t832 = this830;
    while (1) {
      struct std___Rb_tree_node_int_* t833 = __x831;
      _Bool cast834 = (_Bool)t833;
      if (!cast834) break;
        struct std___Rb_tree_node_int_* __y835;
        struct std___Rb_tree_node_int_* t836 = __x831;
        struct std___Rb_tree_node_int_* r837 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t836);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t832, r837);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t838 = __x831;
        struct std___Rb_tree_node_int_* r839 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t838);
        if (__cir_exc_active) {
          return;
        }
        __y835 = r839;
        struct std___Rb_tree_node_int_* t840 = __x831;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t832, t840);
        struct std___Rb_tree_node_int_* t841 = __y835;
        __x831 = t841;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v842) {
bb843:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this844;
  struct std___Rb_tree_node_int_* __retval845;
  struct std___Rb_tree_node_base* __begin846;
  this844 = v842;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t847 = this844;
  struct std___Rb_tree_header* base848 = (struct std___Rb_tree_header*)((char *)&(t847->_M_impl) + 8);
  struct std___Rb_tree_node_base* t849 = base848->_M_header._M_parent;
  __begin846 = t849;
  struct std___Rb_tree_node_base* t850 = __begin846;
  _Bool cast851 = (_Bool)t850;
  struct std___Rb_tree_node_int_* ternary852;
  if (cast851) {
    struct std___Rb_tree_node_base* t853 = __begin846;
    struct std___Rb_tree_node_int_* derived854 = (struct std___Rb_tree_node_int_*)((char *)t853 - 0);
    struct std___Rb_tree_node_int_* r855 = std___Rb_tree_node_int____M_node_ptr(derived854);
    ternary852 = (struct std___Rb_tree_node_int_*)r855;
  } else {
    struct std___Rb_tree_node_int_* c856 = ((void*)0);
    ternary852 = (struct std___Rb_tree_node_int_*)c856;
  }
  __retval845 = ternary852;
  struct std___Rb_tree_node_int_* t857 = __retval845;
  return t857;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v858) {
bb859:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this860;
  this860 = v858;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t861 = this860;
  {
    struct std__allocator_std___Rb_tree_node_int__* base862 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t861 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base862);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v863) {
bb864:
  struct std__allocator_std___Rb_tree_node_int__* this865;
  this865 = v863;
  struct std__allocator_std___Rb_tree_node_int__* t866 = this865;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v867) {
bb868:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this869;
  this869 = v867;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t870 = this869;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t870->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v871, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v872) {
bb873:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this874;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t875;
  this874 = v871;
  __t875 = v872;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t876 = this874;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t877 = __t875;
  t876->_M_t = t877;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v878) {
bb879:
  struct std___Rb_tree_node_base* this880;
  struct std___Rb_tree_node_base* __retval881;
  this880 = v878;
  struct std___Rb_tree_node_base* t882 = this880;
  __retval881 = t882;
  struct std___Rb_tree_node_base* t883 = __retval881;
  return t883;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v884) {
bb885:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this886;
  struct std___Rb_tree_node_base* __retval887;
  this886 = v884;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t888 = this886;
  struct std___Rb_tree_header* base889 = (struct std___Rb_tree_header*)((char *)&(t888->_M_impl) + 8);
  struct std___Rb_tree_node_base* r890 = std___Rb_tree_node_base___M_base_ptr___const(&base889->_M_header);
  __retval887 = r890;
  struct std___Rb_tree_node_base* t891 = __retval887;
  return t891;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v892) {
bb893:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this894;
  unsigned long __retval895;
  this894 = v892;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t896 = this894;
  struct std___Rb_tree_header* base897 = (struct std___Rb_tree_header*)((char *)&(t896->_M_impl) + 8);
  unsigned long t898 = base897->_M_node_count;
  __retval895 = t898;
  unsigned long t899 = __retval895;
  return t899;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v900, int* v901, int* v902) {
bb903:
  struct std__less_int_* this904;
  int* __x905;
  int* __y906;
  _Bool __retval907;
  this904 = v900;
  __x905 = v901;
  __y906 = v902;
  struct std__less_int_* t908 = this904;
  int* t909 = __x905;
  int t910 = *t909;
  int* t911 = __y906;
  int t912 = *t911;
  _Bool c913 = ((t910 < t912)) ? 1 : 0;
  __retval907 = c913;
  _Bool t914 = __retval907;
  return t914;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v915, int* v916) {
bb917:
  struct std___Identity_int_* this918;
  int* __x919;
  int* __retval920;
  this918 = v915;
  __x919 = v916;
  struct std___Identity_int_* t921 = this918;
  int* t922 = __x919;
  __retval920 = t922;
  int* t923 = __retval920;
  return t923;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v924) {
bb925:
  struct __gnu_cxx____aligned_membuf_int_* this926;
  void* __retval927;
  this926 = v924;
  struct __gnu_cxx____aligned_membuf_int_* t928 = this926;
  void* cast929 = (void*)&(t928->_M_storage);
  __retval927 = cast929;
  void* t930 = __retval927;
  return t930;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v931) {
bb932:
  struct __gnu_cxx____aligned_membuf_int_* this933;
  int* __retval934;
  this933 = v931;
  struct __gnu_cxx____aligned_membuf_int_* t935 = this933;
  void* r936 = __gnu_cxx____aligned_membuf_int____M_addr___const(t935);
  int* cast937 = (int*)r936;
  __retval934 = cast937;
  int* t938 = __retval934;
  return t938;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v939) {
bb940:
  struct std___Rb_tree_node_int_* this941;
  int* __retval942;
  this941 = v939;
  struct std___Rb_tree_node_int_* t943 = this941;
  int* r944 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t943->_M_storage);
  __retval942 = r944;
  int* t945 = __retval942;
  return t945;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v946) {
bb947:
  struct std___Rb_tree_node_int_* __node948;
  int* __retval949;
  struct std___Identity_int_ ref_tmp0950;
  __node948 = v946;
  struct std___Rb_tree_node_int_* t951 = __node948;
  int* r952 = std___Rb_tree_node_int____M_valptr___const(t951);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r953 = std___Identity_int___operator___int_const___const(&ref_tmp0950, r952);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval949 = r953;
  int* t954 = __retval949;
  return t954;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v955) {
bb956:
  struct std___Rb_tree_node_base* __x957;
  int* __retval958;
  __x957 = v955;
  struct std___Rb_tree_node_base* t959 = __x957;
  struct std___Rb_tree_node_int_* derived960 = (struct std___Rb_tree_node_int_*)((char *)t959 - 0);
  int* r961 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived960);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval958 = r961;
  int* t962 = __retval958;
  return t962;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v963) {
bb964:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this965;
  struct std___Rb_tree_node_base** __retval966;
  this965 = v963;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t967 = this965;
  struct std___Rb_tree_header* base968 = (struct std___Rb_tree_header*)((char *)&(t967->_M_impl) + 8);
  __retval966 = &base968->_M_header._M_right;
  struct std___Rb_tree_node_base** t969 = __retval966;
  return t969;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v970, struct std___Rb_tree_node_base** v971, struct std___Rb_tree_node_base** v972) {
bb973:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this974;
  struct std___Rb_tree_node_base** __x975;
  struct std___Rb_tree_node_base** __y976;
  this974 = v970;
  __x975 = v971;
  __y976 = v972;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t977 = this974;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base978 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t977 + 0);
  struct std___Rb_tree_node_base** t979 = __x975;
  struct std___Rb_tree_node_base* t980 = *t979;
  t977->first = t980;
  struct std___Rb_tree_node_base** t981 = __y976;
  struct std___Rb_tree_node_base* t982 = *t981;
  t977->second = t982;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v983) {
bb984:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this985;
  struct std___Rb_tree_node_base* __retval986;
  this985 = v983;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t987 = this985;
  struct std___Rb_tree_header* base988 = (struct std___Rb_tree_header*)((char *)&(t987->_M_impl) + 8);
  struct std___Rb_tree_node_base* t989 = base988->_M_header._M_parent;
  __retval986 = t989;
  struct std___Rb_tree_node_base* t990 = __retval986;
  return t990;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v991) {
bb992:
  struct std___Rb_tree_node_base* __x993;
  struct std___Rb_tree_node_base* __retval994;
  __x993 = v991;
  struct std___Rb_tree_node_base* t995 = __x993;
  struct std___Rb_tree_node_base* t996 = t995->_M_left;
  __retval994 = t996;
  struct std___Rb_tree_node_base* t997 = __retval994;
  return t997;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v998, struct std___Rb_tree_iterator_int_* v999) {
bb1000:
  struct std___Rb_tree_iterator_int_* __x1001;
  struct std___Rb_tree_iterator_int_* __y1002;
  _Bool __retval1003;
  __x1001 = v998;
  __y1002 = v999;
  struct std___Rb_tree_iterator_int_* t1004 = __x1001;
  struct std___Rb_tree_node_base* t1005 = t1004->_M_node;
  struct std___Rb_tree_iterator_int_* t1006 = __y1002;
  struct std___Rb_tree_node_base* t1007 = t1006->_M_node;
  _Bool c1008 = ((t1005 == t1007)) ? 1 : 0;
  __retval1003 = c1008;
  _Bool t1009 = __retval1003;
  return t1009;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1010) {
bb1011:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1012;
  struct std___Rb_tree_iterator_int_ __retval1013;
  this1012 = v1010;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1014 = this1012;
  struct std___Rb_tree_header* base1015 = (struct std___Rb_tree_header*)((char *)&(t1014->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1016 = base1015->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1013, t1016);
  struct std___Rb_tree_iterator_int_ t1017 = __retval1013;
  return t1017;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1018, int* v1019) {
bb1020:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1021;
  int* __k1022;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1023;
  struct std___Rb_tree_node_base* __x1024;
  struct std___Rb_tree_node_base* __y1025;
  _Bool __comp1026;
  struct std___Rb_tree_iterator_int_ __j1027;
  struct std___Rb_tree_node_base* ref_tmp11028;
  this1021 = v1018;
  __k1022 = v1019;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1029 = this1021;
  struct std___Rb_tree_node_base* r1030 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1029);
  __x1024 = r1030;
  struct std___Rb_tree_node_base* r1031 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1029);
  __y1025 = r1031;
  _Bool c1032 = 1;
  __comp1026 = c1032;
    while (1) {
      struct std___Rb_tree_node_base* t1033 = __x1024;
      _Bool cast1034 = (_Bool)t1033;
      if (!cast1034) break;
        struct std___Rb_tree_node_base* t1035 = __x1024;
        __y1025 = t1035;
        struct std___Rb_tree_key_compare_std__less_int__* base1036 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1029->_M_impl) + 0);
        struct std__less_int_* cast1037 = (struct std__less_int_*)base1036;
        int* t1038 = __k1022;
        struct std___Rb_tree_node_base* t1039 = __x1024;
        int* r1040 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1039);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1041 = std__less_int___operator___int_const___int_const___const(cast1037, t1038, r1040);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp1026 = r1041;
        _Bool t1042 = __comp1026;
        struct std___Rb_tree_node_base* ternary1043;
        if (t1042) {
          struct std___Rb_tree_node_base* t1044 = __x1024;
          struct std___Rb_tree_node_base* r1045 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1044);
          ternary1043 = (struct std___Rb_tree_node_base*)r1045;
        } else {
          struct std___Rb_tree_node_base* t1046 = __x1024;
          struct std___Rb_tree_node_base* r1047 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1046);
          ternary1043 = (struct std___Rb_tree_node_base*)r1047;
        }
        __x1024 = ternary1043;
    }
  struct std___Rb_tree_node_base* t1048 = __y1025;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j1027, t1048);
    _Bool t1049 = __comp1026;
    if (t1049) {
        struct std___Rb_tree_iterator_int_ ref_tmp01050;
        struct std___Rb_tree_iterator_int_ r1051 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t1029);
        ref_tmp01050 = r1051;
        _Bool r1052 = std__operator__(&__j1027, &ref_tmp01050);
        if (r1052) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1023, &__x1024, &__y1025);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1053 = __retval1023;
          return t1053;
        } else {
          struct std___Rb_tree_iterator_int_* r1054 = std___Rb_tree_iterator_int___operator__(&__j1027);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base1055 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1029->_M_impl) + 0);
    struct std__less_int_* cast1056 = (struct std__less_int_*)base1055;
    struct std___Rb_tree_node_base* t1057 = __j1027._M_node;
    int* r1058 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1057);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1059 = __k1022;
    _Bool r1060 = std__less_int___operator___int_const___int_const___const(cast1056, r1058, t1059);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r1060) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1023, &__x1024, &__y1025);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1061 = __retval1023;
      return t1061;
    }
  struct std___Rb_tree_node_base* c1062 = ((void*)0);
  ref_tmp11028 = c1062;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1023, &__j1027._M_node, &ref_tmp11028);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1063 = __retval1023;
  return t1063;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1064) {
bb1065:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1066;
  struct std___Rb_tree_node_base** __retval1067;
  this1066 = v1064;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1068 = this1066;
  struct std___Rb_tree_header* base1069 = (struct std___Rb_tree_header*)((char *)&(t1068->_M_impl) + 8);
  __retval1067 = &base1069->_M_header._M_left;
  struct std___Rb_tree_node_base** t1070 = __retval1067;
  return t1070;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1071, struct std___Rb_tree_node_base** v1072, struct std___Rb_tree_node_base** v1073) {
bb1074:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1075;
  struct std___Rb_tree_node_base** __x1076;
  struct std___Rb_tree_node_base** __y1077;
  this1075 = v1071;
  __x1076 = v1072;
  __y1077 = v1073;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1078 = this1075;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1079 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1078 + 0);
  struct std___Rb_tree_node_base** t1080 = __x1076;
  struct std___Rb_tree_node_base* t1081 = *t1080;
  t1078->first = t1081;
  struct std___Rb_tree_node_base** t1082 = __y1077;
  struct std___Rb_tree_node_base* t1083 = *t1082;
  t1078->second = t1083;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v1084) {
bb1085:
  struct std___Rb_tree_iterator_int_* this1086;
  struct std___Rb_tree_iterator_int_* __retval1087;
  this1086 = v1084;
  struct std___Rb_tree_iterator_int_* t1088 = this1086;
  struct std___Rb_tree_node_base* t1089 = t1088->_M_node;
  struct std___Rb_tree_node_base* r1090 = std___Rb_tree_decrement(t1089);
  t1088->_M_node = r1090;
  __retval1087 = t1088;
  struct std___Rb_tree_iterator_int_* t1091 = __retval1087;
  return t1091;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v1092) {
bb1093:
  struct std___Rb_tree_node_base* __x1094;
  struct std___Rb_tree_node_base* __retval1095;
  __x1094 = v1092;
  struct std___Rb_tree_node_base* t1096 = __x1094;
  struct std___Rb_tree_node_base* t1097 = t1096->_M_right;
  __retval1095 = t1097;
  struct std___Rb_tree_node_base* t1098 = __retval1095;
  return t1098;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v1099) {
bb1100:
  struct std___Rb_tree_iterator_int_* this1101;
  struct std___Rb_tree_iterator_int_* __retval1102;
  this1101 = v1099;
  struct std___Rb_tree_iterator_int_* t1103 = this1101;
  struct std___Rb_tree_node_base* t1104 = t1103->_M_node;
  struct std___Rb_tree_node_base* r1105 = std___Rb_tree_increment(t1104);
  t1103->_M_node = r1105;
  __retval1102 = t1103;
  struct std___Rb_tree_iterator_int_* t1106 = __retval1102;
  return t1106;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1107, struct std___Rb_tree_node_base** v1108, struct std___Rb_tree_node_base** v1109) {
bb1110:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1111;
  struct std___Rb_tree_node_base** __x1112;
  struct std___Rb_tree_node_base** __y1113;
  this1111 = v1107;
  __x1112 = v1108;
  __y1113 = v1109;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1114 = this1111;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1115 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1114 + 0);
  struct std___Rb_tree_node_base** t1116 = __x1112;
  struct std___Rb_tree_node_base* t1117 = *t1116;
  t1114->first = t1117;
  struct std___Rb_tree_node_base** t1118 = __y1113;
  struct std___Rb_tree_node_base* t1119 = *t1118;
  t1114->second = t1119;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1120, struct std___Rb_tree_const_iterator_int_ v1121, int* v1122) {
bb1123:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1124;
  struct std___Rb_tree_const_iterator_int_ __position1125;
  int* __k1126;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1127;
  this1124 = v1120;
  __position1125 = v1121;
  __k1126 = v1122;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1128 = this1124;
    struct std___Rb_tree_node_base* t1129 = __position1125._M_node;
    struct std___Rb_tree_node_base* r1130 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1128);
    _Bool c1131 = ((t1129 == r1130)) ? 1 : 0;
    if (c1131) {
        unsigned long r1132 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1128);
        unsigned long c1133 = 0;
        _Bool c1134 = ((r1132 > c1133)) ? 1 : 0;
        _Bool ternary1135;
        if (c1134) {
          struct std___Rb_tree_key_compare_std__less_int__* base1136 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1128->_M_impl) + 0);
          struct std__less_int_* cast1137 = (struct std__less_int_*)base1136;
          struct std___Rb_tree_node_base** r1138 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1128);
          struct std___Rb_tree_node_base* t1139 = *r1138;
          int* r1140 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1139);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t1141 = __k1126;
          _Bool r1142 = std__less_int___operator___int_const___int_const___const(cast1137, r1140, t1141);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary1135 = (_Bool)r1142;
        } else {
          _Bool c1143 = 0;
          ternary1135 = (_Bool)c1143;
        }
        if (ternary1135) {
          struct std___Rb_tree_node_base* ref_tmp01144;
          struct std___Rb_tree_node_base* c1145 = ((void*)0);
          ref_tmp01144 = c1145;
          struct std___Rb_tree_node_base** r1146 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1128);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &ref_tmp01144, r1146);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1147 = __retval1127;
          return t1147;
        } else {
          int* t1148 = __k1126;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1149 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1128, t1148);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1127 = r1149;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1150 = __retval1127;
          return t1150;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1151 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1128->_M_impl) + 0);
        struct std__less_int_* cast1152 = (struct std__less_int_*)base1151;
        int* t1153 = __k1126;
        struct std___Rb_tree_node_base* t1154 = __position1125._M_node;
        int* r1155 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1154);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1156 = std__less_int___operator___int_const___int_const___const(cast1152, t1153, r1155);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r1156) {
          struct std___Rb_tree_iterator_int_ __before1157;
          struct std___Rb_tree_node_base* t1158 = __position1125._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1157, t1158);
            struct std___Rb_tree_node_base* t1159 = __position1125._M_node;
            struct std___Rb_tree_node_base** r1160 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1128);
            struct std___Rb_tree_node_base* t1161 = *r1160;
            _Bool c1162 = ((t1159 == t1161)) ? 1 : 0;
            if (c1162) {
              struct std___Rb_tree_node_base** r1163 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1128);
              struct std___Rb_tree_node_base** r1164 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1128);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, r1163, r1164);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1165 = __retval1127;
              return t1165;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1166 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1128->_M_impl) + 0);
                struct std__less_int_* cast1167 = (struct std__less_int_*)base1166;
                struct std___Rb_tree_iterator_int_* r1168 = std___Rb_tree_iterator_int___operator__(&__before1157);
                struct std___Rb_tree_node_base* t1169 = r1168->_M_node;
                int* r1170 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1169);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1171 = __k1126;
                _Bool r1172 = std__less_int___operator___int_const___int_const___const(cast1167, r1170, t1171);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r1172) {
                    struct std___Rb_tree_node_base* t1173 = __before1157._M_node;
                    struct std___Rb_tree_node_base* r1174 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1173);
                    _Bool cast1175 = (_Bool)r1174;
                    _Bool u1176 = !cast1175;
                    if (u1176) {
                      struct std___Rb_tree_node_base* ref_tmp11177;
                      struct std___Rb_tree_node_base* c1178 = ((void*)0);
                      ref_tmp11177 = c1178;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &ref_tmp11177, &__before1157._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1179 = __retval1127;
                      return t1179;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &__position1125._M_node, &__position1125._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1180 = __retval1127;
                      return t1180;
                    }
                } else {
                  int* t1181 = __k1126;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1182 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1128, t1181);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval1127 = r1182;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1183 = __retval1127;
                  return t1183;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base1184 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1128->_M_impl) + 0);
            struct std__less_int_* cast1185 = (struct std__less_int_*)base1184;
            struct std___Rb_tree_node_base* t1186 = __position1125._M_node;
            int* r1187 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1186);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t1188 = __k1126;
            _Bool r1189 = std__less_int___operator___int_const___int_const___const(cast1185, r1187, t1188);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r1189) {
              struct std___Rb_tree_iterator_int_ __after1190;
              struct std___Rb_tree_node_base* t1191 = __position1125._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1190, t1191);
                struct std___Rb_tree_node_base* t1192 = __position1125._M_node;
                struct std___Rb_tree_node_base** r1193 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1128);
                struct std___Rb_tree_node_base* t1194 = *r1193;
                _Bool c1195 = ((t1192 == t1194)) ? 1 : 0;
                if (c1195) {
                  struct std___Rb_tree_node_base* ref_tmp21196;
                  struct std___Rb_tree_node_base* c1197 = ((void*)0);
                  ref_tmp21196 = c1197;
                  struct std___Rb_tree_node_base** r1198 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1128);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &ref_tmp21196, r1198);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1199 = __retval1127;
                  return t1199;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base1200 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1128->_M_impl) + 0);
                    struct std__less_int_* cast1201 = (struct std__less_int_*)base1200;
                    int* t1202 = __k1126;
                    struct std___Rb_tree_iterator_int_* r1203 = std___Rb_tree_iterator_int___operator___2(&__after1190);
                    struct std___Rb_tree_node_base* t1204 = r1203->_M_node;
                    int* r1205 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1204);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r1206 = std__less_int___operator___int_const___int_const___const(cast1201, t1202, r1205);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r1206) {
                        struct std___Rb_tree_node_base* t1207 = __position1125._M_node;
                        struct std___Rb_tree_node_base* r1208 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1207);
                        _Bool cast1209 = (_Bool)r1208;
                        _Bool u1210 = !cast1209;
                        if (u1210) {
                          struct std___Rb_tree_node_base* ref_tmp31211;
                          struct std___Rb_tree_node_base* c1212 = ((void*)0);
                          ref_tmp31211 = c1212;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &ref_tmp31211, &__position1125._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1213 = __retval1127;
                          return t1213;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &__after1190._M_node, &__after1190._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1214 = __retval1127;
                          return t1214;
                        }
                    } else {
                      int* t1215 = __k1126;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1216 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1128, t1215);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval1127 = r1216;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1217 = __retval1127;
                      return t1217;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp41218;
              struct std___Rb_tree_node_base* c1219 = ((void*)0);
              ref_tmp41218 = c1219;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1127, &__position1125._M_node, &ref_tmp41218);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1220 = __retval1127;
              return t1220;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1221, int* v1222) {
bb1223:
  struct std___Identity_int_* this1224;
  int* __x1225;
  int* __retval1226;
  this1224 = v1221;
  __x1225 = v1222;
  struct std___Identity_int_* t1227 = this1224;
  int* t1228 = __x1225;
  __retval1226 = t1228;
  int* t1229 = __retval1226;
  return t1229;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1230) {
bb1231:
  struct std____new_allocator_std___Rb_tree_node_int__* this1232;
  unsigned long __retval1233;
  this1232 = v1230;
  struct std____new_allocator_std___Rb_tree_node_int__* t1234 = this1232;
  unsigned long c1235 = 9223372036854775807;
  unsigned long c1236 = 40;
  unsigned long b1237 = c1235 / c1236;
  __retval1233 = b1237;
  unsigned long t1238 = __retval1233;
  return t1238;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1239, unsigned long v1240, void* v1241) {
bb1242:
  struct std____new_allocator_std___Rb_tree_node_int__* this1243;
  unsigned long __n1244;
  void* unnamed1245;
  struct std___Rb_tree_node_int_* __retval1246;
  this1243 = v1239;
  __n1244 = v1240;
  unnamed1245 = v1241;
  struct std____new_allocator_std___Rb_tree_node_int__* t1247 = this1243;
    unsigned long t1248 = __n1244;
    unsigned long r1249 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1247);
    _Bool c1250 = ((t1248 > r1249)) ? 1 : 0;
    if (c1250) {
        unsigned long t1251 = __n1244;
        unsigned long c1252 = -1;
        unsigned long c1253 = 40;
        unsigned long b1254 = c1252 / c1253;
        _Bool c1255 = ((t1251 > b1254)) ? 1 : 0;
        if (c1255) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1256 = 8;
    unsigned long c1257 = 16;
    _Bool c1258 = ((c1256 > c1257)) ? 1 : 0;
    if (c1258) {
      unsigned long __al1259;
      unsigned long c1260 = 8;
      __al1259 = c1260;
      unsigned long t1261 = __n1244;
      unsigned long c1262 = 40;
      unsigned long b1263 = t1261 * c1262;
      unsigned long t1264 = __al1259;
      void* r1265 = operator_new_2(b1263, t1264);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1266 = (struct std___Rb_tree_node_int_*)r1265;
      __retval1246 = cast1266;
      struct std___Rb_tree_node_int_* t1267 = __retval1246;
      return t1267;
    }
  unsigned long t1268 = __n1244;
  unsigned long c1269 = 40;
  unsigned long b1270 = t1268 * c1269;
  void* r1271 = operator_new(b1270);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1272 = (struct std___Rb_tree_node_int_*)r1271;
  __retval1246 = cast1272;
  struct std___Rb_tree_node_int_* t1273 = __retval1246;
  return t1273;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1274, unsigned long v1275) {
bb1276:
  struct std__allocator_std___Rb_tree_node_int__* this1277;
  unsigned long __n1278;
  struct std___Rb_tree_node_int_* __retval1279;
  this1277 = v1274;
  __n1278 = v1275;
  struct std__allocator_std___Rb_tree_node_int__* t1280 = this1277;
    _Bool r1281 = std____is_constant_evaluated();
    if (r1281) {
        unsigned long t1282 = __n1278;
        unsigned long c1283 = 40;
        unsigned long ovr1284;
        _Bool ovf1285 = __builtin_mul_overflow(t1282, c1283, &ovr1284);
        __n1278 = ovr1284;
        if (ovf1285) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1286 = __n1278;
      void* r1287 = operator_new(t1286);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1288 = (struct std___Rb_tree_node_int_*)r1287;
      __retval1279 = cast1288;
      struct std___Rb_tree_node_int_* t1289 = __retval1279;
      return t1289;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1290 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1280 + 0);
  unsigned long t1291 = __n1278;
  void* c1292 = ((void*)0);
  struct std___Rb_tree_node_int_* r1293 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1290, t1291, c1292);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1279 = r1293;
  struct std___Rb_tree_node_int_* t1294 = __retval1279;
  return t1294;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1295, unsigned long v1296) {
bb1297:
  struct std__allocator_std___Rb_tree_node_int__* __a1298;
  unsigned long __n1299;
  struct std___Rb_tree_node_int_* __retval1300;
  __a1298 = v1295;
  __n1299 = v1296;
  struct std__allocator_std___Rb_tree_node_int__* t1301 = __a1298;
  unsigned long t1302 = __n1299;
  struct std___Rb_tree_node_int_* r1303 = std__allocator_std___Rb_tree_node_int_____allocate(t1301, t1302);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1300 = r1303;
  struct std___Rb_tree_node_int_* t1304 = __retval1300;
  return t1304;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1305) {
bb1306:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1307;
  struct std___Rb_tree_node_int_* __retval1308;
  this1307 = v1305;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1309 = this1307;
  struct std__allocator_std___Rb_tree_node_int__* r1310 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1309);
  unsigned long c1311 = 1;
  struct std___Rb_tree_node_int_* r1312 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1310, c1311);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1308 = r1312;
  struct std___Rb_tree_node_int_* t1313 = __retval1308;
  return t1313;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1314, int* v1315) {
bb1316:
  int* __location1317;
  int* __args1318;
  int* __retval1319;
  void* __loc1320;
  __location1317 = v1314;
  __args1318 = v1315;
  int* t1321 = __location1317;
  void* cast1322 = (void*)t1321;
  __loc1320 = cast1322;
    void* t1323 = __loc1320;
    int* cast1324 = (int*)t1323;
    int* t1325 = __args1318;
    int t1326 = *t1325;
    *cast1324 = t1326;
    __retval1319 = cast1324;
    int* t1327 = __retval1319;
    return t1327;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1328, int* v1329, int* v1330) {
bb1331:
  struct std__allocator_std___Rb_tree_node_int__* __a1332;
  int* __p1333;
  int* __args1334;
  __a1332 = v1328;
  __p1333 = v1329;
  __args1334 = v1330;
  int* t1335 = __p1333;
  int* t1336 = __args1334;
  int* r1337 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1335, t1336);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1338, struct std___Rb_tree_node_int_* v1339, int* v1340) {
bb1341:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1342;
  struct std___Rb_tree_node_int_* __node1343;
  int* __args1344;
  this1342 = v1338;
  __node1343 = v1339;
  __args1344 = v1340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1345 = this1342;
      struct std__allocator_std___Rb_tree_node_int__* r1347 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1345);
      struct std___Rb_tree_node_int_* t1348 = __node1343;
      int* r1349 = std___Rb_tree_node_int____M_valptr(t1348);
      if (__cir_exc_active) {
        goto cir_try_dispatch1346;
      }
      int* t1350 = __args1344;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1347, r1349, t1350);
    cir_try_dispatch1346: ;
    if (__cir_exc_active) {
    {
      int ca_tok1351 = 0;
      void* ca_exn1352 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1353 = __node1343;
        struct std___Rb_tree_node_int_* t1354 = __node1343;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1345, t1354);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJRiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1355, int* v1356) {
bb1357:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1358;
  int* __args1359;
  struct std___Rb_tree_node_int_* __retval1360;
  struct std___Rb_tree_node_int_* __tmp1361;
  this1358 = v1355;
  __args1359 = v1356;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1362 = this1358;
  struct std___Rb_tree_node_int_* r1363 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1362);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1361 = r1363;
  struct std___Rb_tree_node_int_* t1364 = __tmp1361;
  int* t1365 = __args1359;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1362, t1364, t1365);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1366 = __tmp1361;
  __retval1360 = t1366;
  struct std___Rb_tree_node_int_* t1367 = __retval1360;
  return t1367;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1368, int* v1369) {
bb1370:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1371;
  int* __arg1372;
  struct std___Rb_tree_node_int_* __retval1373;
  this1371 = v1368;
  __arg1372 = v1369;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1374 = this1371;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1375 = t1374->_M_t;
  int* t1376 = __arg1372;
  struct std___Rb_tree_node_int_* r1377 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1375, t1376);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1373 = r1377;
  struct std___Rb_tree_node_int_* t1378 = __retval1373;
  return t1378;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1379, struct std___Rb_tree_node_base* v1380, struct std___Rb_tree_node_base* v1381, struct std___Rb_tree_node_base* v1382) {
bb1383:
  _Bool __insert_left1384;
  struct std___Rb_tree_node_base* __x1385;
  struct std___Rb_tree_node_base* __p1386;
  struct std___Rb_tree_node_base* __header1387;
  __insert_left1384 = v1379;
  __x1385 = v1380;
  __p1386 = v1381;
  __header1387 = v1382;
  _Bool t1388 = __insert_left1384;
  struct std___Rb_tree_node_base* t1389 = __x1385;
  struct std___Rb_tree_node_base* t1390 = __p1386;
  struct std___Rb_tree_node_base* t1391 = __header1387;
  std___Rb_tree_insert_and_rebalance(t1388, t1389, t1390, t1391);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1392, struct std___Rb_tree_node_base* v1393, struct std___Rb_tree_node_base* v1394, int* v1395, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1396) {
bb1397:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1398;
  struct std___Rb_tree_node_base* __x1399;
  struct std___Rb_tree_node_base* __p1400;
  int* __v1401;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1402;
  struct std___Rb_tree_iterator_int_ __retval1403;
  _Bool __insert_left1404;
  struct std___Rb_tree_node_base* __z1405;
  this1398 = v1392;
  __x1399 = v1393;
  __p1400 = v1394;
  __v1401 = v1395;
  __node_gen1402 = v1396;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1406 = this1398;
  struct std___Rb_tree_node_base* t1407 = __x1399;
  _Bool cast1408 = (_Bool)t1407;
  _Bool ternary1409;
  if (cast1408) {
    _Bool c1410 = 1;
    ternary1409 = (_Bool)c1410;
  } else {
    struct std___Rb_tree_node_base* t1411 = __p1400;
    struct std___Rb_tree_node_base* r1412 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1406);
    _Bool c1413 = ((t1411 == r1412)) ? 1 : 0;
    ternary1409 = (_Bool)c1413;
  }
  _Bool ternary1414;
  if (ternary1409) {
    _Bool c1415 = 1;
    ternary1414 = (_Bool)c1415;
  } else {
    struct std___Identity_int_ ref_tmp01416;
    struct std___Rb_tree_key_compare_std__less_int__* base1417 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1406->_M_impl) + 0);
    struct std__less_int_* cast1418 = (struct std__less_int_*)base1417;
    int* t1419 = __v1401;
    int* r1420 = std___Identity_int___operator___int___const(&ref_tmp01416, t1419);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1421 = __p1400;
    int* r1422 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1421);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1423 = std__less_int___operator___int_const___int_const___const(cast1418, r1420, r1422);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1414 = (_Bool)r1423;
  }
  __insert_left1404 = ternary1414;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1424 = __node_gen1402;
  int* t1425 = __v1401;
  struct std___Rb_tree_node_int_* r1426 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1424, t1425);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1427 = (struct std___Rb_tree_node_base*)((char *)r1426 + 0);
  struct std___Rb_tree_node_base* r1428 = std___Rb_tree_node_base___M_base_ptr___const(base1427);
  __z1405 = r1428;
  _Bool t1429 = __insert_left1404;
  struct std___Rb_tree_node_base* t1430 = __z1405;
  struct std___Rb_tree_node_base* t1431 = __p1400;
  struct std___Rb_tree_header* base1432 = (struct std___Rb_tree_header*)((char *)&(t1406->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1429, t1430, t1431, &base1432->_M_header);
  struct std___Rb_tree_header* base1433 = (struct std___Rb_tree_header*)((char *)&(t1406->_M_impl) + 8);
  unsigned long t1434 = base1433->_M_node_count;
  unsigned long u1435 = t1434 + 1;
  base1433->_M_node_count = u1435;
  struct std___Rb_tree_node_base* t1436 = __z1405;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1403, t1436);
  struct std___Rb_tree_iterator_int_ t1437 = __retval1403;
  return t1437;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1438, struct std___Rb_tree_node_base* v1439) {
bb1440:
  struct std___Rb_tree_iterator_int_* this1441;
  struct std___Rb_tree_node_base* __x1442;
  this1441 = v1438;
  __x1442 = v1439;
  struct std___Rb_tree_iterator_int_* t1443 = this1441;
  struct std___Rb_tree_node_base* t1444 = __x1442;
  t1443->_M_node = t1444;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1445, struct std___Rb_tree_const_iterator_int_ v1446, int* v1447, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1448) {
bb1449:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1450;
  struct std___Rb_tree_const_iterator_int_ __position1451;
  int* __v1452;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1453;
  struct std___Rb_tree_iterator_int_ __retval1454;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1455;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01456;
  struct std___Identity_int_ ref_tmp01457;
  this1450 = v1445;
  __position1451 = v1446;
  __v1452 = v1447;
  __node_gen1453 = v1448;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1458 = this1450;
  agg_tmp01456 = __position1451; // copy
  int* t1459 = __v1452;
  int* r1460 = std___Identity_int___operator___int___const(&ref_tmp01457, t1459);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1461 = agg_tmp01456;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1462 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1458, t1461, r1460);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1455 = r1462;
    struct std___Rb_tree_node_base* t1463 = __res1455.second;
    _Bool cast1464 = (_Bool)t1463;
    if (cast1464) {
      struct std___Rb_tree_node_base* t1465 = __res1455.first;
      struct std___Rb_tree_node_base* t1466 = __res1455.second;
      int* t1467 = __v1452;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1468 = __node_gen1453;
      struct std___Rb_tree_iterator_int_ r1469 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1458, t1465, t1466, t1467, t1468);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1454 = r1469;
      struct std___Rb_tree_iterator_int_ t1470 = __retval1454;
      return t1470;
    }
  struct std___Rb_tree_node_base* t1471 = __res1455.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1454, t1471);
  struct std___Rb_tree_iterator_int_ t1472 = __retval1454;
  return t1472;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1473) {
bb1474:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1475;
  struct std___Rb_tree_iterator_int_ __retval1476;
  this1475 = v1473;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1477 = this1475;
  struct std___Rb_tree_node_base* r1478 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1477);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1476, r1478);
  struct std___Rb_tree_iterator_int_ t1479 = __retval1476;
  return t1479;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1480, struct std___Rb_tree_iterator_int_* v1481) {
bb1482:
  struct std___Rb_tree_const_iterator_int_* this1483;
  struct std___Rb_tree_iterator_int_* __it1484;
  this1483 = v1480;
  __it1484 = v1481;
  struct std___Rb_tree_const_iterator_int_* t1485 = this1483;
  struct std___Rb_tree_iterator_int_* t1486 = __it1484;
  struct std___Rb_tree_node_base* t1487 = t1486->_M_node;
  t1485->_M_node = t1487;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1488, int* v1489, int* v1490) {
bb1491:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1492;
  int* __first1493;
  int* __last1494;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1495;
  this1492 = v1488;
  __first1493 = v1489;
  __last1494 = v1490;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1496 = this1492;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1495, t1496);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01497;
    struct std___Rb_tree_iterator_int_ ref_tmp01498;
    struct std___Rb_tree_iterator_int_ agg_tmp11499;
    while (1) {
      int* t1501 = __first1493;
      int* t1502 = __last1494;
      _Bool c1503 = ((t1501 != t1502)) ? 1 : 0;
      if (!c1503) break;
      struct std___Rb_tree_iterator_int_ r1504 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1496);
      ref_tmp01498 = r1504;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01497, &ref_tmp01498);
      int* t1505 = __first1493;
      struct std___Rb_tree_const_iterator_int_ t1506 = agg_tmp01497;
      struct std___Rb_tree_iterator_int_ r1507 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1496, t1506, t1505, &__an1495);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11499 = r1507;
    for_step1500: ;
      int* t1508 = __first1493;
      int c1509 = 1;
      int* ptr1510 = &(t1508)[c1509];
      __first1493 = ptr1510;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1511) {
bb1512:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1513;
  this1513 = v1511;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1514 = this1513;
  struct std__allocator_std___Rb_tree_node_int__* base1515 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1514 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1515);
    struct std___Rb_tree_key_compare_std__less_int__* base1516 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1514 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1516);
    struct std___Rb_tree_header* base1517 = (struct std___Rb_tree_header*)((char *)t1514 + 8);
    std___Rb_tree_header___Rb_tree_header(base1517);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1518) {
bb1519:
  struct std____new_allocator_std___Rb_tree_node_int__* this1520;
  this1520 = v1518;
  struct std____new_allocator_std___Rb_tree_node_int__* t1521 = this1520;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1522) {
bb1523:
  struct std__allocator_std___Rb_tree_node_int__* this1524;
  this1524 = v1522;
  struct std__allocator_std___Rb_tree_node_int__* t1525 = this1524;
  struct std____new_allocator_std___Rb_tree_node_int__* base1526 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1525 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1526);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1527) {
bb1528:
  struct std___Rb_tree_key_compare_std__less_int__* this1529;
  this1529 = v1527;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1530) {
bb1531:
  struct std___Rb_tree_header* this1532;
  this1532 = v1530;
  struct std___Rb_tree_header* t1533 = this1532;
  struct std___Rb_tree_node_base* c1534 = ((void*)0);
  t1533->_M_header._M_parent = c1534;
  t1533->_M_header._M_left = &t1533->_M_header;
  t1533->_M_header._M_right = &t1533->_M_header;
  unsigned long c1535 = 0;
  t1533->_M_node_count = c1535;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1536) {
bb1537:
  struct std___Rb_tree_header* this1538;
  this1538 = v1536;
  struct std___Rb_tree_header* t1539 = this1538;
  unsigned int c1540 = 0;
  t1539->_M_header._M_color = c1540;
  std___Rb_tree_header___M_reset(t1539);
  if (__cir_exc_active) {
    return;
  }
  return;
}

