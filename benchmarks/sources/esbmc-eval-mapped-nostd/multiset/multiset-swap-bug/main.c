extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints2[3] = {20, 25, 32};
int __const_main_myints[3] = {10, 12, 75};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 3";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-swap-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 12";
char _str_4[10] = "*it == 75";
char _str_5[19] = "second.size() == 3";
char _str_6[10] = "*it == 20";
char _str_7[10] = "*it == 25";
char _str_8[10] = "*it == 32";
char _str_9[10] = "*it != 20";
char _str_10[10] = "*it != 25";
char _str_11[19] = "second.size() != 3";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_12[16] = "first contains:";
char _str_13[2] = " ";
char _str_14[18] = "\nsecond contains:";
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
void std__multiset_int__std__less_int___std__allocator_int_____swap(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std__multiset_int__std__less_int___std__allocator_int__* p1);
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
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
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
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt8multisetIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* v0, int* v1, int* v2) {
bb3: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this4;
  int* __first5;
  int* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std__multiset_int__std__less_int___std__allocator_int__* t7 = this4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c8 = {0};
  t7->_M_t = c8;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t7->_M_t);
    int* t9 = __first5;
    int* t10 = __last6;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(&t7->_M_t, t9, t10);
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
bb12: ;
  struct std___Rb_tree_const_iterator_int_* this13;
  this13 = v11;
  struct std___Rb_tree_const_iterator_int_* t14 = this13;
  struct std___Rb_tree_node_base* c15 = ((void*)0);
  t14->_M_node = c15;
  return;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v16) {
bb17: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this18;
  unsigned long __retval19;
  this18 = v16;
  struct std__multiset_int__std__less_int___std__allocator_int__* t20 = this18;
  unsigned long r21 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t20->_M_t);
  __retval19 = r21;
  unsigned long t22 = __retval19;
  return t22;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v23, struct std___Rb_tree_node_base* v24) {
bb25: ;
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
bb31: ;
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

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v38) {
bb39: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this40;
  struct std___Rb_tree_const_iterator_int_ __retval41;
  this40 = v38;
  struct std__multiset_int__std__less_int___std__allocator_int__* t42 = this40;
  struct std___Rb_tree_const_iterator_int_ r43 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t42->_M_t);
  __retval41 = r43;
  struct std___Rb_tree_const_iterator_int_ t44 = __retval41;
  return t44;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v45, struct std___Rb_tree_const_iterator_int_* v46) {
bb47: ;
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
bb56: ;
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
bb66: ;
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
bb75: ;
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
bb83: ;
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
bb101: ;
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
bb114: ;
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
bb127: ;
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
bb135: ;
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
bb147: ;
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
bb159: ;
  struct std__allocator_std___Rb_tree_node_int__* __one160;
  struct std__allocator_std___Rb_tree_node_int__* __two161;
  __one160 = v157;
  __two161 = v158;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeIiEES2_E10_S_on_swapERS3_S5_
void __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_on_swap(struct std__allocator_std___Rb_tree_node_int__* v162, struct std__allocator_std___Rb_tree_node_int__* v163) {
bb164: ;
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
bb171: ;
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

// function: _ZNSt8multisetIiSt4lessIiESaIiEE4swapERS3_
void std__multiset_int__std__less_int___std__allocator_int_____swap(struct std__multiset_int__std__less_int___std__allocator_int__* v222, struct std__multiset_int__std__less_int___std__allocator_int__* v223) {
bb224: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this225;
  struct std__multiset_int__std__less_int___std__allocator_int__* __x226;
  this225 = v222;
  __x226 = v223;
  struct std__multiset_int__std__less_int___std__allocator_int__* t227 = this225;
  struct std__multiset_int__std__less_int___std__allocator_int__* t228 = __x226;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____swap(&t227->_M_t, &t228->_M_t);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v229, int v230) {
bb231: ;
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
bb240: ;
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
bb249: ;
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
bb258: ;
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
bb271: ;
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
bb288: ;
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
bb300: ;
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
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v328, struct std___Rb_tree_const_iterator_int_* v329) {
bb330: ;
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
bb341: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this342;
  struct std___Rb_tree_const_iterator_int_ __retval343;
  this342 = v340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t344 = this342;
  struct std___Rb_tree_node_base* r345 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t344);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval343, r345);
  struct std___Rb_tree_const_iterator_int_ t346 = __retval343;
  return t346;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v347) {
bb348: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this349;
  struct std___Rb_tree_const_iterator_int_ __retval350;
  this349 = v347;
  struct std__multiset_int__std__less_int___std__allocator_int__* t351 = this349;
  struct std___Rb_tree_const_iterator_int_ r352 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t351->_M_t);
  __retval350 = r352;
  struct std___Rb_tree_const_iterator_int_ t353 = __retval350;
  return t353;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v354, void* v355) {
bb356: ;
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
bb365: ;
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
bb372: ;
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
bb382: ;
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
bb403: ;
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
bb414: ;
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

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v435) {
bb436: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this437;
  this437 = v435;
  struct std__multiset_int__std__less_int___std__allocator_int__* t438 = this437;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t438->_M_t);
  }
  return;
}

