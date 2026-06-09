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
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { unsigned char __field0; };
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
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
char _str[10] = "*it == 20";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-erase-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 30";
char _str_3[8] = "*it==10";
char _str_4[8] = "*it==30";
char _str_5[8] = "*it!=50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_7[20] = "__position != end()";
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p0, struct std___Rb_tree_iterator_int_* p1, struct std___Rb_tree_iterator_int_* p2);
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____erase(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v16, struct std___Rb_tree_node_base* v17) {
bb18:
  struct std___Rb_tree_const_iterator_int_* this19;
  struct std___Rb_tree_node_base* __x20;
  this19 = v16;
  __x20 = v17;
  struct std___Rb_tree_const_iterator_int_* t21 = this19;
  struct std___Rb_tree_node_base* t22 = __x20;
  t21->_M_node = t22;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23) {
bb24:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this25;
  struct std___Rb_tree_const_iterator_int_ __retval26;
  this25 = v23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t27 = this25;
  struct std___Rb_tree_header* base28 = (struct std___Rb_tree_header*)((char *)&(t27->_M_impl) + 8);
  struct std___Rb_tree_node_base* t29 = base28->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval26, t29);
  struct std___Rb_tree_const_iterator_int_ t30 = __retval26;
  return t30;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v31) {
bb32:
  struct std__multiset_int__std__less_int___std__allocator_int__* this33;
  struct std___Rb_tree_const_iterator_int_ __retval34;
  this33 = v31;
  struct std__multiset_int__std__less_int___std__allocator_int__* t35 = this33;
  struct std___Rb_tree_const_iterator_int_ r36 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t35->_M_t);
  __retval34 = r36;
  struct std___Rb_tree_const_iterator_int_ t37 = __retval34;
  return t37;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v38, struct std___Rb_tree_const_iterator_int_* v39) {
bb40:
  struct std___Rb_tree_const_iterator_int_* this41;
  struct std___Rb_tree_const_iterator_int_* unnamed42;
  struct std___Rb_tree_const_iterator_int_* __retval43;
  this41 = v38;
  unnamed42 = v39;
  struct std___Rb_tree_const_iterator_int_* t44 = this41;
  struct std___Rb_tree_const_iterator_int_* t45 = unnamed42;
  struct std___Rb_tree_node_base* t46 = t45->_M_node;
  t44->_M_node = t46;
  __retval43 = t44;
  struct std___Rb_tree_const_iterator_int_* t47 = __retval43;
  return t47;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v48, int v49) {
bb50:
  struct std___Rb_tree_const_iterator_int_* this51;
  int unnamed52;
  struct std___Rb_tree_const_iterator_int_ __retval53;
  this51 = v48;
  unnamed52 = v49;
  struct std___Rb_tree_const_iterator_int_* t54 = this51;
  __retval53 = *t54; // copy
  struct std___Rb_tree_node_base* t55 = t54->_M_node;
  struct std___Rb_tree_node_base* r56 = std___Rb_tree_increment(t55);
  t54->_M_node = r56;
  struct std___Rb_tree_const_iterator_int_ t57 = __retval53;
  return t57;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v58) {
bb59:
  struct std___Rb_tree_const_iterator_int_* this60;
  int* __retval61;
  this60 = v58;
  struct std___Rb_tree_const_iterator_int_* t62 = this60;
  struct std___Rb_tree_node_base* t63 = t62->_M_node;
  struct std___Rb_tree_node_int_* derived64 = ((t63) ? (struct std___Rb_tree_node_int_*)((char *)t63 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r65 = std___Rb_tree_node_int____M_valptr___const(derived64);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval61 = r65;
  int* t66 = __retval61;
  return t66;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v67, struct std___Rb_tree_const_iterator_int_* v68) {
bb69:
  struct std___Rb_tree_const_iterator_int_* __x70;
  struct std___Rb_tree_const_iterator_int_* __y71;
  _Bool __retval72;
  __x70 = v67;
  __y71 = v68;
  struct std___Rb_tree_const_iterator_int_* t73 = __x70;
  struct std___Rb_tree_node_base* t74 = t73->_M_node;
  struct std___Rb_tree_const_iterator_int_* t75 = __y71;
  struct std___Rb_tree_node_base* t76 = t75->_M_node;
  _Bool c77 = ((t74 == t76)) ? 1 : 0;
  __retval72 = c77;
  _Bool t78 = __retval72;
  return t78;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v79) {
bb80:
  struct std___Rb_tree_const_iterator_int_* this81;
  struct std___Rb_tree_const_iterator_int_* __retval82;
  this81 = v79;
  struct std___Rb_tree_const_iterator_int_* t83 = this81;
  struct std___Rb_tree_node_base* t84 = t83->_M_node;
  struct std___Rb_tree_node_base* r85 = std___Rb_tree_increment(t84);
  t83->_M_node = r85;
  __retval82 = t83;
  struct std___Rb_tree_const_iterator_int_* t86 = __retval82;
  return t86;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v87, struct std___Rb_tree_node_base* v88) {
bb89:
  struct std___Rb_tree_node_base* __z90;
  struct std___Rb_tree_node_base* __header91;
  struct std___Rb_tree_node_base* __retval92;
  __z90 = v87;
  __header91 = v88;
  struct std___Rb_tree_node_base* t93 = __z90;
  struct std___Rb_tree_node_base* t94 = __header91;
  struct std___Rb_tree_node_base* r95 = std___Rb_tree_rebalance_for_erase(t93, t94);
  __retval92 = r95;
  struct std___Rb_tree_node_base* t96 = __retval92;
  return t96;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v97, struct std___Rb_tree_const_iterator_int_ v98) {
bb99:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this100;
  struct std___Rb_tree_const_iterator_int_ __position101;
  struct std___Rb_tree_node_base* __y102;
  this100 = v97;
  __position101 = v98;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t103 = this100;
  struct std___Rb_tree_node_base* t104 = __position101._M_node;
  struct std___Rb_tree_header* base105 = (struct std___Rb_tree_header*)((char *)&(t103->_M_impl) + 8);
  struct std___Rb_tree_node_base* r106 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t104, &base105->_M_header);
  __y102 = r106;
  struct std___Rb_tree_node_base* t107 = __y102;
  struct std___Rb_tree_node_int_* derived108 = (struct std___Rb_tree_node_int_*)((char *)t107 - 0);
  struct std___Rb_tree_node_int_* r109 = std___Rb_tree_node_int____M_node_ptr(derived108);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t103, r109);
  struct std___Rb_tree_header* base110 = (struct std___Rb_tree_header*)((char *)&(t103->_M_impl) + 8);
  unsigned long t111 = base110->_M_node_count;
  unsigned long u112 = t111 - 1;
  base110->_M_node_count = u112;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v113, struct std___Rb_tree_const_iterator_int_ v114) {
bb115:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this116;
  struct std___Rb_tree_const_iterator_int_ __position117;
  struct std___Rb_tree_iterator_int_ __retval118;
  struct std___Rb_tree_const_iterator_int_ __result119;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0120;
  this116 = v113;
  __position117 = v114;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t121 = this116;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0122;
          struct std___Rb_tree_iterator_int_ ref_tmp1123;
          struct std___Rb_tree_iterator_int_ r124 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t121);
          ref_tmp1123 = r124;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0122, &ref_tmp1123);
          _Bool r125 = std__operator___2(&__position117, &ref_tmp0122);
          if (r125) {
            char* cast126 = (char*)&(_str_6);
            int c127 = 1818;
            char* cast128 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast129 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast126, c127, cast128, cast129);
          }
      _Bool c130 = 0;
      if (!c130) break;
    } while (1);
  __result119 = __position117; // copy
  struct std___Rb_tree_const_iterator_int_* r131 = std___Rb_tree_const_iterator_int___operator___2(&__result119);
  agg_tmp0120 = __position117; // copy
  struct std___Rb_tree_const_iterator_int_ t132 = agg_tmp0120;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t121, t132);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t133 = __result119._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval118, t133);
  struct std___Rb_tree_iterator_int_ t134 = __retval118;
  return t134;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v135, struct std___Rb_tree_const_iterator_int_ v136) {
bb137:
  struct std__multiset_int__std__less_int___std__allocator_int__* this138;
  struct std___Rb_tree_const_iterator_int_ __position139;
  struct std___Rb_tree_const_iterator_int_ __retval140;
  struct std___Rb_tree_iterator_int_ ref_tmp0141;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0142;
  this138 = v135;
  __position139 = v136;
  struct std__multiset_int__std__less_int___std__allocator_int__* t143 = this138;
  agg_tmp0142 = __position139; // copy
  struct std___Rb_tree_const_iterator_int_ t144 = agg_tmp0142;
  struct std___Rb_tree_iterator_int_ r145 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t143->_M_t, t144);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0141 = r145;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval140, &ref_tmp0141);
  struct std___Rb_tree_const_iterator_int_ t146 = __retval140;
  return t146;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v147, struct std___Rb_tree_node_base* v148, struct std___Rb_tree_node_base* v149, int* v150) {
bb151:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this152;
  struct std___Rb_tree_node_base* __x153;
  struct std___Rb_tree_node_base* __y154;
  int* __k155;
  struct std___Rb_tree_node_base* __retval156;
  this152 = v147;
  __x153 = v148;
  __y154 = v149;
  __k155 = v150;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t157 = this152;
    while (1) {
      struct std___Rb_tree_node_base* t158 = __x153;
      _Bool cast159 = (_Bool)t158;
      if (!cast159) break;
        struct std___Rb_tree_key_compare_std__less_int__* base160 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t157->_M_impl) + 0);
        struct std__less_int_* cast161 = (struct std__less_int_*)base160;
        struct std___Rb_tree_node_base* t162 = __x153;
        int* r163 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t162);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t164 = __k155;
        _Bool r165 = std__less_int___operator___int_const___int_const___const(cast161, r163, t164);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u166 = !r165;
        if (u166) {
          struct std___Rb_tree_node_base* t167 = __x153;
          __y154 = t167;
          struct std___Rb_tree_node_base* t168 = __x153;
          struct std___Rb_tree_node_base* r169 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t168);
          __x153 = r169;
        } else {
          struct std___Rb_tree_node_base* t170 = __x153;
          struct std___Rb_tree_node_base* r171 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t170);
          __x153 = r171;
        }
    }
  struct std___Rb_tree_node_base* t172 = __y154;
  __retval156 = t172;
  struct std___Rb_tree_node_base* t173 = __retval156;
  return t173;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v174, struct std___Rb_tree_node_base* v175, struct std___Rb_tree_node_base* v176, int* v177) {
bb178:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this179;
  struct std___Rb_tree_node_base* __x180;
  struct std___Rb_tree_node_base* __y181;
  int* __k182;
  struct std___Rb_tree_node_base* __retval183;
  this179 = v174;
  __x180 = v175;
  __y181 = v176;
  __k182 = v177;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t184 = this179;
    while (1) {
      struct std___Rb_tree_node_base* t185 = __x180;
      _Bool cast186 = (_Bool)t185;
      if (!cast186) break;
        struct std___Rb_tree_key_compare_std__less_int__* base187 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t184->_M_impl) + 0);
        struct std__less_int_* cast188 = (struct std__less_int_*)base187;
        int* t189 = __k182;
        struct std___Rb_tree_node_base* t190 = __x180;
        int* r191 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t190);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r192 = std__less_int___operator___int_const___int_const___const(cast188, t189, r191);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r192) {
          struct std___Rb_tree_node_base* t193 = __x180;
          __y181 = t193;
          struct std___Rb_tree_node_base* t194 = __x180;
          struct std___Rb_tree_node_base* r195 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t194);
          __x180 = r195;
        } else {
          struct std___Rb_tree_node_base* t196 = __x180;
          struct std___Rb_tree_node_base* r197 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t196);
          __x180 = r197;
        }
    }
  struct std___Rb_tree_node_base* t198 = __y181;
  __retval183 = t198;
  struct std___Rb_tree_node_base* t199 = __retval183;
  return t199;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v200, struct std___Rb_tree_iterator_int_* v201, struct std___Rb_tree_iterator_int_* v202) {
bb203:
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* this204;
  struct std___Rb_tree_iterator_int_* __x205;
  struct std___Rb_tree_iterator_int_* __y206;
  this204 = v200;
  __x205 = v201;
  __y206 = v202;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t207 = this204;
  struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* base208 = (struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__*)((char *)t207 + 0);
  struct std___Rb_tree_iterator_int_* t209 = __x205;
  t207->first = *t209; // copy
  struct std___Rb_tree_iterator_int_* t210 = __y206;
  t207->second = *t210; // copy
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v211, int* v212) {
bb213:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this214;
  int* __k215;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __retval216;
  struct std___Rb_tree_node_base* __x217;
  struct std___Rb_tree_node_base* __y218;
  struct std___Rb_tree_iterator_int_ ref_tmp2219;
  struct std___Rb_tree_iterator_int_ ref_tmp3220;
  this214 = v211;
  __k215 = v212;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t221 = this214;
  struct std___Rb_tree_node_base* r222 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t221);
  __x217 = r222;
  struct std___Rb_tree_node_base* r223 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t221);
  __y218 = r223;
    while (1) {
      struct std___Rb_tree_node_base* t224 = __x217;
      _Bool cast225 = (_Bool)t224;
      if (!cast225) break;
          struct std___Rb_tree_key_compare_std__less_int__* base226 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t221->_M_impl) + 0);
          struct std__less_int_* cast227 = (struct std__less_int_*)base226;
          struct std___Rb_tree_node_base* t228 = __x217;
          int* r229 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t228);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t230 = __k215;
          _Bool r231 = std__less_int___operator___int_const___int_const___const(cast227, r229, t230);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r231) {
            struct std___Rb_tree_node_base* t232 = __x217;
            struct std___Rb_tree_node_base* r233 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t232);
            __x217 = r233;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base234 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t221->_M_impl) + 0);
              struct std__less_int_* cast235 = (struct std__less_int_*)base234;
              int* t236 = __k215;
              struct std___Rb_tree_node_base* t237 = __x217;
              int* r238 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t237);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r239 = std__less_int___operator___int_const___int_const___const(cast235, t236, r238);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r239) {
                struct std___Rb_tree_node_base* t240 = __x217;
                __y218 = t240;
                struct std___Rb_tree_node_base* t241 = __x217;
                struct std___Rb_tree_node_base* r242 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t241);
                __x217 = r242;
              } else {
                struct std___Rb_tree_node_base* __xu243;
                struct std___Rb_tree_node_base* __yu244;
                struct std___Rb_tree_iterator_int_ ref_tmp0245;
                struct std___Rb_tree_iterator_int_ ref_tmp1246;
                struct std___Rb_tree_node_base* t247 = __x217;
                __xu243 = t247;
                struct std___Rb_tree_node_base* t248 = __y218;
                __yu244 = t248;
                struct std___Rb_tree_node_base* t249 = __x217;
                __y218 = t249;
                struct std___Rb_tree_node_base* t250 = __x217;
                struct std___Rb_tree_node_base* r251 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t250);
                __x217 = r251;
                struct std___Rb_tree_node_base* t252 = __xu243;
                struct std___Rb_tree_node_base* r253 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t252);
                __xu243 = r253;
                struct std___Rb_tree_node_base* t254 = __x217;
                struct std___Rb_tree_node_base* t255 = __y218;
                int* t256 = __k215;
                struct std___Rb_tree_node_base* r257 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t221, t254, t255, t256);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp0245, r257);
                struct std___Rb_tree_node_base* t258 = __xu243;
                struct std___Rb_tree_node_base* t259 = __yu244;
                int* t260 = __k215;
                struct std___Rb_tree_node_base* r261 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t221, t258, t259, t260);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp1246, r261);
                _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval216, &ref_tmp0245, &ref_tmp1246);
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t262 = __retval216;
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ret_val263 = t262;
                return ret_val263;
              }
          }
    }
  struct std___Rb_tree_node_base* t264 = __y218;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp2219, t264);
  struct std___Rb_tree_node_base* t265 = __y218;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3220, t265);
  _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval216, &ref_tmp2219, &ref_tmp3220);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t266 = __retval216;
  return t266;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v267) {
bb268:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this269;
  struct std___Rb_tree_iterator_int_ __retval270;
  this269 = v267;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t271 = this269;
  struct std___Rb_tree_header* base272 = (struct std___Rb_tree_header*)((char *)&(t271->_M_impl) + 8);
  struct std___Rb_tree_node_base* t273 = base272->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval270, t273);
  struct std___Rb_tree_iterator_int_ t274 = __retval270;
  return t274;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v275) {
bb276:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this277;
  this277 = v275;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t278 = this277;
  struct std___Rb_tree_node_int_* r279 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t278);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t278, r279);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base280 = (struct std___Rb_tree_header*)((char *)&(t278->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base280);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v281, struct std___Rb_tree_const_iterator_int_ v282, struct std___Rb_tree_const_iterator_int_ v283) {
bb284:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this285;
  struct std___Rb_tree_const_iterator_int_ __first286;
  struct std___Rb_tree_const_iterator_int_ __last287;
  this285 = v281;
  __first286 = v282;
  __last287 = v283;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t288 = this285;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0289;
    struct std___Rb_tree_iterator_int_ ref_tmp1290;
    struct std___Rb_tree_iterator_int_ r291 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t288);
    ref_tmp1290 = r291;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0289, &ref_tmp1290);
    _Bool r292 = std__operator___2(&__first286, &ref_tmp0289);
    _Bool ternary293;
    if (r292) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2294;
      struct std___Rb_tree_iterator_int_ ref_tmp3295;
      struct std___Rb_tree_iterator_int_ r296 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t288);
      ref_tmp3295 = r296;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2294, &ref_tmp3295);
      _Bool r297 = std__operator___2(&__last287, &ref_tmp2294);
      ternary293 = (_Bool)r297;
    } else {
      _Bool c298 = 0;
      ternary293 = (_Bool)c298;
    }
    if (ternary293) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t288);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0299;
        while (1) {
          _Bool r300 = std__operator___2(&__first286, &__last287);
          _Bool u301 = !r300;
          if (!u301) break;
          int c302 = 0;
          struct std___Rb_tree_const_iterator_int_ r303 = std___Rb_tree_const_iterator_int___operator__(&__first286, c302);
          agg_tmp0299 = r303;
          struct std___Rb_tree_const_iterator_int_ t304 = agg_tmp0299;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t288, t304);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseERKi
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v305, int* v306) {
bb307:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this308;
  int* __x309;
  unsigned long __retval310;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __p311;
  unsigned long __old_size312;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0313;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1314;
  this308 = v305;
  __x309 = v306;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t315 = this308;
  int* t316 = __x309;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ r317 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(t315, t316);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __p311 = r317;
  unsigned long r318 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t315);
  __old_size312 = r318;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp0313, &__p311.first);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp1314, &__p311.second);
  struct std___Rb_tree_const_iterator_int_ t319 = agg_tmp0313;
  struct std___Rb_tree_const_iterator_int_ t320 = agg_tmp1314;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t315, t319, t320);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t321 = __old_size312;
  unsigned long r322 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t315);
  unsigned long b323 = t321 - r322;
  __retval310 = b323;
  unsigned long t324 = __retval310;
  return t324;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseERKi
