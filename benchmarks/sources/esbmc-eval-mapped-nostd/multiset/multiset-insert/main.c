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
char _str[18] = "myset.size() == 5";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-insert/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 20";
char _str_4[10] = "*it == 24";
char _str_5[10] = "*it == 25";
char _str_6[10] = "*it == 26";
char _str_7[10] = "*it == 30";
char _str_8[10] = "*it == 40";
char _str_9[10] = "*it == 50";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert_2(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this11;
  struct std___Rb_tree_node_base* __retval12;
  this11 = v9;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t13 = this11;
  struct std___Rb_tree_header* base14 = (struct std___Rb_tree_header*)((char *)&(t13->_M_impl) + 8);
  struct std___Rb_tree_node_base* t15 = base14->_M_header._M_parent;
  __retval12 = t15;
  struct std___Rb_tree_node_base* t16 = __retval12;
  return t16;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v17) {
bb18:
  struct std___Rb_tree_node_base* this19;
  struct std___Rb_tree_node_base* __retval20;
  this19 = v17;
  struct std___Rb_tree_node_base* t21 = this19;
  __retval20 = t21;
  struct std___Rb_tree_node_base* t22 = __retval20;
  return t22;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23) {
bb24:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this25;
  struct std___Rb_tree_node_base* __retval26;
  this25 = v23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t27 = this25;
  struct std___Rb_tree_header* base28 = (struct std___Rb_tree_header*)((char *)&(t27->_M_impl) + 8);
  struct std___Rb_tree_node_base* r29 = std___Rb_tree_node_base___M_base_ptr___const(&base28->_M_header);
  __retval26 = r29;
  struct std___Rb_tree_node_base* t30 = __retval26;
  return t30;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v31, int* v32, int* v33) {
bb34:
  struct std__less_int_* this35;
  int* __x36;
  int* __y37;
  _Bool __retval38;
  this35 = v31;
  __x36 = v32;
  __y37 = v33;
  struct std__less_int_* t39 = this35;
  int* t40 = __x36;
  int t41 = *t40;
  int* t42 = __y37;
  int t43 = *t42;
  _Bool c44 = ((t41 < t43)) ? 1 : 0;
  __retval38 = c44;
  _Bool t45 = __retval38;
  return t45;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v46, int* v47) {
bb48:
  struct std___Identity_int_* this49;
  int* __x50;
  int* __retval51;
  this49 = v46;
  __x50 = v47;
  struct std___Identity_int_* t52 = this49;
  int* t53 = __x50;
  __retval51 = t53;
  int* t54 = __retval51;
  return t54;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v55) {
bb56:
  struct __gnu_cxx____aligned_membuf_int_* this57;
  void* __retval58;
  this57 = v55;
  struct __gnu_cxx____aligned_membuf_int_* t59 = this57;
  void* cast60 = (void*)&(t59->_M_storage);
  __retval58 = cast60;
  void* t61 = __retval58;
  return t61;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v62) {
bb63:
  struct __gnu_cxx____aligned_membuf_int_* this64;
  int* __retval65;
  this64 = v62;
  struct __gnu_cxx____aligned_membuf_int_* t66 = this64;
  void* r67 = __gnu_cxx____aligned_membuf_int____M_addr___const(t66);
  int* cast68 = (int*)r67;
  __retval65 = cast68;
  int* t69 = __retval65;
  return t69;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v70) {
bb71:
  struct std___Rb_tree_node_int_* this72;
  int* __retval73;
  this72 = v70;
  struct std___Rb_tree_node_int_* t74 = this72;
  int* r75 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t74->_M_storage);
  __retval73 = r75;
  int* t76 = __retval73;
  return t76;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v77) {
bb78:
  struct std___Rb_tree_node_int_* __node79;
  int* __retval80;
  struct std___Identity_int_ ref_tmp081;
  __node79 = v77;
  struct std___Rb_tree_node_int_* t82 = __node79;
  int* r83 = std___Rb_tree_node_int____M_valptr___const(t82);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r84 = std___Identity_int___operator___int_const___const(&ref_tmp081, r83);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval80 = r84;
  int* t85 = __retval80;
  return t85;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v86) {
bb87:
  struct std___Rb_tree_node_base* __x88;
  int* __retval89;
  __x88 = v86;
  struct std___Rb_tree_node_base* t90 = __x88;
  struct std___Rb_tree_node_int_* derived91 = (struct std___Rb_tree_node_int_*)((char *)t90 - 0);
  int* r92 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived91);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval89 = r92;
  int* t93 = __retval89;
  return t93;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v94) {
bb95:
  struct std___Rb_tree_node_base* __x96;
  struct std___Rb_tree_node_base* __retval97;
  __x96 = v94;
  struct std___Rb_tree_node_base* t98 = __x96;
  struct std___Rb_tree_node_base* t99 = t98->_M_left;
  __retval97 = t99;
  struct std___Rb_tree_node_base* t100 = __retval97;
  return t100;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v101) {
bb102:
  struct std___Rb_tree_node_base* __x103;
  struct std___Rb_tree_node_base* __retval104;
  __x103 = v101;
  struct std___Rb_tree_node_base* t105 = __x103;
  struct std___Rb_tree_node_base* t106 = t105->_M_right;
  __retval104 = t106;
  struct std___Rb_tree_node_base* t107 = __retval104;
  return t107;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v108, struct std___Rb_tree_node_base** v109, struct std___Rb_tree_node_base** v110) {
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

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v121, int* v122) {
bb123:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this124;
  int* __k125;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval126;
  struct std___Rb_tree_node_base* __x127;
  struct std___Rb_tree_node_base* __y128;
  this124 = v121;
  __k125 = v122;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t129 = this124;
  struct std___Rb_tree_node_base* r130 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t129);
  __x127 = r130;
  struct std___Rb_tree_node_base* r131 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t129);
  __y128 = r131;
    while (1) {
      struct std___Rb_tree_node_base* t132 = __x127;
      _Bool cast133 = (_Bool)t132;
      if (!cast133) break;
        struct std___Rb_tree_node_base* t134 = __x127;
        __y128 = t134;
        struct std___Rb_tree_key_compare_std__less_int__* base135 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t129->_M_impl) + 0);
        struct std__less_int_* cast136 = (struct std__less_int_*)base135;
        int* t137 = __k125;
        struct std___Rb_tree_node_base* t138 = __x127;
        int* r139 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t138);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r140 = std__less_int___operator___int_const___int_const___const(cast136, t137, r139);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary141;
        if (r140) {
          struct std___Rb_tree_node_base* t142 = __x127;
          struct std___Rb_tree_node_base* r143 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t142);
          ternary141 = (struct std___Rb_tree_node_base*)r143;
        } else {
          struct std___Rb_tree_node_base* t144 = __x127;
          struct std___Rb_tree_node_base* r145 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t144);
          ternary141 = (struct std___Rb_tree_node_base*)r145;
        }
        __x127 = ternary141;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval126, &__x127, &__y128);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t146 = __retval126;
  return t146;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v147, int* v148) {
bb149:
  struct std___Identity_int_* this150;
  int* __x151;
  int* __retval152;
  this150 = v147;
  __x151 = v148;
  struct std___Identity_int_* t153 = this150;
  int* t154 = __x151;
  __retval152 = t154;
  int* t155 = __retval152;
  return t155;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v156, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v157) {
bb158:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this159;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t160;
  this159 = v156;
  __t160 = v157;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t161 = this159;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t162 = __t160;
  t161->_M_t = t162;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v163) {
bb164:
  struct std____new_allocator_std___Rb_tree_node_int__* this165;
  unsigned long __retval166;
  this165 = v163;
  struct std____new_allocator_std___Rb_tree_node_int__* t167 = this165;
  unsigned long c168 = 9223372036854775807;
  unsigned long c169 = 40;
  unsigned long b170 = c168 / c169;
  __retval166 = b170;
  unsigned long t171 = __retval166;
  return t171;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v172, unsigned long v173, void* v174) {
bb175:
  struct std____new_allocator_std___Rb_tree_node_int__* this176;
  unsigned long __n177;
  void* unnamed178;
  struct std___Rb_tree_node_int_* __retval179;
  this176 = v172;
  __n177 = v173;
  unnamed178 = v174;
  struct std____new_allocator_std___Rb_tree_node_int__* t180 = this176;
    unsigned long t181 = __n177;
    unsigned long r182 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t180);
    _Bool c183 = ((t181 > r182)) ? 1 : 0;
    if (c183) {
        unsigned long t184 = __n177;
        unsigned long c185 = -1;
        unsigned long c186 = 40;
        unsigned long b187 = c185 / c186;
        _Bool c188 = ((t184 > b187)) ? 1 : 0;
        if (c188) {
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
    unsigned long c189 = 8;
    unsigned long c190 = 16;
    _Bool c191 = ((c189 > c190)) ? 1 : 0;
    if (c191) {
      unsigned long __al192;
      unsigned long c193 = 8;
      __al192 = c193;
      unsigned long t194 = __n177;
      unsigned long c195 = 40;
      unsigned long b196 = t194 * c195;
      unsigned long t197 = __al192;
      void* r198 = operator_new_2(b196, t197);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast199 = (struct std___Rb_tree_node_int_*)r198;
      __retval179 = cast199;
      struct std___Rb_tree_node_int_* t200 = __retval179;
      return t200;
    }
  unsigned long t201 = __n177;
  unsigned long c202 = 40;
  unsigned long b203 = t201 * c202;
  void* r204 = operator_new(b203);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast205 = (struct std___Rb_tree_node_int_*)r204;
  __retval179 = cast205;
  struct std___Rb_tree_node_int_* t206 = __retval179;
  return t206;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v207, unsigned long v208) {
bb209:
  struct std__allocator_std___Rb_tree_node_int__* this210;
  unsigned long __n211;
  struct std___Rb_tree_node_int_* __retval212;
  this210 = v207;
  __n211 = v208;
  struct std__allocator_std___Rb_tree_node_int__* t213 = this210;
    _Bool r214 = std____is_constant_evaluated();
    if (r214) {
        unsigned long t215 = __n211;
        unsigned long c216 = 40;
        unsigned long ovr217;
        _Bool ovf218 = __builtin_mul_overflow(t215, c216, &ovr217);
        __n211 = ovr217;
        if (ovf218) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t219 = __n211;
      void* r220 = operator_new(t219);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast221 = (struct std___Rb_tree_node_int_*)r220;
      __retval212 = cast221;
      struct std___Rb_tree_node_int_* t222 = __retval212;
      return t222;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base223 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t213 + 0);
  unsigned long t224 = __n211;
  void* c225 = ((void*)0);
  struct std___Rb_tree_node_int_* r226 = std____new_allocator_std___Rb_tree_node_int_____allocate(base223, t224, c225);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval212 = r226;
  struct std___Rb_tree_node_int_* t227 = __retval212;
  return t227;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v228, unsigned long v229) {
bb230:
  struct std__allocator_std___Rb_tree_node_int__* __a231;
  unsigned long __n232;
  struct std___Rb_tree_node_int_* __retval233;
  __a231 = v228;
  __n232 = v229;
  struct std__allocator_std___Rb_tree_node_int__* t234 = __a231;
  unsigned long t235 = __n232;
  struct std___Rb_tree_node_int_* r236 = std__allocator_std___Rb_tree_node_int_____allocate(t234, t235);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval233 = r236;
  struct std___Rb_tree_node_int_* t237 = __retval233;
  return t237;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v238) {
bb239:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this240;
  struct std___Rb_tree_node_int_* __retval241;
  this240 = v238;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t242 = this240;
  struct std__allocator_std___Rb_tree_node_int__* r243 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t242);
  unsigned long c244 = 1;
  struct std___Rb_tree_node_int_* r245 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r243, c244);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval241 = r245;
  struct std___Rb_tree_node_int_* t246 = __retval241;
  return t246;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v247, int* v248) {
bb249:
  int* __location250;
  int* __args251;
  int* __retval252;
  void* __loc253;
  __location250 = v247;
  __args251 = v248;
  int* t254 = __location250;
  void* cast255 = (void*)t254;
  __loc253 = cast255;
    void* t256 = __loc253;
    int* cast257 = (int*)t256;
    int* t258 = __args251;
    int t259 = *t258;
    *cast257 = t259;
    __retval252 = cast257;
    int* t260 = __retval252;
    return t260;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v261, int* v262, int* v263) {
bb264:
  struct std__allocator_std___Rb_tree_node_int__* __a265;
  int* __p266;
  int* __args267;
  __a265 = v261;
  __p266 = v262;
  __args267 = v263;
  int* t268 = __p266;
  int* t269 = __args267;
  int* r270 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t268, t269);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v271, struct std___Rb_tree_node_int_* v272, int* v273) {
bb274:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this275;
  struct std___Rb_tree_node_int_* __node276;
  int* __args277;
  this275 = v271;
  __node276 = v272;
  __args277 = v273;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t278 = this275;
      struct std__allocator_std___Rb_tree_node_int__* r280 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t278);
      struct std___Rb_tree_node_int_* t281 = __node276;
      int* r282 = std___Rb_tree_node_int____M_valptr(t281);
      if (__cir_exc_active) {
        goto cir_try_dispatch279;
      }
      int* t283 = __args277;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r280, r282, t283);
    cir_try_dispatch279: ;
    if (__cir_exc_active) {
    {
      int ca_tok284 = 0;
      void* ca_exn285 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t286 = __node276;
        struct std___Rb_tree_node_int_* t287 = __node276;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t278, t287);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v288, int* v289) {
bb290:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this291;
  int* __args292;
  struct std___Rb_tree_node_int_* __retval293;
  struct std___Rb_tree_node_int_* __tmp294;
  this291 = v288;
  __args292 = v289;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t295 = this291;
  struct std___Rb_tree_node_int_* r296 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t295);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp294 = r296;
  struct std___Rb_tree_node_int_* t297 = __tmp294;
  int* t298 = __args292;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t295, t297, t298);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t299 = __tmp294;
  __retval293 = t299;
  struct std___Rb_tree_node_int_* t300 = __retval293;
  return t300;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v301, int* v302) {
bb303:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this304;
  int* __arg305;
  struct std___Rb_tree_node_int_* __retval306;
  this304 = v301;
  __arg305 = v302;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t307 = this304;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t308 = t307->_M_t;
  int* t309 = __arg305;
  struct std___Rb_tree_node_int_* r310 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t308, t309);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval306 = r310;
  struct std___Rb_tree_node_int_* t311 = __retval306;
  return t311;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v312, struct std___Rb_tree_node_base* v313, struct std___Rb_tree_node_base* v314, struct std___Rb_tree_node_base* v315) {
bb316:
  _Bool __insert_left317;
  struct std___Rb_tree_node_base* __x318;
  struct std___Rb_tree_node_base* __p319;
  struct std___Rb_tree_node_base* __header320;
  __insert_left317 = v312;
  __x318 = v313;
  __p319 = v314;
  __header320 = v315;
  _Bool t321 = __insert_left317;
  struct std___Rb_tree_node_base* t322 = __x318;
  struct std___Rb_tree_node_base* t323 = __p319;
  struct std___Rb_tree_node_base* t324 = __header320;
  std___Rb_tree_insert_and_rebalance(t321, t322, t323, t324);
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v325, struct std___Rb_tree_node_base* v326) {
bb327:
  struct std___Rb_tree_iterator_int_* this328;
  struct std___Rb_tree_node_base* __x329;
  this328 = v325;
  __x329 = v326;
  struct std___Rb_tree_iterator_int_* t330 = this328;
  struct std___Rb_tree_node_base* t331 = __x329;
  t330->_M_node = t331;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v332, struct std___Rb_tree_node_base* v333, struct std___Rb_tree_node_base* v334, int* v335, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v336) {
bb337:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this338;
  struct std___Rb_tree_node_base* __x339;
  struct std___Rb_tree_node_base* __p340;
  int* __v341;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen342;
  struct std___Rb_tree_iterator_int_ __retval343;
  _Bool __insert_left344;
  struct std___Rb_tree_node_base* __z345;
  this338 = v332;
  __x339 = v333;
  __p340 = v334;
  __v341 = v335;
  __node_gen342 = v336;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t346 = this338;
  struct std___Rb_tree_node_base* t347 = __x339;
  _Bool cast348 = (_Bool)t347;
  _Bool ternary349;
  if (cast348) {
    _Bool c350 = 1;
    ternary349 = (_Bool)c350;
  } else {
    struct std___Rb_tree_node_base* t351 = __p340;
    struct std___Rb_tree_node_base* r352 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t346);
    _Bool c353 = ((t351 == r352)) ? 1 : 0;
    ternary349 = (_Bool)c353;
  }
  _Bool ternary354;
  if (ternary349) {
    _Bool c355 = 1;
    ternary354 = (_Bool)c355;
  } else {
    struct std___Identity_int_ ref_tmp0356;
    struct std___Rb_tree_key_compare_std__less_int__* base357 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t346->_M_impl) + 0);
    struct std__less_int_* cast358 = (struct std__less_int_*)base357;
    int* t359 = __v341;
    int* r360 = std___Identity_int___operator___int___const(&ref_tmp0356, t359);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t361 = __p340;
    int* r362 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t361);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r363 = std__less_int___operator___int_const___int_const___const(cast358, r360, r362);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary354 = (_Bool)r363;
  }
  __insert_left344 = ternary354;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t364 = __node_gen342;
  int* t365 = __v341;
  struct std___Rb_tree_node_int_* r366 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t364, t365);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base367 = (struct std___Rb_tree_node_base*)((char *)r366 + 0);
  struct std___Rb_tree_node_base* r368 = std___Rb_tree_node_base___M_base_ptr___const(base367);
  __z345 = r368;
  _Bool t369 = __insert_left344;
  struct std___Rb_tree_node_base* t370 = __z345;
  struct std___Rb_tree_node_base* t371 = __p340;
  struct std___Rb_tree_header* base372 = (struct std___Rb_tree_header*)((char *)&(t346->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t369, t370, t371, &base372->_M_header);
  struct std___Rb_tree_header* base373 = (struct std___Rb_tree_header*)((char *)&(t346->_M_impl) + 8);
  unsigned long t374 = base373->_M_node_count;
  unsigned long u375 = t374 + 1;
  base373->_M_node_count = u375;
  struct std___Rb_tree_node_base* t376 = __z345;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval343, t376);
  struct std___Rb_tree_iterator_int_ t377 = __retval343;
  return t377;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v378, int* v379) {
bb380:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this381;
  int* __v382;
  struct std___Rb_tree_iterator_int_ __retval383;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res384;
  struct std___Identity_int_ ref_tmp0385;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an386;
  this381 = v378;
  __v382 = v379;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t387 = this381;
  int* t388 = __v382;
  int* r389 = std___Identity_int___operator___int___const(&ref_tmp0385, t388);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r390 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t387, r389);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res384 = r390;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an386, t387);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t391 = __res384.first;
  struct std___Rb_tree_node_base* t392 = __res384.second;
  int* t393 = __v382;
  struct std___Rb_tree_iterator_int_ r394 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t387, t391, t392, t393, &__an386);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval383 = r394;
  struct std___Rb_tree_iterator_int_ t395 = __retval383;
  return t395;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v396, struct std___Rb_tree_iterator_int_* v397) {
bb398:
  struct std___Rb_tree_const_iterator_int_* this399;
  struct std___Rb_tree_iterator_int_* __it400;
  this399 = v396;
  __it400 = v397;
  struct std___Rb_tree_const_iterator_int_* t401 = this399;
  struct std___Rb_tree_iterator_int_* t402 = __it400;
  struct std___Rb_tree_node_base* t403 = t402->_M_node;
  t401->_M_node = t403;
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* v404, int* v405) {
bb406:
  struct std__multiset_int__std__less_int___std__allocator_int__* this407;
  int* __x408;
  struct std___Rb_tree_const_iterator_int_ __retval409;
  struct std___Rb_tree_iterator_int_ ref_tmp0410;
  this407 = v404;
  __x408 = v405;
  struct std__multiset_int__std__less_int___std__allocator_int__* t411 = this407;
  int* t412 = __x408;
  struct std___Rb_tree_iterator_int_ r413 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(&t411->_M_t, t412);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0410 = r413;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval409, &ref_tmp0410);
  struct std___Rb_tree_const_iterator_int_ t414 = __retval409;
  return t414;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v415) {
bb416:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this417;
  unsigned long __retval418;
  this417 = v415;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t419 = this417;
  struct std___Rb_tree_header* base420 = (struct std___Rb_tree_header*)((char *)&(t419->_M_impl) + 8);
  unsigned long t421 = base420->_M_node_count;
  __retval418 = t421;
  unsigned long t422 = __retval418;
  return t422;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v423) {
bb424:
  struct std__multiset_int__std__less_int___std__allocator_int__* this425;
  unsigned long __retval426;
  this425 = v423;
  struct std__multiset_int__std__less_int___std__allocator_int__* t427 = this425;
  unsigned long r428 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t427->_M_t);
  __retval426 = r428;
  unsigned long t429 = __retval426;
  return t429;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v430, struct std___Rb_tree_const_iterator_int_* v431) {
bb432:
  struct std___Rb_tree_const_iterator_int_* this433;
  struct std___Rb_tree_const_iterator_int_* unnamed434;
  struct std___Rb_tree_const_iterator_int_* __retval435;
  this433 = v430;
  unnamed434 = v431;
  struct std___Rb_tree_const_iterator_int_* t436 = this433;
  struct std___Rb_tree_const_iterator_int_* t437 = unnamed434;
  struct std___Rb_tree_node_base* t438 = t437->_M_node;
  t436->_M_node = t438;
  __retval435 = t436;
  struct std___Rb_tree_const_iterator_int_* t439 = __retval435;
  return t439;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v440) {
bb441:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this442;
  struct std___Rb_tree_node_base** __retval443;
  this442 = v440;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t444 = this442;
  struct std___Rb_tree_header* base445 = (struct std___Rb_tree_header*)((char *)&(t444->_M_impl) + 8);
  __retval443 = &base445->_M_header._M_right;
  struct std___Rb_tree_node_base** t446 = __retval443;
  return t446;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v447, struct std___Rb_tree_node_base** v448, struct std___Rb_tree_node_base** v449) {
bb450:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this451;
  struct std___Rb_tree_node_base** __x452;
  struct std___Rb_tree_node_base** __y453;
  this451 = v447;
  __x452 = v448;
  __y453 = v449;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t454 = this451;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base455 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t454 + 0);
  struct std___Rb_tree_node_base** t456 = __x452;
  struct std___Rb_tree_node_base* t457 = *t456;
  t454->first = t457;
  struct std___Rb_tree_node_base** t458 = __y453;
  struct std___Rb_tree_node_base* t459 = *t458;
  t454->second = t459;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v460) {
bb461:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this462;
  struct std___Rb_tree_node_base** __retval463;
  this462 = v460;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t464 = this462;
  struct std___Rb_tree_header* base465 = (struct std___Rb_tree_header*)((char *)&(t464->_M_impl) + 8);
  __retval463 = &base465->_M_header._M_left;
  struct std___Rb_tree_node_base** t466 = __retval463;
  return t466;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v467) {
bb468:
  struct std___Rb_tree_iterator_int_* this469;
  struct std___Rb_tree_iterator_int_* __retval470;
  this469 = v467;
  struct std___Rb_tree_iterator_int_* t471 = this469;
  struct std___Rb_tree_node_base* t472 = t471->_M_node;
  struct std___Rb_tree_node_base* r473 = std___Rb_tree_decrement(t472);
  t471->_M_node = r473;
  __retval470 = t471;
  struct std___Rb_tree_iterator_int_* t474 = __retval470;
  return t474;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v475) {
bb476:
  struct std___Rb_tree_iterator_int_* this477;
  struct std___Rb_tree_iterator_int_* __retval478;
  this477 = v475;
  struct std___Rb_tree_iterator_int_* t479 = this477;
  struct std___Rb_tree_node_base* t480 = t479->_M_node;
  struct std___Rb_tree_node_base* r481 = std___Rb_tree_increment(t480);
  t479->_M_node = r481;
  __retval478 = t479;
  struct std___Rb_tree_iterator_int_* t482 = __retval478;
  return t482;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v483, struct std___Rb_tree_node_base** v484, struct std___Rb_tree_node_base** v485) {
bb486:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this487;
  struct std___Rb_tree_node_base** __x488;
  struct std___Rb_tree_node_base** __y489;
  this487 = v483;
  __x488 = v484;
  __y489 = v485;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t490 = this487;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base491 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t490 + 0);
  struct std___Rb_tree_node_base** t492 = __x488;
  struct std___Rb_tree_node_base* t493 = *t492;
  t490->first = t493;
  struct std___Rb_tree_node_base** t494 = __y489;
  struct std___Rb_tree_node_base* t495 = *t494;
  t490->second = t495;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v496, struct std___Rb_tree_const_iterator_int_ v497, int* v498) {
bb499:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this500;
  struct std___Rb_tree_const_iterator_int_ __position501;
  int* __k502;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval503;
  this500 = v496;
  __position501 = v497;
  __k502 = v498;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t504 = this500;
    struct std___Rb_tree_node_base* t505 = __position501._M_node;
    struct std___Rb_tree_node_base* r506 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t504);
    _Bool c507 = ((t505 == r506)) ? 1 : 0;
    if (c507) {
        unsigned long r508 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t504);
        unsigned long c509 = 0;
        _Bool c510 = ((r508 > c509)) ? 1 : 0;
        _Bool ternary511;
        if (c510) {
          struct std___Rb_tree_key_compare_std__less_int__* base512 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
          struct std__less_int_* cast513 = (struct std__less_int_*)base512;
          int* t514 = __k502;
          struct std___Rb_tree_node_base** r515 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
          struct std___Rb_tree_node_base* t516 = *r515;
          int* r517 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t516);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r518 = std__less_int___operator___int_const___int_const___const(cast513, t514, r517);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u519 = !r518;
          ternary511 = (_Bool)u519;
        } else {
          _Bool c520 = 0;
          ternary511 = (_Bool)c520;
        }
        if (ternary511) {
          struct std___Rb_tree_node_base* ref_tmp0521;
          struct std___Rb_tree_node_base* c522 = ((void*)0);
          ref_tmp0521 = c522;
          struct std___Rb_tree_node_base** r523 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp0521, r523);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t524 = __retval503;
          return t524;
        } else {
          int* t525 = __k502;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r526 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t504, t525);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval503 = r526;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t527 = __retval503;
          return t527;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base528 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
        struct std__less_int_* cast529 = (struct std__less_int_*)base528;
        struct std___Rb_tree_node_base* t530 = __position501._M_node;
        int* r531 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t530);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t532 = __k502;
        _Bool r533 = std__less_int___operator___int_const___int_const___const(cast529, r531, t532);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u534 = !r533;
        if (u534) {
          struct std___Rb_tree_iterator_int_ __before535;
          struct std___Rb_tree_node_base* t536 = __position501._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before535, t536);
            struct std___Rb_tree_node_base* t537 = __position501._M_node;
            struct std___Rb_tree_node_base** r538 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t504);
            struct std___Rb_tree_node_base* t539 = *r538;
            _Bool c540 = ((t537 == t539)) ? 1 : 0;
            if (c540) {
              struct std___Rb_tree_node_base** r541 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t504);
              struct std___Rb_tree_node_base** r542 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t504);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, r541, r542);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t543 = __retval503;
              return t543;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base544 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
                struct std__less_int_* cast545 = (struct std__less_int_*)base544;
                int* t546 = __k502;
                struct std___Rb_tree_iterator_int_* r547 = std___Rb_tree_iterator_int___operator__(&__before535);
                struct std___Rb_tree_node_base* t548 = r547->_M_node;
                int* r549 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t548);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r550 = std__less_int___operator___int_const___int_const___const(cast545, t546, r549);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u551 = !r550;
                if (u551) {
                    struct std___Rb_tree_node_base* t552 = __before535._M_node;
                    struct std___Rb_tree_node_base* r553 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t552);
                    _Bool cast554 = (_Bool)r553;
                    _Bool u555 = !cast554;
                    if (u555) {
                      struct std___Rb_tree_node_base* ref_tmp1556;
                      struct std___Rb_tree_node_base* c557 = ((void*)0);
                      ref_tmp1556 = c557;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp1556, &__before535._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t558 = __retval503;
                      return t558;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &__position501._M_node, &__position501._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t559 = __retval503;
                      return t559;
                    }
                } else {
                  int* t560 = __k502;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r561 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t504, t560);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval503 = r561;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t562 = __retval503;
                  return t562;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after563;
          struct std___Rb_tree_node_base* t564 = __position501._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after563, t564);
            struct std___Rb_tree_node_base* t565 = __position501._M_node;
            struct std___Rb_tree_node_base** r566 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
            struct std___Rb_tree_node_base* t567 = *r566;
            _Bool c568 = ((t565 == t567)) ? 1 : 0;
            if (c568) {
              struct std___Rb_tree_node_base* ref_tmp2569;
              struct std___Rb_tree_node_base* c570 = ((void*)0);
              ref_tmp2569 = c570;
              struct std___Rb_tree_node_base** r571 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp2569, r571);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t572 = __retval503;
              return t572;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base573 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
                struct std__less_int_* cast574 = (struct std__less_int_*)base573;
                struct std___Rb_tree_iterator_int_* r575 = std___Rb_tree_iterator_int___operator___2(&__after563);
                struct std___Rb_tree_node_base* t576 = r575->_M_node;
                int* r577 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t576);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t578 = __k502;
                _Bool r579 = std__less_int___operator___int_const___int_const___const(cast574, r577, t578);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u580 = !r579;
                if (u580) {
                    struct std___Rb_tree_node_base* t581 = __position501._M_node;
                    struct std___Rb_tree_node_base* r582 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t581);
                    _Bool cast583 = (_Bool)r582;
                    _Bool u584 = !cast583;
                    if (u584) {
                      struct std___Rb_tree_node_base* ref_tmp3585;
                      struct std___Rb_tree_node_base* c586 = ((void*)0);
                      ref_tmp3585 = c586;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp3585, &__position501._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t587 = __retval503;
                      return t587;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &__after563._M_node, &__after563._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t588 = __retval503;
                      return t588;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp4589;
                  struct std___Rb_tree_node_base* ref_tmp5590;
                  struct std___Rb_tree_node_base* c591 = ((void*)0);
                  ref_tmp4589 = c591;
                  struct std___Rb_tree_node_base* c592 = ((void*)0);
                  ref_tmp5590 = c592;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval503, &ref_tmp4589, &ref_tmp5590);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t593 = __retval503;
                  return t593;
                }
            }
        }
    }
  abort();
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v594, struct std___Rb_tree_node_base* v595, int* v596) {
bb597:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this598;
  struct std___Rb_tree_node_base* __p599;
  int* __v600;
  struct std___Rb_tree_iterator_int_ __retval601;
  _Bool __insert_left602;
  struct std___Rb_tree_node_base* __z603;
  this598 = v594;
  __p599 = v595;
  __v600 = v596;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t604 = this598;
  struct std___Rb_tree_node_base* t605 = __p599;
  struct std___Rb_tree_node_base* r606 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t604);
  _Bool c607 = ((t605 == r606)) ? 1 : 0;
  _Bool ternary608;
  if (c607) {
    _Bool c609 = 1;
    ternary608 = (_Bool)c609;
  } else {
    struct std___Identity_int_ ref_tmp0610;
    struct std___Rb_tree_key_compare_std__less_int__* base611 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t604->_M_impl) + 0);
    struct std__less_int_* cast612 = (struct std__less_int_*)base611;
    struct std___Rb_tree_node_base* t613 = __p599;
    int* r614 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t613);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t615 = __v600;
    int* r616 = std___Identity_int___operator___int___const(&ref_tmp0610, t615);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r617 = std__less_int___operator___int_const___int_const___const(cast612, r614, r616);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u618 = !r617;
    ternary608 = (_Bool)u618;
  }
  __insert_left602 = ternary608;
  int* t619 = __v600;
  struct std___Rb_tree_node_int_* r620 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t604, t619);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base621 = (struct std___Rb_tree_node_base*)((char *)r620 + 0);
  struct std___Rb_tree_node_base* r622 = std___Rb_tree_node_base___M_base_ptr___const(base621);
  __z603 = r622;
  _Bool t623 = __insert_left602;
  struct std___Rb_tree_node_base* t624 = __z603;
  struct std___Rb_tree_node_base* t625 = __p599;
  struct std___Rb_tree_header* base626 = (struct std___Rb_tree_header*)((char *)&(t604->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t623, t624, t625, &base626->_M_header);
  struct std___Rb_tree_header* base627 = (struct std___Rb_tree_header*)((char *)&(t604->_M_impl) + 8);
  unsigned long t628 = base627->_M_node_count;
  unsigned long u629 = t628 + 1;
  base627->_M_node_count = u629;
  struct std___Rb_tree_node_base* t630 = __z603;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval601, t630);
  struct std___Rb_tree_iterator_int_ t631 = __retval601;
  return t631;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v632, int* v633) {
bb634:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this635;
  int* __v636;
  struct std___Rb_tree_iterator_int_ __retval637;
  struct std___Rb_tree_node_base* __x638;
  struct std___Rb_tree_node_base* __y639;
  this635 = v632;
  __v636 = v633;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t640 = this635;
  struct std___Rb_tree_node_base* r641 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t640);
  __x638 = r641;
  struct std___Rb_tree_node_base* r642 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t640);
  __y639 = r642;
    while (1) {
      struct std___Rb_tree_node_base* t643 = __x638;
      _Bool cast644 = (_Bool)t643;
      if (!cast644) break;
        struct std___Identity_int_ ref_tmp0645;
        struct std___Rb_tree_node_base** tmp_exprcleanup646;
        struct std___Rb_tree_node_base* t647 = __x638;
        __y639 = t647;
        struct std___Rb_tree_key_compare_std__less_int__* base648 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t640->_M_impl) + 0);
        struct std__less_int_* cast649 = (struct std__less_int_*)base648;
        struct std___Rb_tree_node_base* t650 = __x638;
        int* r651 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t650);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t652 = __v636;
        int* r653 = std___Identity_int___operator___int___const(&ref_tmp0645, t652);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r654 = std__less_int___operator___int_const___int_const___const(cast649, r651, r653);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u655 = !r654;
        struct std___Rb_tree_node_base* ternary656;
        if (u655) {
          struct std___Rb_tree_node_base* t657 = __x638;
          struct std___Rb_tree_node_base* r658 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t657);
          ternary656 = (struct std___Rb_tree_node_base*)r658;
        } else {
          struct std___Rb_tree_node_base* t659 = __x638;
          struct std___Rb_tree_node_base* r660 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t659);
          ternary656 = (struct std___Rb_tree_node_base*)r660;
        }
        __x638 = ternary656;
        tmp_exprcleanup646 = &__x638;
        struct std___Rb_tree_node_base** t661 = tmp_exprcleanup646;
    }
  struct std___Rb_tree_node_base* t662 = __y639;
  int* t663 = __v636;
  struct std___Rb_tree_iterator_int_ r664 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int_(t640, t662, t663);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval637 = r664;
  struct std___Rb_tree_iterator_int_ t665 = __retval637;
  return t665;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v666, struct std___Rb_tree_const_iterator_int_ v667, int* v668, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v669) {
bb670:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this671;
  struct std___Rb_tree_const_iterator_int_ __position672;
  int* __v673;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen674;
  struct std___Rb_tree_iterator_int_ __retval675;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res676;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0677;
  struct std___Identity_int_ ref_tmp0678;
  this671 = v666;
  __position672 = v667;
  __v673 = v668;
  __node_gen674 = v669;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t679 = this671;
  agg_tmp0677 = __position672; // copy
  int* t680 = __v673;
  int* r681 = std___Identity_int___operator___int___const(&ref_tmp0678, t680);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t682 = agg_tmp0677;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r683 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t679, t682, r681);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res676 = r683;
    struct std___Rb_tree_node_base* t684 = __res676.second;
    _Bool cast685 = (_Bool)t684;
    if (cast685) {
      struct std___Rb_tree_node_base* t686 = __res676.first;
      struct std___Rb_tree_node_base* t687 = __res676.second;
      int* t688 = __v673;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t689 = __node_gen674;
      struct std___Rb_tree_iterator_int_ r690 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t679, t686, t687, t688, t689);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval675 = r690;
      struct std___Rb_tree_iterator_int_ t691 = __retval675;
      return t691;
    }
  int* t692 = __v673;
  struct std___Rb_tree_iterator_int_ r693 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int_(t679, t692);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval675 = r693;
  struct std___Rb_tree_iterator_int_ t694 = __retval675;
  return t694;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IiEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v695, struct std___Rb_tree_const_iterator_int_ v696, int* v697) {
bb698:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this699;
  struct std___Rb_tree_const_iterator_int_ __pos700;
  int* __x701;
  struct std___Rb_tree_iterator_int_ __retval702;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an703;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0704;
  this699 = v695;
  __pos700 = v696;
  __x701 = v697;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t705 = this699;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an703, t705);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0704 = __pos700; // copy
  int* t706 = __x701;
  struct std___Rb_tree_const_iterator_int_ t707 = agg_tmp0704;
  struct std___Rb_tree_iterator_int_ r708 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t705, t707, t706, &__an703);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval702 = r708;
  struct std___Rb_tree_iterator_int_ t709 = __retval702;
  return t709;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertESt23_Rb_tree_const_iteratorIiEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert_2(struct std__multiset_int__std__less_int___std__allocator_int__* v710, struct std___Rb_tree_const_iterator_int_ v711, int* v712) {
bb713:
  struct std__multiset_int__std__less_int___std__allocator_int__* this714;
  struct std___Rb_tree_const_iterator_int_ __position715;
  int* __x716;
  struct std___Rb_tree_const_iterator_int_ __retval717;
  struct std___Rb_tree_iterator_int_ ref_tmp0718;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0719;
  this714 = v710;
  __position715 = v711;
  __x716 = v712;
  struct std__multiset_int__std__less_int___std__allocator_int__* t720 = this714;
  agg_tmp0719 = __position715; // copy
  int* t721 = __x716;
  struct std___Rb_tree_const_iterator_int_ t722 = agg_tmp0719;
  struct std___Rb_tree_iterator_int_ r723 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int_(&t720->_M_t, t722, t721);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0718 = r723;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval717, &ref_tmp0718);
  struct std___Rb_tree_const_iterator_int_ t724 = __retval717;
  return t724;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v725, struct std___Rb_tree_node_base* v726) {
bb727:
  struct std___Rb_tree_const_iterator_int_* this728;
  struct std___Rb_tree_node_base* __x729;
  this728 = v725;
  __x729 = v726;
  struct std___Rb_tree_const_iterator_int_* t730 = this728;
  struct std___Rb_tree_node_base* t731 = __x729;
  t730->_M_node = t731;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v732) {
bb733:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this734;
  struct std___Rb_tree_const_iterator_int_ __retval735;
  this734 = v732;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t736 = this734;
  struct std___Rb_tree_header* base737 = (struct std___Rb_tree_header*)((char *)&(t736->_M_impl) + 8);
  struct std___Rb_tree_node_base* t738 = base737->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval735, t738);
  struct std___Rb_tree_const_iterator_int_ t739 = __retval735;
  return t739;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v740) {
bb741:
  struct std__multiset_int__std__less_int___std__allocator_int__* this742;
  struct std___Rb_tree_const_iterator_int_ __retval743;
  this742 = v740;
  struct std__multiset_int__std__less_int___std__allocator_int__* t744 = this742;
  struct std___Rb_tree_const_iterator_int_ r745 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t744->_M_t);
  __retval743 = r745;
  struct std___Rb_tree_const_iterator_int_ t746 = __retval743;
  return t746;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v747) {
bb748:
  struct std___Rb_tree_const_iterator_int_* this749;
  int* __retval750;
  this749 = v747;
  struct std___Rb_tree_const_iterator_int_* t751 = this749;
  struct std___Rb_tree_node_base* t752 = t751->_M_node;
  struct std___Rb_tree_node_int_* derived753 = ((t752) ? (struct std___Rb_tree_node_int_*)((char *)t752 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r754 = std___Rb_tree_node_int____M_valptr___const(derived753);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval750 = r754;
  int* t755 = __retval750;
  return t755;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v756, int v757) {
bb758:
  struct std___Rb_tree_const_iterator_int_* this759;
  int unnamed760;
  struct std___Rb_tree_const_iterator_int_ __retval761;
  this759 = v756;
  unnamed760 = v757;
  struct std___Rb_tree_const_iterator_int_* t762 = this759;
  __retval761 = *t762; // copy
  struct std___Rb_tree_node_base* t763 = t762->_M_node;
  struct std___Rb_tree_node_base* r764 = std___Rb_tree_increment(t763);
  t762->_M_node = r764;
  struct std___Rb_tree_const_iterator_int_ t765 = __retval761;
  return t765;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v766) {
bb767:
  struct std__multiset_int__std__less_int___std__allocator_int__* this768;
  this768 = v766;
  struct std__multiset_int__std__less_int___std__allocator_int__* t769 = this768;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t769->_M_t);
  }
  return;
}

