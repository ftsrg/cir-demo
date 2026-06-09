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
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[3] = {5, 10, 15};
char _str[18] = "myset.size() == 3";
char _str_1[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-insert-with-iterators/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[9] = "*it == 5";
char _str_3[10] = "*it == 10";
char _str_4[10] = "*it == 15";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
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
extern void *malloc(unsigned long);
extern void free(void*);
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
void void_std__multiset_int__std__less_int___std__allocator_int_____insert_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
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

// function: _ZNSt8multisetIiSt4lessIiESaIiEEC2Ev
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__multiset_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__multiset_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v4) {
bb5:
  struct std___Rb_tree_const_iterator_int_* this6;
  this6 = v4;
  struct std___Rb_tree_const_iterator_int_* t7 = this6;
  struct std___Rb_tree_node_base* c8 = ((void*)0);
  t7->_M_node = c8;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v9, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v10) {
bb11:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this12;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t13;
  this12 = v9;
  __t13 = v10;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t14 = this12;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t15 = __t13;
  t14->_M_t = t15;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v16) {
bb17:
  struct std___Rb_tree_node_base* this18;
  struct std___Rb_tree_node_base* __retval19;
  this18 = v16;
  struct std___Rb_tree_node_base* t20 = this18;
  __retval19 = t20;
  struct std___Rb_tree_node_base* t21 = __retval19;
  return t21;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v22) {
bb23:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this24;
  struct std___Rb_tree_node_base* __retval25;
  this24 = v22;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t26 = this24;
  struct std___Rb_tree_header* base27 = (struct std___Rb_tree_header*)((char *)&(t26->_M_impl) + 8);
  struct std___Rb_tree_node_base* r28 = std___Rb_tree_node_base___M_base_ptr___const(&base27->_M_header);
  __retval25 = r28;
  struct std___Rb_tree_node_base* t29 = __retval25;
  return t29;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v30) {
bb31:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this32;
  unsigned long __retval33;
  this32 = v30;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t34 = this32;
  struct std___Rb_tree_header* base35 = (struct std___Rb_tree_header*)((char *)&(t34->_M_impl) + 8);
  unsigned long t36 = base35->_M_node_count;
  __retval33 = t36;
  unsigned long t37 = __retval33;
  return t37;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v38, int* v39, int* v40) {
bb41:
  struct std__less_int_* this42;
  int* __x43;
  int* __y44;
  _Bool __retval45;
  this42 = v38;
  __x43 = v39;
  __y44 = v40;
  struct std__less_int_* t46 = this42;
  int* t47 = __x43;
  int t48 = *t47;
  int* t49 = __y44;
  int t50 = *t49;
  _Bool c51 = ((t48 < t50)) ? 1 : 0;
  __retval45 = c51;
  _Bool t52 = __retval45;
  return t52;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v53, int* v54) {
bb55:
  struct std___Identity_int_* this56;
  int* __x57;
  int* __retval58;
  this56 = v53;
  __x57 = v54;
  struct std___Identity_int_* t59 = this56;
  int* t60 = __x57;
  __retval58 = t60;
  int* t61 = __retval58;
  return t61;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v62) {
bb63:
  struct __gnu_cxx____aligned_membuf_int_* this64;
  void* __retval65;
  this64 = v62;
  struct __gnu_cxx____aligned_membuf_int_* t66 = this64;
  void* cast67 = (void*)&(t66->_M_storage);
  __retval65 = cast67;
  void* t68 = __retval65;
  return t68;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v69) {
bb70:
  struct __gnu_cxx____aligned_membuf_int_* this71;
  int* __retval72;
  this71 = v69;
  struct __gnu_cxx____aligned_membuf_int_* t73 = this71;
  void* r74 = __gnu_cxx____aligned_membuf_int____M_addr___const(t73);
  int* cast75 = (int*)r74;
  __retval72 = cast75;
  int* t76 = __retval72;
  return t76;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v77) {
bb78:
  struct std___Rb_tree_node_int_* this79;
  int* __retval80;
  this79 = v77;
  struct std___Rb_tree_node_int_* t81 = this79;
  int* r82 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t81->_M_storage);
  __retval80 = r82;
  int* t83 = __retval80;
  return t83;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v84) {
bb85:
  struct std___Rb_tree_node_int_* __node86;
  int* __retval87;
  struct std___Identity_int_ ref_tmp088;
  __node86 = v84;
  struct std___Rb_tree_node_int_* t89 = __node86;
  int* r90 = std___Rb_tree_node_int____M_valptr___const(t89);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r91 = std___Identity_int___operator___int_const___const(&ref_tmp088, r90);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval87 = r91;
  int* t92 = __retval87;
  return t92;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v93) {
bb94:
  struct std___Rb_tree_node_base* __x95;
  int* __retval96;
  __x95 = v93;
  struct std___Rb_tree_node_base* t97 = __x95;
  struct std___Rb_tree_node_int_* derived98 = (struct std___Rb_tree_node_int_*)((char *)t97 - 0);
  int* r99 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived98);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval96 = r99;
  int* t100 = __retval96;
  return t100;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v101) {
bb102:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this103;
  struct std___Rb_tree_node_base** __retval104;
  this103 = v101;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t105 = this103;
  struct std___Rb_tree_header* base106 = (struct std___Rb_tree_header*)((char *)&(t105->_M_impl) + 8);
  __retval104 = &base106->_M_header._M_right;
  struct std___Rb_tree_node_base** t107 = __retval104;
  return t107;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v108, struct std___Rb_tree_node_base** v109, struct std___Rb_tree_node_base** v110) {
bb111:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this112;
  struct std___Rb_tree_node_base** __x113;
  struct std___Rb_tree_node_base** __y114;
  this112 = v108;
  __x113 = v109;
  __y114 = v110;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t115 = this112;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base116 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t115 + 0);
  struct std___Rb_tree_node_base** t117 = __x113;
  struct std___Rb_tree_node_base* t118 = *t117;
  t115->first = t118;
  struct std___Rb_tree_node_base** t119 = __y114;
  struct std___Rb_tree_node_base* t120 = *t119;
  t115->second = t120;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v121) {
bb122:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this123;
  struct std___Rb_tree_node_base* __retval124;
  this123 = v121;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t125 = this123;
  struct std___Rb_tree_header* base126 = (struct std___Rb_tree_header*)((char *)&(t125->_M_impl) + 8);
  struct std___Rb_tree_node_base* t127 = base126->_M_header._M_parent;
  __retval124 = t127;
  struct std___Rb_tree_node_base* t128 = __retval124;
  return t128;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v129) {
bb130:
  struct std___Rb_tree_node_base* __x131;
  struct std___Rb_tree_node_base* __retval132;
  __x131 = v129;
  struct std___Rb_tree_node_base* t133 = __x131;
  struct std___Rb_tree_node_base* t134 = t133->_M_left;
  __retval132 = t134;
  struct std___Rb_tree_node_base* t135 = __retval132;
  return t135;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v136, int* v137) {
bb138:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this139;
  int* __k140;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval141;
  struct std___Rb_tree_node_base* __x142;
  struct std___Rb_tree_node_base* __y143;
  this139 = v136;
  __k140 = v137;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t144 = this139;
  struct std___Rb_tree_node_base* r145 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t144);
  __x142 = r145;
  struct std___Rb_tree_node_base* r146 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t144);
  __y143 = r146;
    while (1) {
      struct std___Rb_tree_node_base* t147 = __x142;
      _Bool cast148 = (_Bool)t147;
      if (!cast148) break;
        struct std___Rb_tree_node_base* t149 = __x142;
        __y143 = t149;
        struct std___Rb_tree_key_compare_std__less_int__* base150 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t144->_M_impl) + 0);
        struct std__less_int_* cast151 = (struct std__less_int_*)base150;
        int* t152 = __k140;
        struct std___Rb_tree_node_base* t153 = __x142;
        int* r154 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t153);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r155 = std__less_int___operator___int_const___int_const___const(cast151, t152, r154);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary156;
        if (r155) {
          struct std___Rb_tree_node_base* t157 = __x142;
          struct std___Rb_tree_node_base* r158 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t157);
          ternary156 = (struct std___Rb_tree_node_base*)r158;
        } else {
          struct std___Rb_tree_node_base* t159 = __x142;
          struct std___Rb_tree_node_base* r160 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t159);
          ternary156 = (struct std___Rb_tree_node_base*)r160;
        }
        __x142 = ternary156;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval141, &__x142, &__y143);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t161 = __retval141;
  return t161;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v162, struct std___Rb_tree_node_base* v163) {
bb164:
  struct std___Rb_tree_iterator_int_* this165;
  struct std___Rb_tree_node_base* __x166;
  this165 = v162;
  __x166 = v163;
  struct std___Rb_tree_iterator_int_* t167 = this165;
  struct std___Rb_tree_node_base* t168 = __x166;
  t167->_M_node = t168;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v169) {
bb170:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this171;
  struct std___Rb_tree_node_base** __retval172;
  this171 = v169;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t173 = this171;
  struct std___Rb_tree_header* base174 = (struct std___Rb_tree_header*)((char *)&(t173->_M_impl) + 8);
  __retval172 = &base174->_M_header._M_left;
  struct std___Rb_tree_node_base** t175 = __retval172;
  return t175;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v176, struct std___Rb_tree_node_base** v177, struct std___Rb_tree_node_base** v178) {
bb179:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this180;
  struct std___Rb_tree_node_base** __x181;
  struct std___Rb_tree_node_base** __y182;
  this180 = v176;
  __x181 = v177;
  __y182 = v178;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t183 = this180;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base184 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t183 + 0);
  struct std___Rb_tree_node_base** t185 = __x181;
  struct std___Rb_tree_node_base* t186 = *t185;
  t183->first = t186;
  struct std___Rb_tree_node_base** t187 = __y182;
  struct std___Rb_tree_node_base* t188 = *t187;
  t183->second = t188;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v189) {
bb190:
  struct std___Rb_tree_iterator_int_* this191;
  struct std___Rb_tree_iterator_int_* __retval192;
  this191 = v189;
  struct std___Rb_tree_iterator_int_* t193 = this191;
  struct std___Rb_tree_node_base* t194 = t193->_M_node;
  struct std___Rb_tree_node_base* r195 = std___Rb_tree_decrement(t194);
  t193->_M_node = r195;
  __retval192 = t193;
  struct std___Rb_tree_iterator_int_* t196 = __retval192;
  return t196;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v197) {
bb198:
  struct std___Rb_tree_node_base* __x199;
  struct std___Rb_tree_node_base* __retval200;
  __x199 = v197;
  struct std___Rb_tree_node_base* t201 = __x199;
  struct std___Rb_tree_node_base* t202 = t201->_M_right;
  __retval200 = t202;
  struct std___Rb_tree_node_base* t203 = __retval200;
  return t203;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v204) {
bb205:
  struct std___Rb_tree_iterator_int_* this206;
  struct std___Rb_tree_iterator_int_* __retval207;
  this206 = v204;
  struct std___Rb_tree_iterator_int_* t208 = this206;
  struct std___Rb_tree_node_base* t209 = t208->_M_node;
  struct std___Rb_tree_node_base* r210 = std___Rb_tree_increment(t209);
  t208->_M_node = r210;
  __retval207 = t208;
  struct std___Rb_tree_iterator_int_* t211 = __retval207;
  return t211;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v212, struct std___Rb_tree_node_base** v213, struct std___Rb_tree_node_base** v214) {
bb215:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this216;
  struct std___Rb_tree_node_base** __x217;
  struct std___Rb_tree_node_base** __y218;
  this216 = v212;
  __x217 = v213;
  __y218 = v214;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t219 = this216;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base220 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t219 + 0);
  struct std___Rb_tree_node_base** t221 = __x217;
  struct std___Rb_tree_node_base* t222 = *t221;
  t219->first = t222;
  struct std___Rb_tree_node_base** t223 = __y218;
  struct std___Rb_tree_node_base* t224 = *t223;
  t219->second = t224;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v225, struct std___Rb_tree_const_iterator_int_ v226, int* v227) {
bb228:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this229;
  struct std___Rb_tree_const_iterator_int_ __position230;
  int* __k231;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval232;
  this229 = v225;
  __position230 = v226;
  __k231 = v227;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t233 = this229;
    struct std___Rb_tree_node_base* t234 = __position230._M_node;
    struct std___Rb_tree_node_base* r235 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t233);
    _Bool c236 = ((t234 == r235)) ? 1 : 0;
    if (c236) {
        unsigned long r237 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t233);
        unsigned long c238 = 0;
        _Bool c239 = ((r237 > c238)) ? 1 : 0;
        _Bool ternary240;
        if (c239) {
          struct std___Rb_tree_key_compare_std__less_int__* base241 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t233->_M_impl) + 0);
          struct std__less_int_* cast242 = (struct std__less_int_*)base241;
          int* t243 = __k231;
          struct std___Rb_tree_node_base** r244 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t233);
          struct std___Rb_tree_node_base* t245 = *r244;
          int* r246 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t245);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r247 = std__less_int___operator___int_const___int_const___const(cast242, t243, r246);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u248 = !r247;
          ternary240 = (_Bool)u248;
        } else {
          _Bool c249 = 0;
          ternary240 = (_Bool)c249;
        }
        if (ternary240) {
          struct std___Rb_tree_node_base* ref_tmp0250;
          struct std___Rb_tree_node_base* c251 = ((void*)0);
          ref_tmp0250 = c251;
          struct std___Rb_tree_node_base** r252 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t233);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, &ref_tmp0250, r252);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t253 = __retval232;
          return t253;
        } else {
          int* t254 = __k231;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r255 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t233, t254);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval232 = r255;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t256 = __retval232;
          return t256;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base257 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t233->_M_impl) + 0);
        struct std__less_int_* cast258 = (struct std__less_int_*)base257;
        struct std___Rb_tree_node_base* t259 = __position230._M_node;
        int* r260 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t259);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t261 = __k231;
        _Bool r262 = std__less_int___operator___int_const___int_const___const(cast258, r260, t261);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u263 = !r262;
        if (u263) {
          struct std___Rb_tree_iterator_int_ __before264;
          struct std___Rb_tree_node_base* t265 = __position230._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before264, t265);
            struct std___Rb_tree_node_base* t266 = __position230._M_node;
            struct std___Rb_tree_node_base** r267 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t233);
            struct std___Rb_tree_node_base* t268 = *r267;
            _Bool c269 = ((t266 == t268)) ? 1 : 0;
            if (c269) {
              struct std___Rb_tree_node_base** r270 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t233);
              struct std___Rb_tree_node_base** r271 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t233);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, r270, r271);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t272 = __retval232;
              return t272;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base273 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t233->_M_impl) + 0);
                struct std__less_int_* cast274 = (struct std__less_int_*)base273;
                int* t275 = __k231;
                struct std___Rb_tree_iterator_int_* r276 = std___Rb_tree_iterator_int___operator__(&__before264);
                struct std___Rb_tree_node_base* t277 = r276->_M_node;
                int* r278 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t277);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r279 = std__less_int___operator___int_const___int_const___const(cast274, t275, r278);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u280 = !r279;
                if (u280) {
                    struct std___Rb_tree_node_base* t281 = __before264._M_node;
                    struct std___Rb_tree_node_base* r282 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t281);
                    _Bool cast283 = (_Bool)r282;
                    _Bool u284 = !cast283;
                    if (u284) {
                      struct std___Rb_tree_node_base* ref_tmp1285;
                      struct std___Rb_tree_node_base* c286 = ((void*)0);
                      ref_tmp1285 = c286;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, &ref_tmp1285, &__before264._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t287 = __retval232;
                      return t287;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, &__position230._M_node, &__position230._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t288 = __retval232;
                      return t288;
                    }
                } else {
                  int* t289 = __k231;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r290 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t233, t289);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval232 = r290;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t291 = __retval232;
                  return t291;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after292;
          struct std___Rb_tree_node_base* t293 = __position230._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after292, t293);
            struct std___Rb_tree_node_base* t294 = __position230._M_node;
            struct std___Rb_tree_node_base** r295 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t233);
            struct std___Rb_tree_node_base* t296 = *r295;
            _Bool c297 = ((t294 == t296)) ? 1 : 0;
            if (c297) {
              struct std___Rb_tree_node_base* ref_tmp2298;
              struct std___Rb_tree_node_base* c299 = ((void*)0);
              ref_tmp2298 = c299;
              struct std___Rb_tree_node_base** r300 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t233);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, &ref_tmp2298, r300);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t301 = __retval232;
              return t301;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base302 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t233->_M_impl) + 0);
                struct std__less_int_* cast303 = (struct std__less_int_*)base302;
                struct std___Rb_tree_iterator_int_* r304 = std___Rb_tree_iterator_int___operator___2(&__after292);
                struct std___Rb_tree_node_base* t305 = r304->_M_node;
                int* r306 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t305);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t307 = __k231;
                _Bool r308 = std__less_int___operator___int_const___int_const___const(cast303, r306, t307);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u309 = !r308;
                if (u309) {
                    struct std___Rb_tree_node_base* t310 = __position230._M_node;
                    struct std___Rb_tree_node_base* r311 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t310);
                    _Bool cast312 = (_Bool)r311;
                    _Bool u313 = !cast312;
                    if (u313) {
                      struct std___Rb_tree_node_base* ref_tmp3314;
                      struct std___Rb_tree_node_base* c315 = ((void*)0);
                      ref_tmp3314 = c315;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, &ref_tmp3314, &__position230._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t316 = __retval232;
                      return t316;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval232, &__after292._M_node, &__after292._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t317 = __retval232;
                      return t317;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp4318;
                  struct std___Rb_tree_node_base* ref_tmp5319;
                  struct std___Rb_tree_node_base* c320 = ((void*)0);
                  ref_tmp4318 = c320;
                  struct std___Rb_tree_node_base* c321 = ((void*)0);
                  ref_tmp5319 = c321;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval232, &ref_tmp4318, &ref_tmp5319);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t322 = __retval232;
                  return t322;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v323, int* v324) {
bb325:
  struct std___Identity_int_* this326;
  int* __x327;
  int* __retval328;
  this326 = v323;
  __x327 = v324;
  struct std___Identity_int_* t329 = this326;
  int* t330 = __x327;
  __retval328 = t330;
  int* t331 = __retval328;
  return t331;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v332) {
bb333:
  struct std____new_allocator_std___Rb_tree_node_int__* this334;
  unsigned long __retval335;
  this334 = v332;
  struct std____new_allocator_std___Rb_tree_node_int__* t336 = this334;
  unsigned long c337 = 9223372036854775807;
  unsigned long c338 = 40;
  unsigned long b339 = c337 / c338;
  __retval335 = b339;
  unsigned long t340 = __retval335;
  return t340;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v341, unsigned long v342, void* v343) {
bb344:
  struct std____new_allocator_std___Rb_tree_node_int__* this345;
  unsigned long __n346;
  void* unnamed347;
  struct std___Rb_tree_node_int_* __retval348;
  this345 = v341;
  __n346 = v342;
  unnamed347 = v343;
  struct std____new_allocator_std___Rb_tree_node_int__* t349 = this345;
    unsigned long t350 = __n346;
    unsigned long r351 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t349);
    _Bool c352 = ((t350 > r351)) ? 1 : 0;
    if (c352) {
        unsigned long t353 = __n346;
        unsigned long c354 = -1;
        unsigned long c355 = 40;
        unsigned long b356 = c354 / c355;
        _Bool c357 = ((t353 > b356)) ? 1 : 0;
        if (c357) {
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
    unsigned long c358 = 8;
    unsigned long c359 = 16;
    _Bool c360 = ((c358 > c359)) ? 1 : 0;
    if (c360) {
      unsigned long __al361;
      unsigned long c362 = 8;
      __al361 = c362;
      unsigned long t363 = __n346;
      unsigned long c364 = 40;
      unsigned long b365 = t363 * c364;
      unsigned long t366 = __al361;
      void* r367 = operator_new_2(b365, t366);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast368 = (struct std___Rb_tree_node_int_*)r367;
      __retval348 = cast368;
      struct std___Rb_tree_node_int_* t369 = __retval348;
      return t369;
    }
  unsigned long t370 = __n346;
  unsigned long c371 = 40;
  unsigned long b372 = t370 * c371;
  void* r373 = operator_new(b372);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast374 = (struct std___Rb_tree_node_int_*)r373;
  __retval348 = cast374;
  struct std___Rb_tree_node_int_* t375 = __retval348;
  return t375;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v376, unsigned long v377) {
bb378:
  struct std__allocator_std___Rb_tree_node_int__* this379;
  unsigned long __n380;
  struct std___Rb_tree_node_int_* __retval381;
  this379 = v376;
  __n380 = v377;
  struct std__allocator_std___Rb_tree_node_int__* t382 = this379;
    _Bool r383 = std____is_constant_evaluated();
    if (r383) {
        unsigned long t384 = __n380;
        unsigned long c385 = 40;
        unsigned long ovr386;
        _Bool ovf387 = __builtin_mul_overflow(t384, c385, &ovr386);
        __n380 = ovr386;
        if (ovf387) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t388 = __n380;
      void* r389 = operator_new(t388);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast390 = (struct std___Rb_tree_node_int_*)r389;
      __retval381 = cast390;
      struct std___Rb_tree_node_int_* t391 = __retval381;
      return t391;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base392 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t382 + 0);
  unsigned long t393 = __n380;
  void* c394 = ((void*)0);
  struct std___Rb_tree_node_int_* r395 = std____new_allocator_std___Rb_tree_node_int_____allocate(base392, t393, c394);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval381 = r395;
  struct std___Rb_tree_node_int_* t396 = __retval381;
  return t396;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v397, unsigned long v398) {
bb399:
  struct std__allocator_std___Rb_tree_node_int__* __a400;
  unsigned long __n401;
  struct std___Rb_tree_node_int_* __retval402;
  __a400 = v397;
  __n401 = v398;
  struct std__allocator_std___Rb_tree_node_int__* t403 = __a400;
  unsigned long t404 = __n401;
  struct std___Rb_tree_node_int_* r405 = std__allocator_std___Rb_tree_node_int_____allocate(t403, t404);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval402 = r405;
  struct std___Rb_tree_node_int_* t406 = __retval402;
  return t406;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v407) {
bb408:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this409;
  struct std___Rb_tree_node_int_* __retval410;
  this409 = v407;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t411 = this409;
  struct std__allocator_std___Rb_tree_node_int__* r412 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t411);
  unsigned long c413 = 1;
  struct std___Rb_tree_node_int_* r414 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r412, c413);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval410 = r414;
  struct std___Rb_tree_node_int_* t415 = __retval410;
  return t415;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v416, int* v417) {
bb418:
  int* __location419;
  int* __args420;
  int* __retval421;
  void* __loc422;
  __location419 = v416;
  __args420 = v417;
  int* t423 = __location419;
  void* cast424 = (void*)t423;
  __loc422 = cast424;
    void* t425 = __loc422;
    int* cast426 = (int*)t425;
    int* t427 = __args420;
    int t428 = *t427;
    *cast426 = t428;
    __retval421 = cast426;
    int* t429 = __retval421;
    return t429;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v430, int* v431, int* v432) {
bb433:
  struct std__allocator_std___Rb_tree_node_int__* __a434;
  int* __p435;
  int* __args436;
  __a434 = v430;
  __p435 = v431;
  __args436 = v432;
  int* t437 = __p435;
  int* t438 = __args436;
  int* r439 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t437, t438);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v440, struct std___Rb_tree_node_int_* v441, int* v442) {
bb443:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this444;
  struct std___Rb_tree_node_int_* __node445;
  int* __args446;
  this444 = v440;
  __node445 = v441;
  __args446 = v442;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t447 = this444;
      struct std__allocator_std___Rb_tree_node_int__* r449 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t447);
      struct std___Rb_tree_node_int_* t450 = __node445;
      int* r451 = std___Rb_tree_node_int____M_valptr(t450);
      if (__cir_exc_active) {
        goto cir_try_dispatch448;
      }
      int* t452 = __args446;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r449, r451, t452);
    cir_try_dispatch448: ;
    if (__cir_exc_active) {
    {
      int ca_tok453 = 0;
      void* ca_exn454 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t455 = __node445;
        struct std___Rb_tree_node_int_* t456 = __node445;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t447, t456);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v457, int* v458) {
bb459:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this460;
  int* __args461;
  struct std___Rb_tree_node_int_* __retval462;
  struct std___Rb_tree_node_int_* __tmp463;
  this460 = v457;
  __args461 = v458;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t464 = this460;
  struct std___Rb_tree_node_int_* r465 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t464);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp463 = r465;
  struct std___Rb_tree_node_int_* t466 = __tmp463;
  int* t467 = __args461;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t464, t466, t467);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t468 = __tmp463;
  __retval462 = t468;
  struct std___Rb_tree_node_int_* t469 = __retval462;
  return t469;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v470, int* v471) {
bb472:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this473;
  int* __arg474;
  struct std___Rb_tree_node_int_* __retval475;
  this473 = v470;
  __arg474 = v471;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t476 = this473;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t477 = t476->_M_t;
  int* t478 = __arg474;
  struct std___Rb_tree_node_int_* r479 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t477, t478);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval475 = r479;
  struct std___Rb_tree_node_int_* t480 = __retval475;
  return t480;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v481, struct std___Rb_tree_node_base* v482, struct std___Rb_tree_node_base* v483, struct std___Rb_tree_node_base* v484) {
bb485:
  _Bool __insert_left486;
  struct std___Rb_tree_node_base* __x487;
  struct std___Rb_tree_node_base* __p488;
  struct std___Rb_tree_node_base* __header489;
  __insert_left486 = v481;
  __x487 = v482;
  __p488 = v483;
  __header489 = v484;
  _Bool t490 = __insert_left486;
  struct std___Rb_tree_node_base* t491 = __x487;
  struct std___Rb_tree_node_base* t492 = __p488;
  struct std___Rb_tree_node_base* t493 = __header489;
  std___Rb_tree_insert_and_rebalance(t490, t491, t492, t493);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v494, struct std___Rb_tree_node_base* v495, struct std___Rb_tree_node_base* v496, int* v497, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v498) {
bb499:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this500;
  struct std___Rb_tree_node_base* __x501;
  struct std___Rb_tree_node_base* __p502;
  int* __v503;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen504;
  struct std___Rb_tree_iterator_int_ __retval505;
  _Bool __insert_left506;
  struct std___Rb_tree_node_base* __z507;
  this500 = v494;
  __x501 = v495;
  __p502 = v496;
  __v503 = v497;
  __node_gen504 = v498;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t508 = this500;
  struct std___Rb_tree_node_base* t509 = __x501;
  _Bool cast510 = (_Bool)t509;
  _Bool ternary511;
  if (cast510) {
    _Bool c512 = 1;
    ternary511 = (_Bool)c512;
  } else {
    struct std___Rb_tree_node_base* t513 = __p502;
    struct std___Rb_tree_node_base* r514 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t508);
    _Bool c515 = ((t513 == r514)) ? 1 : 0;
    ternary511 = (_Bool)c515;
  }
  _Bool ternary516;
  if (ternary511) {
    _Bool c517 = 1;
    ternary516 = (_Bool)c517;
  } else {
    struct std___Identity_int_ ref_tmp0518;
    struct std___Rb_tree_key_compare_std__less_int__* base519 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t508->_M_impl) + 0);
    struct std__less_int_* cast520 = (struct std__less_int_*)base519;
    int* t521 = __v503;
    int* r522 = std___Identity_int___operator___int___const(&ref_tmp0518, t521);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t523 = __p502;
    int* r524 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t523);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r525 = std__less_int___operator___int_const___int_const___const(cast520, r522, r524);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary516 = (_Bool)r525;
  }
  __insert_left506 = ternary516;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t526 = __node_gen504;
  int* t527 = __v503;
  struct std___Rb_tree_node_int_* r528 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t526, t527);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base529 = (struct std___Rb_tree_node_base*)((char *)r528 + 0);
  struct std___Rb_tree_node_base* r530 = std___Rb_tree_node_base___M_base_ptr___const(base529);
  __z507 = r530;
  _Bool t531 = __insert_left506;
  struct std___Rb_tree_node_base* t532 = __z507;
  struct std___Rb_tree_node_base* t533 = __p502;
  struct std___Rb_tree_header* base534 = (struct std___Rb_tree_header*)((char *)&(t508->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t531, t532, t533, &base534->_M_header);
  struct std___Rb_tree_header* base535 = (struct std___Rb_tree_header*)((char *)&(t508->_M_impl) + 8);
  unsigned long t536 = base535->_M_node_count;
  unsigned long u537 = t536 + 1;
  base535->_M_node_count = u537;
  struct std___Rb_tree_node_base* t538 = __z507;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval505, t538);
  struct std___Rb_tree_iterator_int_ t539 = __retval505;
  return t539;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v540, struct std___Rb_tree_node_base* v541, int* v542) {
bb543:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this544;
  struct std___Rb_tree_node_base* __p545;
  int* __v546;
  struct std___Rb_tree_iterator_int_ __retval547;
  _Bool __insert_left548;
  struct std___Rb_tree_node_base* __z549;
  this544 = v540;
  __p545 = v541;
  __v546 = v542;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t550 = this544;
  struct std___Rb_tree_node_base* t551 = __p545;
  struct std___Rb_tree_node_base* r552 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t550);
  _Bool c553 = ((t551 == r552)) ? 1 : 0;
  _Bool ternary554;
  if (c553) {
    _Bool c555 = 1;
    ternary554 = (_Bool)c555;
  } else {
    struct std___Identity_int_ ref_tmp0556;
    struct std___Rb_tree_key_compare_std__less_int__* base557 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t550->_M_impl) + 0);
    struct std__less_int_* cast558 = (struct std__less_int_*)base557;
    struct std___Rb_tree_node_base* t559 = __p545;
    int* r560 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t559);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t561 = __v546;
    int* r562 = std___Identity_int___operator___int___const(&ref_tmp0556, t561);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r563 = std__less_int___operator___int_const___int_const___const(cast558, r560, r562);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u564 = !r563;
    ternary554 = (_Bool)u564;
  }
  __insert_left548 = ternary554;
  int* t565 = __v546;
  struct std___Rb_tree_node_int_* r566 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t550, t565);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base567 = (struct std___Rb_tree_node_base*)((char *)r566 + 0);
  struct std___Rb_tree_node_base* r568 = std___Rb_tree_node_base___M_base_ptr___const(base567);
  __z549 = r568;
  _Bool t569 = __insert_left548;
  struct std___Rb_tree_node_base* t570 = __z549;
  struct std___Rb_tree_node_base* t571 = __p545;
  struct std___Rb_tree_header* base572 = (struct std___Rb_tree_header*)((char *)&(t550->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t569, t570, t571, &base572->_M_header);
  struct std___Rb_tree_header* base573 = (struct std___Rb_tree_header*)((char *)&(t550->_M_impl) + 8);
  unsigned long t574 = base573->_M_node_count;
  unsigned long u575 = t574 + 1;
  base573->_M_node_count = u575;
  struct std___Rb_tree_node_base* t576 = __z549;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval547, t576);
  struct std___Rb_tree_iterator_int_ t577 = __retval547;
  return t577;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v578, int* v579) {
bb580:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this581;
  int* __v582;
  struct std___Rb_tree_iterator_int_ __retval583;
  struct std___Rb_tree_node_base* __x584;
  struct std___Rb_tree_node_base* __y585;
  this581 = v578;
  __v582 = v579;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t586 = this581;
  struct std___Rb_tree_node_base* r587 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t586);
  __x584 = r587;
  struct std___Rb_tree_node_base* r588 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t586);
  __y585 = r588;
    while (1) {
      struct std___Rb_tree_node_base* t589 = __x584;
      _Bool cast590 = (_Bool)t589;
      if (!cast590) break;
        struct std___Identity_int_ ref_tmp0591;
        struct std___Rb_tree_node_base** tmp_exprcleanup592;
        struct std___Rb_tree_node_base* t593 = __x584;
        __y585 = t593;
        struct std___Rb_tree_key_compare_std__less_int__* base594 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t586->_M_impl) + 0);
        struct std__less_int_* cast595 = (struct std__less_int_*)base594;
        struct std___Rb_tree_node_base* t596 = __x584;
        int* r597 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t596);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t598 = __v582;
        int* r599 = std___Identity_int___operator___int___const(&ref_tmp0591, t598);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r600 = std__less_int___operator___int_const___int_const___const(cast595, r597, r599);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u601 = !r600;
        struct std___Rb_tree_node_base* ternary602;
        if (u601) {
          struct std___Rb_tree_node_base* t603 = __x584;
          struct std___Rb_tree_node_base* r604 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t603);
          ternary602 = (struct std___Rb_tree_node_base*)r604;
        } else {
          struct std___Rb_tree_node_base* t605 = __x584;
          struct std___Rb_tree_node_base* r606 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t605);
          ternary602 = (struct std___Rb_tree_node_base*)r606;
        }
        __x584 = ternary602;
        tmp_exprcleanup592 = &__x584;
        struct std___Rb_tree_node_base** t607 = tmp_exprcleanup592;
    }
  struct std___Rb_tree_node_base* t608 = __y585;
  int* t609 = __v582;
  struct std___Rb_tree_iterator_int_ r610 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t586, t608, t609);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval583 = r610;
  struct std___Rb_tree_iterator_int_ t611 = __retval583;
  return t611;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v612, struct std___Rb_tree_const_iterator_int_ v613, int* v614, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v615) {
bb616:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this617;
  struct std___Rb_tree_const_iterator_int_ __position618;
  int* __v619;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen620;
  struct std___Rb_tree_iterator_int_ __retval621;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res622;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0623;
  struct std___Identity_int_ ref_tmp0624;
  this617 = v612;
  __position618 = v613;
  __v619 = v614;
  __node_gen620 = v615;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t625 = this617;
  agg_tmp0623 = __position618; // copy
  int* t626 = __v619;
  int* r627 = std___Identity_int___operator___int___const(&ref_tmp0624, t626);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t628 = agg_tmp0623;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r629 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t625, t628, r627);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res622 = r629;
    struct std___Rb_tree_node_base* t630 = __res622.second;
    _Bool cast631 = (_Bool)t630;
    if (cast631) {
      struct std___Rb_tree_node_base* t632 = __res622.first;
      struct std___Rb_tree_node_base* t633 = __res622.second;
      int* t634 = __v619;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t635 = __node_gen620;
      struct std___Rb_tree_iterator_int_ r636 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t625, t632, t633, t634, t635);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval621 = r636;
      struct std___Rb_tree_iterator_int_ t637 = __retval621;
      return t637;
    }
  int* t638 = __v619;
  struct std___Rb_tree_iterator_int_ r639 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t625, t638);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval621 = r639;
  struct std___Rb_tree_iterator_int_ t640 = __retval621;
  return t640;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v641) {
bb642:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this643;
  struct std___Rb_tree_iterator_int_ __retval644;
  this643 = v641;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t645 = this643;
  struct std___Rb_tree_node_base* r646 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t645);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval644, r646);
  struct std___Rb_tree_iterator_int_ t647 = __retval644;
  return t647;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v648, struct std___Rb_tree_iterator_int_* v649) {
bb650:
  struct std___Rb_tree_const_iterator_int_* this651;
  struct std___Rb_tree_iterator_int_* __it652;
  this651 = v648;
  __it652 = v649;
  struct std___Rb_tree_const_iterator_int_* t653 = this651;
  struct std___Rb_tree_iterator_int_* t654 = __it652;
  struct std___Rb_tree_node_base* t655 = t654->_M_node;
  t653->_M_node = t655;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v656, int* v657, int* v658) {
bb659:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this660;
  int* __first661;
  int* __last662;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an663;
  this660 = v656;
  __first661 = v657;
  __last662 = v658;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t664 = this660;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an663, t664);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp0665;
    struct std___Rb_tree_iterator_int_ ref_tmp0666;
    struct std___Rb_tree_iterator_int_ agg_tmp1667;
    while (1) {
      int* t669 = __first661;
      int* t670 = __last662;
      _Bool c671 = ((t669 != t670)) ? 1 : 0;
      if (!c671) break;
      struct std___Rb_tree_iterator_int_ r672 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t664);
      ref_tmp0666 = r672;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp0665, &ref_tmp0666);
      int* t673 = __first661;
      struct std___Rb_tree_const_iterator_int_ t674 = agg_tmp0665;
      struct std___Rb_tree_iterator_int_ r675 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t664, t674, t673, &__an663);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp1667 = r675;
    for_step668: ;
      int* t676 = __first661;
      int c677 = 1;
      int* ptr678 = &(t676)[c677];
      __first661 = ptr678;
    }
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertIPiEEvT_S6_
void void_std__multiset_int__std__less_int___std__allocator_int_____insert_int__(struct std__multiset_int__std__less_int___std__allocator_int__* v679, int* v680, int* v681) {
bb682:
  struct std__multiset_int__std__less_int___std__allocator_int__* this683;
  int* __first684;
  int* __last685;
  this683 = v679;
  __first684 = v680;
  __last685 = v681;
  struct std__multiset_int__std__less_int___std__allocator_int__* t686 = this683;
  int* t687 = __first684;
  int* t688 = __last685;
  std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(&t686->_M_t, t687, t688);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v689) {
bb690:
  struct std__multiset_int__std__less_int___std__allocator_int__* this691;
  unsigned long __retval692;
  this691 = v689;
  struct std__multiset_int__std__less_int___std__allocator_int__* t693 = this691;
  unsigned long r694 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t693->_M_t);
  __retval692 = r694;
  unsigned long t695 = __retval692;
  return t695;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v696, struct std___Rb_tree_node_base* v697) {
bb698:
  struct std___Rb_tree_const_iterator_int_* this699;
  struct std___Rb_tree_node_base* __x700;
  this699 = v696;
  __x700 = v697;
  struct std___Rb_tree_const_iterator_int_* t701 = this699;
  struct std___Rb_tree_node_base* t702 = __x700;
  t701->_M_node = t702;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v703) {
bb704:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this705;
  struct std___Rb_tree_const_iterator_int_ __retval706;
  this705 = v703;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t707 = this705;
  struct std___Rb_tree_header* base708 = (struct std___Rb_tree_header*)((char *)&(t707->_M_impl) + 8);
  struct std___Rb_tree_node_base* t709 = base708->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval706, t709);
  struct std___Rb_tree_const_iterator_int_ t710 = __retval706;
  return t710;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v711) {
bb712:
  struct std__multiset_int__std__less_int___std__allocator_int__* this713;
  struct std___Rb_tree_const_iterator_int_ __retval714;
  this713 = v711;
  struct std__multiset_int__std__less_int___std__allocator_int__* t715 = this713;
  struct std___Rb_tree_const_iterator_int_ r716 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t715->_M_t);
  __retval714 = r716;
  struct std___Rb_tree_const_iterator_int_ t717 = __retval714;
  return t717;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v718, struct std___Rb_tree_const_iterator_int_* v719) {
bb720:
  struct std___Rb_tree_const_iterator_int_* this721;
  struct std___Rb_tree_const_iterator_int_* unnamed722;
  struct std___Rb_tree_const_iterator_int_* __retval723;
  this721 = v718;
  unnamed722 = v719;
  struct std___Rb_tree_const_iterator_int_* t724 = this721;
  struct std___Rb_tree_const_iterator_int_* t725 = unnamed722;
  struct std___Rb_tree_node_base* t726 = t725->_M_node;
  t724->_M_node = t726;
  __retval723 = t724;
  struct std___Rb_tree_const_iterator_int_* t727 = __retval723;
  return t727;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v728) {
bb729:
  struct std___Rb_tree_const_iterator_int_* this730;
  int* __retval731;
  this730 = v728;
  struct std___Rb_tree_const_iterator_int_* t732 = this730;
  struct std___Rb_tree_node_base* t733 = t732->_M_node;
  struct std___Rb_tree_node_int_* derived734 = ((t733) ? (struct std___Rb_tree_node_int_*)((char *)t733 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r735 = std___Rb_tree_node_int____M_valptr___const(derived734);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval731 = r735;
  int* t736 = __retval731;
  return t736;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v737, int v738) {
bb739:
  struct std___Rb_tree_const_iterator_int_* this740;
  int unnamed741;
  struct std___Rb_tree_const_iterator_int_ __retval742;
  this740 = v737;
  unnamed741 = v738;
  struct std___Rb_tree_const_iterator_int_* t743 = this740;
  __retval742 = *t743; // copy
  struct std___Rb_tree_node_base* t744 = t743->_M_node;
  struct std___Rb_tree_node_base* r745 = std___Rb_tree_increment(t744);
  t743->_M_node = r745;
  struct std___Rb_tree_const_iterator_int_ t746 = __retval742;
  return t746;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v747) {
bb748:
  struct std__multiset_int__std__less_int___std__allocator_int__* this749;
  this749 = v747;
  struct std__multiset_int__std__less_int___std__allocator_int__* t750 = this749;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t750->_M_t);
  }
  return;
}