unsigned long std__multiset_int__std__less_int___std__allocator_int_____erase(struct std__multiset_int__std__less_int___std__allocator_int__* v325, int* v326) {
bb327:
  struct std__multiset_int__std__less_int___std__allocator_int__* this328;
  int* __x329;
  unsigned long __retval330;
  this328 = v325;
  __x329 = v326;
  struct std__multiset_int__std__less_int___std__allocator_int__* t331 = this328;
  int* t332 = __x329;
  unsigned long r333 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(&t331->_M_t, t332);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval330 = r333;
  unsigned long t334 = __retval330;
  return t334;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v335, struct std___Rb_tree_iterator_int_* v336) {
bb337:
  struct std___Rb_tree_iterator_int_* __x338;
  struct std___Rb_tree_iterator_int_* __y339;
  _Bool __retval340;
  __x338 = v335;
  __y339 = v336;
  struct std___Rb_tree_iterator_int_* t341 = __x338;
  struct std___Rb_tree_node_base* t342 = t341->_M_node;
  struct std___Rb_tree_iterator_int_* t343 = __y339;
  struct std___Rb_tree_node_base* t344 = t343->_M_node;
  _Bool c345 = ((t342 == t344)) ? 1 : 0;
  __retval340 = c345;
  _Bool t346 = __retval340;
  return t346;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v347, int* v348) {
bb349:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this350;
  int* __k351;
  struct std___Rb_tree_iterator_int_ __retval352;
  struct std___Rb_tree_iterator_int_ __j353;
  struct std___Rb_tree_iterator_int_ ref_tmp0354;
  this350 = v347;
  __k351 = v348;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t355 = this350;
  struct std___Rb_tree_node_base* r356 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t355);
  struct std___Rb_tree_node_base* r357 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t355);
  int* t358 = __k351;
  struct std___Rb_tree_node_base* r359 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t355, r356, r357, t358);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j353, r359);
  struct std___Rb_tree_iterator_int_ r360 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t355);
  ref_tmp0354 = r360;
  _Bool r361 = std__operator__(&__j353, &ref_tmp0354);
  _Bool ternary362;
  if (r361) {
    _Bool c363 = 1;
    ternary362 = (_Bool)c363;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base364 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t355->_M_impl) + 0);
    struct std__less_int_* cast365 = (struct std__less_int_*)base364;
    int* t366 = __k351;
    struct std___Rb_tree_node_base* t367 = __j353._M_node;
    int* r368 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t367);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r369 = std__less_int___operator___int_const___int_const___const(cast365, t366, r368);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary362 = (_Bool)r369;
  }
  if (ternary362) {
    struct std___Rb_tree_iterator_int_ r370 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t355);
    __retval352 = r370;
  } else {
    __retval352 = __j353; // copy
  }
  struct std___Rb_tree_iterator_int_ t371 = __retval352;
  return t371;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* v372, int* v373) {
bb374:
  struct std__multiset_int__std__less_int___std__allocator_int__* this375;
  int* __x376;
  struct std___Rb_tree_const_iterator_int_ __retval377;
  struct std___Rb_tree_iterator_int_ ref_tmp0378;
  this375 = v372;
  __x376 = v373;
  struct std__multiset_int__std__less_int___std__allocator_int__* t379 = this375;
  int* t380 = __x376;
  struct std___Rb_tree_iterator_int_ r381 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(&t379->_M_t, t380);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0378 = r381;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval377, &ref_tmp0378);
  struct std___Rb_tree_const_iterator_int_ t382 = __retval377;
  return t382;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v383, struct std___Rb_tree_const_iterator_int_ v384, struct std___Rb_tree_const_iterator_int_ v385) {
bb386:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this387;
  struct std___Rb_tree_const_iterator_int_ __first388;
  struct std___Rb_tree_const_iterator_int_ __last389;
  struct std___Rb_tree_iterator_int_ __retval390;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0391;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1392;
  this387 = v383;
  __first388 = v384;
  __last389 = v385;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t393 = this387;
  agg_tmp0391 = __first388; // copy
  agg_tmp1392 = __last389; // copy
  struct std___Rb_tree_const_iterator_int_ t394 = agg_tmp0391;
  struct std___Rb_tree_const_iterator_int_ t395 = agg_tmp1392;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t393, t394, t395);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t396 = __last389._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval390, t396);
  struct std___Rb_tree_iterator_int_ t397 = __retval390;
  return t397;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std__multiset_int__std__less_int___std__allocator_int__* v398, struct std___Rb_tree_const_iterator_int_ v399, struct std___Rb_tree_const_iterator_int_ v400) {
bb401:
  struct std__multiset_int__std__less_int___std__allocator_int__* this402;
  struct std___Rb_tree_const_iterator_int_ __first403;
  struct std___Rb_tree_const_iterator_int_ __last404;
  struct std___Rb_tree_const_iterator_int_ __retval405;
  struct std___Rb_tree_iterator_int_ ref_tmp0406;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0407;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1408;
  this402 = v398;
  __first403 = v399;
  __last404 = v400;
  struct std__multiset_int__std__less_int___std__allocator_int__* t409 = this402;
  agg_tmp0407 = __first403; // copy
  agg_tmp1408 = __last404; // copy
  struct std___Rb_tree_const_iterator_int_ t410 = agg_tmp0407;
  struct std___Rb_tree_const_iterator_int_ t411 = agg_tmp1408;
  struct std___Rb_tree_iterator_int_ r412 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11__2(&t409->_M_t, t410, t411);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0406 = r412;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval405, &ref_tmp0406);
  struct std___Rb_tree_const_iterator_int_ t413 = __retval405;
  return t413;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v414) {
bb415:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this416;
  struct std___Rb_tree_const_iterator_int_ __retval417;
  this416 = v414;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t418 = this416;
  struct std___Rb_tree_node_base* r419 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t418);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval417, r419);
  struct std___Rb_tree_const_iterator_int_ t420 = __retval417;
  return t420;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v421) {
bb422:
  struct std__multiset_int__std__less_int___std__allocator_int__* this423;
  struct std___Rb_tree_const_iterator_int_ __retval424;
  this423 = v421;
  struct std__multiset_int__std__less_int___std__allocator_int__* t425 = this423;
  struct std___Rb_tree_const_iterator_int_ r426 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t425->_M_t);
  __retval424 = r426;
  struct std___Rb_tree_const_iterator_int_ t427 = __retval424;
  return t427;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v428, void* v429) {
bb430:
  struct std__basic_ostream_char__std__char_traits_char__* this431;
  void* __pf432;
  struct std__basic_ostream_char__std__char_traits_char__* __retval433;
  this431 = v428;
  __pf432 = v429;
  struct std__basic_ostream_char__std__char_traits_char__* t434 = this431;
  void* t435 = __pf432;
  struct std__basic_ostream_char__std__char_traits_char__* r436 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t435)(t434);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval433 = r436;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __retval433;
  return t437;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v438) {
bb439:
  struct std__basic_ostream_char__std__char_traits_char__* __os440;
  struct std__basic_ostream_char__std__char_traits_char__* __retval441;
  __os440 = v438;
  struct std__basic_ostream_char__std__char_traits_char__* t442 = __os440;
  struct std__basic_ostream_char__std__char_traits_char__* r443 = std__ostream__flush(t442);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval441 = r443;
  struct std__basic_ostream_char__std__char_traits_char__* t444 = __retval441;
  return t444;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v445) {
bb446:
  struct std__ctype_char_* __f447;
  struct std__ctype_char_* __retval448;
  __f447 = v445;
    struct std__ctype_char_* t449 = __f447;
    _Bool cast450 = (_Bool)t449;
    _Bool u451 = !cast450;
    if (u451) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t452 = __f447;
  __retval448 = t452;
  struct std__ctype_char_* t453 = __retval448;
  return t453;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v454, char v455) {
bb456:
  struct std__ctype_char_* this457;
  char __c458;
  char __retval459;
  this457 = v454;
  __c458 = v455;
  struct std__ctype_char_* t460 = this457;
    char t461 = t460->_M_widen_ok;
    _Bool cast462 = (_Bool)t461;
    if (cast462) {
      char t463 = __c458;
      unsigned char cast464 = (unsigned char)t463;
      unsigned long cast465 = (unsigned long)cast464;
      char t466 = t460->_M_widen[cast465];
      __retval459 = t466;
      char t467 = __retval459;
      return t467;
    }
  std__ctype_char____M_widen_init___const(t460);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t468 = __c458;
  void** v469 = (void**)t460;
  void* v470 = *((void**)v469);
  char vcall473 = (char)__VERIFIER_virtual_call_char_char(t460, 6, t468);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval459 = vcall473;
  char t474 = __retval459;
  return t474;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v475, char v476) {
bb477:
  struct std__basic_ios_char__std__char_traits_char__* this478;
  char __c479;
  char __retval480;
  this478 = v475;
  __c479 = v476;
  struct std__basic_ios_char__std__char_traits_char__* t481 = this478;
  struct std__ctype_char_* t482 = t481->_M_ctype;
  struct std__ctype_char_* r483 = std__ctype_char__const__std____check_facet_std__ctype_char___(t482);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t484 = __c479;
  char r485 = std__ctype_char___widen_char__const(r483, t484);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval480 = r485;
  char t486 = __retval480;
  return t486;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v487) {
bb488:
  struct std__basic_ostream_char__std__char_traits_char__* __os489;
  struct std__basic_ostream_char__std__char_traits_char__* __retval490;
  __os489 = v487;
  struct std__basic_ostream_char__std__char_traits_char__* t491 = __os489;
  struct std__basic_ostream_char__std__char_traits_char__* t492 = __os489;
  void** v493 = (void**)t492;
  void* v494 = *((void**)v493);
  unsigned char* cast495 = (unsigned char*)v494;
  long c496 = -24;
  unsigned char* ptr497 = &(cast495)[c496];
  long* cast498 = (long*)ptr497;
  long t499 = *cast498;
  unsigned char* cast500 = (unsigned char*)t492;
  unsigned char* ptr501 = &(cast500)[t499];
  struct std__basic_ostream_char__std__char_traits_char__* cast502 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr501;
  struct std__basic_ios_char__std__char_traits_char__* cast503 = (struct std__basic_ios_char__std__char_traits_char__*)cast502;
  char c504 = 10;
  char r505 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast503, c504);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r506 = std__ostream__put(t491, r505);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r507 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r506);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval490 = r507;
  struct std__basic_ostream_char__std__char_traits_char__* t508 = __retval490;
  return t508;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v509) {
bb510:
  struct std__multiset_int__std__less_int___std__allocator_int__* this511;
  this511 = v509;
  struct std__multiset_int__std__less_int___std__allocator_int__* t512 = this511;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t512->_M_t);
  }
  return;
}