// function: main
int main() {
bb770:
  int __retval771;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset772;
  struct std___Rb_tree_const_iterator_int_ it773;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1774;
  int ref_tmp2775;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1776;
  int ref_tmp3777;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2778;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3779;
  int ref_tmp4780;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4781;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5782;
  int ref_tmp5783;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6784;
  int myints785[3];
  struct std___Rb_tree_const_iterator_int_ ref_tmp6786;
  struct std___Rb_tree_const_iterator_int_ agg_tmp7787;
  struct std___Rb_tree_const_iterator_int_ agg_tmp8788;
  struct std___Rb_tree_const_iterator_int_ agg_tmp9789;
  struct std___Rb_tree_const_iterator_int_ agg_tmp10790;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11791;
  struct std___Rb_tree_const_iterator_int_ agg_tmp12792;
  struct std___Rb_tree_const_iterator_int_ agg_tmp13793;
  struct std___Rb_tree_const_iterator_int_ agg_tmp14794;
  int c795 = 0;
  __retval771 = c795;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset772);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it773);
      int i796;
      int ref_tmp0797;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0798;
      int c799 = 1;
      i796 = c799;
      while (1) {
        int t801 = i796;
        int c802 = 5;
        _Bool c803 = ((t801 <= c802)) ? 1 : 0;
        if (!c803) break;
        int t804 = i796;
        int c805 = 10;
        int b806 = t804 * c805;
        ref_tmp0797 = b806;
        struct std___Rb_tree_const_iterator_int_ r807 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset772, &ref_tmp0797);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0798 = r807;
      for_step800: ;
        int t808 = i796;
        int u809 = t808 + 1;
        i796 = u809;
      }
    unsigned long r810 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset772);
    unsigned long c811 = 5;
    _Bool c812 = ((r810 == c811)) ? 1 : 0;
    if (c812) {
    } else {
      char* cast813 = (char*)&(_str);
      char* c814 = _str_1;
      unsigned int c815 = 21;
      char* cast816 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast813, c814, c815, cast816);
    }
    int c817 = 20;
    ref_tmp2775 = c817;
    struct std___Rb_tree_const_iterator_int_ r818 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset772, &ref_tmp2775);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1774 = r818;
    struct std___Rb_tree_const_iterator_int_* r819 = std___Rb_tree_const_iterator_int___operator_(&it773, &ref_tmp1774);
    agg_tmp1776 = it773; // copy
    int c820 = 25;
    ref_tmp3777 = c820;
    struct std___Rb_tree_const_iterator_int_ t821 = agg_tmp1776;
    struct std___Rb_tree_const_iterator_int_ r822 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myset772, t821, &ref_tmp3777);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2778 = r822;
    agg_tmp3779 = it773; // copy
    int c823 = 24;
    ref_tmp4780 = c823;
    struct std___Rb_tree_const_iterator_int_ t824 = agg_tmp3779;
    struct std___Rb_tree_const_iterator_int_ r825 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myset772, t824, &ref_tmp4780);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp4781 = r825;
    agg_tmp5782 = it773; // copy
    int c826 = 26;
    ref_tmp5783 = c826;
    struct std___Rb_tree_const_iterator_int_ t827 = agg_tmp5782;
    struct std___Rb_tree_const_iterator_int_ r828 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myset772, t827, &ref_tmp5783);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp6784 = r828;
    // array copy
    __builtin_memcpy(myints785, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    struct std___Rb_tree_const_iterator_int_ r829 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset772);
    ref_tmp6786 = r829;
    struct std___Rb_tree_const_iterator_int_* r830 = std___Rb_tree_const_iterator_int___operator_(&it773, &ref_tmp6786);
    int* r831 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t832 = *r831;
    int c833 = 10;
    _Bool c834 = ((t832 == c833)) ? 1 : 0;
    if (c834) {
    } else {
      char* cast835 = (char*)&(_str_2);
      char* c836 = _str_1;
      unsigned int c837 = 33;
      char* cast838 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast835, c836, c837, cast838);
    }
    int c839 = 0;
    struct std___Rb_tree_const_iterator_int_ r840 = std___Rb_tree_const_iterator_int___operator__(&it773, c839);
    agg_tmp7787 = r840;
    int* r841 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t842 = *r841;
    int c843 = 20;
    _Bool c844 = ((t842 == c843)) ? 1 : 0;
    if (c844) {
    } else {
      char* cast845 = (char*)&(_str_3);
      char* c846 = _str_1;
      unsigned int c847 = 35;
      char* cast848 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast845, c846, c847, cast848);
    }
    int c849 = 0;
    struct std___Rb_tree_const_iterator_int_ r850 = std___Rb_tree_const_iterator_int___operator__(&it773, c849);
    agg_tmp8788 = r850;
    int* r851 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t852 = *r851;
    int c853 = 20;
    _Bool c854 = ((t852 == c853)) ? 1 : 0;
    if (c854) {
    } else {
      char* cast855 = (char*)&(_str_3);
      char* c856 = _str_1;
      unsigned int c857 = 37;
      char* cast858 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast855, c856, c857, cast858);
    }
    int c859 = 0;
    struct std___Rb_tree_const_iterator_int_ r860 = std___Rb_tree_const_iterator_int___operator__(&it773, c859);
    agg_tmp9789 = r860;
    int* r861 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t862 = *r861;
    int c863 = 24;
    _Bool c864 = ((t862 == c863)) ? 1 : 0;
    if (c864) {
    } else {
      char* cast865 = (char*)&(_str_4);
      char* c866 = _str_1;
      unsigned int c867 = 39;
      char* cast868 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast865, c866, c867, cast868);
    }
    int c869 = 0;
    struct std___Rb_tree_const_iterator_int_ r870 = std___Rb_tree_const_iterator_int___operator__(&it773, c869);
    agg_tmp10790 = r870;
    int* r871 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t872 = *r871;
    int c873 = 25;
    _Bool c874 = ((t872 == c873)) ? 1 : 0;
    if (c874) {
    } else {
      char* cast875 = (char*)&(_str_5);
      char* c876 = _str_1;
      unsigned int c877 = 41;
      char* cast878 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast875, c876, c877, cast878);
    }
    int c879 = 0;
    struct std___Rb_tree_const_iterator_int_ r880 = std___Rb_tree_const_iterator_int___operator__(&it773, c879);
    agg_tmp11791 = r880;
    int* r881 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t882 = *r881;
    int c883 = 26;
    _Bool c884 = ((t882 == c883)) ? 1 : 0;
    if (c884) {
    } else {
      char* cast885 = (char*)&(_str_6);
      char* c886 = _str_1;
      unsigned int c887 = 43;
      char* cast888 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast885, c886, c887, cast888);
    }
    int c889 = 0;
    struct std___Rb_tree_const_iterator_int_ r890 = std___Rb_tree_const_iterator_int___operator__(&it773, c889);
    agg_tmp12792 = r890;
    int* r891 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t892 = *r891;
    int c893 = 30;
    _Bool c894 = ((t892 == c893)) ? 1 : 0;
    if (c894) {
    } else {
      char* cast895 = (char*)&(_str_7);
      char* c896 = _str_1;
      unsigned int c897 = 45;
      char* cast898 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast895, c896, c897, cast898);
    }
    int c899 = 0;
    struct std___Rb_tree_const_iterator_int_ r900 = std___Rb_tree_const_iterator_int___operator__(&it773, c899);
    agg_tmp13793 = r900;
    int* r901 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t902 = *r901;
    int c903 = 40;
    _Bool c904 = ((t902 == c903)) ? 1 : 0;
    if (c904) {
    } else {
      char* cast905 = (char*)&(_str_8);
      char* c906 = _str_1;
      unsigned int c907 = 47;
      char* cast908 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast905, c906, c907, cast908);
    }
    int c909 = 0;
    struct std___Rb_tree_const_iterator_int_ r910 = std___Rb_tree_const_iterator_int___operator__(&it773, c909);
    agg_tmp14794 = r910;
    int* r911 = std___Rb_tree_const_iterator_int___operator____const(&it773);
    int t912 = *r911;
    int c913 = 50;
    _Bool c914 = ((t912 == c913)) ? 1 : 0;
    if (c914) {
    } else {
      char* cast915 = (char*)&(_str_9);
      char* c916 = _str_1;
      unsigned int c917 = 49;
      char* cast918 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast915, c916, c917, cast918);
    }
    int c919 = 0;
    __retval771 = c919;
    int t920 = __retval771;
    int ret_val921 = t920;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
    }
    return ret_val921;
  int t922 = __retval771;
  return t922;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v923) {
bb924:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this925;
  this925 = v923;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t926 = this925;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t926->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v927) {
bb928:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this929;
  this929 = v927;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t930 = this929;
    struct std___Rb_tree_node_int_* r931 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t930);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t930, r931);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t930->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t930->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v932) {
bb933:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this934;
  this934 = v932;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t935 = this934;
  struct std__allocator_std___Rb_tree_node_int__* base936 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t935 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base936);
    struct std___Rb_tree_key_compare_std__less_int__* base937 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t935 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base937);
    struct std___Rb_tree_header* base938 = (struct std___Rb_tree_header*)((char *)t935 + 8);
    std___Rb_tree_header___Rb_tree_header(base938);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v939) {
bb940:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this941;
  this941 = v939;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t942 = this941;
  {
    struct std__allocator_std___Rb_tree_node_int__* base943 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t942 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base943);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v944) {
bb945:
  struct std____new_allocator_std___Rb_tree_node_int__* this946;
  this946 = v944;
  struct std____new_allocator_std___Rb_tree_node_int__* t947 = this946;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v948) {
bb949:
  struct std__allocator_std___Rb_tree_node_int__* this950;
  this950 = v948;
  struct std__allocator_std___Rb_tree_node_int__* t951 = this950;
  struct std____new_allocator_std___Rb_tree_node_int__* base952 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t951 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base952);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v953) {
bb954:
  struct std___Rb_tree_key_compare_std__less_int__* this955;
  this955 = v953;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v956) {
bb957:
  struct std___Rb_tree_header* this958;
  this958 = v956;
  struct std___Rb_tree_header* t959 = this958;
  struct std___Rb_tree_node_base* c960 = ((void*)0);
  t959->_M_header._M_parent = c960;
  t959->_M_header._M_left = &t959->_M_header;
  t959->_M_header._M_right = &t959->_M_header;
  unsigned long c961 = 0;
  t959->_M_node_count = c961;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v962) {
bb963:
  struct std___Rb_tree_header* this964;
  this964 = v962;
  struct std___Rb_tree_header* t965 = this964;
  unsigned int c966 = 0;
  t965->_M_header._M_color = c966;
  std___Rb_tree_header___M_reset(t965);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v967) {
bb968:
  struct std__allocator_std___Rb_tree_node_int__* this969;
  this969 = v967;
  struct std__allocator_std___Rb_tree_node_int__* t970 = this969;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v971) {
bb972:
  struct std___Rb_tree_node_int_* this973;
  struct std___Rb_tree_node_int_* __retval974;
  this973 = v971;
  struct std___Rb_tree_node_int_* t975 = this973;
  __retval974 = t975;
  struct std___Rb_tree_node_int_* t976 = __retval974;
  return t976;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v977) {
bb978:
  struct std___Rb_tree_node_int_* __x979;
  struct std___Rb_tree_node_int_* __retval980;
  __x979 = v977;
  struct std___Rb_tree_node_int_* t981 = __x979;
  struct std___Rb_tree_node_base* base982 = (struct std___Rb_tree_node_base*)((char *)t981 + 0);
  struct std___Rb_tree_node_base* t983 = base982->_M_right;
  _Bool cast984 = (_Bool)t983;
  struct std___Rb_tree_node_int_* ternary985;
  if (cast984) {
    struct std___Rb_tree_node_int_* t986 = __x979;
    struct std___Rb_tree_node_base* base987 = (struct std___Rb_tree_node_base*)((char *)t986 + 0);
    struct std___Rb_tree_node_base* t988 = base987->_M_right;
    struct std___Rb_tree_node_int_* derived989 = (struct std___Rb_tree_node_int_*)((char *)t988 - 0);
    struct std___Rb_tree_node_int_* r990 = std___Rb_tree_node_int____M_node_ptr(derived989);
    ternary985 = (struct std___Rb_tree_node_int_*)r990;
  } else {
    struct std___Rb_tree_node_int_* c991 = ((void*)0);
    ternary985 = (struct std___Rb_tree_node_int_*)c991;
  }
  __retval980 = ternary985;
  struct std___Rb_tree_node_int_* t992 = __retval980;
  return t992;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v993) {
bb994:
  struct std___Rb_tree_node_int_* __x995;
  struct std___Rb_tree_node_int_* __retval996;
  __x995 = v993;
  struct std___Rb_tree_node_int_* t997 = __x995;
  struct std___Rb_tree_node_base* base998 = (struct std___Rb_tree_node_base*)((char *)t997 + 0);
  struct std___Rb_tree_node_base* t999 = base998->_M_left;
  _Bool cast1000 = (_Bool)t999;
  struct std___Rb_tree_node_int_* ternary1001;
  if (cast1000) {
    struct std___Rb_tree_node_int_* t1002 = __x995;
    struct std___Rb_tree_node_base* base1003 = (struct std___Rb_tree_node_base*)((char *)t1002 + 0);
    struct std___Rb_tree_node_base* t1004 = base1003->_M_left;
    struct std___Rb_tree_node_int_* derived1005 = (struct std___Rb_tree_node_int_*)((char *)t1004 - 0);
    struct std___Rb_tree_node_int_* r1006 = std___Rb_tree_node_int____M_node_ptr(derived1005);
    ternary1001 = (struct std___Rb_tree_node_int_*)r1006;
  } else {
    struct std___Rb_tree_node_int_* c1007 = ((void*)0);
    ternary1001 = (struct std___Rb_tree_node_int_*)c1007;
  }
  __retval996 = ternary1001;
  struct std___Rb_tree_node_int_* t1008 = __retval996;
  return t1008;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1009) {
bb1010:
  int* __location1011;
  __location1011 = v1009;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1012, int* v1013) {
bb1014:
  struct std__allocator_std___Rb_tree_node_int__* __a1015;
  int* __p1016;
  __a1015 = v1012;
  __p1016 = v1013;
  int* t1017 = __p1016;
  void_std__destroy_at_int_(t1017);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1018) {
bb1019:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1020;
  struct std__allocator_std___Rb_tree_node_int__* __retval1021;
  this1020 = v1018;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1022 = this1020;
  struct std__allocator_std___Rb_tree_node_int__* base1023 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1022->_M_impl) + 0);
  __retval1021 = base1023;
  struct std__allocator_std___Rb_tree_node_int__* t1024 = __retval1021;
  return t1024;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1025) {
bb1026:
  struct __gnu_cxx____aligned_membuf_int_* this1027;
  void* __retval1028;
  this1027 = v1025;
  struct __gnu_cxx____aligned_membuf_int_* t1029 = this1027;
  void* cast1030 = (void*)&(t1029->_M_storage);
  __retval1028 = cast1030;
  void* t1031 = __retval1028;
  return t1031;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1032) {
bb1033:
  struct __gnu_cxx____aligned_membuf_int_* this1034;
  int* __retval1035;
  this1034 = v1032;
  struct __gnu_cxx____aligned_membuf_int_* t1036 = this1034;
  void* r1037 = __gnu_cxx____aligned_membuf_int____M_addr(t1036);
  int* cast1038 = (int*)r1037;
  __retval1035 = cast1038;
  int* t1039 = __retval1035;
  return t1039;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1040) {
bb1041:
  struct std___Rb_tree_node_int_* this1042;
  int* __retval1043;
  this1042 = v1040;
  struct std___Rb_tree_node_int_* t1044 = this1042;
  int* r1045 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1044->_M_storage);
  __retval1043 = r1045;
  int* t1046 = __retval1043;
  return t1046;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1047, struct std___Rb_tree_node_int_* v1048) {
bb1049:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1050;
  struct std___Rb_tree_node_int_* __p1051;
  this1050 = v1047;
  __p1051 = v1048;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1052 = this1050;
  struct std__allocator_std___Rb_tree_node_int__* r1053 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1052);
  struct std___Rb_tree_node_int_* t1054 = __p1051;
  int* r1055 = std___Rb_tree_node_int____M_valptr(t1054);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1053, r1055);
  struct std___Rb_tree_node_int_* t1056 = __p1051;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1057:
  _Bool __retval1058;
    _Bool c1059 = 0;
    __retval1058 = c1059;
    _Bool t1060 = __retval1058;
    return t1060;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1061, struct std___Rb_tree_node_int_* v1062, unsigned long v1063) {
bb1064:
  struct std____new_allocator_std___Rb_tree_node_int__* this1065;
  struct std___Rb_tree_node_int_* __p1066;
  unsigned long __n1067;
  this1065 = v1061;
  __p1066 = v1062;
  __n1067 = v1063;
  struct std____new_allocator_std___Rb_tree_node_int__* t1068 = this1065;
    unsigned long c1069 = 8;
    unsigned long c1070 = 16;
    _Bool c1071 = ((c1069 > c1070)) ? 1 : 0;
    if (c1071) {
      struct std___Rb_tree_node_int_* t1072 = __p1066;
      void* cast1073 = (void*)t1072;
      unsigned long t1074 = __n1067;
      unsigned long c1075 = 40;
      unsigned long b1076 = t1074 * c1075;
      unsigned long c1077 = 8;
      operator_delete_3(cast1073, b1076, c1077);
      return;
    }
  struct std___Rb_tree_node_int_* t1078 = __p1066;
  void* cast1079 = (void*)t1078;
  unsigned long t1080 = __n1067;
  unsigned long c1081 = 40;
  unsigned long b1082 = t1080 * c1081;
  operator_delete_2(cast1079, b1082);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1083, struct std___Rb_tree_node_int_* v1084, unsigned long v1085) {
bb1086:
  struct std__allocator_std___Rb_tree_node_int__* this1087;
  struct std___Rb_tree_node_int_* __p1088;
  unsigned long __n1089;
  this1087 = v1083;
  __p1088 = v1084;
  __n1089 = v1085;
  struct std__allocator_std___Rb_tree_node_int__* t1090 = this1087;
    _Bool r1091 = std____is_constant_evaluated();
    if (r1091) {
      struct std___Rb_tree_node_int_* t1092 = __p1088;
      void* cast1093 = (void*)t1092;
      operator_delete(cast1093);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1094 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1090 + 0);
  struct std___Rb_tree_node_int_* t1095 = __p1088;
  unsigned long t1096 = __n1089;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1094, t1095, t1096);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1097, struct std___Rb_tree_node_int_* v1098, unsigned long v1099) {
bb1100:
  struct std__allocator_std___Rb_tree_node_int__* __a1101;
  struct std___Rb_tree_node_int_* __p1102;
  unsigned long __n1103;
  __a1101 = v1097;
  __p1102 = v1098;
  __n1103 = v1099;
  struct std__allocator_std___Rb_tree_node_int__* t1104 = __a1101;
  struct std___Rb_tree_node_int_* t1105 = __p1102;
  unsigned long t1106 = __n1103;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1104, t1105, t1106);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1107, struct std___Rb_tree_node_int_* v1108) {
bb1109:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1110;
  struct std___Rb_tree_node_int_* __p1111;
  this1110 = v1107;
  __p1111 = v1108;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1112 = this1110;
  struct std__allocator_std___Rb_tree_node_int__* r1113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1112);
  struct std___Rb_tree_node_int_* t1114 = __p1111;
  unsigned long c1115 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1113, t1114, c1115);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1116, struct std___Rb_tree_node_int_* v1117) {
bb1118:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1119;
  struct std___Rb_tree_node_int_* __p1120;
  this1119 = v1116;
  __p1120 = v1117;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1121 = this1119;
  struct std___Rb_tree_node_int_* t1122 = __p1120;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1121, t1122);
  struct std___Rb_tree_node_int_* t1123 = __p1120;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1121, t1123);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1124, struct std___Rb_tree_node_int_* v1125) {
bb1126:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1127;
  struct std___Rb_tree_node_int_* __x1128;
  this1127 = v1124;
  __x1128 = v1125;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1129 = this1127;
    while (1) {
      struct std___Rb_tree_node_int_* t1130 = __x1128;
      _Bool cast1131 = (_Bool)t1130;
      if (!cast1131) break;
        struct std___Rb_tree_node_int_* __y1132;
        struct std___Rb_tree_node_int_* t1133 = __x1128;
        struct std___Rb_tree_node_int_* r1134 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1133);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1129, r1134);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1135 = __x1128;
        struct std___Rb_tree_node_int_* r1136 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1135);
        if (__cir_exc_active) {
          return;
        }
        __y1132 = r1136;
        struct std___Rb_tree_node_int_* t1137 = __x1128;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1129, t1137);
        struct std___Rb_tree_node_int_* t1138 = __y1132;
        __x1128 = t1138;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1139) {
bb1140:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1141;
  struct std___Rb_tree_node_int_* __retval1142;
  struct std___Rb_tree_node_base* __begin1143;
  this1141 = v1139;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1144 = this1141;
  struct std___Rb_tree_header* base1145 = (struct std___Rb_tree_header*)((char *)&(t1144->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1146 = base1145->_M_header._M_parent;
  __begin1143 = t1146;
  struct std___Rb_tree_node_base* t1147 = __begin1143;
  _Bool cast1148 = (_Bool)t1147;
  struct std___Rb_tree_node_int_* ternary1149;
  if (cast1148) {
    struct std___Rb_tree_node_base* t1150 = __begin1143;
    struct std___Rb_tree_node_int_* derived1151 = (struct std___Rb_tree_node_int_*)((char *)t1150 - 0);
    struct std___Rb_tree_node_int_* r1152 = std___Rb_tree_node_int____M_node_ptr(derived1151);
    ternary1149 = (struct std___Rb_tree_node_int_*)r1152;
  } else {
    struct std___Rb_tree_node_int_* c1153 = ((void*)0);
    ternary1149 = (struct std___Rb_tree_node_int_*)c1153;
  }
  __retval1142 = ternary1149;
  struct std___Rb_tree_node_int_* t1154 = __retval1142;
  return t1154;
}

