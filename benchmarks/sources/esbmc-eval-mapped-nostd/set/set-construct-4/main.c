extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
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
struct std__less_int_ { unsigned char __field0; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {10, 20, 30, 40, 50};
char _str[19] = "fourth.size() == 5";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-construct-4/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 50";
_Bool fncomp(int p0, int p1);
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std__set_int__std__less_int___std__allocator_int_____set_std___Rb_tree_const_iterator_int___(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
void std__enable_if___same_value_type_std___Rb_tree_const_iterator_int_____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);

// function: _Z6fncompii
_Bool fncomp(int v0, int v1) {
bb2: ;
  int lhs3;
  int rhs4;
  _Bool __retval5;
  lhs3 = v0;
  rhs4 = v1;
  int t6 = lhs3;
  int t7 = rhs4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v10, int* v11, int* v12) {
bb13: ;
  struct std__set_int__std__less_int___std__allocator_int__* this14;
  int* __first15;
  int* __last16;
  this14 = v10;
  __first15 = v11;
  __last16 = v12;
  struct std__set_int__std__less_int___std__allocator_int__* t17 = this14;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c18 = {0};
  t17->_M_t = c18;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t17->_M_t);
    int* t19 = __first15;
    int* t20 = __last16;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t17->_M_t, t19, t20);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t17->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v21, struct std___Rb_tree_node_base* v22) {
bb23: ;
  struct std___Rb_tree_const_iterator_int_* this24;
  struct std___Rb_tree_node_base* __x25;
  this24 = v21;
  __x25 = v22;
  struct std___Rb_tree_const_iterator_int_* t26 = this24;
  struct std___Rb_tree_node_base* t27 = __x25;
  t26->_M_node = t27;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v28) {
bb29: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this30;
  struct std___Rb_tree_const_iterator_int_ __retval31;
  this30 = v28;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t32 = this30;
  struct std___Rb_tree_header* base33 = (struct std___Rb_tree_header*)((char *)&(t32->_M_impl) + 8);
  struct std___Rb_tree_node_base* t34 = base33->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval31, t34);
  struct std___Rb_tree_const_iterator_int_ t35 = __retval31;
  return t35;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v36) {
bb37: ;
  struct std__set_int__std__less_int___std__allocator_int__* this38;
  struct std___Rb_tree_const_iterator_int_ __retval39;
  this38 = v36;
  struct std__set_int__std__less_int___std__allocator_int__* t40 = this38;
  struct std___Rb_tree_const_iterator_int_ r41 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t40->_M_t);
  __retval39 = r41;
  struct std___Rb_tree_const_iterator_int_ t42 = __retval39;
  return t42;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v43) {
bb44: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this45;
  struct std___Rb_tree_const_iterator_int_ __retval46;
  this45 = v43;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t47 = this45;
  struct std___Rb_tree_node_base* r48 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t47);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval46, r48);
  struct std___Rb_tree_const_iterator_int_ t49 = __retval46;
  return t49;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v50) {
bb51: ;
  struct std__set_int__std__less_int___std__allocator_int__* this52;
  struct std___Rb_tree_const_iterator_int_ __retval53;
  this52 = v50;
  struct std__set_int__std__less_int___std__allocator_int__* t54 = this52;
  struct std___Rb_tree_const_iterator_int_ r55 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t54->_M_t);
  __retval53 = r55;
  struct std___Rb_tree_const_iterator_int_ t56 = __retval53;
  return t56;
}

// function: _ZNSt3setIiSt4lessIiESaIiEEC2ISt23_Rb_tree_const_iteratorIiEEET_S7_
void std__set_int__std__less_int___std__allocator_int_____set_std___Rb_tree_const_iterator_int___(struct std__set_int__std__less_int___std__allocator_int__* v57, struct std___Rb_tree_const_iterator_int_ v58, struct std___Rb_tree_const_iterator_int_ v59) {
bb60: ;
  struct std__set_int__std__less_int___std__allocator_int__* this61;
  struct std___Rb_tree_const_iterator_int_ __first62;
  struct std___Rb_tree_const_iterator_int_ __last63;
  struct std___Rb_tree_const_iterator_int_ agg_tmp064;
  struct std___Rb_tree_const_iterator_int_ agg_tmp165;
  this61 = v57;
  __first62 = v58;
  __last63 = v59;
  struct std__set_int__std__less_int___std__allocator_int__* t66 = this61;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c67 = {0};
  t66->_M_t = c67;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t66->_M_t);
    agg_tmp064 = __first62; // copy
    agg_tmp165 = __last63; // copy
    struct std___Rb_tree_const_iterator_int_ t68 = agg_tmp064;
    struct std___Rb_tree_const_iterator_int_ t69 = agg_tmp165;
    std__enable_if___same_value_type_std___Rb_tree_const_iterator_int_____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_std___Rb_tree_const_iterator_int___(&t66->_M_t, t68, t69);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t66->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v70) {
bb71: ;
  struct std___Rb_tree_const_iterator_int_* this72;
  this72 = v70;
  struct std___Rb_tree_const_iterator_int_* t73 = this72;
  struct std___Rb_tree_node_base* c74 = ((void*)0);
  t73->_M_node = c74;
  return;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v75) {
bb76: ;
  struct std__set_int__std__less_int___std__allocator_int__* this77;
  unsigned long __retval78;
  this77 = v75;
  struct std__set_int__std__less_int___std__allocator_int__* t79 = this77;
  unsigned long r80 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t79->_M_t);
  __retval78 = r80;
  unsigned long t81 = __retval78;
  return t81;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v82, struct std___Rb_tree_const_iterator_int_* v83) {
bb84: ;
  struct std___Rb_tree_const_iterator_int_* this85;
  struct std___Rb_tree_const_iterator_int_* unnamed86;
  struct std___Rb_tree_const_iterator_int_* __retval87;
  this85 = v82;
  unnamed86 = v83;
  struct std___Rb_tree_const_iterator_int_* t88 = this85;
  struct std___Rb_tree_const_iterator_int_* t89 = unnamed86;
  struct std___Rb_tree_node_base* t90 = t89->_M_node;
  t88->_M_node = t90;
  __retval87 = t88;
  struct std___Rb_tree_const_iterator_int_* t91 = __retval87;
  return t91;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v92) {
bb93: ;
  struct std___Rb_tree_const_iterator_int_* this94;
  int* __retval95;
  this94 = v92;
  struct std___Rb_tree_const_iterator_int_* t96 = this94;
  struct std___Rb_tree_node_base* t97 = t96->_M_node;
  struct std___Rb_tree_node_int_* derived98 = ((t97) ? (struct std___Rb_tree_node_int_*)((char *)t97 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r99 = std___Rb_tree_node_int____M_valptr___const(derived98);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval95 = r99;
  int* t100 = __retval95;
  return t100;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v101, int v102) {
bb103: ;
  struct std___Rb_tree_const_iterator_int_* this104;
  int unnamed105;
  struct std___Rb_tree_const_iterator_int_ __retval106;
  this104 = v101;
  unnamed105 = v102;
  struct std___Rb_tree_const_iterator_int_* t107 = this104;
  __retval106 = *t107; // copy
  struct std___Rb_tree_node_base* t108 = t107->_M_node;
  struct std___Rb_tree_node_base* r109 = std___Rb_tree_decrement(t108);
  t107->_M_node = r109;
  struct std___Rb_tree_const_iterator_int_ t110 = __retval106;
  return t110;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v111) {
bb112: ;
  struct std__set_int__std__less_int___std__allocator_int__* this113;
  this113 = v111;
  struct std__set_int__std__less_int___std__allocator_int__* t114 = this113;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t114->_M_t);
  }
  return;
}

