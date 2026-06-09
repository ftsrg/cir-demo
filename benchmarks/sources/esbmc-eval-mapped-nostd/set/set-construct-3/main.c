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
char _str[18] = "third.size() == 5";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-construct-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 50";
_Bool fncomp(int p0, int p1);
void std__set_int__std__less_int___std__allocator_int_____set_2(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std__set_int__std__less_int___std__allocator_int__* p1);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator_2(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator_2(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare_2(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);
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
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, unsigned long p1, void* p2);
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_clone_node_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p2);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
extern int __gxx_personality_v0();
struct std___Rb_tree_node_base* std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___S_minimum(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___S_maximum(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p2);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0, struct std__allocator_std___Rb_tree_node_int__* p1);
struct std__allocator_std___Rb_tree_node_int__ std__allocator_traits_std__allocator_std___Rb_tree_node_int_______select_on_container_copy_construction(struct std__allocator_std___Rb_tree_node_int__* p0);
struct std__allocator_std___Rb_tree_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_select_on_copy(struct std__allocator_std___Rb_tree_node_int__* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0, struct std____new_allocator_std___Rb_tree_node_int__* p1);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0, struct std__less_int_* p1);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* p0);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
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

// function: _Z6fncompii
_Bool fncomp(int v0, int v1) {
bb2:
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

// function: _ZNSt3setIiSt4lessIiESaIiEEC2Ev
void std__set_int__std__less_int___std__allocator_int_____set_2(struct std__set_int__std__less_int___std__allocator_int__* v10) {
bb11:
  struct std__set_int__std__less_int___std__allocator_int__* this12;
  this12 = v10;
  struct std__set_int__std__less_int___std__allocator_int__* t13 = this12;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_2(&t13->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v14) {
bb15:
  struct std___Rb_tree_const_iterator_int_* this16;
  this16 = v14;
  struct std___Rb_tree_const_iterator_int_* t17 = this16;
  struct std___Rb_tree_node_base* c18 = ((void*)0);
  t17->_M_node = c18;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v19, int* v20, int* v21) {
bb22:
  struct std__set_int__std__less_int___std__allocator_int__* this23;
  int* __first24;
  int* __last25;
  this23 = v19;
  __first24 = v20;
  __last25 = v21;
  struct std__set_int__std__less_int___std__allocator_int__* t26 = this23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c27 = {0};
  t26->_M_t = c27;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_2(&t26->_M_t);
    int* t28 = __first24;
    int* t29 = __last25;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t26->_M_t, t28, t29);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t26->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEEC2ERKS3_
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v30, struct std__set_int__std__less_int___std__allocator_int__* v31) {
bb32:
  struct std__set_int__std__less_int___std__allocator_int__* this33;
  struct std__set_int__std__less_int___std__allocator_int__* unnamed34;
  this33 = v30;
  unnamed34 = v31;
  struct std__set_int__std__less_int___std__allocator_int__* t35 = this33;
  struct std__set_int__std__less_int___std__allocator_int__* t36 = unnamed34;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t35->_M_t, &t36->_M_t);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v37) {
bb38:
  struct std__set_int__std__less_int___std__allocator_int__* this39;
  unsigned long __retval40;
  this39 = v37;
  struct std__set_int__std__less_int___std__allocator_int__* t41 = this39;
  unsigned long r42 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t41->_M_t);
  __retval40 = r42;
  unsigned long t43 = __retval40;
  return t43;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v44, struct std___Rb_tree_node_base* v45) {
bb46:
  struct std___Rb_tree_const_iterator_int_* this47;
  struct std___Rb_tree_node_base* __x48;
  this47 = v44;
  __x48 = v45;
  struct std___Rb_tree_const_iterator_int_* t49 = this47;
  struct std___Rb_tree_node_base* t50 = __x48;
  t49->_M_node = t50;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v51) {
bb52:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this53;
  struct std___Rb_tree_const_iterator_int_ __retval54;
  this53 = v51;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t55 = this53;
  struct std___Rb_tree_header* base56 = (struct std___Rb_tree_header*)((char *)&(t55->_M_impl) + 8);
  struct std___Rb_tree_node_base* t57 = base56->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval54, t57);
  struct std___Rb_tree_const_iterator_int_ t58 = __retval54;
  return t58;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v59) {
bb60:
  struct std__set_int__std__less_int___std__allocator_int__* this61;
  struct std___Rb_tree_const_iterator_int_ __retval62;
  this61 = v59;
  struct std__set_int__std__less_int___std__allocator_int__* t63 = this61;
  struct std___Rb_tree_const_iterator_int_ r64 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t63->_M_t);
  __retval62 = r64;
  struct std___Rb_tree_const_iterator_int_ t65 = __retval62;
  return t65;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v66, struct std___Rb_tree_const_iterator_int_* v67) {
bb68:
  struct std___Rb_tree_const_iterator_int_* this69;
  struct std___Rb_tree_const_iterator_int_* unnamed70;
  struct std___Rb_tree_const_iterator_int_* __retval71;
  this69 = v66;
  unnamed70 = v67;
  struct std___Rb_tree_const_iterator_int_* t72 = this69;
  struct std___Rb_tree_const_iterator_int_* t73 = unnamed70;
  struct std___Rb_tree_node_base* t74 = t73->_M_node;
  t72->_M_node = t74;
  __retval71 = t72;
  struct std___Rb_tree_const_iterator_int_* t75 = __retval71;
  return t75;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v76) {
bb77:
  struct std___Rb_tree_const_iterator_int_* this78;
  int* __retval79;
  this78 = v76;
  struct std___Rb_tree_const_iterator_int_* t80 = this78;
  struct std___Rb_tree_node_base* t81 = t80->_M_node;
  struct std___Rb_tree_node_int_* derived82 = ((t81) ? (struct std___Rb_tree_node_int_*)((char *)t81 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r83 = std___Rb_tree_node_int____M_valptr___const(derived82);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval79 = r83;
  int* t84 = __retval79;
  return t84;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v85) {
bb86:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this87;
  struct std___Rb_tree_const_iterator_int_ __retval88;
  this87 = v85;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t89 = this87;
  struct std___Rb_tree_node_base* r90 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t89);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval88, r90);
  struct std___Rb_tree_const_iterator_int_ t91 = __retval88;
  return t91;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v92) {
bb93:
  struct std__set_int__std__less_int___std__allocator_int__* this94;
  struct std___Rb_tree_const_iterator_int_ __retval95;
  this94 = v92;
  struct std__set_int__std__less_int___std__allocator_int__* t96 = this94;
  struct std___Rb_tree_const_iterator_int_ r97 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t96->_M_t);
  __retval95 = r97;
  struct std___Rb_tree_const_iterator_int_ t98 = __retval95;
  return t98;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v99, int v100) {
bb101:
  struct std___Rb_tree_const_iterator_int_* this102;
  int unnamed103;
  struct std___Rb_tree_const_iterator_int_ __retval104;
  this102 = v99;
  unnamed103 = v100;
  struct std___Rb_tree_const_iterator_int_* t105 = this102;
  __retval104 = *t105; // copy
  struct std___Rb_tree_node_base* t106 = t105->_M_node;
  struct std___Rb_tree_node_base* r107 = std___Rb_tree_decrement(t106);
  t105->_M_node = r107;
  struct std___Rb_tree_const_iterator_int_ t108 = __retval104;
  return t108;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v109) {
bb110:
  struct std__set_int__std__less_int___std__allocator_int__* this111;
  this111 = v109;
  struct std__set_int__std__less_int___std__allocator_int__* t112 = this111;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t112->_M_t);
  }
  return;
}