// function: main
int main() {
bb513:
  int __retval514;
  int b515[9];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset516;
  struct std___Rb_tree_const_iterator_int_ it517;
  int i518;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0519;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0520;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1521;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2522;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1523;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3524;
  int ref_tmp2525;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3526;
  int ref_tmp4527;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4528;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5529;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6530;
  struct std___Rb_tree_const_iterator_int_ ref_tmp5531;
  struct std___Rb_tree_const_iterator_int_ agg_tmp7532;
  struct std___Rb_tree_const_iterator_int_ agg_tmp8533;
  int c534 = 0;
  __retval514 = c534;
  // array copy
  __builtin_memcpy(b515, __const_main_b, (unsigned long)9 * sizeof(__const_main_b[0]));
  int* cast535 = (int*)&(b515);
  int* cast536 = (int*)&(b515);
  int c537 = 9;
  int* ptr538 = &(cast536)[c537];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&myset516, cast535, ptr538);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it517);
    struct std___Rb_tree_const_iterator_int_ r539 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset516);
    ref_tmp0519 = r539;
    struct std___Rb_tree_const_iterator_int_* r540 = std___Rb_tree_const_iterator_int___operator_(&it517, &ref_tmp0519);
    int c541 = 0;
    struct std___Rb_tree_const_iterator_int_ r542 = std___Rb_tree_const_iterator_int___operator__(&it517, c541);
    agg_tmp0520 = r542;
    int* r543 = std___Rb_tree_const_iterator_int___operator____const(&it517);
    int t544 = *r543;
    int c545 = 20;
    _Bool c546 = ((t544 == c545)) ? 1 : 0;
    if (c546) {
    } else {
      char* cast547 = (char*)&(_str);
      char* c548 = _str_1;
      unsigned int c549 = 22;
      char* cast550 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast547, c548, c549, cast550);
    }
    agg_tmp1521 = it517; // copy
    struct std___Rb_tree_const_iterator_int_ t551 = agg_tmp1521;
    struct std___Rb_tree_const_iterator_int_ r552 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset516, t551);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset516);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2522 = r552;
    struct std___Rb_tree_const_iterator_int_ r553 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset516);
    ref_tmp1523 = r553;
    struct std___Rb_tree_const_iterator_int_* r554 = std___Rb_tree_const_iterator_int___operator_(&it517, &ref_tmp1523);
    int c555 = 0;
    struct std___Rb_tree_const_iterator_int_ r556 = std___Rb_tree_const_iterator_int___operator__(&it517, c555);
    agg_tmp3524 = r556;
    int* r557 = std___Rb_tree_const_iterator_int___operator____const(&it517);
    int t558 = *r557;
    int c559 = 30;
    _Bool c560 = ((t558 == c559)) ? 1 : 0;
    if (c560) {
    } else {
      char* cast561 = (char*)&(_str_2);
      char* c562 = _str_1;
      unsigned int c563 = 26;
      char* cast564 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast561, c562, c563, cast564);
    }
    int c565 = 40;
    ref_tmp2525 = c565;
    unsigned long r566 = std__multiset_int__std__less_int___std__allocator_int_____erase(&myset516, &ref_tmp2525);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset516);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c567 = 60;
    ref_tmp4527 = c567;
    struct std___Rb_tree_const_iterator_int_ r568 = std__multiset_int__std__less_int___std__allocator_int_____find(&myset516, &ref_tmp4527);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset516);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp3526 = r568;
    struct std___Rb_tree_const_iterator_int_* r569 = std___Rb_tree_const_iterator_int___operator_(&it517, &ref_tmp3526);
    agg_tmp4528 = it517; // copy
    struct std___Rb_tree_const_iterator_int_ r570 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset516);
    agg_tmp5529 = r570;
    struct std___Rb_tree_const_iterator_int_ t571 = agg_tmp4528;
    struct std___Rb_tree_const_iterator_int_ t572 = agg_tmp5529;
    struct std___Rb_tree_const_iterator_int_ r573 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11__2(&myset516, t571, t572);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset516);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp6530 = r573;
    struct std___Rb_tree_const_iterator_int_ r574 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset516);
    ref_tmp5531 = r574;
    struct std___Rb_tree_const_iterator_int_* r575 = std___Rb_tree_const_iterator_int___operator_(&it517, &ref_tmp5531);
    int* r576 = std___Rb_tree_const_iterator_int___operator____const(&it517);
    int t577 = *r576;
    int c578 = 10;
    _Bool c579 = ((t577 == c578)) ? 1 : 0;
    if (c579) {
    } else {
      char* cast580 = (char*)&(_str_3);
      char* c581 = _str_1;
      unsigned int c582 = 33;
      char* cast583 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast580, c581, c582, cast583);
    }
    int c584 = 0;
    struct std___Rb_tree_const_iterator_int_ r585 = std___Rb_tree_const_iterator_int___operator__(&it517, c584);
    agg_tmp7532 = r585;
    int* r586 = std___Rb_tree_const_iterator_int___operator____const(&it517);
    int t587 = *r586;
    int c588 = 30;
    _Bool c589 = ((t587 == c588)) ? 1 : 0;
    if (c589) {
    } else {
      char* cast590 = (char*)&(_str_4);
      char* c591 = _str_1;
      unsigned int c592 = 35;
      char* cast593 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast590, c591, c592, cast593);
    }
    int c594 = 0;
    struct std___Rb_tree_const_iterator_int_ r595 = std___Rb_tree_const_iterator_int___operator__(&it517, c594);
    agg_tmp8533 = r595;
    int* r596 = std___Rb_tree_const_iterator_int___operator____const(&it517);
    int t597 = *r596;
    int c598 = 50;
    _Bool c599 = ((t597 != c598)) ? 1 : 0;
    if (c599) {
    } else {
      char* cast600 = (char*)&(_str_5);
      char* c601 = _str_1;
      unsigned int c602 = 37;
      char* cast603 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast600, c601, c602, cast603);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r604 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset516);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c605 = 0;
    __retval514 = c605;
    int t606 = __retval514;
    int ret_val607 = t606;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset516);
    }
    return ret_val607;
  int t608 = __retval514;
  return t608;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v609) {
bb610:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this611;
  this611 = v609;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t612 = this611;
    struct std___Rb_tree_node_int_* r613 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t612);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t612, r613);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t612->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t612->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v614) {
bb615:
  struct std___Rb_tree_node_int_* this616;
  struct std___Rb_tree_node_int_* __retval617;
  this616 = v614;
  struct std___Rb_tree_node_int_* t618 = this616;
  __retval617 = t618;
  struct std___Rb_tree_node_int_* t619 = __retval617;
  return t619;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v620) {
bb621:
  struct std___Rb_tree_node_int_* __x622;
  struct std___Rb_tree_node_int_* __retval623;
  __x622 = v620;
  struct std___Rb_tree_node_int_* t624 = __x622;
  struct std___Rb_tree_node_base* base625 = (struct std___Rb_tree_node_base*)((char *)t624 + 0);
  struct std___Rb_tree_node_base* t626 = base625->_M_right;
  _Bool cast627 = (_Bool)t626;
  struct std___Rb_tree_node_int_* ternary628;
  if (cast627) {
    struct std___Rb_tree_node_int_* t629 = __x622;
    struct std___Rb_tree_node_base* base630 = (struct std___Rb_tree_node_base*)((char *)t629 + 0);
    struct std___Rb_tree_node_base* t631 = base630->_M_right;
    struct std___Rb_tree_node_int_* derived632 = (struct std___Rb_tree_node_int_*)((char *)t631 - 0);
    struct std___Rb_tree_node_int_* r633 = std___Rb_tree_node_int____M_node_ptr(derived632);
    ternary628 = (struct std___Rb_tree_node_int_*)r633;
  } else {
    struct std___Rb_tree_node_int_* c634 = ((void*)0);
    ternary628 = (struct std___Rb_tree_node_int_*)c634;
  }
  __retval623 = ternary628;
  struct std___Rb_tree_node_int_* t635 = __retval623;
  return t635;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v636) {
bb637:
  struct std___Rb_tree_node_int_* __x638;
  struct std___Rb_tree_node_int_* __retval639;
  __x638 = v636;
  struct std___Rb_tree_node_int_* t640 = __x638;
  struct std___Rb_tree_node_base* base641 = (struct std___Rb_tree_node_base*)((char *)t640 + 0);
  struct std___Rb_tree_node_base* t642 = base641->_M_left;
  _Bool cast643 = (_Bool)t642;
  struct std___Rb_tree_node_int_* ternary644;
  if (cast643) {
    struct std___Rb_tree_node_int_* t645 = __x638;
    struct std___Rb_tree_node_base* base646 = (struct std___Rb_tree_node_base*)((char *)t645 + 0);
    struct std___Rb_tree_node_base* t647 = base646->_M_left;
    struct std___Rb_tree_node_int_* derived648 = (struct std___Rb_tree_node_int_*)((char *)t647 - 0);
    struct std___Rb_tree_node_int_* r649 = std___Rb_tree_node_int____M_node_ptr(derived648);
    ternary644 = (struct std___Rb_tree_node_int_*)r649;
  } else {
    struct std___Rb_tree_node_int_* c650 = ((void*)0);
    ternary644 = (struct std___Rb_tree_node_int_*)c650;
  }
  __retval639 = ternary644;
  struct std___Rb_tree_node_int_* t651 = __retval639;
  return t651;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v652) {
bb653:
  int* __location654;
  __location654 = v652;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v655, int* v656) {
bb657:
  struct std__allocator_std___Rb_tree_node_int__* __a658;
  int* __p659;
  __a658 = v655;
  __p659 = v656;
  int* t660 = __p659;
  void_std__destroy_at_int_(t660);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v661) {
bb662:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this663;
  struct std__allocator_std___Rb_tree_node_int__* __retval664;
  this663 = v661;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t665 = this663;
  struct std__allocator_std___Rb_tree_node_int__* base666 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t665->_M_impl) + 0);
  __retval664 = base666;
  struct std__allocator_std___Rb_tree_node_int__* t667 = __retval664;
  return t667;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v668) {
bb669:
  struct __gnu_cxx____aligned_membuf_int_* this670;
  void* __retval671;
  this670 = v668;
  struct __gnu_cxx____aligned_membuf_int_* t672 = this670;
  void* cast673 = (void*)&(t672->_M_storage);
  __retval671 = cast673;
  void* t674 = __retval671;
  return t674;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v675) {
bb676:
  struct __gnu_cxx____aligned_membuf_int_* this677;
  int* __retval678;
  this677 = v675;
  struct __gnu_cxx____aligned_membuf_int_* t679 = this677;
  void* r680 = __gnu_cxx____aligned_membuf_int____M_addr(t679);
  int* cast681 = (int*)r680;
  __retval678 = cast681;
  int* t682 = __retval678;
  return t682;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v683) {
bb684:
  struct std___Rb_tree_node_int_* this685;
  int* __retval686;
  this685 = v683;
  struct std___Rb_tree_node_int_* t687 = this685;
  int* r688 = __gnu_cxx____aligned_membuf_int____M_ptr(&t687->_M_storage);
  __retval686 = r688;
  int* t689 = __retval686;
  return t689;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v690, struct std___Rb_tree_node_int_* v691) {
bb692:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this693;
  struct std___Rb_tree_node_int_* __p694;
  this693 = v690;
  __p694 = v691;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t695 = this693;
  struct std__allocator_std___Rb_tree_node_int__* r696 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t695);
  struct std___Rb_tree_node_int_* t697 = __p694;
  int* r698 = std___Rb_tree_node_int____M_valptr(t697);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r696, r698);
  struct std___Rb_tree_node_int_* t699 = __p694;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb700:
  _Bool __retval701;
    _Bool c702 = 0;
    __retval701 = c702;
    _Bool t703 = __retval701;
    return t703;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v704, struct std___Rb_tree_node_int_* v705, unsigned long v706) {
bb707:
  struct std____new_allocator_std___Rb_tree_node_int__* this708;
  struct std___Rb_tree_node_int_* __p709;
  unsigned long __n710;
  this708 = v704;
  __p709 = v705;
  __n710 = v706;
  struct std____new_allocator_std___Rb_tree_node_int__* t711 = this708;
    unsigned long c712 = 8;
    unsigned long c713 = 16;
    _Bool c714 = ((c712 > c713)) ? 1 : 0;
    if (c714) {
      struct std___Rb_tree_node_int_* t715 = __p709;
      void* cast716 = (void*)t715;
      unsigned long t717 = __n710;
      unsigned long c718 = 40;
      unsigned long b719 = t717 * c718;
      unsigned long c720 = 8;
      operator_delete_3(cast716, b719, c720);
      return;
    }
  struct std___Rb_tree_node_int_* t721 = __p709;
  void* cast722 = (void*)t721;
  unsigned long t723 = __n710;
  unsigned long c724 = 40;
  unsigned long b725 = t723 * c724;
  operator_delete_2(cast722, b725);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v726, struct std___Rb_tree_node_int_* v727, unsigned long v728) {
bb729:
  struct std__allocator_std___Rb_tree_node_int__* this730;
  struct std___Rb_tree_node_int_* __p731;
  unsigned long __n732;
  this730 = v726;
  __p731 = v727;
  __n732 = v728;
  struct std__allocator_std___Rb_tree_node_int__* t733 = this730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
      struct std___Rb_tree_node_int_* t735 = __p731;
      void* cast736 = (void*)t735;
      operator_delete(cast736);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base737 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t733 + 0);
  struct std___Rb_tree_node_int_* t738 = __p731;
  unsigned long t739 = __n732;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base737, t738, t739);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v740, struct std___Rb_tree_node_int_* v741, unsigned long v742) {
bb743:
  struct std__allocator_std___Rb_tree_node_int__* __a744;
  struct std___Rb_tree_node_int_* __p745;
  unsigned long __n746;
  __a744 = v740;
  __p745 = v741;
  __n746 = v742;
  struct std__allocator_std___Rb_tree_node_int__* t747 = __a744;
  struct std___Rb_tree_node_int_* t748 = __p745;
  unsigned long t749 = __n746;
  std__allocator_std___Rb_tree_node_int_____deallocate(t747, t748, t749);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v750, struct std___Rb_tree_node_int_* v751) {
bb752:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this753;
  struct std___Rb_tree_node_int_* __p754;
  this753 = v750;
  __p754 = v751;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t755 = this753;
  struct std__allocator_std___Rb_tree_node_int__* r756 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t755);
  struct std___Rb_tree_node_int_* t757 = __p754;
  unsigned long c758 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r756, t757, c758);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v759, struct std___Rb_tree_node_int_* v760) {
bb761:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this762;
  struct std___Rb_tree_node_int_* __p763;
  this762 = v759;
  __p763 = v760;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t764 = this762;
  struct std___Rb_tree_node_int_* t765 = __p763;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t764, t765);
  struct std___Rb_tree_node_int_* t766 = __p763;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t764, t766);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v767, struct std___Rb_tree_node_int_* v768) {
bb769:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this770;
  struct std___Rb_tree_node_int_* __x771;
  this770 = v767;
  __x771 = v768;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t772 = this770;
    while (1) {
      struct std___Rb_tree_node_int_* t773 = __x771;
      _Bool cast774 = (_Bool)t773;
      if (!cast774) break;
        struct std___Rb_tree_node_int_* __y775;
        struct std___Rb_tree_node_int_* t776 = __x771;
        struct std___Rb_tree_node_int_* r777 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t776);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t772, r777);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t778 = __x771;
        struct std___Rb_tree_node_int_* r779 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t778);
        if (__cir_exc_active) {
          return;
        }
        __y775 = r779;
        struct std___Rb_tree_node_int_* t780 = __x771;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t772, t780);
        struct std___Rb_tree_node_int_* t781 = __y775;
        __x771 = t781;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v782) {
bb783:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this784;
  struct std___Rb_tree_node_int_* __retval785;
  struct std___Rb_tree_node_base* __begin786;
  this784 = v782;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t787 = this784;
  struct std___Rb_tree_header* base788 = (struct std___Rb_tree_header*)((char *)&(t787->_M_impl) + 8);
  struct std___Rb_tree_node_base* t789 = base788->_M_header._M_parent;
  __begin786 = t789;
  struct std___Rb_tree_node_base* t790 = __begin786;
  _Bool cast791 = (_Bool)t790;
  struct std___Rb_tree_node_int_* ternary792;
  if (cast791) {
    struct std___Rb_tree_node_base* t793 = __begin786;
    struct std___Rb_tree_node_int_* derived794 = (struct std___Rb_tree_node_int_*)((char *)t793 - 0);
    struct std___Rb_tree_node_int_* r795 = std___Rb_tree_node_int____M_node_ptr(derived794);
    ternary792 = (struct std___Rb_tree_node_int_*)r795;
  } else {
    struct std___Rb_tree_node_int_* c796 = ((void*)0);
    ternary792 = (struct std___Rb_tree_node_int_*)c796;
  }
  __retval785 = ternary792;
  struct std___Rb_tree_node_int_* t797 = __retval785;
  return t797;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v798) {
bb799:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this800;
  this800 = v798;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t801 = this800;
  {
    struct std__allocator_std___Rb_tree_node_int__* base802 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t801 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base802);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v803) {
bb804:
  struct std__allocator_std___Rb_tree_node_int__* this805;
  this805 = v803;
  struct std__allocator_std___Rb_tree_node_int__* t806 = this805;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v807) {
bb808:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this809;
  this809 = v807;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t810 = this809;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t810->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v811, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v812) {
bb813:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this814;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t815;
  this814 = v811;
  __t815 = v812;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t816 = this814;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t817 = __t815;
  t816->_M_t = t817;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v818) {
bb819:
  struct std___Rb_tree_node_base* this820;
  struct std___Rb_tree_node_base* __retval821;
  this820 = v818;
  struct std___Rb_tree_node_base* t822 = this820;
  __retval821 = t822;
  struct std___Rb_tree_node_base* t823 = __retval821;
  return t823;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v824) {
bb825:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this826;
  struct std___Rb_tree_node_base* __retval827;
  this826 = v824;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t828 = this826;
  struct std___Rb_tree_header* base829 = (struct std___Rb_tree_header*)((char *)&(t828->_M_impl) + 8);
  struct std___Rb_tree_node_base* r830 = std___Rb_tree_node_base___M_base_ptr___const(&base829->_M_header);
  __retval827 = r830;
  struct std___Rb_tree_node_base* t831 = __retval827;
  return t831;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v832) {
bb833:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this834;
  unsigned long __retval835;
  this834 = v832;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t836 = this834;
  struct std___Rb_tree_header* base837 = (struct std___Rb_tree_header*)((char *)&(t836->_M_impl) + 8);
  unsigned long t838 = base837->_M_node_count;
  __retval835 = t838;
  unsigned long t839 = __retval835;
  return t839;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v840, int* v841, int* v842) {
bb843:
  struct std__less_int_* this844;
  int* __x845;
  int* __y846;
  _Bool __retval847;
  this844 = v840;
  __x845 = v841;
  __y846 = v842;
  struct std__less_int_* t848 = this844;
  int* t849 = __x845;
  int t850 = *t849;
  int* t851 = __y846;
  int t852 = *t851;
  _Bool c853 = ((t850 < t852)) ? 1 : 0;
  __retval847 = c853;
  _Bool t854 = __retval847;
  return t854;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v855, int* v856) {
bb857:
  struct std___Identity_int_* this858;
  int* __x859;
  int* __retval860;
  this858 = v855;
  __x859 = v856;
  struct std___Identity_int_* t861 = this858;
  int* t862 = __x859;
  __retval860 = t862;
  int* t863 = __retval860;
  return t863;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v864) {
bb865:
  struct __gnu_cxx____aligned_membuf_int_* this866;
  void* __retval867;
  this866 = v864;
  struct __gnu_cxx____aligned_membuf_int_* t868 = this866;
  void* cast869 = (void*)&(t868->_M_storage);
  __retval867 = cast869;
  void* t870 = __retval867;
  return t870;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v871) {
bb872:
  struct __gnu_cxx____aligned_membuf_int_* this873;
  int* __retval874;
  this873 = v871;
  struct __gnu_cxx____aligned_membuf_int_* t875 = this873;
  void* r876 = __gnu_cxx____aligned_membuf_int____M_addr___const(t875);
  int* cast877 = (int*)r876;
  __retval874 = cast877;
  int* t878 = __retval874;
  return t878;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v879) {
bb880:
  struct std___Rb_tree_node_int_* this881;
  int* __retval882;
  this881 = v879;
  struct std___Rb_tree_node_int_* t883 = this881;
  int* r884 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t883->_M_storage);
  __retval882 = r884;
  int* t885 = __retval882;
  return t885;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v886) {
bb887:
  struct std___Rb_tree_node_int_* __node888;
  int* __retval889;
  struct std___Identity_int_ ref_tmp0890;
  __node888 = v886;
  struct std___Rb_tree_node_int_* t891 = __node888;
  int* r892 = std___Rb_tree_node_int____M_valptr___const(t891);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r893 = std___Identity_int___operator___int_const___const(&ref_tmp0890, r892);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval889 = r893;
  int* t894 = __retval889;
  return t894;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v895) {
bb896:
  struct std___Rb_tree_node_base* __x897;
  int* __retval898;
  __x897 = v895;
  struct std___Rb_tree_node_base* t899 = __x897;
  struct std___Rb_tree_node_int_* derived900 = (struct std___Rb_tree_node_int_*)((char *)t899 - 0);
  int* r901 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived900);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval898 = r901;
  int* t902 = __retval898;
  return t902;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v903) {
bb904:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this905;
  struct std___Rb_tree_node_base** __retval906;
  this905 = v903;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t907 = this905;
  struct std___Rb_tree_header* base908 = (struct std___Rb_tree_header*)((char *)&(t907->_M_impl) + 8);
  __retval906 = &base908->_M_header._M_right;
  struct std___Rb_tree_node_base** t909 = __retval906;
  return t909;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v910, struct std___Rb_tree_node_base** v911, struct std___Rb_tree_node_base** v912) {
bb913:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this914;
  struct std___Rb_tree_node_base** __x915;
  struct std___Rb_tree_node_base** __y916;
  this914 = v910;
  __x915 = v911;
  __y916 = v912;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t917 = this914;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base918 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t917 + 0);
  struct std___Rb_tree_node_base** t919 = __x915;
  struct std___Rb_tree_node_base* t920 = *t919;
  t917->first = t920;
  struct std___Rb_tree_node_base** t921 = __y916;
  struct std___Rb_tree_node_base* t922 = *t921;
  t917->second = t922;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v923) {
bb924:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this925;
  struct std___Rb_tree_node_base* __retval926;
  this925 = v923;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t927 = this925;
  struct std___Rb_tree_header* base928 = (struct std___Rb_tree_header*)((char *)&(t927->_M_impl) + 8);
  struct std___Rb_tree_node_base* t929 = base928->_M_header._M_parent;
  __retval926 = t929;
  struct std___Rb_tree_node_base* t930 = __retval926;
  return t930;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v931) {
bb932:
  struct std___Rb_tree_node_base* __x933;
  struct std___Rb_tree_node_base* __retval934;
  __x933 = v931;
  struct std___Rb_tree_node_base* t935 = __x933;
  struct std___Rb_tree_node_base* t936 = t935->_M_left;
  __retval934 = t936;
  struct std___Rb_tree_node_base* t937 = __retval934;
  return t937;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v938, int* v939) {
bb940:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this941;
  int* __k942;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval943;
  struct std___Rb_tree_node_base* __x944;
  struct std___Rb_tree_node_base* __y945;
  this941 = v938;
  __k942 = v939;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t946 = this941;
  struct std___Rb_tree_node_base* r947 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t946);
  __x944 = r947;
  struct std___Rb_tree_node_base* r948 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t946);
  __y945 = r948;
    while (1) {
      struct std___Rb_tree_node_base* t949 = __x944;
      _Bool cast950 = (_Bool)t949;
      if (!cast950) break;
        struct std___Rb_tree_node_base* t951 = __x944;
        __y945 = t951;
        struct std___Rb_tree_key_compare_std__less_int__* base952 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t946->_M_impl) + 0);
        struct std__less_int_* cast953 = (struct std__less_int_*)base952;
        int* t954 = __k942;
        struct std___Rb_tree_node_base* t955 = __x944;
        int* r956 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t955);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r957 = std__less_int___operator___int_const___int_const___const(cast953, t954, r956);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary958;
        if (r957) {
          struct std___Rb_tree_node_base* t959 = __x944;
          struct std___Rb_tree_node_base* r960 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t959);
          ternary958 = (struct std___Rb_tree_node_base*)r960;
        } else {
          struct std___Rb_tree_node_base* t961 = __x944;
          struct std___Rb_tree_node_base* r962 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t961);
          ternary958 = (struct std___Rb_tree_node_base*)r962;
        }
        __x944 = ternary958;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval943, &__x944, &__y945);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t963 = __retval943;
  return t963;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v964, struct std___Rb_tree_node_base* v965) {
bb966:
  struct std___Rb_tree_iterator_int_* this967;
  struct std___Rb_tree_node_base* __x968;
  this967 = v964;
  __x968 = v965;
  struct std___Rb_tree_iterator_int_* t969 = this967;
  struct std___Rb_tree_node_base* t970 = __x968;
  t969->_M_node = t970;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v971) {
bb972:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this973;
  struct std___Rb_tree_node_base** __retval974;
  this973 = v971;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t975 = this973;
  struct std___Rb_tree_header* base976 = (struct std___Rb_tree_header*)((char *)&(t975->_M_impl) + 8);
  __retval974 = &base976->_M_header._M_left;
  struct std___Rb_tree_node_base** t977 = __retval974;
  return t977;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v978, struct std___Rb_tree_node_base** v979, struct std___Rb_tree_node_base** v980) {
bb981:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this982;
  struct std___Rb_tree_node_base** __x983;
  struct std___Rb_tree_node_base** __y984;
  this982 = v978;
  __x983 = v979;
  __y984 = v980;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t985 = this982;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base986 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t985 + 0);
  struct std___Rb_tree_node_base** t987 = __x983;
  struct std___Rb_tree_node_base* t988 = *t987;
  t985->first = t988;
  struct std___Rb_tree_node_base** t989 = __y984;
  struct std___Rb_tree_node_base* t990 = *t989;
  t985->second = t990;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v991) {
bb992:
  struct std___Rb_tree_iterator_int_* this993;
  struct std___Rb_tree_iterator_int_* __retval994;
  this993 = v991;
  struct std___Rb_tree_iterator_int_* t995 = this993;
  struct std___Rb_tree_node_base* t996 = t995->_M_node;
  struct std___Rb_tree_node_base* r997 = std___Rb_tree_decrement(t996);
  t995->_M_node = r997;
  __retval994 = t995;
  struct std___Rb_tree_iterator_int_* t998 = __retval994;
  return t998;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v999) {
bb1000:
  struct std___Rb_tree_node_base* __x1001;
  struct std___Rb_tree_node_base* __retval1002;
  __x1001 = v999;
  struct std___Rb_tree_node_base* t1003 = __x1001;
  struct std___Rb_tree_node_base* t1004 = t1003->_M_right;
  __retval1002 = t1004;
  struct std___Rb_tree_node_base* t1005 = __retval1002;
  return t1005;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v1006) {
bb1007:
  struct std___Rb_tree_iterator_int_* this1008;
  struct std___Rb_tree_iterator_int_* __retval1009;
  this1008 = v1006;
  struct std___Rb_tree_iterator_int_* t1010 = this1008;
  struct std___Rb_tree_node_base* t1011 = t1010->_M_node;
  struct std___Rb_tree_node_base* r1012 = std___Rb_tree_increment(t1011);
  t1010->_M_node = r1012;
  __retval1009 = t1010;
  struct std___Rb_tree_iterator_int_* t1013 = __retval1009;
  return t1013;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1014, struct std___Rb_tree_node_base** v1015, struct std___Rb_tree_node_base** v1016) {
bb1017:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1018;
  struct std___Rb_tree_node_base** __x1019;
  struct std___Rb_tree_node_base** __y1020;
  this1018 = v1014;
  __x1019 = v1015;
  __y1020 = v1016;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1021 = this1018;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1022 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1021 + 0);
  struct std___Rb_tree_node_base** t1023 = __x1019;
  struct std___Rb_tree_node_base* t1024 = *t1023;
  t1021->first = t1024;
  struct std___Rb_tree_node_base** t1025 = __y1020;
  struct std___Rb_tree_node_base* t1026 = *t1025;
  t1021->second = t1026;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1027, struct std___Rb_tree_const_iterator_int_ v1028, int* v1029) {
bb1030:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1031;
  struct std___Rb_tree_const_iterator_int_ __position1032;
  int* __k1033;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1034;
  this1031 = v1027;
  __position1032 = v1028;
  __k1033 = v1029;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1035 = this1031;
    struct std___Rb_tree_node_base* t1036 = __position1032._M_node;
    struct std___Rb_tree_node_base* r1037 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1035);
    _Bool c1038 = ((t1036 == r1037)) ? 1 : 0;
    if (c1038) {
        unsigned long r1039 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1035);
        unsigned long c1040 = 0;
        _Bool c1041 = ((r1039 > c1040)) ? 1 : 0;
        _Bool ternary1042;
        if (c1041) {
          struct std___Rb_tree_key_compare_std__less_int__* base1043 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1035->_M_impl) + 0);
          struct std__less_int_* cast1044 = (struct std__less_int_*)base1043;
          int* t1045 = __k1033;
          struct std___Rb_tree_node_base** r1046 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1035);
          struct std___Rb_tree_node_base* t1047 = *r1046;
          int* r1048 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1047);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r1049 = std__less_int___operator___int_const___int_const___const(cast1044, t1045, r1048);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u1050 = !r1049;
          ternary1042 = (_Bool)u1050;
        } else {
          _Bool c1051 = 0;
          ternary1042 = (_Bool)c1051;
        }
        if (ternary1042) {
          struct std___Rb_tree_node_base* ref_tmp01052;
          struct std___Rb_tree_node_base* c1053 = ((void*)0);
          ref_tmp01052 = c1053;
          struct std___Rb_tree_node_base** r1054 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1035);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, &ref_tmp01052, r1054);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1055 = __retval1034;
          return t1055;
        } else {
          int* t1056 = __k1033;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1057 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t1035, t1056);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1034 = r1057;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1058 = __retval1034;
          return t1058;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1059 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1035->_M_impl) + 0);
        struct std__less_int_* cast1060 = (struct std__less_int_*)base1059;
        struct std___Rb_tree_node_base* t1061 = __position1032._M_node;
        int* r1062 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1061);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1063 = __k1033;
        _Bool r1064 = std__less_int___operator___int_const___int_const___const(cast1060, r1062, t1063);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1065 = !r1064;
        if (u1065) {
          struct std___Rb_tree_iterator_int_ __before1066;
          struct std___Rb_tree_node_base* t1067 = __position1032._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1066, t1067);
            struct std___Rb_tree_node_base* t1068 = __position1032._M_node;
            struct std___Rb_tree_node_base** r1069 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1035);
            struct std___Rb_tree_node_base* t1070 = *r1069;
            _Bool c1071 = ((t1068 == t1070)) ? 1 : 0;
            if (c1071) {
              struct std___Rb_tree_node_base** r1072 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1035);
              struct std___Rb_tree_node_base** r1073 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1035);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, r1072, r1073);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1074 = __retval1034;
              return t1074;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1075 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1035->_M_impl) + 0);
                struct std__less_int_* cast1076 = (struct std__less_int_*)base1075;
                int* t1077 = __k1033;
                struct std___Rb_tree_iterator_int_* r1078 = std___Rb_tree_iterator_int___operator__(&__before1066);
                struct std___Rb_tree_node_base* t1079 = r1078->_M_node;
                int* r1080 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1079);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r1081 = std__less_int___operator___int_const___int_const___const(cast1076, t1077, r1080);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1082 = !r1081;
                if (u1082) {
                    struct std___Rb_tree_node_base* t1083 = __before1066._M_node;
                    struct std___Rb_tree_node_base* r1084 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1083);
                    _Bool cast1085 = (_Bool)r1084;
                    _Bool u1086 = !cast1085;
                    if (u1086) {
                      struct std___Rb_tree_node_base* ref_tmp11087;
                      struct std___Rb_tree_node_base* c1088 = ((void*)0);
                      ref_tmp11087 = c1088;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, &ref_tmp11087, &__before1066._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1089 = __retval1034;
                      return t1089;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, &__position1032._M_node, &__position1032._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1090 = __retval1034;
                      return t1090;
                    }
                } else {
                  int* t1091 = __k1033;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1092 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t1035, t1091);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval1034 = r1092;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1093 = __retval1034;
                  return t1093;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after1094;
          struct std___Rb_tree_node_base* t1095 = __position1032._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1094, t1095);
            struct std___Rb_tree_node_base* t1096 = __position1032._M_node;
            struct std___Rb_tree_node_base** r1097 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1035);
            struct std___Rb_tree_node_base* t1098 = *r1097;
            _Bool c1099 = ((t1096 == t1098)) ? 1 : 0;
            if (c1099) {
              struct std___Rb_tree_node_base* ref_tmp21100;
              struct std___Rb_tree_node_base* c1101 = ((void*)0);
              ref_tmp21100 = c1101;
              struct std___Rb_tree_node_base** r1102 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1035);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, &ref_tmp21100, r1102);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1103 = __retval1034;
              return t1103;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1104 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1035->_M_impl) + 0);
                struct std__less_int_* cast1105 = (struct std__less_int_*)base1104;
                struct std___Rb_tree_iterator_int_* r1106 = std___Rb_tree_iterator_int___operator___2(&__after1094);
                struct std___Rb_tree_node_base* t1107 = r1106->_M_node;
                int* r1108 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1107);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1109 = __k1033;
                _Bool r1110 = std__less_int___operator___int_const___int_const___const(cast1105, r1108, t1109);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1111 = !r1110;
                if (u1111) {
                    struct std___Rb_tree_node_base* t1112 = __position1032._M_node;
                    struct std___Rb_tree_node_base* r1113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1112);
                    _Bool cast1114 = (_Bool)r1113;
                    _Bool u1115 = !cast1114;
                    if (u1115) {
                      struct std___Rb_tree_node_base* ref_tmp31116;
                      struct std___Rb_tree_node_base* c1117 = ((void*)0);
                      ref_tmp31116 = c1117;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, &ref_tmp31116, &__position1032._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1118 = __retval1034;
                      return t1118;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1034, &__after1094._M_node, &__after1094._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1119 = __retval1034;
                      return t1119;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp41120;
                  struct std___Rb_tree_node_base* ref_tmp51121;
                  struct std___Rb_tree_node_base* c1122 = ((void*)0);
                  ref_tmp41120 = c1122;
                  struct std___Rb_tree_node_base* c1123 = ((void*)0);
                  ref_tmp51121 = c1123;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval1034, &ref_tmp41120, &ref_tmp51121);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1124 = __retval1034;
                  return t1124;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1125, int* v1126) {
bb1127:
  struct std___Identity_int_* this1128;
  int* __x1129;
  int* __retval1130;
  this1128 = v1125;
  __x1129 = v1126;
  struct std___Identity_int_* t1131 = this1128;
  int* t1132 = __x1129;
  __retval1130 = t1132;
  int* t1133 = __retval1130;
  return t1133;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1134) {
bb1135:
  struct std____new_allocator_std___Rb_tree_node_int__* this1136;
  unsigned long __retval1137;
  this1136 = v1134;
  struct std____new_allocator_std___Rb_tree_node_int__* t1138 = this1136;
  unsigned long c1139 = 9223372036854775807;
  unsigned long c1140 = 40;
  unsigned long b1141 = c1139 / c1140;
  __retval1137 = b1141;
  unsigned long t1142 = __retval1137;
  return t1142;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1143, unsigned long v1144, void* v1145) {
bb1146:
  struct std____new_allocator_std___Rb_tree_node_int__* this1147;
  unsigned long __n1148;
  void* unnamed1149;
  struct std___Rb_tree_node_int_* __retval1150;
  this1147 = v1143;
  __n1148 = v1144;
  unnamed1149 = v1145;
  struct std____new_allocator_std___Rb_tree_node_int__* t1151 = this1147;
    unsigned long t1152 = __n1148;
    unsigned long r1153 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1151);
    _Bool c1154 = ((t1152 > r1153)) ? 1 : 0;
    if (c1154) {
        unsigned long t1155 = __n1148;
        unsigned long c1156 = -1;
        unsigned long c1157 = 40;
        unsigned long b1158 = c1156 / c1157;
        _Bool c1159 = ((t1155 > b1158)) ? 1 : 0;
        if (c1159) {
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
    unsigned long c1160 = 8;
    unsigned long c1161 = 16;
    _Bool c1162 = ((c1160 > c1161)) ? 1 : 0;
    if (c1162) {
      unsigned long __al1163;
      unsigned long c1164 = 8;
      __al1163 = c1164;
      unsigned long t1165 = __n1148;
      unsigned long c1166 = 40;
      unsigned long b1167 = t1165 * c1166;
      unsigned long t1168 = __al1163;
      void* r1169 = operator_new_2(b1167, t1168);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1170 = (struct std___Rb_tree_node_int_*)r1169;
      __retval1150 = cast1170;
      struct std___Rb_tree_node_int_* t1171 = __retval1150;
      return t1171;
    }
  unsigned long t1172 = __n1148;
  unsigned long c1173 = 40;
  unsigned long b1174 = t1172 * c1173;
  void* r1175 = operator_new(b1174);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1176 = (struct std___Rb_tree_node_int_*)r1175;
  __retval1150 = cast1176;
  struct std___Rb_tree_node_int_* t1177 = __retval1150;
  return t1177;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1178, unsigned long v1179) {
bb1180:
  struct std__allocator_std___Rb_tree_node_int__* this1181;
  unsigned long __n1182;
  struct std___Rb_tree_node_int_* __retval1183;
  this1181 = v1178;
  __n1182 = v1179;
  struct std__allocator_std___Rb_tree_node_int__* t1184 = this1181;
    _Bool r1185 = std____is_constant_evaluated();
    if (r1185) {
        unsigned long t1186 = __n1182;
        unsigned long c1187 = 40;
        unsigned long ovr1188;
        _Bool ovf1189 = __builtin_mul_overflow(t1186, c1187, &ovr1188);
        __n1182 = ovr1188;
        if (ovf1189) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1190 = __n1182;
      void* r1191 = operator_new(t1190);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1192 = (struct std___Rb_tree_node_int_*)r1191;
      __retval1183 = cast1192;
      struct std___Rb_tree_node_int_* t1193 = __retval1183;
      return t1193;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1194 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1184 + 0);
  unsigned long t1195 = __n1182;
  void* c1196 = ((void*)0);
  struct std___Rb_tree_node_int_* r1197 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1194, t1195, c1196);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1183 = r1197;
  struct std___Rb_tree_node_int_* t1198 = __retval1183;
  return t1198;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1199, unsigned long v1200) {
bb1201:
  struct std__allocator_std___Rb_tree_node_int__* __a1202;
  unsigned long __n1203;
  struct std___Rb_tree_node_int_* __retval1204;
  __a1202 = v1199;
  __n1203 = v1200;
  struct std__allocator_std___Rb_tree_node_int__* t1205 = __a1202;
  unsigned long t1206 = __n1203;
  struct std___Rb_tree_node_int_* r1207 = std__allocator_std___Rb_tree_node_int_____allocate(t1205, t1206);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1204 = r1207;
  struct std___Rb_tree_node_int_* t1208 = __retval1204;
  return t1208;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1209) {
bb1210:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1211;
  struct std___Rb_tree_node_int_* __retval1212;
  this1211 = v1209;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1213 = this1211;
  struct std__allocator_std___Rb_tree_node_int__* r1214 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1213);
  unsigned long c1215 = 1;
  struct std___Rb_tree_node_int_* r1216 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1214, c1215);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1212 = r1216;
  struct std___Rb_tree_node_int_* t1217 = __retval1212;
  return t1217;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1218, int* v1219) {
bb1220:
  int* __location1221;
  int* __args1222;
  int* __retval1223;
  void* __loc1224;
  __location1221 = v1218;
  __args1222 = v1219;
  int* t1225 = __location1221;
  void* cast1226 = (void*)t1225;
  __loc1224 = cast1226;
    void* t1227 = __loc1224;
    int* cast1228 = (int*)t1227;
    int* t1229 = __args1222;
    int t1230 = *t1229;
    *cast1228 = t1230;
    __retval1223 = cast1228;
    int* t1231 = __retval1223;
    return t1231;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1232, int* v1233, int* v1234) {
bb1235:
  struct std__allocator_std___Rb_tree_node_int__* __a1236;
  int* __p1237;
  int* __args1238;
  __a1236 = v1232;
  __p1237 = v1233;
  __args1238 = v1234;
  int* t1239 = __p1237;
  int* t1240 = __args1238;
  int* r1241 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1239, t1240);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1242, struct std___Rb_tree_node_int_* v1243, int* v1244) {
bb1245:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1246;
  struct std___Rb_tree_node_int_* __node1247;
  int* __args1248;
  this1246 = v1242;
  __node1247 = v1243;
  __args1248 = v1244;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1249 = this1246;
      struct std__allocator_std___Rb_tree_node_int__* r1251 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1249);
      struct std___Rb_tree_node_int_* t1252 = __node1247;
      int* r1253 = std___Rb_tree_node_int____M_valptr(t1252);
      if (__cir_exc_active) {
        goto cir_try_dispatch1250;
      }
      int* t1254 = __args1248;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1251, r1253, t1254);
    cir_try_dispatch1250: ;
    if (__cir_exc_active) {
    {
      int ca_tok1255 = 0;
      void* ca_exn1256 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1257 = __node1247;
        struct std___Rb_tree_node_int_* t1258 = __node1247;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1249, t1258);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1259, int* v1260) {
bb1261:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1262;
  int* __args1263;
  struct std___Rb_tree_node_int_* __retval1264;
  struct std___Rb_tree_node_int_* __tmp1265;
  this1262 = v1259;
  __args1263 = v1260;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1266 = this1262;
  struct std___Rb_tree_node_int_* r1267 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1266);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1265 = r1267;
  struct std___Rb_tree_node_int_* t1268 = __tmp1265;
  int* t1269 = __args1263;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1266, t1268, t1269);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1270 = __tmp1265;
  __retval1264 = t1270;
  struct std___Rb_tree_node_int_* t1271 = __retval1264;
  return t1271;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1272, int* v1273) {
bb1274:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1275;
  int* __arg1276;
  struct std___Rb_tree_node_int_* __retval1277;
  this1275 = v1272;
  __arg1276 = v1273;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1278 = this1275;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1279 = t1278->_M_t;
  int* t1280 = __arg1276;
  struct std___Rb_tree_node_int_* r1281 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1279, t1280);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1277 = r1281;
  struct std___Rb_tree_node_int_* t1282 = __retval1277;
  return t1282;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1283, struct std___Rb_tree_node_base* v1284, struct std___Rb_tree_node_base* v1285, struct std___Rb_tree_node_base* v1286) {
bb1287:
  _Bool __insert_left1288;
  struct std___Rb_tree_node_base* __x1289;
  struct std___Rb_tree_node_base* __p1290;
  struct std___Rb_tree_node_base* __header1291;
  __insert_left1288 = v1283;
  __x1289 = v1284;
  __p1290 = v1285;
  __header1291 = v1286;
  _Bool t1292 = __insert_left1288;
  struct std___Rb_tree_node_base* t1293 = __x1289;
  struct std___Rb_tree_node_base* t1294 = __p1290;
  struct std___Rb_tree_node_base* t1295 = __header1291;
  std___Rb_tree_insert_and_rebalance(t1292, t1293, t1294, t1295);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1296, struct std___Rb_tree_node_base* v1297, struct std___Rb_tree_node_base* v1298, int* v1299, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1300) {
bb1301:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1302;
  struct std___Rb_tree_node_base* __x1303;
  struct std___Rb_tree_node_base* __p1304;
  int* __v1305;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1306;
  struct std___Rb_tree_iterator_int_ __retval1307;
  _Bool __insert_left1308;
  struct std___Rb_tree_node_base* __z1309;
  this1302 = v1296;
  __x1303 = v1297;
  __p1304 = v1298;
  __v1305 = v1299;
  __node_gen1306 = v1300;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1310 = this1302;
  struct std___Rb_tree_node_base* t1311 = __x1303;
  _Bool cast1312 = (_Bool)t1311;
  _Bool ternary1313;
  if (cast1312) {
    _Bool c1314 = 1;
    ternary1313 = (_Bool)c1314;
  } else {
    struct std___Rb_tree_node_base* t1315 = __p1304;
    struct std___Rb_tree_node_base* r1316 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1310);
    _Bool c1317 = ((t1315 == r1316)) ? 1 : 0;
    ternary1313 = (_Bool)c1317;
  }
  _Bool ternary1318;
  if (ternary1313) {
    _Bool c1319 = 1;
    ternary1318 = (_Bool)c1319;
  } else {
    struct std___Identity_int_ ref_tmp01320;
    struct std___Rb_tree_key_compare_std__less_int__* base1321 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1310->_M_impl) + 0);
    struct std__less_int_* cast1322 = (struct std__less_int_*)base1321;
    int* t1323 = __v1305;
    int* r1324 = std___Identity_int___operator___int___const(&ref_tmp01320, t1323);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1325 = __p1304;
    int* r1326 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1325);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1327 = std__less_int___operator___int_const___int_const___const(cast1322, r1324, r1326);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1318 = (_Bool)r1327;
  }
  __insert_left1308 = ternary1318;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1328 = __node_gen1306;
  int* t1329 = __v1305;
  struct std___Rb_tree_node_int_* r1330 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1328, t1329);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1331 = (struct std___Rb_tree_node_base*)((char *)r1330 + 0);
  struct std___Rb_tree_node_base* r1332 = std___Rb_tree_node_base___M_base_ptr___const(base1331);
  __z1309 = r1332;
  _Bool t1333 = __insert_left1308;
  struct std___Rb_tree_node_base* t1334 = __z1309;
  struct std___Rb_tree_node_base* t1335 = __p1304;
  struct std___Rb_tree_header* base1336 = (struct std___Rb_tree_header*)((char *)&(t1310->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1333, t1334, t1335, &base1336->_M_header);
  struct std___Rb_tree_header* base1337 = (struct std___Rb_tree_header*)((char *)&(t1310->_M_impl) + 8);
  unsigned long t1338 = base1337->_M_node_count;
  unsigned long u1339 = t1338 + 1;
  base1337->_M_node_count = u1339;
  struct std___Rb_tree_node_base* t1340 = __z1309;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1307, t1340);
  struct std___Rb_tree_iterator_int_ t1341 = __retval1307;
  return t1341;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1342, struct std___Rb_tree_node_base* v1343, int* v1344) {
bb1345:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1346;
  struct std___Rb_tree_node_base* __p1347;
  int* __v1348;
  struct std___Rb_tree_iterator_int_ __retval1349;
  _Bool __insert_left1350;
  struct std___Rb_tree_node_base* __z1351;
  this1346 = v1342;
  __p1347 = v1343;
  __v1348 = v1344;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1352 = this1346;
  struct std___Rb_tree_node_base* t1353 = __p1347;
  struct std___Rb_tree_node_base* r1354 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1352);
  _Bool c1355 = ((t1353 == r1354)) ? 1 : 0;
  _Bool ternary1356;
  if (c1355) {
    _Bool c1357 = 1;
    ternary1356 = (_Bool)c1357;
  } else {
    struct std___Identity_int_ ref_tmp01358;
    struct std___Rb_tree_key_compare_std__less_int__* base1359 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1352->_M_impl) + 0);
    struct std__less_int_* cast1360 = (struct std__less_int_*)base1359;
    struct std___Rb_tree_node_base* t1361 = __p1347;
    int* r1362 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1361);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1363 = __v1348;
    int* r1364 = std___Identity_int___operator___int___const(&ref_tmp01358, t1363);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1365 = std__less_int___operator___int_const___int_const___const(cast1360, r1362, r1364);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u1366 = !r1365;
    ternary1356 = (_Bool)u1366;
  }
  __insert_left1350 = ternary1356;
  int* t1367 = __v1348;
  struct std___Rb_tree_node_int_* r1368 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1352, t1367);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1369 = (struct std___Rb_tree_node_base*)((char *)r1368 + 0);
  struct std___Rb_tree_node_base* r1370 = std___Rb_tree_node_base___M_base_ptr___const(base1369);
  __z1351 = r1370;
  _Bool t1371 = __insert_left1350;
  struct std___Rb_tree_node_base* t1372 = __z1351;
  struct std___Rb_tree_node_base* t1373 = __p1347;
  struct std___Rb_tree_header* base1374 = (struct std___Rb_tree_header*)((char *)&(t1352->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1371, t1372, t1373, &base1374->_M_header);
  struct std___Rb_tree_header* base1375 = (struct std___Rb_tree_header*)((char *)&(t1352->_M_impl) + 8);
  unsigned long t1376 = base1375->_M_node_count;
  unsigned long u1377 = t1376 + 1;
  base1375->_M_node_count = u1377;
  struct std___Rb_tree_node_base* t1378 = __z1351;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1349, t1378);
  struct std___Rb_tree_iterator_int_ t1379 = __retval1349;
  return t1379;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1380, int* v1381) {
bb1382:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1383;
  int* __v1384;
  struct std___Rb_tree_iterator_int_ __retval1385;
  struct std___Rb_tree_node_base* __x1386;
  struct std___Rb_tree_node_base* __y1387;
  this1383 = v1380;
  __v1384 = v1381;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1388 = this1383;
  struct std___Rb_tree_node_base* r1389 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1388);
  __x1386 = r1389;
  struct std___Rb_tree_node_base* r1390 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1388);
  __y1387 = r1390;
    while (1) {
      struct std___Rb_tree_node_base* t1391 = __x1386;
      _Bool cast1392 = (_Bool)t1391;
      if (!cast1392) break;
        struct std___Identity_int_ ref_tmp01393;
        struct std___Rb_tree_node_base** tmp_exprcleanup1394;
        struct std___Rb_tree_node_base* t1395 = __x1386;
        __y1387 = t1395;
        struct std___Rb_tree_key_compare_std__less_int__* base1396 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1388->_M_impl) + 0);
        struct std__less_int_* cast1397 = (struct std__less_int_*)base1396;
        struct std___Rb_tree_node_base* t1398 = __x1386;
        int* r1399 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1398);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1400 = __v1384;
        int* r1401 = std___Identity_int___operator___int___const(&ref_tmp01393, t1400);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1402 = std__less_int___operator___int_const___int_const___const(cast1397, r1399, r1401);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1403 = !r1402;
        struct std___Rb_tree_node_base* ternary1404;
        if (u1403) {
          struct std___Rb_tree_node_base* t1405 = __x1386;
          struct std___Rb_tree_node_base* r1406 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1405);
          ternary1404 = (struct std___Rb_tree_node_base*)r1406;
        } else {
          struct std___Rb_tree_node_base* t1407 = __x1386;
          struct std___Rb_tree_node_base* r1408 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1407);
          ternary1404 = (struct std___Rb_tree_node_base*)r1408;
        }
        __x1386 = ternary1404;
        tmp_exprcleanup1394 = &__x1386;
        struct std___Rb_tree_node_base** t1409 = tmp_exprcleanup1394;
    }
  struct std___Rb_tree_node_base* t1410 = __y1387;
  int* t1411 = __v1384;
  struct std___Rb_tree_iterator_int_ r1412 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1388, t1410, t1411);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1385 = r1412;
  struct std___Rb_tree_iterator_int_ t1413 = __retval1385;
  return t1413;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1414, struct std___Rb_tree_const_iterator_int_ v1415, int* v1416, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1417) {
bb1418:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1419;
  struct std___Rb_tree_const_iterator_int_ __position1420;
  int* __v1421;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1422;
  struct std___Rb_tree_iterator_int_ __retval1423;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1424;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01425;
  struct std___Identity_int_ ref_tmp01426;
  this1419 = v1414;
  __position1420 = v1415;
  __v1421 = v1416;
  __node_gen1422 = v1417;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1427 = this1419;
  agg_tmp01425 = __position1420; // copy
  int* t1428 = __v1421;
  int* r1429 = std___Identity_int___operator___int___const(&ref_tmp01426, t1428);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1430 = agg_tmp01425;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1431 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1427, t1430, r1429);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1424 = r1431;
    struct std___Rb_tree_node_base* t1432 = __res1424.second;
    _Bool cast1433 = (_Bool)t1432;
    if (cast1433) {
      struct std___Rb_tree_node_base* t1434 = __res1424.first;
      struct std___Rb_tree_node_base* t1435 = __res1424.second;
      int* t1436 = __v1421;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1437 = __node_gen1422;
      struct std___Rb_tree_iterator_int_ r1438 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1427, t1434, t1435, t1436, t1437);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1423 = r1438;
      struct std___Rb_tree_iterator_int_ t1439 = __retval1423;
      return t1439;
    }
  int* t1440 = __v1421;
  struct std___Rb_tree_iterator_int_ r1441 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1427, t1440);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1423 = r1441;
  struct std___Rb_tree_iterator_int_ t1442 = __retval1423;
  return t1442;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1443) {
bb1444:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1445;
  struct std___Rb_tree_iterator_int_ __retval1446;
  this1445 = v1443;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1447 = this1445;
  struct std___Rb_tree_node_base* r1448 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1447);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1446, r1448);
  struct std___Rb_tree_iterator_int_ t1449 = __retval1446;
  return t1449;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1450, struct std___Rb_tree_iterator_int_* v1451) {
bb1452:
  struct std___Rb_tree_const_iterator_int_* this1453;
  struct std___Rb_tree_iterator_int_* __it1454;
  this1453 = v1450;
  __it1454 = v1451;
  struct std___Rb_tree_const_iterator_int_* t1455 = this1453;
  struct std___Rb_tree_iterator_int_* t1456 = __it1454;
  struct std___Rb_tree_node_base* t1457 = t1456->_M_node;
  t1455->_M_node = t1457;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1458, int* v1459, int* v1460) {
bb1461:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1462;
  int* __first1463;
  int* __last1464;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1465;
  this1462 = v1458;
  __first1463 = v1459;
  __last1464 = v1460;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1466 = this1462;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1465, t1466);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01467;
    struct std___Rb_tree_iterator_int_ ref_tmp01468;
    struct std___Rb_tree_iterator_int_ agg_tmp11469;
    while (1) {
      int* t1471 = __first1463;
      int* t1472 = __last1464;
      _Bool c1473 = ((t1471 != t1472)) ? 1 : 0;
      if (!c1473) break;
      struct std___Rb_tree_iterator_int_ r1474 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1466);
      ref_tmp01468 = r1474;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01467, &ref_tmp01468);
      int* t1475 = __first1463;
      struct std___Rb_tree_const_iterator_int_ t1476 = agg_tmp01467;
      struct std___Rb_tree_iterator_int_ r1477 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1466, t1476, t1475, &__an1465);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11469 = r1477;
    for_step1470: ;
      int* t1478 = __first1463;
      int c1479 = 1;
      int* ptr1480 = &(t1478)[c1479];
      __first1463 = ptr1480;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1481) {
bb1482:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1483;
  this1483 = v1481;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1484 = this1483;
  struct std__allocator_std___Rb_tree_node_int__* base1485 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1484 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1485);
    struct std___Rb_tree_key_compare_std__less_int__* base1486 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1484 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1486);
    struct std___Rb_tree_header* base1487 = (struct std___Rb_tree_header*)((char *)t1484 + 8);
    std___Rb_tree_header___Rb_tree_header(base1487);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1488) {
bb1489:
  struct std____new_allocator_std___Rb_tree_node_int__* this1490;
  this1490 = v1488;
  struct std____new_allocator_std___Rb_tree_node_int__* t1491 = this1490;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1492) {
bb1493:
  struct std__allocator_std___Rb_tree_node_int__* this1494;
  this1494 = v1492;
  struct std__allocator_std___Rb_tree_node_int__* t1495 = this1494;
  struct std____new_allocator_std___Rb_tree_node_int__* base1496 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1495 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1496);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1497) {
bb1498:
  struct std___Rb_tree_key_compare_std__less_int__* this1499;
  this1499 = v1497;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1500) {
bb1501:
  struct std___Rb_tree_header* this1502;
  this1502 = v1500;
  struct std___Rb_tree_header* t1503 = this1502;
  struct std___Rb_tree_node_base* c1504 = ((void*)0);
  t1503->_M_header._M_parent = c1504;
  t1503->_M_header._M_left = &t1503->_M_header;
  t1503->_M_header._M_right = &t1503->_M_header;
  unsigned long c1505 = 0;
  t1503->_M_node_count = c1505;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1506) {
bb1507:
  struct std___Rb_tree_header* this1508;
  this1508 = v1506;
  struct std___Rb_tree_header* t1509 = this1508;
  unsigned int c1510 = 0;
  t1509->_M_header._M_color = c1510;
  std___Rb_tree_header___M_reset(t1509);
  if (__cir_exc_active) {
    return;
  }
  return;
}

