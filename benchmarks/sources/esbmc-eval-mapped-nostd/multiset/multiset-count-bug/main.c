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
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[4] = {3, 6, 9, 12};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "myset.count(3) == 1";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-count-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "myset.count(6) == 1";
char _str_3[20] = "myset.count(9) != 1";
char _str_4[21] = "myset.count(12) == 1";
char _str_5[20] = "myset.count(3) != 1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[26] = " is an element of myset.\n";
char _str_7[30] = " is not an element of myset.\n";
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0, struct std___Rb_tree_const_iterator_int_* p1, struct std___Rb_tree_const_iterator_int_* p2);
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range_int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
long std__iterator_traits_std___Rb_tree_const_iterator_int_____difference_type_std____distance_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_const_iterator_int_ p0, struct std___Rb_tree_const_iterator_int_ p1, struct std__input_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___Rb_tree_const_iterator_int_____iterator_category_std____iterator_category_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_const_iterator_int_* p0);
long std__iterator_traits_std___Rb_tree_const_iterator_int_____difference_type_std__distance_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_const_iterator_int_ p0, struct std___Rb_tree_const_iterator_int_ p1);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____count_int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v11, struct std___Rb_tree_node_base* v12, struct std___Rb_tree_node_base* v13, int* v14) {
bb15:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this16;
  struct std___Rb_tree_node_base* __x17;
  struct std___Rb_tree_node_base* __y18;
  int* __k19;
  struct std___Rb_tree_node_base* __retval20;
  this16 = v11;
  __x17 = v12;
  __y18 = v13;
  __k19 = v14;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t21 = this16;
    while (1) {
      struct std___Rb_tree_node_base* t22 = __x17;
      _Bool cast23 = (_Bool)t22;
      if (!cast23) break;
        struct std___Rb_tree_key_compare_std__less_int__* base24 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t21->_M_impl) + 0);
        struct std__less_int_* cast25 = (struct std__less_int_*)base24;
        struct std___Rb_tree_node_base* t26 = __x17;
        int* r27 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t26);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t28 = __k19;
        _Bool r29 = std__less_int___operator___int_const___int_const___const(cast25, r27, t28);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u30 = !r29;
        if (u30) {
          struct std___Rb_tree_node_base* t31 = __x17;
          __y18 = t31;
          struct std___Rb_tree_node_base* t32 = __x17;
          struct std___Rb_tree_node_base* r33 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t32);
          __x17 = r33;
        } else {
          struct std___Rb_tree_node_base* t34 = __x17;
          struct std___Rb_tree_node_base* r35 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t34);
          __x17 = r35;
        }
    }
  struct std___Rb_tree_node_base* t36 = __y18;
  __retval20 = t36;
  struct std___Rb_tree_node_base* t37 = __retval20;
  return t37;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v38, struct std___Rb_tree_node_base* v39) {
bb40:
  struct std___Rb_tree_const_iterator_int_* this41;
  struct std___Rb_tree_node_base* __x42;
  this41 = v38;
  __x42 = v39;
  struct std___Rb_tree_const_iterator_int_* t43 = this41;
  struct std___Rb_tree_node_base* t44 = __x42;
  t43->_M_node = t44;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v45, struct std___Rb_tree_node_base* v46, struct std___Rb_tree_node_base* v47, int* v48) {
bb49:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this50;
  struct std___Rb_tree_node_base* __x51;
  struct std___Rb_tree_node_base* __y52;
  int* __k53;
  struct std___Rb_tree_node_base* __retval54;
  this50 = v45;
  __x51 = v46;
  __y52 = v47;
  __k53 = v48;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t55 = this50;
    while (1) {
      struct std___Rb_tree_node_base* t56 = __x51;
      _Bool cast57 = (_Bool)t56;
      if (!cast57) break;
        struct std___Rb_tree_key_compare_std__less_int__* base58 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t55->_M_impl) + 0);
        struct std__less_int_* cast59 = (struct std__less_int_*)base58;
        int* t60 = __k53;
        struct std___Rb_tree_node_base* t61 = __x51;
        int* r62 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t61);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r63 = std__less_int___operator___int_const___int_const___const(cast59, t60, r62);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r63) {
          struct std___Rb_tree_node_base* t64 = __x51;
          __y52 = t64;
          struct std___Rb_tree_node_base* t65 = __x51;
          struct std___Rb_tree_node_base* r66 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t65);
          __x51 = r66;
        } else {
          struct std___Rb_tree_node_base* t67 = __x51;
          struct std___Rb_tree_node_base* r68 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t67);
          __x51 = r68;
        }
    }
  struct std___Rb_tree_node_base* t69 = __y52;
  __retval54 = t69;
  struct std___Rb_tree_node_base* t70 = __retval54;
  return t70;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v71, struct std___Rb_tree_const_iterator_int_* v72, struct std___Rb_tree_const_iterator_int_* v73) {
bb74:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this75;
  struct std___Rb_tree_const_iterator_int_* __x76;
  struct std___Rb_tree_const_iterator_int_* __y77;
  this75 = v71;
  __x76 = v72;
  __y77 = v73;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t78 = this75;
  struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* base79 = (struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__*)((char *)t78 + 0);
  struct std___Rb_tree_const_iterator_int_* t80 = __x76;
  t78->first = *t80; // copy
  struct std___Rb_tree_const_iterator_int_* t81 = __y77;
  t78->second = *t81; // copy
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range_int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v82, int* v83) {
bb84:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this85;
  int* __k86;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __retval87;
  struct std___Rb_tree_node_base* __x88;
  struct std___Rb_tree_node_base* __y89;
  struct std___Rb_tree_const_iterator_int_ ref_tmp290;
  struct std___Rb_tree_const_iterator_int_ ref_tmp391;
  this85 = v82;
  __k86 = v83;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t92 = this85;
  struct std___Rb_tree_node_base* r93 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t92);
  __x88 = r93;
  struct std___Rb_tree_node_base* r94 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t92);
  __y89 = r94;
    while (1) {
      struct std___Rb_tree_node_base* t95 = __x88;
      _Bool cast96 = (_Bool)t95;
      if (!cast96) break;
          struct std___Rb_tree_key_compare_std__less_int__* base97 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t92->_M_impl) + 0);
          struct std__less_int_* cast98 = (struct std__less_int_*)base97;
          struct std___Rb_tree_node_base* t99 = __x88;
          int* r100 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t99);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t101 = __k86;
          _Bool r102 = std__less_int___operator___int_const___int_const___const(cast98, r100, t101);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r102) {
            struct std___Rb_tree_node_base* t103 = __x88;
            struct std___Rb_tree_node_base* r104 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t103);
            __x88 = r104;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base105 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t92->_M_impl) + 0);
              struct std__less_int_* cast106 = (struct std__less_int_*)base105;
              int* t107 = __k86;
              struct std___Rb_tree_node_base* t108 = __x88;
              int* r109 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t108);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r110 = std__less_int___operator___int_const___int_const___const(cast106, t107, r109);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r110) {
                struct std___Rb_tree_node_base* t111 = __x88;
                __y89 = t111;
                struct std___Rb_tree_node_base* t112 = __x88;
                struct std___Rb_tree_node_base* r113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t112);
                __x88 = r113;
              } else {
                struct std___Rb_tree_node_base* __xu114;
                struct std___Rb_tree_node_base* __yu115;
                struct std___Rb_tree_const_iterator_int_ ref_tmp0116;
                struct std___Rb_tree_const_iterator_int_ ref_tmp1117;
                struct std___Rb_tree_node_base* t118 = __x88;
                __xu114 = t118;
                struct std___Rb_tree_node_base* t119 = __y89;
                __yu115 = t119;
                struct std___Rb_tree_node_base* t120 = __x88;
                __y89 = t120;
                struct std___Rb_tree_node_base* t121 = __x88;
                struct std___Rb_tree_node_base* r122 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t121);
                __x88 = r122;
                struct std___Rb_tree_node_base* t123 = __xu114;
                struct std___Rb_tree_node_base* r124 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t123);
                __xu114 = r124;
                struct std___Rb_tree_node_base* t125 = __x88;
                struct std___Rb_tree_node_base* t126 = __y89;
                int* t127 = __k86;
                struct std___Rb_tree_node_base* r128 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t92, t125, t126, t127);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp0116, r128);
                struct std___Rb_tree_node_base* t129 = __xu114;
                struct std___Rb_tree_node_base* t130 = __yu115;
                int* t131 = __k86;
                struct std___Rb_tree_node_base* r132 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t92, t129, t130, t131);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp1117, r132);
                _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval87, &ref_tmp0116, &ref_tmp1117);
                struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ t133 = __retval87;
                struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ret_val134 = t133;
                return ret_val134;
              }
          }
    }
  struct std___Rb_tree_node_base* t135 = __y89;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp290, t135);
  struct std___Rb_tree_node_base* t136 = __y89;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp391, t136);
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval87, &ref_tmp290, &ref_tmp391);
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ t137 = __retval87;
  return t137;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v138, struct std___Rb_tree_const_iterator_int_* v139) {
bb140:
  struct std___Rb_tree_const_iterator_int_* __x141;
  struct std___Rb_tree_const_iterator_int_* __y142;
  _Bool __retval143;
  __x141 = v138;
  __y142 = v139;
  struct std___Rb_tree_const_iterator_int_* t144 = __x141;
  struct std___Rb_tree_node_base* t145 = t144->_M_node;
  struct std___Rb_tree_const_iterator_int_* t146 = __y142;
  struct std___Rb_tree_node_base* t147 = t146->_M_node;
  _Bool c148 = ((t145 == t147)) ? 1 : 0;
  __retval143 = c148;
  _Bool t149 = __retval143;
  return t149;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v150) {
bb151:
  struct std___Rb_tree_const_iterator_int_* this152;
  struct std___Rb_tree_const_iterator_int_* __retval153;
  this152 = v150;
  struct std___Rb_tree_const_iterator_int_* t154 = this152;
  struct std___Rb_tree_node_base* t155 = t154->_M_node;
  struct std___Rb_tree_node_base* r156 = std___Rb_tree_increment(t155);
  t154->_M_node = r156;
  __retval153 = t154;
  struct std___Rb_tree_const_iterator_int_* t157 = __retval153;
  return t157;
}