// function: main
int main() {
bb113:
  int __retval114;
  struct std__set_int__std__less_int___std__allocator_int__ first115;
  struct std___Rb_tree_const_iterator_int_ it116;
  int myints117[5];
  struct std__set_int__std__less_int___std__allocator_int__ second118;
  struct std__set_int__std__less_int___std__allocator_int__ third119;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0120;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1121;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0122;
  int c123 = 0;
  __retval114 = c123;
  std__set_int__std__less_int___std__allocator_int_____set_2(&first115);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it116);
    // array copy
    __builtin_memcpy(myints117, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
    int* cast124 = (int*)&(myints117);
    int* cast125 = (int*)&(myints117);
    int c126 = 5;
    int* ptr127 = &(cast125)[c126];
    std__set_int__std__less_int___std__allocator_int_____set_int__(&second118, cast124, ptr127);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&first115);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      std__set_int__std__less_int___std__allocator_int_____set(&third119, &second118);
      if (__cir_exc_active) {
        {
          std__set_int__std__less_int___std__allocator_int______set(&second118);
        }
        {
          std__set_int__std__less_int___std__allocator_int______set(&first115);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        unsigned long r128 = std__set_int__std__less_int___std__allocator_int_____size___const(&third119);
        unsigned long c129 = 5;
        _Bool c130 = ((r128 == c129)) ? 1 : 0;
        if (c130) {
        } else {
          char* cast131 = (char*)&(_str);
          char* c132 = _str_1;
          unsigned int c133 = 30;
          char* cast134 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast131, c132, c133, cast134);
        }
        struct std___Rb_tree_const_iterator_int_ r135 = std__set_int__std__less_int___std__allocator_int_____begin___const(&third119);
        ref_tmp0120 = r135;
        struct std___Rb_tree_const_iterator_int_* r136 = std___Rb_tree_const_iterator_int___operator_(&it116, &ref_tmp0120);
        int* r137 = std___Rb_tree_const_iterator_int___operator____const(&it116);
        int t138 = *r137;
        int c139 = 10;
        _Bool c140 = ((t138 == c139)) ? 1 : 0;
        if (c140) {
        } else {
          char* cast141 = (char*)&(_str_2);
          char* c142 = _str_1;
          unsigned int c143 = 32;
          char* cast144 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast141, c142, c143, cast144);
        }
        struct std___Rb_tree_const_iterator_int_ r145 = std__set_int__std__less_int___std__allocator_int_____end___const(&third119);
        ref_tmp1121 = r145;
        struct std___Rb_tree_const_iterator_int_* r146 = std___Rb_tree_const_iterator_int___operator_(&it116, &ref_tmp1121);
        int c147 = 0;
        struct std___Rb_tree_const_iterator_int_ r148 = std___Rb_tree_const_iterator_int___operator__(&it116, c147);
        agg_tmp0122 = r148;
        int* r149 = std___Rb_tree_const_iterator_int___operator____const(&it116);
        int t150 = *r149;
        int c151 = 50;
        _Bool c152 = ((t150 == c151)) ? 1 : 0;
        if (c152) {
        } else {
          char* cast153 = (char*)&(_str_3);
          char* c154 = _str_1;
          unsigned int c155 = 35;
          char* cast156 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast153, c154, c155, cast156);
        }
        int c157 = 0;
        __retval114 = c157;
        int t158 = __retval114;
        int ret_val159 = t158;
        {
          std__set_int__std__less_int___std__allocator_int______set(&third119);
        }
        {
          std__set_int__std__less_int___std__allocator_int______set(&second118);
        }
        {
          std__set_int__std__less_int___std__allocator_int______set(&first115);
        }
        return ret_val159;
  int t160 = __retval114;
  return t160;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v161) {
bb162:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this163;
  this163 = v161;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t164 = this163;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl_2(&t164->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v165) {
bb166:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this167;
  this167 = v165;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t168 = this167;
    struct std___Rb_tree_node_int_* r169 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t168);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t168, r169);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t168->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t168->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v170) {
bb171:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this172;
  this172 = v170;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t173 = this172;
  struct std__allocator_std___Rb_tree_node_int__* base174 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t173 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator_2(base174);
    struct std___Rb_tree_key_compare_std__less_int__* base175 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t173 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare_2(base175);
    struct std___Rb_tree_header* base176 = (struct std___Rb_tree_header*)((char *)t173 + 8);
    std___Rb_tree_header___Rb_tree_header(base176);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v177) {
bb178:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this179;
  this179 = v177;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t180 = this179;
  {
    struct std__allocator_std___Rb_tree_node_int__* base181 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t180 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base181);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator_2(struct std____new_allocator_std___Rb_tree_node_int__* v182) {
bb183:
  struct std____new_allocator_std___Rb_tree_node_int__* this184;
  this184 = v182;
  struct std____new_allocator_std___Rb_tree_node_int__* t185 = this184;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator_2(struct std__allocator_std___Rb_tree_node_int__* v186) {
bb187:
  struct std__allocator_std___Rb_tree_node_int__* this188;
  this188 = v186;
  struct std__allocator_std___Rb_tree_node_int__* t189 = this188;
  struct std____new_allocator_std___Rb_tree_node_int__* base190 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t189 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator_2(base190);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare_2(struct std___Rb_tree_key_compare_std__less_int__* v191) {
bb192:
  struct std___Rb_tree_key_compare_std__less_int__* this193;
  this193 = v191;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v194) {
bb195:
  struct std___Rb_tree_header* this196;
  this196 = v194;
  struct std___Rb_tree_header* t197 = this196;
  struct std___Rb_tree_node_base* c198 = ((void*)0);
  t197->_M_header._M_parent = c198;
  t197->_M_header._M_left = &t197->_M_header;
  t197->_M_header._M_right = &t197->_M_header;
  unsigned long c199 = 0;
  t197->_M_node_count = c199;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v200) {
bb201:
  struct std___Rb_tree_header* this202;
  this202 = v200;
  struct std___Rb_tree_header* t203 = this202;
  unsigned int c204 = 0;
  t203->_M_header._M_color = c204;
  std___Rb_tree_header___M_reset(t203);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v205) {
bb206:
  struct std___Rb_tree_node_int_* this207;
  struct std___Rb_tree_node_int_* __retval208;
  this207 = v205;
  struct std___Rb_tree_node_int_* t209 = this207;
  __retval208 = t209;
  struct std___Rb_tree_node_int_* t210 = __retval208;
  return t210;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v211) {
bb212:
  struct std___Rb_tree_node_int_* __x213;
  struct std___Rb_tree_node_int_* __retval214;
  __x213 = v211;
  struct std___Rb_tree_node_int_* t215 = __x213;
  struct std___Rb_tree_node_base* base216 = (struct std___Rb_tree_node_base*)((char *)t215 + 0);
  struct std___Rb_tree_node_base* t217 = base216->_M_right;
  _Bool cast218 = (_Bool)t217;
  struct std___Rb_tree_node_int_* ternary219;
  if (cast218) {
    struct std___Rb_tree_node_int_* t220 = __x213;
    struct std___Rb_tree_node_base* base221 = (struct std___Rb_tree_node_base*)((char *)t220 + 0);
    struct std___Rb_tree_node_base* t222 = base221->_M_right;
    struct std___Rb_tree_node_int_* derived223 = (struct std___Rb_tree_node_int_*)((char *)t222 - 0);
    struct std___Rb_tree_node_int_* r224 = std___Rb_tree_node_int____M_node_ptr(derived223);
    ternary219 = (struct std___Rb_tree_node_int_*)r224;
  } else {
    struct std___Rb_tree_node_int_* c225 = ((void*)0);
    ternary219 = (struct std___Rb_tree_node_int_*)c225;
  }
  __retval214 = ternary219;
  struct std___Rb_tree_node_int_* t226 = __retval214;
  return t226;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v227) {
bb228:
  struct std___Rb_tree_node_int_* __x229;
  struct std___Rb_tree_node_int_* __retval230;
  __x229 = v227;
  struct std___Rb_tree_node_int_* t231 = __x229;
  struct std___Rb_tree_node_base* base232 = (struct std___Rb_tree_node_base*)((char *)t231 + 0);
  struct std___Rb_tree_node_base* t233 = base232->_M_left;
  _Bool cast234 = (_Bool)t233;
  struct std___Rb_tree_node_int_* ternary235;
  if (cast234) {
    struct std___Rb_tree_node_int_* t236 = __x229;
    struct std___Rb_tree_node_base* base237 = (struct std___Rb_tree_node_base*)((char *)t236 + 0);
    struct std___Rb_tree_node_base* t238 = base237->_M_left;
    struct std___Rb_tree_node_int_* derived239 = (struct std___Rb_tree_node_int_*)((char *)t238 - 0);
    struct std___Rb_tree_node_int_* r240 = std___Rb_tree_node_int____M_node_ptr(derived239);
    ternary235 = (struct std___Rb_tree_node_int_*)r240;
  } else {
    struct std___Rb_tree_node_int_* c241 = ((void*)0);
    ternary235 = (struct std___Rb_tree_node_int_*)c241;
  }
  __retval230 = ternary235;
  struct std___Rb_tree_node_int_* t242 = __retval230;
  return t242;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v243) {
bb244:
  int* __location245;
  __location245 = v243;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v246, int* v247) {
bb248:
  struct std__allocator_std___Rb_tree_node_int__* __a249;
  int* __p250;
  __a249 = v246;
  __p250 = v247;
  int* t251 = __p250;
  void_std__destroy_at_int_(t251);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v252) {
bb253:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this254;
  struct std__allocator_std___Rb_tree_node_int__* __retval255;
  this254 = v252;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t256 = this254;
  struct std__allocator_std___Rb_tree_node_int__* base257 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t256->_M_impl) + 0);
  __retval255 = base257;
  struct std__allocator_std___Rb_tree_node_int__* t258 = __retval255;
  return t258;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v259) {
bb260:
  struct __gnu_cxx____aligned_membuf_int_* this261;
  void* __retval262;
  this261 = v259;
  struct __gnu_cxx____aligned_membuf_int_* t263 = this261;
  void* cast264 = (void*)&(t263->_M_storage);
  __retval262 = cast264;
  void* t265 = __retval262;
  return t265;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v266) {
bb267:
  struct __gnu_cxx____aligned_membuf_int_* this268;
  int* __retval269;
  this268 = v266;
  struct __gnu_cxx____aligned_membuf_int_* t270 = this268;
  void* r271 = __gnu_cxx____aligned_membuf_int____M_addr(t270);
  int* cast272 = (int*)r271;
  __retval269 = cast272;
  int* t273 = __retval269;
  return t273;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v274) {
bb275:
  struct std___Rb_tree_node_int_* this276;
  int* __retval277;
  this276 = v274;
  struct std___Rb_tree_node_int_* t278 = this276;
  int* r279 = __gnu_cxx____aligned_membuf_int____M_ptr(&t278->_M_storage);
  __retval277 = r279;
  int* t280 = __retval277;
  return t280;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v281, struct std___Rb_tree_node_int_* v282) {
bb283:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this284;
  struct std___Rb_tree_node_int_* __p285;
  this284 = v281;
  __p285 = v282;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t286 = this284;
  struct std__allocator_std___Rb_tree_node_int__* r287 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t286);
  struct std___Rb_tree_node_int_* t288 = __p285;
  int* r289 = std___Rb_tree_node_int____M_valptr(t288);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r287, r289);
  struct std___Rb_tree_node_int_* t290 = __p285;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb291:
  _Bool __retval292;
    _Bool c293 = 0;
    __retval292 = c293;
    _Bool t294 = __retval292;
    return t294;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v295, struct std___Rb_tree_node_int_* v296, unsigned long v297) {
bb298:
  struct std____new_allocator_std___Rb_tree_node_int__* this299;
  struct std___Rb_tree_node_int_* __p300;
  unsigned long __n301;
  this299 = v295;
  __p300 = v296;
  __n301 = v297;
  struct std____new_allocator_std___Rb_tree_node_int__* t302 = this299;
    unsigned long c303 = 8;
    unsigned long c304 = 16;
    _Bool c305 = ((c303 > c304)) ? 1 : 0;
    if (c305) {
      struct std___Rb_tree_node_int_* t306 = __p300;
      void* cast307 = (void*)t306;
      unsigned long t308 = __n301;
      unsigned long c309 = 40;
      unsigned long b310 = t308 * c309;
      unsigned long c311 = 8;
      operator_delete_3(cast307, b310, c311);
      return;
    }
  struct std___Rb_tree_node_int_* t312 = __p300;
  void* cast313 = (void*)t312;
  unsigned long t314 = __n301;
  unsigned long c315 = 40;
  unsigned long b316 = t314 * c315;
  operator_delete_2(cast313, b316);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v317, struct std___Rb_tree_node_int_* v318, unsigned long v319) {
bb320:
  struct std__allocator_std___Rb_tree_node_int__* this321;
  struct std___Rb_tree_node_int_* __p322;
  unsigned long __n323;
  this321 = v317;
  __p322 = v318;
  __n323 = v319;
  struct std__allocator_std___Rb_tree_node_int__* t324 = this321;
    _Bool r325 = std____is_constant_evaluated();
    if (r325) {
      struct std___Rb_tree_node_int_* t326 = __p322;
      void* cast327 = (void*)t326;
      operator_delete(cast327);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base328 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t324 + 0);
  struct std___Rb_tree_node_int_* t329 = __p322;
  unsigned long t330 = __n323;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base328, t329, t330);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v331, struct std___Rb_tree_node_int_* v332, unsigned long v333) {
bb334:
  struct std__allocator_std___Rb_tree_node_int__* __a335;
  struct std___Rb_tree_node_int_* __p336;
  unsigned long __n337;
  __a335 = v331;
  __p336 = v332;
  __n337 = v333;
  struct std__allocator_std___Rb_tree_node_int__* t338 = __a335;
  struct std___Rb_tree_node_int_* t339 = __p336;
  unsigned long t340 = __n337;
  std__allocator_std___Rb_tree_node_int_____deallocate(t338, t339, t340);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v341, struct std___Rb_tree_node_int_* v342) {
bb343:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this344;
  struct std___Rb_tree_node_int_* __p345;
  this344 = v341;
  __p345 = v342;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t346 = this344;
  struct std__allocator_std___Rb_tree_node_int__* r347 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t346);
  struct std___Rb_tree_node_int_* t348 = __p345;
  unsigned long c349 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r347, t348, c349);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v350, struct std___Rb_tree_node_int_* v351) {
bb352:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this353;
  struct std___Rb_tree_node_int_* __p354;
  this353 = v350;
  __p354 = v351;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t355 = this353;
  struct std___Rb_tree_node_int_* t356 = __p354;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t355, t356);
  struct std___Rb_tree_node_int_* t357 = __p354;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t355, t357);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v358, struct std___Rb_tree_node_int_* v359) {
bb360:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this361;
  struct std___Rb_tree_node_int_* __x362;
  this361 = v358;
  __x362 = v359;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t363 = this361;
    while (1) {
      struct std___Rb_tree_node_int_* t364 = __x362;
      _Bool cast365 = (_Bool)t364;
      if (!cast365) break;
        struct std___Rb_tree_node_int_* __y366;
        struct std___Rb_tree_node_int_* t367 = __x362;
        struct std___Rb_tree_node_int_* r368 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t367);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t363, r368);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t369 = __x362;
        struct std___Rb_tree_node_int_* r370 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t369);
        if (__cir_exc_active) {
          return;
        }
        __y366 = r370;
        struct std___Rb_tree_node_int_* t371 = __x362;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t363, t371);
        struct std___Rb_tree_node_int_* t372 = __y366;
        __x362 = t372;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v373) {
bb374:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this375;
  struct std___Rb_tree_node_int_* __retval376;
  struct std___Rb_tree_node_base* __begin377;
  this375 = v373;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t378 = this375;
  struct std___Rb_tree_header* base379 = (struct std___Rb_tree_header*)((char *)&(t378->_M_impl) + 8);
  struct std___Rb_tree_node_base* t380 = base379->_M_header._M_parent;
  __begin377 = t380;
  struct std___Rb_tree_node_base* t381 = __begin377;
  _Bool cast382 = (_Bool)t381;
  struct std___Rb_tree_node_int_* ternary383;
  if (cast382) {
    struct std___Rb_tree_node_base* t384 = __begin377;
    struct std___Rb_tree_node_int_* derived385 = (struct std___Rb_tree_node_int_*)((char *)t384 - 0);
    struct std___Rb_tree_node_int_* r386 = std___Rb_tree_node_int____M_node_ptr(derived385);
    ternary383 = (struct std___Rb_tree_node_int_*)r386;
  } else {
    struct std___Rb_tree_node_int_* c387 = ((void*)0);
    ternary383 = (struct std___Rb_tree_node_int_*)c387;
  }
  __retval376 = ternary383;
  struct std___Rb_tree_node_int_* t388 = __retval376;
  return t388;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2ERKS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v389, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v390) {
bb391:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this392;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __x393;
  this392 = v389;
  __x393 = v390;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t394 = this392;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t395 = __x393;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t394->_M_impl, &t395->_M_impl);
  if (__cir_exc_active) {
    return;
  }
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t396 = __x393;
      struct std___Rb_tree_node_base* r397 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root___const(t396);
      _Bool cast398 = (_Bool)r397;
      if (cast398) {
        struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t399 = __x393;
        struct std___Rb_tree_node_base* r400 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy(t394, t399);
        if (__cir_exc_active) {
          {
            std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t394->_M_impl);
          }
          return;
        }
        struct std___Rb_tree_node_base** r401 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(t394);
        *r401 = r400;
      }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2ERKS7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v402, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v403) {
bb404:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this405;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* __x406;
  struct std__allocator_std___Rb_tree_node_int__ ref_tmp0407;
  this405 = v402;
  __x406 = v403;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t408 = this405;
  struct std__allocator_std___Rb_tree_node_int__* base409 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t408 + 0);
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t410 = __x406;
  struct std__allocator_std___Rb_tree_node_int__* base411 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t410 + 0);
  struct std__allocator_std___Rb_tree_node_int__ r412 = __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_select_on_copy(base411);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp0407 = r412;
    std__allocator_std___Rb_tree_node_int_____allocator(base409, &ref_tmp0407);
  {
    std__allocator_std___Rb_tree_node_int______allocator(&ref_tmp0407);
  }
    struct std___Rb_tree_key_compare_std__less_int__* base413 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t408 + 0);
    struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t414 = __x406;
    struct std___Rb_tree_key_compare_std__less_int__* base415 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t414 + 0);
    struct std__less_int_* cast416 = (struct std__less_int_*)base415;
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base413, cast416);
    if (__cir_exc_active) {
      {
        struct std__allocator_std___Rb_tree_node_int__* base417 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t408 + 0);
        std__allocator_std___Rb_tree_node_int______allocator(base417);
      }
      return;
    }
    struct std___Rb_tree_header* base418 = (struct std___Rb_tree_header*)((char *)t408 + 8);
    std___Rb_tree_header___Rb_tree_header(base418);
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_rootEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v419) {
bb420:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this421;
  struct std___Rb_tree_node_base* __retval422;
  this421 = v419;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t423 = this421;
  struct std___Rb_tree_header* base424 = (struct std___Rb_tree_header*)((char *)&(t423->_M_impl) + 8);
  struct std___Rb_tree_node_base* t425 = base424->_M_header._M_parent;
  __retval422 = t425;
  struct std___Rb_tree_node_base* t426 = __retval422;
  return t426;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v427, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v428) {
bb429:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this430;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t431;
  this430 = v427;
  __t431 = v428;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t432 = this430;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t433 = __t431;
  t432->_M_t = t433;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v434) {
bb435:
  struct std____new_allocator_std___Rb_tree_node_int__* this436;
  unsigned long __retval437;
  this436 = v434;
  struct std____new_allocator_std___Rb_tree_node_int__* t438 = this436;
  unsigned long c439 = 9223372036854775807;
  unsigned long c440 = 40;
  unsigned long b441 = c439 / c440;
  __retval437 = b441;
  unsigned long t442 = __retval437;
  return t442;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v443, unsigned long v444, void* v445) {
bb446:
  struct std____new_allocator_std___Rb_tree_node_int__* this447;
  unsigned long __n448;
  void* unnamed449;
  struct std___Rb_tree_node_int_* __retval450;
  this447 = v443;
  __n448 = v444;
  unnamed449 = v445;
  struct std____new_allocator_std___Rb_tree_node_int__* t451 = this447;
    unsigned long t452 = __n448;
    unsigned long r453 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t451);
    _Bool c454 = ((t452 > r453)) ? 1 : 0;
    if (c454) {
        unsigned long t455 = __n448;
        unsigned long c456 = -1;
        unsigned long c457 = 40;
        unsigned long b458 = c456 / c457;
        _Bool c459 = ((t455 > b458)) ? 1 : 0;
        if (c459) {
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
    unsigned long c460 = 8;
    unsigned long c461 = 16;
    _Bool c462 = ((c460 > c461)) ? 1 : 0;
    if (c462) {
      unsigned long __al463;
      unsigned long c464 = 8;
      __al463 = c464;
      unsigned long t465 = __n448;
      unsigned long c466 = 40;
      unsigned long b467 = t465 * c466;
      unsigned long t468 = __al463;
      void* r469 = operator_new_2(b467, t468);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast470 = (struct std___Rb_tree_node_int_*)r469;
      __retval450 = cast470;
      struct std___Rb_tree_node_int_* t471 = __retval450;
      return t471;
    }
  unsigned long t472 = __n448;
  unsigned long c473 = 40;
  unsigned long b474 = t472 * c473;
  void* r475 = operator_new(b474);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast476 = (struct std___Rb_tree_node_int_*)r475;
  __retval450 = cast476;
  struct std___Rb_tree_node_int_* t477 = __retval450;
  return t477;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v478, unsigned long v479) {
bb480:
  struct std__allocator_std___Rb_tree_node_int__* this481;
  unsigned long __n482;
  struct std___Rb_tree_node_int_* __retval483;
  this481 = v478;
  __n482 = v479;
  struct std__allocator_std___Rb_tree_node_int__* t484 = this481;
    _Bool r485 = std____is_constant_evaluated();
    if (r485) {
        unsigned long t486 = __n482;
        unsigned long c487 = 40;
        unsigned long ovr488;
        _Bool ovf489 = __builtin_mul_overflow(t486, c487, &ovr488);
        __n482 = ovr488;
        if (ovf489) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t490 = __n482;
      void* r491 = operator_new(t490);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast492 = (struct std___Rb_tree_node_int_*)r491;
      __retval483 = cast492;
      struct std___Rb_tree_node_int_* t493 = __retval483;
      return t493;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base494 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t484 + 0);
  unsigned long t495 = __n482;
  void* c496 = ((void*)0);
  struct std___Rb_tree_node_int_* r497 = std____new_allocator_std___Rb_tree_node_int_____allocate(base494, t495, c496);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval483 = r497;
  struct std___Rb_tree_node_int_* t498 = __retval483;
  return t498;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v499, unsigned long v500) {
bb501:
  struct std__allocator_std___Rb_tree_node_int__* __a502;
  unsigned long __n503;
  struct std___Rb_tree_node_int_* __retval504;
  __a502 = v499;
  __n503 = v500;
  struct std__allocator_std___Rb_tree_node_int__* t505 = __a502;
  unsigned long t506 = __n503;
  struct std___Rb_tree_node_int_* r507 = std__allocator_std___Rb_tree_node_int_____allocate(t505, t506);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval504 = r507;
  struct std___Rb_tree_node_int_* t508 = __retval504;
  return t508;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v509) {
bb510:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this511;
  struct std___Rb_tree_node_int_* __retval512;
  this511 = v509;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t513 = this511;
  struct std__allocator_std___Rb_tree_node_int__* r514 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t513);
  unsigned long c515 = 1;
  struct std___Rb_tree_node_int_* r516 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r514, c515);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval512 = r516;
  struct std___Rb_tree_node_int_* t517 = __retval512;
  return t517;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v518, int* v519) {
bb520:
  int* __location521;
  int* __args522;
  int* __retval523;
  void* __loc524;
  __location521 = v518;
  __args522 = v519;
  int* t525 = __location521;
  void* cast526 = (void*)t525;
  __loc524 = cast526;
    void* t527 = __loc524;
    int* cast528 = (int*)t527;
    int* t529 = __args522;
    int t530 = *t529;
    *cast528 = t530;
    __retval523 = cast528;
    int* t531 = __retval523;
    return t531;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v532, int* v533, int* v534) {
bb535:
  struct std__allocator_std___Rb_tree_node_int__* __a536;
  int* __p537;
  int* __args538;
  __a536 = v532;
  __p537 = v533;
  __args538 = v534;
  int* t539 = __p537;
  int* t540 = __args538;
  int* r541 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t539, t540);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v542, struct std___Rb_tree_node_int_* v543, int* v544) {
bb545:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this546;
  struct std___Rb_tree_node_int_* __node547;
  int* __args548;
  this546 = v542;
  __node547 = v543;
  __args548 = v544;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t549 = this546;
      struct std__allocator_std___Rb_tree_node_int__* r551 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t549);
      struct std___Rb_tree_node_int_* t552 = __node547;
      int* r553 = std___Rb_tree_node_int____M_valptr(t552);
      if (__cir_exc_active) {
        goto cir_try_dispatch550;
      }
      int* t554 = __args548;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r551, r553, t554);
    cir_try_dispatch550: ;
    if (__cir_exc_active) {
    {
      int ca_tok555 = 0;
      void* ca_exn556 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t557 = __node547;
        struct std___Rb_tree_node_int_* t558 = __node547;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t549, t558);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v559, int* v560) {
bb561:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this562;
  int* __args563;
  struct std___Rb_tree_node_int_* __retval564;
  struct std___Rb_tree_node_int_* __tmp565;
  this562 = v559;
  __args563 = v560;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t566 = this562;
  struct std___Rb_tree_node_int_* r567 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t566);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp565 = r567;
  struct std___Rb_tree_node_int_* t568 = __tmp565;
  int* t569 = __args563;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t566, t568, t569);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t570 = __tmp565;
  __retval564 = t570;
  struct std___Rb_tree_node_int_* t571 = __retval564;
  return t571;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v572, int* v573) {
bb574:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this575;
  int* __arg576;
  struct std___Rb_tree_node_int_* __retval577;
  this575 = v572;
  __arg576 = v573;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t578 = this575;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t579 = t578->_M_t;
  int* t580 = __arg576;
  struct std___Rb_tree_node_int_* r581 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t579, t580);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval577 = r581;
  struct std___Rb_tree_node_int_* t582 = __retval577;
  return t582;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_clone_nodeILb0ENS5_11_Alloc_nodeEEEPSt13_Rb_tree_nodeIiESA_RT0_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_clone_node_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v583, struct std___Rb_tree_node_int_* v584, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v585) {
bb586:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this587;
  struct std___Rb_tree_node_int_* __x588;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen589;
  struct std___Rb_tree_node_int_* __retval590;
  struct std___Rb_tree_node_int_* __tmp591;
  this587 = v583;
  __x588 = v584;
  __node_gen589 = v585;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t592 = this587;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t593 = __node_gen589;
  struct std___Rb_tree_node_int_* t594 = __x588;
  int* r595 = std___Rb_tree_node_int____M_valptr(t594);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* r596 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t593, r595);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp591 = r596;
  struct std___Rb_tree_node_int_* t597 = __x588;
  struct std___Rb_tree_node_base* base598 = (struct std___Rb_tree_node_base*)((char *)t597 + 0);
  unsigned int t599 = base598->_M_color;
  struct std___Rb_tree_node_int_* t600 = __tmp591;
  struct std___Rb_tree_node_base* base601 = (struct std___Rb_tree_node_base*)((char *)t600 + 0);
  base601->_M_color = t599;
  struct std___Rb_tree_node_base* c602 = ((void*)0);
  struct std___Rb_tree_node_int_* t603 = __tmp591;
  struct std___Rb_tree_node_base* base604 = (struct std___Rb_tree_node_base*)((char *)t603 + 0);
  base604->_M_right = c602;
  struct std___Rb_tree_node_int_* t605 = __tmp591;
  struct std___Rb_tree_node_base* base606 = (struct std___Rb_tree_node_base*)((char *)t605 + 0);
  base606->_M_left = c602;
  struct std___Rb_tree_node_int_* t607 = __tmp591;
  __retval590 = t607;
  struct std___Rb_tree_node_int_* t608 = __retval590;
  return t608;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v609) {
bb610:
  struct std___Rb_tree_node_base* this611;
  struct std___Rb_tree_node_base* __retval612;
  this611 = v609;
  struct std___Rb_tree_node_base* t613 = this611;
  __retval612 = t613;
  struct std___Rb_tree_node_base* t614 = __retval612;
  return t614;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyILb0ENS5_11_Alloc_nodeEEEPSt18_Rb_tree_node_basePSt13_Rb_tree_nodeIiES9_RT0_
struct std___Rb_tree_node_base* std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v615, struct std___Rb_tree_node_int_* v616, struct std___Rb_tree_node_base* v617, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v618) {
bb619:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this620;
  struct std___Rb_tree_node_int_* __x621;
  struct std___Rb_tree_node_base* __p622;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen623;
  struct std___Rb_tree_node_base* __retval624;
  struct std___Rb_tree_node_int_* __top625;
  struct std___Rb_tree_node_base* __top_base626;
  this620 = v615;
  __x621 = v616;
  __p622 = v617;
  __node_gen623 = v618;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t627 = this620;
  struct std___Rb_tree_node_int_* t628 = __x621;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t629 = __node_gen623;
  struct std___Rb_tree_node_int_* r630 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_clone_node_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t627, t628, t629);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
    return __cir_eh_ret;
  }
  __top625 = r630;
  struct std___Rb_tree_node_int_* t631 = __top625;
  struct std___Rb_tree_node_base* base632 = (struct std___Rb_tree_node_base*)((char *)t631 + 0);
  struct std___Rb_tree_node_base* r633 = std___Rb_tree_node_base___M_base_ptr___const(base632);
  __top_base626 = r633;
  struct std___Rb_tree_node_base* t634 = __p622;
  struct std___Rb_tree_node_int_* t635 = __top625;
  struct std___Rb_tree_node_base* base636 = (struct std___Rb_tree_node_base*)((char *)t635 + 0);
  base636->_M_parent = t634;
        struct std___Rb_tree_node_int_* t638 = __x621;
        struct std___Rb_tree_node_base* base639 = (struct std___Rb_tree_node_base*)((char *)t638 + 0);
        struct std___Rb_tree_node_base* t640 = base639->_M_right;
        _Bool cast641 = (_Bool)t640;
        if (cast641) {
          struct std___Rb_tree_node_int_* t642 = __x621;
          struct std___Rb_tree_node_int_* r643 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t642);
          struct std___Rb_tree_node_base* t644 = __top_base626;
          struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t645 = __node_gen623;
          struct std___Rb_tree_node_base* r646 = std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t627, r643, t644, t645);
          if (__cir_exc_active) {
            goto cir_try_dispatch637;
          }
          struct std___Rb_tree_node_int_* t647 = __top625;
          struct std___Rb_tree_node_base* base648 = (struct std___Rb_tree_node_base*)((char *)t647 + 0);
          base648->_M_right = r646;
        }
      struct std___Rb_tree_node_base* t649 = __top_base626;
      __p622 = t649;
      struct std___Rb_tree_node_int_* t650 = __x621;
      struct std___Rb_tree_node_int_* r651 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t650);
      if (__cir_exc_active) {
        goto cir_try_dispatch637;
      }
      __x621 = r651;
        while (1) {
          struct std___Rb_tree_node_int_* t652 = __x621;
          _Bool cast653 = (_Bool)t652;
          if (!cast653) break;
            struct std___Rb_tree_node_base* __y654;
            struct std___Rb_tree_node_int_* t655 = __x621;
            struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t656 = __node_gen623;
            struct std___Rb_tree_node_int_* r657 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_clone_node_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t627, t655, t656);
            if (__cir_exc_active) {
              goto cir_try_dispatch637;
            }
            struct std___Rb_tree_node_base* base658 = (struct std___Rb_tree_node_base*)((char *)r657 + 0);
            struct std___Rb_tree_node_base* r659 = std___Rb_tree_node_base___M_base_ptr___const(base658);
            __y654 = r659;
            struct std___Rb_tree_node_base* t660 = __y654;
            struct std___Rb_tree_node_base* t661 = __p622;
            t661->_M_left = t660;
            struct std___Rb_tree_node_base* t662 = __p622;
            struct std___Rb_tree_node_base* t663 = __y654;
            t663->_M_parent = t662;
              struct std___Rb_tree_node_int_* t664 = __x621;
              struct std___Rb_tree_node_base* base665 = (struct std___Rb_tree_node_base*)((char *)t664 + 0);
              struct std___Rb_tree_node_base* t666 = base665->_M_right;
              _Bool cast667 = (_Bool)t666;
              if (cast667) {
                struct std___Rb_tree_node_int_* t668 = __x621;
                struct std___Rb_tree_node_int_* r669 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t668);
                struct std___Rb_tree_node_base* t670 = __y654;
                struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t671 = __node_gen623;
                struct std___Rb_tree_node_base* r672 = std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t627, r669, t670, t671);
                if (__cir_exc_active) {
                  goto cir_try_dispatch637;
                }
                struct std___Rb_tree_node_base* t673 = __y654;
                t673->_M_right = r672;
              }
            struct std___Rb_tree_node_base* t674 = __y654;
            __p622 = t674;
            struct std___Rb_tree_node_int_* t675 = __x621;
            struct std___Rb_tree_node_int_* r676 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t675);
            if (__cir_exc_active) {
              goto cir_try_dispatch637;
            }
            __x621 = r676;
        }
    cir_try_dispatch637: ;
    if (__cir_exc_active) {
    {
      int ca_tok677 = 0;
      void* ca_exn678 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t679 = __top625;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t627, t679);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        { struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0; return __cir_eh_ret; }
        __builtin_unreachable();
    }
    }
  struct std___Rb_tree_node_base* t680 = __top_base626;
  __retval624 = t680;
  struct std___Rb_tree_node_base* t681 = __retval624;
  return t681;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v682) {
bb683:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this684;
  struct std___Rb_tree_node_base* __retval685;
  this684 = v682;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t686 = this684;
  struct std___Rb_tree_header* base687 = (struct std___Rb_tree_header*)((char *)&(t686->_M_impl) + 8);
  struct std___Rb_tree_node_base* r688 = std___Rb_tree_node_base___M_base_ptr___const(&base687->_M_header);
  __retval685 = r688;
  struct std___Rb_tree_node_base* t689 = __retval685;
  return t689;
}

