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
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ current; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {21, 64, 17, 78, 49};
char _str[11] = "*rit != 78";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-rbegin-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__multiset_int__std__less_int___std__allocator_int_____rbegin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* p0, struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
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

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2Ev
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v11) {
bb12:
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this13;
  this13 = v11;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t14 = this13;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base15 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t14 + 0);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&t14->current);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23) {
bb24:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this25;
  struct std___Rb_tree_const_iterator_int_ __retval26;
  this25 = v23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t27 = this25;
  struct std___Rb_tree_node_base* r28 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t27);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval26, r28);
  struct std___Rb_tree_const_iterator_int_ t29 = __retval26;
  return t29;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2ES1_
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v30, struct std___Rb_tree_const_iterator_int_ v31) {
bb32:
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this33;
  struct std___Rb_tree_const_iterator_int_ __x34;
  this33 = v30;
  __x34 = v31;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t35 = this33;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base36 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t35 + 0);
  t35->current = __x34; // copy
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6rbeginEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v37) {
bb38:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this39;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval40;
  struct std___Rb_tree_const_iterator_int_ agg_tmp041;
  this39 = v37;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t42 = this39;
  struct std___Rb_tree_const_iterator_int_ r43 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(t42);
  agg_tmp041 = r43;
  struct std___Rb_tree_const_iterator_int_ t44 = agg_tmp041;
  std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(&__retval40, t44);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t45 = __retval40;
  return t45;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE6rbeginEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__multiset_int__std__less_int___std__allocator_int_____rbegin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v46) {
bb47:
  struct std__multiset_int__std__less_int___std__allocator_int__* this48;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval49;
  this48 = v46;
  struct std__multiset_int__std__less_int___std__allocator_int__* t50 = this48;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r51 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(&t50->_M_t);
  __retval49 = r51;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t52 = __retval49;
  return t52;
}

// function: _ZNSt8iteratorISt26bidirectional_iterator_tagilPKiRS1_EaSERKS4_
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* v53, struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* v54) {
bb55:
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* this56;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* unnamed57;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* __retval58;
  this56 = v53;
  unnamed57 = v54;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* t59 = this56;
  __retval58 = t59;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* t60 = __retval58;
  return t60;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSERKS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v61, struct std___Rb_tree_const_iterator_int_* v62) {
bb63:
  struct std___Rb_tree_const_iterator_int_* this64;
  struct std___Rb_tree_const_iterator_int_* unnamed65;
  struct std___Rb_tree_const_iterator_int_* __retval66;
  this64 = v61;
  unnamed65 = v62;
  struct std___Rb_tree_const_iterator_int_* t67 = this64;
  struct std___Rb_tree_const_iterator_int_* t68 = unnamed65;
  struct std___Rb_tree_node_base* t69 = t68->_M_node;
  t67->_M_node = t69;
  __retval66 = t67;
  struct std___Rb_tree_const_iterator_int_* t70 = __retval66;
  return t70;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEaSERKS2_
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v71, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v72) {
bb73:
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this74;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* unnamed75;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* __retval76;
  this74 = v71;
  unnamed75 = v72;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t77 = this74;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base78 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t77 + 0);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t79 = unnamed75;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base80 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t79 + 0);
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* r81 = std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(base78, base80);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t82 = unnamed75;
  struct std___Rb_tree_const_iterator_int_* r83 = std___Rb_tree_const_iterator_int___operator_(&t77->current, &t82->current);
  __retval76 = t77;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t84 = __retval76;
  return t84;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v85) {
bb86:
  struct std___Rb_tree_const_iterator_int_* this87;
  struct std___Rb_tree_const_iterator_int_* __retval88;
  this87 = v85;
  struct std___Rb_tree_const_iterator_int_* t89 = this87;
  struct std___Rb_tree_node_base* t90 = t89->_M_node;
  struct std___Rb_tree_node_base* r91 = std___Rb_tree_decrement(t90);
  t89->_M_node = r91;
  __retval88 = t89;
  struct std___Rb_tree_const_iterator_int_* t92 = __retval88;
  return t92;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v93) {
bb94:
  struct __gnu_cxx____aligned_membuf_int_* this95;
  void* __retval96;
  this95 = v93;
  struct __gnu_cxx____aligned_membuf_int_* t97 = this95;
  void* cast98 = (void*)&(t97->_M_storage);
  __retval96 = cast98;
  void* t99 = __retval96;
  return t99;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v100) {
bb101:
  struct __gnu_cxx____aligned_membuf_int_* this102;
  int* __retval103;
  this102 = v100;
  struct __gnu_cxx____aligned_membuf_int_* t104 = this102;
  void* r105 = __gnu_cxx____aligned_membuf_int____M_addr___const(t104);
  int* cast106 = (int*)r105;
  __retval103 = cast106;
  int* t107 = __retval103;
  return t107;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v108) {
bb109:
  struct std___Rb_tree_node_int_* this110;
  int* __retval111;
  this110 = v108;
  struct std___Rb_tree_node_int_* t112 = this110;
  int* r113 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t112->_M_storage);
  __retval111 = r113;
  int* t114 = __retval111;
  return t114;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v115) {
bb116:
  struct std___Rb_tree_const_iterator_int_* this117;
  int* __retval118;
  this117 = v115;
  struct std___Rb_tree_const_iterator_int_* t119 = this117;
  struct std___Rb_tree_node_base* t120 = t119->_M_node;
  struct std___Rb_tree_node_int_* derived121 = ((t120) ? (struct std___Rb_tree_node_int_*)((char *)t120 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r122 = std___Rb_tree_node_int____M_valptr___const(derived121);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval118 = r122;
  int* t123 = __retval118;
  return t123;
}

// function: _ZNKSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEdeEv
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v124) {
bb125:
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this126;
  int* __retval127;
  struct std___Rb_tree_const_iterator_int_ __tmp128;
  this126 = v124;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t129 = this126;
  __tmp128 = t129->current; // copy
  struct std___Rb_tree_const_iterator_int_* r130 = std___Rb_tree_const_iterator_int___operator__(&__tmp128);
  int* r131 = std___Rb_tree_const_iterator_int___operator____const(r130);
  __retval127 = r131;
  int* t132 = __retval127;
  return t132;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v133, void* v134) {
bb135:
  struct std__basic_ostream_char__std__char_traits_char__* this136;
  void* __pf137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval138;
  this136 = v133;
  __pf137 = v134;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = this136;
  void* t140 = __pf137;
  struct std__basic_ostream_char__std__char_traits_char__* r141 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t140)(t139);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval138 = r141;
  struct std__basic_ostream_char__std__char_traits_char__* t142 = __retval138;
  return t142;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v143) {
bb144:
  struct std__basic_ostream_char__std__char_traits_char__* __os145;
  struct std__basic_ostream_char__std__char_traits_char__* __retval146;
  __os145 = v143;
  struct std__basic_ostream_char__std__char_traits_char__* t147 = __os145;
  struct std__basic_ostream_char__std__char_traits_char__* r148 = std__ostream__flush(t147);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval146 = r148;
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __retval146;
  return t149;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v150) {
bb151:
  struct std__ctype_char_* __f152;
  struct std__ctype_char_* __retval153;
  __f152 = v150;
    struct std__ctype_char_* t154 = __f152;
    _Bool cast155 = (_Bool)t154;
    _Bool u156 = !cast155;
    if (u156) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t157 = __f152;
  __retval153 = t157;
  struct std__ctype_char_* t158 = __retval153;
  return t158;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v159, char v160) {
bb161:
  struct std__ctype_char_* this162;
  char __c163;
  char __retval164;
  this162 = v159;
  __c163 = v160;
  struct std__ctype_char_* t165 = this162;
    char t166 = t165->_M_widen_ok;
    _Bool cast167 = (_Bool)t166;
    if (cast167) {
      char t168 = __c163;
      unsigned char cast169 = (unsigned char)t168;
      unsigned long cast170 = (unsigned long)cast169;
      char t171 = t165->_M_widen[cast170];
      __retval164 = t171;
      char t172 = __retval164;
      return t172;
    }
  std__ctype_char____M_widen_init___const(t165);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t173 = __c163;
  void** v174 = (void**)t165;
  void* v175 = *((void**)v174);
  char vcall178 = (char)__VERIFIER_virtual_call_char_char(t165, 6, t173);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval164 = vcall178;
  char t179 = __retval164;
  return t179;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v180, char v181) {
bb182:
  struct std__basic_ios_char__std__char_traits_char__* this183;
  char __c184;
  char __retval185;
  this183 = v180;
  __c184 = v181;
  struct std__basic_ios_char__std__char_traits_char__* t186 = this183;
  struct std__ctype_char_* t187 = t186->_M_ctype;
  struct std__ctype_char_* r188 = std__ctype_char__const__std____check_facet_std__ctype_char___(t187);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t189 = __c184;
  char r190 = std__ctype_char___widen_char__const(r188, t189);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval185 = r190;
  char t191 = __retval185;
  return t191;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v192) {
bb193:
  struct std__basic_ostream_char__std__char_traits_char__* __os194;
  struct std__basic_ostream_char__std__char_traits_char__* __retval195;
  __os194 = v192;
  struct std__basic_ostream_char__std__char_traits_char__* t196 = __os194;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __os194;
  void** v198 = (void**)t197;
  void* v199 = *((void**)v198);
  unsigned char* cast200 = (unsigned char*)v199;
  long c201 = -24;
  unsigned char* ptr202 = &(cast200)[c201];
  long* cast203 = (long*)ptr202;
  long t204 = *cast203;
  unsigned char* cast205 = (unsigned char*)t197;
  unsigned char* ptr206 = &(cast205)[t204];
  struct std__basic_ostream_char__std__char_traits_char__* cast207 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr206;
  struct std__basic_ios_char__std__char_traits_char__* cast208 = (struct std__basic_ios_char__std__char_traits_char__*)cast207;
  char c209 = 10;
  char r210 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast208, c209);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r211 = std__ostream__put(t196, r210);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r211);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval195 = r212;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = __retval195;
  return t213;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v214) {
bb215:
  struct std__multiset_int__std__less_int___std__allocator_int__* this216;
  this216 = v214;
  struct std__multiset_int__std__less_int___std__allocator_int__* t217 = this216;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t217->_M_t);
  }
  return;
}