// function: _ZSt10__distanceISt23_Rb_tree_const_iteratorIiEENSt15iterator_traitsIT_E15difference_typeES3_S3_St18input_iterator_tag
long std__iterator_traits_std___Rb_tree_const_iterator_int_____difference_type_std____distance_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_const_iterator_int_ v158, struct std___Rb_tree_const_iterator_int_ v159, struct std__input_iterator_tag v160) {
bb161:
  struct std___Rb_tree_const_iterator_int_ __first162;
  struct std___Rb_tree_const_iterator_int_ __last163;
  struct std__input_iterator_tag unnamed164;
  long __retval165;
  long __n166;
  __first162 = v158;
  __last163 = v159;
  unnamed164 = v160;
  long c167 = 0;
  __n166 = c167;
    while (1) {
      _Bool r168 = std__operator__(&__first162, &__last163);
      _Bool u169 = !r168;
      if (!u169) break;
        struct std___Rb_tree_const_iterator_int_* r170 = std___Rb_tree_const_iterator_int___operator__(&__first162);
        long t171 = __n166;
        long u172 = t171 + 1;
        __n166 = u172;
    }
  long t173 = __n166;
  __retval165 = t173;
  long t174 = __retval165;
  return t174;
}

// function: _ZSt19__iterator_categoryISt23_Rb_tree_const_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___Rb_tree_const_iterator_int_____iterator_category_std____iterator_category_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_const_iterator_int_* v175) {
bb176:
  struct std___Rb_tree_const_iterator_int_* unnamed177;
  struct std__bidirectional_iterator_tag __retval178;
  unnamed177 = v175;
  struct std__bidirectional_iterator_tag t179 = __retval178;
  return t179;
}

// function: _ZSt8distanceISt23_Rb_tree_const_iteratorIiEENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_std___Rb_tree_const_iterator_int_____difference_type_std__distance_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_const_iterator_int_ v180, struct std___Rb_tree_const_iterator_int_ v181) {
bb182:
  struct std___Rb_tree_const_iterator_int_ __first183;
  struct std___Rb_tree_const_iterator_int_ __last184;
  long __retval185;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0186;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1187;
  struct std__input_iterator_tag agg_tmp2188;
  struct std__bidirectional_iterator_tag ref_tmp0189;
  __first183 = v180;
  __last184 = v181;
  agg_tmp0186 = __first183; // copy
  agg_tmp1187 = __last184; // copy
  struct std__bidirectional_iterator_tag r190 = std__iterator_traits_std___Rb_tree_const_iterator_int_____iterator_category_std____iterator_category_std___Rb_tree_const_iterator_int___(&__first183);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  ref_tmp0189 = r190;
  struct std__input_iterator_tag* base191 = (struct std__input_iterator_tag*)((char *)&(ref_tmp0189) + 0);
  struct std___Rb_tree_const_iterator_int_ t192 = agg_tmp0186;
  struct std___Rb_tree_const_iterator_int_ t193 = agg_tmp1187;
  struct std__input_iterator_tag t194 = agg_tmp2188;
  long r195 = std__iterator_traits_std___Rb_tree_const_iterator_int_____difference_type_std____distance_std___Rb_tree_const_iterator_int___(t192, t193, t194);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval185 = r195;
  long t196 = __retval185;
  return t196;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5countERKi
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____count_int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v197, int* v198) {
bb199:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this200;
  int* __k201;
  unsigned long __retval202;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __p203;
  unsigned long __n204;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0205;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1206;
  this200 = v197;
  __k201 = v198;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t207 = this200;
  int* t208 = __k201;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ r209 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range_int_const___const(t207, t208);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __p203 = r209;
  agg_tmp0205 = __p203.first; // copy
  agg_tmp1206 = __p203.second; // copy
  struct std___Rb_tree_const_iterator_int_ t210 = agg_tmp0205;
  struct std___Rb_tree_const_iterator_int_ t211 = agg_tmp1206;
  long r212 = std__iterator_traits_std___Rb_tree_const_iterator_int_____difference_type_std__distance_std___Rb_tree_const_iterator_int___(t210, t211);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long cast213 = (unsigned long)r212;
  __n204 = cast213;
  unsigned long t214 = __n204;
  __retval202 = t214;
  unsigned long t215 = __retval202;
  return t215;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5countERKi
unsigned long std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(struct std__multiset_int__std__less_int___std__allocator_int__* v216, int* v217) {
bb218:
  struct std__multiset_int__std__less_int___std__allocator_int__* this219;
  int* __x220;
  unsigned long __retval221;
  this219 = v216;
  __x220 = v217;
  struct std__multiset_int__std__less_int___std__allocator_int__* t222 = this219;
  int* t223 = __x220;
  unsigned long r224 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____count_int_const___const(&t222->_M_t, t223);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval221 = r224;
  unsigned long t225 = __retval221;
  return t225;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v226, int* v227) {
bb228:
  int* __location229;
  int* __args230;
  int* __retval231;
  void* __loc232;
  __location229 = v226;
  __args230 = v227;
  int* t233 = __location229;
  void* cast234 = (void*)t233;
  __loc232 = cast234;
    void* t235 = __loc232;
    int* cast236 = (int*)t235;
    int* t237 = __args230;
    int t238 = *t237;
    *cast236 = t238;
    __retval231 = cast236;
    int* t239 = __retval231;
    return t239;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v240, int* v241, int* v242) {
bb243:
  struct std__allocator_std___Rb_tree_node_int__* __a244;
  int* __p245;
  int* __args246;
  __a244 = v240;
  __p245 = v241;
  __args246 = v242;
  int* t247 = __p245;
  int* t248 = __args246;
  int* r249 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t247, t248);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v250, struct std___Rb_tree_node_int_* v251, int* v252) {
bb253:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this254;
  struct std___Rb_tree_node_int_* __node255;
  int* __args256;
  this254 = v250;
  __node255 = v251;
  __args256 = v252;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t257 = this254;
      struct std__allocator_std___Rb_tree_node_int__* r259 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t257);
      struct std___Rb_tree_node_int_* t260 = __node255;
      int* r261 = std___Rb_tree_node_int____M_valptr(t260);
      if (__cir_exc_active) {
        goto cir_try_dispatch258;
      }
      int* t262 = __args256;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r259, r261, t262);
    cir_try_dispatch258: ;
    if (__cir_exc_active) {
    {
      int ca_tok263 = 0;
      void* ca_exn264 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t265 = __node255;
        struct std___Rb_tree_node_int_* t266 = __node255;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t257, t266);
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

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v267, int* v268) {
bb269:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this270;
  int* __args271;
  struct std___Rb_tree_node_int_* __retval272;
  struct std___Rb_tree_node_int_* __tmp273;
  this270 = v267;
  __args271 = v268;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t274 = this270;
  struct std___Rb_tree_node_int_* r275 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t274);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp273 = r275;
  struct std___Rb_tree_node_int_* t276 = __tmp273;
  int* t277 = __args271;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t274, t276, t277);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t278 = __tmp273;
  __retval272 = t278;
  struct std___Rb_tree_node_int_* t279 = __retval272;
  return t279;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v280, int* v281) {
bb282:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this283;
  int* __arg284;
  struct std___Rb_tree_node_int_* __retval285;
  this283 = v280;
  __arg284 = v281;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t286 = this283;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t287 = t286->_M_t;
  int* t288 = __arg284;
  struct std___Rb_tree_node_int_* r289 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t287, t288);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval285 = r289;
  struct std___Rb_tree_node_int_* t290 = __retval285;
  return t290;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v291, struct std___Rb_tree_node_base* v292, struct std___Rb_tree_node_base* v293, int* v294, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v295) {
bb296:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this297;
  struct std___Rb_tree_node_base* __x298;
  struct std___Rb_tree_node_base* __p299;
  int* __v300;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen301;
  struct std___Rb_tree_iterator_int_ __retval302;
  _Bool __insert_left303;
  struct std___Rb_tree_node_base* __z304;
  this297 = v291;
  __x298 = v292;
  __p299 = v293;
  __v300 = v294;
  __node_gen301 = v295;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t305 = this297;
  struct std___Rb_tree_node_base* t306 = __x298;
  _Bool cast307 = (_Bool)t306;
  _Bool ternary308;
  if (cast307) {
    _Bool c309 = 1;
    ternary308 = (_Bool)c309;
  } else {
    struct std___Rb_tree_node_base* t310 = __p299;
    struct std___Rb_tree_node_base* r311 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t305);
    _Bool c312 = ((t310 == r311)) ? 1 : 0;
    ternary308 = (_Bool)c312;
  }
  _Bool ternary313;
  if (ternary308) {
    _Bool c314 = 1;
    ternary313 = (_Bool)c314;
  } else {
    struct std___Identity_int_ ref_tmp0315;
    struct std___Rb_tree_key_compare_std__less_int__* base316 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t305->_M_impl) + 0);
    struct std__less_int_* cast317 = (struct std__less_int_*)base316;
    int* t318 = __v300;
    int* r319 = std___Identity_int___operator___int___const(&ref_tmp0315, t318);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t320 = __p299;
    int* r321 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t320);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r322 = std__less_int___operator___int_const___int_const___const(cast317, r319, r321);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary313 = (_Bool)r322;
  }
  __insert_left303 = ternary313;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t323 = __node_gen301;
  int* t324 = __v300;
  struct std___Rb_tree_node_int_* r325 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t323, t324);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base326 = (struct std___Rb_tree_node_base*)((char *)r325 + 0);
  struct std___Rb_tree_node_base* r327 = std___Rb_tree_node_base___M_base_ptr___const(base326);
  __z304 = r327;
  _Bool t328 = __insert_left303;
  struct std___Rb_tree_node_base* t329 = __z304;
  struct std___Rb_tree_node_base* t330 = __p299;
  struct std___Rb_tree_header* base331 = (struct std___Rb_tree_header*)((char *)&(t305->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t328, t329, t330, &base331->_M_header);
  struct std___Rb_tree_header* base332 = (struct std___Rb_tree_header*)((char *)&(t305->_M_impl) + 8);
  unsigned long t333 = base332->_M_node_count;
  unsigned long u334 = t333 + 1;
  base332->_M_node_count = u334;
  struct std___Rb_tree_node_base* t335 = __z304;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval302, t335);
  struct std___Rb_tree_iterator_int_ t336 = __retval302;
  return t336;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v337, int* v338) {
bb339:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this340;
  int* __v341;
  struct std___Rb_tree_iterator_int_ __retval342;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res343;
  struct std___Identity_int_ ref_tmp0344;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an345;
  this340 = v337;
  __v341 = v338;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t346 = this340;
  int* t347 = __v341;
  int* r348 = std___Identity_int___operator___int___const(&ref_tmp0344, t347);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r349 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t346, r348);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res343 = r349;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an345, t346);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t350 = __res343.first;
  struct std___Rb_tree_node_base* t351 = __res343.second;
  int* t352 = __v341;
  struct std___Rb_tree_iterator_int_ r353 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t346, t350, t351, t352, &__an345);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval342 = r353;
  struct std___Rb_tree_iterator_int_ t354 = __retval342;
  return t354;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* v355, int* v356) {
bb357:
  struct std__multiset_int__std__less_int___std__allocator_int__* this358;
  int* __x359;
  struct std___Rb_tree_const_iterator_int_ __retval360;
  struct std___Rb_tree_iterator_int_ ref_tmp0361;
  this358 = v355;
  __x359 = v356;
  struct std__multiset_int__std__less_int___std__allocator_int__* t362 = this358;
  int* t363 = __x359;
  struct std___Rb_tree_iterator_int_ r364 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(&t362->_M_t, t363);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0361 = r364;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval360, &ref_tmp0361);
  struct std___Rb_tree_const_iterator_int_ t365 = __retval360;
  return t365;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v366, int v367) {
bb368:
  int __a369;
  int __b370;
  int __retval371;
  __a369 = v366;
  __b370 = v367;
  int t372 = __a369;
  int t373 = __b370;
  int b374 = t372 | t373;
  __retval371 = b374;
  int t375 = __retval371;
  return t375;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v376) {
bb377:
  struct std__basic_ios_char__std__char_traits_char__* this378;
  int __retval379;
  this378 = v376;
  struct std__basic_ios_char__std__char_traits_char__* t380 = this378;
  struct std__ios_base* base381 = (struct std__ios_base*)((char *)t380 + 0);
  int t382 = base381->_M_streambuf_state;
  __retval379 = t382;
  int t383 = __retval379;
  return t383;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v384, int v385) {
bb386:
  struct std__basic_ios_char__std__char_traits_char__* this387;
  int __state388;
  this387 = v384;
  __state388 = v385;
  struct std__basic_ios_char__std__char_traits_char__* t389 = this387;
  int r390 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t389);
  if (__cir_exc_active) {
    return;
  }
  int t391 = __state388;
  int r392 = std__operator_(r390, t391);
  std__basic_ios_char__std__char_traits_char_____clear(t389, r392);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v393, char* v394) {
bb395:
  char* __c1396;
  char* __c2397;
  _Bool __retval398;
  __c1396 = v393;
  __c2397 = v394;
  char* t399 = __c1396;
  char t400 = *t399;
  int cast401 = (int)t400;
  char* t402 = __c2397;
  char t403 = *t402;
  int cast404 = (int)t403;
  _Bool c405 = ((cast401 == cast404)) ? 1 : 0;
  __retval398 = c405;
  _Bool t406 = __retval398;
  return t406;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v407) {
bb408:
  char* __p409;
  unsigned long __retval410;
  unsigned long __i411;
  __p409 = v407;
  unsigned long c412 = 0;
  __i411 = c412;
    char ref_tmp0413;
    while (1) {
      unsigned long t414 = __i411;
      char* t415 = __p409;
      char* ptr416 = &(t415)[t414];
      char c417 = 0;
      ref_tmp0413 = c417;
      _Bool r418 = __gnu_cxx__char_traits_char___eq(ptr416, &ref_tmp0413);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u419 = !r418;
      if (!u419) break;
      unsigned long t420 = __i411;
      unsigned long u421 = t420 + 1;
      __i411 = u421;
    }
  unsigned long t422 = __i411;
  __retval410 = t422;
  unsigned long t423 = __retval410;
  return t423;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v424) {
bb425:
  char* __s426;
  unsigned long __retval427;
  __s426 = v424;
    _Bool r428 = std____is_constant_evaluated();
    if (r428) {
      char* t429 = __s426;
      unsigned long r430 = __gnu_cxx__char_traits_char___length(t429);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval427 = r430;
      unsigned long t431 = __retval427;
      return t431;
    }
  char* t432 = __s426;
  unsigned long r433 = strlen(t432);
  __retval427 = r433;
  unsigned long t434 = __retval427;
  return t434;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v435, char* v436) {
bb437:
  struct std__basic_ostream_char__std__char_traits_char__* __out438;
  char* __s439;
  struct std__basic_ostream_char__std__char_traits_char__* __retval440;
  __out438 = v435;
  __s439 = v436;
    char* t441 = __s439;
    _Bool cast442 = (_Bool)t441;
    _Bool u443 = !cast442;
    if (u443) {
      struct std__basic_ostream_char__std__char_traits_char__* t444 = __out438;
      void** v445 = (void**)t444;
      void* v446 = *((void**)v445);
      unsigned char* cast447 = (unsigned char*)v446;
      long c448 = -24;
      unsigned char* ptr449 = &(cast447)[c448];
      long* cast450 = (long*)ptr449;
      long t451 = *cast450;
      unsigned char* cast452 = (unsigned char*)t444;
      unsigned char* ptr453 = &(cast452)[t451];
      struct std__basic_ostream_char__std__char_traits_char__* cast454 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr453;
      struct std__basic_ios_char__std__char_traits_char__* cast455 = (struct std__basic_ios_char__std__char_traits_char__*)cast454;
      int t456 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast455, t456);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t457 = __out438;
      char* t458 = __s439;
      char* t459 = __s439;
      unsigned long r460 = std__char_traits_char___length(t459);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast461 = (long)r460;
      struct std__basic_ostream_char__std__char_traits_char__* r462 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t457, t458, cast461);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t463 = __out438;
  __retval440 = t463;
  struct std__basic_ostream_char__std__char_traits_char__* t464 = __retval440;
  return t464;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v465) {
bb466:
  struct std__multiset_int__std__less_int___std__allocator_int__* this467;
  this467 = v465;
  struct std__multiset_int__std__less_int___std__allocator_int__* t468 = this467;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t468->_M_t);
  }
  return;
}

