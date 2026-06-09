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

int __const_main_b[5] = {10, 20, 30, 40, 50};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 5";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-find-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 20";
char _str_3[10] = "*it != 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_7[20] = "__position != end()";
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v50, struct std___Rb_tree_iterator_int_* v51) {
bb52:
  struct std___Rb_tree_iterator_int_* __x53;
  struct std___Rb_tree_iterator_int_* __y54;
  _Bool __retval55;
  __x53 = v50;
  __y54 = v51;
  struct std___Rb_tree_iterator_int_* t56 = __x53;
  struct std___Rb_tree_node_base* t57 = t56->_M_node;
  struct std___Rb_tree_iterator_int_* t58 = __y54;
  struct std___Rb_tree_node_base* t59 = t58->_M_node;
  _Bool c60 = ((t57 == t59)) ? 1 : 0;
  __retval55 = c60;
  _Bool t61 = __retval55;
  return t61;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v62, int* v63) {
bb64:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this65;
  int* __k66;
  struct std___Rb_tree_iterator_int_ __retval67;
  struct std___Rb_tree_iterator_int_ __j68;
  struct std___Rb_tree_iterator_int_ ref_tmp069;
  this65 = v62;
  __k66 = v63;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t70 = this65;
  struct std___Rb_tree_node_base* r71 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t70);
  struct std___Rb_tree_node_base* r72 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t70);
  int* t73 = __k66;
  struct std___Rb_tree_node_base* r74 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t70, r71, r72, t73);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j68, r74);
  struct std___Rb_tree_iterator_int_ r75 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t70);
  ref_tmp069 = r75;
  _Bool r76 = std__operator__(&__j68, &ref_tmp069);
  _Bool ternary77;
  if (r76) {
    _Bool c78 = 1;
    ternary77 = (_Bool)c78;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base79 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t70->_M_impl) + 0);
    struct std__less_int_* cast80 = (struct std__less_int_*)base79;
    int* t81 = __k66;
    struct std___Rb_tree_node_base* t82 = __j68._M_node;
    int* r83 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t82);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r84 = std__less_int___operator___int_const___int_const___const(cast80, t81, r83);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary77 = (_Bool)r84;
  }
  if (ternary77) {
    struct std___Rb_tree_iterator_int_ r85 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t70);
    __retval67 = r85;
  } else {
    __retval67 = __j68; // copy
  }
  struct std___Rb_tree_iterator_int_ t86 = __retval67;
  return t86;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* v87, int* v88) {
bb89:
  struct std__multiset_int__std__less_int___std__allocator_int__* this90;
  int* __x91;
  struct std___Rb_tree_const_iterator_int_ __retval92;
  struct std___Rb_tree_iterator_int_ ref_tmp093;
  this90 = v87;
  __x91 = v88;
  struct std__multiset_int__std__less_int___std__allocator_int__* t94 = this90;
  int* t95 = __x91;
  struct std___Rb_tree_iterator_int_ r96 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(&t94->_M_t, t95);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp093 = r96;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval92, &ref_tmp093);
  struct std___Rb_tree_const_iterator_int_ t97 = __retval92;
  return t97;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v98, struct std___Rb_tree_const_iterator_int_* v99) {
bb100:
  struct std___Rb_tree_const_iterator_int_* this101;
  struct std___Rb_tree_const_iterator_int_* unnamed102;
  struct std___Rb_tree_const_iterator_int_* __retval103;
  this101 = v98;
  unnamed102 = v99;
  struct std___Rb_tree_const_iterator_int_* t104 = this101;
  struct std___Rb_tree_const_iterator_int_* t105 = unnamed102;
  struct std___Rb_tree_node_base* t106 = t105->_M_node;
  t104->_M_node = t106;
  __retval103 = t104;
  struct std___Rb_tree_const_iterator_int_* t107 = __retval103;
  return t107;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v108) {
bb109:
  struct std___Rb_tree_const_iterator_int_* this110;
  int* __retval111;
  this110 = v108;
  struct std___Rb_tree_const_iterator_int_* t112 = this110;
  struct std___Rb_tree_node_base* t113 = t112->_M_node;
  struct std___Rb_tree_node_int_* derived114 = ((t113) ? (struct std___Rb_tree_node_int_*)((char *)t113 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r115 = std___Rb_tree_node_int____M_valptr___const(derived114);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval111 = r115;
  int* t116 = __retval111;
  return t116;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v117) {
bb118:
  struct std___Rb_tree_const_iterator_int_* this119;
  struct std___Rb_tree_const_iterator_int_* __retval120;
  this119 = v117;
  struct std___Rb_tree_const_iterator_int_* t121 = this119;
  struct std___Rb_tree_node_base* t122 = t121->_M_node;
  struct std___Rb_tree_node_base* r123 = std___Rb_tree_increment(t122);
  t121->_M_node = r123;
  __retval120 = t121;
  struct std___Rb_tree_const_iterator_int_* t124 = __retval120;
  return t124;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v125, struct std___Rb_tree_node_base* v126) {
bb127:
  struct std___Rb_tree_node_base* __z128;
  struct std___Rb_tree_node_base* __header129;
  struct std___Rb_tree_node_base* __retval130;
  __z128 = v125;
  __header129 = v126;
  struct std___Rb_tree_node_base* t131 = __z128;
  struct std___Rb_tree_node_base* t132 = __header129;
  struct std___Rb_tree_node_base* r133 = std___Rb_tree_rebalance_for_erase(t131, t132);
  __retval130 = r133;
  struct std___Rb_tree_node_base* t134 = __retval130;
  return t134;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v135, struct std___Rb_tree_const_iterator_int_ v136) {
bb137:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this138;
  struct std___Rb_tree_const_iterator_int_ __position139;
  struct std___Rb_tree_node_base* __y140;
  this138 = v135;
  __position139 = v136;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t141 = this138;
  struct std___Rb_tree_node_base* t142 = __position139._M_node;
  struct std___Rb_tree_header* base143 = (struct std___Rb_tree_header*)((char *)&(t141->_M_impl) + 8);
  struct std___Rb_tree_node_base* r144 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t142, &base143->_M_header);
  __y140 = r144;
  struct std___Rb_tree_node_base* t145 = __y140;
  struct std___Rb_tree_node_int_* derived146 = (struct std___Rb_tree_node_int_*)((char *)t145 - 0);
  struct std___Rb_tree_node_int_* r147 = std___Rb_tree_node_int____M_node_ptr(derived146);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t141, r147);
  struct std___Rb_tree_header* base148 = (struct std___Rb_tree_header*)((char *)&(t141->_M_impl) + 8);
  unsigned long t149 = base148->_M_node_count;
  unsigned long u150 = t149 - 1;
  base148->_M_node_count = u150;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v151, struct std___Rb_tree_const_iterator_int_ v152) {
bb153:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this154;
  struct std___Rb_tree_const_iterator_int_ __position155;
  struct std___Rb_tree_iterator_int_ __retval156;
  struct std___Rb_tree_const_iterator_int_ __result157;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0158;
  this154 = v151;
  __position155 = v152;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t159 = this154;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0160;
          struct std___Rb_tree_iterator_int_ ref_tmp1161;
          struct std___Rb_tree_iterator_int_ r162 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t159);
          ref_tmp1161 = r162;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0160, &ref_tmp1161);
          _Bool r163 = std__operator___2(&__position155, &ref_tmp0160);
          if (r163) {
            char* cast164 = (char*)&(_str_6);
            int c165 = 1818;
            char* cast166 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast167 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast164, c165, cast166, cast167);
          }
      _Bool c168 = 0;
      if (!c168) break;
    } while (1);
  __result157 = __position155; // copy
  struct std___Rb_tree_const_iterator_int_* r169 = std___Rb_tree_const_iterator_int___operator___2(&__result157);
  agg_tmp0158 = __position155; // copy
  struct std___Rb_tree_const_iterator_int_ t170 = agg_tmp0158;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t159, t170);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t171 = __result157._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval156, t171);
  struct std___Rb_tree_iterator_int_ t172 = __retval156;
  return t172;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v173, struct std___Rb_tree_const_iterator_int_ v174) {
bb175:
  struct std__multiset_int__std__less_int___std__allocator_int__* this176;
  struct std___Rb_tree_const_iterator_int_ __position177;
  struct std___Rb_tree_const_iterator_int_ __retval178;
  struct std___Rb_tree_iterator_int_ ref_tmp0179;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0180;
  this176 = v173;
  __position177 = v174;
  struct std__multiset_int__std__less_int___std__allocator_int__* t181 = this176;
  agg_tmp0180 = __position177; // copy
  struct std___Rb_tree_const_iterator_int_ t182 = agg_tmp0180;
  struct std___Rb_tree_iterator_int_ r183 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t181->_M_t, t182);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0179 = r183;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval178, &ref_tmp0179);
  struct std___Rb_tree_const_iterator_int_ t184 = __retval178;
  return t184;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v185, struct std___Rb_tree_node_base* v186) {
bb187:
  struct std___Rb_tree_const_iterator_int_* this188;
  struct std___Rb_tree_node_base* __x189;
  this188 = v185;
  __x189 = v186;
  struct std___Rb_tree_const_iterator_int_* t190 = this188;
  struct std___Rb_tree_node_base* t191 = __x189;
  t190->_M_node = t191;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v192) {
bb193:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this194;
  struct std___Rb_tree_const_iterator_int_ __retval195;
  this194 = v192;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t196 = this194;
  struct std___Rb_tree_header* base197 = (struct std___Rb_tree_header*)((char *)&(t196->_M_impl) + 8);
  struct std___Rb_tree_node_base* t198 = base197->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval195, t198);
  struct std___Rb_tree_const_iterator_int_ t199 = __retval195;
  return t199;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v200) {
bb201:
  struct std__multiset_int__std__less_int___std__allocator_int__* this202;
  struct std___Rb_tree_const_iterator_int_ __retval203;
  this202 = v200;
  struct std__multiset_int__std__less_int___std__allocator_int__* t204 = this202;
  struct std___Rb_tree_const_iterator_int_ r205 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t204->_M_t);
  __retval203 = r205;
  struct std___Rb_tree_const_iterator_int_ t206 = __retval203;
  return t206;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v207, int v208) {
bb209:
  struct std___Rb_tree_const_iterator_int_* this210;
  int unnamed211;
  struct std___Rb_tree_const_iterator_int_ __retval212;
  this210 = v207;
  unnamed211 = v208;
  struct std___Rb_tree_const_iterator_int_* t213 = this210;
  __retval212 = *t213; // copy
  struct std___Rb_tree_node_base* t214 = t213->_M_node;
  struct std___Rb_tree_node_base* r215 = std___Rb_tree_increment(t214);
  t213->_M_node = r215;
  struct std___Rb_tree_const_iterator_int_ t216 = __retval212;
  return t216;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v217, int v218) {
bb219:
  int __a220;
  int __b221;
  int __retval222;
  __a220 = v217;
  __b221 = v218;
  int t223 = __a220;
  int t224 = __b221;
  int b225 = t223 | t224;
  __retval222 = b225;
  int t226 = __retval222;
  return t226;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v227) {
bb228:
  struct std__basic_ios_char__std__char_traits_char__* this229;
  int __retval230;
  this229 = v227;
  struct std__basic_ios_char__std__char_traits_char__* t231 = this229;
  struct std__ios_base* base232 = (struct std__ios_base*)((char *)t231 + 0);
  int t233 = base232->_M_streambuf_state;
  __retval230 = t233;
  int t234 = __retval230;
  return t234;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v235, int v236) {
bb237:
  struct std__basic_ios_char__std__char_traits_char__* this238;
  int __state239;
  this238 = v235;
  __state239 = v236;
  struct std__basic_ios_char__std__char_traits_char__* t240 = this238;
  int r241 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t240);
  if (__cir_exc_active) {
    return;
  }
  int t242 = __state239;
  int r243 = std__operator_(r241, t242);
  std__basic_ios_char__std__char_traits_char_____clear(t240, r243);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v244, char* v245) {
bb246:
  char* __c1247;
  char* __c2248;
  _Bool __retval249;
  __c1247 = v244;
  __c2248 = v245;
  char* t250 = __c1247;
  char t251 = *t250;
  int cast252 = (int)t251;
  char* t253 = __c2248;
  char t254 = *t253;
  int cast255 = (int)t254;
  _Bool c256 = ((cast252 == cast255)) ? 1 : 0;
  __retval249 = c256;
  _Bool t257 = __retval249;
  return t257;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v258) {
bb259:
  char* __p260;
  unsigned long __retval261;
  unsigned long __i262;
  __p260 = v258;
  unsigned long c263 = 0;
  __i262 = c263;
    char ref_tmp0264;
    while (1) {
      unsigned long t265 = __i262;
      char* t266 = __p260;
      char* ptr267 = &(t266)[t265];
      char c268 = 0;
      ref_tmp0264 = c268;
      _Bool r269 = __gnu_cxx__char_traits_char___eq(ptr267, &ref_tmp0264);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u270 = !r269;
      if (!u270) break;
      unsigned long t271 = __i262;
      unsigned long u272 = t271 + 1;
      __i262 = u272;
    }
  unsigned long t273 = __i262;
  __retval261 = t273;
  unsigned long t274 = __retval261;
  return t274;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v275) {
bb276:
  char* __s277;
  unsigned long __retval278;
  __s277 = v275;
    _Bool r279 = std____is_constant_evaluated();
    if (r279) {
      char* t280 = __s277;
      unsigned long r281 = __gnu_cxx__char_traits_char___length(t280);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval278 = r281;
      unsigned long t282 = __retval278;
      return t282;
    }
  char* t283 = __s277;
  unsigned long r284 = strlen(t283);
  __retval278 = r284;
  unsigned long t285 = __retval278;
  return t285;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v286, char* v287) {
bb288:
  struct std__basic_ostream_char__std__char_traits_char__* __out289;
  char* __s290;
  struct std__basic_ostream_char__std__char_traits_char__* __retval291;
  __out289 = v286;
  __s290 = v287;
    char* t292 = __s290;
    _Bool cast293 = (_Bool)t292;
    _Bool u294 = !cast293;
    if (u294) {
      struct std__basic_ostream_char__std__char_traits_char__* t295 = __out289;
      void** v296 = (void**)t295;
      void* v297 = *((void**)v296);
      unsigned char* cast298 = (unsigned char*)v297;
      long c299 = -24;
      unsigned char* ptr300 = &(cast298)[c299];
      long* cast301 = (long*)ptr300;
      long t302 = *cast301;
      unsigned char* cast303 = (unsigned char*)t295;
      unsigned char* ptr304 = &(cast303)[t302];
      struct std__basic_ostream_char__std__char_traits_char__* cast305 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr304;
      struct std__basic_ios_char__std__char_traits_char__* cast306 = (struct std__basic_ios_char__std__char_traits_char__*)cast305;
      int t307 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast306, t307);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t308 = __out289;
      char* t309 = __s290;
      char* t310 = __s290;
      unsigned long r311 = std__char_traits_char___length(t310);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast312 = (long)r311;
      struct std__basic_ostream_char__std__char_traits_char__* r313 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t308, t309, cast312);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t314 = __out289;
  __retval291 = t314;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = __retval291;
  return t315;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v316, struct std___Rb_tree_const_iterator_int_* v317) {
bb318:
  struct std___Rb_tree_const_iterator_int_* __x319;
  struct std___Rb_tree_const_iterator_int_* __y320;
  _Bool __retval321;
  __x319 = v316;
  __y320 = v317;
  struct std___Rb_tree_const_iterator_int_* t322 = __x319;
  struct std___Rb_tree_node_base* t323 = t322->_M_node;
  struct std___Rb_tree_const_iterator_int_* t324 = __y320;
  struct std___Rb_tree_node_base* t325 = t324->_M_node;
  _Bool c326 = ((t323 == t325)) ? 1 : 0;
  __retval321 = c326;
  _Bool t327 = __retval321;
  return t327;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v328) {
bb329:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this330;
  struct std___Rb_tree_const_iterator_int_ __retval331;
  this330 = v328;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t332 = this330;
  struct std___Rb_tree_node_base* r333 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t332);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval331, r333);
  struct std___Rb_tree_const_iterator_int_ t334 = __retval331;
  return t334;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v335) {
bb336:
  struct std__multiset_int__std__less_int___std__allocator_int__* this337;
  struct std___Rb_tree_const_iterator_int_ __retval338;
  this337 = v335;
  struct std__multiset_int__std__less_int___std__allocator_int__* t339 = this337;
  struct std___Rb_tree_const_iterator_int_ r340 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t339->_M_t);
  __retval338 = r340;
  struct std___Rb_tree_const_iterator_int_ t341 = __retval338;
  return t341;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v342, void* v343) {
bb344:
  struct std__basic_ostream_char__std__char_traits_char__* this345;
  void* __pf346;
  struct std__basic_ostream_char__std__char_traits_char__* __retval347;
  this345 = v342;
  __pf346 = v343;
  struct std__basic_ostream_char__std__char_traits_char__* t348 = this345;
  void* t349 = __pf346;
  struct std__basic_ostream_char__std__char_traits_char__* r350 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t349)(t348);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval347 = r350;
  struct std__basic_ostream_char__std__char_traits_char__* t351 = __retval347;
  return t351;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v352) {
bb353:
  struct std__basic_ostream_char__std__char_traits_char__* __os354;
  struct std__basic_ostream_char__std__char_traits_char__* __retval355;
  __os354 = v352;
  struct std__basic_ostream_char__std__char_traits_char__* t356 = __os354;
  struct std__basic_ostream_char__std__char_traits_char__* r357 = std__ostream__flush(t356);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval355 = r357;
  struct std__basic_ostream_char__std__char_traits_char__* t358 = __retval355;
  return t358;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v359) {
bb360:
  struct std__ctype_char_* __f361;
  struct std__ctype_char_* __retval362;
  __f361 = v359;
    struct std__ctype_char_* t363 = __f361;
    _Bool cast364 = (_Bool)t363;
    _Bool u365 = !cast364;
    if (u365) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t366 = __f361;
  __retval362 = t366;
  struct std__ctype_char_* t367 = __retval362;
  return t367;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v368, char v369) {
bb370:
  struct std__ctype_char_* this371;
  char __c372;
  char __retval373;
  this371 = v368;
  __c372 = v369;
  struct std__ctype_char_* t374 = this371;
    char t375 = t374->_M_widen_ok;
    _Bool cast376 = (_Bool)t375;
    if (cast376) {
      char t377 = __c372;
      unsigned char cast378 = (unsigned char)t377;
      unsigned long cast379 = (unsigned long)cast378;
      char t380 = t374->_M_widen[cast379];
      __retval373 = t380;
      char t381 = __retval373;
      return t381;
    }
  std__ctype_char____M_widen_init___const(t374);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t382 = __c372;
  void** v383 = (void**)t374;
  void* v384 = *((void**)v383);
  char vcall387 = (char)__VERIFIER_virtual_call_char_char(t374, 6, t382);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval373 = vcall387;
  char t388 = __retval373;
  return t388;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v389, char v390) {
bb391:
  struct std__basic_ios_char__std__char_traits_char__* this392;
  char __c393;
  char __retval394;
  this392 = v389;
  __c393 = v390;
  struct std__basic_ios_char__std__char_traits_char__* t395 = this392;
  struct std__ctype_char_* t396 = t395->_M_ctype;
  struct std__ctype_char_* r397 = std__ctype_char__const__std____check_facet_std__ctype_char___(t396);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t398 = __c393;
  char r399 = std__ctype_char___widen_char__const(r397, t398);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval394 = r399;
  char t400 = __retval394;
  return t400;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v401) {
bb402:
  struct std__basic_ostream_char__std__char_traits_char__* __os403;
  struct std__basic_ostream_char__std__char_traits_char__* __retval404;
  __os403 = v401;
  struct std__basic_ostream_char__std__char_traits_char__* t405 = __os403;
  struct std__basic_ostream_char__std__char_traits_char__* t406 = __os403;
  void** v407 = (void**)t406;
  void* v408 = *((void**)v407);
  unsigned char* cast409 = (unsigned char*)v408;
  long c410 = -24;
  unsigned char* ptr411 = &(cast409)[c410];
  long* cast412 = (long*)ptr411;
  long t413 = *cast412;
  unsigned char* cast414 = (unsigned char*)t406;
  unsigned char* ptr415 = &(cast414)[t413];
  struct std__basic_ostream_char__std__char_traits_char__* cast416 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr415;
  struct std__basic_ios_char__std__char_traits_char__* cast417 = (struct std__basic_ios_char__std__char_traits_char__*)cast416;
  char c418 = 10;
  char r419 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast417, c418);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r420 = std__ostream__put(t405, r419);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r421 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r420);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval404 = r421;
  struct std__basic_ostream_char__std__char_traits_char__* t422 = __retval404;
  return t422;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v423) {
bb424:
  struct std__multiset_int__std__less_int___std__allocator_int__* this425;
  this425 = v423;
  struct std__multiset_int__std__less_int___std__allocator_int__* t426 = this425;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t426->_M_t);
  }
  return;
}