// function: main
int main() {
bb218:
  int __retval219;
  int myints220[5];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset221;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ rit222;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp0223;
  int c224 = 0;
  __retval219 = c224;
  // array copy
  __builtin_memcpy(myints220, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast225 = (int*)&(myints220);
  int* cast226 = (int*)&(myints220);
  int c227 = 5;
  int* ptr228 = &(cast226)[c227];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&myset221, cast225, ptr228);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(&rit222);
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r229 = std__multiset_int__std__less_int___std__allocator_int_____rbegin___const(&myset221);
    ref_tmp0223 = r229;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* r230 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(&rit222, &ref_tmp0223);
    int* r231 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(&rit222);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset221);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t232 = *r231;
    int c233 = 78;
    _Bool c234 = ((t232 != c233)) ? 1 : 0;
    if (c234) {
    } else {
      char* cast235 = (char*)&(_str);
      char* c236 = _str_1;
      unsigned int c237 = 20;
      char* cast238 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast235, c236, c237, cast238);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset221);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c240 = 0;
    __retval219 = c240;
    int t241 = __retval219;
    int ret_val242 = t241;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset221);
    }
    return ret_val242;
  int t243 = __retval219;
  return t243;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v244) {
bb245:
  struct std___Rb_tree_const_iterator_int_* this246;
  this246 = v244;
  struct std___Rb_tree_const_iterator_int_* t247 = this246;
  struct std___Rb_tree_node_base* c248 = ((void*)0);
  t247->_M_node = c248;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v249) {
bb250:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this251;
  this251 = v249;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t252 = this251;
    struct std___Rb_tree_node_int_* r253 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t252);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t252, r253);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t252->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t252->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v254) {
bb255:
  struct std___Rb_tree_node_int_* this256;
  struct std___Rb_tree_node_int_* __retval257;
  this256 = v254;
  struct std___Rb_tree_node_int_* t258 = this256;
  __retval257 = t258;
  struct std___Rb_tree_node_int_* t259 = __retval257;
  return t259;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v260) {
bb261:
  struct std___Rb_tree_node_int_* __x262;
  struct std___Rb_tree_node_int_* __retval263;
  __x262 = v260;
  struct std___Rb_tree_node_int_* t264 = __x262;
  struct std___Rb_tree_node_base* base265 = (struct std___Rb_tree_node_base*)((char *)t264 + 0);
  struct std___Rb_tree_node_base* t266 = base265->_M_right;
  _Bool cast267 = (_Bool)t266;
  struct std___Rb_tree_node_int_* ternary268;
  if (cast267) {
    struct std___Rb_tree_node_int_* t269 = __x262;
    struct std___Rb_tree_node_base* base270 = (struct std___Rb_tree_node_base*)((char *)t269 + 0);
    struct std___Rb_tree_node_base* t271 = base270->_M_right;
    struct std___Rb_tree_node_int_* derived272 = (struct std___Rb_tree_node_int_*)((char *)t271 - 0);
    struct std___Rb_tree_node_int_* r273 = std___Rb_tree_node_int____M_node_ptr(derived272);
    ternary268 = (struct std___Rb_tree_node_int_*)r273;
  } else {
    struct std___Rb_tree_node_int_* c274 = ((void*)0);
    ternary268 = (struct std___Rb_tree_node_int_*)c274;
  }
  __retval263 = ternary268;
  struct std___Rb_tree_node_int_* t275 = __retval263;
  return t275;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v276) {
bb277:
  struct std___Rb_tree_node_int_* __x278;
  struct std___Rb_tree_node_int_* __retval279;
  __x278 = v276;
  struct std___Rb_tree_node_int_* t280 = __x278;
  struct std___Rb_tree_node_base* base281 = (struct std___Rb_tree_node_base*)((char *)t280 + 0);
  struct std___Rb_tree_node_base* t282 = base281->_M_left;
  _Bool cast283 = (_Bool)t282;
  struct std___Rb_tree_node_int_* ternary284;
  if (cast283) {
    struct std___Rb_tree_node_int_* t285 = __x278;
    struct std___Rb_tree_node_base* base286 = (struct std___Rb_tree_node_base*)((char *)t285 + 0);
    struct std___Rb_tree_node_base* t287 = base286->_M_left;
    struct std___Rb_tree_node_int_* derived288 = (struct std___Rb_tree_node_int_*)((char *)t287 - 0);
    struct std___Rb_tree_node_int_* r289 = std___Rb_tree_node_int____M_node_ptr(derived288);
    ternary284 = (struct std___Rb_tree_node_int_*)r289;
  } else {
    struct std___Rb_tree_node_int_* c290 = ((void*)0);
    ternary284 = (struct std___Rb_tree_node_int_*)c290;
  }
  __retval279 = ternary284;
  struct std___Rb_tree_node_int_* t291 = __retval279;
  return t291;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v292) {
bb293:
  int* __location294;
  __location294 = v292;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v295, int* v296) {
bb297:
  struct std__allocator_std___Rb_tree_node_int__* __a298;
  int* __p299;
  __a298 = v295;
  __p299 = v296;
  int* t300 = __p299;
  void_std__destroy_at_int_(t300);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v301) {
bb302:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this303;
  struct std__allocator_std___Rb_tree_node_int__* __retval304;
  this303 = v301;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t305 = this303;
  struct std__allocator_std___Rb_tree_node_int__* base306 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t305->_M_impl) + 0);
  __retval304 = base306;
  struct std__allocator_std___Rb_tree_node_int__* t307 = __retval304;
  return t307;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v308) {
bb309:
  struct __gnu_cxx____aligned_membuf_int_* this310;
  void* __retval311;
  this310 = v308;
  struct __gnu_cxx____aligned_membuf_int_* t312 = this310;
  void* cast313 = (void*)&(t312->_M_storage);
  __retval311 = cast313;
  void* t314 = __retval311;
  return t314;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v315) {
bb316:
  struct __gnu_cxx____aligned_membuf_int_* this317;
  int* __retval318;
  this317 = v315;
  struct __gnu_cxx____aligned_membuf_int_* t319 = this317;
  void* r320 = __gnu_cxx____aligned_membuf_int____M_addr(t319);
  int* cast321 = (int*)r320;
  __retval318 = cast321;
  int* t322 = __retval318;
  return t322;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v323) {
bb324:
  struct std___Rb_tree_node_int_* this325;
  int* __retval326;
  this325 = v323;
  struct std___Rb_tree_node_int_* t327 = this325;
  int* r328 = __gnu_cxx____aligned_membuf_int____M_ptr(&t327->_M_storage);
  __retval326 = r328;
  int* t329 = __retval326;
  return t329;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v330, struct std___Rb_tree_node_int_* v331) {
bb332:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this333;
  struct std___Rb_tree_node_int_* __p334;
  this333 = v330;
  __p334 = v331;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t335 = this333;
  struct std__allocator_std___Rb_tree_node_int__* r336 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t335);
  struct std___Rb_tree_node_int_* t337 = __p334;
  int* r338 = std___Rb_tree_node_int____M_valptr(t337);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r336, r338);
  struct std___Rb_tree_node_int_* t339 = __p334;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb340:
  _Bool __retval341;
    _Bool c342 = 0;
    __retval341 = c342;
    _Bool t343 = __retval341;
    return t343;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v344, struct std___Rb_tree_node_int_* v345, unsigned long v346) {
bb347:
  struct std____new_allocator_std___Rb_tree_node_int__* this348;
  struct std___Rb_tree_node_int_* __p349;
  unsigned long __n350;
  this348 = v344;
  __p349 = v345;
  __n350 = v346;
  struct std____new_allocator_std___Rb_tree_node_int__* t351 = this348;
    unsigned long c352 = 8;
    unsigned long c353 = 16;
    _Bool c354 = ((c352 > c353)) ? 1 : 0;
    if (c354) {
      struct std___Rb_tree_node_int_* t355 = __p349;
      void* cast356 = (void*)t355;
      unsigned long t357 = __n350;
      unsigned long c358 = 40;
      unsigned long b359 = t357 * c358;
      unsigned long c360 = 8;
      operator_delete_3(cast356, b359, c360);
      return;
    }
  struct std___Rb_tree_node_int_* t361 = __p349;
  void* cast362 = (void*)t361;
  unsigned long t363 = __n350;
  unsigned long c364 = 40;
  unsigned long b365 = t363 * c364;
  operator_delete_2(cast362, b365);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v366, struct std___Rb_tree_node_int_* v367, unsigned long v368) {
bb369:
  struct std__allocator_std___Rb_tree_node_int__* this370;
  struct std___Rb_tree_node_int_* __p371;
  unsigned long __n372;
  this370 = v366;
  __p371 = v367;
  __n372 = v368;
  struct std__allocator_std___Rb_tree_node_int__* t373 = this370;
    _Bool r374 = std____is_constant_evaluated();
    if (r374) {
      struct std___Rb_tree_node_int_* t375 = __p371;
      void* cast376 = (void*)t375;
      operator_delete(cast376);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base377 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t373 + 0);
  struct std___Rb_tree_node_int_* t378 = __p371;
  unsigned long t379 = __n372;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base377, t378, t379);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v380, struct std___Rb_tree_node_int_* v381, unsigned long v382) {
bb383:
  struct std__allocator_std___Rb_tree_node_int__* __a384;
  struct std___Rb_tree_node_int_* __p385;
  unsigned long __n386;
  __a384 = v380;
  __p385 = v381;
  __n386 = v382;
  struct std__allocator_std___Rb_tree_node_int__* t387 = __a384;
  struct std___Rb_tree_node_int_* t388 = __p385;
  unsigned long t389 = __n386;
  std__allocator_std___Rb_tree_node_int_____deallocate(t387, t388, t389);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v390, struct std___Rb_tree_node_int_* v391) {
bb392:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this393;
  struct std___Rb_tree_node_int_* __p394;
  this393 = v390;
  __p394 = v391;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t395 = this393;
  struct std__allocator_std___Rb_tree_node_int__* r396 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t395);
  struct std___Rb_tree_node_int_* t397 = __p394;
  unsigned long c398 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r396, t397, c398);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v399, struct std___Rb_tree_node_int_* v400) {
bb401:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this402;
  struct std___Rb_tree_node_int_* __p403;
  this402 = v399;
  __p403 = v400;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t404 = this402;
  struct std___Rb_tree_node_int_* t405 = __p403;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t404, t405);
  struct std___Rb_tree_node_int_* t406 = __p403;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t404, t406);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v407, struct std___Rb_tree_node_int_* v408) {
bb409:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this410;
  struct std___Rb_tree_node_int_* __x411;
  this410 = v407;
  __x411 = v408;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t412 = this410;
    while (1) {
      struct std___Rb_tree_node_int_* t413 = __x411;
      _Bool cast414 = (_Bool)t413;
      if (!cast414) break;
        struct std___Rb_tree_node_int_* __y415;
        struct std___Rb_tree_node_int_* t416 = __x411;
        struct std___Rb_tree_node_int_* r417 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t416);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t412, r417);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t418 = __x411;
        struct std___Rb_tree_node_int_* r419 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t418);
        if (__cir_exc_active) {
          return;
        }
        __y415 = r419;
        struct std___Rb_tree_node_int_* t420 = __x411;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t412, t420);
        struct std___Rb_tree_node_int_* t421 = __y415;
        __x411 = t421;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v422) {
bb423:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this424;
  struct std___Rb_tree_node_int_* __retval425;
  struct std___Rb_tree_node_base* __begin426;
  this424 = v422;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t427 = this424;
  struct std___Rb_tree_header* base428 = (struct std___Rb_tree_header*)((char *)&(t427->_M_impl) + 8);
  struct std___Rb_tree_node_base* t429 = base428->_M_header._M_parent;
  __begin426 = t429;
  struct std___Rb_tree_node_base* t430 = __begin426;
  _Bool cast431 = (_Bool)t430;
  struct std___Rb_tree_node_int_* ternary432;
  if (cast431) {
    struct std___Rb_tree_node_base* t433 = __begin426;
    struct std___Rb_tree_node_int_* derived434 = (struct std___Rb_tree_node_int_*)((char *)t433 - 0);
    struct std___Rb_tree_node_int_* r435 = std___Rb_tree_node_int____M_node_ptr(derived434);
    ternary432 = (struct std___Rb_tree_node_int_*)r435;
  } else {
    struct std___Rb_tree_node_int_* c436 = ((void*)0);
    ternary432 = (struct std___Rb_tree_node_int_*)c436;
  }
  __retval425 = ternary432;
  struct std___Rb_tree_node_int_* t437 = __retval425;
  return t437;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v438) {
bb439:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this440;
  this440 = v438;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t441 = this440;
  {
    struct std__allocator_std___Rb_tree_node_int__* base442 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t441 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base442);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v443) {
bb444:
  struct std__allocator_std___Rb_tree_node_int__* this445;
  this445 = v443;
  struct std__allocator_std___Rb_tree_node_int__* t446 = this445;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v447) {
bb448:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this449;
  this449 = v447;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t450 = this449;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t450->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v451, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v452) {
bb453:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this454;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t455;
  this454 = v451;
  __t455 = v452;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t456 = this454;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t457 = __t455;
  t456->_M_t = t457;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v458) {
bb459:
  struct std___Rb_tree_node_base* this460;
  struct std___Rb_tree_node_base* __retval461;
  this460 = v458;
  struct std___Rb_tree_node_base* t462 = this460;
  __retval461 = t462;
  struct std___Rb_tree_node_base* t463 = __retval461;
  return t463;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v464) {
bb465:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this466;
  struct std___Rb_tree_node_base* __retval467;
  this466 = v464;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t468 = this466;
  struct std___Rb_tree_header* base469 = (struct std___Rb_tree_header*)((char *)&(t468->_M_impl) + 8);
  struct std___Rb_tree_node_base* r470 = std___Rb_tree_node_base___M_base_ptr___const(&base469->_M_header);
  __retval467 = r470;
  struct std___Rb_tree_node_base* t471 = __retval467;
  return t471;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v472) {
bb473:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this474;
  unsigned long __retval475;
  this474 = v472;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t476 = this474;
  struct std___Rb_tree_header* base477 = (struct std___Rb_tree_header*)((char *)&(t476->_M_impl) + 8);
  unsigned long t478 = base477->_M_node_count;
  __retval475 = t478;
  unsigned long t479 = __retval475;
  return t479;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v480, int* v481, int* v482) {
bb483:
  struct std__less_int_* this484;
  int* __x485;
  int* __y486;
  _Bool __retval487;
  this484 = v480;
  __x485 = v481;
  __y486 = v482;
  struct std__less_int_* t488 = this484;
  int* t489 = __x485;
  int t490 = *t489;
  int* t491 = __y486;
  int t492 = *t491;
  _Bool c493 = ((t490 < t492)) ? 1 : 0;
  __retval487 = c493;
  _Bool t494 = __retval487;
  return t494;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v495, int* v496) {
bb497:
  struct std___Identity_int_* this498;
  int* __x499;
  int* __retval500;
  this498 = v495;
  __x499 = v496;
  struct std___Identity_int_* t501 = this498;
  int* t502 = __x499;
  __retval500 = t502;
  int* t503 = __retval500;
  return t503;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v504) {
bb505:
  struct std___Rb_tree_node_int_* __node506;
  int* __retval507;
  struct std___Identity_int_ ref_tmp0508;
  __node506 = v504;
  struct std___Rb_tree_node_int_* t509 = __node506;
  int* r510 = std___Rb_tree_node_int____M_valptr___const(t509);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r511 = std___Identity_int___operator___int_const___const(&ref_tmp0508, r510);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval507 = r511;
  int* t512 = __retval507;
  return t512;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v513) {
bb514:
  struct std___Rb_tree_node_base* __x515;
  int* __retval516;
  __x515 = v513;
  struct std___Rb_tree_node_base* t517 = __x515;
  struct std___Rb_tree_node_int_* derived518 = (struct std___Rb_tree_node_int_*)((char *)t517 - 0);
  int* r519 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived518);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval516 = r519;
  int* t520 = __retval516;
  return t520;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v521) {
bb522:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this523;
  struct std___Rb_tree_node_base** __retval524;
  this523 = v521;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t525 = this523;
  struct std___Rb_tree_header* base526 = (struct std___Rb_tree_header*)((char *)&(t525->_M_impl) + 8);
  __retval524 = &base526->_M_header._M_right;
  struct std___Rb_tree_node_base** t527 = __retval524;
  return t527;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v528, struct std___Rb_tree_node_base** v529, struct std___Rb_tree_node_base** v530) {
bb531:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this532;
  struct std___Rb_tree_node_base** __x533;
  struct std___Rb_tree_node_base** __y534;
  this532 = v528;
  __x533 = v529;
  __y534 = v530;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t535 = this532;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base536 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t535 + 0);
  struct std___Rb_tree_node_base** t537 = __x533;
  struct std___Rb_tree_node_base* t538 = *t537;
  t535->first = t538;
  struct std___Rb_tree_node_base** t539 = __y534;
  struct std___Rb_tree_node_base* t540 = *t539;
  t535->second = t540;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v541) {
bb542:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this543;
  struct std___Rb_tree_node_base* __retval544;
  this543 = v541;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t545 = this543;
  struct std___Rb_tree_header* base546 = (struct std___Rb_tree_header*)((char *)&(t545->_M_impl) + 8);
  struct std___Rb_tree_node_base* t547 = base546->_M_header._M_parent;
  __retval544 = t547;
  struct std___Rb_tree_node_base* t548 = __retval544;
  return t548;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v549) {
bb550:
  struct std___Rb_tree_node_base* __x551;
  struct std___Rb_tree_node_base* __retval552;
  __x551 = v549;
  struct std___Rb_tree_node_base* t553 = __x551;
  struct std___Rb_tree_node_base* t554 = t553->_M_left;
  __retval552 = t554;
  struct std___Rb_tree_node_base* t555 = __retval552;
  return t555;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v556, int* v557) {
bb558:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this559;
  int* __k560;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval561;
  struct std___Rb_tree_node_base* __x562;
  struct std___Rb_tree_node_base* __y563;
  this559 = v556;
  __k560 = v557;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t564 = this559;
  struct std___Rb_tree_node_base* r565 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t564);
  __x562 = r565;
  struct std___Rb_tree_node_base* r566 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t564);
  __y563 = r566;
    while (1) {
      struct std___Rb_tree_node_base* t567 = __x562;
      _Bool cast568 = (_Bool)t567;
      if (!cast568) break;
        struct std___Rb_tree_node_base* t569 = __x562;
        __y563 = t569;
        struct std___Rb_tree_key_compare_std__less_int__* base570 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t564->_M_impl) + 0);
        struct std__less_int_* cast571 = (struct std__less_int_*)base570;
        int* t572 = __k560;
        struct std___Rb_tree_node_base* t573 = __x562;
        int* r574 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t573);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r575 = std__less_int___operator___int_const___int_const___const(cast571, t572, r574);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary576;
        if (r575) {
          struct std___Rb_tree_node_base* t577 = __x562;
          struct std___Rb_tree_node_base* r578 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t577);
          ternary576 = (struct std___Rb_tree_node_base*)r578;
        } else {
          struct std___Rb_tree_node_base* t579 = __x562;
          struct std___Rb_tree_node_base* r580 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t579);
          ternary576 = (struct std___Rb_tree_node_base*)r580;
        }
        __x562 = ternary576;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval561, &__x562, &__y563);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t581 = __retval561;
  return t581;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v582, struct std___Rb_tree_node_base* v583) {
bb584:
  struct std___Rb_tree_iterator_int_* this585;
  struct std___Rb_tree_node_base* __x586;
  this585 = v582;
  __x586 = v583;
  struct std___Rb_tree_iterator_int_* t587 = this585;
  struct std___Rb_tree_node_base* t588 = __x586;
  t587->_M_node = t588;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v589) {
bb590:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this591;
  struct std___Rb_tree_node_base** __retval592;
  this591 = v589;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t593 = this591;
  struct std___Rb_tree_header* base594 = (struct std___Rb_tree_header*)((char *)&(t593->_M_impl) + 8);
  __retval592 = &base594->_M_header._M_left;
  struct std___Rb_tree_node_base** t595 = __retval592;
  return t595;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v596, struct std___Rb_tree_node_base** v597, struct std___Rb_tree_node_base** v598) {
bb599:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this600;
  struct std___Rb_tree_node_base** __x601;
  struct std___Rb_tree_node_base** __y602;
  this600 = v596;
  __x601 = v597;
  __y602 = v598;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t603 = this600;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base604 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t603 + 0);
  struct std___Rb_tree_node_base** t605 = __x601;
  struct std___Rb_tree_node_base* t606 = *t605;
  t603->first = t606;
  struct std___Rb_tree_node_base** t607 = __y602;
  struct std___Rb_tree_node_base* t608 = *t607;
  t603->second = t608;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v609) {
bb610:
  struct std___Rb_tree_iterator_int_* this611;
  struct std___Rb_tree_iterator_int_* __retval612;
  this611 = v609;
  struct std___Rb_tree_iterator_int_* t613 = this611;
  struct std___Rb_tree_node_base* t614 = t613->_M_node;
  struct std___Rb_tree_node_base* r615 = std___Rb_tree_decrement(t614);
  t613->_M_node = r615;
  __retval612 = t613;
  struct std___Rb_tree_iterator_int_* t616 = __retval612;
  return t616;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v617) {
bb618:
  struct std___Rb_tree_node_base* __x619;
  struct std___Rb_tree_node_base* __retval620;
  __x619 = v617;
  struct std___Rb_tree_node_base* t621 = __x619;
  struct std___Rb_tree_node_base* t622 = t621->_M_right;
  __retval620 = t622;
  struct std___Rb_tree_node_base* t623 = __retval620;
  return t623;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v624) {
bb625:
  struct std___Rb_tree_iterator_int_* this626;
  struct std___Rb_tree_iterator_int_* __retval627;
  this626 = v624;
  struct std___Rb_tree_iterator_int_* t628 = this626;
  struct std___Rb_tree_node_base* t629 = t628->_M_node;
  struct std___Rb_tree_node_base* r630 = std___Rb_tree_increment(t629);
  t628->_M_node = r630;
  __retval627 = t628;
  struct std___Rb_tree_iterator_int_* t631 = __retval627;
  return t631;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v632, struct std___Rb_tree_node_base** v633, struct std___Rb_tree_node_base** v634) {
bb635:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this636;
  struct std___Rb_tree_node_base** __x637;
  struct std___Rb_tree_node_base** __y638;
  this636 = v632;
  __x637 = v633;
  __y638 = v634;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t639 = this636;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base640 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t639 + 0);
  struct std___Rb_tree_node_base** t641 = __x637;
  struct std___Rb_tree_node_base* t642 = *t641;
  t639->first = t642;
  struct std___Rb_tree_node_base** t643 = __y638;
  struct std___Rb_tree_node_base* t644 = *t643;
  t639->second = t644;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v645, struct std___Rb_tree_const_iterator_int_ v646, int* v647) {
bb648:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this649;
  struct std___Rb_tree_const_iterator_int_ __position650;
  int* __k651;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval652;
  this649 = v645;
  __position650 = v646;
  __k651 = v647;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t653 = this649;
    struct std___Rb_tree_node_base* t654 = __position650._M_node;
    struct std___Rb_tree_node_base* r655 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t653);
    _Bool c656 = ((t654 == r655)) ? 1 : 0;
    if (c656) {
        unsigned long r657 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t653);
        unsigned long c658 = 0;
        _Bool c659 = ((r657 > c658)) ? 1 : 0;
        _Bool ternary660;
        if (c659) {
          struct std___Rb_tree_key_compare_std__less_int__* base661 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t653->_M_impl) + 0);
          struct std__less_int_* cast662 = (struct std__less_int_*)base661;
          int* t663 = __k651;
          struct std___Rb_tree_node_base** r664 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t653);
          struct std___Rb_tree_node_base* t665 = *r664;
          int* r666 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t665);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r667 = std__less_int___operator___int_const___int_const___const(cast662, t663, r666);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u668 = !r667;
          ternary660 = (_Bool)u668;
        } else {
          _Bool c669 = 0;
          ternary660 = (_Bool)c669;
        }
        if (ternary660) {
          struct std___Rb_tree_node_base* ref_tmp0670;
          struct std___Rb_tree_node_base* c671 = ((void*)0);
          ref_tmp0670 = c671;
          struct std___Rb_tree_node_base** r672 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t653);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, &ref_tmp0670, r672);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t673 = __retval652;
          return t673;
        } else {
          int* t674 = __k651;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r675 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t653, t674);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval652 = r675;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t676 = __retval652;
          return t676;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base677 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t653->_M_impl) + 0);
        struct std__less_int_* cast678 = (struct std__less_int_*)base677;
        struct std___Rb_tree_node_base* t679 = __position650._M_node;
        int* r680 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t679);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t681 = __k651;
        _Bool r682 = std__less_int___operator___int_const___int_const___const(cast678, r680, t681);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u683 = !r682;
        if (u683) {
          struct std___Rb_tree_iterator_int_ __before684;
          struct std___Rb_tree_node_base* t685 = __position650._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before684, t685);
            struct std___Rb_tree_node_base* t686 = __position650._M_node;
            struct std___Rb_tree_node_base** r687 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t653);
            struct std___Rb_tree_node_base* t688 = *r687;
            _Bool c689 = ((t686 == t688)) ? 1 : 0;
            if (c689) {
              struct std___Rb_tree_node_base** r690 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t653);
              struct std___Rb_tree_node_base** r691 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t653);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, r690, r691);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t692 = __retval652;
              return t692;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base693 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t653->_M_impl) + 0);
                struct std__less_int_* cast694 = (struct std__less_int_*)base693;
                int* t695 = __k651;
                struct std___Rb_tree_iterator_int_* r696 = std___Rb_tree_iterator_int___operator__(&__before684);
                struct std___Rb_tree_node_base* t697 = r696->_M_node;
                int* r698 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t697);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r699 = std__less_int___operator___int_const___int_const___const(cast694, t695, r698);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u700 = !r699;
                if (u700) {
                    struct std___Rb_tree_node_base* t701 = __before684._M_node;
                    struct std___Rb_tree_node_base* r702 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t701);
                    _Bool cast703 = (_Bool)r702;
                    _Bool u704 = !cast703;
                    if (u704) {
                      struct std___Rb_tree_node_base* ref_tmp1705;
                      struct std___Rb_tree_node_base* c706 = ((void*)0);
                      ref_tmp1705 = c706;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, &ref_tmp1705, &__before684._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t707 = __retval652;
                      return t707;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, &__position650._M_node, &__position650._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t708 = __retval652;
                      return t708;
                    }
                } else {
                  int* t709 = __k651;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r710 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t653, t709);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval652 = r710;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t711 = __retval652;
                  return t711;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after712;
          struct std___Rb_tree_node_base* t713 = __position650._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after712, t713);
            struct std___Rb_tree_node_base* t714 = __position650._M_node;
            struct std___Rb_tree_node_base** r715 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t653);
            struct std___Rb_tree_node_base* t716 = *r715;
            _Bool c717 = ((t714 == t716)) ? 1 : 0;
            if (c717) {
              struct std___Rb_tree_node_base* ref_tmp2718;
              struct std___Rb_tree_node_base* c719 = ((void*)0);
              ref_tmp2718 = c719;
              struct std___Rb_tree_node_base** r720 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t653);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, &ref_tmp2718, r720);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t721 = __retval652;
              return t721;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base722 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t653->_M_impl) + 0);
                struct std__less_int_* cast723 = (struct std__less_int_*)base722;
                struct std___Rb_tree_iterator_int_* r724 = std___Rb_tree_iterator_int___operator___2(&__after712);
                struct std___Rb_tree_node_base* t725 = r724->_M_node;
                int* r726 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t725);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t727 = __k651;
                _Bool r728 = std__less_int___operator___int_const___int_const___const(cast723, r726, t727);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u729 = !r728;
                if (u729) {
                    struct std___Rb_tree_node_base* t730 = __position650._M_node;
                    struct std___Rb_tree_node_base* r731 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t730);
                    _Bool cast732 = (_Bool)r731;
                    _Bool u733 = !cast732;
                    if (u733) {
                      struct std___Rb_tree_node_base* ref_tmp3734;
                      struct std___Rb_tree_node_base* c735 = ((void*)0);
                      ref_tmp3734 = c735;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, &ref_tmp3734, &__position650._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t736 = __retval652;
                      return t736;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval652, &__after712._M_node, &__after712._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t737 = __retval652;
                      return t737;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp4738;
                  struct std___Rb_tree_node_base* ref_tmp5739;
                  struct std___Rb_tree_node_base* c740 = ((void*)0);
                  ref_tmp4738 = c740;
                  struct std___Rb_tree_node_base* c741 = ((void*)0);
                  ref_tmp5739 = c741;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval652, &ref_tmp4738, &ref_tmp5739);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t742 = __retval652;
                  return t742;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v743, int* v744) {
bb745:
  struct std___Identity_int_* this746;
  int* __x747;
  int* __retval748;
  this746 = v743;
  __x747 = v744;
  struct std___Identity_int_* t749 = this746;
  int* t750 = __x747;
  __retval748 = t750;
  int* t751 = __retval748;
  return t751;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v752) {
bb753:
  struct std____new_allocator_std___Rb_tree_node_int__* this754;
  unsigned long __retval755;
  this754 = v752;
  struct std____new_allocator_std___Rb_tree_node_int__* t756 = this754;
  unsigned long c757 = 9223372036854775807;
  unsigned long c758 = 40;
  unsigned long b759 = c757 / c758;
  __retval755 = b759;
  unsigned long t760 = __retval755;
  return t760;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v761, unsigned long v762, void* v763) {
bb764:
  struct std____new_allocator_std___Rb_tree_node_int__* this765;
  unsigned long __n766;
  void* unnamed767;
  struct std___Rb_tree_node_int_* __retval768;
  this765 = v761;
  __n766 = v762;
  unnamed767 = v763;
  struct std____new_allocator_std___Rb_tree_node_int__* t769 = this765;
    unsigned long t770 = __n766;
    unsigned long r771 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t769);
    _Bool c772 = ((t770 > r771)) ? 1 : 0;
    if (c772) {
        unsigned long t773 = __n766;
        unsigned long c774 = -1;
        unsigned long c775 = 40;
        unsigned long b776 = c774 / c775;
        _Bool c777 = ((t773 > b776)) ? 1 : 0;
        if (c777) {
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
    unsigned long c778 = 8;
    unsigned long c779 = 16;
    _Bool c780 = ((c778 > c779)) ? 1 : 0;
    if (c780) {
      unsigned long __al781;
      unsigned long c782 = 8;
      __al781 = c782;
      unsigned long t783 = __n766;
      unsigned long c784 = 40;
      unsigned long b785 = t783 * c784;
      unsigned long t786 = __al781;
      void* r787 = operator_new_2(b785, t786);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast788 = (struct std___Rb_tree_node_int_*)r787;
      __retval768 = cast788;
      struct std___Rb_tree_node_int_* t789 = __retval768;
      return t789;
    }
  unsigned long t790 = __n766;
  unsigned long c791 = 40;
  unsigned long b792 = t790 * c791;
  void* r793 = operator_new(b792);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast794 = (struct std___Rb_tree_node_int_*)r793;
  __retval768 = cast794;
  struct std___Rb_tree_node_int_* t795 = __retval768;
  return t795;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v796, unsigned long v797) {
bb798:
  struct std__allocator_std___Rb_tree_node_int__* this799;
  unsigned long __n800;
  struct std___Rb_tree_node_int_* __retval801;
  this799 = v796;
  __n800 = v797;
  struct std__allocator_std___Rb_tree_node_int__* t802 = this799;
    _Bool r803 = std____is_constant_evaluated();
    if (r803) {
        unsigned long t804 = __n800;
        unsigned long c805 = 40;
        unsigned long ovr806;
        _Bool ovf807 = __builtin_mul_overflow(t804, c805, &ovr806);
        __n800 = ovr806;
        if (ovf807) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t808 = __n800;
      void* r809 = operator_new(t808);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast810 = (struct std___Rb_tree_node_int_*)r809;
      __retval801 = cast810;
      struct std___Rb_tree_node_int_* t811 = __retval801;
      return t811;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base812 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t802 + 0);
  unsigned long t813 = __n800;
  void* c814 = ((void*)0);
  struct std___Rb_tree_node_int_* r815 = std____new_allocator_std___Rb_tree_node_int_____allocate(base812, t813, c814);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval801 = r815;
  struct std___Rb_tree_node_int_* t816 = __retval801;
  return t816;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v817, unsigned long v818) {
bb819:
  struct std__allocator_std___Rb_tree_node_int__* __a820;
  unsigned long __n821;
  struct std___Rb_tree_node_int_* __retval822;
  __a820 = v817;
  __n821 = v818;
  struct std__allocator_std___Rb_tree_node_int__* t823 = __a820;
  unsigned long t824 = __n821;
  struct std___Rb_tree_node_int_* r825 = std__allocator_std___Rb_tree_node_int_____allocate(t823, t824);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval822 = r825;
  struct std___Rb_tree_node_int_* t826 = __retval822;
  return t826;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v827) {
bb828:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this829;
  struct std___Rb_tree_node_int_* __retval830;
  this829 = v827;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t831 = this829;
  struct std__allocator_std___Rb_tree_node_int__* r832 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t831);
  unsigned long c833 = 1;
  struct std___Rb_tree_node_int_* r834 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r832, c833);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval830 = r834;
  struct std___Rb_tree_node_int_* t835 = __retval830;
  return t835;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v836, int* v837) {
bb838:
  int* __location839;
  int* __args840;
  int* __retval841;
  void* __loc842;
  __location839 = v836;
  __args840 = v837;
  int* t843 = __location839;
  void* cast844 = (void*)t843;
  __loc842 = cast844;
    void* t845 = __loc842;
    int* cast846 = (int*)t845;
    int* t847 = __args840;
    int t848 = *t847;
    *cast846 = t848;
    __retval841 = cast846;
    int* t849 = __retval841;
    return t849;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v850, int* v851, int* v852) {
bb853:
  struct std__allocator_std___Rb_tree_node_int__* __a854;
  int* __p855;
  int* __args856;
  __a854 = v850;
  __p855 = v851;
  __args856 = v852;
  int* t857 = __p855;
  int* t858 = __args856;
  int* r859 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t857, t858);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v860, struct std___Rb_tree_node_int_* v861, int* v862) {
bb863:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this864;
  struct std___Rb_tree_node_int_* __node865;
  int* __args866;
  this864 = v860;
  __node865 = v861;
  __args866 = v862;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t867 = this864;
      struct std__allocator_std___Rb_tree_node_int__* r869 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t867);
      struct std___Rb_tree_node_int_* t870 = __node865;
      int* r871 = std___Rb_tree_node_int____M_valptr(t870);
      if (__cir_exc_active) {
        goto cir_try_dispatch868;
      }
      int* t872 = __args866;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r869, r871, t872);
    cir_try_dispatch868: ;
    if (__cir_exc_active) {
    {
      int ca_tok873 = 0;
      void* ca_exn874 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t875 = __node865;
        struct std___Rb_tree_node_int_* t876 = __node865;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t867, t876);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v877, int* v878) {
bb879:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this880;
  int* __args881;
  struct std___Rb_tree_node_int_* __retval882;
  struct std___Rb_tree_node_int_* __tmp883;
  this880 = v877;
  __args881 = v878;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t884 = this880;
  struct std___Rb_tree_node_int_* r885 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t884);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp883 = r885;
  struct std___Rb_tree_node_int_* t886 = __tmp883;
  int* t887 = __args881;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t884, t886, t887);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t888 = __tmp883;
  __retval882 = t888;
  struct std___Rb_tree_node_int_* t889 = __retval882;
  return t889;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v890, int* v891) {
bb892:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this893;
  int* __arg894;
  struct std___Rb_tree_node_int_* __retval895;
  this893 = v890;
  __arg894 = v891;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t896 = this893;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t897 = t896->_M_t;
  int* t898 = __arg894;
  struct std___Rb_tree_node_int_* r899 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t897, t898);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval895 = r899;
  struct std___Rb_tree_node_int_* t900 = __retval895;
  return t900;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v901, struct std___Rb_tree_node_base* v902, struct std___Rb_tree_node_base* v903, struct std___Rb_tree_node_base* v904) {
bb905:
  _Bool __insert_left906;
  struct std___Rb_tree_node_base* __x907;
  struct std___Rb_tree_node_base* __p908;
  struct std___Rb_tree_node_base* __header909;
  __insert_left906 = v901;
  __x907 = v902;
  __p908 = v903;
  __header909 = v904;
  _Bool t910 = __insert_left906;
  struct std___Rb_tree_node_base* t911 = __x907;
  struct std___Rb_tree_node_base* t912 = __p908;
  struct std___Rb_tree_node_base* t913 = __header909;
  std___Rb_tree_insert_and_rebalance(t910, t911, t912, t913);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v914, struct std___Rb_tree_node_base* v915, struct std___Rb_tree_node_base* v916, int* v917, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v918) {
bb919:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this920;
  struct std___Rb_tree_node_base* __x921;
  struct std___Rb_tree_node_base* __p922;
  int* __v923;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen924;
  struct std___Rb_tree_iterator_int_ __retval925;
  _Bool __insert_left926;
  struct std___Rb_tree_node_base* __z927;
  this920 = v914;
  __x921 = v915;
  __p922 = v916;
  __v923 = v917;
  __node_gen924 = v918;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t928 = this920;
  struct std___Rb_tree_node_base* t929 = __x921;
  _Bool cast930 = (_Bool)t929;
  _Bool ternary931;
  if (cast930) {
    _Bool c932 = 1;
    ternary931 = (_Bool)c932;
  } else {
    struct std___Rb_tree_node_base* t933 = __p922;
    struct std___Rb_tree_node_base* r934 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t928);
    _Bool c935 = ((t933 == r934)) ? 1 : 0;
    ternary931 = (_Bool)c935;
  }
  _Bool ternary936;
  if (ternary931) {
    _Bool c937 = 1;
    ternary936 = (_Bool)c937;
  } else {
    struct std___Identity_int_ ref_tmp0938;
    struct std___Rb_tree_key_compare_std__less_int__* base939 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t928->_M_impl) + 0);
    struct std__less_int_* cast940 = (struct std__less_int_*)base939;
    int* t941 = __v923;
    int* r942 = std___Identity_int___operator___int___const(&ref_tmp0938, t941);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t943 = __p922;
    int* r944 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t943);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r945 = std__less_int___operator___int_const___int_const___const(cast940, r942, r944);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary936 = (_Bool)r945;
  }
  __insert_left926 = ternary936;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t946 = __node_gen924;
  int* t947 = __v923;
  struct std___Rb_tree_node_int_* r948 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t946, t947);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base949 = (struct std___Rb_tree_node_base*)((char *)r948 + 0);
  struct std___Rb_tree_node_base* r950 = std___Rb_tree_node_base___M_base_ptr___const(base949);
  __z927 = r950;
  _Bool t951 = __insert_left926;
  struct std___Rb_tree_node_base* t952 = __z927;
  struct std___Rb_tree_node_base* t953 = __p922;
  struct std___Rb_tree_header* base954 = (struct std___Rb_tree_header*)((char *)&(t928->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t951, t952, t953, &base954->_M_header);
  struct std___Rb_tree_header* base955 = (struct std___Rb_tree_header*)((char *)&(t928->_M_impl) + 8);
  unsigned long t956 = base955->_M_node_count;
  unsigned long u957 = t956 + 1;
  base955->_M_node_count = u957;
  struct std___Rb_tree_node_base* t958 = __z927;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval925, t958);
  struct std___Rb_tree_iterator_int_ t959 = __retval925;
  return t959;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v960, struct std___Rb_tree_node_base* v961, int* v962) {
bb963:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this964;
  struct std___Rb_tree_node_base* __p965;
  int* __v966;
  struct std___Rb_tree_iterator_int_ __retval967;
  _Bool __insert_left968;
  struct std___Rb_tree_node_base* __z969;
  this964 = v960;
  __p965 = v961;
  __v966 = v962;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t970 = this964;
  struct std___Rb_tree_node_base* t971 = __p965;
  struct std___Rb_tree_node_base* r972 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t970);
  _Bool c973 = ((t971 == r972)) ? 1 : 0;
  _Bool ternary974;
  if (c973) {
    _Bool c975 = 1;
    ternary974 = (_Bool)c975;
  } else {
    struct std___Identity_int_ ref_tmp0976;
    struct std___Rb_tree_key_compare_std__less_int__* base977 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t970->_M_impl) + 0);
    struct std__less_int_* cast978 = (struct std__less_int_*)base977;
    struct std___Rb_tree_node_base* t979 = __p965;
    int* r980 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t979);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t981 = __v966;
    int* r982 = std___Identity_int___operator___int___const(&ref_tmp0976, t981);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r983 = std__less_int___operator___int_const___int_const___const(cast978, r980, r982);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u984 = !r983;
    ternary974 = (_Bool)u984;
  }
  __insert_left968 = ternary974;
  int* t985 = __v966;
  struct std___Rb_tree_node_int_* r986 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t970, t985);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base987 = (struct std___Rb_tree_node_base*)((char *)r986 + 0);
  struct std___Rb_tree_node_base* r988 = std___Rb_tree_node_base___M_base_ptr___const(base987);
  __z969 = r988;
  _Bool t989 = __insert_left968;
  struct std___Rb_tree_node_base* t990 = __z969;
  struct std___Rb_tree_node_base* t991 = __p965;
  struct std___Rb_tree_header* base992 = (struct std___Rb_tree_header*)((char *)&(t970->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t989, t990, t991, &base992->_M_header);
  struct std___Rb_tree_header* base993 = (struct std___Rb_tree_header*)((char *)&(t970->_M_impl) + 8);
  unsigned long t994 = base993->_M_node_count;
  unsigned long u995 = t994 + 1;
  base993->_M_node_count = u995;
  struct std___Rb_tree_node_base* t996 = __z969;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval967, t996);
  struct std___Rb_tree_iterator_int_ t997 = __retval967;
  return t997;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v998, int* v999) {
bb1000:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1001;
  int* __v1002;
  struct std___Rb_tree_iterator_int_ __retval1003;
  struct std___Rb_tree_node_base* __x1004;
  struct std___Rb_tree_node_base* __y1005;
  this1001 = v998;
  __v1002 = v999;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1006 = this1001;
  struct std___Rb_tree_node_base* r1007 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1006);
  __x1004 = r1007;
  struct std___Rb_tree_node_base* r1008 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1006);
  __y1005 = r1008;
    while (1) {
      struct std___Rb_tree_node_base* t1009 = __x1004;
      _Bool cast1010 = (_Bool)t1009;
      if (!cast1010) break;
        struct std___Identity_int_ ref_tmp01011;
        struct std___Rb_tree_node_base** tmp_exprcleanup1012;
        struct std___Rb_tree_node_base* t1013 = __x1004;
        __y1005 = t1013;
        struct std___Rb_tree_key_compare_std__less_int__* base1014 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1006->_M_impl) + 0);
        struct std__less_int_* cast1015 = (struct std__less_int_*)base1014;
        struct std___Rb_tree_node_base* t1016 = __x1004;
        int* r1017 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1016);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1018 = __v1002;
        int* r1019 = std___Identity_int___operator___int___const(&ref_tmp01011, t1018);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1020 = std__less_int___operator___int_const___int_const___const(cast1015, r1017, r1019);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1021 = !r1020;
        struct std___Rb_tree_node_base* ternary1022;
        if (u1021) {
          struct std___Rb_tree_node_base* t1023 = __x1004;
          struct std___Rb_tree_node_base* r1024 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1023);
          ternary1022 = (struct std___Rb_tree_node_base*)r1024;
        } else {
          struct std___Rb_tree_node_base* t1025 = __x1004;
          struct std___Rb_tree_node_base* r1026 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1025);
          ternary1022 = (struct std___Rb_tree_node_base*)r1026;
        }
        __x1004 = ternary1022;
        tmp_exprcleanup1012 = &__x1004;
        struct std___Rb_tree_node_base** t1027 = tmp_exprcleanup1012;
    }
  struct std___Rb_tree_node_base* t1028 = __y1005;
  int* t1029 = __v1002;
  struct std___Rb_tree_iterator_int_ r1030 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1006, t1028, t1029);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1003 = r1030;
  struct std___Rb_tree_iterator_int_ t1031 = __retval1003;
  return t1031;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1032, struct std___Rb_tree_const_iterator_int_ v1033, int* v1034, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1035) {
bb1036:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1037;
  struct std___Rb_tree_const_iterator_int_ __position1038;
  int* __v1039;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1040;
  struct std___Rb_tree_iterator_int_ __retval1041;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1042;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01043;
  struct std___Identity_int_ ref_tmp01044;
  this1037 = v1032;
  __position1038 = v1033;
  __v1039 = v1034;
  __node_gen1040 = v1035;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1045 = this1037;
  agg_tmp01043 = __position1038; // copy
  int* t1046 = __v1039;
  int* r1047 = std___Identity_int___operator___int___const(&ref_tmp01044, t1046);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1048 = agg_tmp01043;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1049 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1045, t1048, r1047);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1042 = r1049;
    struct std___Rb_tree_node_base* t1050 = __res1042.second;
    _Bool cast1051 = (_Bool)t1050;
    if (cast1051) {
      struct std___Rb_tree_node_base* t1052 = __res1042.first;
      struct std___Rb_tree_node_base* t1053 = __res1042.second;
      int* t1054 = __v1039;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1055 = __node_gen1040;
      struct std___Rb_tree_iterator_int_ r1056 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1045, t1052, t1053, t1054, t1055);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1041 = r1056;
      struct std___Rb_tree_iterator_int_ t1057 = __retval1041;
      return t1057;
    }
  int* t1058 = __v1039;
  struct std___Rb_tree_iterator_int_ r1059 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1045, t1058);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1041 = r1059;
  struct std___Rb_tree_iterator_int_ t1060 = __retval1041;
  return t1060;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1061) {
bb1062:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1063;
  struct std___Rb_tree_iterator_int_ __retval1064;
  this1063 = v1061;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1065 = this1063;
  struct std___Rb_tree_node_base* r1066 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1065);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1064, r1066);
  struct std___Rb_tree_iterator_int_ t1067 = __retval1064;
  return t1067;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1068, struct std___Rb_tree_iterator_int_* v1069) {
bb1070:
  struct std___Rb_tree_const_iterator_int_* this1071;
  struct std___Rb_tree_iterator_int_* __it1072;
  this1071 = v1068;
  __it1072 = v1069;
  struct std___Rb_tree_const_iterator_int_* t1073 = this1071;
  struct std___Rb_tree_iterator_int_* t1074 = __it1072;
  struct std___Rb_tree_node_base* t1075 = t1074->_M_node;
  t1073->_M_node = t1075;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1076, int* v1077, int* v1078) {
bb1079:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1080;
  int* __first1081;
  int* __last1082;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1083;
  this1080 = v1076;
  __first1081 = v1077;
  __last1082 = v1078;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1084 = this1080;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1083, t1084);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01085;
    struct std___Rb_tree_iterator_int_ ref_tmp01086;
    struct std___Rb_tree_iterator_int_ agg_tmp11087;
    while (1) {
      int* t1089 = __first1081;
      int* t1090 = __last1082;
      _Bool c1091 = ((t1089 != t1090)) ? 1 : 0;
      if (!c1091) break;
      struct std___Rb_tree_iterator_int_ r1092 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1084);
      ref_tmp01086 = r1092;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01085, &ref_tmp01086);
      int* t1093 = __first1081;
      struct std___Rb_tree_const_iterator_int_ t1094 = agg_tmp01085;
      struct std___Rb_tree_iterator_int_ r1095 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1084, t1094, t1093, &__an1083);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11087 = r1095;
    for_step1088: ;
      int* t1096 = __first1081;
      int c1097 = 1;
      int* ptr1098 = &(t1096)[c1097];
      __first1081 = ptr1098;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1099) {
bb1100:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1101;
  this1101 = v1099;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1102 = this1101;
  struct std__allocator_std___Rb_tree_node_int__* base1103 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1102 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1103);
    struct std___Rb_tree_key_compare_std__less_int__* base1104 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1102 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1104);
    struct std___Rb_tree_header* base1105 = (struct std___Rb_tree_header*)((char *)t1102 + 8);
    std___Rb_tree_header___Rb_tree_header(base1105);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1106) {
bb1107:
  struct std____new_allocator_std___Rb_tree_node_int__* this1108;
  this1108 = v1106;
  struct std____new_allocator_std___Rb_tree_node_int__* t1109 = this1108;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1110) {
bb1111:
  struct std__allocator_std___Rb_tree_node_int__* this1112;
  this1112 = v1110;
  struct std__allocator_std___Rb_tree_node_int__* t1113 = this1112;
  struct std____new_allocator_std___Rb_tree_node_int__* base1114 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1113 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1114);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1115) {
bb1116:
  struct std___Rb_tree_key_compare_std__less_int__* this1117;
  this1117 = v1115;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1118) {
bb1119:
  struct std___Rb_tree_header* this1120;
  this1120 = v1118;
  struct std___Rb_tree_header* t1121 = this1120;
  struct std___Rb_tree_node_base* c1122 = ((void*)0);
  t1121->_M_header._M_parent = c1122;
  t1121->_M_header._M_left = &t1121->_M_header;
  t1121->_M_header._M_right = &t1121->_M_header;
  unsigned long c1123 = 0;
  t1121->_M_node_count = c1123;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1124) {
bb1125:
  struct std___Rb_tree_header* this1126;
  this1126 = v1124;
  struct std___Rb_tree_header* t1127 = this1126;
  unsigned int c1128 = 0;
  t1127->_M_header._M_color = c1128;
  std___Rb_tree_header___M_reset(t1127);
  if (__cir_exc_active) {
    return;
  }
  return;
}