// function: main
int main() {
bb115: ;
  int __retval116;
  int myints117[5];
  struct std__set_int__std__less_int___std__allocator_int__ second118;
  struct std__set_int__std__less_int___std__allocator_int__ fourth119;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0120;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1121;
  struct std___Rb_tree_const_iterator_int_ it122;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0123;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1124;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2125;
  int c126 = 0;
  __retval116 = c126;
  // array copy
  __builtin_memcpy(myints117, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast127 = (int*)&(myints117);
  int* cast128 = (int*)&(myints117);
  int c129 = 5;
  int* ptr130 = &(cast128)[c129];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&second118, cast127, ptr130);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct std___Rb_tree_const_iterator_int_ r131 = std__set_int__std__less_int___std__allocator_int_____begin___const(&second118);
    agg_tmp0120 = r131;
    struct std___Rb_tree_const_iterator_int_ r132 = std__set_int__std__less_int___std__allocator_int_____end___const(&second118);
    agg_tmp1121 = r132;
    struct std___Rb_tree_const_iterator_int_ t133 = agg_tmp0120;
    struct std___Rb_tree_const_iterator_int_ t134 = agg_tmp1121;
    std__set_int__std__less_int___std__allocator_int_____set_std___Rb_tree_const_iterator_int___(&fourth119, t133, t134);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&second118);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it122);
      unsigned long r135 = std__set_int__std__less_int___std__allocator_int_____size___const(&fourth119);
      unsigned long c136 = 5;
      _Bool c137 = ((r135 == c136)) ? 1 : 0;
      if (c137) {
      } else {
        char* cast138 = (char*)&(_str);
        char* c139 = (char*)_str_1;
        unsigned int c140 = 27;
        char* cast141 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast138, c139, c140, cast141);
      }
      struct std___Rb_tree_const_iterator_int_ r142 = std__set_int__std__less_int___std__allocator_int_____begin___const(&fourth119);
      ref_tmp0123 = r142;
      struct std___Rb_tree_const_iterator_int_* r143 = std___Rb_tree_const_iterator_int___operator_(&it122, &ref_tmp0123);
      int* r144 = std___Rb_tree_const_iterator_int___operator____const(&it122);
      int t145 = *r144;
      int c146 = 10;
      _Bool c147 = ((t145 == c146)) ? 1 : 0;
      if (c147) {
      } else {
        char* cast148 = (char*)&(_str_2);
        char* c149 = (char*)_str_1;
        unsigned int c150 = 29;
        char* cast151 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast148, c149, c150, cast151);
      }
      struct std___Rb_tree_const_iterator_int_ r152 = std__set_int__std__less_int___std__allocator_int_____end___const(&fourth119);
      ref_tmp1124 = r152;
      struct std___Rb_tree_const_iterator_int_* r153 = std___Rb_tree_const_iterator_int___operator_(&it122, &ref_tmp1124);
      int c154 = 0;
      struct std___Rb_tree_const_iterator_int_ r155 = std___Rb_tree_const_iterator_int___operator__(&it122, c154);
      agg_tmp2125 = r155;
      int* r156 = std___Rb_tree_const_iterator_int___operator____const(&it122);
      int t157 = *r156;
      int c158 = 50;
      _Bool c159 = ((t157 == c158)) ? 1 : 0;
      if (c159) {
      } else {
        char* cast160 = (char*)&(_str_3);
        char* c161 = (char*)_str_1;
        unsigned int c162 = 32;
        char* cast163 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast160, c161, c162, cast163);
      }
      int c164 = 0;
      __retval116 = c164;
      int t165 = __retval116;
      int ret_val166 = t165;
      {
        std__set_int__std__less_int___std__allocator_int______set(&fourth119);
      }
      {
        std__set_int__std__less_int___std__allocator_int______set(&second118);
      }
      return ret_val166;
  int t167 = __retval116;
  return t167;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v168) {
bb169: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this170;
  this170 = v168;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t171 = this170;
    struct std___Rb_tree_node_int_* r172 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t171);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t171, r172);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t171->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t171->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v173) {
bb174: ;
  struct std___Rb_tree_node_int_* this175;
  struct std___Rb_tree_node_int_* __retval176;
  this175 = v173;
  struct std___Rb_tree_node_int_* t177 = this175;
  __retval176 = t177;
  struct std___Rb_tree_node_int_* t178 = __retval176;
  return t178;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v179) {
bb180: ;
  struct std___Rb_tree_node_int_* __x181;
  struct std___Rb_tree_node_int_* __retval182;
  __x181 = v179;
  struct std___Rb_tree_node_int_* t183 = __x181;
  struct std___Rb_tree_node_base* base184 = (struct std___Rb_tree_node_base*)((char *)t183 + 0);
  struct std___Rb_tree_node_base* t185 = base184->_M_right;
  _Bool cast186 = (_Bool)t185;
  struct std___Rb_tree_node_int_* ternary187;
  if (cast186) {
    struct std___Rb_tree_node_int_* t188 = __x181;
    struct std___Rb_tree_node_base* base189 = (struct std___Rb_tree_node_base*)((char *)t188 + 0);
    struct std___Rb_tree_node_base* t190 = base189->_M_right;
    struct std___Rb_tree_node_int_* derived191 = (struct std___Rb_tree_node_int_*)((char *)t190 - 0);
    struct std___Rb_tree_node_int_* r192 = std___Rb_tree_node_int____M_node_ptr(derived191);
    ternary187 = (struct std___Rb_tree_node_int_*)r192;
  } else {
    struct std___Rb_tree_node_int_* c193 = ((void*)0);
    ternary187 = (struct std___Rb_tree_node_int_*)c193;
  }
  __retval182 = ternary187;
  struct std___Rb_tree_node_int_* t194 = __retval182;
  return t194;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v195) {
bb196: ;
  struct std___Rb_tree_node_int_* __x197;
  struct std___Rb_tree_node_int_* __retval198;
  __x197 = v195;
  struct std___Rb_tree_node_int_* t199 = __x197;
  struct std___Rb_tree_node_base* base200 = (struct std___Rb_tree_node_base*)((char *)t199 + 0);
  struct std___Rb_tree_node_base* t201 = base200->_M_left;
  _Bool cast202 = (_Bool)t201;
  struct std___Rb_tree_node_int_* ternary203;
  if (cast202) {
    struct std___Rb_tree_node_int_* t204 = __x197;
    struct std___Rb_tree_node_base* base205 = (struct std___Rb_tree_node_base*)((char *)t204 + 0);
    struct std___Rb_tree_node_base* t206 = base205->_M_left;
    struct std___Rb_tree_node_int_* derived207 = (struct std___Rb_tree_node_int_*)((char *)t206 - 0);
    struct std___Rb_tree_node_int_* r208 = std___Rb_tree_node_int____M_node_ptr(derived207);
    ternary203 = (struct std___Rb_tree_node_int_*)r208;
  } else {
    struct std___Rb_tree_node_int_* c209 = ((void*)0);
    ternary203 = (struct std___Rb_tree_node_int_*)c209;
  }
  __retval198 = ternary203;
  struct std___Rb_tree_node_int_* t210 = __retval198;
  return t210;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v211) {
bb212: ;
  int* __location213;
  __location213 = v211;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v214, int* v215) {
bb216: ;
  struct std__allocator_std___Rb_tree_node_int__* __a217;
  int* __p218;
  __a217 = v214;
  __p218 = v215;
  int* t219 = __p218;
  void_std__destroy_at_int_(t219);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v220) {
bb221: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this222;
  struct std__allocator_std___Rb_tree_node_int__* __retval223;
  this222 = v220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t224 = this222;
  struct std__allocator_std___Rb_tree_node_int__* base225 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t224->_M_impl) + 0);
  __retval223 = base225;
  struct std__allocator_std___Rb_tree_node_int__* t226 = __retval223;
  return t226;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v227) {
bb228: ;
  struct __gnu_cxx____aligned_membuf_int_* this229;
  void* __retval230;
  this229 = v227;
  struct __gnu_cxx____aligned_membuf_int_* t231 = this229;
  void* cast232 = (void*)&(t231->_M_storage);
  __retval230 = cast232;
  void* t233 = __retval230;
  return t233;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v234) {
bb235: ;
  struct __gnu_cxx____aligned_membuf_int_* this236;
  int* __retval237;
  this236 = v234;
  struct __gnu_cxx____aligned_membuf_int_* t238 = this236;
  void* r239 = __gnu_cxx____aligned_membuf_int____M_addr(t238);
  int* cast240 = (int*)r239;
  __retval237 = cast240;
  int* t241 = __retval237;
  return t241;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v242) {
bb243: ;
  struct std___Rb_tree_node_int_* this244;
  int* __retval245;
  this244 = v242;
  struct std___Rb_tree_node_int_* t246 = this244;
  int* r247 = __gnu_cxx____aligned_membuf_int____M_ptr(&t246->_M_storage);
  __retval245 = r247;
  int* t248 = __retval245;
  return t248;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v249, struct std___Rb_tree_node_int_* v250) {
bb251: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this252;
  struct std___Rb_tree_node_int_* __p253;
  this252 = v249;
  __p253 = v250;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t254 = this252;
  struct std__allocator_std___Rb_tree_node_int__* r255 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t254);
  struct std___Rb_tree_node_int_* t256 = __p253;
  int* r257 = std___Rb_tree_node_int____M_valptr(t256);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r255, r257);
  struct std___Rb_tree_node_int_* t258 = __p253;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb259: ;
  _Bool __retval260;
    _Bool c261 = 0;
    __retval260 = c261;
    _Bool t262 = __retval260;
    return t262;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v263, struct std___Rb_tree_node_int_* v264, unsigned long v265) {
bb266: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this267;
  struct std___Rb_tree_node_int_* __p268;
  unsigned long __n269;
  this267 = v263;
  __p268 = v264;
  __n269 = v265;
  struct std____new_allocator_std___Rb_tree_node_int__* t270 = this267;
    unsigned long c271 = 8;
    unsigned long c272 = 16;
    _Bool c273 = ((c271 > c272)) ? 1 : 0;
    if (c273) {
      struct std___Rb_tree_node_int_* t274 = __p268;
      void* cast275 = (void*)t274;
      unsigned long t276 = __n269;
      unsigned long c277 = 40;
      unsigned long b278 = t276 * c277;
      unsigned long c279 = 8;
      operator_delete_3(cast275, b278, c279);
      return;
    }
  struct std___Rb_tree_node_int_* t280 = __p268;
  void* cast281 = (void*)t280;
  unsigned long t282 = __n269;
  unsigned long c283 = 40;
  unsigned long b284 = t282 * c283;
  operator_delete_2(cast281, b284);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v285, struct std___Rb_tree_node_int_* v286, unsigned long v287) {
bb288: ;
  struct std__allocator_std___Rb_tree_node_int__* this289;
  struct std___Rb_tree_node_int_* __p290;
  unsigned long __n291;
  this289 = v285;
  __p290 = v286;
  __n291 = v287;
  struct std__allocator_std___Rb_tree_node_int__* t292 = this289;
    _Bool r293 = std____is_constant_evaluated();
    if (r293) {
      struct std___Rb_tree_node_int_* t294 = __p290;
      void* cast295 = (void*)t294;
      operator_delete(cast295);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base296 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t292 + 0);
  struct std___Rb_tree_node_int_* t297 = __p290;
  unsigned long t298 = __n291;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base296, t297, t298);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v299, struct std___Rb_tree_node_int_* v300, unsigned long v301) {
bb302: ;
  struct std__allocator_std___Rb_tree_node_int__* __a303;
  struct std___Rb_tree_node_int_* __p304;
  unsigned long __n305;
  __a303 = v299;
  __p304 = v300;
  __n305 = v301;
  struct std__allocator_std___Rb_tree_node_int__* t306 = __a303;
  struct std___Rb_tree_node_int_* t307 = __p304;
  unsigned long t308 = __n305;
  std__allocator_std___Rb_tree_node_int_____deallocate(t306, t307, t308);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v309, struct std___Rb_tree_node_int_* v310) {
bb311: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this312;
  struct std___Rb_tree_node_int_* __p313;
  this312 = v309;
  __p313 = v310;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t314 = this312;
  struct std__allocator_std___Rb_tree_node_int__* r315 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t314);
  struct std___Rb_tree_node_int_* t316 = __p313;
  unsigned long c317 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r315, t316, c317);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v318, struct std___Rb_tree_node_int_* v319) {
bb320: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this321;
  struct std___Rb_tree_node_int_* __p322;
  this321 = v318;
  __p322 = v319;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t323 = this321;
  struct std___Rb_tree_node_int_* t324 = __p322;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t323, t324);
  struct std___Rb_tree_node_int_* t325 = __p322;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t323, t325);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v326, struct std___Rb_tree_node_int_* v327) {
bb328: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this329;
  struct std___Rb_tree_node_int_* __x330;
  this329 = v326;
  __x330 = v327;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t331 = this329;
    while (1) {
      struct std___Rb_tree_node_int_* t332 = __x330;
      _Bool cast333 = (_Bool)t332;
      if (!cast333) break;
        struct std___Rb_tree_node_int_* __y334;
        struct std___Rb_tree_node_int_* t335 = __x330;
        struct std___Rb_tree_node_int_* r336 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t335);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t331, r336);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t337 = __x330;
        struct std___Rb_tree_node_int_* r338 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t337);
        if (__cir_exc_active) {
          return;
        }
        __y334 = r338;
        struct std___Rb_tree_node_int_* t339 = __x330;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t331, t339);
        struct std___Rb_tree_node_int_* t340 = __y334;
        __x330 = t340;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v341) {
bb342: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this343;
  struct std___Rb_tree_node_int_* __retval344;
  struct std___Rb_tree_node_base* __begin345;
  this343 = v341;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t346 = this343;
  struct std___Rb_tree_header* base347 = (struct std___Rb_tree_header*)((char *)&(t346->_M_impl) + 8);
  struct std___Rb_tree_node_base* t348 = base347->_M_header._M_parent;
  __begin345 = t348;
  struct std___Rb_tree_node_base* t349 = __begin345;
  _Bool cast350 = (_Bool)t349;
  struct std___Rb_tree_node_int_* ternary351;
  if (cast350) {
    struct std___Rb_tree_node_base* t352 = __begin345;
    struct std___Rb_tree_node_int_* derived353 = (struct std___Rb_tree_node_int_*)((char *)t352 - 0);
    struct std___Rb_tree_node_int_* r354 = std___Rb_tree_node_int____M_node_ptr(derived353);
    ternary351 = (struct std___Rb_tree_node_int_*)r354;
  } else {
    struct std___Rb_tree_node_int_* c355 = ((void*)0);
    ternary351 = (struct std___Rb_tree_node_int_*)c355;
  }
  __retval344 = ternary351;
  struct std___Rb_tree_node_int_* t356 = __retval344;
  return t356;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v357) {
bb358: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this359;
  this359 = v357;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t360 = this359;
  {
    struct std__allocator_std___Rb_tree_node_int__* base361 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t360 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base361);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v362) {
bb363: ;
  struct std__allocator_std___Rb_tree_node_int__* this364;
  this364 = v362;
  struct std__allocator_std___Rb_tree_node_int__* t365 = this364;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v366) {
bb367: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this368;
  this368 = v366;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t369 = this368;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t369->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v370, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v371) {
bb372: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this373;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t374;
  this373 = v370;
  __t374 = v371;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t375 = this373;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t376 = __t374;
  t375->_M_t = t376;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v377) {
bb378: ;
  struct std___Rb_tree_node_base* this379;
  struct std___Rb_tree_node_base* __retval380;
  this379 = v377;
  struct std___Rb_tree_node_base* t381 = this379;
  __retval380 = t381;
  struct std___Rb_tree_node_base* t382 = __retval380;
  return t382;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v383) {
bb384: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this385;
  struct std___Rb_tree_node_base* __retval386;
  this385 = v383;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t387 = this385;
  struct std___Rb_tree_header* base388 = (struct std___Rb_tree_header*)((char *)&(t387->_M_impl) + 8);
  struct std___Rb_tree_node_base* r389 = std___Rb_tree_node_base___M_base_ptr___const(&base388->_M_header);
  __retval386 = r389;
  struct std___Rb_tree_node_base* t390 = __retval386;
  return t390;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v391) {
bb392: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this393;
  unsigned long __retval394;
  this393 = v391;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t395 = this393;
  struct std___Rb_tree_header* base396 = (struct std___Rb_tree_header*)((char *)&(t395->_M_impl) + 8);
  unsigned long t397 = base396->_M_node_count;
  __retval394 = t397;
  unsigned long t398 = __retval394;
  return t398;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v399, int* v400, int* v401) {
bb402: ;
  struct std__less_int_* this403;
  int* __x404;
  int* __y405;
  _Bool __retval406;
  this403 = v399;
  __x404 = v400;
  __y405 = v401;
  struct std__less_int_* t407 = this403;
  int* t408 = __x404;
  int t409 = *t408;
  int* t410 = __y405;
  int t411 = *t410;
  _Bool c412 = ((t409 < t411)) ? 1 : 0;
  __retval406 = c412;
  _Bool t413 = __retval406;
  return t413;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v414, int* v415) {
bb416: ;
  struct std___Identity_int_* this417;
  int* __x418;
  int* __retval419;
  this417 = v414;
  __x418 = v415;
  struct std___Identity_int_* t420 = this417;
  int* t421 = __x418;
  __retval419 = t421;
  int* t422 = __retval419;
  return t422;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v423) {
bb424: ;
  struct __gnu_cxx____aligned_membuf_int_* this425;
  void* __retval426;
  this425 = v423;
  struct __gnu_cxx____aligned_membuf_int_* t427 = this425;
  void* cast428 = (void*)&(t427->_M_storage);
  __retval426 = cast428;
  void* t429 = __retval426;
  return t429;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v430) {
bb431: ;
  struct __gnu_cxx____aligned_membuf_int_* this432;
  int* __retval433;
  this432 = v430;
  struct __gnu_cxx____aligned_membuf_int_* t434 = this432;
  void* r435 = __gnu_cxx____aligned_membuf_int____M_addr___const(t434);
  int* cast436 = (int*)r435;
  __retval433 = cast436;
  int* t437 = __retval433;
  return t437;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v438) {
bb439: ;
  struct std___Rb_tree_node_int_* this440;
  int* __retval441;
  this440 = v438;
  struct std___Rb_tree_node_int_* t442 = this440;
  int* r443 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t442->_M_storage);
  __retval441 = r443;
  int* t444 = __retval441;
  return t444;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v445) {
bb446: ;
  struct std___Rb_tree_node_int_* __node447;
  int* __retval448;
  struct std___Identity_int_ ref_tmp0449;
  __node447 = v445;
  struct std___Rb_tree_node_int_* t450 = __node447;
  int* r451 = std___Rb_tree_node_int____M_valptr___const(t450);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r452 = std___Identity_int___operator___int_const___const(&ref_tmp0449, r451);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval448 = r452;
  int* t453 = __retval448;
  return t453;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v454) {
bb455: ;
  struct std___Rb_tree_node_base* __x456;
  int* __retval457;
  __x456 = v454;
  struct std___Rb_tree_node_base* t458 = __x456;
  struct std___Rb_tree_node_int_* derived459 = (struct std___Rb_tree_node_int_*)((char *)t458 - 0);
  int* r460 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived459);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval457 = r460;
  int* t461 = __retval457;
  return t461;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v462) {
bb463: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this464;
  struct std___Rb_tree_node_base** __retval465;
  this464 = v462;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t466 = this464;
  struct std___Rb_tree_header* base467 = (struct std___Rb_tree_header*)((char *)&(t466->_M_impl) + 8);
  __retval465 = &base467->_M_header._M_right;
  struct std___Rb_tree_node_base** t468 = __retval465;
  return t468;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v469, struct std___Rb_tree_node_base** v470, struct std___Rb_tree_node_base** v471) {
bb472: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this473;
  struct std___Rb_tree_node_base** __x474;
  struct std___Rb_tree_node_base** __y475;
  this473 = v469;
  __x474 = v470;
  __y475 = v471;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t476 = this473;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base477 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t476 + 0);
  struct std___Rb_tree_node_base** t478 = __x474;
  struct std___Rb_tree_node_base* t479 = *t478;
  t476->first = t479;
  struct std___Rb_tree_node_base** t480 = __y475;
  struct std___Rb_tree_node_base* t481 = *t480;
  t476->second = t481;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v482) {
bb483: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this484;
  struct std___Rb_tree_node_base* __retval485;
  this484 = v482;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t486 = this484;
  struct std___Rb_tree_header* base487 = (struct std___Rb_tree_header*)((char *)&(t486->_M_impl) + 8);
  struct std___Rb_tree_node_base* t488 = base487->_M_header._M_parent;
  __retval485 = t488;
  struct std___Rb_tree_node_base* t489 = __retval485;
  return t489;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v490) {
bb491: ;
  struct std___Rb_tree_node_base* __x492;
  struct std___Rb_tree_node_base* __retval493;
  __x492 = v490;
  struct std___Rb_tree_node_base* t494 = __x492;
  struct std___Rb_tree_node_base* t495 = t494->_M_left;
  __retval493 = t495;
  struct std___Rb_tree_node_base* t496 = __retval493;
  return t496;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v497, struct std___Rb_tree_iterator_int_* v498) {
bb499: ;
  struct std___Rb_tree_iterator_int_* __x500;
  struct std___Rb_tree_iterator_int_* __y501;
  _Bool __retval502;
  __x500 = v497;
  __y501 = v498;
  struct std___Rb_tree_iterator_int_* t503 = __x500;
  struct std___Rb_tree_node_base* t504 = t503->_M_node;
  struct std___Rb_tree_iterator_int_* t505 = __y501;
  struct std___Rb_tree_node_base* t506 = t505->_M_node;
  _Bool c507 = ((t504 == t506)) ? 1 : 0;
  __retval502 = c507;
  _Bool t508 = __retval502;
  return t508;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v509) {
bb510: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this511;
  struct std___Rb_tree_iterator_int_ __retval512;
  this511 = v509;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t513 = this511;
  struct std___Rb_tree_header* base514 = (struct std___Rb_tree_header*)((char *)&(t513->_M_impl) + 8);
  struct std___Rb_tree_node_base* t515 = base514->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval512, t515);
  struct std___Rb_tree_iterator_int_ t516 = __retval512;
  return t516;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v517, int* v518) {
bb519: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this520;
  int* __k521;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval522;
  struct std___Rb_tree_node_base* __x523;
  struct std___Rb_tree_node_base* __y524;
  _Bool __comp525;
  struct std___Rb_tree_iterator_int_ __j526;
  struct std___Rb_tree_node_base* ref_tmp1527;
  this520 = v517;
  __k521 = v518;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t528 = this520;
  struct std___Rb_tree_node_base* r529 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t528);
  __x523 = r529;
  struct std___Rb_tree_node_base* r530 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t528);
  __y524 = r530;
  _Bool c531 = 1;
  __comp525 = c531;
    while (1) {
      struct std___Rb_tree_node_base* t532 = __x523;
      _Bool cast533 = (_Bool)t532;
      if (!cast533) break;
        struct std___Rb_tree_node_base* t534 = __x523;
        __y524 = t534;
        struct std___Rb_tree_key_compare_std__less_int__* base535 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t528->_M_impl) + 0);
        struct std__less_int_* cast536 = (struct std__less_int_*)base535;
        int* t537 = __k521;
        struct std___Rb_tree_node_base* t538 = __x523;
        int* r539 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t538);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r540 = std__less_int___operator___int_const___int_const___const(cast536, t537, r539);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp525 = r540;
        _Bool t541 = __comp525;
        struct std___Rb_tree_node_base* ternary542;
        if (t541) {
          struct std___Rb_tree_node_base* t543 = __x523;
          struct std___Rb_tree_node_base* r544 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t543);
          ternary542 = (struct std___Rb_tree_node_base*)r544;
        } else {
          struct std___Rb_tree_node_base* t545 = __x523;
          struct std___Rb_tree_node_base* r546 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t545);
          ternary542 = (struct std___Rb_tree_node_base*)r546;
        }
        __x523 = ternary542;
    }
  struct std___Rb_tree_node_base* t547 = __y524;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j526, t547);
    _Bool t548 = __comp525;
    if (t548) {
        struct std___Rb_tree_iterator_int_ ref_tmp0549;
        struct std___Rb_tree_iterator_int_ r550 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t528);
        ref_tmp0549 = r550;
        _Bool r551 = std__operator__(&__j526, &ref_tmp0549);
        if (r551) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval522, &__x523, &__y524);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t552 = __retval522;
          return t552;
        } else {
          struct std___Rb_tree_iterator_int_* r553 = std___Rb_tree_iterator_int___operator__(&__j526);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base554 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t528->_M_impl) + 0);
    struct std__less_int_* cast555 = (struct std__less_int_*)base554;
    struct std___Rb_tree_node_base* t556 = __j526._M_node;
    int* r557 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t556);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t558 = __k521;
    _Bool r559 = std__less_int___operator___int_const___int_const___const(cast555, r557, t558);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r559) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval522, &__x523, &__y524);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t560 = __retval522;
      return t560;
    }
  struct std___Rb_tree_node_base* c561 = ((void*)0);
  ref_tmp1527 = c561;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval522, &__j526._M_node, &ref_tmp1527);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t562 = __retval522;
  return t562;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v563) {
bb564: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this565;
  struct std___Rb_tree_node_base** __retval566;
  this565 = v563;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t567 = this565;
  struct std___Rb_tree_header* base568 = (struct std___Rb_tree_header*)((char *)&(t567->_M_impl) + 8);
  __retval566 = &base568->_M_header._M_left;
  struct std___Rb_tree_node_base** t569 = __retval566;
  return t569;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v570, struct std___Rb_tree_node_base** v571, struct std___Rb_tree_node_base** v572) {
bb573: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this574;
  struct std___Rb_tree_node_base** __x575;
  struct std___Rb_tree_node_base** __y576;
  this574 = v570;
  __x575 = v571;
  __y576 = v572;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t577 = this574;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base578 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t577 + 0);
  struct std___Rb_tree_node_base** t579 = __x575;
  struct std___Rb_tree_node_base* t580 = *t579;
  t577->first = t580;
  struct std___Rb_tree_node_base** t581 = __y576;
  struct std___Rb_tree_node_base* t582 = *t581;
  t577->second = t582;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v583) {
bb584: ;
  struct std___Rb_tree_iterator_int_* this585;
  struct std___Rb_tree_iterator_int_* __retval586;
  this585 = v583;
  struct std___Rb_tree_iterator_int_* t587 = this585;
  struct std___Rb_tree_node_base* t588 = t587->_M_node;
  struct std___Rb_tree_node_base* r589 = std___Rb_tree_decrement(t588);
  t587->_M_node = r589;
  __retval586 = t587;
  struct std___Rb_tree_iterator_int_* t590 = __retval586;
  return t590;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v591) {
bb592: ;
  struct std___Rb_tree_node_base* __x593;
  struct std___Rb_tree_node_base* __retval594;
  __x593 = v591;
  struct std___Rb_tree_node_base* t595 = __x593;
  struct std___Rb_tree_node_base* t596 = t595->_M_right;
  __retval594 = t596;
  struct std___Rb_tree_node_base* t597 = __retval594;
  return t597;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v598) {
bb599: ;
  struct std___Rb_tree_iterator_int_* this600;
  struct std___Rb_tree_iterator_int_* __retval601;
  this600 = v598;
  struct std___Rb_tree_iterator_int_* t602 = this600;
  struct std___Rb_tree_node_base* t603 = t602->_M_node;
  struct std___Rb_tree_node_base* r604 = std___Rb_tree_increment(t603);
  t602->_M_node = r604;
  __retval601 = t602;
  struct std___Rb_tree_iterator_int_* t605 = __retval601;
  return t605;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v606, struct std___Rb_tree_node_base** v607, struct std___Rb_tree_node_base** v608) {
bb609: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this610;
  struct std___Rb_tree_node_base** __x611;
  struct std___Rb_tree_node_base** __y612;
  this610 = v606;
  __x611 = v607;
  __y612 = v608;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t613 = this610;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base614 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t613 + 0);
  struct std___Rb_tree_node_base** t615 = __x611;
  struct std___Rb_tree_node_base* t616 = *t615;
  t613->first = t616;
  struct std___Rb_tree_node_base** t617 = __y612;
  struct std___Rb_tree_node_base* t618 = *t617;
  t613->second = t618;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v619, struct std___Rb_tree_const_iterator_int_ v620, int* v621) {
bb622: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this623;
  struct std___Rb_tree_const_iterator_int_ __position624;
  int* __k625;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval626;
  this623 = v619;
  __position624 = v620;
  __k625 = v621;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t627 = this623;
    struct std___Rb_tree_node_base* t628 = __position624._M_node;
    struct std___Rb_tree_node_base* r629 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t627);
    _Bool c630 = ((t628 == r629)) ? 1 : 0;
    if (c630) {
        unsigned long r631 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t627);
        unsigned long c632 = 0;
        _Bool c633 = ((r631 > c632)) ? 1 : 0;
        _Bool ternary634;
        if (c633) {
          struct std___Rb_tree_key_compare_std__less_int__* base635 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t627->_M_impl) + 0);
          struct std__less_int_* cast636 = (struct std__less_int_*)base635;
          struct std___Rb_tree_node_base** r637 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t627);
          struct std___Rb_tree_node_base* t638 = *r637;
          int* r639 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t638);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t640 = __k625;
          _Bool r641 = std__less_int___operator___int_const___int_const___const(cast636, r639, t640);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary634 = (_Bool)r641;
        } else {
          _Bool c642 = 0;
          ternary634 = (_Bool)c642;
        }
        if (ternary634) {
          struct std___Rb_tree_node_base* ref_tmp0643;
          struct std___Rb_tree_node_base* c644 = ((void*)0);
          ref_tmp0643 = c644;
          struct std___Rb_tree_node_base** r645 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t627);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &ref_tmp0643, r645);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t646 = __retval626;
          return t646;
        } else {
          int* t647 = __k625;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r648 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t627, t647);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval626 = r648;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t649 = __retval626;
          return t649;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base650 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t627->_M_impl) + 0);
        struct std__less_int_* cast651 = (struct std__less_int_*)base650;
        int* t652 = __k625;
        struct std___Rb_tree_node_base* t653 = __position624._M_node;
        int* r654 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t653);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r655 = std__less_int___operator___int_const___int_const___const(cast651, t652, r654);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r655) {
          struct std___Rb_tree_iterator_int_ __before656;
          struct std___Rb_tree_node_base* t657 = __position624._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before656, t657);
            struct std___Rb_tree_node_base* t658 = __position624._M_node;
            struct std___Rb_tree_node_base** r659 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t627);
            struct std___Rb_tree_node_base* t660 = *r659;
            _Bool c661 = ((t658 == t660)) ? 1 : 0;
            if (c661) {
              struct std___Rb_tree_node_base** r662 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t627);
              struct std___Rb_tree_node_base** r663 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t627);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, r662, r663);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t664 = __retval626;
              return t664;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base665 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t627->_M_impl) + 0);
                struct std__less_int_* cast666 = (struct std__less_int_*)base665;
                struct std___Rb_tree_iterator_int_* r667 = std___Rb_tree_iterator_int___operator__(&__before656);
                struct std___Rb_tree_node_base* t668 = r667->_M_node;
                int* r669 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t668);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t670 = __k625;
                _Bool r671 = std__less_int___operator___int_const___int_const___const(cast666, r669, t670);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r671) {
                    struct std___Rb_tree_node_base* t672 = __before656._M_node;
                    struct std___Rb_tree_node_base* r673 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t672);
                    _Bool cast674 = (_Bool)r673;
                    _Bool u675 = !cast674;
                    if (u675) {
                      struct std___Rb_tree_node_base* ref_tmp1676;
                      struct std___Rb_tree_node_base* c677 = ((void*)0);
                      ref_tmp1676 = c677;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &ref_tmp1676, &__before656._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t678 = __retval626;
                      return t678;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &__position624._M_node, &__position624._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t679 = __retval626;
                      return t679;
                    }
                } else {
                  int* t680 = __k625;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r681 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t627, t680);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval626 = r681;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t682 = __retval626;
                  return t682;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base683 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t627->_M_impl) + 0);
            struct std__less_int_* cast684 = (struct std__less_int_*)base683;
            struct std___Rb_tree_node_base* t685 = __position624._M_node;
            int* r686 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t685);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t687 = __k625;
            _Bool r688 = std__less_int___operator___int_const___int_const___const(cast684, r686, t687);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r688) {
              struct std___Rb_tree_iterator_int_ __after689;
              struct std___Rb_tree_node_base* t690 = __position624._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after689, t690);
                struct std___Rb_tree_node_base* t691 = __position624._M_node;
                struct std___Rb_tree_node_base** r692 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t627);
                struct std___Rb_tree_node_base* t693 = *r692;
                _Bool c694 = ((t691 == t693)) ? 1 : 0;
                if (c694) {
                  struct std___Rb_tree_node_base* ref_tmp2695;
                  struct std___Rb_tree_node_base* c696 = ((void*)0);
                  ref_tmp2695 = c696;
                  struct std___Rb_tree_node_base** r697 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t627);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &ref_tmp2695, r697);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t698 = __retval626;
                  return t698;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base699 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t627->_M_impl) + 0);
                    struct std__less_int_* cast700 = (struct std__less_int_*)base699;
                    int* t701 = __k625;
                    struct std___Rb_tree_iterator_int_* r702 = std___Rb_tree_iterator_int___operator___2(&__after689);
                    struct std___Rb_tree_node_base* t703 = r702->_M_node;
                    int* r704 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t703);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r705 = std__less_int___operator___int_const___int_const___const(cast700, t701, r704);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r705) {
                        struct std___Rb_tree_node_base* t706 = __position624._M_node;
                        struct std___Rb_tree_node_base* r707 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t706);
                        _Bool cast708 = (_Bool)r707;
                        _Bool u709 = !cast708;
                        if (u709) {
                          struct std___Rb_tree_node_base* ref_tmp3710;
                          struct std___Rb_tree_node_base* c711 = ((void*)0);
                          ref_tmp3710 = c711;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &ref_tmp3710, &__position624._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t712 = __retval626;
                          return t712;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &__after689._M_node, &__after689._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t713 = __retval626;
                          return t713;
                        }
                    } else {
                      int* t714 = __k625;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r715 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t627, t714);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval626 = r715;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t716 = __retval626;
                      return t716;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4717;
              struct std___Rb_tree_node_base* c718 = ((void*)0);
              ref_tmp4717 = c718;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval626, &__position624._M_node, &ref_tmp4717);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t719 = __retval626;
              return t719;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v720, int* v721) {
bb722: ;
  struct std___Identity_int_* this723;
  int* __x724;
  int* __retval725;
  this723 = v720;
  __x724 = v721;
  struct std___Identity_int_* t726 = this723;
  int* t727 = __x724;
  __retval725 = t727;
  int* t728 = __retval725;
  return t728;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v729) {
bb730: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this731;
  unsigned long __retval732;
  this731 = v729;
  struct std____new_allocator_std___Rb_tree_node_int__* t733 = this731;
  unsigned long c734 = 9223372036854775807;
  unsigned long c735 = 40;
  unsigned long b736 = c734 / c735;
  __retval732 = b736;
  unsigned long t737 = __retval732;
  return t737;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v738, unsigned long v739, void* v740) {
bb741: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this742;
  unsigned long __n743;
  void* unnamed744;
  struct std___Rb_tree_node_int_* __retval745;
  this742 = v738;
  __n743 = v739;
  unnamed744 = v740;
  struct std____new_allocator_std___Rb_tree_node_int__* t746 = this742;
    unsigned long t747 = __n743;
    unsigned long r748 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t746);
    _Bool c749 = ((t747 > r748)) ? 1 : 0;
    if (c749) {
        unsigned long t750 = __n743;
        unsigned long c751 = -1;
        unsigned long c752 = 40;
        unsigned long b753 = c751 / c752;
        _Bool c754 = ((t750 > b753)) ? 1 : 0;
        if (c754) {
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
    unsigned long c755 = 8;
    unsigned long c756 = 16;
    _Bool c757 = ((c755 > c756)) ? 1 : 0;
    if (c757) {
      unsigned long __al758;
      unsigned long c759 = 8;
      __al758 = c759;
      unsigned long t760 = __n743;
      unsigned long c761 = 40;
      unsigned long b762 = t760 * c761;
      unsigned long t763 = __al758;
      void* r764 = operator_new_2(b762, t763);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast765 = (struct std___Rb_tree_node_int_*)r764;
      __retval745 = cast765;
      struct std___Rb_tree_node_int_* t766 = __retval745;
      return t766;
    }
  unsigned long t767 = __n743;
  unsigned long c768 = 40;
  unsigned long b769 = t767 * c768;
  void* r770 = operator_new(b769);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast771 = (struct std___Rb_tree_node_int_*)r770;
  __retval745 = cast771;
  struct std___Rb_tree_node_int_* t772 = __retval745;
  return t772;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v773, unsigned long v774) {
bb775: ;
  struct std__allocator_std___Rb_tree_node_int__* this776;
  unsigned long __n777;
  struct std___Rb_tree_node_int_* __retval778;
  this776 = v773;
  __n777 = v774;
  struct std__allocator_std___Rb_tree_node_int__* t779 = this776;
    _Bool r780 = std____is_constant_evaluated();
    if (r780) {
        unsigned long t781 = __n777;
        unsigned long c782 = 40;
        unsigned long ovr783;
        _Bool ovf784 = __builtin_mul_overflow(t781, c782, &ovr783);
        __n777 = ovr783;
        if (ovf784) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t785 = __n777;
      void* r786 = operator_new(t785);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast787 = (struct std___Rb_tree_node_int_*)r786;
      __retval778 = cast787;
      struct std___Rb_tree_node_int_* t788 = __retval778;
      return t788;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base789 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t779 + 0);
  unsigned long t790 = __n777;
  void* c791 = ((void*)0);
  struct std___Rb_tree_node_int_* r792 = std____new_allocator_std___Rb_tree_node_int_____allocate(base789, t790, c791);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval778 = r792;
  struct std___Rb_tree_node_int_* t793 = __retval778;
  return t793;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v794, unsigned long v795) {
bb796: ;
  struct std__allocator_std___Rb_tree_node_int__* __a797;
  unsigned long __n798;
  struct std___Rb_tree_node_int_* __retval799;
  __a797 = v794;
  __n798 = v795;
  struct std__allocator_std___Rb_tree_node_int__* t800 = __a797;
  unsigned long t801 = __n798;
  struct std___Rb_tree_node_int_* r802 = std__allocator_std___Rb_tree_node_int_____allocate(t800, t801);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval799 = r802;
  struct std___Rb_tree_node_int_* t803 = __retval799;
  return t803;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v804) {
bb805: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this806;
  struct std___Rb_tree_node_int_* __retval807;
  this806 = v804;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t808 = this806;
  struct std__allocator_std___Rb_tree_node_int__* r809 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t808);
  unsigned long c810 = 1;
  struct std___Rb_tree_node_int_* r811 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r809, c810);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval807 = r811;
  struct std___Rb_tree_node_int_* t812 = __retval807;
  return t812;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v813, int* v814) {
bb815: ;
  int* __location816;
  int* __args817;
  int* __retval818;
  void* __loc819;
  __location816 = v813;
  __args817 = v814;
  int* t820 = __location816;
  void* cast821 = (void*)t820;
  __loc819 = cast821;
    void* t822 = __loc819;
    int* cast823 = (int*)t822;
    int* t824 = __args817;
    int t825 = *t824;
    *cast823 = t825;
    __retval818 = cast823;
    int* t826 = __retval818;
    return t826;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v827, int* v828, int* v829) {
bb830: ;
  struct std__allocator_std___Rb_tree_node_int__* __a831;
  int* __p832;
  int* __args833;
  __a831 = v827;
  __p832 = v828;
  __args833 = v829;
  int* t834 = __p832;
  int* t835 = __args833;
  int* r836 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t834, t835);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v837, struct std___Rb_tree_node_int_* v838, int* v839) {
bb840: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this841;
  struct std___Rb_tree_node_int_* __node842;
  int* __args843;
  this841 = v837;
  __node842 = v838;
  __args843 = v839;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t844 = this841;
      struct std__allocator_std___Rb_tree_node_int__* r846 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t844);
      struct std___Rb_tree_node_int_* t847 = __node842;
      int* r848 = std___Rb_tree_node_int____M_valptr(t847);
      if (__cir_exc_active) {
        goto cir_try_dispatch845;
      }
      int* t849 = __args843;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r846, r848, t849);
    cir_try_dispatch845: ;
    if (__cir_exc_active) {
    {
      int ca_tok850 = 0;
      void* ca_exn851 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t852 = __node842;
        struct std___Rb_tree_node_int_* t853 = __node842;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t844, t853);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v854, int* v855) {
bb856: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this857;
  int* __args858;
  struct std___Rb_tree_node_int_* __retval859;
  struct std___Rb_tree_node_int_* __tmp860;
  this857 = v854;
  __args858 = v855;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t861 = this857;
  struct std___Rb_tree_node_int_* r862 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t861);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp860 = r862;
  struct std___Rb_tree_node_int_* t863 = __tmp860;
  int* t864 = __args858;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t861, t863, t864);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t865 = __tmp860;
  __retval859 = t865;
  struct std___Rb_tree_node_int_* t866 = __retval859;
  return t866;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v867, int* v868) {
bb869: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this870;
  int* __arg871;
  struct std___Rb_tree_node_int_* __retval872;
  this870 = v867;
  __arg871 = v868;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t873 = this870;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t874 = t873->_M_t;
  int* t875 = __arg871;
  struct std___Rb_tree_node_int_* r876 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t874, t875);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval872 = r876;
  struct std___Rb_tree_node_int_* t877 = __retval872;
  return t877;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v878, struct std___Rb_tree_node_base* v879, struct std___Rb_tree_node_base* v880, struct std___Rb_tree_node_base* v881) {
bb882: ;
  _Bool __insert_left883;
  struct std___Rb_tree_node_base* __x884;
  struct std___Rb_tree_node_base* __p885;
  struct std___Rb_tree_node_base* __header886;
  __insert_left883 = v878;
  __x884 = v879;
  __p885 = v880;
  __header886 = v881;
  _Bool t887 = __insert_left883;
  struct std___Rb_tree_node_base* t888 = __x884;
  struct std___Rb_tree_node_base* t889 = __p885;
  struct std___Rb_tree_node_base* t890 = __header886;
  std___Rb_tree_insert_and_rebalance(t887, t888, t889, t890);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v891, struct std___Rb_tree_node_base* v892, struct std___Rb_tree_node_base* v893, int* v894, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v895) {
bb896: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this897;
  struct std___Rb_tree_node_base* __x898;
  struct std___Rb_tree_node_base* __p899;
  int* __v900;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen901;
  struct std___Rb_tree_iterator_int_ __retval902;
  _Bool __insert_left903;
  struct std___Rb_tree_node_base* __z904;
  this897 = v891;
  __x898 = v892;
  __p899 = v893;
  __v900 = v894;
  __node_gen901 = v895;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t905 = this897;
  struct std___Rb_tree_node_base* t906 = __x898;
  _Bool cast907 = (_Bool)t906;
  _Bool ternary908;
  if (cast907) {
    _Bool c909 = 1;
    ternary908 = (_Bool)c909;
  } else {
    struct std___Rb_tree_node_base* t910 = __p899;
    struct std___Rb_tree_node_base* r911 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t905);
    _Bool c912 = ((t910 == r911)) ? 1 : 0;
    ternary908 = (_Bool)c912;
  }
  _Bool ternary913;
  if (ternary908) {
    _Bool c914 = 1;
    ternary913 = (_Bool)c914;
  } else {
    struct std___Identity_int_ ref_tmp0915;
    struct std___Rb_tree_key_compare_std__less_int__* base916 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t905->_M_impl) + 0);
    struct std__less_int_* cast917 = (struct std__less_int_*)base916;
    int* t918 = __v900;
    int* r919 = std___Identity_int___operator___int___const(&ref_tmp0915, t918);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t920 = __p899;
    int* r921 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t920);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r922 = std__less_int___operator___int_const___int_const___const(cast917, r919, r921);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary913 = (_Bool)r922;
  }
  __insert_left903 = ternary913;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t923 = __node_gen901;
  int* t924 = __v900;
  struct std___Rb_tree_node_int_* r925 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t923, t924);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base926 = (struct std___Rb_tree_node_base*)((char *)r925 + 0);
  struct std___Rb_tree_node_base* r927 = std___Rb_tree_node_base___M_base_ptr___const(base926);
  __z904 = r927;
  _Bool t928 = __insert_left903;
  struct std___Rb_tree_node_base* t929 = __z904;
  struct std___Rb_tree_node_base* t930 = __p899;
  struct std___Rb_tree_header* base931 = (struct std___Rb_tree_header*)((char *)&(t905->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t928, t929, t930, &base931->_M_header);
  struct std___Rb_tree_header* base932 = (struct std___Rb_tree_header*)((char *)&(t905->_M_impl) + 8);
  unsigned long t933 = base932->_M_node_count;
  unsigned long u934 = t933 + 1;
  base932->_M_node_count = u934;
  struct std___Rb_tree_node_base* t935 = __z904;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval902, t935);
  struct std___Rb_tree_iterator_int_ t936 = __retval902;
  return t936;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v937, struct std___Rb_tree_node_base* v938) {
bb939: ;
  struct std___Rb_tree_iterator_int_* this940;
  struct std___Rb_tree_node_base* __x941;
  this940 = v937;
  __x941 = v938;
  struct std___Rb_tree_iterator_int_* t942 = this940;
  struct std___Rb_tree_node_base* t943 = __x941;
  t942->_M_node = t943;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v944, struct std___Rb_tree_const_iterator_int_ v945, int* v946, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v947) {
bb948: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this949;
  struct std___Rb_tree_const_iterator_int_ __position950;
  int* __v951;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen952;
  struct std___Rb_tree_iterator_int_ __retval953;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res954;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0955;
  struct std___Identity_int_ ref_tmp0956;
  this949 = v944;
  __position950 = v945;
  __v951 = v946;
  __node_gen952 = v947;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t957 = this949;
  agg_tmp0955 = __position950; // copy
  int* t958 = __v951;
  int* r959 = std___Identity_int___operator___int___const(&ref_tmp0956, t958);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t960 = agg_tmp0955;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r961 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t957, t960, r959);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res954 = r961;
    struct std___Rb_tree_node_base* t962 = __res954.second;
    _Bool cast963 = (_Bool)t962;
    if (cast963) {
      struct std___Rb_tree_node_base* t964 = __res954.first;
      struct std___Rb_tree_node_base* t965 = __res954.second;
      int* t966 = __v951;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t967 = __node_gen952;
      struct std___Rb_tree_iterator_int_ r968 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t957, t964, t965, t966, t967);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval953 = r968;
      struct std___Rb_tree_iterator_int_ t969 = __retval953;
      return t969;
    }
  struct std___Rb_tree_node_base* t970 = __res954.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval953, t970);
  struct std___Rb_tree_iterator_int_ t971 = __retval953;
  return t971;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v972) {
bb973: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this974;
  struct std___Rb_tree_iterator_int_ __retval975;
  this974 = v972;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t976 = this974;
  struct std___Rb_tree_node_base* r977 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t976);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval975, r977);
  struct std___Rb_tree_iterator_int_ t978 = __retval975;
  return t978;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v979, struct std___Rb_tree_iterator_int_* v980) {
bb981: ;
  struct std___Rb_tree_const_iterator_int_* this982;
  struct std___Rb_tree_iterator_int_* __it983;
  this982 = v979;
  __it983 = v980;
  struct std___Rb_tree_const_iterator_int_* t984 = this982;
  struct std___Rb_tree_iterator_int_* t985 = __it983;
  struct std___Rb_tree_node_base* t986 = t985->_M_node;
  t984->_M_node = t986;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v987, int* v988, int* v989) {
bb990: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this991;
  int* __first992;
  int* __last993;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an994;
  this991 = v987;
  __first992 = v988;
  __last993 = v989;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t995 = this991;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an994, t995);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp0996;
    struct std___Rb_tree_iterator_int_ ref_tmp0997;
    struct std___Rb_tree_iterator_int_ agg_tmp1998;
    while (1) {
      int* t1000 = __first992;
      int* t1001 = __last993;
      _Bool c1002 = ((t1000 != t1001)) ? 1 : 0;
      if (!c1002) break;
      struct std___Rb_tree_iterator_int_ r1003 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t995);
      ref_tmp0997 = r1003;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp0996, &ref_tmp0997);
      int* t1004 = __first992;
      struct std___Rb_tree_const_iterator_int_ t1005 = agg_tmp0996;
      struct std___Rb_tree_iterator_int_ r1006 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t995, t1005, t1004, &__an994);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp1998 = r1006;
    for_step999: ;
      int* t1007 = __first992;
      int c1008 = 1;
      int* ptr1009 = &(t1007)[c1008];
      __first992 = ptr1009;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1010) {
bb1011: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1012;
  this1012 = v1010;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1013 = this1012;
  struct std__allocator_std___Rb_tree_node_int__* base1014 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1013 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1014);
    struct std___Rb_tree_key_compare_std__less_int__* base1015 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1013 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1015);
    struct std___Rb_tree_header* base1016 = (struct std___Rb_tree_header*)((char *)t1013 + 8);
    std___Rb_tree_header___Rb_tree_header(base1016);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1017) {
bb1018: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1019;
  this1019 = v1017;
  struct std____new_allocator_std___Rb_tree_node_int__* t1020 = this1019;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1021) {
bb1022: ;
  struct std__allocator_std___Rb_tree_node_int__* this1023;
  this1023 = v1021;
  struct std__allocator_std___Rb_tree_node_int__* t1024 = this1023;
  struct std____new_allocator_std___Rb_tree_node_int__* base1025 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1024 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1025);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1026) {
bb1027: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1028;
  this1028 = v1026;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1029) {
bb1030: ;
  struct std___Rb_tree_header* this1031;
  this1031 = v1029;
  struct std___Rb_tree_header* t1032 = this1031;
  struct std___Rb_tree_node_base* c1033 = ((void*)0);
  t1032->_M_header._M_parent = c1033;
  t1032->_M_header._M_left = &t1032->_M_header;
  t1032->_M_header._M_right = &t1032->_M_header;
  unsigned long c1034 = 0;
  t1032->_M_node_count = c1034;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1035) {
bb1036: ;
  struct std___Rb_tree_header* this1037;
  this1037 = v1035;
  struct std___Rb_tree_header* t1038 = this1037;
  unsigned int c1039 = 0;
  t1038->_M_header._M_color = c1039;
  std___Rb_tree_header___M_reset(t1038);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v1040, struct std___Rb_tree_const_iterator_int_* v1041) {
bb1042: ;
  struct std___Rb_tree_const_iterator_int_* __x1043;
  struct std___Rb_tree_const_iterator_int_* __y1044;
  _Bool __retval1045;
  __x1043 = v1040;
  __y1044 = v1041;
  struct std___Rb_tree_const_iterator_int_* t1046 = __x1043;
  struct std___Rb_tree_node_base* t1047 = t1046->_M_node;
  struct std___Rb_tree_const_iterator_int_* t1048 = __y1044;
  struct std___Rb_tree_node_base* t1049 = t1048->_M_node;
  _Bool c1050 = ((t1047 == t1049)) ? 1 : 0;
  __retval1045 = c1050;
  _Bool t1051 = __retval1045;
  return t1051;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1052, int* v1053) {
bb1054: ;
  int* __location1055;
  int* __args1056;
  int* __retval1057;
  void* __loc1058;
  __location1055 = v1052;
  __args1056 = v1053;
  int* t1059 = __location1055;
  void* cast1060 = (void*)t1059;
  __loc1058 = cast1060;
    void* t1061 = __loc1058;
    int* cast1062 = (int*)t1061;
    int* t1063 = __args1056;
    int t1064 = *t1063;
    *cast1062 = t1064;
    __retval1057 = cast1062;
    int* t1065 = __retval1057;
    return t1065;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v1066, int* v1067, int* v1068) {
bb1069: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1070;
  int* __p1071;
  int* __args1072;
  __a1070 = v1066;
  __p1071 = v1067;
  __args1072 = v1068;
  int* t1073 = __p1071;
  int* t1074 = __args1072;
  int* r1075 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1073, t1074);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1076, struct std___Rb_tree_node_int_* v1077, int* v1078) {
bb1079: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1080;
  struct std___Rb_tree_node_int_* __node1081;
  int* __args1082;
  this1080 = v1076;
  __node1081 = v1077;
  __args1082 = v1078;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1083 = this1080;
      struct std__allocator_std___Rb_tree_node_int__* r1085 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1083);
      struct std___Rb_tree_node_int_* t1086 = __node1081;
      int* r1087 = std___Rb_tree_node_int____M_valptr(t1086);
      if (__cir_exc_active) {
        goto cir_try_dispatch1084;
      }
      int* t1088 = __args1082;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r1085, r1087, t1088);
    cir_try_dispatch1084: ;
    if (__cir_exc_active) {
    {
      int ca_tok1089 = 0;
      void* ca_exn1090 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1091 = __node1081;
        struct std___Rb_tree_node_int_* t1092 = __node1081;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1083, t1092);
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

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJRKiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1093, int* v1094) {
bb1095: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1096;
  int* __args1097;
  struct std___Rb_tree_node_int_* __retval1098;
  struct std___Rb_tree_node_int_* __tmp1099;
  this1096 = v1093;
  __args1097 = v1094;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1100 = this1096;
  struct std___Rb_tree_node_int_* r1101 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1100);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1099 = r1101;
  struct std___Rb_tree_node_int_* t1102 = __tmp1099;
  int* t1103 = __args1097;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t1100, t1102, t1103);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1104 = __tmp1099;
  __retval1098 = t1104;
  struct std___Rb_tree_node_int_* t1105 = __retval1098;
  return t1105;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1106, int* v1107) {
bb1108: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1109;
  int* __arg1110;
  struct std___Rb_tree_node_int_* __retval1111;
  this1109 = v1106;
  __arg1110 = v1107;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1112 = this1109;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1113 = t1112->_M_t;
  int* t1114 = __arg1110;
  struct std___Rb_tree_node_int_* r1115 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t1113, t1114);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1111 = r1115;
  struct std___Rb_tree_node_int_* t1116 = __retval1111;
  return t1116;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSD_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1117, struct std___Rb_tree_node_base* v1118, struct std___Rb_tree_node_base* v1119, int* v1120, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1121) {
bb1122: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1123;
  struct std___Rb_tree_node_base* __x1124;
  struct std___Rb_tree_node_base* __p1125;
  int* __v1126;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1127;
  struct std___Rb_tree_iterator_int_ __retval1128;
  _Bool __insert_left1129;
  struct std___Rb_tree_node_base* __z1130;
  this1123 = v1117;
  __x1124 = v1118;
  __p1125 = v1119;
  __v1126 = v1120;
  __node_gen1127 = v1121;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1131 = this1123;
  struct std___Rb_tree_node_base* t1132 = __x1124;
  _Bool cast1133 = (_Bool)t1132;
  _Bool ternary1134;
  if (cast1133) {
    _Bool c1135 = 1;
    ternary1134 = (_Bool)c1135;
  } else {
    struct std___Rb_tree_node_base* t1136 = __p1125;
    struct std___Rb_tree_node_base* r1137 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1131);
    _Bool c1138 = ((t1136 == r1137)) ? 1 : 0;
    ternary1134 = (_Bool)c1138;
  }
  _Bool ternary1139;
  if (ternary1134) {
    _Bool c1140 = 1;
    ternary1139 = (_Bool)c1140;
  } else {
    struct std___Identity_int_ ref_tmp01141;
    struct std___Rb_tree_key_compare_std__less_int__* base1142 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1131->_M_impl) + 0);
    struct std__less_int_* cast1143 = (struct std__less_int_*)base1142;
    int* t1144 = __v1126;
    int* r1145 = std___Identity_int___operator___int_const___const(&ref_tmp01141, t1144);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1146 = __p1125;
    int* r1147 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1146);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1148 = std__less_int___operator___int_const___int_const___const(cast1143, r1145, r1147);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1139 = (_Bool)r1148;
  }
  __insert_left1129 = ternary1139;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1149 = __node_gen1127;
  int* t1150 = __v1126;
  struct std___Rb_tree_node_int_* r1151 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t1149, t1150);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1152 = (struct std___Rb_tree_node_base*)((char *)r1151 + 0);
  struct std___Rb_tree_node_base* r1153 = std___Rb_tree_node_base___M_base_ptr___const(base1152);
  __z1130 = r1153;
  _Bool t1154 = __insert_left1129;
  struct std___Rb_tree_node_base* t1155 = __z1130;
  struct std___Rb_tree_node_base* t1156 = __p1125;
  struct std___Rb_tree_header* base1157 = (struct std___Rb_tree_header*)((char *)&(t1131->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1154, t1155, t1156, &base1157->_M_header);
  struct std___Rb_tree_header* base1158 = (struct std___Rb_tree_header*)((char *)&(t1131->_M_impl) + 8);
  unsigned long t1159 = base1158->_M_node_count;
  unsigned long u1160 = t1159 + 1;
  base1158->_M_node_count = u1160;
  struct std___Rb_tree_node_base* t1161 = __z1130;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1128, t1161);
  struct std___Rb_tree_iterator_int_ t1162 = __retval1128;
  return t1162;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1163, struct std___Rb_tree_const_iterator_int_ v1164, int* v1165, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1166) {
bb1167: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1168;
  struct std___Rb_tree_const_iterator_int_ __position1169;
  int* __v1170;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1171;
  struct std___Rb_tree_iterator_int_ __retval1172;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1173;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01174;
  struct std___Identity_int_ ref_tmp01175;
  this1168 = v1163;
  __position1169 = v1164;
  __v1170 = v1165;
  __node_gen1171 = v1166;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1176 = this1168;
  agg_tmp01174 = __position1169; // copy
  int* t1177 = __v1170;
  int* r1178 = std___Identity_int___operator___int_const___const(&ref_tmp01175, t1177);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1179 = agg_tmp01174;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1180 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1176, t1179, r1178);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1173 = r1180;
    struct std___Rb_tree_node_base* t1181 = __res1173.second;
    _Bool cast1182 = (_Bool)t1181;
    if (cast1182) {
      struct std___Rb_tree_node_base* t1183 = __res1173.first;
      struct std___Rb_tree_node_base* t1184 = __res1173.second;
      int* t1185 = __v1170;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1186 = __node_gen1171;
      struct std___Rb_tree_iterator_int_ r1187 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1176, t1183, t1184, t1185, t1186);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1172 = r1187;
      struct std___Rb_tree_iterator_int_ t1188 = __retval1172;
      return t1188;
    }
  struct std___Rb_tree_node_base* t1189 = __res1173.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1172, t1189);
  struct std___Rb_tree_iterator_int_ t1190 = __retval1172;
  return t1190;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v1191) {
bb1192: ;
  struct std___Rb_tree_const_iterator_int_* this1193;
  struct std___Rb_tree_const_iterator_int_* __retval1194;
  this1193 = v1191;
  struct std___Rb_tree_const_iterator_int_* t1195 = this1193;
  struct std___Rb_tree_node_base* t1196 = t1195->_M_node;
  struct std___Rb_tree_node_base* r1197 = std___Rb_tree_increment(t1196);
  t1195->_M_node = r1197;
  __retval1194 = t1195;
  struct std___Rb_tree_const_iterator_int_* t1198 = __retval1194;
  return t1198;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueISt23_Rb_tree_const_iteratorIiEEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeESA_SA_
void std__enable_if___same_value_type_std___Rb_tree_const_iterator_int_____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_std___Rb_tree_const_iterator_int___(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1199, struct std___Rb_tree_const_iterator_int_ v1200, struct std___Rb_tree_const_iterator_int_ v1201) {
bb1202: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1203;
  struct std___Rb_tree_const_iterator_int_ __first1204;
  struct std___Rb_tree_const_iterator_int_ __last1205;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1206;
  this1203 = v1199;
  __first1204 = v1200;
  __last1205 = v1201;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1207 = this1203;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1206, t1207);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01208;
    struct std___Rb_tree_iterator_int_ ref_tmp01209;
    struct std___Rb_tree_iterator_int_ agg_tmp11210;
    while (1) {
      _Bool r1212 = std__operator___2(&__first1204, &__last1205);
      _Bool u1213 = !r1212;
      if (!u1213) break;
      struct std___Rb_tree_iterator_int_ r1214 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1207);
      ref_tmp01209 = r1214;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01208, &ref_tmp01209);
      int* r1215 = std___Rb_tree_const_iterator_int___operator____const(&__first1204);
      struct std___Rb_tree_const_iterator_int_ t1216 = agg_tmp01208;
      struct std___Rb_tree_iterator_int_ r1217 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1207, t1216, r1215, &__an1206);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11210 = r1217;
    for_step1211: ;
      struct std___Rb_tree_const_iterator_int_* r1218 = std___Rb_tree_const_iterator_int___operator___2(&__first1204);
    }
  return;
}

