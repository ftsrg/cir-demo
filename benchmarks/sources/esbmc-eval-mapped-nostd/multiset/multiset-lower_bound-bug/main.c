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

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 9";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-lower_bound-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "*itlow != 30";
char _str_3[12] = "*itup == 70";
char _str_4[18] = "myset.size() == 5";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____lower_bound(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____upper_bound(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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
bb3:
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
bb12:
  struct std___Rb_tree_const_iterator_int_* this13;
  this13 = v11;
  struct std___Rb_tree_const_iterator_int_* t14 = this13;
  struct std___Rb_tree_node_base* c15 = ((void*)0);
  t14->_M_node = c15;
  return;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v16) {
bb17:
  struct std__multiset_int__std__less_int___std__allocator_int__* this18;
  unsigned long __retval19;
  this18 = v16;
  struct std__multiset_int__std__less_int___std__allocator_int__* t20 = this18;
  unsigned long r21 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t20->_M_t);
  __retval19 = r21;
  unsigned long t22 = __retval19;
  return t22;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23, struct std___Rb_tree_node_base* v24, struct std___Rb_tree_node_base* v25, int* v26) {
bb27:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this28;
  struct std___Rb_tree_node_base* __x29;
  struct std___Rb_tree_node_base* __y30;
  int* __k31;
  struct std___Rb_tree_node_base* __retval32;
  this28 = v23;
  __x29 = v24;
  __y30 = v25;
  __k31 = v26;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t33 = this28;
    while (1) {
      struct std___Rb_tree_node_base* t34 = __x29;
      _Bool cast35 = (_Bool)t34;
      if (!cast35) break;
        struct std___Rb_tree_key_compare_std__less_int__* base36 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t33->_M_impl) + 0);
        struct std__less_int_* cast37 = (struct std__less_int_*)base36;
        struct std___Rb_tree_node_base* t38 = __x29;
        int* r39 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t38);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t40 = __k31;
        _Bool r41 = std__less_int___operator___int_const___int_const___const(cast37, r39, t40);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u42 = !r41;
        if (u42) {
          struct std___Rb_tree_node_base* t43 = __x29;
          __y30 = t43;
          struct std___Rb_tree_node_base* t44 = __x29;
          struct std___Rb_tree_node_base* r45 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t44);
          __x29 = r45;
        } else {
          struct std___Rb_tree_node_base* t46 = __x29;
          struct std___Rb_tree_node_base* r47 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t46);
          __x29 = r47;
        }
    }
  struct std___Rb_tree_node_base* t48 = __y30;
  __retval32 = t48;
  struct std___Rb_tree_node_base* t49 = __retval32;
  return t49;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11lower_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v50, int* v51) {
bb52:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this53;
  int* __k54;
  struct std___Rb_tree_iterator_int_ __retval55;
  this53 = v50;
  __k54 = v51;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t56 = this53;
  struct std___Rb_tree_node_base* r57 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t56);
  struct std___Rb_tree_node_base* r58 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t56);
  int* t59 = __k54;
  struct std___Rb_tree_node_base* r60 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t56, r57, r58, t59);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval55, r60);
  struct std___Rb_tree_iterator_int_ t61 = __retval55;
  return t61;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE11lower_boundERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____lower_bound(struct std__multiset_int__std__less_int___std__allocator_int__* v62, int* v63) {
bb64:
  struct std__multiset_int__std__less_int___std__allocator_int__* this65;
  int* __x66;
  struct std___Rb_tree_const_iterator_int_ __retval67;
  struct std___Rb_tree_iterator_int_ ref_tmp068;
  this65 = v62;
  __x66 = v63;
  struct std__multiset_int__std__less_int___std__allocator_int__* t69 = this65;
  int* t70 = __x66;
  struct std___Rb_tree_iterator_int_ r71 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(&t69->_M_t, t70);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp068 = r71;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval67, &ref_tmp068);
  struct std___Rb_tree_const_iterator_int_ t72 = __retval67;
  return t72;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v73, struct std___Rb_tree_const_iterator_int_* v74) {
bb75:
  struct std___Rb_tree_const_iterator_int_* this76;
  struct std___Rb_tree_const_iterator_int_* unnamed77;
  struct std___Rb_tree_const_iterator_int_* __retval78;
  this76 = v73;
  unnamed77 = v74;
  struct std___Rb_tree_const_iterator_int_* t79 = this76;
  struct std___Rb_tree_const_iterator_int_* t80 = unnamed77;
  struct std___Rb_tree_node_base* t81 = t80->_M_node;
  t79->_M_node = t81;
  __retval78 = t79;
  struct std___Rb_tree_const_iterator_int_* t82 = __retval78;
  return t82;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v83) {
bb84:
  struct std___Rb_tree_const_iterator_int_* this85;
  int* __retval86;
  this85 = v83;
  struct std___Rb_tree_const_iterator_int_* t87 = this85;
  struct std___Rb_tree_node_base* t88 = t87->_M_node;
  struct std___Rb_tree_node_int_* derived89 = ((t88) ? (struct std___Rb_tree_node_int_*)((char *)t88 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r90 = std___Rb_tree_node_int____M_valptr___const(derived89);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval86 = r90;
  int* t91 = __retval86;
  return t91;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v92, struct std___Rb_tree_node_base* v93, struct std___Rb_tree_node_base* v94, int* v95) {
bb96:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this97;
  struct std___Rb_tree_node_base* __x98;
  struct std___Rb_tree_node_base* __y99;
  int* __k100;
  struct std___Rb_tree_node_base* __retval101;
  this97 = v92;
  __x98 = v93;
  __y99 = v94;
  __k100 = v95;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t102 = this97;
    while (1) {
      struct std___Rb_tree_node_base* t103 = __x98;
      _Bool cast104 = (_Bool)t103;
      if (!cast104) break;
        struct std___Rb_tree_key_compare_std__less_int__* base105 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t102->_M_impl) + 0);
        struct std__less_int_* cast106 = (struct std__less_int_*)base105;
        int* t107 = __k100;
        struct std___Rb_tree_node_base* t108 = __x98;
        int* r109 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t108);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r110 = std__less_int___operator___int_const___int_const___const(cast106, t107, r109);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r110) {
          struct std___Rb_tree_node_base* t111 = __x98;
          __y99 = t111;
          struct std___Rb_tree_node_base* t112 = __x98;
          struct std___Rb_tree_node_base* r113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t112);
          __x98 = r113;
        } else {
          struct std___Rb_tree_node_base* t114 = __x98;
          struct std___Rb_tree_node_base* r115 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t114);
          __x98 = r115;
        }
    }
  struct std___Rb_tree_node_base* t116 = __y99;
  __retval101 = t116;
  struct std___Rb_tree_node_base* t117 = __retval101;
  return t117;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v118, int* v119) {
bb120:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this121;
  int* __k122;
  struct std___Rb_tree_iterator_int_ __retval123;
  this121 = v118;
  __k122 = v119;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t124 = this121;
  struct std___Rb_tree_node_base* r125 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t124);
  struct std___Rb_tree_node_base* r126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t124);
  int* t127 = __k122;
  struct std___Rb_tree_node_base* r128 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t124, r125, r126, t127);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval123, r128);
  struct std___Rb_tree_iterator_int_ t129 = __retval123;
  return t129;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____upper_bound(struct std__multiset_int__std__less_int___std__allocator_int__* v130, int* v131) {
bb132:
  struct std__multiset_int__std__less_int___std__allocator_int__* this133;
  int* __x134;
  struct std___Rb_tree_const_iterator_int_ __retval135;
  struct std___Rb_tree_iterator_int_ ref_tmp0136;
  this133 = v130;
  __x134 = v131;
  struct std__multiset_int__std__less_int___std__allocator_int__* t137 = this133;
  int* t138 = __x134;
  struct std___Rb_tree_iterator_int_ r139 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(&t137->_M_t, t138);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0136 = r139;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval135, &ref_tmp0136);
  struct std___Rb_tree_const_iterator_int_ t140 = __retval135;
  return t140;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v141) {
bb142:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this143;
  struct std___Rb_tree_iterator_int_ __retval144;
  this143 = v141;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t145 = this143;
  struct std___Rb_tree_header* base146 = (struct std___Rb_tree_header*)((char *)&(t145->_M_impl) + 8);
  struct std___Rb_tree_node_base* t147 = base146->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval144, t147);
  struct std___Rb_tree_iterator_int_ t148 = __retval144;
  return t148;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v149) {
bb150:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this151;
  this151 = v149;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t152 = this151;
  struct std___Rb_tree_node_int_* r153 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t152);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t152, r153);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base154 = (struct std___Rb_tree_header*)((char *)&(t152->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base154);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v155, struct std___Rb_tree_node_base* v156) {
bb157:
  struct std___Rb_tree_node_base* __z158;
  struct std___Rb_tree_node_base* __header159;
  struct std___Rb_tree_node_base* __retval160;
  __z158 = v155;
  __header159 = v156;
  struct std___Rb_tree_node_base* t161 = __z158;
  struct std___Rb_tree_node_base* t162 = __header159;
  struct std___Rb_tree_node_base* r163 = std___Rb_tree_rebalance_for_erase(t161, t162);
  __retval160 = r163;
  struct std___Rb_tree_node_base* t164 = __retval160;
  return t164;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v165, struct std___Rb_tree_const_iterator_int_ v166) {
bb167:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this168;
  struct std___Rb_tree_const_iterator_int_ __position169;
  struct std___Rb_tree_node_base* __y170;
  this168 = v165;
  __position169 = v166;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t171 = this168;
  struct std___Rb_tree_node_base* t172 = __position169._M_node;
  struct std___Rb_tree_header* base173 = (struct std___Rb_tree_header*)((char *)&(t171->_M_impl) + 8);
  struct std___Rb_tree_node_base* r174 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t172, &base173->_M_header);
  __y170 = r174;
  struct std___Rb_tree_node_base* t175 = __y170;
  struct std___Rb_tree_node_int_* derived176 = (struct std___Rb_tree_node_int_*)((char *)t175 - 0);
  struct std___Rb_tree_node_int_* r177 = std___Rb_tree_node_int____M_node_ptr(derived176);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t171, r177);
  struct std___Rb_tree_header* base178 = (struct std___Rb_tree_header*)((char *)&(t171->_M_impl) + 8);
  unsigned long t179 = base178->_M_node_count;
  unsigned long u180 = t179 - 1;
  base178->_M_node_count = u180;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v181, struct std___Rb_tree_const_iterator_int_ v182, struct std___Rb_tree_const_iterator_int_ v183) {
bb184:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this185;
  struct std___Rb_tree_const_iterator_int_ __first186;
  struct std___Rb_tree_const_iterator_int_ __last187;
  this185 = v181;
  __first186 = v182;
  __last187 = v183;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t188 = this185;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0189;
    struct std___Rb_tree_iterator_int_ ref_tmp1190;
    struct std___Rb_tree_iterator_int_ r191 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t188);
    ref_tmp1190 = r191;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0189, &ref_tmp1190);
    _Bool r192 = std__operator__(&__first186, &ref_tmp0189);
    _Bool ternary193;
    if (r192) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2194;
      struct std___Rb_tree_iterator_int_ ref_tmp3195;
      struct std___Rb_tree_iterator_int_ r196 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t188);
      ref_tmp3195 = r196;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2194, &ref_tmp3195);
      _Bool r197 = std__operator__(&__last187, &ref_tmp2194);
      ternary193 = (_Bool)r197;
    } else {
      _Bool c198 = 0;
      ternary193 = (_Bool)c198;
    }
    if (ternary193) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t188);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0199;
        while (1) {
          _Bool r200 = std__operator__(&__first186, &__last187);
          _Bool u201 = !r200;
          if (!u201) break;
          int c202 = 0;
          struct std___Rb_tree_const_iterator_int_ r203 = std___Rb_tree_const_iterator_int___operator__(&__first186, c202);
          agg_tmp0199 = r203;
          struct std___Rb_tree_const_iterator_int_ t204 = agg_tmp0199;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t188, t204);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v205, struct std___Rb_tree_const_iterator_int_ v206, struct std___Rb_tree_const_iterator_int_ v207) {
bb208:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this209;
  struct std___Rb_tree_const_iterator_int_ __first210;
  struct std___Rb_tree_const_iterator_int_ __last211;
  struct std___Rb_tree_iterator_int_ __retval212;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0213;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1214;
  this209 = v205;
  __first210 = v206;
  __last211 = v207;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t215 = this209;
  agg_tmp0213 = __first210; // copy
  agg_tmp1214 = __last211; // copy
  struct std___Rb_tree_const_iterator_int_ t216 = agg_tmp0213;
  struct std___Rb_tree_const_iterator_int_ t217 = agg_tmp1214;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t215, t216, t217);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t218 = __last211._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval212, t218);
  struct std___Rb_tree_iterator_int_ t219 = __retval212;
  return t219;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v220, struct std___Rb_tree_const_iterator_int_ v221, struct std___Rb_tree_const_iterator_int_ v222) {
bb223:
  struct std__multiset_int__std__less_int___std__allocator_int__* this224;
  struct std___Rb_tree_const_iterator_int_ __first225;
  struct std___Rb_tree_const_iterator_int_ __last226;
  struct std___Rb_tree_const_iterator_int_ __retval227;
  struct std___Rb_tree_iterator_int_ ref_tmp0228;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0229;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1230;
  this224 = v220;
  __first225 = v221;
  __last226 = v222;
  struct std__multiset_int__std__less_int___std__allocator_int__* t231 = this224;
  agg_tmp0229 = __first225; // copy
  agg_tmp1230 = __last226; // copy
  struct std___Rb_tree_const_iterator_int_ t232 = agg_tmp0229;
  struct std___Rb_tree_const_iterator_int_ t233 = agg_tmp1230;
  struct std___Rb_tree_iterator_int_ r234 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t231->_M_t, t232, t233);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0228 = r234;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval227, &ref_tmp0228);
  struct std___Rb_tree_const_iterator_int_ t235 = __retval227;
  return t235;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v236, int v237) {
bb238:
  int __a239;
  int __b240;
  int __retval241;
  __a239 = v236;
  __b240 = v237;
  int t242 = __a239;
  int t243 = __b240;
  int b244 = t242 | t243;
  __retval241 = b244;
  int t245 = __retval241;
  return t245;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v246) {
bb247:
  struct std__basic_ios_char__std__char_traits_char__* this248;
  int __retval249;
  this248 = v246;
  struct std__basic_ios_char__std__char_traits_char__* t250 = this248;
  struct std__ios_base* base251 = (struct std__ios_base*)((char *)t250 + 0);
  int t252 = base251->_M_streambuf_state;
  __retval249 = t252;
  int t253 = __retval249;
  return t253;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v254, int v255) {
bb256:
  struct std__basic_ios_char__std__char_traits_char__* this257;
  int __state258;
  this257 = v254;
  __state258 = v255;
  struct std__basic_ios_char__std__char_traits_char__* t259 = this257;
  int r260 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t259);
  if (__cir_exc_active) {
    return;
  }
  int t261 = __state258;
  int r262 = std__operator_(r260, t261);
  std__basic_ios_char__std__char_traits_char_____clear(t259, r262);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v263, char* v264) {
bb265:
  char* __c1266;
  char* __c2267;
  _Bool __retval268;
  __c1266 = v263;
  __c2267 = v264;
  char* t269 = __c1266;
  char t270 = *t269;
  int cast271 = (int)t270;
  char* t272 = __c2267;
  char t273 = *t272;
  int cast274 = (int)t273;
  _Bool c275 = ((cast271 == cast274)) ? 1 : 0;
  __retval268 = c275;
  _Bool t276 = __retval268;
  return t276;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v277) {
bb278:
  char* __p279;
  unsigned long __retval280;
  unsigned long __i281;
  __p279 = v277;
  unsigned long c282 = 0;
  __i281 = c282;
    char ref_tmp0283;
    while (1) {
      unsigned long t284 = __i281;
      char* t285 = __p279;
      char* ptr286 = &(t285)[t284];
      char c287 = 0;
      ref_tmp0283 = c287;
      _Bool r288 = __gnu_cxx__char_traits_char___eq(ptr286, &ref_tmp0283);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u289 = !r288;
      if (!u289) break;
      unsigned long t290 = __i281;
      unsigned long u291 = t290 + 1;
      __i281 = u291;
    }
  unsigned long t292 = __i281;
  __retval280 = t292;
  unsigned long t293 = __retval280;
  return t293;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v294) {
bb295:
  char* __s296;
  unsigned long __retval297;
  __s296 = v294;
    _Bool r298 = std____is_constant_evaluated();
    if (r298) {
      char* t299 = __s296;
      unsigned long r300 = __gnu_cxx__char_traits_char___length(t299);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval297 = r300;
      unsigned long t301 = __retval297;
      return t301;
    }
  char* t302 = __s296;
  unsigned long r303 = strlen(t302);
  __retval297 = r303;
  unsigned long t304 = __retval297;
  return t304;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v305, char* v306) {
bb307:
  struct std__basic_ostream_char__std__char_traits_char__* __out308;
  char* __s309;
  struct std__basic_ostream_char__std__char_traits_char__* __retval310;
  __out308 = v305;
  __s309 = v306;
    char* t311 = __s309;
    _Bool cast312 = (_Bool)t311;
    _Bool u313 = !cast312;
    if (u313) {
      struct std__basic_ostream_char__std__char_traits_char__* t314 = __out308;
      void** v315 = (void**)t314;
      void* v316 = *((void**)v315);
      unsigned char* cast317 = (unsigned char*)v316;
      long c318 = -24;
      unsigned char* ptr319 = &(cast317)[c318];
      long* cast320 = (long*)ptr319;
      long t321 = *cast320;
      unsigned char* cast322 = (unsigned char*)t314;
      unsigned char* ptr323 = &(cast322)[t321];
      struct std__basic_ostream_char__std__char_traits_char__* cast324 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr323;
      struct std__basic_ios_char__std__char_traits_char__* cast325 = (struct std__basic_ios_char__std__char_traits_char__*)cast324;
      int t326 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast325, t326);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t327 = __out308;
      char* t328 = __s309;
      char* t329 = __s309;
      unsigned long r330 = std__char_traits_char___length(t329);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast331 = (long)r330;
      struct std__basic_ostream_char__std__char_traits_char__* r332 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t327, t328, cast331);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t333 = __out308;
  __retval310 = t333;
  struct std__basic_ostream_char__std__char_traits_char__* t334 = __retval310;
  return t334;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v335, struct std___Rb_tree_node_base* v336) {
bb337:
  struct std___Rb_tree_const_iterator_int_* this338;
  struct std___Rb_tree_node_base* __x339;
  this338 = v335;
  __x339 = v336;
  struct std___Rb_tree_const_iterator_int_* t340 = this338;
  struct std___Rb_tree_node_base* t341 = __x339;
  t340->_M_node = t341;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v342) {
bb343:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this344;
  struct std___Rb_tree_const_iterator_int_ __retval345;
  this344 = v342;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t346 = this344;
  struct std___Rb_tree_header* base347 = (struct std___Rb_tree_header*)((char *)&(t346->_M_impl) + 8);
  struct std___Rb_tree_node_base* t348 = base347->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval345, t348);
  struct std___Rb_tree_const_iterator_int_ t349 = __retval345;
  return t349;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v350) {
bb351:
  struct std__multiset_int__std__less_int___std__allocator_int__* this352;
  struct std___Rb_tree_const_iterator_int_ __retval353;
  this352 = v350;
  struct std__multiset_int__std__less_int___std__allocator_int__* t354 = this352;
  struct std___Rb_tree_const_iterator_int_ r355 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t354->_M_t);
  __retval353 = r355;
  struct std___Rb_tree_const_iterator_int_ t356 = __retval353;
  return t356;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v357, struct std___Rb_tree_const_iterator_int_* v358) {
bb359:
  struct std___Rb_tree_const_iterator_int_* __x360;
  struct std___Rb_tree_const_iterator_int_* __y361;
  _Bool __retval362;
  __x360 = v357;
  __y361 = v358;
  struct std___Rb_tree_const_iterator_int_* t363 = __x360;
  struct std___Rb_tree_node_base* t364 = t363->_M_node;
  struct std___Rb_tree_const_iterator_int_* t365 = __y361;
  struct std___Rb_tree_node_base* t366 = t365->_M_node;
  _Bool c367 = ((t364 == t366)) ? 1 : 0;
  __retval362 = c367;
  _Bool t368 = __retval362;
  return t368;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v369) {
bb370:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this371;
  struct std___Rb_tree_const_iterator_int_ __retval372;
  this371 = v369;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t373 = this371;
  struct std___Rb_tree_node_base* r374 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t373);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval372, r374);
  struct std___Rb_tree_const_iterator_int_ t375 = __retval372;
  return t375;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v376) {
bb377:
  struct std__multiset_int__std__less_int___std__allocator_int__* this378;
  struct std___Rb_tree_const_iterator_int_ __retval379;
  this378 = v376;
  struct std__multiset_int__std__less_int___std__allocator_int__* t380 = this378;
  struct std___Rb_tree_const_iterator_int_ r381 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t380->_M_t);
  __retval379 = r381;
  struct std___Rb_tree_const_iterator_int_ t382 = __retval379;
  return t382;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v383, int v384) {
bb385:
  struct std___Rb_tree_const_iterator_int_* this386;
  int unnamed387;
  struct std___Rb_tree_const_iterator_int_ __retval388;
  this386 = v383;
  unnamed387 = v384;
  struct std___Rb_tree_const_iterator_int_* t389 = this386;
  __retval388 = *t389; // copy
  struct std___Rb_tree_node_base* t390 = t389->_M_node;
  struct std___Rb_tree_node_base* r391 = std___Rb_tree_increment(t390);
  t389->_M_node = r391;
  struct std___Rb_tree_const_iterator_int_ t392 = __retval388;
  return t392;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v393, void* v394) {
bb395:
  struct std__basic_ostream_char__std__char_traits_char__* this396;
  void* __pf397;
  struct std__basic_ostream_char__std__char_traits_char__* __retval398;
  this396 = v393;
  __pf397 = v394;
  struct std__basic_ostream_char__std__char_traits_char__* t399 = this396;
  void* t400 = __pf397;
  struct std__basic_ostream_char__std__char_traits_char__* r401 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t400)(t399);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval398 = r401;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __retval398;
  return t402;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v403) {
bb404:
  struct std__basic_ostream_char__std__char_traits_char__* __os405;
  struct std__basic_ostream_char__std__char_traits_char__* __retval406;
  __os405 = v403;
  struct std__basic_ostream_char__std__char_traits_char__* t407 = __os405;
  struct std__basic_ostream_char__std__char_traits_char__* r408 = std__ostream__flush(t407);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval406 = r408;
  struct std__basic_ostream_char__std__char_traits_char__* t409 = __retval406;
  return t409;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v410) {
bb411:
  struct std__ctype_char_* __f412;
  struct std__ctype_char_* __retval413;
  __f412 = v410;
    struct std__ctype_char_* t414 = __f412;
    _Bool cast415 = (_Bool)t414;
    _Bool u416 = !cast415;
    if (u416) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t417 = __f412;
  __retval413 = t417;
  struct std__ctype_char_* t418 = __retval413;
  return t418;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v419, char v420) {
bb421:
  struct std__ctype_char_* this422;
  char __c423;
  char __retval424;
  this422 = v419;
  __c423 = v420;
  struct std__ctype_char_* t425 = this422;
    char t426 = t425->_M_widen_ok;
    _Bool cast427 = (_Bool)t426;
    if (cast427) {
      char t428 = __c423;
      unsigned char cast429 = (unsigned char)t428;
      unsigned long cast430 = (unsigned long)cast429;
      char t431 = t425->_M_widen[cast430];
      __retval424 = t431;
      char t432 = __retval424;
      return t432;
    }
  std__ctype_char____M_widen_init___const(t425);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t433 = __c423;
  void** v434 = (void**)t425;
  void* v435 = *((void**)v434);
  char vcall438 = (char)__VERIFIER_virtual_call_char_char(t425, 6, t433);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval424 = vcall438;
  char t439 = __retval424;
  return t439;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v440, char v441) {
bb442:
  struct std__basic_ios_char__std__char_traits_char__* this443;
  char __c444;
  char __retval445;
  this443 = v440;
  __c444 = v441;
  struct std__basic_ios_char__std__char_traits_char__* t446 = this443;
  struct std__ctype_char_* t447 = t446->_M_ctype;
  struct std__ctype_char_* r448 = std__ctype_char__const__std____check_facet_std__ctype_char___(t447);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t449 = __c444;
  char r450 = std__ctype_char___widen_char__const(r448, t449);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval445 = r450;
  char t451 = __retval445;
  return t451;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v452) {
bb453:
  struct std__basic_ostream_char__std__char_traits_char__* __os454;
  struct std__basic_ostream_char__std__char_traits_char__* __retval455;
  __os454 = v452;
  struct std__basic_ostream_char__std__char_traits_char__* t456 = __os454;
  struct std__basic_ostream_char__std__char_traits_char__* t457 = __os454;
  void** v458 = (void**)t457;
  void* v459 = *((void**)v458);
  unsigned char* cast460 = (unsigned char*)v459;
  long c461 = -24;
  unsigned char* ptr462 = &(cast460)[c461];
  long* cast463 = (long*)ptr462;
  long t464 = *cast463;
  unsigned char* cast465 = (unsigned char*)t457;
  unsigned char* ptr466 = &(cast465)[t464];
  struct std__basic_ostream_char__std__char_traits_char__* cast467 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr466;
  struct std__basic_ios_char__std__char_traits_char__* cast468 = (struct std__basic_ios_char__std__char_traits_char__*)cast467;
  char c469 = 10;
  char r470 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast468, c469);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r471 = std__ostream__put(t456, r470);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r471);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval455 = r472;
  struct std__basic_ostream_char__std__char_traits_char__* t473 = __retval455;
  return t473;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v474) {
bb475:
  struct std__multiset_int__std__less_int___std__allocator_int__* this476;
  this476 = v474;
  struct std__multiset_int__std__less_int___std__allocator_int__* t477 = this476;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t477->_M_t);
  }
  return;
}