// function: main
int main() {
bb469:
  int __retval470;
  int b471[4];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset472;
  int i473;
  int ref_tmp0474;
  int ref_tmp1475;
  int ref_tmp2476;
  int ref_tmp3477;
  int ref_tmp4478;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0479;
  int ref_tmp5480;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1481;
  int ref_tmp6482;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2483;
  int ref_tmp7484;
  int c485 = 0;
  __retval470 = c485;
  // array copy
  __builtin_memcpy(b471, __const_main_b, (unsigned long)4 * sizeof(__const_main_b[0]));
  int* cast486 = (int*)&(b471);
  int* cast487 = (int*)&(b471);
  int c488 = 4;
  int* ptr489 = &(cast487)[c488];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&myset472, cast486, ptr489);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c490 = 3;
    ref_tmp0474 = c490;
    unsigned long r491 = std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(&myset472, &ref_tmp0474);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c492 = 1;
    _Bool c493 = ((r491 == c492)) ? 1 : 0;
    if (c493) {
    } else {
      char* cast494 = (char*)&(_str);
      char* c495 = _str_1;
      unsigned int c496 = 21;
      char* cast497 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast494, c495, c496, cast497);
    }
    int c498 = 6;
    ref_tmp1475 = c498;
    unsigned long r499 = std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(&myset472, &ref_tmp1475);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c500 = 1;
    _Bool c501 = ((r499 == c500)) ? 1 : 0;
    if (c501) {
    } else {
      char* cast502 = (char*)&(_str_2);
      char* c503 = _str_1;
      unsigned int c504 = 22;
      char* cast505 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast502, c503, c504, cast505);
    }
    int c506 = 9;
    ref_tmp2476 = c506;
    unsigned long r507 = std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(&myset472, &ref_tmp2476);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c508 = 1;
    _Bool c509 = ((r507 != c508)) ? 1 : 0;
    if (c509) {
    } else {
      char* cast510 = (char*)&(_str_3);
      char* c511 = _str_1;
      unsigned int c512 = 23;
      char* cast513 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast510, c511, c512, cast513);
    }
    int c514 = 12;
    ref_tmp3477 = c514;
    unsigned long r515 = std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(&myset472, &ref_tmp3477);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c516 = 1;
    _Bool c517 = ((r515 == c516)) ? 1 : 0;
    if (c517) {
    } else {
      char* cast518 = (char*)&(_str_4);
      char* c519 = _str_1;
      unsigned int c520 = 24;
      char* cast521 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast518, c519, c520, cast521);
    }
    int c522 = 3;
    ref_tmp4478 = c522;
    struct std___Rb_tree_const_iterator_int_ r523 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset472, &ref_tmp4478);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0479 = r523;
    int c524 = 3;
    ref_tmp5480 = c524;
    struct std___Rb_tree_const_iterator_int_ r525 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset472, &ref_tmp5480);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1481 = r525;
    int c526 = 3;
    ref_tmp6482 = c526;
    struct std___Rb_tree_const_iterator_int_ r527 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset472, &ref_tmp6482);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2483 = r527;
    int c528 = 3;
    ref_tmp7484 = c528;
    unsigned long r529 = std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(&myset472, &ref_tmp7484);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c530 = 1;
    _Bool c531 = ((r529 != c530)) ? 1 : 0;
    if (c531) {
    } else {
      char* cast532 = (char*)&(_str_5);
      char* c533 = _str_1;
      unsigned int c534 = 28;
      char* cast535 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast532, c533, c534, cast535);
    }
      int c536 = 0;
      i473 = c536;
      while (1) {
        int t538 = i473;
        int c539 = 10;
        _Bool c540 = ((t538 < c539)) ? 1 : 0;
        if (!c540) break;
          int t541 = i473;
          struct std__basic_ostream_char__std__char_traits_char__* r542 = std__ostream__operator__(&_ZSt4cout, t541);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            unsigned long r543 = std__multiset_int__std__less_int___std__allocator_int_____count_int_const___const(&myset472, &i473);
            if (__cir_exc_active) {
              {
                std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            unsigned long c544 = 0;
            _Bool c545 = ((r543 > c544)) ? 1 : 0;
            if (c545) {
              char* cast546 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* r547 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast546);
              if (__cir_exc_active) {
                {
                  std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            } else {
              char* cast548 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* r549 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast548);
              if (__cir_exc_active) {
                {
                  std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            }
      for_step537: ;
        int t550 = i473;
        int u551 = t550 + 1;
        i473 = u551;
      }
    int c552 = 0;
    __retval470 = c552;
    int t553 = __retval470;
    int ret_val554 = t553;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset472);
    }
    return ret_val554;
  int t555 = __retval470;
  return t555;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v556) {
bb557:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this558;
  this558 = v556;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t559 = this558;
    struct std___Rb_tree_node_int_* r560 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t559);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t559, r560);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t559->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t559->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v561) {
bb562:
  struct std___Rb_tree_node_int_* this563;
  struct std___Rb_tree_node_int_* __retval564;
  this563 = v561;
  struct std___Rb_tree_node_int_* t565 = this563;
  __retval564 = t565;
  struct std___Rb_tree_node_int_* t566 = __retval564;
  return t566;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v567) {
bb568:
  struct std___Rb_tree_node_int_* __x569;
  struct std___Rb_tree_node_int_* __retval570;
  __x569 = v567;
  struct std___Rb_tree_node_int_* t571 = __x569;
  struct std___Rb_tree_node_base* base572 = (struct std___Rb_tree_node_base*)((char *)t571 + 0);
  struct std___Rb_tree_node_base* t573 = base572->_M_right;
  _Bool cast574 = (_Bool)t573;
  struct std___Rb_tree_node_int_* ternary575;
  if (cast574) {
    struct std___Rb_tree_node_int_* t576 = __x569;
    struct std___Rb_tree_node_base* base577 = (struct std___Rb_tree_node_base*)((char *)t576 + 0);
    struct std___Rb_tree_node_base* t578 = base577->_M_right;
    struct std___Rb_tree_node_int_* derived579 = (struct std___Rb_tree_node_int_*)((char *)t578 - 0);
    struct std___Rb_tree_node_int_* r580 = std___Rb_tree_node_int____M_node_ptr(derived579);
    ternary575 = (struct std___Rb_tree_node_int_*)r580;
  } else {
    struct std___Rb_tree_node_int_* c581 = ((void*)0);
    ternary575 = (struct std___Rb_tree_node_int_*)c581;
  }
  __retval570 = ternary575;
  struct std___Rb_tree_node_int_* t582 = __retval570;
  return t582;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v583) {
bb584:
  struct std___Rb_tree_node_int_* __x585;
  struct std___Rb_tree_node_int_* __retval586;
  __x585 = v583;
  struct std___Rb_tree_node_int_* t587 = __x585;
  struct std___Rb_tree_node_base* base588 = (struct std___Rb_tree_node_base*)((char *)t587 + 0);
  struct std___Rb_tree_node_base* t589 = base588->_M_left;
  _Bool cast590 = (_Bool)t589;
  struct std___Rb_tree_node_int_* ternary591;
  if (cast590) {
    struct std___Rb_tree_node_int_* t592 = __x585;
    struct std___Rb_tree_node_base* base593 = (struct std___Rb_tree_node_base*)((char *)t592 + 0);
    struct std___Rb_tree_node_base* t594 = base593->_M_left;
    struct std___Rb_tree_node_int_* derived595 = (struct std___Rb_tree_node_int_*)((char *)t594 - 0);
    struct std___Rb_tree_node_int_* r596 = std___Rb_tree_node_int____M_node_ptr(derived595);
    ternary591 = (struct std___Rb_tree_node_int_*)r596;
  } else {
    struct std___Rb_tree_node_int_* c597 = ((void*)0);
    ternary591 = (struct std___Rb_tree_node_int_*)c597;
  }
  __retval586 = ternary591;
  struct std___Rb_tree_node_int_* t598 = __retval586;
  return t598;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v599) {
bb600:
  int* __location601;
  __location601 = v599;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v602, int* v603) {
bb604:
  struct std__allocator_std___Rb_tree_node_int__* __a605;
  int* __p606;
  __a605 = v602;
  __p606 = v603;
  int* t607 = __p606;
  void_std__destroy_at_int_(t607);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v608) {
bb609:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this610;
  struct std__allocator_std___Rb_tree_node_int__* __retval611;
  this610 = v608;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t612 = this610;
  struct std__allocator_std___Rb_tree_node_int__* base613 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t612->_M_impl) + 0);
  __retval611 = base613;
  struct std__allocator_std___Rb_tree_node_int__* t614 = __retval611;
  return t614;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v615) {
bb616:
  struct __gnu_cxx____aligned_membuf_int_* this617;
  void* __retval618;
  this617 = v615;
  struct __gnu_cxx____aligned_membuf_int_* t619 = this617;
  void* cast620 = (void*)&(t619->_M_storage);
  __retval618 = cast620;
  void* t621 = __retval618;
  return t621;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v622) {
bb623:
  struct __gnu_cxx____aligned_membuf_int_* this624;
  int* __retval625;
  this624 = v622;
  struct __gnu_cxx____aligned_membuf_int_* t626 = this624;
  void* r627 = __gnu_cxx____aligned_membuf_int____M_addr(t626);
  int* cast628 = (int*)r627;
  __retval625 = cast628;
  int* t629 = __retval625;
  return t629;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v630) {
bb631:
  struct std___Rb_tree_node_int_* this632;
  int* __retval633;
  this632 = v630;
  struct std___Rb_tree_node_int_* t634 = this632;
  int* r635 = __gnu_cxx____aligned_membuf_int____M_ptr(&t634->_M_storage);
  __retval633 = r635;
  int* t636 = __retval633;
  return t636;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v637, struct std___Rb_tree_node_int_* v638) {
bb639:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this640;
  struct std___Rb_tree_node_int_* __p641;
  this640 = v637;
  __p641 = v638;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t642 = this640;
  struct std__allocator_std___Rb_tree_node_int__* r643 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t642);
  struct std___Rb_tree_node_int_* t644 = __p641;
  int* r645 = std___Rb_tree_node_int____M_valptr(t644);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r643, r645);
  struct std___Rb_tree_node_int_* t646 = __p641;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb647:
  _Bool __retval648;
    _Bool c649 = 0;
    __retval648 = c649;
    _Bool t650 = __retval648;
    return t650;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v651, struct std___Rb_tree_node_int_* v652, unsigned long v653) {
bb654:
  struct std____new_allocator_std___Rb_tree_node_int__* this655;
  struct std___Rb_tree_node_int_* __p656;
  unsigned long __n657;
  this655 = v651;
  __p656 = v652;
  __n657 = v653;
  struct std____new_allocator_std___Rb_tree_node_int__* t658 = this655;
    unsigned long c659 = 8;
    unsigned long c660 = 16;
    _Bool c661 = ((c659 > c660)) ? 1 : 0;
    if (c661) {
      struct std___Rb_tree_node_int_* t662 = __p656;
      void* cast663 = (void*)t662;
      unsigned long t664 = __n657;
      unsigned long c665 = 40;
      unsigned long b666 = t664 * c665;
      unsigned long c667 = 8;
      operator_delete_3(cast663, b666, c667);
      return;
    }
  struct std___Rb_tree_node_int_* t668 = __p656;
  void* cast669 = (void*)t668;
  unsigned long t670 = __n657;
  unsigned long c671 = 40;
  unsigned long b672 = t670 * c671;
  operator_delete_2(cast669, b672);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v673, struct std___Rb_tree_node_int_* v674, unsigned long v675) {
bb676:
  struct std__allocator_std___Rb_tree_node_int__* this677;
  struct std___Rb_tree_node_int_* __p678;
  unsigned long __n679;
  this677 = v673;
  __p678 = v674;
  __n679 = v675;
  struct std__allocator_std___Rb_tree_node_int__* t680 = this677;
    _Bool r681 = std____is_constant_evaluated();
    if (r681) {
      struct std___Rb_tree_node_int_* t682 = __p678;
      void* cast683 = (void*)t682;
      operator_delete(cast683);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base684 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t680 + 0);
  struct std___Rb_tree_node_int_* t685 = __p678;
  unsigned long t686 = __n679;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base684, t685, t686);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v687, struct std___Rb_tree_node_int_* v688, unsigned long v689) {
bb690:
  struct std__allocator_std___Rb_tree_node_int__* __a691;
  struct std___Rb_tree_node_int_* __p692;
  unsigned long __n693;
  __a691 = v687;
  __p692 = v688;
  __n693 = v689;
  struct std__allocator_std___Rb_tree_node_int__* t694 = __a691;
  struct std___Rb_tree_node_int_* t695 = __p692;
  unsigned long t696 = __n693;
  std__allocator_std___Rb_tree_node_int_____deallocate(t694, t695, t696);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v697, struct std___Rb_tree_node_int_* v698) {
bb699:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this700;
  struct std___Rb_tree_node_int_* __p701;
  this700 = v697;
  __p701 = v698;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t702 = this700;
  struct std__allocator_std___Rb_tree_node_int__* r703 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t702);
  struct std___Rb_tree_node_int_* t704 = __p701;
  unsigned long c705 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r703, t704, c705);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v706, struct std___Rb_tree_node_int_* v707) {
bb708:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this709;
  struct std___Rb_tree_node_int_* __p710;
  this709 = v706;
  __p710 = v707;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t711 = this709;
  struct std___Rb_tree_node_int_* t712 = __p710;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t711, t712);
  struct std___Rb_tree_node_int_* t713 = __p710;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t711, t713);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v714, struct std___Rb_tree_node_int_* v715) {
bb716:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this717;
  struct std___Rb_tree_node_int_* __x718;
  this717 = v714;
  __x718 = v715;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t719 = this717;
    while (1) {
      struct std___Rb_tree_node_int_* t720 = __x718;
      _Bool cast721 = (_Bool)t720;
      if (!cast721) break;
        struct std___Rb_tree_node_int_* __y722;
        struct std___Rb_tree_node_int_* t723 = __x718;
        struct std___Rb_tree_node_int_* r724 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t723);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t719, r724);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t725 = __x718;
        struct std___Rb_tree_node_int_* r726 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t725);
        if (__cir_exc_active) {
          return;
        }
        __y722 = r726;
        struct std___Rb_tree_node_int_* t727 = __x718;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t719, t727);
        struct std___Rb_tree_node_int_* t728 = __y722;
        __x718 = t728;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v729) {
bb730:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this731;
  struct std___Rb_tree_node_int_* __retval732;
  struct std___Rb_tree_node_base* __begin733;
  this731 = v729;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t734 = this731;
  struct std___Rb_tree_header* base735 = (struct std___Rb_tree_header*)((char *)&(t734->_M_impl) + 8);
  struct std___Rb_tree_node_base* t736 = base735->_M_header._M_parent;
  __begin733 = t736;
  struct std___Rb_tree_node_base* t737 = __begin733;
  _Bool cast738 = (_Bool)t737;
  struct std___Rb_tree_node_int_* ternary739;
  if (cast738) {
    struct std___Rb_tree_node_base* t740 = __begin733;
    struct std___Rb_tree_node_int_* derived741 = (struct std___Rb_tree_node_int_*)((char *)t740 - 0);
    struct std___Rb_tree_node_int_* r742 = std___Rb_tree_node_int____M_node_ptr(derived741);
    ternary739 = (struct std___Rb_tree_node_int_*)r742;
  } else {
    struct std___Rb_tree_node_int_* c743 = ((void*)0);
    ternary739 = (struct std___Rb_tree_node_int_*)c743;
  }
  __retval732 = ternary739;
  struct std___Rb_tree_node_int_* t744 = __retval732;
  return t744;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v745) {
bb746:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this747;
  this747 = v745;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t748 = this747;
  {
    struct std__allocator_std___Rb_tree_node_int__* base749 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t748 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base749);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v750) {
bb751:
  struct std__allocator_std___Rb_tree_node_int__* this752;
  this752 = v750;
  struct std__allocator_std___Rb_tree_node_int__* t753 = this752;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v754) {
bb755:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this756;
  this756 = v754;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t757 = this756;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t757->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v758, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v759) {
bb760:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this761;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t762;
  this761 = v758;
  __t762 = v759;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t763 = this761;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t764 = __t762;
  t763->_M_t = t764;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v765) {
bb766:
  struct std___Rb_tree_node_base* this767;
  struct std___Rb_tree_node_base* __retval768;
  this767 = v765;
  struct std___Rb_tree_node_base* t769 = this767;
  __retval768 = t769;
  struct std___Rb_tree_node_base* t770 = __retval768;
  return t770;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v771) {
bb772:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this773;
  struct std___Rb_tree_node_base* __retval774;
  this773 = v771;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t775 = this773;
  struct std___Rb_tree_header* base776 = (struct std___Rb_tree_header*)((char *)&(t775->_M_impl) + 8);
  struct std___Rb_tree_node_base* r777 = std___Rb_tree_node_base___M_base_ptr___const(&base776->_M_header);
  __retval774 = r777;
  struct std___Rb_tree_node_base* t778 = __retval774;
  return t778;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v779) {
bb780:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this781;
  unsigned long __retval782;
  this781 = v779;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t783 = this781;
  struct std___Rb_tree_header* base784 = (struct std___Rb_tree_header*)((char *)&(t783->_M_impl) + 8);
  unsigned long t785 = base784->_M_node_count;
  __retval782 = t785;
  unsigned long t786 = __retval782;
  return t786;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v787, int* v788, int* v789) {
bb790:
  struct std__less_int_* this791;
  int* __x792;
  int* __y793;
  _Bool __retval794;
  this791 = v787;
  __x792 = v788;
  __y793 = v789;
  struct std__less_int_* t795 = this791;
  int* t796 = __x792;
  int t797 = *t796;
  int* t798 = __y793;
  int t799 = *t798;
  _Bool c800 = ((t797 < t799)) ? 1 : 0;
  __retval794 = c800;
  _Bool t801 = __retval794;
  return t801;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v802, int* v803) {
bb804:
  struct std___Identity_int_* this805;
  int* __x806;
  int* __retval807;
  this805 = v802;
  __x806 = v803;
  struct std___Identity_int_* t808 = this805;
  int* t809 = __x806;
  __retval807 = t809;
  int* t810 = __retval807;
  return t810;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v811) {
bb812:
  struct __gnu_cxx____aligned_membuf_int_* this813;
  void* __retval814;
  this813 = v811;
  struct __gnu_cxx____aligned_membuf_int_* t815 = this813;
  void* cast816 = (void*)&(t815->_M_storage);
  __retval814 = cast816;
  void* t817 = __retval814;
  return t817;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v818) {
bb819:
  struct __gnu_cxx____aligned_membuf_int_* this820;
  int* __retval821;
  this820 = v818;
  struct __gnu_cxx____aligned_membuf_int_* t822 = this820;
  void* r823 = __gnu_cxx____aligned_membuf_int____M_addr___const(t822);
  int* cast824 = (int*)r823;
  __retval821 = cast824;
  int* t825 = __retval821;
  return t825;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v826) {
bb827:
  struct std___Rb_tree_node_int_* this828;
  int* __retval829;
  this828 = v826;
  struct std___Rb_tree_node_int_* t830 = this828;
  int* r831 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t830->_M_storage);
  __retval829 = r831;
  int* t832 = __retval829;
  return t832;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v833) {
bb834:
  struct std___Rb_tree_node_int_* __node835;
  int* __retval836;
  struct std___Identity_int_ ref_tmp0837;
  __node835 = v833;
  struct std___Rb_tree_node_int_* t838 = __node835;
  int* r839 = std___Rb_tree_node_int____M_valptr___const(t838);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r840 = std___Identity_int___operator___int_const___const(&ref_tmp0837, r839);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval836 = r840;
  int* t841 = __retval836;
  return t841;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v842) {
bb843:
  struct std___Rb_tree_node_base* __x844;
  int* __retval845;
  __x844 = v842;
  struct std___Rb_tree_node_base* t846 = __x844;
  struct std___Rb_tree_node_int_* derived847 = (struct std___Rb_tree_node_int_*)((char *)t846 - 0);
  int* r848 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived847);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval845 = r848;
  int* t849 = __retval845;
  return t849;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v850) {
bb851:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this852;
  struct std___Rb_tree_node_base** __retval853;
  this852 = v850;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t854 = this852;
  struct std___Rb_tree_header* base855 = (struct std___Rb_tree_header*)((char *)&(t854->_M_impl) + 8);
  __retval853 = &base855->_M_header._M_right;
  struct std___Rb_tree_node_base** t856 = __retval853;
  return t856;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v857, struct std___Rb_tree_node_base** v858, struct std___Rb_tree_node_base** v859) {
bb860:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this861;
  struct std___Rb_tree_node_base** __x862;
  struct std___Rb_tree_node_base** __y863;
  this861 = v857;
  __x862 = v858;
  __y863 = v859;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t864 = this861;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base865 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t864 + 0);
  struct std___Rb_tree_node_base** t866 = __x862;
  struct std___Rb_tree_node_base* t867 = *t866;
  t864->first = t867;
  struct std___Rb_tree_node_base** t868 = __y863;
  struct std___Rb_tree_node_base* t869 = *t868;
  t864->second = t869;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v870) {
bb871:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this872;
  struct std___Rb_tree_node_base* __retval873;
  this872 = v870;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t874 = this872;
  struct std___Rb_tree_header* base875 = (struct std___Rb_tree_header*)((char *)&(t874->_M_impl) + 8);
  struct std___Rb_tree_node_base* t876 = base875->_M_header._M_parent;
  __retval873 = t876;
  struct std___Rb_tree_node_base* t877 = __retval873;
  return t877;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v878) {
bb879:
  struct std___Rb_tree_node_base* __x880;
  struct std___Rb_tree_node_base* __retval881;
  __x880 = v878;
  struct std___Rb_tree_node_base* t882 = __x880;
  struct std___Rb_tree_node_base* t883 = t882->_M_left;
  __retval881 = t883;
  struct std___Rb_tree_node_base* t884 = __retval881;
  return t884;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v885, int* v886) {
bb887:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this888;
  int* __k889;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval890;
  struct std___Rb_tree_node_base* __x891;
  struct std___Rb_tree_node_base* __y892;
  this888 = v885;
  __k889 = v886;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t893 = this888;
  struct std___Rb_tree_node_base* r894 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t893);
  __x891 = r894;
  struct std___Rb_tree_node_base* r895 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t893);
  __y892 = r895;
    while (1) {
      struct std___Rb_tree_node_base* t896 = __x891;
      _Bool cast897 = (_Bool)t896;
      if (!cast897) break;
        struct std___Rb_tree_node_base* t898 = __x891;
        __y892 = t898;
        struct std___Rb_tree_key_compare_std__less_int__* base899 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t893->_M_impl) + 0);
        struct std__less_int_* cast900 = (struct std__less_int_*)base899;
        int* t901 = __k889;
        struct std___Rb_tree_node_base* t902 = __x891;
        int* r903 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t902);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r904 = std__less_int___operator___int_const___int_const___const(cast900, t901, r903);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary905;
        if (r904) {
          struct std___Rb_tree_node_base* t906 = __x891;
          struct std___Rb_tree_node_base* r907 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t906);
          ternary905 = (struct std___Rb_tree_node_base*)r907;
        } else {
          struct std___Rb_tree_node_base* t908 = __x891;
          struct std___Rb_tree_node_base* r909 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t908);
          ternary905 = (struct std___Rb_tree_node_base*)r909;
        }
        __x891 = ternary905;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval890, &__x891, &__y892);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t910 = __retval890;
  return t910;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v911, struct std___Rb_tree_node_base* v912) {
bb913:
  struct std___Rb_tree_iterator_int_* this914;
  struct std___Rb_tree_node_base* __x915;
  this914 = v911;
  __x915 = v912;
  struct std___Rb_tree_iterator_int_* t916 = this914;
  struct std___Rb_tree_node_base* t917 = __x915;
  t916->_M_node = t917;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v918) {
bb919:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this920;
  struct std___Rb_tree_node_base** __retval921;
  this920 = v918;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t922 = this920;
  struct std___Rb_tree_header* base923 = (struct std___Rb_tree_header*)((char *)&(t922->_M_impl) + 8);
  __retval921 = &base923->_M_header._M_left;
  struct std___Rb_tree_node_base** t924 = __retval921;
  return t924;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v925, struct std___Rb_tree_node_base** v926, struct std___Rb_tree_node_base** v927) {
bb928:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this929;
  struct std___Rb_tree_node_base** __x930;
  struct std___Rb_tree_node_base** __y931;
  this929 = v925;
  __x930 = v926;
  __y931 = v927;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t932 = this929;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base933 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t932 + 0);
  struct std___Rb_tree_node_base** t934 = __x930;
  struct std___Rb_tree_node_base* t935 = *t934;
  t932->first = t935;
  struct std___Rb_tree_node_base** t936 = __y931;
  struct std___Rb_tree_node_base* t937 = *t936;
  t932->second = t937;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v938) {
bb939:
  struct std___Rb_tree_iterator_int_* this940;
  struct std___Rb_tree_iterator_int_* __retval941;
  this940 = v938;
  struct std___Rb_tree_iterator_int_* t942 = this940;
  struct std___Rb_tree_node_base* t943 = t942->_M_node;
  struct std___Rb_tree_node_base* r944 = std___Rb_tree_decrement(t943);
  t942->_M_node = r944;
  __retval941 = t942;
  struct std___Rb_tree_iterator_int_* t945 = __retval941;
  return t945;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v946) {
bb947:
  struct std___Rb_tree_node_base* __x948;
  struct std___Rb_tree_node_base* __retval949;
  __x948 = v946;
  struct std___Rb_tree_node_base* t950 = __x948;
  struct std___Rb_tree_node_base* t951 = t950->_M_right;
  __retval949 = t951;
  struct std___Rb_tree_node_base* t952 = __retval949;
  return t952;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v953) {
bb954:
  struct std___Rb_tree_iterator_int_* this955;
  struct std___Rb_tree_iterator_int_* __retval956;
  this955 = v953;
  struct std___Rb_tree_iterator_int_* t957 = this955;
  struct std___Rb_tree_node_base* t958 = t957->_M_node;
  struct std___Rb_tree_node_base* r959 = std___Rb_tree_increment(t958);
  t957->_M_node = r959;
  __retval956 = t957;
  struct std___Rb_tree_iterator_int_* t960 = __retval956;
  return t960;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v961, struct std___Rb_tree_node_base** v962, struct std___Rb_tree_node_base** v963) {
bb964:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this965;
  struct std___Rb_tree_node_base** __x966;
  struct std___Rb_tree_node_base** __y967;
  this965 = v961;
  __x966 = v962;
  __y967 = v963;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t968 = this965;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base969 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t968 + 0);
  struct std___Rb_tree_node_base** t970 = __x966;
  struct std___Rb_tree_node_base* t971 = *t970;
  t968->first = t971;
  struct std___Rb_tree_node_base** t972 = __y967;
  struct std___Rb_tree_node_base* t973 = *t972;
  t968->second = t973;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v974, struct std___Rb_tree_const_iterator_int_ v975, int* v976) {
bb977:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this978;
  struct std___Rb_tree_const_iterator_int_ __position979;
  int* __k980;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval981;
  this978 = v974;
  __position979 = v975;
  __k980 = v976;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t982 = this978;
    struct std___Rb_tree_node_base* t983 = __position979._M_node;
    struct std___Rb_tree_node_base* r984 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t982);
    _Bool c985 = ((t983 == r984)) ? 1 : 0;
    if (c985) {
        unsigned long r986 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t982);
        unsigned long c987 = 0;
        _Bool c988 = ((r986 > c987)) ? 1 : 0;
        _Bool ternary989;
        if (c988) {
          struct std___Rb_tree_key_compare_std__less_int__* base990 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t982->_M_impl) + 0);
          struct std__less_int_* cast991 = (struct std__less_int_*)base990;
          int* t992 = __k980;
          struct std___Rb_tree_node_base** r993 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t982);
          struct std___Rb_tree_node_base* t994 = *r993;
          int* r995 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t994);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r996 = std__less_int___operator___int_const___int_const___const(cast991, t992, r995);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u997 = !r996;
          ternary989 = (_Bool)u997;
        } else {
          _Bool c998 = 0;
          ternary989 = (_Bool)c998;
        }
        if (ternary989) {
          struct std___Rb_tree_node_base* ref_tmp0999;
          struct std___Rb_tree_node_base* c1000 = ((void*)0);
          ref_tmp0999 = c1000;
          struct std___Rb_tree_node_base** r1001 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t982);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, &ref_tmp0999, r1001);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1002 = __retval981;
          return t1002;
        } else {
          int* t1003 = __k980;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1004 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t982, t1003);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval981 = r1004;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1005 = __retval981;
          return t1005;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1006 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t982->_M_impl) + 0);
        struct std__less_int_* cast1007 = (struct std__less_int_*)base1006;
        struct std___Rb_tree_node_base* t1008 = __position979._M_node;
        int* r1009 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1008);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1010 = __k980;
        _Bool r1011 = std__less_int___operator___int_const___int_const___const(cast1007, r1009, t1010);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1012 = !r1011;
        if (u1012) {
          struct std___Rb_tree_iterator_int_ __before1013;
          struct std___Rb_tree_node_base* t1014 = __position979._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1013, t1014);
            struct std___Rb_tree_node_base* t1015 = __position979._M_node;
            struct std___Rb_tree_node_base** r1016 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t982);
            struct std___Rb_tree_node_base* t1017 = *r1016;
            _Bool c1018 = ((t1015 == t1017)) ? 1 : 0;
            if (c1018) {
              struct std___Rb_tree_node_base** r1019 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t982);
              struct std___Rb_tree_node_base** r1020 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t982);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, r1019, r1020);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1021 = __retval981;
              return t1021;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1022 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t982->_M_impl) + 0);
                struct std__less_int_* cast1023 = (struct std__less_int_*)base1022;
                int* t1024 = __k980;
                struct std___Rb_tree_iterator_int_* r1025 = std___Rb_tree_iterator_int___operator__(&__before1013);
                struct std___Rb_tree_node_base* t1026 = r1025->_M_node;
                int* r1027 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1026);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r1028 = std__less_int___operator___int_const___int_const___const(cast1023, t1024, r1027);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1029 = !r1028;
                if (u1029) {
                    struct std___Rb_tree_node_base* t1030 = __before1013._M_node;
                    struct std___Rb_tree_node_base* r1031 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1030);
                    _Bool cast1032 = (_Bool)r1031;
                    _Bool u1033 = !cast1032;
                    if (u1033) {
                      struct std___Rb_tree_node_base* ref_tmp11034;
                      struct std___Rb_tree_node_base* c1035 = ((void*)0);
                      ref_tmp11034 = c1035;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, &ref_tmp11034, &__before1013._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1036 = __retval981;
                      return t1036;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, &__position979._M_node, &__position979._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1037 = __retval981;
                      return t1037;
                    }
                } else {
                  int* t1038 = __k980;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1039 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t982, t1038);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval981 = r1039;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1040 = __retval981;
                  return t1040;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after1041;
          struct std___Rb_tree_node_base* t1042 = __position979._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1041, t1042);
            struct std___Rb_tree_node_base* t1043 = __position979._M_node;
            struct std___Rb_tree_node_base** r1044 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t982);
            struct std___Rb_tree_node_base* t1045 = *r1044;
            _Bool c1046 = ((t1043 == t1045)) ? 1 : 0;
            if (c1046) {
              struct std___Rb_tree_node_base* ref_tmp21047;
              struct std___Rb_tree_node_base* c1048 = ((void*)0);
              ref_tmp21047 = c1048;
              struct std___Rb_tree_node_base** r1049 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t982);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, &ref_tmp21047, r1049);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1050 = __retval981;
              return t1050;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1051 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t982->_M_impl) + 0);
                struct std__less_int_* cast1052 = (struct std__less_int_*)base1051;
                struct std___Rb_tree_iterator_int_* r1053 = std___Rb_tree_iterator_int___operator___2(&__after1041);
                struct std___Rb_tree_node_base* t1054 = r1053->_M_node;
                int* r1055 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1054);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1056 = __k980;
                _Bool r1057 = std__less_int___operator___int_const___int_const___const(cast1052, r1055, t1056);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u1058 = !r1057;
                if (u1058) {
                    struct std___Rb_tree_node_base* t1059 = __position979._M_node;
                    struct std___Rb_tree_node_base* r1060 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1059);
                    _Bool cast1061 = (_Bool)r1060;
                    _Bool u1062 = !cast1061;
                    if (u1062) {
                      struct std___Rb_tree_node_base* ref_tmp31063;
                      struct std___Rb_tree_node_base* c1064 = ((void*)0);
                      ref_tmp31063 = c1064;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, &ref_tmp31063, &__position979._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1065 = __retval981;
                      return t1065;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval981, &__after1041._M_node, &__after1041._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1066 = __retval981;
                      return t1066;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp41067;
                  struct std___Rb_tree_node_base* ref_tmp51068;
                  struct std___Rb_tree_node_base* c1069 = ((void*)0);
                  ref_tmp41067 = c1069;
                  struct std___Rb_tree_node_base* c1070 = ((void*)0);
                  ref_tmp51068 = c1070;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval981, &ref_tmp41067, &ref_tmp51068);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1071 = __retval981;
                  return t1071;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1072, int* v1073) {
bb1074:
  struct std___Identity_int_* this1075;
  int* __x1076;
  int* __retval1077;
  this1075 = v1072;
  __x1076 = v1073;
  struct std___Identity_int_* t1078 = this1075;
  int* t1079 = __x1076;
  __retval1077 = t1079;
  int* t1080 = __retval1077;
  return t1080;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1081) {
bb1082:
  struct std____new_allocator_std___Rb_tree_node_int__* this1083;
  unsigned long __retval1084;
  this1083 = v1081;
  struct std____new_allocator_std___Rb_tree_node_int__* t1085 = this1083;
  unsigned long c1086 = 9223372036854775807;
  unsigned long c1087 = 40;
  unsigned long b1088 = c1086 / c1087;
  __retval1084 = b1088;
  unsigned long t1089 = __retval1084;
  return t1089;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1090, unsigned long v1091, void* v1092) {
bb1093:
  struct std____new_allocator_std___Rb_tree_node_int__* this1094;
  unsigned long __n1095;
  void* unnamed1096;
  struct std___Rb_tree_node_int_* __retval1097;
  this1094 = v1090;
  __n1095 = v1091;
  unnamed1096 = v1092;
  struct std____new_allocator_std___Rb_tree_node_int__* t1098 = this1094;
    unsigned long t1099 = __n1095;
    unsigned long r1100 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1098);
    _Bool c1101 = ((t1099 > r1100)) ? 1 : 0;
    if (c1101) {
        unsigned long t1102 = __n1095;
        unsigned long c1103 = -1;
        unsigned long c1104 = 40;
        unsigned long b1105 = c1103 / c1104;
        _Bool c1106 = ((t1102 > b1105)) ? 1 : 0;
        if (c1106) {
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
    unsigned long c1107 = 8;
    unsigned long c1108 = 16;
    _Bool c1109 = ((c1107 > c1108)) ? 1 : 0;
    if (c1109) {
      unsigned long __al1110;
      unsigned long c1111 = 8;
      __al1110 = c1111;
      unsigned long t1112 = __n1095;
      unsigned long c1113 = 40;
      unsigned long b1114 = t1112 * c1113;
      unsigned long t1115 = __al1110;
      void* r1116 = operator_new_2(b1114, t1115);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1117 = (struct std___Rb_tree_node_int_*)r1116;
      __retval1097 = cast1117;
      struct std___Rb_tree_node_int_* t1118 = __retval1097;
      return t1118;
    }
  unsigned long t1119 = __n1095;
  unsigned long c1120 = 40;
  unsigned long b1121 = t1119 * c1120;
  void* r1122 = operator_new(b1121);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1123 = (struct std___Rb_tree_node_int_*)r1122;
  __retval1097 = cast1123;
  struct std___Rb_tree_node_int_* t1124 = __retval1097;
  return t1124;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1125, unsigned long v1126) {
bb1127:
  struct std__allocator_std___Rb_tree_node_int__* this1128;
  unsigned long __n1129;
  struct std___Rb_tree_node_int_* __retval1130;
  this1128 = v1125;
  __n1129 = v1126;
  struct std__allocator_std___Rb_tree_node_int__* t1131 = this1128;
    _Bool r1132 = std____is_constant_evaluated();
    if (r1132) {
        unsigned long t1133 = __n1129;
        unsigned long c1134 = 40;
        unsigned long ovr1135;
        _Bool ovf1136 = __builtin_mul_overflow(t1133, c1134, &ovr1135);
        __n1129 = ovr1135;
        if (ovf1136) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1137 = __n1129;
      void* r1138 = operator_new(t1137);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1139 = (struct std___Rb_tree_node_int_*)r1138;
      __retval1130 = cast1139;
      struct std___Rb_tree_node_int_* t1140 = __retval1130;
      return t1140;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1141 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1131 + 0);
  unsigned long t1142 = __n1129;
  void* c1143 = ((void*)0);
  struct std___Rb_tree_node_int_* r1144 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1141, t1142, c1143);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1130 = r1144;
  struct std___Rb_tree_node_int_* t1145 = __retval1130;
  return t1145;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1146, unsigned long v1147) {
bb1148:
  struct std__allocator_std___Rb_tree_node_int__* __a1149;
  unsigned long __n1150;
  struct std___Rb_tree_node_int_* __retval1151;
  __a1149 = v1146;
  __n1150 = v1147;
  struct std__allocator_std___Rb_tree_node_int__* t1152 = __a1149;
  unsigned long t1153 = __n1150;
  struct std___Rb_tree_node_int_* r1154 = std__allocator_std___Rb_tree_node_int_____allocate(t1152, t1153);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1151 = r1154;
  struct std___Rb_tree_node_int_* t1155 = __retval1151;
  return t1155;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1156) {
bb1157:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1158;
  struct std___Rb_tree_node_int_* __retval1159;
  this1158 = v1156;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1160 = this1158;
  struct std__allocator_std___Rb_tree_node_int__* r1161 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1160);
  unsigned long c1162 = 1;
  struct std___Rb_tree_node_int_* r1163 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1161, c1162);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1159 = r1163;
  struct std___Rb_tree_node_int_* t1164 = __retval1159;
  return t1164;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1165, int* v1166) {
bb1167:
  int* __location1168;
  int* __args1169;
  int* __retval1170;
  void* __loc1171;
  __location1168 = v1165;
  __args1169 = v1166;
  int* t1172 = __location1168;
  void* cast1173 = (void*)t1172;
  __loc1171 = cast1173;
    void* t1174 = __loc1171;
    int* cast1175 = (int*)t1174;
    int* t1176 = __args1169;
    int t1177 = *t1176;
    *cast1175 = t1177;
    __retval1170 = cast1175;
    int* t1178 = __retval1170;
    return t1178;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1179, int* v1180, int* v1181) {
bb1182:
  struct std__allocator_std___Rb_tree_node_int__* __a1183;
  int* __p1184;
  int* __args1185;
  __a1183 = v1179;
  __p1184 = v1180;
  __args1185 = v1181;
  int* t1186 = __p1184;
  int* t1187 = __args1185;
  int* r1188 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1186, t1187);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1189, struct std___Rb_tree_node_int_* v1190, int* v1191) {
bb1192:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1193;
  struct std___Rb_tree_node_int_* __node1194;
  int* __args1195;
  this1193 = v1189;
  __node1194 = v1190;
  __args1195 = v1191;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1196 = this1193;
      struct std__allocator_std___Rb_tree_node_int__* r1198 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1196);
      struct std___Rb_tree_node_int_* t1199 = __node1194;
      int* r1200 = std___Rb_tree_node_int____M_valptr(t1199);
      if (__cir_exc_active) {
        goto cir_try_dispatch1197;
      }
      int* t1201 = __args1195;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1198, r1200, t1201);
    cir_try_dispatch1197: ;
    if (__cir_exc_active) {
    {
      int ca_tok1202 = 0;
      void* ca_exn1203 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1204 = __node1194;
        struct std___Rb_tree_node_int_* t1205 = __node1194;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1196, t1205);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1206, int* v1207) {
bb1208:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1209;
  int* __args1210;
  struct std___Rb_tree_node_int_* __retval1211;
  struct std___Rb_tree_node_int_* __tmp1212;
  this1209 = v1206;
  __args1210 = v1207;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1213 = this1209;
  struct std___Rb_tree_node_int_* r1214 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1213);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1212 = r1214;
  struct std___Rb_tree_node_int_* t1215 = __tmp1212;
  int* t1216 = __args1210;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1213, t1215, t1216);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1217 = __tmp1212;
  __retval1211 = t1217;
  struct std___Rb_tree_node_int_* t1218 = __retval1211;
  return t1218;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1219, int* v1220) {
bb1221:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1222;
  int* __arg1223;
  struct std___Rb_tree_node_int_* __retval1224;
  this1222 = v1219;
  __arg1223 = v1220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1225 = this1222;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1226 = t1225->_M_t;
  int* t1227 = __arg1223;
  struct std___Rb_tree_node_int_* r1228 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1226, t1227);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1224 = r1228;
  struct std___Rb_tree_node_int_* t1229 = __retval1224;
  return t1229;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1230, struct std___Rb_tree_node_base* v1231, struct std___Rb_tree_node_base* v1232, struct std___Rb_tree_node_base* v1233) {
bb1234:
  _Bool __insert_left1235;
  struct std___Rb_tree_node_base* __x1236;
  struct std___Rb_tree_node_base* __p1237;
  struct std___Rb_tree_node_base* __header1238;
  __insert_left1235 = v1230;
  __x1236 = v1231;
  __p1237 = v1232;
  __header1238 = v1233;
  _Bool t1239 = __insert_left1235;
  struct std___Rb_tree_node_base* t1240 = __x1236;
  struct std___Rb_tree_node_base* t1241 = __p1237;
  struct std___Rb_tree_node_base* t1242 = __header1238;
  std___Rb_tree_insert_and_rebalance(t1239, t1240, t1241, t1242);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1243, struct std___Rb_tree_node_base* v1244, struct std___Rb_tree_node_base* v1245, int* v1246, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1247) {
bb1248:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1249;
  struct std___Rb_tree_node_base* __x1250;
  struct std___Rb_tree_node_base* __p1251;
  int* __v1252;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1253;
  struct std___Rb_tree_iterator_int_ __retval1254;
  _Bool __insert_left1255;
  struct std___Rb_tree_node_base* __z1256;
  this1249 = v1243;
  __x1250 = v1244;
  __p1251 = v1245;
  __v1252 = v1246;
  __node_gen1253 = v1247;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1257 = this1249;
  struct std___Rb_tree_node_base* t1258 = __x1250;
  _Bool cast1259 = (_Bool)t1258;
  _Bool ternary1260;
  if (cast1259) {
    _Bool c1261 = 1;
    ternary1260 = (_Bool)c1261;
  } else {
    struct std___Rb_tree_node_base* t1262 = __p1251;
    struct std___Rb_tree_node_base* r1263 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1257);
    _Bool c1264 = ((t1262 == r1263)) ? 1 : 0;
    ternary1260 = (_Bool)c1264;
  }
  _Bool ternary1265;
  if (ternary1260) {
    _Bool c1266 = 1;
    ternary1265 = (_Bool)c1266;
  } else {
    struct std___Identity_int_ ref_tmp01267;
    struct std___Rb_tree_key_compare_std__less_int__* base1268 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1257->_M_impl) + 0);
    struct std__less_int_* cast1269 = (struct std__less_int_*)base1268;
    int* t1270 = __v1252;
    int* r1271 = std___Identity_int___operator___int___const(&ref_tmp01267, t1270);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1272 = __p1251;
    int* r1273 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1272);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1274 = std__less_int___operator___int_const___int_const___const(cast1269, r1271, r1273);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1265 = (_Bool)r1274;
  }
  __insert_left1255 = ternary1265;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1275 = __node_gen1253;
  int* t1276 = __v1252;
  struct std___Rb_tree_node_int_* r1277 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1275, t1276);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1278 = (struct std___Rb_tree_node_base*)((char *)r1277 + 0);
  struct std___Rb_tree_node_base* r1279 = std___Rb_tree_node_base___M_base_ptr___const(base1278);
  __z1256 = r1279;
  _Bool t1280 = __insert_left1255;
  struct std___Rb_tree_node_base* t1281 = __z1256;
  struct std___Rb_tree_node_base* t1282 = __p1251;
  struct std___Rb_tree_header* base1283 = (struct std___Rb_tree_header*)((char *)&(t1257->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1280, t1281, t1282, &base1283->_M_header);
  struct std___Rb_tree_header* base1284 = (struct std___Rb_tree_header*)((char *)&(t1257->_M_impl) + 8);
  unsigned long t1285 = base1284->_M_node_count;
  unsigned long u1286 = t1285 + 1;
  base1284->_M_node_count = u1286;
  struct std___Rb_tree_node_base* t1287 = __z1256;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1254, t1287);
  struct std___Rb_tree_iterator_int_ t1288 = __retval1254;
  return t1288;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1289, struct std___Rb_tree_node_base* v1290, int* v1291) {
bb1292:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1293;
  struct std___Rb_tree_node_base* __p1294;
  int* __v1295;
  struct std___Rb_tree_iterator_int_ __retval1296;
  _Bool __insert_left1297;
  struct std___Rb_tree_node_base* __z1298;
  this1293 = v1289;
  __p1294 = v1290;
  __v1295 = v1291;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1299 = this1293;
  struct std___Rb_tree_node_base* t1300 = __p1294;
  struct std___Rb_tree_node_base* r1301 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1299);
  _Bool c1302 = ((t1300 == r1301)) ? 1 : 0;
  _Bool ternary1303;
  if (c1302) {
    _Bool c1304 = 1;
    ternary1303 = (_Bool)c1304;
  } else {
    struct std___Identity_int_ ref_tmp01305;
    struct std___Rb_tree_key_compare_std__less_int__* base1306 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1299->_M_impl) + 0);
    struct std__less_int_* cast1307 = (struct std__less_int_*)base1306;
    struct std___Rb_tree_node_base* t1308 = __p1294;
    int* r1309 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1308);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1310 = __v1295;
    int* r1311 = std___Identity_int___operator___int___const(&ref_tmp01305, t1310);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1312 = std__less_int___operator___int_const___int_const___const(cast1307, r1309, r1311);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u1313 = !r1312;
    ternary1303 = (_Bool)u1313;
  }
  __insert_left1297 = ternary1303;
  int* t1314 = __v1295;
  struct std___Rb_tree_node_int_* r1315 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1299, t1314);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1316 = (struct std___Rb_tree_node_base*)((char *)r1315 + 0);
  struct std___Rb_tree_node_base* r1317 = std___Rb_tree_node_base___M_base_ptr___const(base1316);
  __z1298 = r1317;
  _Bool t1318 = __insert_left1297;
  struct std___Rb_tree_node_base* t1319 = __z1298;
  struct std___Rb_tree_node_base* t1320 = __p1294;
  struct std___Rb_tree_header* base1321 = (struct std___Rb_tree_header*)((char *)&(t1299->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1318, t1319, t1320, &base1321->_M_header);
  struct std___Rb_tree_header* base1322 = (struct std___Rb_tree_header*)((char *)&(t1299->_M_impl) + 8);
  unsigned long t1323 = base1322->_M_node_count;
  unsigned long u1324 = t1323 + 1;
  base1322->_M_node_count = u1324;
  struct std___Rb_tree_node_base* t1325 = __z1298;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1296, t1325);
  struct std___Rb_tree_iterator_int_ t1326 = __retval1296;
  return t1326;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1327, int* v1328) {
bb1329:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1330;
  int* __v1331;
  struct std___Rb_tree_iterator_int_ __retval1332;
  struct std___Rb_tree_node_base* __x1333;
  struct std___Rb_tree_node_base* __y1334;
  this1330 = v1327;
  __v1331 = v1328;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1335 = this1330;
  struct std___Rb_tree_node_base* r1336 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1335);
  __x1333 = r1336;
  struct std___Rb_tree_node_base* r1337 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1335);
  __y1334 = r1337;
    while (1) {
      struct std___Rb_tree_node_base* t1338 = __x1333;
      _Bool cast1339 = (_Bool)t1338;
      if (!cast1339) break;
        struct std___Identity_int_ ref_tmp01340;
        struct std___Rb_tree_node_base** tmp_exprcleanup1341;
        struct std___Rb_tree_node_base* t1342 = __x1333;
        __y1334 = t1342;
        struct std___Rb_tree_key_compare_std__less_int__* base1343 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1335->_M_impl) + 0);
        struct std__less_int_* cast1344 = (struct std__less_int_*)base1343;
        struct std___Rb_tree_node_base* t1345 = __x1333;
        int* r1346 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1345);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1347 = __v1331;
        int* r1348 = std___Identity_int___operator___int___const(&ref_tmp01340, t1347);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1349 = std__less_int___operator___int_const___int_const___const(cast1344, r1346, r1348);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1350 = !r1349;
        struct std___Rb_tree_node_base* ternary1351;
        if (u1350) {
          struct std___Rb_tree_node_base* t1352 = __x1333;
          struct std___Rb_tree_node_base* r1353 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1352);
          ternary1351 = (struct std___Rb_tree_node_base*)r1353;
        } else {
          struct std___Rb_tree_node_base* t1354 = __x1333;
          struct std___Rb_tree_node_base* r1355 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1354);
          ternary1351 = (struct std___Rb_tree_node_base*)r1355;
        }
        __x1333 = ternary1351;
        tmp_exprcleanup1341 = &__x1333;
        struct std___Rb_tree_node_base** t1356 = tmp_exprcleanup1341;
    }
  struct std___Rb_tree_node_base* t1357 = __y1334;
  int* t1358 = __v1331;
  struct std___Rb_tree_iterator_int_ r1359 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1335, t1357, t1358);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1332 = r1359;
  struct std___Rb_tree_iterator_int_ t1360 = __retval1332;
  return t1360;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1361, struct std___Rb_tree_const_iterator_int_ v1362, int* v1363, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1364) {
bb1365:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1366;
  struct std___Rb_tree_const_iterator_int_ __position1367;
  int* __v1368;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1369;
  struct std___Rb_tree_iterator_int_ __retval1370;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1371;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01372;
  struct std___Identity_int_ ref_tmp01373;
  this1366 = v1361;
  __position1367 = v1362;
  __v1368 = v1363;
  __node_gen1369 = v1364;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1374 = this1366;
  agg_tmp01372 = __position1367; // copy
  int* t1375 = __v1368;
  int* r1376 = std___Identity_int___operator___int___const(&ref_tmp01373, t1375);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1377 = agg_tmp01372;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1378 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1374, t1377, r1376);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1371 = r1378;
    struct std___Rb_tree_node_base* t1379 = __res1371.second;
    _Bool cast1380 = (_Bool)t1379;
    if (cast1380) {
      struct std___Rb_tree_node_base* t1381 = __res1371.first;
      struct std___Rb_tree_node_base* t1382 = __res1371.second;
      int* t1383 = __v1368;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1384 = __node_gen1369;
      struct std___Rb_tree_iterator_int_ r1385 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1374, t1381, t1382, t1383, t1384);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1370 = r1385;
      struct std___Rb_tree_iterator_int_ t1386 = __retval1370;
      return t1386;
    }
  int* t1387 = __v1368;
  struct std___Rb_tree_iterator_int_ r1388 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1374, t1387);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1370 = r1388;
  struct std___Rb_tree_iterator_int_ t1389 = __retval1370;
  return t1389;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1390) {
bb1391:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1392;
  struct std___Rb_tree_iterator_int_ __retval1393;
  this1392 = v1390;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1394 = this1392;
  struct std___Rb_tree_node_base* r1395 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1394);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1393, r1395);
  struct std___Rb_tree_iterator_int_ t1396 = __retval1393;
  return t1396;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1397, struct std___Rb_tree_iterator_int_* v1398) {
bb1399:
  struct std___Rb_tree_const_iterator_int_* this1400;
  struct std___Rb_tree_iterator_int_* __it1401;
  this1400 = v1397;
  __it1401 = v1398;
  struct std___Rb_tree_const_iterator_int_* t1402 = this1400;
  struct std___Rb_tree_iterator_int_* t1403 = __it1401;
  struct std___Rb_tree_node_base* t1404 = t1403->_M_node;
  t1402->_M_node = t1404;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1405, int* v1406, int* v1407) {
bb1408:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1409;
  int* __first1410;
  int* __last1411;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1412;
  this1409 = v1405;
  __first1410 = v1406;
  __last1411 = v1407;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1413 = this1409;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1412, t1413);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01414;
    struct std___Rb_tree_iterator_int_ ref_tmp01415;
    struct std___Rb_tree_iterator_int_ agg_tmp11416;
    while (1) {
      int* t1418 = __first1410;
      int* t1419 = __last1411;
      _Bool c1420 = ((t1418 != t1419)) ? 1 : 0;
      if (!c1420) break;
      struct std___Rb_tree_iterator_int_ r1421 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1413);
      ref_tmp01415 = r1421;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01414, &ref_tmp01415);
      int* t1422 = __first1410;
      struct std___Rb_tree_const_iterator_int_ t1423 = agg_tmp01414;
      struct std___Rb_tree_iterator_int_ r1424 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1413, t1423, t1422, &__an1412);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11416 = r1424;
    for_step1417: ;
      int* t1425 = __first1410;
      int c1426 = 1;
      int* ptr1427 = &(t1425)[c1426];
      __first1410 = ptr1427;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1428) {
bb1429:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1430;
  this1430 = v1428;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1431 = this1430;
  struct std__allocator_std___Rb_tree_node_int__* base1432 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1431 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1432);
    struct std___Rb_tree_key_compare_std__less_int__* base1433 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1431 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1433);
    struct std___Rb_tree_header* base1434 = (struct std___Rb_tree_header*)((char *)t1431 + 8);
    std___Rb_tree_header___Rb_tree_header(base1434);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1435) {
bb1436:
  struct std____new_allocator_std___Rb_tree_node_int__* this1437;
  this1437 = v1435;
  struct std____new_allocator_std___Rb_tree_node_int__* t1438 = this1437;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1439) {
bb1440:
  struct std__allocator_std___Rb_tree_node_int__* this1441;
  this1441 = v1439;
  struct std__allocator_std___Rb_tree_node_int__* t1442 = this1441;
  struct std____new_allocator_std___Rb_tree_node_int__* base1443 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1442 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1443);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1444) {
bb1445:
  struct std___Rb_tree_key_compare_std__less_int__* this1446;
  this1446 = v1444;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1447) {
bb1448:
  struct std___Rb_tree_header* this1449;
  this1449 = v1447;
  struct std___Rb_tree_header* t1450 = this1449;
  struct std___Rb_tree_node_base* c1451 = ((void*)0);
  t1450->_M_header._M_parent = c1451;
  t1450->_M_header._M_left = &t1450->_M_header;
  t1450->_M_header._M_right = &t1450->_M_header;
  unsigned long c1452 = 0;
  t1450->_M_node_count = c1452;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1453) {
bb1454:
  struct std___Rb_tree_header* this1455;
  this1455 = v1453;
  struct std___Rb_tree_header* t1456 = this1455;
  unsigned int c1457 = 0;
  t1456->_M_header._M_color = c1457;
  std___Rb_tree_header___M_reset(t1456);
  if (__cir_exc_active) {
    return;
  }
  return;
}