// function: _ZNSt18_Rb_tree_node_base10_S_minimumEPS_
struct std___Rb_tree_node_base* std___Rb_tree_node_base___S_minimum(struct std___Rb_tree_node_base* v690) {
bb691:
  struct std___Rb_tree_node_base* __x692;
  struct std___Rb_tree_node_base* __retval693;
  __x692 = v690;
    while (1) {
      struct std___Rb_tree_node_base* t694 = __x692;
      struct std___Rb_tree_node_base* t695 = t694->_M_left;
      struct std___Rb_tree_node_base* c696 = ((void*)0);
      _Bool c697 = ((t695 != c696)) ? 1 : 0;
      if (!c697) break;
      struct std___Rb_tree_node_base* t698 = __x692;
      struct std___Rb_tree_node_base* t699 = t698->_M_left;
      __x692 = t699;
    }
  struct std___Rb_tree_node_base* t700 = __x692;
  __retval693 = t700;
  struct std___Rb_tree_node_base* t701 = __retval693;
  return t701;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v702) {
bb703:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this704;
  struct std___Rb_tree_node_base** __retval705;
  this704 = v702;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t706 = this704;
  struct std___Rb_tree_header* base707 = (struct std___Rb_tree_header*)((char *)&(t706->_M_impl) + 8);
  __retval705 = &base707->_M_header._M_left;
  struct std___Rb_tree_node_base** t708 = __retval705;
  return t708;
}