// function: main
int main() {
bb427:
  int __retval428;
  int b429[5];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset430;
  struct std___Rb_tree_const_iterator_int_ it431;
  int i432;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0433;
  int ref_tmp1434;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0435;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1436;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2437;
  int ref_tmp2438;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3439;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3440;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4441;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5442;
  int c443 = 0;
  __retval428 = c443;
  // array copy
  __builtin_memcpy(b429, __const_main_b, (unsigned long)5 * sizeof(__const_main_b[0]));
  int* cast444 = (int*)&(b429);
  int* cast445 = (int*)&(b429);
  int c446 = 5;
  int* ptr447 = &(cast445)[c446];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&myset430, cast444, ptr447);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it431);
    unsigned long r448 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset430);
    unsigned long c449 = 5;
    _Bool c450 = ((r448 == c449)) ? 1 : 0;
    if (c450) {
    } else {
      char* cast451 = (char*)&(_str);
      char* c452 = _str_1;
      unsigned int c453 = 21;
      char* cast454 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast451, c452, c453, cast454);
    }
    int c455 = 20;
    ref_tmp1434 = c455;
    struct std___Rb_tree_const_iterator_int_ r456 = std__multiset_int__std__less_int___std__allocator_int_____find(&myset430, &ref_tmp1434);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0433 = r456;
    struct std___Rb_tree_const_iterator_int_* r457 = std___Rb_tree_const_iterator_int___operator_(&it431, &ref_tmp0433);
    int* r458 = std___Rb_tree_const_iterator_int___operator____const(&it431);
    int t459 = *r458;
    int c460 = 20;
    _Bool c461 = ((t459 == c460)) ? 1 : 0;
    if (c461) {
    } else {
      char* cast462 = (char*)&(_str_2);
      char* c463 = _str_1;
      unsigned int c464 = 23;
      char* cast465 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast462, c463, c464, cast465);
    }
    agg_tmp0435 = it431; // copy
    struct std___Rb_tree_const_iterator_int_ t466 = agg_tmp0435;
    struct std___Rb_tree_const_iterator_int_ r467 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset430, t466);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1436 = r467;
    int c468 = 40;
    ref_tmp2438 = c468;
    struct std___Rb_tree_const_iterator_int_ r469 = std__multiset_int__std__less_int___std__allocator_int_____find(&myset430, &ref_tmp2438);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2437 = r469;
    struct std___Rb_tree_const_iterator_int_ t470 = agg_tmp2437;
    struct std___Rb_tree_const_iterator_int_ r471 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset430, t470);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3439 = r471;
    struct std___Rb_tree_const_iterator_int_ r472 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset430);
    ref_tmp3440 = r472;
    struct std___Rb_tree_const_iterator_int_* r473 = std___Rb_tree_const_iterator_int___operator_(&it431, &ref_tmp3440);
    int c474 = 0;
    struct std___Rb_tree_const_iterator_int_ r475 = std___Rb_tree_const_iterator_int___operator__(&it431, c474);
    agg_tmp4441 = r475;
    int c476 = 0;
    struct std___Rb_tree_const_iterator_int_ r477 = std___Rb_tree_const_iterator_int___operator__(&it431, c476);
    agg_tmp5442 = r477;
    int* r478 = std___Rb_tree_const_iterator_int___operator____const(&it431);
    int t479 = *r478;
    int c480 = 50;
    _Bool c481 = ((t479 != c480)) ? 1 : 0;
    if (c481) {
    } else {
      char* cast482 = (char*)&(_str_3);
      char* c483 = _str_1;
      unsigned int c484 = 28;
      char* cast485 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast482, c483, c484, cast485);
    }
    char* cast486 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r487 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast486);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp4488;
      struct std___Rb_tree_const_iterator_int_ ref_tmp5489;
      struct std___Rb_tree_const_iterator_int_ agg_tmp6490;
      struct std___Rb_tree_const_iterator_int_ r491 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset430);
      ref_tmp4488 = r491;
      struct std___Rb_tree_const_iterator_int_* r492 = std___Rb_tree_const_iterator_int___operator_(&it431, &ref_tmp4488);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r494 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset430);
        ref_tmp5489 = r494;
        _Bool r495 = std__operator___2(&it431, &ref_tmp5489);
        _Bool u496 = !r495;
        if (!u496) break;
        char* cast497 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r498 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast497);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r499 = std___Rb_tree_const_iterator_int___operator____const(&it431);
        int t500 = *r499;
        struct std__basic_ostream_char__std__char_traits_char__* r501 = std__ostream__operator__(r498, t500);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step493: ;
        int c502 = 0;
        struct std___Rb_tree_const_iterator_int_ r503 = std___Rb_tree_const_iterator_int___operator__(&it431, c502);
        agg_tmp6490 = r503;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r504 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c505 = 0;
    __retval428 = c505;
    int t506 = __retval428;
    int ret_val507 = t506;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset430);
    }
    return ret_val507;
  int t508 = __retval428;
  return t508;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v509) {
bb510:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this511;
  this511 = v509;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t512 = this511;
    struct std___Rb_tree_node_int_* r513 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t512);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t512, r513);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t512->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t512->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v514) {
bb515:
  struct std___Rb_tree_node_int_* this516;
  struct std___Rb_tree_node_int_* __retval517;
  this516 = v514;
  struct std___Rb_tree_node_int_* t518 = this516;
  __retval517 = t518;
  struct std___Rb_tree_node_int_* t519 = __retval517;
  return t519;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v520) {
bb521:
  struct std___Rb_tree_node_int_* __x522;
  struct std___Rb_tree_node_int_* __retval523;
  __x522 = v520;
  struct std___Rb_tree_node_int_* t524 = __x522;
  struct std___Rb_tree_node_base* base525 = (struct std___Rb_tree_node_base*)((char *)t524 + 0);
  struct std___Rb_tree_node_base* t526 = base525->_M_right;
  _Bool cast527 = (_Bool)t526;
  struct std___Rb_tree_node_int_* ternary528;
  if (cast527) {
    struct std___Rb_tree_node_int_* t529 = __x522;
    struct std___Rb_tree_node_base* base530 = (struct std___Rb_tree_node_base*)((char *)t529 + 0);
    struct std___Rb_tree_node_base* t531 = base530->_M_right;
    struct std___Rb_tree_node_int_* derived532 = (struct std___Rb_tree_node_int_*)((char *)t531 - 0);
    struct std___Rb_tree_node_int_* r533 = std___Rb_tree_node_int____M_node_ptr(derived532);
    ternary528 = (struct std___Rb_tree_node_int_*)r533;
  } else {
    struct std___Rb_tree_node_int_* c534 = ((void*)0);
    ternary528 = (struct std___Rb_tree_node_int_*)c534;
  }
  __retval523 = ternary528;
  struct std___Rb_tree_node_int_* t535 = __retval523;
  return t535;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v536) {
bb537:
  struct std___Rb_tree_node_int_* __x538;
  struct std___Rb_tree_node_int_* __retval539;
  __x538 = v536;
  struct std___Rb_tree_node_int_* t540 = __x538;
  struct std___Rb_tree_node_base* base541 = (struct std___Rb_tree_node_base*)((char *)t540 + 0);
  struct std___Rb_tree_node_base* t542 = base541->_M_left;
  _Bool cast543 = (_Bool)t542;
  struct std___Rb_tree_node_int_* ternary544;
  if (cast543) {
    struct std___Rb_tree_node_int_* t545 = __x538;
    struct std___Rb_tree_node_base* base546 = (struct std___Rb_tree_node_base*)((char *)t545 + 0);
    struct std___Rb_tree_node_base* t547 = base546->_M_left;
    struct std___Rb_tree_node_int_* derived548 = (struct std___Rb_tree_node_int_*)((char *)t547 - 0);
    struct std___Rb_tree_node_int_* r549 = std___Rb_tree_node_int____M_node_ptr(derived548);
    ternary544 = (struct std___Rb_tree_node_int_*)r549;
  } else {
    struct std___Rb_tree_node_int_* c550 = ((void*)0);
    ternary544 = (struct std___Rb_tree_node_int_*)c550;
  }
  __retval539 = ternary544;
  struct std___Rb_tree_node_int_* t551 = __retval539;
  return t551;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v552) {
bb553:
  int* __location554;
  __location554 = v552;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v555, int* v556) {
bb557:
  struct std__allocator_std___Rb_tree_node_int__* __a558;
  int* __p559;
  __a558 = v555;
  __p559 = v556;
  int* t560 = __p559;
  void_std__destroy_at_int_(t560);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v561) {
bb562:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this563;
  struct std__allocator_std___Rb_tree_node_int__* __retval564;
  this563 = v561;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t565 = this563;
  struct std__allocator_std___Rb_tree_node_int__* base566 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t565->_M_impl) + 0);
  __retval564 = base566;
  struct std__allocator_std___Rb_tree_node_int__* t567 = __retval564;
  return t567;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v568) {
bb569:
  struct __gnu_cxx____aligned_membuf_int_* this570;
  void* __retval571;
  this570 = v568;
  struct __gnu_cxx____aligned_membuf_int_* t572 = this570;
  void* cast573 = (void*)&(t572->_M_storage);
  __retval571 = cast573;
  void* t574 = __retval571;
  return t574;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v575) {
bb576:
  struct __gnu_cxx____aligned_membuf_int_* this577;
  int* __retval578;
  this577 = v575;
  struct __gnu_cxx____aligned_membuf_int_* t579 = this577;
  void* r580 = __gnu_cxx____aligned_membuf_int____M_addr(t579);
  int* cast581 = (int*)r580;
  __retval578 = cast581;
  int* t582 = __retval578;
  return t582;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v583) {
bb584:
  struct std___Rb_tree_node_int_* this585;
  int* __retval586;
  this585 = v583;
  struct std___Rb_tree_node_int_* t587 = this585;
  int* r588 = __gnu_cxx____aligned_membuf_int____M_ptr(&t587->_M_storage);
  __retval586 = r588;
  int* t589 = __retval586;
  return t589;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v590, struct std___Rb_tree_node_int_* v591) {
bb592:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this593;
  struct std___Rb_tree_node_int_* __p594;
  this593 = v590;
  __p594 = v591;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t595 = this593;
  struct std__allocator_std___Rb_tree_node_int__* r596 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t595);
  struct std___Rb_tree_node_int_* t597 = __p594;
  int* r598 = std___Rb_tree_node_int____M_valptr(t597);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r596, r598);
  struct std___Rb_tree_node_int_* t599 = __p594;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb600:
  _Bool __retval601;
    _Bool c602 = 0;
    __retval601 = c602;
    _Bool t603 = __retval601;
    return t603;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v604, struct std___Rb_tree_node_int_* v605, unsigned long v606) {
bb607:
  struct std____new_allocator_std___Rb_tree_node_int__* this608;
  struct std___Rb_tree_node_int_* __p609;
  unsigned long __n610;
  this608 = v604;
  __p609 = v605;
  __n610 = v606;
  struct std____new_allocator_std___Rb_tree_node_int__* t611 = this608;
    unsigned long c612 = 8;
    unsigned long c613 = 16;
    _Bool c614 = ((c612 > c613)) ? 1 : 0;
    if (c614) {
      struct std___Rb_tree_node_int_* t615 = __p609;
      void* cast616 = (void*)t615;
      unsigned long t617 = __n610;
      unsigned long c618 = 40;
      unsigned long b619 = t617 * c618;
      unsigned long c620 = 8;
      operator_delete_3(cast616, b619, c620);
      return;
    }
  struct std___Rb_tree_node_int_* t621 = __p609;
  void* cast622 = (void*)t621;
  unsigned long t623 = __n610;
  unsigned long c624 = 40;
  unsigned long b625 = t623 * c624;
  operator_delete_2(cast622, b625);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v626, struct std___Rb_tree_node_int_* v627, unsigned long v628) {
bb629:
  struct std__allocator_std___Rb_tree_node_int__* this630;
  struct std___Rb_tree_node_int_* __p631;
  unsigned long __n632;
  this630 = v626;
  __p631 = v627;
  __n632 = v628;
  struct std__allocator_std___Rb_tree_node_int__* t633 = this630;
    _Bool r634 = std____is_constant_evaluated();
    if (r634) {
      struct std___Rb_tree_node_int_* t635 = __p631;
      void* cast636 = (void*)t635;
      operator_delete(cast636);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base637 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t633 + 0);
  struct std___Rb_tree_node_int_* t638 = __p631;
  unsigned long t639 = __n632;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base637, t638, t639);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v640, struct std___Rb_tree_node_int_* v641, unsigned long v642) {
bb643:
  struct std__allocator_std___Rb_tree_node_int__* __a644;
  struct std___Rb_tree_node_int_* __p645;
  unsigned long __n646;
  __a644 = v640;
  __p645 = v641;
  __n646 = v642;
  struct std__allocator_std___Rb_tree_node_int__* t647 = __a644;
  struct std___Rb_tree_node_int_* t648 = __p645;
  unsigned long t649 = __n646;
  std__allocator_std___Rb_tree_node_int_____deallocate(t647, t648, t649);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v650, struct std___Rb_tree_node_int_* v651) {
bb652:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this653;
  struct std___Rb_tree_node_int_* __p654;
  this653 = v650;
  __p654 = v651;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t655 = this653;
  struct std__allocator_std___Rb_tree_node_int__* r656 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t655);
  struct std___Rb_tree_node_int_* t657 = __p654;
  unsigned long c658 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r656, t657, c658);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v659, struct std___Rb_tree_node_int_* v660) {
bb661:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this662;
  struct std___Rb_tree_node_int_* __p663;
  this662 = v659;
  __p663 = v660;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t664 = this662;
  struct std___Rb_tree_node_int_* t665 = __p663;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t664, t665);
  struct std___Rb_tree_node_int_* t666 = __p663;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t664, t666);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v667, struct std___Rb_tree_node_int_* v668) {
bb669:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this670;
  struct std___Rb_tree_node_int_* __x671;
  this670 = v667;
  __x671 = v668;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t672 = this670;
    while (1) {
      struct std___Rb_tree_node_int_* t673 = __x671;
      _Bool cast674 = (_Bool)t673;
      if (!cast674) break;
        struct std___Rb_tree_node_int_* __y675;
        struct std___Rb_tree_node_int_* t676 = __x671;
        struct std___Rb_tree_node_int_* r677 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t676);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t672, r677);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t678 = __x671;
        struct std___Rb_tree_node_int_* r679 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t678);
        if (__cir_exc_active) {
          return;
        }
        __y675 = r679;
        struct std___Rb_tree_node_int_* t680 = __x671;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t672, t680);
        struct std___Rb_tree_node_int_* t681 = __y675;
        __x671 = t681;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v682) {
bb683:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this684;
  struct std___Rb_tree_node_int_* __retval685;
  struct std___Rb_tree_node_base* __begin686;
  this684 = v682;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t687 = this684;
  struct std___Rb_tree_header* base688 = (struct std___Rb_tree_header*)((char *)&(t687->_M_impl) + 8);
  struct std___Rb_tree_node_base* t689 = base688->_M_header._M_parent;
  __begin686 = t689;
  struct std___Rb_tree_node_base* t690 = __begin686;
  _Bool cast691 = (_Bool)t690;
  struct std___Rb_tree_node_int_* ternary692;
  if (cast691) {
    struct std___Rb_tree_node_base* t693 = __begin686;
    struct std___Rb_tree_node_int_* derived694 = (struct std___Rb_tree_node_int_*)((char *)t693 - 0);
    struct std___Rb_tree_node_int_* r695 = std___Rb_tree_node_int____M_node_ptr(derived694);
    ternary692 = (struct std___Rb_tree_node_int_*)r695;
  } else {
    struct std___Rb_tree_node_int_* c696 = ((void*)0);
    ternary692 = (struct std___Rb_tree_node_int_*)c696;
  }
  __retval685 = ternary692;
  struct std___Rb_tree_node_int_* t697 = __retval685;
  return t697;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v698) {
bb699:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this700;
  this700 = v698;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t701 = this700;
  {
    struct std__allocator_std___Rb_tree_node_int__* base702 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t701 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base702);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v703) {
bb704:
  struct std__allocator_std___Rb_tree_node_int__* this705;
  this705 = v703;
  struct std__allocator_std___Rb_tree_node_int__* t706 = this705;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v707) {
bb708:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this709;
  this709 = v707;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t710 = this709;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t710->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v711, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v712) {
bb713:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this714;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t715;
  this714 = v711;
  __t715 = v712;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t716 = this714;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t717 = __t715;
  t716->_M_t = t717;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v718) {
bb719:
  struct std___Rb_tree_node_base* this720;
  struct std___Rb_tree_node_base* __retval721;
  this720 = v718;
  struct std___Rb_tree_node_base* t722 = this720;
  __retval721 = t722;
  struct std___Rb_tree_node_base* t723 = __retval721;
  return t723;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v724) {
bb725:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this726;
  struct std___Rb_tree_node_base* __retval727;
  this726 = v724;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t728 = this726;
  struct std___Rb_tree_header* base729 = (struct std___Rb_tree_header*)((char *)&(t728->_M_impl) + 8);
  struct std___Rb_tree_node_base* r730 = std___Rb_tree_node_base___M_base_ptr___const(&base729->_M_header);
  __retval727 = r730;
  struct std___Rb_tree_node_base* t731 = __retval727;
  return t731;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v732) {
bb733:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this734;
  unsigned long __retval735;
  this734 = v732;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t736 = this734;
  struct std___Rb_tree_header* base737 = (struct std___Rb_tree_header*)((char *)&(t736->_M_impl) + 8);
  unsigned long t738 = base737->_M_node_count;
  __retval735 = t738;
  unsigned long t739 = __retval735;
  return t739;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v740, int* v741, int* v742) {
bb743:
  struct std__less_int_* this744;
  int* __x745;
  int* __y746;
  _Bool __retval747;
  this744 = v740;
  __x745 = v741;
  __y746 = v742;
  struct std__less_int_* t748 = this744;
  int* t749 = __x745;
  int t750 = *t749;
  int* t751 = __y746;
  int t752 = *t751;
  _Bool c753 = ((t750 < t752)) ? 1 : 0;
  __retval747 = c753;
  _Bool t754 = __retval747;
  return t754;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v755, int* v756) {
bb757:
  struct std___Identity_int_* this758;
  int* __x759;
  int* __retval760;
  this758 = v755;
  __x759 = v756;
  struct std___Identity_int_* t761 = this758;
  int* t762 = __x759;
  __retval760 = t762;
  int* t763 = __retval760;
  return t763;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v764) {
bb765:
  struct __gnu_cxx____aligned_membuf_int_* this766;
  void* __retval767;
  this766 = v764;
  struct __gnu_cxx____aligned_membuf_int_* t768 = this766;
  void* cast769 = (void*)&(t768->_M_storage);
  __retval767 = cast769;
  void* t770 = __retval767;
  return t770;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v771) {
bb772:
  struct __gnu_cxx____aligned_membuf_int_* this773;
  int* __retval774;
  this773 = v771;
  struct __gnu_cxx____aligned_membuf_int_* t775 = this773;
  void* r776 = __gnu_cxx____aligned_membuf_int____M_addr___const(t775);
  int* cast777 = (int*)r776;
  __retval774 = cast777;
  int* t778 = __retval774;
  return t778;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v779) {
bb780:
  struct std___Rb_tree_node_int_* this781;
  int* __retval782;
  this781 = v779;
  struct std___Rb_tree_node_int_* t783 = this781;
  int* r784 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t783->_M_storage);
  __retval782 = r784;
  int* t785 = __retval782;
  return t785;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v786) {
bb787:
  struct std___Rb_tree_node_int_* __node788;
  int* __retval789;
  struct std___Identity_int_ ref_tmp0790;
  __node788 = v786;
  struct std___Rb_tree_node_int_* t791 = __node788;
  int* r792 = std___Rb_tree_node_int____M_valptr___const(t791);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r793 = std___Identity_int___operator___int_const___const(&ref_tmp0790, r792);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval789 = r793;
  int* t794 = __retval789;
  return t794;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v795) {
bb796:
  struct std___Rb_tree_node_base* __x797;
  int* __retval798;
  __x797 = v795;
  struct std___Rb_tree_node_base* t799 = __x797;
  struct std___Rb_tree_node_int_* derived800 = (struct std___Rb_tree_node_int_*)((char *)t799 - 0);
  int* r801 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived800);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval798 = r801;
  int* t802 = __retval798;
  return t802;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v803) {
bb804:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this805;
  struct std___Rb_tree_node_base** __retval806;
  this805 = v803;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t807 = this805;
  struct std___Rb_tree_header* base808 = (struct std___Rb_tree_header*)((char *)&(t807->_M_impl) + 8);
  __retval806 = &base808->_M_header._M_right;
  struct std___Rb_tree_node_base** t809 = __retval806;
  return t809;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v810, struct std___Rb_tree_node_base** v811, struct std___Rb_tree_node_base** v812) {
bb813:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this814;
  struct std___Rb_tree_node_base** __x815;
  struct std___Rb_tree_node_base** __y816;
  this814 = v810;
  __x815 = v811;
  __y816 = v812;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t817 = this814;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base818 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t817 + 0);
  struct std___Rb_tree_node_base** t819 = __x815;
  struct std___Rb_tree_node_base* t820 = *t819;
  t817->first = t820;
  struct std___Rb_tree_node_base** t821 = __y816;
  struct std___Rb_tree_node_base* t822 = *t821;
  t817->second = t822;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v823) {
bb824:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this825;
  struct std___Rb_tree_node_base* __retval826;
  this825 = v823;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t827 = this825;
  struct std___Rb_tree_header* base828 = (struct std___Rb_tree_header*)((char *)&(t827->_M_impl) + 8);
  struct std___Rb_tree_node_base* t829 = base828->_M_header._M_parent;
  __retval826 = t829;
  struct std___Rb_tree_node_base* t830 = __retval826;
  return t830;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v831) {
bb832:
  struct std___Rb_tree_node_base* __x833;
  struct std___Rb_tree_node_base* __retval834;
  __x833 = v831;
  struct std___Rb_tree_node_base* t835 = __x833;
  struct std___Rb_tree_node_base* t836 = t835->_M_left;
  __retval834 = t836;
  struct std___Rb_tree_node_base* t837 = __retval834;
  return t837;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v838, int* v839) {
bb840:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this841;
  int* __k842;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval843;
  struct std___Rb_tree_node_base* __x844;
  struct std___Rb_tree_node_base* __y845;
  this841 = v838;
  __k842 = v839;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t846 = this841;
  struct std___Rb_tree_node_base* r847 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t846);
  __x844 = r847;
  struct std___Rb_tree_node_base* r848 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t846);
  __y845 = r848;
    while (1) {
      struct std___Rb_tree_node_base* t849 = __x844;
      _Bool cast850 = (_Bool)t849;
      if (!cast850) break;
        struct std___Rb_tree_node_base* t851 = __x844;
        __y845 = t851;
        struct std___Rb_tree_key_compare_std__less_int__* base852 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t846->_M_impl) + 0);
        struct std__less_int_* cast853 = (struct std__less_int_*)base852;
        int* t854 = __k842;
        struct std___Rb_tree_node_base* t855 = __x844;
        int* r856 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t855);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r857 = std__less_int___operator___int_const___int_const___const(cast853, t854, r856);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary858;
        if (r857) {
          struct std___Rb_tree_node_base* t859 = __x844;
          struct std___Rb_tree_node_base* r860 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t859);
          ternary858 = (struct std___Rb_tree_node_base*)r860;
        } else {
          struct std___Rb_tree_node_base* t861 = __x844;
          struct std___Rb_tree_node_base* r862 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t861);
          ternary858 = (struct std___Rb_tree_node_base*)r862;
        }
        __x844 = ternary858;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval843, &__x844, &__y845);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t863 = __retval843;
  return t863;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v864, struct std___Rb_tree_node_base* v865) {
bb866:
  struct std___Rb_tree_iterator_int_* this867;
  struct std___Rb_tree_node_base* __x868;
  this867 = v864;
  __x868 = v865;
  struct std___Rb_tree_iterator_int_* t869 = this867;
  struct std___Rb_tree_node_base* t870 = __x868;
  t869->_M_node = t870;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v871) {
bb872:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this873;
  struct std___Rb_tree_node_base** __retval874;
  this873 = v871;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t875 = this873;
  struct std___Rb_tree_header* base876 = (struct std___Rb_tree_header*)((char *)&(t875->_M_impl) + 8);
  __retval874 = &base876->_M_header._M_left;
  struct std___Rb_tree_node_base** t877 = __retval874;
  return t877;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v878, struct std___Rb_tree_node_base** v879, struct std___Rb_tree_node_base** v880) {
bb881:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this882;
  struct std___Rb_tree_node_base** __x883;
  struct std___Rb_tree_node_base** __y884;
  this882 = v878;
  __x883 = v879;
  __y884 = v880;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t885 = this882;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base886 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t885 + 0);
  struct std___Rb_tree_node_base** t887 = __x883;
  struct std___Rb_tree_node_base* t888 = *t887;
  t885->first = t888;
  struct std___Rb_tree_node_base** t889 = __y884;
  struct std___Rb_tree_node_base* t890 = *t889;
  t885->second = t890;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v891) {
bb892:
  struct std___Rb_tree_iterator_int_* this893;
  struct std___Rb_tree_iterator_int_* __retval894;
  this893 = v891;
  struct std___Rb_tree_iterator_int_* t895 = this893;
  struct std___Rb_tree_node_base* t896 = t895->_M_node;
  struct std___Rb_tree_node_base* r897 = std___Rb_tree_decrement(t896);
  t895->_M_node = r897;
  __retval894 = t895;
  struct std___Rb_tree_iterator_int_* t898 = __retval894;
  return t898;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v899) {
bb900:
  struct std___Rb_tree_node_base* __x901;
  struct std___Rb_tree_node_base* __retval902;
  __x901 = v899;
  struct std___Rb_tree_node_base* t903 = __x901;
  struct std___Rb_tree_node_base* t904 = t903->_M_right;
  __retval902 = t904;
  struct std___Rb_tree_node_base* t905 = __retval902;
  return t905;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v906) {
bb907:
  struct std___Rb_tree_iterator_int_* this908;
  struct std___Rb_tree_iterator_int_* __retval909;
  this908 = v906;
  struct std___Rb_tree_iterator_int_* t910 = this908;
  struct std___Rb_tree_node_base* t911 = t910->_M_node;
  struct std___Rb_tree_node_base* r912 = std___Rb_tree_increment(t911);
  t910->_M_node = r912;
  __retval909 = t910;
  struct std___Rb_tree_iterator_int_* t913 = __retval909;
  return t913;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v914, struct std___Rb_tree_node_base** v915, struct std___Rb_tree_node_base** v916) {
bb917:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this918;
  struct std___Rb_tree_node_base** __x919;
  struct std___Rb_tree_node_base** __y920;
  this918 = v914;
  __x919 = v915;
  __y920 = v916;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t921 = this918;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base922 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t921 + 0);
  struct std___Rb_tree_node_base** t923 = __x919;
  struct std___Rb_tree_node_base* t924 = *t923;
  t921->first = t924;
  struct std___Rb_tree_node_base** t925 = __y920;
  struct std___Rb_tree_node_base* t926 = *t925;
  t921->second = t926;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v927, struct std___Rb_tree_const_iterator_int_ v928, int* v929) {
bb930:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this931;
  struct std___Rb_tree_const_iterator_int_ __position932;
  int* __k933;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval934;
  this931 = v927;
  __position932 = v928;
  __k933 = v929;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t935 = this931;
    struct std___Rb_tree_node_base* t936 = __position932._M_node;
    struct std___Rb_tree_node_base* r937 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t935);
    _Bool c938 = ((t936 == r937)) ? 1 : 0;
    if (c938) {
        unsigned long r939 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t935);
        unsigned long c940 = 0;
        _Bool c941 = ((r939 > c940)) ? 1 : 0;
        _Bool ternary942;
        if (c941) {
          struct std___Rb_tree_key_compare_std__less_int__* base943 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t935->_M_impl) + 0);
          struct std__less_int_* cast944 = (struct std__less_int_*)base943;
          int* t945 = __k933;
          struct std___Rb_tree_node_base** r946 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t935);
          struct std___Rb_tree_node_base* t947 = *r946;
          int* r948 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t947);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r949 = std__less_int___operator___int_const___int_const___const(cast944, t945, r948);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u950 = !r949;
          ternary942 = (_Bool)u950;
        } else {
          _Bool c951 = 0;
          ternary942 = (_Bool)c951;
        }
        if (ternary942) {
          struct std___Rb_tree_node_base* ref_tmp0952;
          struct std___Rb_tree_node_base* c953 = ((void*)0);
          ref_tmp0952 = c953;
          struct std___Rb_tree_node_base** r954 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t935);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, &ref_tmp0952, r954);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t955 = __retval934;
          return t955;
        } else {
          int* t956 = __k933;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r957 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t935, t956);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval934 = r957;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t958 = __retval934;
          return t958;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base959 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t935->_M_impl) + 0);
        struct std__less_int_* cast960 = (struct std__less_int_*)base959;
        struct std___Rb_tree_node_base* t961 = __position932._M_node;
        int* r962 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t961);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t963 = __k933;
        _Bool r964 = std__less_int___operator___int_const___int_const___const(cast960, r962, t963);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u965 = !r964;
        if (u965) {
          struct std___Rb_tree_iterator_int_ __before966;
          struct std___Rb_tree_node_base* t967 = __position932._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before966, t967);
            struct std___Rb_tree_node_base* t968 = __position932._M_node;
            struct std___Rb_tree_node_base** r969 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t935);
            struct std___Rb_tree_node_base* t970 = *r969;
            _Bool c971 = ((t968 == t970)) ? 1 : 0;
            if (c971) {
              struct std___Rb_tree_node_base** r972 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t935);
              struct std___Rb_tree_node_base** r973 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t935);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, r972, r973);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t974 = __retval934;
              return t974;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base975 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t935->_M_impl) + 0);
                struct std__less_int_* cast976 = (struct std__less_int_*)base975;
                int* t977 = __k933;
                struct std___Rb_tree_iterator_int_* r978 = std___Rb_tree_iterator_int___operator__(&__before966);
                struct std___Rb_tree_node_base* t979 = r978->_M_node;
                int* r980 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t979);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r981 = std__less_int___operator___int_const___int_const___const(cast976, t977, r980);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u982 = !r981;
                if (u982) {
                    struct std___Rb_tree_node_base* t983 = __before966._M_node;
                    struct std___Rb_tree_node_base* r984 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t983);
                    _Bool cast985 = (_Bool)r984;
                    _Bool u986 = !cast985;
                    if (u986) {
                      struct std___Rb_tree_node_base* ref_tmp1987;
                      struct std___Rb_tree_node_base* c988 = ((void*)0);
                      ref_tmp1987 = c988;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, &ref_tmp1987, &__before966._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t989 = __retval934;
                      return t989;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, &__position932._M_node, &__position932._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t990 = __retval934;
                      return t990;
                    }
                } else {
                  int* t991 = __k933;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r992 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t935, t991);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval934 = r992;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t993 = __retval934;
                  return t993;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after994;
          struct std___Rb_tree_node_base* t995 = __position932._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after994, t995);
            struct std___Rb_tree_node_base* t996 = __position932._M_node;
            struct std___Rb_tree_node_base** r997 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t935);
            struct std___Rb_tree_node_base* t998 = *r997;
            _Bool c999 = ((t996 == t998)) ? 1 : 0;
            if (c999) {
              struct std___Rb_tree_node_base* ref_tmp21000;
              struct std___Rb_tree_node_base* c1001 = ((void*)0);
              ref_tmp21000 = c1001;
              struct std___Rb_tree_node_base** r1002 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t935);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, &ref_tmp21000, r1002);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1003 = __retval934;
              return t1003;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1004 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t935->_M_impl) + 0);
                struct std__less_int_* cast1005 = (struct std__less_int_*)base1004;
                struct std___Rb_tree_iterator_int_* r1006 = std___Rb_tree_iterator_int___operator___2(&__after994);
                struct std___Rb_tree_node_base* t1007 = r1006->_M_node;
                int* r1008 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1007);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1009 = __k933;
                _Bool r1010 = std__less_int___operator___int_const___int_const___const(cast1005, r1008, t1009);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1011 = !r1010;
                if (u1011) {
                    struct std___Rb_tree_node_base* t1012 = __position932._M_node;
                    struct std___Rb_tree_node_base* r1013 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1012);
                    _Bool cast1014 = (_Bool)r1013;
                    _Bool u1015 = !cast1014;
                    if (u1015) {
                      struct std___Rb_tree_node_base* ref_tmp31016;
                      struct std___Rb_tree_node_base* c1017 = ((void*)0);
                      ref_tmp31016 = c1017;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, &ref_tmp31016, &__position932._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1018 = __retval934;
                      return t1018;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval934, &__after994._M_node, &__after994._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1019 = __retval934;
                      return t1019;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp41020;
                  struct std___Rb_tree_node_base* ref_tmp51021;
                  struct std___Rb_tree_node_base* c1022 = ((void*)0);
                  ref_tmp41020 = c1022;
                  struct std___Rb_tree_node_base* c1023 = ((void*)0);
                  ref_tmp51021 = c1023;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval934, &ref_tmp41020, &ref_tmp51021);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1024 = __retval934;
                  return t1024;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1025, int* v1026) {
bb1027:
  struct std___Identity_int_* this1028;
  int* __x1029;
  int* __retval1030;
  this1028 = v1025;
  __x1029 = v1026;
  struct std___Identity_int_* t1031 = this1028;
  int* t1032 = __x1029;
  __retval1030 = t1032;
  int* t1033 = __retval1030;
  return t1033;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1034) {
bb1035:
  struct std____new_allocator_std___Rb_tree_node_int__* this1036;
  unsigned long __retval1037;
  this1036 = v1034;
  struct std____new_allocator_std___Rb_tree_node_int__* t1038 = this1036;
  unsigned long c1039 = 9223372036854775807;
  unsigned long c1040 = 40;
  unsigned long b1041 = c1039 / c1040;
  __retval1037 = b1041;
  unsigned long t1042 = __retval1037;
  return t1042;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1043, unsigned long v1044, void* v1045) {
bb1046:
  struct std____new_allocator_std___Rb_tree_node_int__* this1047;
  unsigned long __n1048;
  void* unnamed1049;
  struct std___Rb_tree_node_int_* __retval1050;
  this1047 = v1043;
  __n1048 = v1044;
  unnamed1049 = v1045;
  struct std____new_allocator_std___Rb_tree_node_int__* t1051 = this1047;
    unsigned long t1052 = __n1048;
    unsigned long r1053 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1051);
    _Bool c1054 = ((t1052 > r1053)) ? 1 : 0;
    if (c1054) {
        unsigned long t1055 = __n1048;
        unsigned long c1056 = -1;
        unsigned long c1057 = 40;
        unsigned long b1058 = c1056 / c1057;
        _Bool c1059 = ((t1055 > b1058)) ? 1 : 0;
        if (c1059) {
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
    unsigned long c1060 = 8;
    unsigned long c1061 = 16;
    _Bool c1062 = ((c1060 > c1061)) ? 1 : 0;
    if (c1062) {
      unsigned long __al1063;
      unsigned long c1064 = 8;
      __al1063 = c1064;
      unsigned long t1065 = __n1048;
      unsigned long c1066 = 40;
      unsigned long b1067 = t1065 * c1066;
      unsigned long t1068 = __al1063;
      void* r1069 = operator_new_2(b1067, t1068);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1070 = (struct std___Rb_tree_node_int_*)r1069;
      __retval1050 = cast1070;
      struct std___Rb_tree_node_int_* t1071 = __retval1050;
      return t1071;
    }
  unsigned long t1072 = __n1048;
  unsigned long c1073 = 40;
  unsigned long b1074 = t1072 * c1073;
  void* r1075 = operator_new(b1074);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1076 = (struct std___Rb_tree_node_int_*)r1075;
  __retval1050 = cast1076;
  struct std___Rb_tree_node_int_* t1077 = __retval1050;
  return t1077;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1078, unsigned long v1079) {
bb1080:
  struct std__allocator_std___Rb_tree_node_int__* this1081;
  unsigned long __n1082;
  struct std___Rb_tree_node_int_* __retval1083;
  this1081 = v1078;
  __n1082 = v1079;
  struct std__allocator_std___Rb_tree_node_int__* t1084 = this1081;
    _Bool r1085 = std____is_constant_evaluated();
    if (r1085) {
        unsigned long t1086 = __n1082;
        unsigned long c1087 = 40;
        unsigned long ovr1088;
        _Bool ovf1089 = __builtin_mul_overflow(t1086, c1087, &ovr1088);
        __n1082 = ovr1088;
        if (ovf1089) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1090 = __n1082;
      void* r1091 = operator_new(t1090);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1092 = (struct std___Rb_tree_node_int_*)r1091;
      __retval1083 = cast1092;
      struct std___Rb_tree_node_int_* t1093 = __retval1083;
      return t1093;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1094 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1084 + 0);
  unsigned long t1095 = __n1082;
  void* c1096 = ((void*)0);
  struct std___Rb_tree_node_int_* r1097 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1094, t1095, c1096);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1083 = r1097;
  struct std___Rb_tree_node_int_* t1098 = __retval1083;
  return t1098;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1099, unsigned long v1100) {
bb1101:
  struct std__allocator_std___Rb_tree_node_int__* __a1102;
  unsigned long __n1103;
  struct std___Rb_tree_node_int_* __retval1104;
  __a1102 = v1099;
  __n1103 = v1100;
  struct std__allocator_std___Rb_tree_node_int__* t1105 = __a1102;
  unsigned long t1106 = __n1103;
  struct std___Rb_tree_node_int_* r1107 = std__allocator_std___Rb_tree_node_int_____allocate(t1105, t1106);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1104 = r1107;
  struct std___Rb_tree_node_int_* t1108 = __retval1104;
  return t1108;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1109) {
bb1110:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1111;
  struct std___Rb_tree_node_int_* __retval1112;
  this1111 = v1109;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1113 = this1111;
  struct std__allocator_std___Rb_tree_node_int__* r1114 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1113);
  unsigned long c1115 = 1;
  struct std___Rb_tree_node_int_* r1116 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1114, c1115);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1112 = r1116;
  struct std___Rb_tree_node_int_* t1117 = __retval1112;
  return t1117;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1118, int* v1119) {
bb1120:
  int* __location1121;
  int* __args1122;
  int* __retval1123;
  void* __loc1124;
  __location1121 = v1118;
  __args1122 = v1119;
  int* t1125 = __location1121;
  void* cast1126 = (void*)t1125;
  __loc1124 = cast1126;
    void* t1127 = __loc1124;
    int* cast1128 = (int*)t1127;
    int* t1129 = __args1122;
    int t1130 = *t1129;
    *cast1128 = t1130;
    __retval1123 = cast1128;
    int* t1131 = __retval1123;
    return t1131;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1132, int* v1133, int* v1134) {
bb1135:
  struct std__allocator_std___Rb_tree_node_int__* __a1136;
  int* __p1137;
  int* __args1138;
  __a1136 = v1132;
  __p1137 = v1133;
  __args1138 = v1134;
  int* t1139 = __p1137;
  int* t1140 = __args1138;
  int* r1141 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1139, t1140);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1142, struct std___Rb_tree_node_int_* v1143, int* v1144) {
bb1145:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1146;
  struct std___Rb_tree_node_int_* __node1147;
  int* __args1148;
  this1146 = v1142;
  __node1147 = v1143;
  __args1148 = v1144;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1149 = this1146;
      struct std__allocator_std___Rb_tree_node_int__* r1151 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1149);
      struct std___Rb_tree_node_int_* t1152 = __node1147;
      int* r1153 = std___Rb_tree_node_int____M_valptr(t1152);
      if (__cir_exc_active) {
        goto cir_try_dispatch1150;
      }
      int* t1154 = __args1148;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1151, r1153, t1154);
    cir_try_dispatch1150: ;
    if (__cir_exc_active) {
    {
      int ca_tok1155 = 0;
      void* ca_exn1156 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1157 = __node1147;
        struct std___Rb_tree_node_int_* t1158 = __node1147;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1149, t1158);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1159, int* v1160) {
bb1161:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1162;
  int* __args1163;
  struct std___Rb_tree_node_int_* __retval1164;
  struct std___Rb_tree_node_int_* __tmp1165;
  this1162 = v1159;
  __args1163 = v1160;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1166 = this1162;
  struct std___Rb_tree_node_int_* r1167 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1166);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1165 = r1167;
  struct std___Rb_tree_node_int_* t1168 = __tmp1165;
  int* t1169 = __args1163;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1166, t1168, t1169);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1170 = __tmp1165;
  __retval1164 = t1170;
  struct std___Rb_tree_node_int_* t1171 = __retval1164;
  return t1171;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1172, int* v1173) {
bb1174:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1175;
  int* __arg1176;
  struct std___Rb_tree_node_int_* __retval1177;
  this1175 = v1172;
  __arg1176 = v1173;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1178 = this1175;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1179 = t1178->_M_t;
  int* t1180 = __arg1176;
  struct std___Rb_tree_node_int_* r1181 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1179, t1180);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1177 = r1181;
  struct std___Rb_tree_node_int_* t1182 = __retval1177;
  return t1182;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1183, struct std___Rb_tree_node_base* v1184, struct std___Rb_tree_node_base* v1185, struct std___Rb_tree_node_base* v1186) {
bb1187:
  _Bool __insert_left1188;
  struct std___Rb_tree_node_base* __x1189;
  struct std___Rb_tree_node_base* __p1190;
  struct std___Rb_tree_node_base* __header1191;
  __insert_left1188 = v1183;
  __x1189 = v1184;
  __p1190 = v1185;
  __header1191 = v1186;
  _Bool t1192 = __insert_left1188;
  struct std___Rb_tree_node_base* t1193 = __x1189;
  struct std___Rb_tree_node_base* t1194 = __p1190;
  struct std___Rb_tree_node_base* t1195 = __header1191;
  std___Rb_tree_insert_and_rebalance(t1192, t1193, t1194, t1195);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1196, struct std___Rb_tree_node_base* v1197, struct std___Rb_tree_node_base* v1198, int* v1199, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1200) {
bb1201:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1202;
  struct std___Rb_tree_node_base* __x1203;
  struct std___Rb_tree_node_base* __p1204;
  int* __v1205;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1206;
  struct std___Rb_tree_iterator_int_ __retval1207;
  _Bool __insert_left1208;
  struct std___Rb_tree_node_base* __z1209;
  this1202 = v1196;
  __x1203 = v1197;
  __p1204 = v1198;
  __v1205 = v1199;
  __node_gen1206 = v1200;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1210 = this1202;
  struct std___Rb_tree_node_base* t1211 = __x1203;
  _Bool cast1212 = (_Bool)t1211;
  _Bool ternary1213;
  if (cast1212) {
    _Bool c1214 = 1;
    ternary1213 = (_Bool)c1214;
  } else {
    struct std___Rb_tree_node_base* t1215 = __p1204;
    struct std___Rb_tree_node_base* r1216 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1210);
    _Bool c1217 = ((t1215 == r1216)) ? 1 : 0;
    ternary1213 = (_Bool)c1217;
  }
  _Bool ternary1218;
  if (ternary1213) {
    _Bool c1219 = 1;
    ternary1218 = (_Bool)c1219;
  } else {
    struct std___Identity_int_ ref_tmp01220;
    struct std___Rb_tree_key_compare_std__less_int__* base1221 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1210->_M_impl) + 0);
    struct std__less_int_* cast1222 = (struct std__less_int_*)base1221;
    int* t1223 = __v1205;
    int* r1224 = std___Identity_int___operator___int___const(&ref_tmp01220, t1223);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1225 = __p1204;
    int* r1226 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1225);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1227 = std__less_int___operator___int_const___int_const___const(cast1222, r1224, r1226);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1218 = (_Bool)r1227;
  }
  __insert_left1208 = ternary1218;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1228 = __node_gen1206;
  int* t1229 = __v1205;
  struct std___Rb_tree_node_int_* r1230 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1228, t1229);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1231 = (struct std___Rb_tree_node_base*)((char *)r1230 + 0);
  struct std___Rb_tree_node_base* r1232 = std___Rb_tree_node_base___M_base_ptr___const(base1231);
  __z1209 = r1232;
  _Bool t1233 = __insert_left1208;
  struct std___Rb_tree_node_base* t1234 = __z1209;
  struct std___Rb_tree_node_base* t1235 = __p1204;
  struct std___Rb_tree_header* base1236 = (struct std___Rb_tree_header*)((char *)&(t1210->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1233, t1234, t1235, &base1236->_M_header);
  struct std___Rb_tree_header* base1237 = (struct std___Rb_tree_header*)((char *)&(t1210->_M_impl) + 8);
  unsigned long t1238 = base1237->_M_node_count;
  unsigned long u1239 = t1238 + 1;
  base1237->_M_node_count = u1239;
  struct std___Rb_tree_node_base* t1240 = __z1209;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1207, t1240);
  struct std___Rb_tree_iterator_int_ t1241 = __retval1207;
  return t1241;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1242, struct std___Rb_tree_node_base* v1243, int* v1244) {
bb1245:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1246;
  struct std___Rb_tree_node_base* __p1247;
  int* __v1248;
  struct std___Rb_tree_iterator_int_ __retval1249;
  _Bool __insert_left1250;
  struct std___Rb_tree_node_base* __z1251;
  this1246 = v1242;
  __p1247 = v1243;
  __v1248 = v1244;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1252 = this1246;
  struct std___Rb_tree_node_base* t1253 = __p1247;
  struct std___Rb_tree_node_base* r1254 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1252);
  _Bool c1255 = ((t1253 == r1254)) ? 1 : 0;
  _Bool ternary1256;
  if (c1255) {
    _Bool c1257 = 1;
    ternary1256 = (_Bool)c1257;
  } else {
    struct std___Identity_int_ ref_tmp01258;
    struct std___Rb_tree_key_compare_std__less_int__* base1259 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1252->_M_impl) + 0);
    struct std__less_int_* cast1260 = (struct std__less_int_*)base1259;
    struct std___Rb_tree_node_base* t1261 = __p1247;
    int* r1262 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1261);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1263 = __v1248;
    int* r1264 = std___Identity_int___operator___int___const(&ref_tmp01258, t1263);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1265 = std__less_int___operator___int_const___int_const___const(cast1260, r1262, r1264);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u1266 = !r1265;
    ternary1256 = (_Bool)u1266;
  }
  __insert_left1250 = ternary1256;
  int* t1267 = __v1248;
  struct std___Rb_tree_node_int_* r1268 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1252, t1267);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1269 = (struct std___Rb_tree_node_base*)((char *)r1268 + 0);
  struct std___Rb_tree_node_base* r1270 = std___Rb_tree_node_base___M_base_ptr___const(base1269);
  __z1251 = r1270;
  _Bool t1271 = __insert_left1250;
  struct std___Rb_tree_node_base* t1272 = __z1251;
  struct std___Rb_tree_node_base* t1273 = __p1247;
  struct std___Rb_tree_header* base1274 = (struct std___Rb_tree_header*)((char *)&(t1252->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1271, t1272, t1273, &base1274->_M_header);
  struct std___Rb_tree_header* base1275 = (struct std___Rb_tree_header*)((char *)&(t1252->_M_impl) + 8);
  unsigned long t1276 = base1275->_M_node_count;
  unsigned long u1277 = t1276 + 1;
  base1275->_M_node_count = u1277;
  struct std___Rb_tree_node_base* t1278 = __z1251;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1249, t1278);
  struct std___Rb_tree_iterator_int_ t1279 = __retval1249;
  return t1279;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1280, int* v1281) {
bb1282:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1283;
  int* __v1284;
  struct std___Rb_tree_iterator_int_ __retval1285;
  struct std___Rb_tree_node_base* __x1286;
  struct std___Rb_tree_node_base* __y1287;
  this1283 = v1280;
  __v1284 = v1281;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1288 = this1283;
  struct std___Rb_tree_node_base* r1289 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1288);
  __x1286 = r1289;
  struct std___Rb_tree_node_base* r1290 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1288);
  __y1287 = r1290;
    while (1) {
      struct std___Rb_tree_node_base* t1291 = __x1286;
      _Bool cast1292 = (_Bool)t1291;
      if (!cast1292) break;
        struct std___Identity_int_ ref_tmp01293;
        struct std___Rb_tree_node_base** tmp_exprcleanup1294;
        struct std___Rb_tree_node_base* t1295 = __x1286;
        __y1287 = t1295;
        struct std___Rb_tree_key_compare_std__less_int__* base1296 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1288->_M_impl) + 0);
        struct std__less_int_* cast1297 = (struct std__less_int_*)base1296;
        struct std___Rb_tree_node_base* t1298 = __x1286;
        int* r1299 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1298);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1300 = __v1284;
        int* r1301 = std___Identity_int___operator___int___const(&ref_tmp01293, t1300);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1302 = std__less_int___operator___int_const___int_const___const(cast1297, r1299, r1301);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1303 = !r1302;
        struct std___Rb_tree_node_base* ternary1304;
        if (u1303) {
          struct std___Rb_tree_node_base* t1305 = __x1286;
          struct std___Rb_tree_node_base* r1306 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1305);
          ternary1304 = (struct std___Rb_tree_node_base*)r1306;
        } else {
          struct std___Rb_tree_node_base* t1307 = __x1286;
          struct std___Rb_tree_node_base* r1308 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1307);
          ternary1304 = (struct std___Rb_tree_node_base*)r1308;
        }
        __x1286 = ternary1304;
        tmp_exprcleanup1294 = &__x1286;
        struct std___Rb_tree_node_base** t1309 = tmp_exprcleanup1294;
    }
  struct std___Rb_tree_node_base* t1310 = __y1287;
  int* t1311 = __v1284;
  struct std___Rb_tree_iterator_int_ r1312 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1288, t1310, t1311);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1285 = r1312;
  struct std___Rb_tree_iterator_int_ t1313 = __retval1285;
  return t1313;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1314, struct std___Rb_tree_const_iterator_int_ v1315, int* v1316, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1317) {
bb1318:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1319;
  struct std___Rb_tree_const_iterator_int_ __position1320;
  int* __v1321;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1322;
  struct std___Rb_tree_iterator_int_ __retval1323;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1324;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01325;
  struct std___Identity_int_ ref_tmp01326;
  this1319 = v1314;
  __position1320 = v1315;
  __v1321 = v1316;
  __node_gen1322 = v1317;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1327 = this1319;
  agg_tmp01325 = __position1320; // copy
  int* t1328 = __v1321;
  int* r1329 = std___Identity_int___operator___int___const(&ref_tmp01326, t1328);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1330 = agg_tmp01325;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1331 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1327, t1330, r1329);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1324 = r1331;
    struct std___Rb_tree_node_base* t1332 = __res1324.second;
    _Bool cast1333 = (_Bool)t1332;
    if (cast1333) {
      struct std___Rb_tree_node_base* t1334 = __res1324.first;
      struct std___Rb_tree_node_base* t1335 = __res1324.second;
      int* t1336 = __v1321;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1337 = __node_gen1322;
      struct std___Rb_tree_iterator_int_ r1338 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1327, t1334, t1335, t1336, t1337);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1323 = r1338;
      struct std___Rb_tree_iterator_int_ t1339 = __retval1323;
      return t1339;
    }
  int* t1340 = __v1321;
  struct std___Rb_tree_iterator_int_ r1341 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1327, t1340);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1323 = r1341;
  struct std___Rb_tree_iterator_int_ t1342 = __retval1323;
  return t1342;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1343) {
bb1344:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1345;
  struct std___Rb_tree_iterator_int_ __retval1346;
  this1345 = v1343;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1347 = this1345;
  struct std___Rb_tree_node_base* r1348 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1347);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1346, r1348);
  struct std___Rb_tree_iterator_int_ t1349 = __retval1346;
  return t1349;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1350, struct std___Rb_tree_iterator_int_* v1351) {
bb1352:
  struct std___Rb_tree_const_iterator_int_* this1353;
  struct std___Rb_tree_iterator_int_* __it1354;
  this1353 = v1350;
  __it1354 = v1351;
  struct std___Rb_tree_const_iterator_int_* t1355 = this1353;
  struct std___Rb_tree_iterator_int_* t1356 = __it1354;
  struct std___Rb_tree_node_base* t1357 = t1356->_M_node;
  t1355->_M_node = t1357;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1358, int* v1359, int* v1360) {
bb1361:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1362;
  int* __first1363;
  int* __last1364;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1365;
  this1362 = v1358;
  __first1363 = v1359;
  __last1364 = v1360;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1366 = this1362;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1365, t1366);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01367;
    struct std___Rb_tree_iterator_int_ ref_tmp01368;
    struct std___Rb_tree_iterator_int_ agg_tmp11369;
    while (1) {
      int* t1371 = __first1363;
      int* t1372 = __last1364;
      _Bool c1373 = ((t1371 != t1372)) ? 1 : 0;
      if (!c1373) break;
      struct std___Rb_tree_iterator_int_ r1374 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1366);
      ref_tmp01368 = r1374;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01367, &ref_tmp01368);
      int* t1375 = __first1363;
      struct std___Rb_tree_const_iterator_int_ t1376 = agg_tmp01367;
      struct std___Rb_tree_iterator_int_ r1377 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1366, t1376, t1375, &__an1365);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11369 = r1377;
    for_step1370: ;
      int* t1378 = __first1363;
      int c1379 = 1;
      int* ptr1380 = &(t1378)[c1379];
      __first1363 = ptr1380;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1381) {
bb1382:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1383;
  this1383 = v1381;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1384 = this1383;
  struct std__allocator_std___Rb_tree_node_int__* base1385 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1384 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1385);
    struct std___Rb_tree_key_compare_std__less_int__* base1386 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1384 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1386);
    struct std___Rb_tree_header* base1387 = (struct std___Rb_tree_header*)((char *)t1384 + 8);
    std___Rb_tree_header___Rb_tree_header(base1387);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1388) {
bb1389:
  struct std____new_allocator_std___Rb_tree_node_int__* this1390;
  this1390 = v1388;
  struct std____new_allocator_std___Rb_tree_node_int__* t1391 = this1390;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1392) {
bb1393:
  struct std__allocator_std___Rb_tree_node_int__* this1394;
  this1394 = v1392;
  struct std__allocator_std___Rb_tree_node_int__* t1395 = this1394;
  struct std____new_allocator_std___Rb_tree_node_int__* base1396 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1395 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1396);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1397) {
bb1398:
  struct std___Rb_tree_key_compare_std__less_int__* this1399;
  this1399 = v1397;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1400) {
bb1401:
  struct std___Rb_tree_header* this1402;
  this1402 = v1400;
  struct std___Rb_tree_header* t1403 = this1402;
  struct std___Rb_tree_node_base* c1404 = ((void*)0);
  t1403->_M_header._M_parent = c1404;
  t1403->_M_header._M_left = &t1403->_M_header;
  t1403->_M_header._M_right = &t1403->_M_header;
  unsigned long c1405 = 0;
  t1403->_M_node_count = c1405;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1406) {
bb1407:
  struct std___Rb_tree_header* this1408;
  this1408 = v1406;
  struct std___Rb_tree_header* t1409 = this1408;
  unsigned int c1410 = 0;
  t1409->_M_header._M_color = c1410;
  std___Rb_tree_header___M_reset(t1409);
  if (__cir_exc_active) {
    return;
  }
  return;
}