// function: main
int main() {
bb751:
  int __retval752;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset753;
  struct std___Rb_tree_const_iterator_int_ it754;
  int myints755[3];
  struct std___Rb_tree_const_iterator_int_ ref_tmp0756;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0757;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1758;
  int c759 = 0;
  __retval752 = c759;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset753);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it754);
    // array copy
    __builtin_memcpy(myints755, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    int* cast760 = (int*)&(myints755);
    int* cast761 = (int*)&(myints755);
    int c762 = 3;
    int* ptr763 = &(cast761)[c762];
    void_std__multiset_int__std__less_int___std__allocator_int_____insert_int__(&myset753, cast760, ptr763);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset753);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r764 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset753);
    unsigned long c765 = 3;
    _Bool c766 = ((r764 == c765)) ? 1 : 0;
    if (c766) {
    } else {
      char* cast767 = (char*)&(_str);
      char* c768 = _str_1;
      unsigned int c769 = 22;
      char* cast770 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast767, c768, c769, cast770);
    }
    struct std___Rb_tree_const_iterator_int_ r771 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset753);
    ref_tmp0756 = r771;
    struct std___Rb_tree_const_iterator_int_* r772 = std___Rb_tree_const_iterator_int___operator_(&it754, &ref_tmp0756);
    int* r773 = std___Rb_tree_const_iterator_int___operator____const(&it754);
    int t774 = *r773;
    int c775 = 5;
    _Bool c776 = ((t774 == c775)) ? 1 : 0;
    if (c776) {
    } else {
      char* cast777 = (char*)&(_str_2);
      char* c778 = _str_1;
      unsigned int c779 = 25;
      char* cast780 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast777, c778, c779, cast780);
    }
    int c781 = 0;
    struct std___Rb_tree_const_iterator_int_ r782 = std___Rb_tree_const_iterator_int___operator__(&it754, c781);
    agg_tmp0757 = r782;
    int* r783 = std___Rb_tree_const_iterator_int___operator____const(&it754);
    int t784 = *r783;
    int c785 = 10;
    _Bool c786 = ((t784 == c785)) ? 1 : 0;
    if (c786) {
    } else {
      char* cast787 = (char*)&(_str_3);
      char* c788 = _str_1;
      unsigned int c789 = 27;
      char* cast790 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast787, c788, c789, cast790);
    }
    int c791 = 0;
    struct std___Rb_tree_const_iterator_int_ r792 = std___Rb_tree_const_iterator_int___operator__(&it754, c791);
    agg_tmp1758 = r792;
    int* r793 = std___Rb_tree_const_iterator_int___operator____const(&it754);
    int t794 = *r793;
    int c795 = 15;
    _Bool c796 = ((t794 == c795)) ? 1 : 0;
    if (c796) {
    } else {
      char* cast797 = (char*)&(_str_4);
      char* c798 = _str_1;
      unsigned int c799 = 29;
      char* cast800 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast797, c798, c799, cast800);
    }
    int c801 = 0;
    __retval752 = c801;
    int t802 = __retval752;
    int ret_val803 = t802;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset753);
    }
    return ret_val803;
  int t804 = __retval752;
  return t804;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v805) {
bb806:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this807;
  this807 = v805;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t808 = this807;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t808->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v809) {
bb810:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this811;
  this811 = v809;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t812 = this811;
    struct std___Rb_tree_node_int_* r813 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t812);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t812, r813);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t812->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t812->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v814) {
bb815:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this816;
  this816 = v814;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t817 = this816;
  struct std__allocator_std___Rb_tree_node_int__* base818 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t817 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base818);
    struct std___Rb_tree_key_compare_std__less_int__* base819 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t817 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base819);
    struct std___Rb_tree_header* base820 = (struct std___Rb_tree_header*)((char *)t817 + 8);
    std___Rb_tree_header___Rb_tree_header(base820);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v821) {
bb822:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this823;
  this823 = v821;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t824 = this823;
  {
    struct std__allocator_std___Rb_tree_node_int__* base825 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t824 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base825);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v826) {
bb827:
  struct std____new_allocator_std___Rb_tree_node_int__* this828;
  this828 = v826;
  struct std____new_allocator_std___Rb_tree_node_int__* t829 = this828;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v830) {
bb831:
  struct std__allocator_std___Rb_tree_node_int__* this832;
  this832 = v830;
  struct std__allocator_std___Rb_tree_node_int__* t833 = this832;
  struct std____new_allocator_std___Rb_tree_node_int__* base834 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t833 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base834);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v835) {
bb836:
  struct std___Rb_tree_key_compare_std__less_int__* this837;
  this837 = v835;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v838) {
bb839:
  struct std___Rb_tree_header* this840;
  this840 = v838;
  struct std___Rb_tree_header* t841 = this840;
  struct std___Rb_tree_node_base* c842 = ((void*)0);
  t841->_M_header._M_parent = c842;
  t841->_M_header._M_left = &t841->_M_header;
  t841->_M_header._M_right = &t841->_M_header;
  unsigned long c843 = 0;
  t841->_M_node_count = c843;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v844) {
bb845:
  struct std___Rb_tree_header* this846;
  this846 = v844;
  struct std___Rb_tree_header* t847 = this846;
  unsigned int c848 = 0;
  t847->_M_header._M_color = c848;
  std___Rb_tree_header___M_reset(t847);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v849) {
bb850:
  struct std__allocator_std___Rb_tree_node_int__* this851;
  this851 = v849;
  struct std__allocator_std___Rb_tree_node_int__* t852 = this851;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v853) {
bb854:
  struct std___Rb_tree_node_int_* this855;
  struct std___Rb_tree_node_int_* __retval856;
  this855 = v853;
  struct std___Rb_tree_node_int_* t857 = this855;
  __retval856 = t857;
  struct std___Rb_tree_node_int_* t858 = __retval856;
  return t858;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v859) {
bb860:
  struct std___Rb_tree_node_int_* __x861;
  struct std___Rb_tree_node_int_* __retval862;
  __x861 = v859;
  struct std___Rb_tree_node_int_* t863 = __x861;
  struct std___Rb_tree_node_base* base864 = (struct std___Rb_tree_node_base*)((char *)t863 + 0);
  struct std___Rb_tree_node_base* t865 = base864->_M_right;
  _Bool cast866 = (_Bool)t865;
  struct std___Rb_tree_node_int_* ternary867;
  if (cast866) {
    struct std___Rb_tree_node_int_* t868 = __x861;
    struct std___Rb_tree_node_base* base869 = (struct std___Rb_tree_node_base*)((char *)t868 + 0);
    struct std___Rb_tree_node_base* t870 = base869->_M_right;
    struct std___Rb_tree_node_int_* derived871 = (struct std___Rb_tree_node_int_*)((char *)t870 - 0);
    struct std___Rb_tree_node_int_* r872 = std___Rb_tree_node_int____M_node_ptr(derived871);
    ternary867 = (struct std___Rb_tree_node_int_*)r872;
  } else {
    struct std___Rb_tree_node_int_* c873 = ((void*)0);
    ternary867 = (struct std___Rb_tree_node_int_*)c873;
  }
  __retval862 = ternary867;
  struct std___Rb_tree_node_int_* t874 = __retval862;
  return t874;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v875) {
bb876:
  struct std___Rb_tree_node_int_* __x877;
  struct std___Rb_tree_node_int_* __retval878;
  __x877 = v875;
  struct std___Rb_tree_node_int_* t879 = __x877;
  struct std___Rb_tree_node_base* base880 = (struct std___Rb_tree_node_base*)((char *)t879 + 0);
  struct std___Rb_tree_node_base* t881 = base880->_M_left;
  _Bool cast882 = (_Bool)t881;
  struct std___Rb_tree_node_int_* ternary883;
  if (cast882) {
    struct std___Rb_tree_node_int_* t884 = __x877;
    struct std___Rb_tree_node_base* base885 = (struct std___Rb_tree_node_base*)((char *)t884 + 0);
    struct std___Rb_tree_node_base* t886 = base885->_M_left;
    struct std___Rb_tree_node_int_* derived887 = (struct std___Rb_tree_node_int_*)((char *)t886 - 0);
    struct std___Rb_tree_node_int_* r888 = std___Rb_tree_node_int____M_node_ptr(derived887);
    ternary883 = (struct std___Rb_tree_node_int_*)r888;
  } else {
    struct std___Rb_tree_node_int_* c889 = ((void*)0);
    ternary883 = (struct std___Rb_tree_node_int_*)c889;
  }
  __retval878 = ternary883;
  struct std___Rb_tree_node_int_* t890 = __retval878;
  return t890;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v891) {
bb892:
  int* __location893;
  __location893 = v891;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v894, int* v895) {
bb896:
  struct std__allocator_std___Rb_tree_node_int__* __a897;
  int* __p898;
  __a897 = v894;
  __p898 = v895;
  int* t899 = __p898;
  void_std__destroy_at_int_(t899);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v900) {
bb901:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this902;
  struct std__allocator_std___Rb_tree_node_int__* __retval903;
  this902 = v900;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t904 = this902;
  struct std__allocator_std___Rb_tree_node_int__* base905 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t904->_M_impl) + 0);
  __retval903 = base905;
  struct std__allocator_std___Rb_tree_node_int__* t906 = __retval903;
  return t906;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v907) {
bb908:
  struct __gnu_cxx____aligned_membuf_int_* this909;
  void* __retval910;
  this909 = v907;
  struct __gnu_cxx____aligned_membuf_int_* t911 = this909;
  void* cast912 = (void*)&(t911->_M_storage);
  __retval910 = cast912;
  void* t913 = __retval910;
  return t913;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v914) {
bb915:
  struct __gnu_cxx____aligned_membuf_int_* this916;
  int* __retval917;
  this916 = v914;
  struct __gnu_cxx____aligned_membuf_int_* t918 = this916;
  void* r919 = __gnu_cxx____aligned_membuf_int____M_addr(t918);
  int* cast920 = (int*)r919;
  __retval917 = cast920;
  int* t921 = __retval917;
  return t921;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v922) {
bb923:
  struct std___Rb_tree_node_int_* this924;
  int* __retval925;
  this924 = v922;
  struct std___Rb_tree_node_int_* t926 = this924;
  int* r927 = __gnu_cxx____aligned_membuf_int____M_ptr(&t926->_M_storage);
  __retval925 = r927;
  int* t928 = __retval925;
  return t928;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v929, struct std___Rb_tree_node_int_* v930) {
bb931:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this932;
  struct std___Rb_tree_node_int_* __p933;
  this932 = v929;
  __p933 = v930;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t934 = this932;
  struct std__allocator_std___Rb_tree_node_int__* r935 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t934);
  struct std___Rb_tree_node_int_* t936 = __p933;
  int* r937 = std___Rb_tree_node_int____M_valptr(t936);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r935, r937);
  struct std___Rb_tree_node_int_* t938 = __p933;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb939:
  _Bool __retval940;
    _Bool c941 = 0;
    __retval940 = c941;
    _Bool t942 = __retval940;
    return t942;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v943, struct std___Rb_tree_node_int_* v944, unsigned long v945) {
bb946:
  struct std____new_allocator_std___Rb_tree_node_int__* this947;
  struct std___Rb_tree_node_int_* __p948;
  unsigned long __n949;
  this947 = v943;
  __p948 = v944;
  __n949 = v945;
  struct std____new_allocator_std___Rb_tree_node_int__* t950 = this947;
    unsigned long c951 = 8;
    unsigned long c952 = 16;
    _Bool c953 = ((c951 > c952)) ? 1 : 0;
    if (c953) {
      struct std___Rb_tree_node_int_* t954 = __p948;
      void* cast955 = (void*)t954;
      unsigned long t956 = __n949;
      unsigned long c957 = 40;
      unsigned long b958 = t956 * c957;
      unsigned long c959 = 8;
      operator_delete_3(cast955, b958, c959);
      return;
    }
  struct std___Rb_tree_node_int_* t960 = __p948;
  void* cast961 = (void*)t960;
  unsigned long t962 = __n949;
  unsigned long c963 = 40;
  unsigned long b964 = t962 * c963;
  operator_delete_2(cast961, b964);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v965, struct std___Rb_tree_node_int_* v966, unsigned long v967) {
bb968:
  struct std__allocator_std___Rb_tree_node_int__* this969;
  struct std___Rb_tree_node_int_* __p970;
  unsigned long __n971;
  this969 = v965;
  __p970 = v966;
  __n971 = v967;
  struct std__allocator_std___Rb_tree_node_int__* t972 = this969;
    _Bool r973 = std____is_constant_evaluated();
    if (r973) {
      struct std___Rb_tree_node_int_* t974 = __p970;
      void* cast975 = (void*)t974;
      operator_delete(cast975);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base976 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t972 + 0);
  struct std___Rb_tree_node_int_* t977 = __p970;
  unsigned long t978 = __n971;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base976, t977, t978);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v979, struct std___Rb_tree_node_int_* v980, unsigned long v981) {
bb982:
  struct std__allocator_std___Rb_tree_node_int__* __a983;
  struct std___Rb_tree_node_int_* __p984;
  unsigned long __n985;
  __a983 = v979;
  __p984 = v980;
  __n985 = v981;
  struct std__allocator_std___Rb_tree_node_int__* t986 = __a983;
  struct std___Rb_tree_node_int_* t987 = __p984;
  unsigned long t988 = __n985;
  std__allocator_std___Rb_tree_node_int_____deallocate(t986, t987, t988);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v989, struct std___Rb_tree_node_int_* v990) {
bb991:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this992;
  struct std___Rb_tree_node_int_* __p993;
  this992 = v989;
  __p993 = v990;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t994 = this992;
  struct std__allocator_std___Rb_tree_node_int__* r995 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t994);
  struct std___Rb_tree_node_int_* t996 = __p993;
  unsigned long c997 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r995, t996, c997);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v998, struct std___Rb_tree_node_int_* v999) {
bb1000:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1001;
  struct std___Rb_tree_node_int_* __p1002;
  this1001 = v998;
  __p1002 = v999;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1003 = this1001;
  struct std___Rb_tree_node_int_* t1004 = __p1002;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1003, t1004);
  struct std___Rb_tree_node_int_* t1005 = __p1002;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1003, t1005);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1006, struct std___Rb_tree_node_int_* v1007) {
bb1008:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1009;
  struct std___Rb_tree_node_int_* __x1010;
  this1009 = v1006;
  __x1010 = v1007;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1011 = this1009;
    while (1) {
      struct std___Rb_tree_node_int_* t1012 = __x1010;
      _Bool cast1013 = (_Bool)t1012;
      if (!cast1013) break;
        struct std___Rb_tree_node_int_* __y1014;
        struct std___Rb_tree_node_int_* t1015 = __x1010;
        struct std___Rb_tree_node_int_* r1016 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1015);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1011, r1016);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1017 = __x1010;
        struct std___Rb_tree_node_int_* r1018 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1017);
        if (__cir_exc_active) {
          return;
        }
        __y1014 = r1018;
        struct std___Rb_tree_node_int_* t1019 = __x1010;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1011, t1019);
        struct std___Rb_tree_node_int_* t1020 = __y1014;
        __x1010 = t1020;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1021) {
bb1022:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1023;
  struct std___Rb_tree_node_int_* __retval1024;
  struct std___Rb_tree_node_base* __begin1025;
  this1023 = v1021;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1026 = this1023;
  struct std___Rb_tree_header* base1027 = (struct std___Rb_tree_header*)((char *)&(t1026->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1028 = base1027->_M_header._M_parent;
  __begin1025 = t1028;
  struct std___Rb_tree_node_base* t1029 = __begin1025;
  _Bool cast1030 = (_Bool)t1029;
  struct std___Rb_tree_node_int_* ternary1031;
  if (cast1030) {
    struct std___Rb_tree_node_base* t1032 = __begin1025;
    struct std___Rb_tree_node_int_* derived1033 = (struct std___Rb_tree_node_int_*)((char *)t1032 - 0);
    struct std___Rb_tree_node_int_* r1034 = std___Rb_tree_node_int____M_node_ptr(derived1033);
    ternary1031 = (struct std___Rb_tree_node_int_*)r1034;
  } else {
    struct std___Rb_tree_node_int_* c1035 = ((void*)0);
    ternary1031 = (struct std___Rb_tree_node_int_*)c1035;
  }
  __retval1024 = ternary1031;
  struct std___Rb_tree_node_int_* t1036 = __retval1024;
  return t1036;
}