// function: _ZNSt18_Rb_tree_node_base10_S_maximumEPS_
struct std___Rb_tree_node_base* std___Rb_tree_node_base___S_maximum(struct std___Rb_tree_node_base* v709) {
bb710:
  struct std___Rb_tree_node_base* __x711;
  struct std___Rb_tree_node_base* __retval712;
  __x711 = v709;
    while (1) {
      struct std___Rb_tree_node_base* t713 = __x711;
      struct std___Rb_tree_node_base* t714 = t713->_M_right;
      struct std___Rb_tree_node_base* c715 = ((void*)0);
      _Bool c716 = ((t714 != c715)) ? 1 : 0;
      if (!c716) break;
      struct std___Rb_tree_node_base* t717 = __x711;
      struct std___Rb_tree_node_base* t718 = t717->_M_right;
      __x711 = t718;
    }
  struct std___Rb_tree_node_base* t719 = __x711;
  __retval712 = t719;
  struct std___Rb_tree_node_base* t720 = __retval712;
  return t720;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v721) {
bb722:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this723;
  struct std___Rb_tree_node_base** __retval724;
  this723 = v721;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t725 = this723;
  struct std___Rb_tree_header* base726 = (struct std___Rb_tree_header*)((char *)&(t725->_M_impl) + 8);
  __retval724 = &base726->_M_header._M_right;
  struct std___Rb_tree_node_base** t727 = __retval724;
  return t727;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyILb0ENS5_11_Alloc_nodeEEEPSt18_Rb_tree_node_baseRKS5_RT0_
struct std___Rb_tree_node_base* std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v728, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v729, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v730) {
bb731:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this732;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __x733;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __gen734;
  struct std___Rb_tree_node_base* __retval735;
  struct std___Rb_tree_node_base* __root736;
  this732 = v728;
  __x733 = v729;
  __gen734 = v730;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t737 = this732;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t738 = __x733;
  struct std___Rb_tree_node_int_* r739 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t738);
  struct std___Rb_tree_node_base* r740 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t737);
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t741 = __gen734;
  struct std___Rb_tree_node_base* r742 = std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t737, r739, r740, t741);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
    return __cir_eh_ret;
  }
  __root736 = r742;
  struct std___Rb_tree_node_base* t743 = __root736;
  struct std___Rb_tree_node_base* r744 = std___Rb_tree_node_base___S_minimum(t743);
  struct std___Rb_tree_node_base** r745 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t737);
  *r745 = r744;
  struct std___Rb_tree_node_base* t746 = __root736;
  struct std___Rb_tree_node_base* r747 = std___Rb_tree_node_base___S_maximum(t746);
  struct std___Rb_tree_node_base** r748 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t737);
  *r748 = r747;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t749 = __x733;
  struct std___Rb_tree_header* base750 = (struct std___Rb_tree_header*)((char *)&(t749->_M_impl) + 8);
  unsigned long t751 = base750->_M_node_count;
  struct std___Rb_tree_header* base752 = (struct std___Rb_tree_header*)((char *)&(t737->_M_impl) + 8);
  base752->_M_node_count = t751;
  struct std___Rb_tree_node_base* t753 = __root736;
  __retval735 = t753;
  struct std___Rb_tree_node_base* t754 = __retval735;
  return t754;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyERKS5_
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v755, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v756) {
bb757:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this758;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __x759;
  struct std___Rb_tree_node_base* __retval760;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an761;
  this758 = v755;
  __x759 = v756;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t762 = this758;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an761, t762);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t763 = __x759;
  struct std___Rb_tree_node_base* r764 = std___Rb_tree_node_base__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_copy_false__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__2(t762, t763, &__an761);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
    return __cir_eh_ret;
  }
  __retval760 = r764;
  struct std___Rb_tree_node_base* t765 = __retval760;
  return t765;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_rootEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_root(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v766) {
bb767:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this768;
  struct std___Rb_tree_node_base** __retval769;
  this768 = v766;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t770 = this768;
  struct std___Rb_tree_header* base771 = (struct std___Rb_tree_header*)((char *)&(t770->_M_impl) + 8);
  __retval769 = &base771->_M_header._M_parent;
  struct std___Rb_tree_node_base** t772 = __retval769;
  return t772;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2ERKS1_
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v773, struct std__allocator_std___Rb_tree_node_int__* v774) {
bb775:
  struct std__allocator_std___Rb_tree_node_int__* this776;
  struct std__allocator_std___Rb_tree_node_int__* __a777;
  this776 = v773;
  __a777 = v774;
  struct std__allocator_std___Rb_tree_node_int__* t778 = this776;
  struct std____new_allocator_std___Rb_tree_node_int__* base779 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t778 + 0);
  struct std__allocator_std___Rb_tree_node_int__* t780 = __a777;
  struct std____new_allocator_std___Rb_tree_node_int__* base781 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t780 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base779, base781);
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE37select_on_container_copy_constructionERKS2_
struct std__allocator_std___Rb_tree_node_int__ std__allocator_traits_std__allocator_std___Rb_tree_node_int_______select_on_container_copy_construction(struct std__allocator_std___Rb_tree_node_int__* v782) {
bb783:
  struct std__allocator_std___Rb_tree_node_int__* __rhs784;
  struct std__allocator_std___Rb_tree_node_int__ __retval785;
  __rhs784 = v782;
  struct std__allocator_std___Rb_tree_node_int__* t786 = __rhs784;
  std__allocator_std___Rb_tree_node_int_____allocator(&__retval785, t786);
  struct std__allocator_std___Rb_tree_node_int__ t787 = __retval785;
  return t787;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeIiEES2_E17_S_select_on_copyERKS3_
struct std__allocator_std___Rb_tree_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___Rb_tree_node_int_____std___Rb_tree_node_int______S_select_on_copy(struct std__allocator_std___Rb_tree_node_int__* v788) {
bb789:
  struct std__allocator_std___Rb_tree_node_int__* __a790;
  struct std__allocator_std___Rb_tree_node_int__ __retval791;
  __a790 = v788;
  struct std__allocator_std___Rb_tree_node_int__* t792 = __a790;
  struct std__allocator_std___Rb_tree_node_int__ r793 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______select_on_container_copy_construction(t792);
  if (__cir_exc_active) {
    struct std__allocator_std___Rb_tree_node_int__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval791 = r793;
  struct std__allocator_std___Rb_tree_node_int__ t794 = __retval791;
  return t794;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2ERKS2_
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v795, struct std____new_allocator_std___Rb_tree_node_int__* v796) {
bb797:
  struct std____new_allocator_std___Rb_tree_node_int__* this798;
  struct std____new_allocator_std___Rb_tree_node_int__* unnamed799;
  this798 = v795;
  unnamed799 = v796;
  struct std____new_allocator_std___Rb_tree_node_int__* t800 = this798;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v801) {
bb802:
  struct std__allocator_std___Rb_tree_node_int__* this803;
  this803 = v801;
  struct std__allocator_std___Rb_tree_node_int__* t804 = this803;
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2ERKS1_
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v805, struct std__less_int_* v806) {
bb807:
  struct std___Rb_tree_key_compare_std__less_int__* this808;
  struct std__less_int_* __comp809;
  this808 = v805;
  __comp809 = v806;
  struct std__less_int_* t810 = __comp809;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v811) {
bb812:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this813;
  unsigned long __retval814;
  this813 = v811;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t815 = this813;
  struct std___Rb_tree_header* base816 = (struct std___Rb_tree_header*)((char *)&(t815->_M_impl) + 8);
  unsigned long t817 = base816->_M_node_count;
  __retval814 = t817;
  unsigned long t818 = __retval814;
  return t818;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v819, int* v820, int* v821) {
bb822:
  struct std__less_int_* this823;
  int* __x824;
  int* __y825;
  _Bool __retval826;
  this823 = v819;
  __x824 = v820;
  __y825 = v821;
  struct std__less_int_* t827 = this823;
  int* t828 = __x824;
  int t829 = *t828;
  int* t830 = __y825;
  int t831 = *t830;
  _Bool c832 = ((t829 < t831)) ? 1 : 0;
  __retval826 = c832;
  _Bool t833 = __retval826;
  return t833;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v834, int* v835) {
bb836:
  struct std___Identity_int_* this837;
  int* __x838;
  int* __retval839;
  this837 = v834;
  __x838 = v835;
  struct std___Identity_int_* t840 = this837;
  int* t841 = __x838;
  __retval839 = t841;
  int* t842 = __retval839;
  return t842;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v843) {
bb844:
  struct __gnu_cxx____aligned_membuf_int_* this845;
  void* __retval846;
  this845 = v843;
  struct __gnu_cxx____aligned_membuf_int_* t847 = this845;
  void* cast848 = (void*)&(t847->_M_storage);
  __retval846 = cast848;
  void* t849 = __retval846;
  return t849;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v850) {
bb851:
  struct __gnu_cxx____aligned_membuf_int_* this852;
  int* __retval853;
  this852 = v850;
  struct __gnu_cxx____aligned_membuf_int_* t854 = this852;
  void* r855 = __gnu_cxx____aligned_membuf_int____M_addr___const(t854);
  int* cast856 = (int*)r855;
  __retval853 = cast856;
  int* t857 = __retval853;
  return t857;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v858) {
bb859:
  struct std___Rb_tree_node_int_* this860;
  int* __retval861;
  this860 = v858;
  struct std___Rb_tree_node_int_* t862 = this860;
  int* r863 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t862->_M_storage);
  __retval861 = r863;
  int* t864 = __retval861;
  return t864;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v865) {
bb866:
  struct std___Rb_tree_node_int_* __node867;
  int* __retval868;
  struct std___Identity_int_ ref_tmp0869;
  __node867 = v865;
  struct std___Rb_tree_node_int_* t870 = __node867;
  int* r871 = std___Rb_tree_node_int____M_valptr___const(t870);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r872 = std___Identity_int___operator___int_const___const(&ref_tmp0869, r871);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval868 = r872;
  int* t873 = __retval868;
  return t873;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v874) {
bb875:
  struct std___Rb_tree_node_base* __x876;
  int* __retval877;
  __x876 = v874;
  struct std___Rb_tree_node_base* t878 = __x876;
  struct std___Rb_tree_node_int_* derived879 = (struct std___Rb_tree_node_int_*)((char *)t878 - 0);
  int* r880 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived879);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval877 = r880;
  int* t881 = __retval877;
  return t881;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v882, struct std___Rb_tree_node_base** v883, struct std___Rb_tree_node_base** v884) {
bb885:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this886;
  struct std___Rb_tree_node_base** __x887;
  struct std___Rb_tree_node_base** __y888;
  this886 = v882;
  __x887 = v883;
  __y888 = v884;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t889 = this886;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base890 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t889 + 0);
  struct std___Rb_tree_node_base** t891 = __x887;
  struct std___Rb_tree_node_base* t892 = *t891;
  t889->first = t892;
  struct std___Rb_tree_node_base** t893 = __y888;
  struct std___Rb_tree_node_base* t894 = *t893;
  t889->second = t894;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v895) {
bb896:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this897;
  struct std___Rb_tree_node_base* __retval898;
  this897 = v895;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t899 = this897;
  struct std___Rb_tree_header* base900 = (struct std___Rb_tree_header*)((char *)&(t899->_M_impl) + 8);
  struct std___Rb_tree_node_base* t901 = base900->_M_header._M_parent;
  __retval898 = t901;
  struct std___Rb_tree_node_base* t902 = __retval898;
  return t902;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v903) {
bb904:
  struct std___Rb_tree_node_base* __x905;
  struct std___Rb_tree_node_base* __retval906;
  __x905 = v903;
  struct std___Rb_tree_node_base* t907 = __x905;
  struct std___Rb_tree_node_base* t908 = t907->_M_left;
  __retval906 = t908;
  struct std___Rb_tree_node_base* t909 = __retval906;
  return t909;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v910, struct std___Rb_tree_iterator_int_* v911) {
bb912:
  struct std___Rb_tree_iterator_int_* __x913;
  struct std___Rb_tree_iterator_int_* __y914;
  _Bool __retval915;
  __x913 = v910;
  __y914 = v911;
  struct std___Rb_tree_iterator_int_* t916 = __x913;
  struct std___Rb_tree_node_base* t917 = t916->_M_node;
  struct std___Rb_tree_iterator_int_* t918 = __y914;
  struct std___Rb_tree_node_base* t919 = t918->_M_node;
  _Bool c920 = ((t917 == t919)) ? 1 : 0;
  __retval915 = c920;
  _Bool t921 = __retval915;
  return t921;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v922) {
bb923:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this924;
  struct std___Rb_tree_iterator_int_ __retval925;
  this924 = v922;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t926 = this924;
  struct std___Rb_tree_header* base927 = (struct std___Rb_tree_header*)((char *)&(t926->_M_impl) + 8);
  struct std___Rb_tree_node_base* t928 = base927->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval925, t928);
  struct std___Rb_tree_iterator_int_ t929 = __retval925;
  return t929;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v930, int* v931) {
bb932:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this933;
  int* __k934;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval935;
  struct std___Rb_tree_node_base* __x936;
  struct std___Rb_tree_node_base* __y937;
  _Bool __comp938;
  struct std___Rb_tree_iterator_int_ __j939;
  struct std___Rb_tree_node_base* ref_tmp1940;
  this933 = v930;
  __k934 = v931;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t941 = this933;
  struct std___Rb_tree_node_base* r942 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t941);
  __x936 = r942;
  struct std___Rb_tree_node_base* r943 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t941);
  __y937 = r943;
  _Bool c944 = 1;
  __comp938 = c944;
    while (1) {
      struct std___Rb_tree_node_base* t945 = __x936;
      _Bool cast946 = (_Bool)t945;
      if (!cast946) break;
        struct std___Rb_tree_node_base* t947 = __x936;
        __y937 = t947;
        struct std___Rb_tree_key_compare_std__less_int__* base948 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t941->_M_impl) + 0);
        struct std__less_int_* cast949 = (struct std__less_int_*)base948;
        int* t950 = __k934;
        struct std___Rb_tree_node_base* t951 = __x936;
        int* r952 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t951);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r953 = std__less_int___operator___int_const___int_const___const(cast949, t950, r952);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp938 = r953;
        _Bool t954 = __comp938;
        struct std___Rb_tree_node_base* ternary955;
        if (t954) {
          struct std___Rb_tree_node_base* t956 = __x936;
          struct std___Rb_tree_node_base* r957 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t956);
          ternary955 = (struct std___Rb_tree_node_base*)r957;
        } else {
          struct std___Rb_tree_node_base* t958 = __x936;
          struct std___Rb_tree_node_base* r959 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t958);
          ternary955 = (struct std___Rb_tree_node_base*)r959;
        }
        __x936 = ternary955;
    }
  struct std___Rb_tree_node_base* t960 = __y937;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j939, t960);
    _Bool t961 = __comp938;
    if (t961) {
        struct std___Rb_tree_iterator_int_ ref_tmp0962;
        struct std___Rb_tree_iterator_int_ r963 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t941);
        ref_tmp0962 = r963;
        _Bool r964 = std__operator__(&__j939, &ref_tmp0962);
        if (r964) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval935, &__x936, &__y937);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t965 = __retval935;
          return t965;
        } else {
          struct std___Rb_tree_iterator_int_* r966 = std___Rb_tree_iterator_int___operator__(&__j939);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base967 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t941->_M_impl) + 0);
    struct std__less_int_* cast968 = (struct std__less_int_*)base967;
    struct std___Rb_tree_node_base* t969 = __j939._M_node;
    int* r970 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t969);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t971 = __k934;
    _Bool r972 = std__less_int___operator___int_const___int_const___const(cast968, r970, t971);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r972) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval935, &__x936, &__y937);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t973 = __retval935;
      return t973;
    }
  struct std___Rb_tree_node_base* c974 = ((void*)0);
  ref_tmp1940 = c974;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval935, &__j939._M_node, &ref_tmp1940);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t975 = __retval935;
  return t975;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v976, struct std___Rb_tree_node_base** v977, struct std___Rb_tree_node_base** v978) {
bb979:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this980;
  struct std___Rb_tree_node_base** __x981;
  struct std___Rb_tree_node_base** __y982;
  this980 = v976;
  __x981 = v977;
  __y982 = v978;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t983 = this980;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base984 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t983 + 0);
  struct std___Rb_tree_node_base** t985 = __x981;
  struct std___Rb_tree_node_base* t986 = *t985;
  t983->first = t986;
  struct std___Rb_tree_node_base** t987 = __y982;
  struct std___Rb_tree_node_base* t988 = *t987;
  t983->second = t988;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v989) {
bb990:
  struct std___Rb_tree_iterator_int_* this991;
  struct std___Rb_tree_iterator_int_* __retval992;
  this991 = v989;
  struct std___Rb_tree_iterator_int_* t993 = this991;
  struct std___Rb_tree_node_base* t994 = t993->_M_node;
  struct std___Rb_tree_node_base* r995 = std___Rb_tree_decrement(t994);
  t993->_M_node = r995;
  __retval992 = t993;
  struct std___Rb_tree_iterator_int_* t996 = __retval992;
  return t996;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v997) {
bb998:
  struct std___Rb_tree_node_base* __x999;
  struct std___Rb_tree_node_base* __retval1000;
  __x999 = v997;
  struct std___Rb_tree_node_base* t1001 = __x999;
  struct std___Rb_tree_node_base* t1002 = t1001->_M_right;
  __retval1000 = t1002;
  struct std___Rb_tree_node_base* t1003 = __retval1000;
  return t1003;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v1004) {
bb1005:
  struct std___Rb_tree_iterator_int_* this1006;
  struct std___Rb_tree_iterator_int_* __retval1007;
  this1006 = v1004;
  struct std___Rb_tree_iterator_int_* t1008 = this1006;
  struct std___Rb_tree_node_base* t1009 = t1008->_M_node;
  struct std___Rb_tree_node_base* r1010 = std___Rb_tree_increment(t1009);
  t1008->_M_node = r1010;
  __retval1007 = t1008;
  struct std___Rb_tree_iterator_int_* t1011 = __retval1007;
  return t1011;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1012, struct std___Rb_tree_node_base** v1013, struct std___Rb_tree_node_base** v1014) {
bb1015:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1016;
  struct std___Rb_tree_node_base** __x1017;
  struct std___Rb_tree_node_base** __y1018;
  this1016 = v1012;
  __x1017 = v1013;
  __y1018 = v1014;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1019 = this1016;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1020 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1019 + 0);
  struct std___Rb_tree_node_base** t1021 = __x1017;
  struct std___Rb_tree_node_base* t1022 = *t1021;
  t1019->first = t1022;
  struct std___Rb_tree_node_base** t1023 = __y1018;
  struct std___Rb_tree_node_base* t1024 = *t1023;
  t1019->second = t1024;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1025, struct std___Rb_tree_const_iterator_int_ v1026, int* v1027) {
bb1028:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1029;
  struct std___Rb_tree_const_iterator_int_ __position1030;
  int* __k1031;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1032;
  this1029 = v1025;
  __position1030 = v1026;
  __k1031 = v1027;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1033 = this1029;
    struct std___Rb_tree_node_base* t1034 = __position1030._M_node;
    struct std___Rb_tree_node_base* r1035 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1033);
    _Bool c1036 = ((t1034 == r1035)) ? 1 : 0;
    if (c1036) {
        unsigned long r1037 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1033);
        unsigned long c1038 = 0;
        _Bool c1039 = ((r1037 > c1038)) ? 1 : 0;
        _Bool ternary1040;
        if (c1039) {
          struct std___Rb_tree_key_compare_std__less_int__* base1041 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1033->_M_impl) + 0);
          struct std__less_int_* cast1042 = (struct std__less_int_*)base1041;
          struct std___Rb_tree_node_base** r1043 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1033);
          struct std___Rb_tree_node_base* t1044 = *r1043;
          int* r1045 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1044);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t1046 = __k1031;
          _Bool r1047 = std__less_int___operator___int_const___int_const___const(cast1042, r1045, t1046);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary1040 = (_Bool)r1047;
        } else {
          _Bool c1048 = 0;
          ternary1040 = (_Bool)c1048;
        }
        if (ternary1040) {
          struct std___Rb_tree_node_base* ref_tmp01049;
          struct std___Rb_tree_node_base* c1050 = ((void*)0);
          ref_tmp01049 = c1050;
          struct std___Rb_tree_node_base** r1051 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1033);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &ref_tmp01049, r1051);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1052 = __retval1032;
          return t1052;
        } else {
          int* t1053 = __k1031;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1054 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1033, t1053);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1032 = r1054;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1055 = __retval1032;
          return t1055;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1056 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1033->_M_impl) + 0);
        struct std__less_int_* cast1057 = (struct std__less_int_*)base1056;
        int* t1058 = __k1031;
        struct std___Rb_tree_node_base* t1059 = __position1030._M_node;
        int* r1060 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1059);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1061 = std__less_int___operator___int_const___int_const___const(cast1057, t1058, r1060);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r1061) {
          struct std___Rb_tree_iterator_int_ __before1062;
          struct std___Rb_tree_node_base* t1063 = __position1030._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1062, t1063);
            struct std___Rb_tree_node_base* t1064 = __position1030._M_node;
            struct std___Rb_tree_node_base** r1065 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1033);
            struct std___Rb_tree_node_base* t1066 = *r1065;
            _Bool c1067 = ((t1064 == t1066)) ? 1 : 0;
            if (c1067) {
              struct std___Rb_tree_node_base** r1068 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1033);
              struct std___Rb_tree_node_base** r1069 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1033);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, r1068, r1069);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1070 = __retval1032;
              return t1070;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1071 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1033->_M_impl) + 0);
                struct std__less_int_* cast1072 = (struct std__less_int_*)base1071;
                struct std___Rb_tree_iterator_int_* r1073 = std___Rb_tree_iterator_int___operator__(&__before1062);
                struct std___Rb_tree_node_base* t1074 = r1073->_M_node;
                int* r1075 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1074);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1076 = __k1031;
                _Bool r1077 = std__less_int___operator___int_const___int_const___const(cast1072, r1075, t1076);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r1077) {
                    struct std___Rb_tree_node_base* t1078 = __before1062._M_node;
                    struct std___Rb_tree_node_base* r1079 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1078);
                    _Bool cast1080 = (_Bool)r1079;
                    _Bool u1081 = !cast1080;
                    if (u1081) {
                      struct std___Rb_tree_node_base* ref_tmp11082;
                      struct std___Rb_tree_node_base* c1083 = ((void*)0);
                      ref_tmp11082 = c1083;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &ref_tmp11082, &__before1062._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1084 = __retval1032;
                      return t1084;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &__position1030._M_node, &__position1030._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1085 = __retval1032;
                      return t1085;
                    }
                } else {
                  int* t1086 = __k1031;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1087 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1033, t1086);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval1032 = r1087;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1088 = __retval1032;
                  return t1088;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base1089 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1033->_M_impl) + 0);
            struct std__less_int_* cast1090 = (struct std__less_int_*)base1089;
            struct std___Rb_tree_node_base* t1091 = __position1030._M_node;
            int* r1092 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1091);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t1093 = __k1031;
            _Bool r1094 = std__less_int___operator___int_const___int_const___const(cast1090, r1092, t1093);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r1094) {
              struct std___Rb_tree_iterator_int_ __after1095;
              struct std___Rb_tree_node_base* t1096 = __position1030._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1095, t1096);
                struct std___Rb_tree_node_base* t1097 = __position1030._M_node;
                struct std___Rb_tree_node_base** r1098 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1033);
                struct std___Rb_tree_node_base* t1099 = *r1098;
                _Bool c1100 = ((t1097 == t1099)) ? 1 : 0;
                if (c1100) {
                  struct std___Rb_tree_node_base* ref_tmp21101;
                  struct std___Rb_tree_node_base* c1102 = ((void*)0);
                  ref_tmp21101 = c1102;
                  struct std___Rb_tree_node_base** r1103 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1033);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &ref_tmp21101, r1103);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1104 = __retval1032;
                  return t1104;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base1105 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1033->_M_impl) + 0);
                    struct std__less_int_* cast1106 = (struct std__less_int_*)base1105;
                    int* t1107 = __k1031;
                    struct std___Rb_tree_iterator_int_* r1108 = std___Rb_tree_iterator_int___operator___2(&__after1095);
                    struct std___Rb_tree_node_base* t1109 = r1108->_M_node;
                    int* r1110 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1109);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r1111 = std__less_int___operator___int_const___int_const___const(cast1106, t1107, r1110);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r1111) {
                        struct std___Rb_tree_node_base* t1112 = __position1030._M_node;
                        struct std___Rb_tree_node_base* r1113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1112);
                        _Bool cast1114 = (_Bool)r1113;
                        _Bool u1115 = !cast1114;
                        if (u1115) {
                          struct std___Rb_tree_node_base* ref_tmp31116;
                          struct std___Rb_tree_node_base* c1117 = ((void*)0);
                          ref_tmp31116 = c1117;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &ref_tmp31116, &__position1030._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1118 = __retval1032;
                          return t1118;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &__after1095._M_node, &__after1095._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1119 = __retval1032;
                          return t1119;
                        }
                    } else {
                      int* t1120 = __k1031;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1121 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1033, t1120);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval1032 = r1121;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1122 = __retval1032;
                      return t1122;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp41123;
              struct std___Rb_tree_node_base* c1124 = ((void*)0);
              ref_tmp41123 = c1124;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1032, &__position1030._M_node, &ref_tmp41123);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1125 = __retval1032;
              return t1125;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1126, int* v1127) {
bb1128:
  struct std___Identity_int_* this1129;
  int* __x1130;
  int* __retval1131;
  this1129 = v1126;
  __x1130 = v1127;
  struct std___Identity_int_* t1132 = this1129;
  int* t1133 = __x1130;
  __retval1131 = t1133;
  int* t1134 = __retval1131;
  return t1134;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1135, int* v1136) {
bb1137:
  int* __location1138;
  int* __args1139;
  int* __retval1140;
  void* __loc1141;
  __location1138 = v1135;
  __args1139 = v1136;
  int* t1142 = __location1138;
  void* cast1143 = (void*)t1142;
  __loc1141 = cast1143;
    void* t1144 = __loc1141;
    int* cast1145 = (int*)t1144;
    int* t1146 = __args1139;
    int t1147 = *t1146;
    *cast1145 = t1147;
    __retval1140 = cast1145;
    int* t1148 = __retval1140;
    return t1148;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1149, int* v1150, int* v1151) {
bb1152:
  struct std__allocator_std___Rb_tree_node_int__* __a1153;
  int* __p1154;
  int* __args1155;
  __a1153 = v1149;
  __p1154 = v1150;
  __args1155 = v1151;
  int* t1156 = __p1154;
  int* t1157 = __args1155;
  int* r1158 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1156, t1157);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1159, struct std___Rb_tree_node_int_* v1160, int* v1161) {
bb1162:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1163;
  struct std___Rb_tree_node_int_* __node1164;
  int* __args1165;
  this1163 = v1159;
  __node1164 = v1160;
  __args1165 = v1161;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1166 = this1163;
      struct std__allocator_std___Rb_tree_node_int__* r1168 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1166);
      struct std___Rb_tree_node_int_* t1169 = __node1164;
      int* r1170 = std___Rb_tree_node_int____M_valptr(t1169);
      if (__cir_exc_active) {
        goto cir_try_dispatch1167;
      }
      int* t1171 = __args1165;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1168, r1170, t1171);
    cir_try_dispatch1167: ;
    if (__cir_exc_active) {
    {
      int ca_tok1172 = 0;
      void* ca_exn1173 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1174 = __node1164;
        struct std___Rb_tree_node_int_* t1175 = __node1164;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1166, t1175);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1176, int* v1177) {
bb1178:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1179;
  int* __args1180;
  struct std___Rb_tree_node_int_* __retval1181;
  struct std___Rb_tree_node_int_* __tmp1182;
  this1179 = v1176;
  __args1180 = v1177;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1183 = this1179;
  struct std___Rb_tree_node_int_* r1184 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1183);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1182 = r1184;
  struct std___Rb_tree_node_int_* t1185 = __tmp1182;
  int* t1186 = __args1180;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1183, t1185, t1186);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1187 = __tmp1182;
  __retval1181 = t1187;
  struct std___Rb_tree_node_int_* t1188 = __retval1181;
  return t1188;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1189, int* v1190) {
bb1191:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1192;
  int* __arg1193;
  struct std___Rb_tree_node_int_* __retval1194;
  this1192 = v1189;
  __arg1193 = v1190;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1195 = this1192;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1196 = t1195->_M_t;
  int* t1197 = __arg1193;
  struct std___Rb_tree_node_int_* r1198 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1196, t1197);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1194 = r1198;
  struct std___Rb_tree_node_int_* t1199 = __retval1194;
  return t1199;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1200, struct std___Rb_tree_node_base* v1201, struct std___Rb_tree_node_base* v1202, struct std___Rb_tree_node_base* v1203) {
bb1204:
  _Bool __insert_left1205;
  struct std___Rb_tree_node_base* __x1206;
  struct std___Rb_tree_node_base* __p1207;
  struct std___Rb_tree_node_base* __header1208;
  __insert_left1205 = v1200;
  __x1206 = v1201;
  __p1207 = v1202;
  __header1208 = v1203;
  _Bool t1209 = __insert_left1205;
  struct std___Rb_tree_node_base* t1210 = __x1206;
  struct std___Rb_tree_node_base* t1211 = __p1207;
  struct std___Rb_tree_node_base* t1212 = __header1208;
  std___Rb_tree_insert_and_rebalance(t1209, t1210, t1211, t1212);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1213, struct std___Rb_tree_node_base* v1214, struct std___Rb_tree_node_base* v1215, int* v1216, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1217) {
bb1218:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1219;
  struct std___Rb_tree_node_base* __x1220;
  struct std___Rb_tree_node_base* __p1221;
  int* __v1222;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1223;
  struct std___Rb_tree_iterator_int_ __retval1224;
  _Bool __insert_left1225;
  struct std___Rb_tree_node_base* __z1226;
  this1219 = v1213;
  __x1220 = v1214;
  __p1221 = v1215;
  __v1222 = v1216;
  __node_gen1223 = v1217;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1227 = this1219;
  struct std___Rb_tree_node_base* t1228 = __x1220;
  _Bool cast1229 = (_Bool)t1228;
  _Bool ternary1230;
  if (cast1229) {
    _Bool c1231 = 1;
    ternary1230 = (_Bool)c1231;
  } else {
    struct std___Rb_tree_node_base* t1232 = __p1221;
    struct std___Rb_tree_node_base* r1233 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1227);
    _Bool c1234 = ((t1232 == r1233)) ? 1 : 0;
    ternary1230 = (_Bool)c1234;
  }
  _Bool ternary1235;
  if (ternary1230) {
    _Bool c1236 = 1;
    ternary1235 = (_Bool)c1236;
  } else {
    struct std___Identity_int_ ref_tmp01237;
    struct std___Rb_tree_key_compare_std__less_int__* base1238 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1227->_M_impl) + 0);
    struct std__less_int_* cast1239 = (struct std__less_int_*)base1238;
    int* t1240 = __v1222;
    int* r1241 = std___Identity_int___operator___int___const(&ref_tmp01237, t1240);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1242 = __p1221;
    int* r1243 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1242);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1244 = std__less_int___operator___int_const___int_const___const(cast1239, r1241, r1243);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1235 = (_Bool)r1244;
  }
  __insert_left1225 = ternary1235;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1245 = __node_gen1223;
  int* t1246 = __v1222;
  struct std___Rb_tree_node_int_* r1247 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1245, t1246);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1248 = (struct std___Rb_tree_node_base*)((char *)r1247 + 0);
  struct std___Rb_tree_node_base* r1249 = std___Rb_tree_node_base___M_base_ptr___const(base1248);
  __z1226 = r1249;
  _Bool t1250 = __insert_left1225;
  struct std___Rb_tree_node_base* t1251 = __z1226;
  struct std___Rb_tree_node_base* t1252 = __p1221;
  struct std___Rb_tree_header* base1253 = (struct std___Rb_tree_header*)((char *)&(t1227->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1250, t1251, t1252, &base1253->_M_header);
  struct std___Rb_tree_header* base1254 = (struct std___Rb_tree_header*)((char *)&(t1227->_M_impl) + 8);
  unsigned long t1255 = base1254->_M_node_count;
  unsigned long u1256 = t1255 + 1;
  base1254->_M_node_count = u1256;
  struct std___Rb_tree_node_base* t1257 = __z1226;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1224, t1257);
  struct std___Rb_tree_iterator_int_ t1258 = __retval1224;
  return t1258;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1259, struct std___Rb_tree_node_base* v1260) {
bb1261:
  struct std___Rb_tree_iterator_int_* this1262;
  struct std___Rb_tree_node_base* __x1263;
  this1262 = v1259;
  __x1263 = v1260;
  struct std___Rb_tree_iterator_int_* t1264 = this1262;
  struct std___Rb_tree_node_base* t1265 = __x1263;
  t1264->_M_node = t1265;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1266, struct std___Rb_tree_const_iterator_int_ v1267, int* v1268, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1269) {
bb1270:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1271;
  struct std___Rb_tree_const_iterator_int_ __position1272;
  int* __v1273;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1274;
  struct std___Rb_tree_iterator_int_ __retval1275;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1276;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01277;
  struct std___Identity_int_ ref_tmp01278;
  this1271 = v1266;
  __position1272 = v1267;
  __v1273 = v1268;
  __node_gen1274 = v1269;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1279 = this1271;
  agg_tmp01277 = __position1272; // copy
  int* t1280 = __v1273;
  int* r1281 = std___Identity_int___operator___int___const(&ref_tmp01278, t1280);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1282 = agg_tmp01277;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1283 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1279, t1282, r1281);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1276 = r1283;
    struct std___Rb_tree_node_base* t1284 = __res1276.second;
    _Bool cast1285 = (_Bool)t1284;
    if (cast1285) {
      struct std___Rb_tree_node_base* t1286 = __res1276.first;
      struct std___Rb_tree_node_base* t1287 = __res1276.second;
      int* t1288 = __v1273;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1289 = __node_gen1274;
      struct std___Rb_tree_iterator_int_ r1290 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1279, t1286, t1287, t1288, t1289);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1275 = r1290;
      struct std___Rb_tree_iterator_int_ t1291 = __retval1275;
      return t1291;
    }
  struct std___Rb_tree_node_base* t1292 = __res1276.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1275, t1292);
  struct std___Rb_tree_iterator_int_ t1293 = __retval1275;
  return t1293;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1294) {
bb1295:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1296;
  struct std___Rb_tree_iterator_int_ __retval1297;
  this1296 = v1294;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1298 = this1296;
  struct std___Rb_tree_node_base* r1299 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1298);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1297, r1299);
  struct std___Rb_tree_iterator_int_ t1300 = __retval1297;
  return t1300;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1301, struct std___Rb_tree_iterator_int_* v1302) {
bb1303:
  struct std___Rb_tree_const_iterator_int_* this1304;
  struct std___Rb_tree_iterator_int_* __it1305;
  this1304 = v1301;
  __it1305 = v1302;
  struct std___Rb_tree_const_iterator_int_* t1306 = this1304;
  struct std___Rb_tree_iterator_int_* t1307 = __it1305;
  struct std___Rb_tree_node_base* t1308 = t1307->_M_node;
  t1306->_M_node = t1308;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1309, int* v1310, int* v1311) {
bb1312:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1313;
  int* __first1314;
  int* __last1315;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1316;
  this1313 = v1309;
  __first1314 = v1310;
  __last1315 = v1311;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1317 = this1313;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1316, t1317);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01318;
    struct std___Rb_tree_iterator_int_ ref_tmp01319;
    struct std___Rb_tree_iterator_int_ agg_tmp11320;
    while (1) {
      int* t1322 = __first1314;
      int* t1323 = __last1315;
      _Bool c1324 = ((t1322 != t1323)) ? 1 : 0;
      if (!c1324) break;
      struct std___Rb_tree_iterator_int_ r1325 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1317);
      ref_tmp01319 = r1325;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01318, &ref_tmp01319);
      int* t1326 = __first1314;
      struct std___Rb_tree_const_iterator_int_ t1327 = agg_tmp01318;
      struct std___Rb_tree_iterator_int_ r1328 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1317, t1327, t1326, &__an1316);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11320 = r1328;
    for_step1321: ;
      int* t1329 = __first1314;
      int c1330 = 1;
      int* ptr1331 = &(t1329)[c1330];
      __first1314 = ptr1331;
    }
  return;
}