// function: main
int main() {
bb478:
  int __retval479;
  int b480[9];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset481;
  struct std___Rb_tree_const_iterator_int_ it482;
  struct std___Rb_tree_const_iterator_int_ itlow483;
  struct std___Rb_tree_const_iterator_int_ itup484;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0485;
  int ref_tmp1486;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2487;
  int ref_tmp3488;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0489;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1490;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2491;
  int c492 = 0;
  __retval479 = c492;
  // array copy
  __builtin_memcpy(b480, __const_main_b, (unsigned long)9 * sizeof(__const_main_b[0]));
  int* cast493 = (int*)&(b480);
  int* cast494 = (int*)&(b480);
  int c495 = 9;
  int* ptr496 = &(cast494)[c495];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&myset481, cast493, ptr496);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it482);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itlow483);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itup484);
    unsigned long r497 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset481);
    unsigned long c498 = 9;
    _Bool c499 = ((r497 == c498)) ? 1 : 0;
    if (c499) {
    } else {
      char* cast500 = (char*)&(_str);
      char* c501 = _str_1;
      unsigned int c502 = 20;
      char* cast503 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast500, c501, c502, cast503);
    }
    int c504 = 30;
    ref_tmp1486 = c504;
    struct std___Rb_tree_const_iterator_int_ r505 = std__multiset_int__std__less_int___std__allocator_int_____lower_bound(&myset481, &ref_tmp1486);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0485 = r505;
    struct std___Rb_tree_const_iterator_int_* r506 = std___Rb_tree_const_iterator_int___operator_(&itlow483, &ref_tmp0485);
    int* r507 = std___Rb_tree_const_iterator_int___operator____const(&itlow483);
    int t508 = *r507;
    int c509 = 30;
    _Bool c510 = ((t508 != c509)) ? 1 : 0;
    if (c510) {
    } else {
      char* cast511 = (char*)&(_str_2);
      char* c512 = _str_1;
      unsigned int c513 = 22;
      char* cast514 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast511, c512, c513, cast514);
    }
    int c515 = 60;
    ref_tmp3488 = c515;
    struct std___Rb_tree_const_iterator_int_ r516 = std__multiset_int__std__less_int___std__allocator_int_____upper_bound(&myset481, &ref_tmp3488);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp2487 = r516;
    struct std___Rb_tree_const_iterator_int_* r517 = std___Rb_tree_const_iterator_int___operator_(&itup484, &ref_tmp2487);
    int* r518 = std___Rb_tree_const_iterator_int___operator____const(&itup484);
    int t519 = *r518;
    int c520 = 70;
    _Bool c521 = ((t519 == c520)) ? 1 : 0;
    if (c521) {
    } else {
      char* cast522 = (char*)&(_str_3);
      char* c523 = _str_1;
      unsigned int c524 = 24;
      char* cast525 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast522, c523, c524, cast525);
    }
    agg_tmp0489 = itlow483; // copy
    agg_tmp1490 = itup484; // copy
    struct std___Rb_tree_const_iterator_int_ t526 = agg_tmp0489;
    struct std___Rb_tree_const_iterator_int_ t527 = agg_tmp1490;
    struct std___Rb_tree_const_iterator_int_ r528 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset481, t526, t527);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2491 = r528;
    unsigned long r529 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset481);
    unsigned long c530 = 5;
    _Bool c531 = ((r529 == c530)) ? 1 : 0;
    if (c531) {
    } else {
      char* cast532 = (char*)&(_str_4);
      char* c533 = _str_1;
      unsigned int c534 = 26;
      char* cast535 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast532, c533, c534, cast535);
    }
    char* cast536 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r537 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast536);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp4538;
      struct std___Rb_tree_const_iterator_int_ ref_tmp5539;
      struct std___Rb_tree_const_iterator_int_ agg_tmp3540;
      struct std___Rb_tree_const_iterator_int_ r541 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset481);
      ref_tmp4538 = r541;
      struct std___Rb_tree_const_iterator_int_* r542 = std___Rb_tree_const_iterator_int___operator_(&it482, &ref_tmp4538);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r544 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset481);
        ref_tmp5539 = r544;
        _Bool r545 = std__operator__(&it482, &ref_tmp5539);
        _Bool u546 = !r545;
        if (!u546) break;
        char* cast547 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r548 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast547);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r549 = std___Rb_tree_const_iterator_int___operator____const(&it482);
        int t550 = *r549;
        struct std__basic_ostream_char__std__char_traits_char__* r551 = std__ostream__operator__(r548, t550);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step543: ;
        int c552 = 0;
        struct std___Rb_tree_const_iterator_int_ r553 = std___Rb_tree_const_iterator_int___operator__(&it482, c552);
        agg_tmp3540 = r553;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r554 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c555 = 0;
    __retval479 = c555;
    int t556 = __retval479;
    int ret_val557 = t556;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset481);
    }
    return ret_val557;
  int t558 = __retval479;
  return t558;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v559) {
bb560:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this561;
  this561 = v559;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t562 = this561;
    struct std___Rb_tree_node_int_* r563 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t562);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t562, r563);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t562->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t562->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v564) {
bb565:
  struct std___Rb_tree_node_int_* this566;
  struct std___Rb_tree_node_int_* __retval567;
  this566 = v564;
  struct std___Rb_tree_node_int_* t568 = this566;
  __retval567 = t568;
  struct std___Rb_tree_node_int_* t569 = __retval567;
  return t569;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v570) {
bb571:
  struct std___Rb_tree_node_int_* __x572;
  struct std___Rb_tree_node_int_* __retval573;
  __x572 = v570;
  struct std___Rb_tree_node_int_* t574 = __x572;
  struct std___Rb_tree_node_base* base575 = (struct std___Rb_tree_node_base*)((char *)t574 + 0);
  struct std___Rb_tree_node_base* t576 = base575->_M_right;
  _Bool cast577 = (_Bool)t576;
  struct std___Rb_tree_node_int_* ternary578;
  if (cast577) {
    struct std___Rb_tree_node_int_* t579 = __x572;
    struct std___Rb_tree_node_base* base580 = (struct std___Rb_tree_node_base*)((char *)t579 + 0);
    struct std___Rb_tree_node_base* t581 = base580->_M_right;
    struct std___Rb_tree_node_int_* derived582 = (struct std___Rb_tree_node_int_*)((char *)t581 - 0);
    struct std___Rb_tree_node_int_* r583 = std___Rb_tree_node_int____M_node_ptr(derived582);
    ternary578 = (struct std___Rb_tree_node_int_*)r583;
  } else {
    struct std___Rb_tree_node_int_* c584 = ((void*)0);
    ternary578 = (struct std___Rb_tree_node_int_*)c584;
  }
  __retval573 = ternary578;
  struct std___Rb_tree_node_int_* t585 = __retval573;
  return t585;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v586) {
bb587:
  struct std___Rb_tree_node_int_* __x588;
  struct std___Rb_tree_node_int_* __retval589;
  __x588 = v586;
  struct std___Rb_tree_node_int_* t590 = __x588;
  struct std___Rb_tree_node_base* base591 = (struct std___Rb_tree_node_base*)((char *)t590 + 0);
  struct std___Rb_tree_node_base* t592 = base591->_M_left;
  _Bool cast593 = (_Bool)t592;
  struct std___Rb_tree_node_int_* ternary594;
  if (cast593) {
    struct std___Rb_tree_node_int_* t595 = __x588;
    struct std___Rb_tree_node_base* base596 = (struct std___Rb_tree_node_base*)((char *)t595 + 0);
    struct std___Rb_tree_node_base* t597 = base596->_M_left;
    struct std___Rb_tree_node_int_* derived598 = (struct std___Rb_tree_node_int_*)((char *)t597 - 0);
    struct std___Rb_tree_node_int_* r599 = std___Rb_tree_node_int____M_node_ptr(derived598);
    ternary594 = (struct std___Rb_tree_node_int_*)r599;
  } else {
    struct std___Rb_tree_node_int_* c600 = ((void*)0);
    ternary594 = (struct std___Rb_tree_node_int_*)c600;
  }
  __retval589 = ternary594;
  struct std___Rb_tree_node_int_* t601 = __retval589;
  return t601;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v602) {
bb603:
  int* __location604;
  __location604 = v602;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v605, int* v606) {
bb607:
  struct std__allocator_std___Rb_tree_node_int__* __a608;
  int* __p609;
  __a608 = v605;
  __p609 = v606;
  int* t610 = __p609;
  void_std__destroy_at_int_(t610);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v611) {
bb612:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this613;
  struct std__allocator_std___Rb_tree_node_int__* __retval614;
  this613 = v611;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t615 = this613;
  struct std__allocator_std___Rb_tree_node_int__* base616 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t615->_M_impl) + 0);
  __retval614 = base616;
  struct std__allocator_std___Rb_tree_node_int__* t617 = __retval614;
  return t617;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v618) {
bb619:
  struct __gnu_cxx____aligned_membuf_int_* this620;
  void* __retval621;
  this620 = v618;
  struct __gnu_cxx____aligned_membuf_int_* t622 = this620;
  void* cast623 = (void*)&(t622->_M_storage);
  __retval621 = cast623;
  void* t624 = __retval621;
  return t624;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v625) {
bb626:
  struct __gnu_cxx____aligned_membuf_int_* this627;
  int* __retval628;
  this627 = v625;
  struct __gnu_cxx____aligned_membuf_int_* t629 = this627;
  void* r630 = __gnu_cxx____aligned_membuf_int____M_addr(t629);
  int* cast631 = (int*)r630;
  __retval628 = cast631;
  int* t632 = __retval628;
  return t632;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v633) {
bb634:
  struct std___Rb_tree_node_int_* this635;
  int* __retval636;
  this635 = v633;
  struct std___Rb_tree_node_int_* t637 = this635;
  int* r638 = __gnu_cxx____aligned_membuf_int____M_ptr(&t637->_M_storage);
  __retval636 = r638;
  int* t639 = __retval636;
  return t639;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v640, struct std___Rb_tree_node_int_* v641) {
bb642:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this643;
  struct std___Rb_tree_node_int_* __p644;
  this643 = v640;
  __p644 = v641;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t645 = this643;
  struct std__allocator_std___Rb_tree_node_int__* r646 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t645);
  struct std___Rb_tree_node_int_* t647 = __p644;
  int* r648 = std___Rb_tree_node_int____M_valptr(t647);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r646, r648);
  struct std___Rb_tree_node_int_* t649 = __p644;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb650:
  _Bool __retval651;
    _Bool c652 = 0;
    __retval651 = c652;
    _Bool t653 = __retval651;
    return t653;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v654, struct std___Rb_tree_node_int_* v655, unsigned long v656) {
bb657:
  struct std____new_allocator_std___Rb_tree_node_int__* this658;
  struct std___Rb_tree_node_int_* __p659;
  unsigned long __n660;
  this658 = v654;
  __p659 = v655;
  __n660 = v656;
  struct std____new_allocator_std___Rb_tree_node_int__* t661 = this658;
    unsigned long c662 = 8;
    unsigned long c663 = 16;
    _Bool c664 = ((c662 > c663)) ? 1 : 0;
    if (c664) {
      struct std___Rb_tree_node_int_* t665 = __p659;
      void* cast666 = (void*)t665;
      unsigned long t667 = __n660;
      unsigned long c668 = 40;
      unsigned long b669 = t667 * c668;
      unsigned long c670 = 8;
      operator_delete_3(cast666, b669, c670);
      return;
    }
  struct std___Rb_tree_node_int_* t671 = __p659;
  void* cast672 = (void*)t671;
  unsigned long t673 = __n660;
  unsigned long c674 = 40;
  unsigned long b675 = t673 * c674;
  operator_delete_2(cast672, b675);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v676, struct std___Rb_tree_node_int_* v677, unsigned long v678) {
bb679:
  struct std__allocator_std___Rb_tree_node_int__* this680;
  struct std___Rb_tree_node_int_* __p681;
  unsigned long __n682;
  this680 = v676;
  __p681 = v677;
  __n682 = v678;
  struct std__allocator_std___Rb_tree_node_int__* t683 = this680;
    _Bool r684 = std____is_constant_evaluated();
    if (r684) {
      struct std___Rb_tree_node_int_* t685 = __p681;
      void* cast686 = (void*)t685;
      operator_delete(cast686);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base687 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t683 + 0);
  struct std___Rb_tree_node_int_* t688 = __p681;
  unsigned long t689 = __n682;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base687, t688, t689);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v690, struct std___Rb_tree_node_int_* v691, unsigned long v692) {
bb693:
  struct std__allocator_std___Rb_tree_node_int__* __a694;
  struct std___Rb_tree_node_int_* __p695;
  unsigned long __n696;
  __a694 = v690;
  __p695 = v691;
  __n696 = v692;
  struct std__allocator_std___Rb_tree_node_int__* t697 = __a694;
  struct std___Rb_tree_node_int_* t698 = __p695;
  unsigned long t699 = __n696;
  std__allocator_std___Rb_tree_node_int_____deallocate(t697, t698, t699);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v700, struct std___Rb_tree_node_int_* v701) {
bb702:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this703;
  struct std___Rb_tree_node_int_* __p704;
  this703 = v700;
  __p704 = v701;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t705 = this703;
  struct std__allocator_std___Rb_tree_node_int__* r706 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t705);
  struct std___Rb_tree_node_int_* t707 = __p704;
  unsigned long c708 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r706, t707, c708);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v709, struct std___Rb_tree_node_int_* v710) {
bb711:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this712;
  struct std___Rb_tree_node_int_* __p713;
  this712 = v709;
  __p713 = v710;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t714 = this712;
  struct std___Rb_tree_node_int_* t715 = __p713;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t714, t715);
  struct std___Rb_tree_node_int_* t716 = __p713;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t714, t716);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v717, struct std___Rb_tree_node_int_* v718) {
bb719:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this720;
  struct std___Rb_tree_node_int_* __x721;
  this720 = v717;
  __x721 = v718;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t722 = this720;
    while (1) {
      struct std___Rb_tree_node_int_* t723 = __x721;
      _Bool cast724 = (_Bool)t723;
      if (!cast724) break;
        struct std___Rb_tree_node_int_* __y725;
        struct std___Rb_tree_node_int_* t726 = __x721;
        struct std___Rb_tree_node_int_* r727 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t726);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t722, r727);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t728 = __x721;
        struct std___Rb_tree_node_int_* r729 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t728);
        if (__cir_exc_active) {
          return;
        }
        __y725 = r729;
        struct std___Rb_tree_node_int_* t730 = __x721;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t722, t730);
        struct std___Rb_tree_node_int_* t731 = __y725;
        __x721 = t731;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v732) {
bb733:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this734;
  struct std___Rb_tree_node_int_* __retval735;
  struct std___Rb_tree_node_base* __begin736;
  this734 = v732;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t737 = this734;
  struct std___Rb_tree_header* base738 = (struct std___Rb_tree_header*)((char *)&(t737->_M_impl) + 8);
  struct std___Rb_tree_node_base* t739 = base738->_M_header._M_parent;
  __begin736 = t739;
  struct std___Rb_tree_node_base* t740 = __begin736;
  _Bool cast741 = (_Bool)t740;
  struct std___Rb_tree_node_int_* ternary742;
  if (cast741) {
    struct std___Rb_tree_node_base* t743 = __begin736;
    struct std___Rb_tree_node_int_* derived744 = (struct std___Rb_tree_node_int_*)((char *)t743 - 0);
    struct std___Rb_tree_node_int_* r745 = std___Rb_tree_node_int____M_node_ptr(derived744);
    ternary742 = (struct std___Rb_tree_node_int_*)r745;
  } else {
    struct std___Rb_tree_node_int_* c746 = ((void*)0);
    ternary742 = (struct std___Rb_tree_node_int_*)c746;
  }
  __retval735 = ternary742;
  struct std___Rb_tree_node_int_* t747 = __retval735;
  return t747;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v748) {
bb749:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this750;
  this750 = v748;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t751 = this750;
  {
    struct std__allocator_std___Rb_tree_node_int__* base752 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t751 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base752);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v753) {
bb754:
  struct std__allocator_std___Rb_tree_node_int__* this755;
  this755 = v753;
  struct std__allocator_std___Rb_tree_node_int__* t756 = this755;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v757) {
bb758:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this759;
  this759 = v757;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t760 = this759;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t760->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v761, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v762) {
bb763:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this764;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t765;
  this764 = v761;
  __t765 = v762;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t766 = this764;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t767 = __t765;
  t766->_M_t = t767;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v768) {
bb769:
  struct std___Rb_tree_node_base* this770;
  struct std___Rb_tree_node_base* __retval771;
  this770 = v768;
  struct std___Rb_tree_node_base* t772 = this770;
  __retval771 = t772;
  struct std___Rb_tree_node_base* t773 = __retval771;
  return t773;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v774) {
bb775:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this776;
  struct std___Rb_tree_node_base* __retval777;
  this776 = v774;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t778 = this776;
  struct std___Rb_tree_header* base779 = (struct std___Rb_tree_header*)((char *)&(t778->_M_impl) + 8);
  struct std___Rb_tree_node_base* r780 = std___Rb_tree_node_base___M_base_ptr___const(&base779->_M_header);
  __retval777 = r780;
  struct std___Rb_tree_node_base* t781 = __retval777;
  return t781;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v782) {
bb783:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this784;
  unsigned long __retval785;
  this784 = v782;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t786 = this784;
  struct std___Rb_tree_header* base787 = (struct std___Rb_tree_header*)((char *)&(t786->_M_impl) + 8);
  unsigned long t788 = base787->_M_node_count;
  __retval785 = t788;
  unsigned long t789 = __retval785;
  return t789;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v790, int* v791, int* v792) {
bb793:
  struct std__less_int_* this794;
  int* __x795;
  int* __y796;
  _Bool __retval797;
  this794 = v790;
  __x795 = v791;
  __y796 = v792;
  struct std__less_int_* t798 = this794;
  int* t799 = __x795;
  int t800 = *t799;
  int* t801 = __y796;
  int t802 = *t801;
  _Bool c803 = ((t800 < t802)) ? 1 : 0;
  __retval797 = c803;
  _Bool t804 = __retval797;
  return t804;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v805, int* v806) {
bb807:
  struct std___Identity_int_* this808;
  int* __x809;
  int* __retval810;
  this808 = v805;
  __x809 = v806;
  struct std___Identity_int_* t811 = this808;
  int* t812 = __x809;
  __retval810 = t812;
  int* t813 = __retval810;
  return t813;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v814) {
bb815:
  struct __gnu_cxx____aligned_membuf_int_* this816;
  void* __retval817;
  this816 = v814;
  struct __gnu_cxx____aligned_membuf_int_* t818 = this816;
  void* cast819 = (void*)&(t818->_M_storage);
  __retval817 = cast819;
  void* t820 = __retval817;
  return t820;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v821) {
bb822:
  struct __gnu_cxx____aligned_membuf_int_* this823;
  int* __retval824;
  this823 = v821;
  struct __gnu_cxx____aligned_membuf_int_* t825 = this823;
  void* r826 = __gnu_cxx____aligned_membuf_int____M_addr___const(t825);
  int* cast827 = (int*)r826;
  __retval824 = cast827;
  int* t828 = __retval824;
  return t828;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v829) {
bb830:
  struct std___Rb_tree_node_int_* this831;
  int* __retval832;
  this831 = v829;
  struct std___Rb_tree_node_int_* t833 = this831;
  int* r834 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t833->_M_storage);
  __retval832 = r834;
  int* t835 = __retval832;
  return t835;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v836) {
bb837:
  struct std___Rb_tree_node_int_* __node838;
  int* __retval839;
  struct std___Identity_int_ ref_tmp0840;
  __node838 = v836;
  struct std___Rb_tree_node_int_* t841 = __node838;
  int* r842 = std___Rb_tree_node_int____M_valptr___const(t841);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r843 = std___Identity_int___operator___int_const___const(&ref_tmp0840, r842);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval839 = r843;
  int* t844 = __retval839;
  return t844;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v845) {
bb846:
  struct std___Rb_tree_node_base* __x847;
  int* __retval848;
  __x847 = v845;
  struct std___Rb_tree_node_base* t849 = __x847;
  struct std___Rb_tree_node_int_* derived850 = (struct std___Rb_tree_node_int_*)((char *)t849 - 0);
  int* r851 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived850);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval848 = r851;
  int* t852 = __retval848;
  return t852;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v853) {
bb854:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this855;
  struct std___Rb_tree_node_base** __retval856;
  this855 = v853;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t857 = this855;
  struct std___Rb_tree_header* base858 = (struct std___Rb_tree_header*)((char *)&(t857->_M_impl) + 8);
  __retval856 = &base858->_M_header._M_right;
  struct std___Rb_tree_node_base** t859 = __retval856;
  return t859;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v860, struct std___Rb_tree_node_base** v861, struct std___Rb_tree_node_base** v862) {
bb863:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this864;
  struct std___Rb_tree_node_base** __x865;
  struct std___Rb_tree_node_base** __y866;
  this864 = v860;
  __x865 = v861;
  __y866 = v862;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t867 = this864;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base868 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t867 + 0);
  struct std___Rb_tree_node_base** t869 = __x865;
  struct std___Rb_tree_node_base* t870 = *t869;
  t867->first = t870;
  struct std___Rb_tree_node_base** t871 = __y866;
  struct std___Rb_tree_node_base* t872 = *t871;
  t867->second = t872;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v873) {
bb874:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this875;
  struct std___Rb_tree_node_base* __retval876;
  this875 = v873;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t877 = this875;
  struct std___Rb_tree_header* base878 = (struct std___Rb_tree_header*)((char *)&(t877->_M_impl) + 8);
  struct std___Rb_tree_node_base* t879 = base878->_M_header._M_parent;
  __retval876 = t879;
  struct std___Rb_tree_node_base* t880 = __retval876;
  return t880;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v881) {
bb882:
  struct std___Rb_tree_node_base* __x883;
  struct std___Rb_tree_node_base* __retval884;
  __x883 = v881;
  struct std___Rb_tree_node_base* t885 = __x883;
  struct std___Rb_tree_node_base* t886 = t885->_M_left;
  __retval884 = t886;
  struct std___Rb_tree_node_base* t887 = __retval884;
  return t887;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v888, int* v889) {
bb890:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this891;
  int* __k892;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval893;
  struct std___Rb_tree_node_base* __x894;
  struct std___Rb_tree_node_base* __y895;
  this891 = v888;
  __k892 = v889;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t896 = this891;
  struct std___Rb_tree_node_base* r897 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t896);
  __x894 = r897;
  struct std___Rb_tree_node_base* r898 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t896);
  __y895 = r898;
    while (1) {
      struct std___Rb_tree_node_base* t899 = __x894;
      _Bool cast900 = (_Bool)t899;
      if (!cast900) break;
        struct std___Rb_tree_node_base* t901 = __x894;
        __y895 = t901;
        struct std___Rb_tree_key_compare_std__less_int__* base902 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t896->_M_impl) + 0);
        struct std__less_int_* cast903 = (struct std__less_int_*)base902;
        int* t904 = __k892;
        struct std___Rb_tree_node_base* t905 = __x894;
        int* r906 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t905);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r907 = std__less_int___operator___int_const___int_const___const(cast903, t904, r906);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary908;
        if (r907) {
          struct std___Rb_tree_node_base* t909 = __x894;
          struct std___Rb_tree_node_base* r910 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t909);
          ternary908 = (struct std___Rb_tree_node_base*)r910;
        } else {
          struct std___Rb_tree_node_base* t911 = __x894;
          struct std___Rb_tree_node_base* r912 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t911);
          ternary908 = (struct std___Rb_tree_node_base*)r912;
        }
        __x894 = ternary908;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval893, &__x894, &__y895);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t913 = __retval893;
  return t913;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v914, struct std___Rb_tree_node_base* v915) {
bb916:
  struct std___Rb_tree_iterator_int_* this917;
  struct std___Rb_tree_node_base* __x918;
  this917 = v914;
  __x918 = v915;
  struct std___Rb_tree_iterator_int_* t919 = this917;
  struct std___Rb_tree_node_base* t920 = __x918;
  t919->_M_node = t920;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v921) {
bb922:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this923;
  struct std___Rb_tree_node_base** __retval924;
  this923 = v921;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t925 = this923;
  struct std___Rb_tree_header* base926 = (struct std___Rb_tree_header*)((char *)&(t925->_M_impl) + 8);
  __retval924 = &base926->_M_header._M_left;
  struct std___Rb_tree_node_base** t927 = __retval924;
  return t927;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v928, struct std___Rb_tree_node_base** v929, struct std___Rb_tree_node_base** v930) {
bb931:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this932;
  struct std___Rb_tree_node_base** __x933;
  struct std___Rb_tree_node_base** __y934;
  this932 = v928;
  __x933 = v929;
  __y934 = v930;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t935 = this932;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base936 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t935 + 0);
  struct std___Rb_tree_node_base** t937 = __x933;
  struct std___Rb_tree_node_base* t938 = *t937;
  t935->first = t938;
  struct std___Rb_tree_node_base** t939 = __y934;
  struct std___Rb_tree_node_base* t940 = *t939;
  t935->second = t940;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v941) {
bb942:
  struct std___Rb_tree_iterator_int_* this943;
  struct std___Rb_tree_iterator_int_* __retval944;
  this943 = v941;
  struct std___Rb_tree_iterator_int_* t945 = this943;
  struct std___Rb_tree_node_base* t946 = t945->_M_node;
  struct std___Rb_tree_node_base* r947 = std___Rb_tree_decrement(t946);
  t945->_M_node = r947;
  __retval944 = t945;
  struct std___Rb_tree_iterator_int_* t948 = __retval944;
  return t948;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v949) {
bb950:
  struct std___Rb_tree_node_base* __x951;
  struct std___Rb_tree_node_base* __retval952;
  __x951 = v949;
  struct std___Rb_tree_node_base* t953 = __x951;
  struct std___Rb_tree_node_base* t954 = t953->_M_right;
  __retval952 = t954;
  struct std___Rb_tree_node_base* t955 = __retval952;
  return t955;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v956) {
bb957:
  struct std___Rb_tree_iterator_int_* this958;
  struct std___Rb_tree_iterator_int_* __retval959;
  this958 = v956;
  struct std___Rb_tree_iterator_int_* t960 = this958;
  struct std___Rb_tree_node_base* t961 = t960->_M_node;
  struct std___Rb_tree_node_base* r962 = std___Rb_tree_increment(t961);
  t960->_M_node = r962;
  __retval959 = t960;
  struct std___Rb_tree_iterator_int_* t963 = __retval959;
  return t963;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v964, struct std___Rb_tree_node_base** v965, struct std___Rb_tree_node_base** v966) {
bb967:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this968;
  struct std___Rb_tree_node_base** __x969;
  struct std___Rb_tree_node_base** __y970;
  this968 = v964;
  __x969 = v965;
  __y970 = v966;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t971 = this968;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base972 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t971 + 0);
  struct std___Rb_tree_node_base** t973 = __x969;
  struct std___Rb_tree_node_base* t974 = *t973;
  t971->first = t974;
  struct std___Rb_tree_node_base** t975 = __y970;
  struct std___Rb_tree_node_base* t976 = *t975;
  t971->second = t976;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v977, struct std___Rb_tree_const_iterator_int_ v978, int* v979) {
bb980:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this981;
  struct std___Rb_tree_const_iterator_int_ __position982;
  int* __k983;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval984;
  this981 = v977;
  __position982 = v978;
  __k983 = v979;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t985 = this981;
    struct std___Rb_tree_node_base* t986 = __position982._M_node;
    struct std___Rb_tree_node_base* r987 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t985);
    _Bool c988 = ((t986 == r987)) ? 1 : 0;
    if (c988) {
        unsigned long r989 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t985);
        unsigned long c990 = 0;
        _Bool c991 = ((r989 > c990)) ? 1 : 0;
        _Bool ternary992;
        if (c991) {
          struct std___Rb_tree_key_compare_std__less_int__* base993 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t985->_M_impl) + 0);
          struct std__less_int_* cast994 = (struct std__less_int_*)base993;
          int* t995 = __k983;
          struct std___Rb_tree_node_base** r996 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t985);
          struct std___Rb_tree_node_base* t997 = *r996;
          int* r998 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t997);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r999 = std__less_int___operator___int_const___int_const___const(cast994, t995, r998);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u1000 = !r999;
          ternary992 = (_Bool)u1000;
        } else {
          _Bool c1001 = 0;
          ternary992 = (_Bool)c1001;
        }
        if (ternary992) {
          struct std___Rb_tree_node_base* ref_tmp01002;
          struct std___Rb_tree_node_base* c1003 = ((void*)0);
          ref_tmp01002 = c1003;
          struct std___Rb_tree_node_base** r1004 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t985);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, &ref_tmp01002, r1004);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1005 = __retval984;
          return t1005;
        } else {
          int* t1006 = __k983;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1007 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t985, t1006);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval984 = r1007;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1008 = __retval984;
          return t1008;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1009 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t985->_M_impl) + 0);
        struct std__less_int_* cast1010 = (struct std__less_int_*)base1009;
        struct std___Rb_tree_node_base* t1011 = __position982._M_node;
        int* r1012 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1011);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1013 = __k983;
        _Bool r1014 = std__less_int___operator___int_const___int_const___const(cast1010, r1012, t1013);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1015 = !r1014;
        if (u1015) {
          struct std___Rb_tree_iterator_int_ __before1016;
          struct std___Rb_tree_node_base* t1017 = __position982._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1016, t1017);
            struct std___Rb_tree_node_base* t1018 = __position982._M_node;
            struct std___Rb_tree_node_base** r1019 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t985);
            struct std___Rb_tree_node_base* t1020 = *r1019;
            _Bool c1021 = ((t1018 == t1020)) ? 1 : 0;
            if (c1021) {
              struct std___Rb_tree_node_base** r1022 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t985);
              struct std___Rb_tree_node_base** r1023 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t985);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, r1022, r1023);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1024 = __retval984;
              return t1024;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1025 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t985->_M_impl) + 0);
                struct std__less_int_* cast1026 = (struct std__less_int_*)base1025;
                int* t1027 = __k983;
                struct std___Rb_tree_iterator_int_* r1028 = std___Rb_tree_iterator_int___operator__(&__before1016);
                struct std___Rb_tree_node_base* t1029 = r1028->_M_node;
                int* r1030 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1029);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r1031 = std__less_int___operator___int_const___int_const___const(cast1026, t1027, r1030);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1032 = !r1031;
                if (u1032) {
                    struct std___Rb_tree_node_base* t1033 = __before1016._M_node;
                    struct std___Rb_tree_node_base* r1034 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1033);
                    _Bool cast1035 = (_Bool)r1034;
                    _Bool u1036 = !cast1035;
                    if (u1036) {
                      struct std___Rb_tree_node_base* ref_tmp11037;
                      struct std___Rb_tree_node_base* c1038 = ((void*)0);
                      ref_tmp11037 = c1038;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, &ref_tmp11037, &__before1016._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1039 = __retval984;
                      return t1039;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, &__position982._M_node, &__position982._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1040 = __retval984;
                      return t1040;
                    }
                } else {
                  int* t1041 = __k983;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1042 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t985, t1041);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval984 = r1042;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1043 = __retval984;
                  return t1043;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after1044;
          struct std___Rb_tree_node_base* t1045 = __position982._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1044, t1045);
            struct std___Rb_tree_node_base* t1046 = __position982._M_node;
            struct std___Rb_tree_node_base** r1047 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t985);
            struct std___Rb_tree_node_base* t1048 = *r1047;
            _Bool c1049 = ((t1046 == t1048)) ? 1 : 0;
            if (c1049) {
              struct std___Rb_tree_node_base* ref_tmp21050;
              struct std___Rb_tree_node_base* c1051 = ((void*)0);
              ref_tmp21050 = c1051;
              struct std___Rb_tree_node_base** r1052 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t985);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, &ref_tmp21050, r1052);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1053 = __retval984;
              return t1053;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1054 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t985->_M_impl) + 0);
                struct std__less_int_* cast1055 = (struct std__less_int_*)base1054;
                struct std___Rb_tree_iterator_int_* r1056 = std___Rb_tree_iterator_int___operator___2(&__after1044);
                struct std___Rb_tree_node_base* t1057 = r1056->_M_node;
                int* r1058 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1057);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1059 = __k983;
                _Bool r1060 = std__less_int___operator___int_const___int_const___const(cast1055, r1058, t1059);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1061 = !r1060;
                if (u1061) {
                    struct std___Rb_tree_node_base* t1062 = __position982._M_node;
                    struct std___Rb_tree_node_base* r1063 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1062);
                    _Bool cast1064 = (_Bool)r1063;
                    _Bool u1065 = !cast1064;
                    if (u1065) {
                      struct std___Rb_tree_node_base* ref_tmp31066;
                      struct std___Rb_tree_node_base* c1067 = ((void*)0);
                      ref_tmp31066 = c1067;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, &ref_tmp31066, &__position982._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1068 = __retval984;
                      return t1068;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval984, &__after1044._M_node, &__after1044._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1069 = __retval984;
                      return t1069;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp41070;
                  struct std___Rb_tree_node_base* ref_tmp51071;
                  struct std___Rb_tree_node_base* c1072 = ((void*)0);
                  ref_tmp41070 = c1072;
                  struct std___Rb_tree_node_base* c1073 = ((void*)0);
                  ref_tmp51071 = c1073;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval984, &ref_tmp41070, &ref_tmp51071);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1074 = __retval984;
                  return t1074;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1075, int* v1076) {
bb1077:
  struct std___Identity_int_* this1078;
  int* __x1079;
  int* __retval1080;
  this1078 = v1075;
  __x1079 = v1076;
  struct std___Identity_int_* t1081 = this1078;
  int* t1082 = __x1079;
  __retval1080 = t1082;
  int* t1083 = __retval1080;
  return t1083;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1084) {
bb1085:
  struct std____new_allocator_std___Rb_tree_node_int__* this1086;
  unsigned long __retval1087;
  this1086 = v1084;
  struct std____new_allocator_std___Rb_tree_node_int__* t1088 = this1086;
  unsigned long c1089 = 9223372036854775807;
  unsigned long c1090 = 40;
  unsigned long b1091 = c1089 / c1090;
  __retval1087 = b1091;
  unsigned long t1092 = __retval1087;
  return t1092;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1093, unsigned long v1094, void* v1095) {
bb1096:
  struct std____new_allocator_std___Rb_tree_node_int__* this1097;
  unsigned long __n1098;
  void* unnamed1099;
  struct std___Rb_tree_node_int_* __retval1100;
  this1097 = v1093;
  __n1098 = v1094;
  unnamed1099 = v1095;
  struct std____new_allocator_std___Rb_tree_node_int__* t1101 = this1097;
    unsigned long t1102 = __n1098;
    unsigned long r1103 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1101);
    _Bool c1104 = ((t1102 > r1103)) ? 1 : 0;
    if (c1104) {
        unsigned long t1105 = __n1098;
        unsigned long c1106 = -1;
        unsigned long c1107 = 40;
        unsigned long b1108 = c1106 / c1107;
        _Bool c1109 = ((t1105 > b1108)) ? 1 : 0;
        if (c1109) {
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
    unsigned long c1110 = 8;
    unsigned long c1111 = 16;
    _Bool c1112 = ((c1110 > c1111)) ? 1 : 0;
    if (c1112) {
      unsigned long __al1113;
      unsigned long c1114 = 8;
      __al1113 = c1114;
      unsigned long t1115 = __n1098;
      unsigned long c1116 = 40;
      unsigned long b1117 = t1115 * c1116;
      unsigned long t1118 = __al1113;
      void* r1119 = operator_new_2(b1117, t1118);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1120 = (struct std___Rb_tree_node_int_*)r1119;
      __retval1100 = cast1120;
      struct std___Rb_tree_node_int_* t1121 = __retval1100;
      return t1121;
    }
  unsigned long t1122 = __n1098;
  unsigned long c1123 = 40;
  unsigned long b1124 = t1122 * c1123;
  void* r1125 = operator_new(b1124);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1126 = (struct std___Rb_tree_node_int_*)r1125;
  __retval1100 = cast1126;
  struct std___Rb_tree_node_int_* t1127 = __retval1100;
  return t1127;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1128, unsigned long v1129) {
bb1130:
  struct std__allocator_std___Rb_tree_node_int__* this1131;
  unsigned long __n1132;
  struct std___Rb_tree_node_int_* __retval1133;
  this1131 = v1128;
  __n1132 = v1129;
  struct std__allocator_std___Rb_tree_node_int__* t1134 = this1131;
    _Bool r1135 = std____is_constant_evaluated();
    if (r1135) {
        unsigned long t1136 = __n1132;
        unsigned long c1137 = 40;
        unsigned long ovr1138;
        _Bool ovf1139 = __builtin_mul_overflow(t1136, c1137, &ovr1138);
        __n1132 = ovr1138;
        if (ovf1139) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1140 = __n1132;
      void* r1141 = operator_new(t1140);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1142 = (struct std___Rb_tree_node_int_*)r1141;
      __retval1133 = cast1142;
      struct std___Rb_tree_node_int_* t1143 = __retval1133;
      return t1143;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1144 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1134 + 0);
  unsigned long t1145 = __n1132;
  void* c1146 = ((void*)0);
  struct std___Rb_tree_node_int_* r1147 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1144, t1145, c1146);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1133 = r1147;
  struct std___Rb_tree_node_int_* t1148 = __retval1133;
  return t1148;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1149, unsigned long v1150) {
bb1151:
  struct std__allocator_std___Rb_tree_node_int__* __a1152;
  unsigned long __n1153;
  struct std___Rb_tree_node_int_* __retval1154;
  __a1152 = v1149;
  __n1153 = v1150;
  struct std__allocator_std___Rb_tree_node_int__* t1155 = __a1152;
  unsigned long t1156 = __n1153;
  struct std___Rb_tree_node_int_* r1157 = std__allocator_std___Rb_tree_node_int_____allocate(t1155, t1156);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1154 = r1157;
  struct std___Rb_tree_node_int_* t1158 = __retval1154;
  return t1158;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1159) {
bb1160:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1161;
  struct std___Rb_tree_node_int_* __retval1162;
  this1161 = v1159;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1163 = this1161;
  struct std__allocator_std___Rb_tree_node_int__* r1164 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1163);
  unsigned long c1165 = 1;
  struct std___Rb_tree_node_int_* r1166 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1164, c1165);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1162 = r1166;
  struct std___Rb_tree_node_int_* t1167 = __retval1162;
  return t1167;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1168, int* v1169) {
bb1170:
  int* __location1171;
  int* __args1172;
  int* __retval1173;
  void* __loc1174;
  __location1171 = v1168;
  __args1172 = v1169;
  int* t1175 = __location1171;
  void* cast1176 = (void*)t1175;
  __loc1174 = cast1176;
    void* t1177 = __loc1174;
    int* cast1178 = (int*)t1177;
    int* t1179 = __args1172;
    int t1180 = *t1179;
    *cast1178 = t1180;
    __retval1173 = cast1178;
    int* t1181 = __retval1173;
    return t1181;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1182, int* v1183, int* v1184) {
bb1185:
  struct std__allocator_std___Rb_tree_node_int__* __a1186;
  int* __p1187;
  int* __args1188;
  __a1186 = v1182;
  __p1187 = v1183;
  __args1188 = v1184;
  int* t1189 = __p1187;
  int* t1190 = __args1188;
  int* r1191 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1189, t1190);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1192, struct std___Rb_tree_node_int_* v1193, int* v1194) {
bb1195:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1196;
  struct std___Rb_tree_node_int_* __node1197;
  int* __args1198;
  this1196 = v1192;
  __node1197 = v1193;
  __args1198 = v1194;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1199 = this1196;
      struct std__allocator_std___Rb_tree_node_int__* r1201 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1199);
      struct std___Rb_tree_node_int_* t1202 = __node1197;
      int* r1203 = std___Rb_tree_node_int____M_valptr(t1202);
      if (__cir_exc_active) {
        goto cir_try_dispatch1200;
      }
      int* t1204 = __args1198;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1201, r1203, t1204);
    cir_try_dispatch1200: ;
    if (__cir_exc_active) {
    {
      int ca_tok1205 = 0;
      void* ca_exn1206 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1207 = __node1197;
        struct std___Rb_tree_node_int_* t1208 = __node1197;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1199, t1208);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1209, int* v1210) {
bb1211:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1212;
  int* __args1213;
  struct std___Rb_tree_node_int_* __retval1214;
  struct std___Rb_tree_node_int_* __tmp1215;
  this1212 = v1209;
  __args1213 = v1210;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1216 = this1212;
  struct std___Rb_tree_node_int_* r1217 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1216);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1215 = r1217;
  struct std___Rb_tree_node_int_* t1218 = __tmp1215;
  int* t1219 = __args1213;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1216, t1218, t1219);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1220 = __tmp1215;
  __retval1214 = t1220;
  struct std___Rb_tree_node_int_* t1221 = __retval1214;
  return t1221;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1222, int* v1223) {
bb1224:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1225;
  int* __arg1226;
  struct std___Rb_tree_node_int_* __retval1227;
  this1225 = v1222;
  __arg1226 = v1223;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1228 = this1225;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1229 = t1228->_M_t;
  int* t1230 = __arg1226;
  struct std___Rb_tree_node_int_* r1231 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1229, t1230);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1227 = r1231;
  struct std___Rb_tree_node_int_* t1232 = __retval1227;
  return t1232;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1233, struct std___Rb_tree_node_base* v1234, struct std___Rb_tree_node_base* v1235, struct std___Rb_tree_node_base* v1236) {
bb1237:
  _Bool __insert_left1238;
  struct std___Rb_tree_node_base* __x1239;
  struct std___Rb_tree_node_base* __p1240;
  struct std___Rb_tree_node_base* __header1241;
  __insert_left1238 = v1233;
  __x1239 = v1234;
  __p1240 = v1235;
  __header1241 = v1236;
  _Bool t1242 = __insert_left1238;
  struct std___Rb_tree_node_base* t1243 = __x1239;
  struct std___Rb_tree_node_base* t1244 = __p1240;
  struct std___Rb_tree_node_base* t1245 = __header1241;
  std___Rb_tree_insert_and_rebalance(t1242, t1243, t1244, t1245);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1246, struct std___Rb_tree_node_base* v1247, struct std___Rb_tree_node_base* v1248, int* v1249, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1250) {
bb1251:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1252;
  struct std___Rb_tree_node_base* __x1253;
  struct std___Rb_tree_node_base* __p1254;
  int* __v1255;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1256;
  struct std___Rb_tree_iterator_int_ __retval1257;
  _Bool __insert_left1258;
  struct std___Rb_tree_node_base* __z1259;
  this1252 = v1246;
  __x1253 = v1247;
  __p1254 = v1248;
  __v1255 = v1249;
  __node_gen1256 = v1250;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1260 = this1252;
  struct std___Rb_tree_node_base* t1261 = __x1253;
  _Bool cast1262 = (_Bool)t1261;
  _Bool ternary1263;
  if (cast1262) {
    _Bool c1264 = 1;
    ternary1263 = (_Bool)c1264;
  } else {
    struct std___Rb_tree_node_base* t1265 = __p1254;
    struct std___Rb_tree_node_base* r1266 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1260);
    _Bool c1267 = ((t1265 == r1266)) ? 1 : 0;
    ternary1263 = (_Bool)c1267;
  }
  _Bool ternary1268;
  if (ternary1263) {
    _Bool c1269 = 1;
    ternary1268 = (_Bool)c1269;
  } else {
    struct std___Identity_int_ ref_tmp01270;
    struct std___Rb_tree_key_compare_std__less_int__* base1271 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1260->_M_impl) + 0);
    struct std__less_int_* cast1272 = (struct std__less_int_*)base1271;
    int* t1273 = __v1255;
    int* r1274 = std___Identity_int___operator___int___const(&ref_tmp01270, t1273);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1275 = __p1254;
    int* r1276 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1275);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1277 = std__less_int___operator___int_const___int_const___const(cast1272, r1274, r1276);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1268 = (_Bool)r1277;
  }
  __insert_left1258 = ternary1268;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1278 = __node_gen1256;
  int* t1279 = __v1255;
  struct std___Rb_tree_node_int_* r1280 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1278, t1279);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1281 = (struct std___Rb_tree_node_base*)((char *)r1280 + 0);
  struct std___Rb_tree_node_base* r1282 = std___Rb_tree_node_base___M_base_ptr___const(base1281);
  __z1259 = r1282;
  _Bool t1283 = __insert_left1258;
  struct std___Rb_tree_node_base* t1284 = __z1259;
  struct std___Rb_tree_node_base* t1285 = __p1254;
  struct std___Rb_tree_header* base1286 = (struct std___Rb_tree_header*)((char *)&(t1260->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1283, t1284, t1285, &base1286->_M_header);
  struct std___Rb_tree_header* base1287 = (struct std___Rb_tree_header*)((char *)&(t1260->_M_impl) + 8);
  unsigned long t1288 = base1287->_M_node_count;
  unsigned long u1289 = t1288 + 1;
  base1287->_M_node_count = u1289;
  struct std___Rb_tree_node_base* t1290 = __z1259;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1257, t1290);
  struct std___Rb_tree_iterator_int_ t1291 = __retval1257;
  return t1291;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1292, struct std___Rb_tree_node_base* v1293, int* v1294) {
bb1295:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1296;
  struct std___Rb_tree_node_base* __p1297;
  int* __v1298;
  struct std___Rb_tree_iterator_int_ __retval1299;
  _Bool __insert_left1300;
  struct std___Rb_tree_node_base* __z1301;
  this1296 = v1292;
  __p1297 = v1293;
  __v1298 = v1294;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1302 = this1296;
  struct std___Rb_tree_node_base* t1303 = __p1297;
  struct std___Rb_tree_node_base* r1304 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1302);
  _Bool c1305 = ((t1303 == r1304)) ? 1 : 0;
  _Bool ternary1306;
  if (c1305) {
    _Bool c1307 = 1;
    ternary1306 = (_Bool)c1307;
  } else {
    struct std___Identity_int_ ref_tmp01308;
    struct std___Rb_tree_key_compare_std__less_int__* base1309 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1302->_M_impl) + 0);
    struct std__less_int_* cast1310 = (struct std__less_int_*)base1309;
    struct std___Rb_tree_node_base* t1311 = __p1297;
    int* r1312 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1311);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1313 = __v1298;
    int* r1314 = std___Identity_int___operator___int___const(&ref_tmp01308, t1313);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1315 = std__less_int___operator___int_const___int_const___const(cast1310, r1312, r1314);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u1316 = !r1315;
    ternary1306 = (_Bool)u1316;
  }
  __insert_left1300 = ternary1306;
  int* t1317 = __v1298;
  struct std___Rb_tree_node_int_* r1318 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1302, t1317);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1319 = (struct std___Rb_tree_node_base*)((char *)r1318 + 0);
  struct std___Rb_tree_node_base* r1320 = std___Rb_tree_node_base___M_base_ptr___const(base1319);
  __z1301 = r1320;
  _Bool t1321 = __insert_left1300;
  struct std___Rb_tree_node_base* t1322 = __z1301;
  struct std___Rb_tree_node_base* t1323 = __p1297;
  struct std___Rb_tree_header* base1324 = (struct std___Rb_tree_header*)((char *)&(t1302->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1321, t1322, t1323, &base1324->_M_header);
  struct std___Rb_tree_header* base1325 = (struct std___Rb_tree_header*)((char *)&(t1302->_M_impl) + 8);
  unsigned long t1326 = base1325->_M_node_count;
  unsigned long u1327 = t1326 + 1;
  base1325->_M_node_count = u1327;
  struct std___Rb_tree_node_base* t1328 = __z1301;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1299, t1328);
  struct std___Rb_tree_iterator_int_ t1329 = __retval1299;
  return t1329;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1330, int* v1331) {
bb1332:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1333;
  int* __v1334;
  struct std___Rb_tree_iterator_int_ __retval1335;
  struct std___Rb_tree_node_base* __x1336;
  struct std___Rb_tree_node_base* __y1337;
  this1333 = v1330;
  __v1334 = v1331;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1338 = this1333;
  struct std___Rb_tree_node_base* r1339 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1338);
  __x1336 = r1339;
  struct std___Rb_tree_node_base* r1340 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1338);
  __y1337 = r1340;
    while (1) {
      struct std___Rb_tree_node_base* t1341 = __x1336;
      _Bool cast1342 = (_Bool)t1341;
      if (!cast1342) break;
        struct std___Identity_int_ ref_tmp01343;
        struct std___Rb_tree_node_base** tmp_exprcleanup1344;
        struct std___Rb_tree_node_base* t1345 = __x1336;
        __y1337 = t1345;
        struct std___Rb_tree_key_compare_std__less_int__* base1346 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1338->_M_impl) + 0);
        struct std__less_int_* cast1347 = (struct std__less_int_*)base1346;
        struct std___Rb_tree_node_base* t1348 = __x1336;
        int* r1349 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1348);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1350 = __v1334;
        int* r1351 = std___Identity_int___operator___int___const(&ref_tmp01343, t1350);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1352 = std__less_int___operator___int_const___int_const___const(cast1347, r1349, r1351);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1353 = !r1352;
        struct std___Rb_tree_node_base* ternary1354;
        if (u1353) {
          struct std___Rb_tree_node_base* t1355 = __x1336;
          struct std___Rb_tree_node_base* r1356 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1355);
          ternary1354 = (struct std___Rb_tree_node_base*)r1356;
        } else {
          struct std___Rb_tree_node_base* t1357 = __x1336;
          struct std___Rb_tree_node_base* r1358 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1357);
          ternary1354 = (struct std___Rb_tree_node_base*)r1358;
        }
        __x1336 = ternary1354;
        tmp_exprcleanup1344 = &__x1336;
        struct std___Rb_tree_node_base** t1359 = tmp_exprcleanup1344;
    }
  struct std___Rb_tree_node_base* t1360 = __y1337;
  int* t1361 = __v1334;
  struct std___Rb_tree_iterator_int_ r1362 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1338, t1360, t1361);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1335 = r1362;
  struct std___Rb_tree_iterator_int_ t1363 = __retval1335;
  return t1363;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1364, struct std___Rb_tree_const_iterator_int_ v1365, int* v1366, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1367) {
bb1368:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1369;
  struct std___Rb_tree_const_iterator_int_ __position1370;
  int* __v1371;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1372;
  struct std___Rb_tree_iterator_int_ __retval1373;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1374;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01375;
  struct std___Identity_int_ ref_tmp01376;
  this1369 = v1364;
  __position1370 = v1365;
  __v1371 = v1366;
  __node_gen1372 = v1367;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1377 = this1369;
  agg_tmp01375 = __position1370; // copy
  int* t1378 = __v1371;
  int* r1379 = std___Identity_int___operator___int___const(&ref_tmp01376, t1378);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1380 = agg_tmp01375;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1381 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1377, t1380, r1379);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1374 = r1381;
    struct std___Rb_tree_node_base* t1382 = __res1374.second;
    _Bool cast1383 = (_Bool)t1382;
    if (cast1383) {
      struct std___Rb_tree_node_base* t1384 = __res1374.first;
      struct std___Rb_tree_node_base* t1385 = __res1374.second;
      int* t1386 = __v1371;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1387 = __node_gen1372;
      struct std___Rb_tree_iterator_int_ r1388 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1377, t1384, t1385, t1386, t1387);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1373 = r1388;
      struct std___Rb_tree_iterator_int_ t1389 = __retval1373;
      return t1389;
    }
  int* t1390 = __v1371;
  struct std___Rb_tree_iterator_int_ r1391 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1377, t1390);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1373 = r1391;
  struct std___Rb_tree_iterator_int_ t1392 = __retval1373;
  return t1392;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1393) {
bb1394:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1395;
  struct std___Rb_tree_iterator_int_ __retval1396;
  this1395 = v1393;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1397 = this1395;
  struct std___Rb_tree_node_base* r1398 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1397);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1396, r1398);
  struct std___Rb_tree_iterator_int_ t1399 = __retval1396;
  return t1399;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1400, struct std___Rb_tree_iterator_int_* v1401) {
bb1402:
  struct std___Rb_tree_const_iterator_int_* this1403;
  struct std___Rb_tree_iterator_int_* __it1404;
  this1403 = v1400;
  __it1404 = v1401;
  struct std___Rb_tree_const_iterator_int_* t1405 = this1403;
  struct std___Rb_tree_iterator_int_* t1406 = __it1404;
  struct std___Rb_tree_node_base* t1407 = t1406->_M_node;
  t1405->_M_node = t1407;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1408, int* v1409, int* v1410) {
bb1411:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1412;
  int* __first1413;
  int* __last1414;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1415;
  this1412 = v1408;
  __first1413 = v1409;
  __last1414 = v1410;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1416 = this1412;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1415, t1416);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01417;
    struct std___Rb_tree_iterator_int_ ref_tmp01418;
    struct std___Rb_tree_iterator_int_ agg_tmp11419;
    while (1) {
      int* t1421 = __first1413;
      int* t1422 = __last1414;
      _Bool c1423 = ((t1421 != t1422)) ? 1 : 0;
      if (!c1423) break;
      struct std___Rb_tree_iterator_int_ r1424 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1416);
      ref_tmp01418 = r1424;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01417, &ref_tmp01418);
      int* t1425 = __first1413;
      struct std___Rb_tree_const_iterator_int_ t1426 = agg_tmp01417;
      struct std___Rb_tree_iterator_int_ r1427 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1416, t1426, t1425, &__an1415);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11419 = r1427;
    for_step1420: ;
      int* t1428 = __first1413;
      int c1429 = 1;
      int* ptr1430 = &(t1428)[c1429];
      __first1413 = ptr1430;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1431) {
bb1432:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1433;
  this1433 = v1431;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1434 = this1433;
  struct std__allocator_std___Rb_tree_node_int__* base1435 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1434 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1435);
    struct std___Rb_tree_key_compare_std__less_int__* base1436 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1434 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1436);
    struct std___Rb_tree_header* base1437 = (struct std___Rb_tree_header*)((char *)t1434 + 8);
    std___Rb_tree_header___Rb_tree_header(base1437);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1438) {
bb1439:
  struct std____new_allocator_std___Rb_tree_node_int__* this1440;
  this1440 = v1438;
  struct std____new_allocator_std___Rb_tree_node_int__* t1441 = this1440;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1442) {
bb1443:
  struct std__allocator_std___Rb_tree_node_int__* this1444;
  this1444 = v1442;
  struct std__allocator_std___Rb_tree_node_int__* t1445 = this1444;
  struct std____new_allocator_std___Rb_tree_node_int__* base1446 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1445 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1446);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1447) {
bb1448:
  struct std___Rb_tree_key_compare_std__less_int__* this1449;
  this1449 = v1447;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1450) {
bb1451:
  struct std___Rb_tree_header* this1452;
  this1452 = v1450;
  struct std___Rb_tree_header* t1453 = this1452;
  struct std___Rb_tree_node_base* c1454 = ((void*)0);
  t1453->_M_header._M_parent = c1454;
  t1453->_M_header._M_left = &t1453->_M_header;
  t1453->_M_header._M_right = &t1453->_M_header;
  unsigned long c1455 = 0;
  t1453->_M_node_count = c1455;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1456) {
bb1457:
  struct std___Rb_tree_header* this1458;
  this1458 = v1456;
  struct std___Rb_tree_header* t1459 = this1458;
  unsigned int c1460 = 0;
  t1459->_M_header._M_color = c1460;
  std___Rb_tree_header___M_reset(t1459);
  if (__cir_exc_active) {
    return;
  }
  return;
}