// function: main
int main() {
bb439: ;
  int __retval440;
  int myints441[3];
  int myints2442[3];
  struct std__multiset_int__std__less_int___std__allocator_int__ first443;
  struct std__multiset_int__std__less_int___std__allocator_int__ second444;
  struct std___Rb_tree_const_iterator_int_ it445;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0446;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0447;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1448;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2449;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1450;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3451;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4452;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5453;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2454;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6455;
  struct std___Rb_tree_const_iterator_int_ agg_tmp7456;
  struct std___Rb_tree_const_iterator_int_ agg_tmp8457;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3458;
  struct std___Rb_tree_const_iterator_int_ agg_tmp9459;
  struct std___Rb_tree_const_iterator_int_ agg_tmp10460;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11461;
  int c462 = 0;
  __retval440 = c462;
  // array copy
  __builtin_memcpy(myints441, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints2442, __const_main_myints2, (unsigned long)3 * sizeof(__const_main_myints2[0]));
  int* cast463 = (int*)&(myints441);
  int* cast464 = (int*)&(myints441);
  int c465 = 3;
  int* ptr466 = &(cast464)[c465];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&first443, cast463, ptr466);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int* cast467 = (int*)&(myints2442);
    int* cast468 = (int*)&(myints2442);
    int c469 = 3;
    int* ptr470 = &(cast468)[c469];
    std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&second444, cast467, ptr470);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it445);
      unsigned long r471 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&first443);
      unsigned long c472 = 3;
      _Bool c473 = ((r471 == c472)) ? 1 : 0;
      if (c473) {
      } else {
        char* cast474 = (char*)&(_str);
        char* c475 = (char*)_str_1;
        unsigned int c476 = 22;
        char* cast477 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast474, c475, c476, cast477);
      }
      struct std___Rb_tree_const_iterator_int_ r478 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&first443);
      ref_tmp0446 = r478;
      struct std___Rb_tree_const_iterator_int_* r479 = std___Rb_tree_const_iterator_int___operator_(&it445, &ref_tmp0446);
      int* r480 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t481 = *r480;
      int c482 = 10;
      _Bool c483 = ((t481 == c482)) ? 1 : 0;
      if (c483) {
      } else {
        char* cast484 = (char*)&(_str_2);
        char* c485 = (char*)_str_1;
        unsigned int c486 = 24;
        char* cast487 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast484, c485, c486, cast487);
      }
      int c488 = 0;
      struct std___Rb_tree_const_iterator_int_ r489 = std___Rb_tree_const_iterator_int___operator__(&it445, c488);
      agg_tmp0447 = r489;
      int* r490 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t491 = *r490;
      int c492 = 12;
      _Bool c493 = ((t491 == c492)) ? 1 : 0;
      if (c493) {
      } else {
        char* cast494 = (char*)&(_str_3);
        char* c495 = (char*)_str_1;
        unsigned int c496 = 26;
        char* cast497 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast494, c495, c496, cast497);
      }
      int c498 = 0;
      struct std___Rb_tree_const_iterator_int_ r499 = std___Rb_tree_const_iterator_int___operator__(&it445, c498);
      agg_tmp1448 = r499;
      int* r500 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t501 = *r500;
      int c502 = 75;
      _Bool c503 = ((t501 == c502)) ? 1 : 0;
      if (c503) {
      } else {
        char* cast504 = (char*)&(_str_4);
        char* c505 = (char*)_str_1;
        unsigned int c506 = 28;
        char* cast507 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast504, c505, c506, cast507);
      }
      int c508 = 0;
      struct std___Rb_tree_const_iterator_int_ r509 = std___Rb_tree_const_iterator_int___operator__(&it445, c508);
      agg_tmp2449 = r509;
      unsigned long r510 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&second444);
      unsigned long c511 = 3;
      _Bool c512 = ((r510 == c511)) ? 1 : 0;
      if (c512) {
      } else {
        char* cast513 = (char*)&(_str_5);
        char* c514 = (char*)_str_1;
        unsigned int c515 = 30;
        char* cast516 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast513, c514, c515, cast516);
      }
      struct std___Rb_tree_const_iterator_int_ r517 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&second444);
      ref_tmp1450 = r517;
      struct std___Rb_tree_const_iterator_int_* r518 = std___Rb_tree_const_iterator_int___operator_(&it445, &ref_tmp1450);
      int* r519 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t520 = *r519;
      int c521 = 20;
      _Bool c522 = ((t520 == c521)) ? 1 : 0;
      if (c522) {
      } else {
        char* cast523 = (char*)&(_str_6);
        char* c524 = (char*)_str_1;
        unsigned int c525 = 32;
        char* cast526 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast523, c524, c525, cast526);
      }
      int c527 = 0;
      struct std___Rb_tree_const_iterator_int_ r528 = std___Rb_tree_const_iterator_int___operator__(&it445, c527);
      agg_tmp3451 = r528;
      int* r529 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t530 = *r529;
      int c531 = 25;
      _Bool c532 = ((t530 == c531)) ? 1 : 0;
      if (c532) {
      } else {
        char* cast533 = (char*)&(_str_7);
        char* c534 = (char*)_str_1;
        unsigned int c535 = 34;
        char* cast536 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast533, c534, c535, cast536);
      }
      int c537 = 0;
      struct std___Rb_tree_const_iterator_int_ r538 = std___Rb_tree_const_iterator_int___operator__(&it445, c537);
      agg_tmp4452 = r538;
      int* r539 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t540 = *r539;
      int c541 = 32;
      _Bool c542 = ((t540 == c541)) ? 1 : 0;
      if (c542) {
      } else {
        char* cast543 = (char*)&(_str_8);
        char* c544 = (char*)_str_1;
        unsigned int c545 = 36;
        char* cast546 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast543, c544, c545, cast546);
      }
      int c547 = 0;
      struct std___Rb_tree_const_iterator_int_ r548 = std___Rb_tree_const_iterator_int___operator__(&it445, c547);
      agg_tmp5453 = r548;
      std__multiset_int__std__less_int___std__allocator_int_____swap(&first443, &second444);
      unsigned long r549 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&first443);
      unsigned long c550 = 3;
      _Bool c551 = ((r549 == c550)) ? 1 : 0;
      if (c551) {
      } else {
        char* cast552 = (char*)&(_str);
        char* c553 = (char*)_str_1;
        unsigned int c554 = 40;
        char* cast555 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast552, c553, c554, cast555);
      }
      struct std___Rb_tree_const_iterator_int_ r556 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&first443);
      ref_tmp2454 = r556;
      struct std___Rb_tree_const_iterator_int_* r557 = std___Rb_tree_const_iterator_int___operator_(&it445, &ref_tmp2454);
      int* r558 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t559 = *r558;
      int c560 = 20;
      _Bool c561 = ((t559 != c560)) ? 1 : 0;
      if (c561) {
      } else {
        char* cast562 = (char*)&(_str_9);
        char* c563 = (char*)_str_1;
        unsigned int c564 = 42;
        char* cast565 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast562, c563, c564, cast565);
      }
      int c566 = 0;
      struct std___Rb_tree_const_iterator_int_ r567 = std___Rb_tree_const_iterator_int___operator__(&it445, c566);
      agg_tmp6455 = r567;
      int* r568 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t569 = *r568;
      int c570 = 25;
      _Bool c571 = ((t569 != c570)) ? 1 : 0;
      if (c571) {
      } else {
        char* cast572 = (char*)&(_str_10);
        char* c573 = (char*)_str_1;
        unsigned int c574 = 44;
        char* cast575 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast572, c573, c574, cast575);
      }
      int c576 = 0;
      struct std___Rb_tree_const_iterator_int_ r577 = std___Rb_tree_const_iterator_int___operator__(&it445, c576);
      agg_tmp7456 = r577;
      int* r578 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t579 = *r578;
      int c580 = 32;
      _Bool c581 = ((t579 == c580)) ? 1 : 0;
      if (c581) {
      } else {
        char* cast582 = (char*)&(_str_8);
        char* c583 = (char*)_str_1;
        unsigned int c584 = 46;
        char* cast585 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast582, c583, c584, cast585);
      }
      int c586 = 0;
      struct std___Rb_tree_const_iterator_int_ r587 = std___Rb_tree_const_iterator_int___operator__(&it445, c586);
      agg_tmp8457 = r587;
      unsigned long r588 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&second444);
      unsigned long c589 = 3;
      _Bool c590 = ((r588 != c589)) ? 1 : 0;
      if (c590) {
      } else {
        char* cast591 = (char*)&(_str_11);
        char* c592 = (char*)_str_1;
        unsigned int c593 = 48;
        char* cast594 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast591, c592, c593, cast594);
      }
      struct std___Rb_tree_const_iterator_int_ r595 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&second444);
      ref_tmp3458 = r595;
      struct std___Rb_tree_const_iterator_int_* r596 = std___Rb_tree_const_iterator_int___operator_(&it445, &ref_tmp3458);
      int* r597 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t598 = *r597;
      int c599 = 10;
      _Bool c600 = ((t598 == c599)) ? 1 : 0;
      if (c600) {
      } else {
        char* cast601 = (char*)&(_str_2);
        char* c602 = (char*)_str_1;
        unsigned int c603 = 50;
        char* cast604 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast601, c602, c603, cast604);
      }
      int c605 = 0;
      struct std___Rb_tree_const_iterator_int_ r606 = std___Rb_tree_const_iterator_int___operator__(&it445, c605);
      agg_tmp9459 = r606;
      int* r607 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t608 = *r607;
      int c609 = 12;
      _Bool c610 = ((t608 == c609)) ? 1 : 0;
      if (c610) {
      } else {
        char* cast611 = (char*)&(_str_3);
        char* c612 = (char*)_str_1;
        unsigned int c613 = 52;
        char* cast614 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast611, c612, c613, cast614);
      }
      int c615 = 0;
      struct std___Rb_tree_const_iterator_int_ r616 = std___Rb_tree_const_iterator_int___operator__(&it445, c615);
      agg_tmp10460 = r616;
      int* r617 = std___Rb_tree_const_iterator_int___operator____const(&it445);
      int t618 = *r617;
      int c619 = 75;
      _Bool c620 = ((t618 == c619)) ? 1 : 0;
      if (c620) {
      } else {
        char* cast621 = (char*)&(_str_4);
        char* c622 = (char*)_str_1;
        unsigned int c623 = 54;
        char* cast624 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast621, c622, c623, cast624);
      }
      int c625 = 0;
      struct std___Rb_tree_const_iterator_int_ r626 = std___Rb_tree_const_iterator_int___operator__(&it445, c625);
      agg_tmp11461 = r626;
      char* cast627 = (char*)&(_str_12);
      struct std__basic_ostream_char__std__char_traits_char__* r628 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast627);
      if (__cir_exc_active) {
        {
          std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
        }
        {
          std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        struct std___Rb_tree_const_iterator_int_ ref_tmp4629;
        struct std___Rb_tree_const_iterator_int_ ref_tmp5630;
        struct std___Rb_tree_const_iterator_int_ agg_tmp12631;
        struct std___Rb_tree_const_iterator_int_ r632 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&first443);
        ref_tmp4629 = r632;
        struct std___Rb_tree_const_iterator_int_* r633 = std___Rb_tree_const_iterator_int___operator_(&it445, &ref_tmp4629);
        while (1) {
          struct std___Rb_tree_const_iterator_int_ r635 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&first443);
          ref_tmp5630 = r635;
          _Bool r636 = std__operator__(&it445, &ref_tmp5630);
          _Bool u637 = !r636;
          if (!u637) break;
          char* cast638 = (char*)&(_str_13);
          struct std__basic_ostream_char__std__char_traits_char__* r639 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast638);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
            }
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r640 = std___Rb_tree_const_iterator_int___operator____const(&it445);
          int t641 = *r640;
          struct std__basic_ostream_char__std__char_traits_char__* r642 = std__ostream__operator__(r639, t641);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
            }
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step634: ;
          int c643 = 0;
          struct std___Rb_tree_const_iterator_int_ r644 = std___Rb_tree_const_iterator_int___operator__(&it445, c643);
          agg_tmp12631 = r644;
        }
      char* cast645 = (char*)&(_str_14);
      struct std__basic_ostream_char__std__char_traits_char__* r646 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast645);
      if (__cir_exc_active) {
        {
          std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
        }
        {
          std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        struct std___Rb_tree_const_iterator_int_ ref_tmp6647;
        struct std___Rb_tree_const_iterator_int_ ref_tmp7648;
        struct std___Rb_tree_const_iterator_int_ agg_tmp13649;
        struct std___Rb_tree_const_iterator_int_ r650 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&second444);
        ref_tmp6647 = r650;
        struct std___Rb_tree_const_iterator_int_* r651 = std___Rb_tree_const_iterator_int___operator_(&it445, &ref_tmp6647);
        while (1) {
          struct std___Rb_tree_const_iterator_int_ r653 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&second444);
          ref_tmp7648 = r653;
          _Bool r654 = std__operator__(&it445, &ref_tmp7648);
          _Bool u655 = !r654;
          if (!u655) break;
          char* cast656 = (char*)&(_str_13);
          struct std__basic_ostream_char__std__char_traits_char__* r657 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast656);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
            }
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r658 = std___Rb_tree_const_iterator_int___operator____const(&it445);
          int t659 = *r658;
          struct std__basic_ostream_char__std__char_traits_char__* r660 = std__ostream__operator__(r657, t659);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
            }
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step652: ;
          int c661 = 0;
          struct std___Rb_tree_const_iterator_int_ r662 = std___Rb_tree_const_iterator_int___operator__(&it445, c661);
          agg_tmp13649 = r662;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r663 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
        }
        {
          std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c664 = 0;
      __retval440 = c664;
      int t665 = __retval440;
      int ret_val666 = t665;
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&second444);
      }
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&first443);
      }
      return ret_val666;
  int t667 = __retval440;
  return t667;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v668) {
bb669: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this670;
  this670 = v668;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t671 = this670;
    struct std___Rb_tree_node_int_* r672 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t671);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t671, r672);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t671->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t671->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v673) {
bb674: ;
  struct std___Rb_tree_node_int_* this675;
  struct std___Rb_tree_node_int_* __retval676;
  this675 = v673;
  struct std___Rb_tree_node_int_* t677 = this675;
  __retval676 = t677;
  struct std___Rb_tree_node_int_* t678 = __retval676;
  return t678;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v679) {
bb680: ;
  struct std___Rb_tree_node_int_* __x681;
  struct std___Rb_tree_node_int_* __retval682;
  __x681 = v679;
  struct std___Rb_tree_node_int_* t683 = __x681;
  struct std___Rb_tree_node_base* base684 = (struct std___Rb_tree_node_base*)((char *)t683 + 0);
  struct std___Rb_tree_node_base* t685 = base684->_M_right;
  _Bool cast686 = (_Bool)t685;
  struct std___Rb_tree_node_int_* ternary687;
  if (cast686) {
    struct std___Rb_tree_node_int_* t688 = __x681;
    struct std___Rb_tree_node_base* base689 = (struct std___Rb_tree_node_base*)((char *)t688 + 0);
    struct std___Rb_tree_node_base* t690 = base689->_M_right;
    struct std___Rb_tree_node_int_* derived691 = (struct std___Rb_tree_node_int_*)((char *)t690 - 0);
    struct std___Rb_tree_node_int_* r692 = std___Rb_tree_node_int____M_node_ptr(derived691);
    ternary687 = (struct std___Rb_tree_node_int_*)r692;
  } else {
    struct std___Rb_tree_node_int_* c693 = ((void*)0);
    ternary687 = (struct std___Rb_tree_node_int_*)c693;
  }
  __retval682 = ternary687;
  struct std___Rb_tree_node_int_* t694 = __retval682;
  return t694;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v695) {
bb696: ;
  struct std___Rb_tree_node_int_* __x697;
  struct std___Rb_tree_node_int_* __retval698;
  __x697 = v695;
  struct std___Rb_tree_node_int_* t699 = __x697;
  struct std___Rb_tree_node_base* base700 = (struct std___Rb_tree_node_base*)((char *)t699 + 0);
  struct std___Rb_tree_node_base* t701 = base700->_M_left;
  _Bool cast702 = (_Bool)t701;
  struct std___Rb_tree_node_int_* ternary703;
  if (cast702) {
    struct std___Rb_tree_node_int_* t704 = __x697;
    struct std___Rb_tree_node_base* base705 = (struct std___Rb_tree_node_base*)((char *)t704 + 0);
    struct std___Rb_tree_node_base* t706 = base705->_M_left;
    struct std___Rb_tree_node_int_* derived707 = (struct std___Rb_tree_node_int_*)((char *)t706 - 0);
    struct std___Rb_tree_node_int_* r708 = std___Rb_tree_node_int____M_node_ptr(derived707);
    ternary703 = (struct std___Rb_tree_node_int_*)r708;
  } else {
    struct std___Rb_tree_node_int_* c709 = ((void*)0);
    ternary703 = (struct std___Rb_tree_node_int_*)c709;
  }
  __retval698 = ternary703;
  struct std___Rb_tree_node_int_* t710 = __retval698;
  return t710;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v711) {
bb712: ;
  int* __location713;
  __location713 = v711;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v714, int* v715) {
bb716: ;
  struct std__allocator_std___Rb_tree_node_int__* __a717;
  int* __p718;
  __a717 = v714;
  __p718 = v715;
  int* t719 = __p718;
  void_std__destroy_at_int_(t719);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v720) {
bb721: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this722;
  struct std__allocator_std___Rb_tree_node_int__* __retval723;
  this722 = v720;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t724 = this722;
  struct std__allocator_std___Rb_tree_node_int__* base725 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t724->_M_impl) + 0);
  __retval723 = base725;
  struct std__allocator_std___Rb_tree_node_int__* t726 = __retval723;
  return t726;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v727) {
bb728: ;
  struct __gnu_cxx____aligned_membuf_int_* this729;
  void* __retval730;
  this729 = v727;
  struct __gnu_cxx____aligned_membuf_int_* t731 = this729;
  void* cast732 = (void*)&(t731->_M_storage);
  __retval730 = cast732;
  void* t733 = __retval730;
  return t733;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v734) {
bb735: ;
  struct __gnu_cxx____aligned_membuf_int_* this736;
  int* __retval737;
  this736 = v734;
  struct __gnu_cxx____aligned_membuf_int_* t738 = this736;
  void* r739 = __gnu_cxx____aligned_membuf_int____M_addr(t738);
  int* cast740 = (int*)r739;
  __retval737 = cast740;
  int* t741 = __retval737;
  return t741;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v742) {
bb743: ;
  struct std___Rb_tree_node_int_* this744;
  int* __retval745;
  this744 = v742;
  struct std___Rb_tree_node_int_* t746 = this744;
  int* r747 = __gnu_cxx____aligned_membuf_int____M_ptr(&t746->_M_storage);
  __retval745 = r747;
  int* t748 = __retval745;
  return t748;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v749, struct std___Rb_tree_node_int_* v750) {
bb751: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this752;
  struct std___Rb_tree_node_int_* __p753;
  this752 = v749;
  __p753 = v750;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t754 = this752;
  struct std__allocator_std___Rb_tree_node_int__* r755 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t754);
  struct std___Rb_tree_node_int_* t756 = __p753;
  int* r757 = std___Rb_tree_node_int____M_valptr(t756);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r755, r757);
  struct std___Rb_tree_node_int_* t758 = __p753;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb759: ;
  _Bool __retval760;
    _Bool c761 = 0;
    __retval760 = c761;
    _Bool t762 = __retval760;
    return t762;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v763, struct std___Rb_tree_node_int_* v764, unsigned long v765) {
bb766: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this767;
  struct std___Rb_tree_node_int_* __p768;
  unsigned long __n769;
  this767 = v763;
  __p768 = v764;
  __n769 = v765;
  struct std____new_allocator_std___Rb_tree_node_int__* t770 = this767;
    unsigned long c771 = 8;
    unsigned long c772 = 16;
    _Bool c773 = ((c771 > c772)) ? 1 : 0;
    if (c773) {
      struct std___Rb_tree_node_int_* t774 = __p768;
      void* cast775 = (void*)t774;
      unsigned long t776 = __n769;
      unsigned long c777 = 40;
      unsigned long b778 = t776 * c777;
      unsigned long c779 = 8;
      operator_delete_3(cast775, b778, c779);
      return;
    }
  struct std___Rb_tree_node_int_* t780 = __p768;
  void* cast781 = (void*)t780;
  unsigned long t782 = __n769;
  unsigned long c783 = 40;
  unsigned long b784 = t782 * c783;
  operator_delete_2(cast781, b784);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v785, struct std___Rb_tree_node_int_* v786, unsigned long v787) {
bb788: ;
  struct std__allocator_std___Rb_tree_node_int__* this789;
  struct std___Rb_tree_node_int_* __p790;
  unsigned long __n791;
  this789 = v785;
  __p790 = v786;
  __n791 = v787;
  struct std__allocator_std___Rb_tree_node_int__* t792 = this789;
    _Bool r793 = std____is_constant_evaluated();
    if (r793) {
      struct std___Rb_tree_node_int_* t794 = __p790;
      void* cast795 = (void*)t794;
      operator_delete(cast795);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base796 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t792 + 0);
  struct std___Rb_tree_node_int_* t797 = __p790;
  unsigned long t798 = __n791;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base796, t797, t798);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v799, struct std___Rb_tree_node_int_* v800, unsigned long v801) {
bb802: ;
  struct std__allocator_std___Rb_tree_node_int__* __a803;
  struct std___Rb_tree_node_int_* __p804;
  unsigned long __n805;
  __a803 = v799;
  __p804 = v800;
  __n805 = v801;
  struct std__allocator_std___Rb_tree_node_int__* t806 = __a803;
  struct std___Rb_tree_node_int_* t807 = __p804;
  unsigned long t808 = __n805;
  std__allocator_std___Rb_tree_node_int_____deallocate(t806, t807, t808);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v809, struct std___Rb_tree_node_int_* v810) {
bb811: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this812;
  struct std___Rb_tree_node_int_* __p813;
  this812 = v809;
  __p813 = v810;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t814 = this812;
  struct std__allocator_std___Rb_tree_node_int__* r815 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t814);
  struct std___Rb_tree_node_int_* t816 = __p813;
  unsigned long c817 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r815, t816, c817);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v818, struct std___Rb_tree_node_int_* v819) {
bb820: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this821;
  struct std___Rb_tree_node_int_* __p822;
  this821 = v818;
  __p822 = v819;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t823 = this821;
  struct std___Rb_tree_node_int_* t824 = __p822;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t823, t824);
  struct std___Rb_tree_node_int_* t825 = __p822;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t823, t825);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v826, struct std___Rb_tree_node_int_* v827) {
bb828: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this829;
  struct std___Rb_tree_node_int_* __x830;
  this829 = v826;
  __x830 = v827;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t831 = this829;
    while (1) {
      struct std___Rb_tree_node_int_* t832 = __x830;
      _Bool cast833 = (_Bool)t832;
      if (!cast833) break;
        struct std___Rb_tree_node_int_* __y834;
        struct std___Rb_tree_node_int_* t835 = __x830;
        struct std___Rb_tree_node_int_* r836 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t835);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t831, r836);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t837 = __x830;
        struct std___Rb_tree_node_int_* r838 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t837);
        if (__cir_exc_active) {
          return;
        }
        __y834 = r838;
        struct std___Rb_tree_node_int_* t839 = __x830;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t831, t839);
        struct std___Rb_tree_node_int_* t840 = __y834;
        __x830 = t840;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v841) {
bb842: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this843;
  struct std___Rb_tree_node_int_* __retval844;
  struct std___Rb_tree_node_base* __begin845;
  this843 = v841;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t846 = this843;
  struct std___Rb_tree_header* base847 = (struct std___Rb_tree_header*)((char *)&(t846->_M_impl) + 8);
  struct std___Rb_tree_node_base* t848 = base847->_M_header._M_parent;
  __begin845 = t848;
  struct std___Rb_tree_node_base* t849 = __begin845;
  _Bool cast850 = (_Bool)t849;
  struct std___Rb_tree_node_int_* ternary851;
  if (cast850) {
    struct std___Rb_tree_node_base* t852 = __begin845;
    struct std___Rb_tree_node_int_* derived853 = (struct std___Rb_tree_node_int_*)((char *)t852 - 0);
    struct std___Rb_tree_node_int_* r854 = std___Rb_tree_node_int____M_node_ptr(derived853);
    ternary851 = (struct std___Rb_tree_node_int_*)r854;
  } else {
    struct std___Rb_tree_node_int_* c855 = ((void*)0);
    ternary851 = (struct std___Rb_tree_node_int_*)c855;
  }
  __retval844 = ternary851;
  struct std___Rb_tree_node_int_* t856 = __retval844;
  return t856;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v857) {
bb858: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this859;
  this859 = v857;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t860 = this859;
  {
    struct std__allocator_std___Rb_tree_node_int__* base861 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t860 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base861);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v862) {
bb863: ;
  struct std__allocator_std___Rb_tree_node_int__* this864;
  this864 = v862;
  struct std__allocator_std___Rb_tree_node_int__* t865 = this864;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v866) {
bb867: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this868;
  this868 = v866;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t869 = this868;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t869->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v870, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v871) {
bb872: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this873;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t874;
  this873 = v870;
  __t874 = v871;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t875 = this873;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t876 = __t874;
  t875->_M_t = t876;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v877) {
bb878: ;
  struct std___Rb_tree_node_base* this879;
  struct std___Rb_tree_node_base* __retval880;
  this879 = v877;
  struct std___Rb_tree_node_base* t881 = this879;
  __retval880 = t881;
  struct std___Rb_tree_node_base* t882 = __retval880;
  return t882;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v883) {
bb884: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this885;
  struct std___Rb_tree_node_base* __retval886;
  this885 = v883;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t887 = this885;
  struct std___Rb_tree_header* base888 = (struct std___Rb_tree_header*)((char *)&(t887->_M_impl) + 8);
  struct std___Rb_tree_node_base* r889 = std___Rb_tree_node_base___M_base_ptr___const(&base888->_M_header);
  __retval886 = r889;
  struct std___Rb_tree_node_base* t890 = __retval886;
  return t890;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v891) {
bb892: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this893;
  unsigned long __retval894;
  this893 = v891;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t895 = this893;
  struct std___Rb_tree_header* base896 = (struct std___Rb_tree_header*)((char *)&(t895->_M_impl) + 8);
  unsigned long t897 = base896->_M_node_count;
  __retval894 = t897;
  unsigned long t898 = __retval894;
  return t898;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v899, int* v900, int* v901) {
bb902: ;
  struct std__less_int_* this903;
  int* __x904;
  int* __y905;
  _Bool __retval906;
  this903 = v899;
  __x904 = v900;
  __y905 = v901;
  struct std__less_int_* t907 = this903;
  int* t908 = __x904;
  int t909 = *t908;
  int* t910 = __y905;
  int t911 = *t910;
  _Bool c912 = ((t909 < t911)) ? 1 : 0;
  __retval906 = c912;
  _Bool t913 = __retval906;
  return t913;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v914, int* v915) {
bb916: ;
  struct std___Identity_int_* this917;
  int* __x918;
  int* __retval919;
  this917 = v914;
  __x918 = v915;
  struct std___Identity_int_* t920 = this917;
  int* t921 = __x918;
  __retval919 = t921;
  int* t922 = __retval919;
  return t922;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v923) {
bb924: ;
  struct __gnu_cxx____aligned_membuf_int_* this925;
  void* __retval926;
  this925 = v923;
  struct __gnu_cxx____aligned_membuf_int_* t927 = this925;
  void* cast928 = (void*)&(t927->_M_storage);
  __retval926 = cast928;
  void* t929 = __retval926;
  return t929;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v930) {
bb931: ;
  struct __gnu_cxx____aligned_membuf_int_* this932;
  int* __retval933;
  this932 = v930;
  struct __gnu_cxx____aligned_membuf_int_* t934 = this932;
  void* r935 = __gnu_cxx____aligned_membuf_int____M_addr___const(t934);
  int* cast936 = (int*)r935;
  __retval933 = cast936;
  int* t937 = __retval933;
  return t937;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v938) {
bb939: ;
  struct std___Rb_tree_node_int_* this940;
  int* __retval941;
  this940 = v938;
  struct std___Rb_tree_node_int_* t942 = this940;
  int* r943 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t942->_M_storage);
  __retval941 = r943;
  int* t944 = __retval941;
  return t944;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v945) {
bb946: ;
  struct std___Rb_tree_node_int_* __node947;
  int* __retval948;
  struct std___Identity_int_ ref_tmp0949;
  __node947 = v945;
  struct std___Rb_tree_node_int_* t950 = __node947;
  int* r951 = std___Rb_tree_node_int____M_valptr___const(t950);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r952 = std___Identity_int___operator___int_const___const(&ref_tmp0949, r951);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval948 = r952;
  int* t953 = __retval948;
  return t953;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v954) {
bb955: ;
  struct std___Rb_tree_node_base* __x956;
  int* __retval957;
  __x956 = v954;
  struct std___Rb_tree_node_base* t958 = __x956;
  struct std___Rb_tree_node_int_* derived959 = (struct std___Rb_tree_node_int_*)((char *)t958 - 0);
  int* r960 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived959);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval957 = r960;
  int* t961 = __retval957;
  return t961;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v962) {
bb963: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this964;
  struct std___Rb_tree_node_base** __retval965;
  this964 = v962;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t966 = this964;
  struct std___Rb_tree_header* base967 = (struct std___Rb_tree_header*)((char *)&(t966->_M_impl) + 8);
  __retval965 = &base967->_M_header._M_right;
  struct std___Rb_tree_node_base** t968 = __retval965;
  return t968;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v969, struct std___Rb_tree_node_base** v970, struct std___Rb_tree_node_base** v971) {
bb972: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this973;
  struct std___Rb_tree_node_base** __x974;
  struct std___Rb_tree_node_base** __y975;
  this973 = v969;
  __x974 = v970;
  __y975 = v971;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t976 = this973;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base977 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t976 + 0);
  struct std___Rb_tree_node_base** t978 = __x974;
  struct std___Rb_tree_node_base* t979 = *t978;
  t976->first = t979;
  struct std___Rb_tree_node_base** t980 = __y975;
  struct std___Rb_tree_node_base* t981 = *t980;
  t976->second = t981;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v982) {
bb983: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this984;
  struct std___Rb_tree_node_base* __retval985;
  this984 = v982;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t986 = this984;
  struct std___Rb_tree_header* base987 = (struct std___Rb_tree_header*)((char *)&(t986->_M_impl) + 8);
  struct std___Rb_tree_node_base* t988 = base987->_M_header._M_parent;
  __retval985 = t988;
  struct std___Rb_tree_node_base* t989 = __retval985;
  return t989;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v990) {
bb991: ;
  struct std___Rb_tree_node_base* __x992;
  struct std___Rb_tree_node_base* __retval993;
  __x992 = v990;
  struct std___Rb_tree_node_base* t994 = __x992;
  struct std___Rb_tree_node_base* t995 = t994->_M_left;
  __retval993 = t995;
  struct std___Rb_tree_node_base* t996 = __retval993;
  return t996;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v997, int* v998) {
bb999: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1000;
  int* __k1001;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1002;
  struct std___Rb_tree_node_base* __x1003;
  struct std___Rb_tree_node_base* __y1004;
  this1000 = v997;
  __k1001 = v998;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1005 = this1000;
  struct std___Rb_tree_node_base* r1006 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1005);
  __x1003 = r1006;
  struct std___Rb_tree_node_base* r1007 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1005);
  __y1004 = r1007;
    while (1) {
      struct std___Rb_tree_node_base* t1008 = __x1003;
      _Bool cast1009 = (_Bool)t1008;
      if (!cast1009) break;
        struct std___Rb_tree_node_base* t1010 = __x1003;
        __y1004 = t1010;
        struct std___Rb_tree_key_compare_std__less_int__* base1011 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1005->_M_impl) + 0);
        struct std__less_int_* cast1012 = (struct std__less_int_*)base1011;
        int* t1013 = __k1001;
        struct std___Rb_tree_node_base* t1014 = __x1003;
        int* r1015 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1014);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1016 = std__less_int___operator___int_const___int_const___const(cast1012, t1013, r1015);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary1017;
        if (r1016) {
          struct std___Rb_tree_node_base* t1018 = __x1003;
          struct std___Rb_tree_node_base* r1019 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1018);
          ternary1017 = (struct std___Rb_tree_node_base*)r1019;
        } else {
          struct std___Rb_tree_node_base* t1020 = __x1003;
          struct std___Rb_tree_node_base* r1021 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1020);
          ternary1017 = (struct std___Rb_tree_node_base*)r1021;
        }
        __x1003 = ternary1017;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1002, &__x1003, &__y1004);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1022 = __retval1002;
  return t1022;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1023, struct std___Rb_tree_node_base* v1024) {
bb1025: ;
  struct std___Rb_tree_iterator_int_* this1026;
  struct std___Rb_tree_node_base* __x1027;
  this1026 = v1023;
  __x1027 = v1024;
  struct std___Rb_tree_iterator_int_* t1028 = this1026;
  struct std___Rb_tree_node_base* t1029 = __x1027;
  t1028->_M_node = t1029;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1030) {
bb1031: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1032;
  struct std___Rb_tree_node_base** __retval1033;
  this1032 = v1030;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1034 = this1032;
  struct std___Rb_tree_header* base1035 = (struct std___Rb_tree_header*)((char *)&(t1034->_M_impl) + 8);
  __retval1033 = &base1035->_M_header._M_left;
  struct std___Rb_tree_node_base** t1036 = __retval1033;
  return t1036;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1037, struct std___Rb_tree_node_base** v1038, struct std___Rb_tree_node_base** v1039) {
bb1040: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1041;
  struct std___Rb_tree_node_base** __x1042;
  struct std___Rb_tree_node_base** __y1043;
  this1041 = v1037;
  __x1042 = v1038;
  __y1043 = v1039;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1044 = this1041;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1045 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1044 + 0);
  struct std___Rb_tree_node_base** t1046 = __x1042;
  struct std___Rb_tree_node_base* t1047 = *t1046;
  t1044->first = t1047;
  struct std___Rb_tree_node_base** t1048 = __y1043;
  struct std___Rb_tree_node_base* t1049 = *t1048;
  t1044->second = t1049;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v1050) {
bb1051: ;
  struct std___Rb_tree_iterator_int_* this1052;
  struct std___Rb_tree_iterator_int_* __retval1053;
  this1052 = v1050;
  struct std___Rb_tree_iterator_int_* t1054 = this1052;
  struct std___Rb_tree_node_base* t1055 = t1054->_M_node;
  struct std___Rb_tree_node_base* r1056 = std___Rb_tree_decrement(t1055);
  t1054->_M_node = r1056;
  __retval1053 = t1054;
  struct std___Rb_tree_iterator_int_* t1057 = __retval1053;
  return t1057;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v1058) {
bb1059: ;
  struct std___Rb_tree_node_base* __x1060;
  struct std___Rb_tree_node_base* __retval1061;
  __x1060 = v1058;
  struct std___Rb_tree_node_base* t1062 = __x1060;
  struct std___Rb_tree_node_base* t1063 = t1062->_M_right;
  __retval1061 = t1063;
  struct std___Rb_tree_node_base* t1064 = __retval1061;
  return t1064;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v1065) {
bb1066: ;
  struct std___Rb_tree_iterator_int_* this1067;
  struct std___Rb_tree_iterator_int_* __retval1068;
  this1067 = v1065;
  struct std___Rb_tree_iterator_int_* t1069 = this1067;
  struct std___Rb_tree_node_base* t1070 = t1069->_M_node;
  struct std___Rb_tree_node_base* r1071 = std___Rb_tree_increment(t1070);
  t1069->_M_node = r1071;
  __retval1068 = t1069;
  struct std___Rb_tree_iterator_int_* t1072 = __retval1068;
  return t1072;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1073, struct std___Rb_tree_node_base** v1074, struct std___Rb_tree_node_base** v1075) {
bb1076: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1077;
  struct std___Rb_tree_node_base** __x1078;
  struct std___Rb_tree_node_base** __y1079;
  this1077 = v1073;
  __x1078 = v1074;
  __y1079 = v1075;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1080 = this1077;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1081 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1080 + 0);
  struct std___Rb_tree_node_base** t1082 = __x1078;
  struct std___Rb_tree_node_base* t1083 = *t1082;
  t1080->first = t1083;
  struct std___Rb_tree_node_base** t1084 = __y1079;
  struct std___Rb_tree_node_base* t1085 = *t1084;
  t1080->second = t1085;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1086, struct std___Rb_tree_const_iterator_int_ v1087, int* v1088) {
bb1089: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1090;
  struct std___Rb_tree_const_iterator_int_ __position1091;
  int* __k1092;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1093;
  this1090 = v1086;
  __position1091 = v1087;
  __k1092 = v1088;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1094 = this1090;
    struct std___Rb_tree_node_base* t1095 = __position1091._M_node;
    struct std___Rb_tree_node_base* r1096 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1094);
    _Bool c1097 = ((t1095 == r1096)) ? 1 : 0;
    if (c1097) {
        unsigned long r1098 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1094);
        unsigned long c1099 = 0;
        _Bool c1100 = ((r1098 > c1099)) ? 1 : 0;
        _Bool ternary1101;
        if (c1100) {
          struct std___Rb_tree_key_compare_std__less_int__* base1102 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1094->_M_impl) + 0);
          struct std__less_int_* cast1103 = (struct std__less_int_*)base1102;
          int* t1104 = __k1092;
          struct std___Rb_tree_node_base** r1105 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1094);
          struct std___Rb_tree_node_base* t1106 = *r1105;
          int* r1107 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1106);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r1108 = std__less_int___operator___int_const___int_const___const(cast1103, t1104, r1107);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u1109 = !r1108;
          ternary1101 = (_Bool)u1109;
        } else {
          _Bool c1110 = 0;
          ternary1101 = (_Bool)c1110;
        }
        if (ternary1101) {
          struct std___Rb_tree_node_base* ref_tmp01111;
          struct std___Rb_tree_node_base* c1112 = ((void*)0);
          ref_tmp01111 = c1112;
          struct std___Rb_tree_node_base** r1113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1094);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, &ref_tmp01111, r1113);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1114 = __retval1093;
          return t1114;
        } else {
          int* t1115 = __k1092;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1116 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t1094, t1115);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1093 = r1116;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1117 = __retval1093;
          return t1117;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1118 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1094->_M_impl) + 0);
        struct std__less_int_* cast1119 = (struct std__less_int_*)base1118;
        struct std___Rb_tree_node_base* t1120 = __position1091._M_node;
        int* r1121 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1120);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1122 = __k1092;
        _Bool r1123 = std__less_int___operator___int_const___int_const___const(cast1119, r1121, t1122);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1124 = !r1123;
        if (u1124) {
          struct std___Rb_tree_iterator_int_ __before1125;
          struct std___Rb_tree_node_base* t1126 = __position1091._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1125, t1126);
            struct std___Rb_tree_node_base* t1127 = __position1091._M_node;
            struct std___Rb_tree_node_base** r1128 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1094);
            struct std___Rb_tree_node_base* t1129 = *r1128;
            _Bool c1130 = ((t1127 == t1129)) ? 1 : 0;
            if (c1130) {
              struct std___Rb_tree_node_base** r1131 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1094);
              struct std___Rb_tree_node_base** r1132 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1094);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, r1131, r1132);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1133 = __retval1093;
              return t1133;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1134 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1094->_M_impl) + 0);
                struct std__less_int_* cast1135 = (struct std__less_int_*)base1134;
                int* t1136 = __k1092;
                struct std___Rb_tree_iterator_int_* r1137 = std___Rb_tree_iterator_int___operator__(&__before1125);
                struct std___Rb_tree_node_base* t1138 = r1137->_M_node;
                int* r1139 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1138);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r1140 = std__less_int___operator___int_const___int_const___const(cast1135, t1136, r1139);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1141 = !r1140;
                if (u1141) {
                    struct std___Rb_tree_node_base* t1142 = __before1125._M_node;
                    struct std___Rb_tree_node_base* r1143 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1142);
                    _Bool cast1144 = (_Bool)r1143;
                    _Bool u1145 = !cast1144;
                    if (u1145) {
                      struct std___Rb_tree_node_base* ref_tmp11146;
                      struct std___Rb_tree_node_base* c1147 = ((void*)0);
                      ref_tmp11146 = c1147;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, &ref_tmp11146, &__before1125._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1148 = __retval1093;
                      return t1148;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, &__position1091._M_node, &__position1091._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1149 = __retval1093;
                      return t1149;
                    }
                } else {
                  int* t1150 = __k1092;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1151 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t1094, t1150);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval1093 = r1151;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1152 = __retval1093;
                  return t1152;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after1153;
          struct std___Rb_tree_node_base* t1154 = __position1091._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1153, t1154);
            struct std___Rb_tree_node_base* t1155 = __position1091._M_node;
            struct std___Rb_tree_node_base** r1156 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1094);
            struct std___Rb_tree_node_base* t1157 = *r1156;
            _Bool c1158 = ((t1155 == t1157)) ? 1 : 0;
            if (c1158) {
              struct std___Rb_tree_node_base* ref_tmp21159;
              struct std___Rb_tree_node_base* c1160 = ((void*)0);
              ref_tmp21159 = c1160;
              struct std___Rb_tree_node_base** r1161 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1094);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, &ref_tmp21159, r1161);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1162 = __retval1093;
              return t1162;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1163 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1094->_M_impl) + 0);
                struct std__less_int_* cast1164 = (struct std__less_int_*)base1163;
                struct std___Rb_tree_iterator_int_* r1165 = std___Rb_tree_iterator_int___operator___2(&__after1153);
                struct std___Rb_tree_node_base* t1166 = r1165->_M_node;
                int* r1167 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1166);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1168 = __k1092;
                _Bool r1169 = std__less_int___operator___int_const___int_const___const(cast1164, r1167, t1168);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1170 = !r1169;
                if (u1170) {
                    struct std___Rb_tree_node_base* t1171 = __position1091._M_node;
                    struct std___Rb_tree_node_base* r1172 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1171);
                    _Bool cast1173 = (_Bool)r1172;
                    _Bool u1174 = !cast1173;
                    if (u1174) {
                      struct std___Rb_tree_node_base* ref_tmp31175;
                      struct std___Rb_tree_node_base* c1176 = ((void*)0);
                      ref_tmp31175 = c1176;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, &ref_tmp31175, &__position1091._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1177 = __retval1093;
                      return t1177;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1093, &__after1153._M_node, &__after1153._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1178 = __retval1093;
                      return t1178;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp41179;
                  struct std___Rb_tree_node_base* ref_tmp51180;
                  struct std___Rb_tree_node_base* c1181 = ((void*)0);
                  ref_tmp41179 = c1181;
                  struct std___Rb_tree_node_base* c1182 = ((void*)0);
                  ref_tmp51180 = c1182;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval1093, &ref_tmp41179, &ref_tmp51180);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1183 = __retval1093;
                  return t1183;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1184, int* v1185) {
bb1186: ;
  struct std___Identity_int_* this1187;
  int* __x1188;
  int* __retval1189;
  this1187 = v1184;
  __x1188 = v1185;
  struct std___Identity_int_* t1190 = this1187;
  int* t1191 = __x1188;
  __retval1189 = t1191;
  int* t1192 = __retval1189;
  return t1192;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1193) {
bb1194: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1195;
  unsigned long __retval1196;
  this1195 = v1193;
  struct std____new_allocator_std___Rb_tree_node_int__* t1197 = this1195;
  unsigned long c1198 = 9223372036854775807;
  unsigned long c1199 = 40;
  unsigned long b1200 = c1198 / c1199;
  __retval1196 = b1200;
  unsigned long t1201 = __retval1196;
  return t1201;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1202, unsigned long v1203, void* v1204) {
bb1205: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1206;
  unsigned long __n1207;
  void* unnamed1208;
  struct std___Rb_tree_node_int_* __retval1209;
  this1206 = v1202;
  __n1207 = v1203;
  unnamed1208 = v1204;
  struct std____new_allocator_std___Rb_tree_node_int__* t1210 = this1206;
    unsigned long t1211 = __n1207;
    unsigned long r1212 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1210);
    _Bool c1213 = ((t1211 > r1212)) ? 1 : 0;
    if (c1213) {
        unsigned long t1214 = __n1207;
        unsigned long c1215 = -1;
        unsigned long c1216 = 40;
        unsigned long b1217 = c1215 / c1216;
        _Bool c1218 = ((t1214 > b1217)) ? 1 : 0;
        if (c1218) {
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
    unsigned long c1219 = 8;
    unsigned long c1220 = 16;
    _Bool c1221 = ((c1219 > c1220)) ? 1 : 0;
    if (c1221) {
      unsigned long __al1222;
      unsigned long c1223 = 8;
      __al1222 = c1223;
      unsigned long t1224 = __n1207;
      unsigned long c1225 = 40;
      unsigned long b1226 = t1224 * c1225;
      unsigned long t1227 = __al1222;
      void* r1228 = operator_new_2(b1226, t1227);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1229 = (struct std___Rb_tree_node_int_*)r1228;
      __retval1209 = cast1229;
      struct std___Rb_tree_node_int_* t1230 = __retval1209;
      return t1230;
    }
  unsigned long t1231 = __n1207;
  unsigned long c1232 = 40;
  unsigned long b1233 = t1231 * c1232;
  void* r1234 = operator_new(b1233);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1235 = (struct std___Rb_tree_node_int_*)r1234;
  __retval1209 = cast1235;
  struct std___Rb_tree_node_int_* t1236 = __retval1209;
  return t1236;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1237, unsigned long v1238) {
bb1239: ;
  struct std__allocator_std___Rb_tree_node_int__* this1240;
  unsigned long __n1241;
  struct std___Rb_tree_node_int_* __retval1242;
  this1240 = v1237;
  __n1241 = v1238;
  struct std__allocator_std___Rb_tree_node_int__* t1243 = this1240;
    _Bool r1244 = std____is_constant_evaluated();
    if (r1244) {
        unsigned long t1245 = __n1241;
        unsigned long c1246 = 40;
        unsigned long ovr1247;
        _Bool ovf1248 = __builtin_mul_overflow(t1245, c1246, &ovr1247);
        __n1241 = ovr1247;
        if (ovf1248) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1249 = __n1241;
      void* r1250 = operator_new(t1249);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1251 = (struct std___Rb_tree_node_int_*)r1250;
      __retval1242 = cast1251;
      struct std___Rb_tree_node_int_* t1252 = __retval1242;
      return t1252;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1253 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1243 + 0);
  unsigned long t1254 = __n1241;
  void* c1255 = ((void*)0);
  struct std___Rb_tree_node_int_* r1256 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1253, t1254, c1255);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1242 = r1256;
  struct std___Rb_tree_node_int_* t1257 = __retval1242;
  return t1257;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1258, unsigned long v1259) {
bb1260: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1261;
  unsigned long __n1262;
  struct std___Rb_tree_node_int_* __retval1263;
  __a1261 = v1258;
  __n1262 = v1259;
  struct std__allocator_std___Rb_tree_node_int__* t1264 = __a1261;
  unsigned long t1265 = __n1262;
  struct std___Rb_tree_node_int_* r1266 = std__allocator_std___Rb_tree_node_int_____allocate(t1264, t1265);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1263 = r1266;
  struct std___Rb_tree_node_int_* t1267 = __retval1263;
  return t1267;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1268) {
bb1269: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1270;
  struct std___Rb_tree_node_int_* __retval1271;
  this1270 = v1268;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1272 = this1270;
  struct std__allocator_std___Rb_tree_node_int__* r1273 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1272);
  unsigned long c1274 = 1;
  struct std___Rb_tree_node_int_* r1275 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1273, c1274);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1271 = r1275;
  struct std___Rb_tree_node_int_* t1276 = __retval1271;
  return t1276;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1277, int* v1278) {
bb1279: ;
  int* __location1280;
  int* __args1281;
  int* __retval1282;
  void* __loc1283;
  __location1280 = v1277;
  __args1281 = v1278;
  int* t1284 = __location1280;
  void* cast1285 = (void*)t1284;
  __loc1283 = cast1285;
    void* t1286 = __loc1283;
    int* cast1287 = (int*)t1286;
    int* t1288 = __args1281;
    int t1289 = *t1288;
    *cast1287 = t1289;
    __retval1282 = cast1287;
    int* t1290 = __retval1282;
    return t1290;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1291, int* v1292, int* v1293) {
bb1294: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1295;
  int* __p1296;
  int* __args1297;
  __a1295 = v1291;
  __p1296 = v1292;
  __args1297 = v1293;
  int* t1298 = __p1296;
  int* t1299 = __args1297;
  int* r1300 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1298, t1299);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1301, struct std___Rb_tree_node_int_* v1302, int* v1303) {
bb1304: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1305;
  struct std___Rb_tree_node_int_* __node1306;
  int* __args1307;
  this1305 = v1301;
  __node1306 = v1302;
  __args1307 = v1303;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1308 = this1305;
      struct std__allocator_std___Rb_tree_node_int__* r1310 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1308);
      struct std___Rb_tree_node_int_* t1311 = __node1306;
      int* r1312 = std___Rb_tree_node_int____M_valptr(t1311);
      if (__cir_exc_active) {
        goto cir_try_dispatch1309;
      }
      int* t1313 = __args1307;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1310, r1312, t1313);
    cir_try_dispatch1309: ;
    if (__cir_exc_active) {
    {
      int ca_tok1314 = 0;
      void* ca_exn1315 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1316 = __node1306;
        struct std___Rb_tree_node_int_* t1317 = __node1306;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1308, t1317);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1318, int* v1319) {
bb1320: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1321;
  int* __args1322;
  struct std___Rb_tree_node_int_* __retval1323;
  struct std___Rb_tree_node_int_* __tmp1324;
  this1321 = v1318;
  __args1322 = v1319;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1325 = this1321;
  struct std___Rb_tree_node_int_* r1326 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1325);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1324 = r1326;
  struct std___Rb_tree_node_int_* t1327 = __tmp1324;
  int* t1328 = __args1322;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1325, t1327, t1328);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1329 = __tmp1324;
  __retval1323 = t1329;
  struct std___Rb_tree_node_int_* t1330 = __retval1323;
  return t1330;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1331, int* v1332) {
bb1333: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1334;
  int* __arg1335;
  struct std___Rb_tree_node_int_* __retval1336;
  this1334 = v1331;
  __arg1335 = v1332;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1337 = this1334;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1338 = t1337->_M_t;
  int* t1339 = __arg1335;
  struct std___Rb_tree_node_int_* r1340 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1338, t1339);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1336 = r1340;
  struct std___Rb_tree_node_int_* t1341 = __retval1336;
  return t1341;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1342, struct std___Rb_tree_node_base* v1343, struct std___Rb_tree_node_base* v1344, struct std___Rb_tree_node_base* v1345) {
bb1346: ;
  _Bool __insert_left1347;
  struct std___Rb_tree_node_base* __x1348;
  struct std___Rb_tree_node_base* __p1349;
  struct std___Rb_tree_node_base* __header1350;
  __insert_left1347 = v1342;
  __x1348 = v1343;
  __p1349 = v1344;
  __header1350 = v1345;
  _Bool t1351 = __insert_left1347;
  struct std___Rb_tree_node_base* t1352 = __x1348;
  struct std___Rb_tree_node_base* t1353 = __p1349;
  struct std___Rb_tree_node_base* t1354 = __header1350;
  std___Rb_tree_insert_and_rebalance(t1351, t1352, t1353, t1354);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1355, struct std___Rb_tree_node_base* v1356, struct std___Rb_tree_node_base* v1357, int* v1358, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1359) {
bb1360: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1361;
  struct std___Rb_tree_node_base* __x1362;
  struct std___Rb_tree_node_base* __p1363;
  int* __v1364;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1365;
  struct std___Rb_tree_iterator_int_ __retval1366;
  _Bool __insert_left1367;
  struct std___Rb_tree_node_base* __z1368;
  this1361 = v1355;
  __x1362 = v1356;
  __p1363 = v1357;
  __v1364 = v1358;
  __node_gen1365 = v1359;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1369 = this1361;
  struct std___Rb_tree_node_base* t1370 = __x1362;
  _Bool cast1371 = (_Bool)t1370;
  _Bool ternary1372;
  if (cast1371) {
    _Bool c1373 = 1;
    ternary1372 = (_Bool)c1373;
  } else {
    struct std___Rb_tree_node_base* t1374 = __p1363;
    struct std___Rb_tree_node_base* r1375 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1369);
    _Bool c1376 = ((t1374 == r1375)) ? 1 : 0;
    ternary1372 = (_Bool)c1376;
  }
  _Bool ternary1377;
  if (ternary1372) {
    _Bool c1378 = 1;
    ternary1377 = (_Bool)c1378;
  } else {
    struct std___Identity_int_ ref_tmp01379;
    struct std___Rb_tree_key_compare_std__less_int__* base1380 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1369->_M_impl) + 0);
    struct std__less_int_* cast1381 = (struct std__less_int_*)base1380;
    int* t1382 = __v1364;
    int* r1383 = std___Identity_int___operator___int___const(&ref_tmp01379, t1382);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1384 = __p1363;
    int* r1385 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1384);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1386 = std__less_int___operator___int_const___int_const___const(cast1381, r1383, r1385);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1377 = (_Bool)r1386;
  }
  __insert_left1367 = ternary1377;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1387 = __node_gen1365;
  int* t1388 = __v1364;
  struct std___Rb_tree_node_int_* r1389 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1387, t1388);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1390 = (struct std___Rb_tree_node_base*)((char *)r1389 + 0);
  struct std___Rb_tree_node_base* r1391 = std___Rb_tree_node_base___M_base_ptr___const(base1390);
  __z1368 = r1391;
  _Bool t1392 = __insert_left1367;
  struct std___Rb_tree_node_base* t1393 = __z1368;
  struct std___Rb_tree_node_base* t1394 = __p1363;
  struct std___Rb_tree_header* base1395 = (struct std___Rb_tree_header*)((char *)&(t1369->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1392, t1393, t1394, &base1395->_M_header);
  struct std___Rb_tree_header* base1396 = (struct std___Rb_tree_header*)((char *)&(t1369->_M_impl) + 8);
  unsigned long t1397 = base1396->_M_node_count;
  unsigned long u1398 = t1397 + 1;
  base1396->_M_node_count = u1398;
  struct std___Rb_tree_node_base* t1399 = __z1368;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1366, t1399);
  struct std___Rb_tree_iterator_int_ t1400 = __retval1366;
  return t1400;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1401, struct std___Rb_tree_node_base* v1402, int* v1403) {
bb1404: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1405;
  struct std___Rb_tree_node_base* __p1406;
  int* __v1407;
  struct std___Rb_tree_iterator_int_ __retval1408;
  _Bool __insert_left1409;
  struct std___Rb_tree_node_base* __z1410;
  this1405 = v1401;
  __p1406 = v1402;
  __v1407 = v1403;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1411 = this1405;
  struct std___Rb_tree_node_base* t1412 = __p1406;
  struct std___Rb_tree_node_base* r1413 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1411);
  _Bool c1414 = ((t1412 == r1413)) ? 1 : 0;
  _Bool ternary1415;
  if (c1414) {
    _Bool c1416 = 1;
    ternary1415 = (_Bool)c1416;
  } else {
    struct std___Identity_int_ ref_tmp01417;
    struct std___Rb_tree_key_compare_std__less_int__* base1418 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1411->_M_impl) + 0);
    struct std__less_int_* cast1419 = (struct std__less_int_*)base1418;
    struct std___Rb_tree_node_base* t1420 = __p1406;
    int* r1421 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1420);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1422 = __v1407;
    int* r1423 = std___Identity_int___operator___int___const(&ref_tmp01417, t1422);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1424 = std__less_int___operator___int_const___int_const___const(cast1419, r1421, r1423);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u1425 = !r1424;
    ternary1415 = (_Bool)u1425;
  }
  __insert_left1409 = ternary1415;
  int* t1426 = __v1407;
  struct std___Rb_tree_node_int_* r1427 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1411, t1426);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1428 = (struct std___Rb_tree_node_base*)((char *)r1427 + 0);
  struct std___Rb_tree_node_base* r1429 = std___Rb_tree_node_base___M_base_ptr___const(base1428);
  __z1410 = r1429;
  _Bool t1430 = __insert_left1409;
  struct std___Rb_tree_node_base* t1431 = __z1410;
  struct std___Rb_tree_node_base* t1432 = __p1406;
  struct std___Rb_tree_header* base1433 = (struct std___Rb_tree_header*)((char *)&(t1411->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1430, t1431, t1432, &base1433->_M_header);
  struct std___Rb_tree_header* base1434 = (struct std___Rb_tree_header*)((char *)&(t1411->_M_impl) + 8);
  unsigned long t1435 = base1434->_M_node_count;
  unsigned long u1436 = t1435 + 1;
  base1434->_M_node_count = u1436;
  struct std___Rb_tree_node_base* t1437 = __z1410;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1408, t1437);
  struct std___Rb_tree_iterator_int_ t1438 = __retval1408;
  return t1438;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1439, int* v1440) {
bb1441: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1442;
  int* __v1443;
  struct std___Rb_tree_iterator_int_ __retval1444;
  struct std___Rb_tree_node_base* __x1445;
  struct std___Rb_tree_node_base* __y1446;
  this1442 = v1439;
  __v1443 = v1440;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1447 = this1442;
  struct std___Rb_tree_node_base* r1448 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1447);
  __x1445 = r1448;
  struct std___Rb_tree_node_base* r1449 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1447);
  __y1446 = r1449;
    while (1) {
      struct std___Rb_tree_node_base* t1450 = __x1445;
      _Bool cast1451 = (_Bool)t1450;
      if (!cast1451) break;
        struct std___Identity_int_ ref_tmp01452;
        struct std___Rb_tree_node_base** tmp_exprcleanup1453;
        struct std___Rb_tree_node_base* t1454 = __x1445;
        __y1446 = t1454;
        struct std___Rb_tree_key_compare_std__less_int__* base1455 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1447->_M_impl) + 0);
        struct std__less_int_* cast1456 = (struct std__less_int_*)base1455;
        struct std___Rb_tree_node_base* t1457 = __x1445;
        int* r1458 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1457);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1459 = __v1443;
        int* r1460 = std___Identity_int___operator___int___const(&ref_tmp01452, t1459);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1461 = std__less_int___operator___int_const___int_const___const(cast1456, r1458, r1460);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1462 = !r1461;
        struct std___Rb_tree_node_base* ternary1463;
        if (u1462) {
          struct std___Rb_tree_node_base* t1464 = __x1445;
          struct std___Rb_tree_node_base* r1465 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1464);
          ternary1463 = (struct std___Rb_tree_node_base*)r1465;
        } else {
          struct std___Rb_tree_node_base* t1466 = __x1445;
          struct std___Rb_tree_node_base* r1467 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1466);
          ternary1463 = (struct std___Rb_tree_node_base*)r1467;
        }
        __x1445 = ternary1463;
        tmp_exprcleanup1453 = &__x1445;
        struct std___Rb_tree_node_base** t1468 = tmp_exprcleanup1453;
    }
  struct std___Rb_tree_node_base* t1469 = __y1446;
  int* t1470 = __v1443;
  struct std___Rb_tree_iterator_int_ r1471 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1447, t1469, t1470);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1444 = r1471;
  struct std___Rb_tree_iterator_int_ t1472 = __retval1444;
  return t1472;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1473, struct std___Rb_tree_const_iterator_int_ v1474, int* v1475, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1476) {
bb1477: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1478;
  struct std___Rb_tree_const_iterator_int_ __position1479;
  int* __v1480;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1481;
  struct std___Rb_tree_iterator_int_ __retval1482;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1483;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01484;
  struct std___Identity_int_ ref_tmp01485;
  this1478 = v1473;
  __position1479 = v1474;
  __v1480 = v1475;
  __node_gen1481 = v1476;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1486 = this1478;
  agg_tmp01484 = __position1479; // copy
  int* t1487 = __v1480;
  int* r1488 = std___Identity_int___operator___int___const(&ref_tmp01485, t1487);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1489 = agg_tmp01484;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1490 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1486, t1489, r1488);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1483 = r1490;
    struct std___Rb_tree_node_base* t1491 = __res1483.second;
    _Bool cast1492 = (_Bool)t1491;
    if (cast1492) {
      struct std___Rb_tree_node_base* t1493 = __res1483.first;
      struct std___Rb_tree_node_base* t1494 = __res1483.second;
      int* t1495 = __v1480;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1496 = __node_gen1481;
      struct std___Rb_tree_iterator_int_ r1497 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1486, t1493, t1494, t1495, t1496);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1482 = r1497;
      struct std___Rb_tree_iterator_int_ t1498 = __retval1482;
      return t1498;
    }
  int* t1499 = __v1480;
  struct std___Rb_tree_iterator_int_ r1500 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1486, t1499);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1482 = r1500;
  struct std___Rb_tree_iterator_int_ t1501 = __retval1482;
  return t1501;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1502) {
bb1503: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1504;
  struct std___Rb_tree_iterator_int_ __retval1505;
  this1504 = v1502;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1506 = this1504;
  struct std___Rb_tree_node_base* r1507 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1506);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1505, r1507);
  struct std___Rb_tree_iterator_int_ t1508 = __retval1505;
  return t1508;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1509, struct std___Rb_tree_iterator_int_* v1510) {
bb1511: ;
  struct std___Rb_tree_const_iterator_int_* this1512;
  struct std___Rb_tree_iterator_int_* __it1513;
  this1512 = v1509;
  __it1513 = v1510;
  struct std___Rb_tree_const_iterator_int_* t1514 = this1512;
  struct std___Rb_tree_iterator_int_* t1515 = __it1513;
  struct std___Rb_tree_node_base* t1516 = t1515->_M_node;
  t1514->_M_node = t1516;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1517, int* v1518, int* v1519) {
bb1520: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1521;
  int* __first1522;
  int* __last1523;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1524;
  this1521 = v1517;
  __first1522 = v1518;
  __last1523 = v1519;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1525 = this1521;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1524, t1525);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01526;
    struct std___Rb_tree_iterator_int_ ref_tmp01527;
    struct std___Rb_tree_iterator_int_ agg_tmp11528;
    while (1) {
      int* t1530 = __first1522;
      int* t1531 = __last1523;
      _Bool c1532 = ((t1530 != t1531)) ? 1 : 0;
      if (!c1532) break;
      struct std___Rb_tree_iterator_int_ r1533 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1525);
      ref_tmp01527 = r1533;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01526, &ref_tmp01527);
      int* t1534 = __first1522;
      struct std___Rb_tree_const_iterator_int_ t1535 = agg_tmp01526;
      struct std___Rb_tree_iterator_int_ r1536 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1525, t1535, t1534, &__an1524);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11528 = r1536;
    for_step1529: ;
      int* t1537 = __first1522;
      int c1538 = 1;
      int* ptr1539 = &(t1537)[c1538];
      __first1522 = ptr1539;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1540) {
bb1541: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1542;
  this1542 = v1540;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1543 = this1542;
  struct std__allocator_std___Rb_tree_node_int__* base1544 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1543 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1544);
    struct std___Rb_tree_key_compare_std__less_int__* base1545 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1543 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1545);
    struct std___Rb_tree_header* base1546 = (struct std___Rb_tree_header*)((char *)t1543 + 8);
    std___Rb_tree_header___Rb_tree_header(base1546);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1547) {
bb1548: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1549;
  this1549 = v1547;
  struct std____new_allocator_std___Rb_tree_node_int__* t1550 = this1549;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1551) {
bb1552: ;
  struct std__allocator_std___Rb_tree_node_int__* this1553;
  this1553 = v1551;
  struct std__allocator_std___Rb_tree_node_int__* t1554 = this1553;
  struct std____new_allocator_std___Rb_tree_node_int__* base1555 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1554 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1555);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1556) {
bb1557: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1558;
  this1558 = v1556;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1559) {
bb1560: ;
  struct std___Rb_tree_header* this1561;
  this1561 = v1559;
  struct std___Rb_tree_header* t1562 = this1561;
  struct std___Rb_tree_node_base* c1563 = ((void*)0);
  t1562->_M_header._M_parent = c1563;
  t1562->_M_header._M_left = &t1562->_M_header;
  t1562->_M_header._M_right = &t1562->_M_header;
  unsigned long c1564 = 0;
  t1562->_M_node_count = c1564;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1565) {
bb1566: ;
  struct std___Rb_tree_header* this1567;
  this1567 = v1565;
  struct std___Rb_tree_header* t1568 = this1567;
  unsigned int c1569 = 0;
  t1568->_M_header._M_color = c1569;
  std___Rb_tree_header___M_reset(t1568);
  if (__cir_exc_active) {
    return;
  }
  return;
}

