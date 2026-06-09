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
char _str[18] = "first.size() == 0";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-construct-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "first.begin() == first.end()";
char _str_3[19] = "second.size() == 5";
char _str_4[10] = "*it == 10";
char _str_5[10] = "*it == 50";
_Bool fncomp(int p0, int p1);
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
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
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v10) {
bb11:
  struct std__set_int__std__less_int___std__allocator_int__* this12;
  this12 = v10;
  struct std__set_int__std__less_int___std__allocator_int__* t13 = this12;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t13->_M_t);
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v14) {
bb15:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this16;
  unsigned long __retval17;
  this16 = v14;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t18 = this16;
  struct std___Rb_tree_header* base19 = (struct std___Rb_tree_header*)((char *)&(t18->_M_impl) + 8);
  unsigned long t20 = base19->_M_node_count;
  __retval17 = t20;
  unsigned long t21 = __retval17;
  return t21;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v22) {
bb23:
  struct std__set_int__std__less_int___std__allocator_int__* this24;
  unsigned long __retval25;
  this24 = v22;
  struct std__set_int__std__less_int___std__allocator_int__* t26 = this24;
  unsigned long r27 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t26->_M_t);
  __retval25 = r27;
  unsigned long t28 = __retval25;
  return t28;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v29, struct std___Rb_tree_const_iterator_int_* v30) {
bb31:
  struct std___Rb_tree_const_iterator_int_* __x32;
  struct std___Rb_tree_const_iterator_int_* __y33;
  _Bool __retval34;
  __x32 = v29;
  __y33 = v30;
  struct std___Rb_tree_const_iterator_int_* t35 = __x32;
  struct std___Rb_tree_node_base* t36 = t35->_M_node;
  struct std___Rb_tree_const_iterator_int_* t37 = __y33;
  struct std___Rb_tree_node_base* t38 = t37->_M_node;
  _Bool c39 = ((t36 == t38)) ? 1 : 0;
  __retval34 = c39;
  _Bool t40 = __retval34;
  return t40;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v41, struct std___Rb_tree_node_base* v42) {
bb43:
  struct std___Rb_tree_const_iterator_int_* this44;
  struct std___Rb_tree_node_base* __x45;
  this44 = v41;
  __x45 = v42;
  struct std___Rb_tree_const_iterator_int_* t46 = this44;
  struct std___Rb_tree_node_base* t47 = __x45;
  t46->_M_node = t47;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v48) {
bb49:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this50;
  struct std___Rb_tree_const_iterator_int_ __retval51;
  this50 = v48;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t52 = this50;
  struct std___Rb_tree_header* base53 = (struct std___Rb_tree_header*)((char *)&(t52->_M_impl) + 8);
  struct std___Rb_tree_node_base* t54 = base53->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval51, t54);
  struct std___Rb_tree_const_iterator_int_ t55 = __retval51;
  return t55;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v56) {
bb57:
  struct std__set_int__std__less_int___std__allocator_int__* this58;
  struct std___Rb_tree_const_iterator_int_ __retval59;
  this58 = v56;
  struct std__set_int__std__less_int___std__allocator_int__* t60 = this58;
  struct std___Rb_tree_const_iterator_int_ r61 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t60->_M_t);
  __retval59 = r61;
  struct std___Rb_tree_const_iterator_int_ t62 = __retval59;
  return t62;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v63) {
bb64:
  struct std___Rb_tree_node_base* this65;
  struct std___Rb_tree_node_base* __retval66;
  this65 = v63;
  struct std___Rb_tree_node_base* t67 = this65;
  __retval66 = t67;
  struct std___Rb_tree_node_base* t68 = __retval66;
  return t68;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v69) {
bb70:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this71;
  struct std___Rb_tree_node_base* __retval72;
  this71 = v69;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t73 = this71;
  struct std___Rb_tree_header* base74 = (struct std___Rb_tree_header*)((char *)&(t73->_M_impl) + 8);
  struct std___Rb_tree_node_base* r75 = std___Rb_tree_node_base___M_base_ptr___const(&base74->_M_header);
  __retval72 = r75;
  struct std___Rb_tree_node_base* t76 = __retval72;
  return t76;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v77) {
bb78:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this79;
  struct std___Rb_tree_const_iterator_int_ __retval80;
  this79 = v77;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t81 = this79;
  struct std___Rb_tree_node_base* r82 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t81);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval80, r82);
  struct std___Rb_tree_const_iterator_int_ t83 = __retval80;
  return t83;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v84) {
bb85:
  struct std__set_int__std__less_int___std__allocator_int__* this86;
  struct std___Rb_tree_const_iterator_int_ __retval87;
  this86 = v84;
  struct std__set_int__std__less_int___std__allocator_int__* t88 = this86;
  struct std___Rb_tree_const_iterator_int_ r89 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t88->_M_t);
  __retval87 = r89;
  struct std___Rb_tree_const_iterator_int_ t90 = __retval87;
  return t90;
}

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v91, int* v92, int* v93) {
bb94:
  struct std__set_int__std__less_int___std__allocator_int__* this95;
  int* __first96;
  int* __last97;
  this95 = v91;
  __first96 = v92;
  __last97 = v93;
  struct std__set_int__std__less_int___std__allocator_int__* t98 = this95;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c99 = {0};
  t98->_M_t = c99;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t98->_M_t);
    int* t100 = __first96;
    int* t101 = __last97;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t98->_M_t, t100, t101);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t98->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v102) {
bb103:
  struct std___Rb_tree_const_iterator_int_* this104;
  int* __retval105;
  this104 = v102;
  struct std___Rb_tree_const_iterator_int_* t106 = this104;
  struct std___Rb_tree_node_base* t107 = t106->_M_node;
  struct std___Rb_tree_node_int_* derived108 = ((t107) ? (struct std___Rb_tree_node_int_*)((char *)t107 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r109 = std___Rb_tree_node_int____M_valptr___const(derived108);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval105 = r109;
  int* t110 = __retval105;
  return t110;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v111, struct std___Rb_tree_const_iterator_int_* v112) {
bb113:
  struct std___Rb_tree_const_iterator_int_* this114;
  struct std___Rb_tree_const_iterator_int_* unnamed115;
  struct std___Rb_tree_const_iterator_int_* __retval116;
  this114 = v111;
  unnamed115 = v112;
  struct std___Rb_tree_const_iterator_int_* t117 = this114;
  struct std___Rb_tree_const_iterator_int_* t118 = unnamed115;
  struct std___Rb_tree_node_base* t119 = t118->_M_node;
  t117->_M_node = t119;
  __retval116 = t117;
  struct std___Rb_tree_const_iterator_int_* t120 = __retval116;
  return t120;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v121, int v122) {
bb123:
  struct std___Rb_tree_const_iterator_int_* this124;
  int unnamed125;
  struct std___Rb_tree_const_iterator_int_ __retval126;
  this124 = v121;
  unnamed125 = v122;
  struct std___Rb_tree_const_iterator_int_* t127 = this124;
  __retval126 = *t127; // copy
  struct std___Rb_tree_node_base* t128 = t127->_M_node;
  struct std___Rb_tree_node_base* r129 = std___Rb_tree_decrement(t128);
  t127->_M_node = r129;
  struct std___Rb_tree_const_iterator_int_ t130 = __retval126;
  return t130;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v131) {
bb132:
  struct std__set_int__std__less_int___std__allocator_int__* this133;
  this133 = v131;
  struct std__set_int__std__less_int___std__allocator_int__* t134 = this133;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t134->_M_t);
  }
  return;
}

// function: main
int main() {
bb135:
  int __retval136;
  struct std__set_int__std__less_int___std__allocator_int__ first137;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0138;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1139;
  int myints140[5];
  struct std__set_int__std__less_int___std__allocator_int__ second141;
  struct std___Rb_tree_const_iterator_int_ it142;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2143;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0144;
  int c145 = 0;
  __retval136 = c145;
  std__set_int__std__less_int___std__allocator_int_____set(&first137);
    unsigned long r146 = std__set_int__std__less_int___std__allocator_int_____size___const(&first137);
    unsigned long c147 = 0;
    _Bool c148 = ((r146 == c147)) ? 1 : 0;
    if (c148) {
    } else {
      char* cast149 = (char*)&(_str);
      char* c150 = _str_1;
      unsigned int c151 = 24;
      char* cast152 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast149, c150, c151, cast152);
    }
    struct std___Rb_tree_const_iterator_int_ r153 = std__set_int__std__less_int___std__allocator_int_____begin___const(&first137);
    ref_tmp0138 = r153;
    struct std___Rb_tree_const_iterator_int_ r154 = std__set_int__std__less_int___std__allocator_int_____end___const(&first137);
    ref_tmp1139 = r154;
    _Bool r155 = std__operator___2(&ref_tmp0138, &ref_tmp1139);
    if (r155) {
    } else {
      char* cast156 = (char*)&(_str_2);
      char* c157 = _str_1;
      unsigned int c158 = 25;
      char* cast159 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast156, c157, c158, cast159);
    }
    // array copy
    __builtin_memcpy(myints140, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
    int* cast160 = (int*)&(myints140);
    int* cast161 = (int*)&(myints140);
    int c162 = 5;
    int* ptr163 = &(cast161)[c162];
    std__set_int__std__less_int___std__allocator_int_____set_int__(&second141, cast160, ptr163);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&first137);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned long r164 = std__set_int__std__less_int___std__allocator_int_____size___const(&second141);
      unsigned long c165 = 5;
      _Bool c166 = ((r164 == c165)) ? 1 : 0;
      if (c166) {
      } else {
        char* cast167 = (char*)&(_str_3);
        char* c168 = _str_1;
        unsigned int c169 = 28;
        char* cast170 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast167, c168, c169, cast170);
      }
      struct std___Rb_tree_const_iterator_int_ r171 = std__set_int__std__less_int___std__allocator_int_____begin___const(&second141);
      it142 = r171;
      int* r172 = std___Rb_tree_const_iterator_int___operator____const(&it142);
      int t173 = *r172;
      int c174 = 10;
      _Bool c175 = ((t173 == c174)) ? 1 : 0;
      if (c175) {
      } else {
        char* cast176 = (char*)&(_str_4);
        char* c177 = _str_1;
        unsigned int c178 = 30;
        char* cast179 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast176, c177, c178, cast179);
      }
      struct std___Rb_tree_const_iterator_int_ r180 = std__set_int__std__less_int___std__allocator_int_____end___const(&second141);
      ref_tmp2143 = r180;
      struct std___Rb_tree_const_iterator_int_* r181 = std___Rb_tree_const_iterator_int___operator_(&it142, &ref_tmp2143);
      int c182 = 0;
      struct std___Rb_tree_const_iterator_int_ r183 = std___Rb_tree_const_iterator_int___operator__(&it142, c182);
      agg_tmp0144 = r183;
      int* r184 = std___Rb_tree_const_iterator_int___operator____const(&it142);
      int t185 = *r184;
      int c186 = 50;
      _Bool c187 = ((t185 == c186)) ? 1 : 0;
      if (c187) {
      } else {
        char* cast188 = (char*)&(_str_5);
        char* c189 = _str_1;
        unsigned int c190 = 33;
        char* cast191 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast188, c189, c190, cast191);
      }
      int c192 = 0;
      __retval136 = c192;
      int t193 = __retval136;
      int ret_val194 = t193;
      {
        std__set_int__std__less_int___std__allocator_int______set(&second141);
      }
      {
        std__set_int__std__less_int___std__allocator_int______set(&first137);
      }
      return ret_val194;
  int t195 = __retval136;
  return t195;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v196) {
bb197:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this198;
  this198 = v196;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t199 = this198;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t199->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v200) {
bb201:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this202;
  this202 = v200;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t203 = this202;
    struct std___Rb_tree_node_int_* r204 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t203);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t203, r204);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t203->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t203->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v205) {
bb206:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this207;
  this207 = v205;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t208 = this207;
  struct std__allocator_std___Rb_tree_node_int__* base209 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t208 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base209);
    struct std___Rb_tree_key_compare_std__less_int__* base210 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t208 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base210);
    struct std___Rb_tree_header* base211 = (struct std___Rb_tree_header*)((char *)t208 + 8);
    std___Rb_tree_header___Rb_tree_header(base211);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v212) {
bb213:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this214;
  this214 = v212;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t215 = this214;
  {
    struct std__allocator_std___Rb_tree_node_int__* base216 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t215 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base216);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v217) {
bb218:
  struct std____new_allocator_std___Rb_tree_node_int__* this219;
  this219 = v217;
  struct std____new_allocator_std___Rb_tree_node_int__* t220 = this219;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v221) {
bb222:
  struct std__allocator_std___Rb_tree_node_int__* this223;
  this223 = v221;
  struct std__allocator_std___Rb_tree_node_int__* t224 = this223;
  struct std____new_allocator_std___Rb_tree_node_int__* base225 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t224 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base225);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v226) {
bb227:
  struct std___Rb_tree_key_compare_std__less_int__* this228;
  this228 = v226;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v229) {
bb230:
  struct std___Rb_tree_header* this231;
  this231 = v229;
  struct std___Rb_tree_header* t232 = this231;
  struct std___Rb_tree_node_base* c233 = ((void*)0);
  t232->_M_header._M_parent = c233;
  t232->_M_header._M_left = &t232->_M_header;
  t232->_M_header._M_right = &t232->_M_header;
  unsigned long c234 = 0;
  t232->_M_node_count = c234;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v235) {
bb236:
  struct std___Rb_tree_header* this237;
  this237 = v235;
  struct std___Rb_tree_header* t238 = this237;
  unsigned int c239 = 0;
  t238->_M_header._M_color = c239;
  std___Rb_tree_header___M_reset(t238);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v240) {
bb241:
  struct std__allocator_std___Rb_tree_node_int__* this242;
  this242 = v240;
  struct std__allocator_std___Rb_tree_node_int__* t243 = this242;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v244) {
bb245:
  struct std___Rb_tree_node_int_* this246;
  struct std___Rb_tree_node_int_* __retval247;
  this246 = v244;
  struct std___Rb_tree_node_int_* t248 = this246;
  __retval247 = t248;
  struct std___Rb_tree_node_int_* t249 = __retval247;
  return t249;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v250) {
bb251:
  struct std___Rb_tree_node_int_* __x252;
  struct std___Rb_tree_node_int_* __retval253;
  __x252 = v250;
  struct std___Rb_tree_node_int_* t254 = __x252;
  struct std___Rb_tree_node_base* base255 = (struct std___Rb_tree_node_base*)((char *)t254 + 0);
  struct std___Rb_tree_node_base* t256 = base255->_M_right;
  _Bool cast257 = (_Bool)t256;
  struct std___Rb_tree_node_int_* ternary258;
  if (cast257) {
    struct std___Rb_tree_node_int_* t259 = __x252;
    struct std___Rb_tree_node_base* base260 = (struct std___Rb_tree_node_base*)((char *)t259 + 0);
    struct std___Rb_tree_node_base* t261 = base260->_M_right;
    struct std___Rb_tree_node_int_* derived262 = (struct std___Rb_tree_node_int_*)((char *)t261 - 0);
    struct std___Rb_tree_node_int_* r263 = std___Rb_tree_node_int____M_node_ptr(derived262);
    ternary258 = (struct std___Rb_tree_node_int_*)r263;
  } else {
    struct std___Rb_tree_node_int_* c264 = ((void*)0);
    ternary258 = (struct std___Rb_tree_node_int_*)c264;
  }
  __retval253 = ternary258;
  struct std___Rb_tree_node_int_* t265 = __retval253;
  return t265;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v266) {
bb267:
  struct std___Rb_tree_node_int_* __x268;
  struct std___Rb_tree_node_int_* __retval269;
  __x268 = v266;
  struct std___Rb_tree_node_int_* t270 = __x268;
  struct std___Rb_tree_node_base* base271 = (struct std___Rb_tree_node_base*)((char *)t270 + 0);
  struct std___Rb_tree_node_base* t272 = base271->_M_left;
  _Bool cast273 = (_Bool)t272;
  struct std___Rb_tree_node_int_* ternary274;
  if (cast273) {
    struct std___Rb_tree_node_int_* t275 = __x268;
    struct std___Rb_tree_node_base* base276 = (struct std___Rb_tree_node_base*)((char *)t275 + 0);
    struct std___Rb_tree_node_base* t277 = base276->_M_left;
    struct std___Rb_tree_node_int_* derived278 = (struct std___Rb_tree_node_int_*)((char *)t277 - 0);
    struct std___Rb_tree_node_int_* r279 = std___Rb_tree_node_int____M_node_ptr(derived278);
    ternary274 = (struct std___Rb_tree_node_int_*)r279;
  } else {
    struct std___Rb_tree_node_int_* c280 = ((void*)0);
    ternary274 = (struct std___Rb_tree_node_int_*)c280;
  }
  __retval269 = ternary274;
  struct std___Rb_tree_node_int_* t281 = __retval269;
  return t281;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v282) {
bb283:
  int* __location284;
  __location284 = v282;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v285, int* v286) {
bb287:
  struct std__allocator_std___Rb_tree_node_int__* __a288;
  int* __p289;
  __a288 = v285;
  __p289 = v286;
  int* t290 = __p289;
  void_std__destroy_at_int_(t290);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v291) {
bb292:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this293;
  struct std__allocator_std___Rb_tree_node_int__* __retval294;
  this293 = v291;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t295 = this293;
  struct std__allocator_std___Rb_tree_node_int__* base296 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t295->_M_impl) + 0);
  __retval294 = base296;
  struct std__allocator_std___Rb_tree_node_int__* t297 = __retval294;
  return t297;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v298) {
bb299:
  struct __gnu_cxx____aligned_membuf_int_* this300;
  void* __retval301;
  this300 = v298;
  struct __gnu_cxx____aligned_membuf_int_* t302 = this300;
  void* cast303 = (void*)&(t302->_M_storage);
  __retval301 = cast303;
  void* t304 = __retval301;
  return t304;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v305) {
bb306:
  struct __gnu_cxx____aligned_membuf_int_* this307;
  int* __retval308;
  this307 = v305;
  struct __gnu_cxx____aligned_membuf_int_* t309 = this307;
  void* r310 = __gnu_cxx____aligned_membuf_int____M_addr(t309);
  int* cast311 = (int*)r310;
  __retval308 = cast311;
  int* t312 = __retval308;
  return t312;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v313) {
bb314:
  struct std___Rb_tree_node_int_* this315;
  int* __retval316;
  this315 = v313;
  struct std___Rb_tree_node_int_* t317 = this315;
  int* r318 = __gnu_cxx____aligned_membuf_int____M_ptr(&t317->_M_storage);
  __retval316 = r318;
  int* t319 = __retval316;
  return t319;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v320, struct std___Rb_tree_node_int_* v321) {
bb322:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this323;
  struct std___Rb_tree_node_int_* __p324;
  this323 = v320;
  __p324 = v321;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t325 = this323;
  struct std__allocator_std___Rb_tree_node_int__* r326 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t325);
  struct std___Rb_tree_node_int_* t327 = __p324;
  int* r328 = std___Rb_tree_node_int____M_valptr(t327);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r326, r328);
  struct std___Rb_tree_node_int_* t329 = __p324;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb330:
  _Bool __retval331;
    _Bool c332 = 0;
    __retval331 = c332;
    _Bool t333 = __retval331;
    return t333;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v334, struct std___Rb_tree_node_int_* v335, unsigned long v336) {
bb337:
  struct std____new_allocator_std___Rb_tree_node_int__* this338;
  struct std___Rb_tree_node_int_* __p339;
  unsigned long __n340;
  this338 = v334;
  __p339 = v335;
  __n340 = v336;
  struct std____new_allocator_std___Rb_tree_node_int__* t341 = this338;
    unsigned long c342 = 8;
    unsigned long c343 = 16;
    _Bool c344 = ((c342 > c343)) ? 1 : 0;
    if (c344) {
      struct std___Rb_tree_node_int_* t345 = __p339;
      void* cast346 = (void*)t345;
      unsigned long t347 = __n340;
      unsigned long c348 = 40;
      unsigned long b349 = t347 * c348;
      unsigned long c350 = 8;
      operator_delete_3(cast346, b349, c350);
      return;
    }
  struct std___Rb_tree_node_int_* t351 = __p339;
  void* cast352 = (void*)t351;
  unsigned long t353 = __n340;
  unsigned long c354 = 40;
  unsigned long b355 = t353 * c354;
  operator_delete_2(cast352, b355);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v356, struct std___Rb_tree_node_int_* v357, unsigned long v358) {
bb359:
  struct std__allocator_std___Rb_tree_node_int__* this360;
  struct std___Rb_tree_node_int_* __p361;
  unsigned long __n362;
  this360 = v356;
  __p361 = v357;
  __n362 = v358;
  struct std__allocator_std___Rb_tree_node_int__* t363 = this360;
    _Bool r364 = std____is_constant_evaluated();
    if (r364) {
      struct std___Rb_tree_node_int_* t365 = __p361;
      void* cast366 = (void*)t365;
      operator_delete(cast366);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base367 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t363 + 0);
  struct std___Rb_tree_node_int_* t368 = __p361;
  unsigned long t369 = __n362;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base367, t368, t369);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v370, struct std___Rb_tree_node_int_* v371, unsigned long v372) {
bb373:
  struct std__allocator_std___Rb_tree_node_int__* __a374;
  struct std___Rb_tree_node_int_* __p375;
  unsigned long __n376;
  __a374 = v370;
  __p375 = v371;
  __n376 = v372;
  struct std__allocator_std___Rb_tree_node_int__* t377 = __a374;
  struct std___Rb_tree_node_int_* t378 = __p375;
  unsigned long t379 = __n376;
  std__allocator_std___Rb_tree_node_int_____deallocate(t377, t378, t379);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v380, struct std___Rb_tree_node_int_* v381) {
bb382:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this383;
  struct std___Rb_tree_node_int_* __p384;
  this383 = v380;
  __p384 = v381;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t385 = this383;
  struct std__allocator_std___Rb_tree_node_int__* r386 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t385);
  struct std___Rb_tree_node_int_* t387 = __p384;
  unsigned long c388 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r386, t387, c388);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v389, struct std___Rb_tree_node_int_* v390) {
bb391:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this392;
  struct std___Rb_tree_node_int_* __p393;
  this392 = v389;
  __p393 = v390;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t394 = this392;
  struct std___Rb_tree_node_int_* t395 = __p393;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t394, t395);
  struct std___Rb_tree_node_int_* t396 = __p393;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t394, t396);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v397, struct std___Rb_tree_node_int_* v398) {
bb399:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this400;
  struct std___Rb_tree_node_int_* __x401;
  this400 = v397;
  __x401 = v398;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t402 = this400;
    while (1) {
      struct std___Rb_tree_node_int_* t403 = __x401;
      _Bool cast404 = (_Bool)t403;
      if (!cast404) break;
        struct std___Rb_tree_node_int_* __y405;
        struct std___Rb_tree_node_int_* t406 = __x401;
        struct std___Rb_tree_node_int_* r407 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t406);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t402, r407);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t408 = __x401;
        struct std___Rb_tree_node_int_* r409 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t408);
        if (__cir_exc_active) {
          return;
        }
        __y405 = r409;
        struct std___Rb_tree_node_int_* t410 = __x401;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t402, t410);
        struct std___Rb_tree_node_int_* t411 = __y405;
        __x401 = t411;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v412) {
bb413:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this414;
  struct std___Rb_tree_node_int_* __retval415;
  struct std___Rb_tree_node_base* __begin416;
  this414 = v412;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t417 = this414;
  struct std___Rb_tree_header* base418 = (struct std___Rb_tree_header*)((char *)&(t417->_M_impl) + 8);
  struct std___Rb_tree_node_base* t419 = base418->_M_header._M_parent;
  __begin416 = t419;
  struct std___Rb_tree_node_base* t420 = __begin416;
  _Bool cast421 = (_Bool)t420;
  struct std___Rb_tree_node_int_* ternary422;
  if (cast421) {
    struct std___Rb_tree_node_base* t423 = __begin416;
    struct std___Rb_tree_node_int_* derived424 = (struct std___Rb_tree_node_int_*)((char *)t423 - 0);
    struct std___Rb_tree_node_int_* r425 = std___Rb_tree_node_int____M_node_ptr(derived424);
    ternary422 = (struct std___Rb_tree_node_int_*)r425;
  } else {
    struct std___Rb_tree_node_int_* c426 = ((void*)0);
    ternary422 = (struct std___Rb_tree_node_int_*)c426;
  }
  __retval415 = ternary422;
  struct std___Rb_tree_node_int_* t427 = __retval415;
  return t427;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v428, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v429) {
bb430:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this431;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t432;
  this431 = v428;
  __t432 = v429;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t433 = this431;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t434 = __t432;
  t433->_M_t = t434;
  return;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v435, int* v436, int* v437) {
bb438:
  struct std__less_int_* this439;
  int* __x440;
  int* __y441;
  _Bool __retval442;
  this439 = v435;
  __x440 = v436;
  __y441 = v437;
  struct std__less_int_* t443 = this439;
  int* t444 = __x440;
  int t445 = *t444;
  int* t446 = __y441;
  int t447 = *t446;
  _Bool c448 = ((t445 < t447)) ? 1 : 0;
  __retval442 = c448;
  _Bool t449 = __retval442;
  return t449;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v450, int* v451) {
bb452:
  struct std___Identity_int_* this453;
  int* __x454;
  int* __retval455;
  this453 = v450;
  __x454 = v451;
  struct std___Identity_int_* t456 = this453;
  int* t457 = __x454;
  __retval455 = t457;
  int* t458 = __retval455;
  return t458;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v459) {
bb460:
  struct __gnu_cxx____aligned_membuf_int_* this461;
  void* __retval462;
  this461 = v459;
  struct __gnu_cxx____aligned_membuf_int_* t463 = this461;
  void* cast464 = (void*)&(t463->_M_storage);
  __retval462 = cast464;
  void* t465 = __retval462;
  return t465;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v466) {
bb467:
  struct __gnu_cxx____aligned_membuf_int_* this468;
  int* __retval469;
  this468 = v466;
  struct __gnu_cxx____aligned_membuf_int_* t470 = this468;
  void* r471 = __gnu_cxx____aligned_membuf_int____M_addr___const(t470);
  int* cast472 = (int*)r471;
  __retval469 = cast472;
  int* t473 = __retval469;
  return t473;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v474) {
bb475:
  struct std___Rb_tree_node_int_* this476;
  int* __retval477;
  this476 = v474;
  struct std___Rb_tree_node_int_* t478 = this476;
  int* r479 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t478->_M_storage);
  __retval477 = r479;
  int* t480 = __retval477;
  return t480;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v481) {
bb482:
  struct std___Rb_tree_node_int_* __node483;
  int* __retval484;
  struct std___Identity_int_ ref_tmp0485;
  __node483 = v481;
  struct std___Rb_tree_node_int_* t486 = __node483;
  int* r487 = std___Rb_tree_node_int____M_valptr___const(t486);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r488 = std___Identity_int___operator___int_const___const(&ref_tmp0485, r487);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval484 = r488;
  int* t489 = __retval484;
  return t489;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v490) {
bb491:
  struct std___Rb_tree_node_base* __x492;
  int* __retval493;
  __x492 = v490;
  struct std___Rb_tree_node_base* t494 = __x492;
  struct std___Rb_tree_node_int_* derived495 = (struct std___Rb_tree_node_int_*)((char *)t494 - 0);
  int* r496 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived495);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval493 = r496;
  int* t497 = __retval493;
  return t497;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v498) {
bb499:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this500;
  struct std___Rb_tree_node_base** __retval501;
  this500 = v498;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t502 = this500;
  struct std___Rb_tree_header* base503 = (struct std___Rb_tree_header*)((char *)&(t502->_M_impl) + 8);
  __retval501 = &base503->_M_header._M_right;
  struct std___Rb_tree_node_base** t504 = __retval501;
  return t504;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v505, struct std___Rb_tree_node_base** v506, struct std___Rb_tree_node_base** v507) {
bb508:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this509;
  struct std___Rb_tree_node_base** __x510;
  struct std___Rb_tree_node_base** __y511;
  this509 = v505;
  __x510 = v506;
  __y511 = v507;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t512 = this509;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base513 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t512 + 0);
  struct std___Rb_tree_node_base** t514 = __x510;
  struct std___Rb_tree_node_base* t515 = *t514;
  t512->first = t515;
  struct std___Rb_tree_node_base** t516 = __y511;
  struct std___Rb_tree_node_base* t517 = *t516;
  t512->second = t517;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v518) {
bb519:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this520;
  struct std___Rb_tree_node_base* __retval521;
  this520 = v518;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t522 = this520;
  struct std___Rb_tree_header* base523 = (struct std___Rb_tree_header*)((char *)&(t522->_M_impl) + 8);
  struct std___Rb_tree_node_base* t524 = base523->_M_header._M_parent;
  __retval521 = t524;
  struct std___Rb_tree_node_base* t525 = __retval521;
  return t525;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v526) {
bb527:
  struct std___Rb_tree_node_base* __x528;
  struct std___Rb_tree_node_base* __retval529;
  __x528 = v526;
  struct std___Rb_tree_node_base* t530 = __x528;
  struct std___Rb_tree_node_base* t531 = t530->_M_left;
  __retval529 = t531;
  struct std___Rb_tree_node_base* t532 = __retval529;
  return t532;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v533, struct std___Rb_tree_iterator_int_* v534) {
bb535:
  struct std___Rb_tree_iterator_int_* __x536;
  struct std___Rb_tree_iterator_int_* __y537;
  _Bool __retval538;
  __x536 = v533;
  __y537 = v534;
  struct std___Rb_tree_iterator_int_* t539 = __x536;
  struct std___Rb_tree_node_base* t540 = t539->_M_node;
  struct std___Rb_tree_iterator_int_* t541 = __y537;
  struct std___Rb_tree_node_base* t542 = t541->_M_node;
  _Bool c543 = ((t540 == t542)) ? 1 : 0;
  __retval538 = c543;
  _Bool t544 = __retval538;
  return t544;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v545) {
bb546:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this547;
  struct std___Rb_tree_iterator_int_ __retval548;
  this547 = v545;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t549 = this547;
  struct std___Rb_tree_header* base550 = (struct std___Rb_tree_header*)((char *)&(t549->_M_impl) + 8);
  struct std___Rb_tree_node_base* t551 = base550->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval548, t551);
  struct std___Rb_tree_iterator_int_ t552 = __retval548;
  return t552;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v553, int* v554) {
bb555:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this556;
  int* __k557;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval558;
  struct std___Rb_tree_node_base* __x559;
  struct std___Rb_tree_node_base* __y560;
  _Bool __comp561;
  struct std___Rb_tree_iterator_int_ __j562;
  struct std___Rb_tree_node_base* ref_tmp1563;
  this556 = v553;
  __k557 = v554;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t564 = this556;
  struct std___Rb_tree_node_base* r565 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t564);
  __x559 = r565;
  struct std___Rb_tree_node_base* r566 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t564);
  __y560 = r566;
  _Bool c567 = 1;
  __comp561 = c567;
    while (1) {
      struct std___Rb_tree_node_base* t568 = __x559;
      _Bool cast569 = (_Bool)t568;
      if (!cast569) break;
        struct std___Rb_tree_node_base* t570 = __x559;
        __y560 = t570;
        struct std___Rb_tree_key_compare_std__less_int__* base571 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t564->_M_impl) + 0);
        struct std__less_int_* cast572 = (struct std__less_int_*)base571;
        int* t573 = __k557;
        struct std___Rb_tree_node_base* t574 = __x559;
        int* r575 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t574);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r576 = std__less_int___operator___int_const___int_const___const(cast572, t573, r575);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp561 = r576;
        _Bool t577 = __comp561;
        struct std___Rb_tree_node_base* ternary578;
        if (t577) {
          struct std___Rb_tree_node_base* t579 = __x559;
          struct std___Rb_tree_node_base* r580 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t579);
          ternary578 = (struct std___Rb_tree_node_base*)r580;
        } else {
          struct std___Rb_tree_node_base* t581 = __x559;
          struct std___Rb_tree_node_base* r582 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t581);
          ternary578 = (struct std___Rb_tree_node_base*)r582;
        }
        __x559 = ternary578;
    }
  struct std___Rb_tree_node_base* t583 = __y560;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j562, t583);
    _Bool t584 = __comp561;
    if (t584) {
        struct std___Rb_tree_iterator_int_ ref_tmp0585;
        struct std___Rb_tree_iterator_int_ r586 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t564);
        ref_tmp0585 = r586;
        _Bool r587 = std__operator__(&__j562, &ref_tmp0585);
        if (r587) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval558, &__x559, &__y560);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t588 = __retval558;
          return t588;
        } else {
          struct std___Rb_tree_iterator_int_* r589 = std___Rb_tree_iterator_int___operator__(&__j562);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base590 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t564->_M_impl) + 0);
    struct std__less_int_* cast591 = (struct std__less_int_*)base590;
    struct std___Rb_tree_node_base* t592 = __j562._M_node;
    int* r593 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t592);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t594 = __k557;
    _Bool r595 = std__less_int___operator___int_const___int_const___const(cast591, r593, t594);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r595) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval558, &__x559, &__y560);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t596 = __retval558;
      return t596;
    }
  struct std___Rb_tree_node_base* c597 = ((void*)0);
  ref_tmp1563 = c597;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval558, &__j562._M_node, &ref_tmp1563);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t598 = __retval558;
  return t598;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v599) {
bb600:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this601;
  struct std___Rb_tree_node_base** __retval602;
  this601 = v599;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t603 = this601;
  struct std___Rb_tree_header* base604 = (struct std___Rb_tree_header*)((char *)&(t603->_M_impl) + 8);
  __retval602 = &base604->_M_header._M_left;
  struct std___Rb_tree_node_base** t605 = __retval602;
  return t605;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v606, struct std___Rb_tree_node_base** v607, struct std___Rb_tree_node_base** v608) {
bb609:
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

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v619) {
bb620:
  struct std___Rb_tree_iterator_int_* this621;
  struct std___Rb_tree_iterator_int_* __retval622;
  this621 = v619;
  struct std___Rb_tree_iterator_int_* t623 = this621;
  struct std___Rb_tree_node_base* t624 = t623->_M_node;
  struct std___Rb_tree_node_base* r625 = std___Rb_tree_decrement(t624);
  t623->_M_node = r625;
  __retval622 = t623;
  struct std___Rb_tree_iterator_int_* t626 = __retval622;
  return t626;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v627) {
bb628:
  struct std___Rb_tree_node_base* __x629;
  struct std___Rb_tree_node_base* __retval630;
  __x629 = v627;
  struct std___Rb_tree_node_base* t631 = __x629;
  struct std___Rb_tree_node_base* t632 = t631->_M_right;
  __retval630 = t632;
  struct std___Rb_tree_node_base* t633 = __retval630;
  return t633;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v634) {
bb635:
  struct std___Rb_tree_iterator_int_* this636;
  struct std___Rb_tree_iterator_int_* __retval637;
  this636 = v634;
  struct std___Rb_tree_iterator_int_* t638 = this636;
  struct std___Rb_tree_node_base* t639 = t638->_M_node;
  struct std___Rb_tree_node_base* r640 = std___Rb_tree_increment(t639);
  t638->_M_node = r640;
  __retval637 = t638;
  struct std___Rb_tree_iterator_int_* t641 = __retval637;
  return t641;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v642, struct std___Rb_tree_node_base** v643, struct std___Rb_tree_node_base** v644) {
bb645:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this646;
  struct std___Rb_tree_node_base** __x647;
  struct std___Rb_tree_node_base** __y648;
  this646 = v642;
  __x647 = v643;
  __y648 = v644;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t649 = this646;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base650 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t649 + 0);
  struct std___Rb_tree_node_base** t651 = __x647;
  struct std___Rb_tree_node_base* t652 = *t651;
  t649->first = t652;
  struct std___Rb_tree_node_base** t653 = __y648;
  struct std___Rb_tree_node_base* t654 = *t653;
  t649->second = t654;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v655, struct std___Rb_tree_const_iterator_int_ v656, int* v657) {
bb658:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this659;
  struct std___Rb_tree_const_iterator_int_ __position660;
  int* __k661;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval662;
  this659 = v655;
  __position660 = v656;
  __k661 = v657;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t663 = this659;
    struct std___Rb_tree_node_base* t664 = __position660._M_node;
    struct std___Rb_tree_node_base* r665 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t663);
    _Bool c666 = ((t664 == r665)) ? 1 : 0;
    if (c666) {
        unsigned long r667 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t663);
        unsigned long c668 = 0;
        _Bool c669 = ((r667 > c668)) ? 1 : 0;
        _Bool ternary670;
        if (c669) {
          struct std___Rb_tree_key_compare_std__less_int__* base671 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t663->_M_impl) + 0);
          struct std__less_int_* cast672 = (struct std__less_int_*)base671;
          struct std___Rb_tree_node_base** r673 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t663);
          struct std___Rb_tree_node_base* t674 = *r673;
          int* r675 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t674);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t676 = __k661;
          _Bool r677 = std__less_int___operator___int_const___int_const___const(cast672, r675, t676);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary670 = (_Bool)r677;
        } else {
          _Bool c678 = 0;
          ternary670 = (_Bool)c678;
        }
        if (ternary670) {
          struct std___Rb_tree_node_base* ref_tmp0679;
          struct std___Rb_tree_node_base* c680 = ((void*)0);
          ref_tmp0679 = c680;
          struct std___Rb_tree_node_base** r681 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t663);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &ref_tmp0679, r681);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t682 = __retval662;
          return t682;
        } else {
          int* t683 = __k661;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r684 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t663, t683);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval662 = r684;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t685 = __retval662;
          return t685;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base686 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t663->_M_impl) + 0);
        struct std__less_int_* cast687 = (struct std__less_int_*)base686;
        int* t688 = __k661;
        struct std___Rb_tree_node_base* t689 = __position660._M_node;
        int* r690 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t689);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r691 = std__less_int___operator___int_const___int_const___const(cast687, t688, r690);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r691) {
          struct std___Rb_tree_iterator_int_ __before692;
          struct std___Rb_tree_node_base* t693 = __position660._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before692, t693);
            struct std___Rb_tree_node_base* t694 = __position660._M_node;
            struct std___Rb_tree_node_base** r695 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t663);
            struct std___Rb_tree_node_base* t696 = *r695;
            _Bool c697 = ((t694 == t696)) ? 1 : 0;
            if (c697) {
              struct std___Rb_tree_node_base** r698 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t663);
              struct std___Rb_tree_node_base** r699 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t663);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, r698, r699);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t700 = __retval662;
              return t700;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base701 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t663->_M_impl) + 0);
                struct std__less_int_* cast702 = (struct std__less_int_*)base701;
                struct std___Rb_tree_iterator_int_* r703 = std___Rb_tree_iterator_int___operator__(&__before692);
                struct std___Rb_tree_node_base* t704 = r703->_M_node;
                int* r705 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t704);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t706 = __k661;
                _Bool r707 = std__less_int___operator___int_const___int_const___const(cast702, r705, t706);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r707) {
                    struct std___Rb_tree_node_base* t708 = __before692._M_node;
                    struct std___Rb_tree_node_base* r709 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t708);
                    _Bool cast710 = (_Bool)r709;
                    _Bool u711 = !cast710;
                    if (u711) {
                      struct std___Rb_tree_node_base* ref_tmp1712;
                      struct std___Rb_tree_node_base* c713 = ((void*)0);
                      ref_tmp1712 = c713;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &ref_tmp1712, &__before692._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t714 = __retval662;
                      return t714;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &__position660._M_node, &__position660._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t715 = __retval662;
                      return t715;
                    }
                } else {
                  int* t716 = __k661;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r717 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t663, t716);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval662 = r717;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t718 = __retval662;
                  return t718;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base719 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t663->_M_impl) + 0);
            struct std__less_int_* cast720 = (struct std__less_int_*)base719;
            struct std___Rb_tree_node_base* t721 = __position660._M_node;
            int* r722 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t721);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t723 = __k661;
            _Bool r724 = std__less_int___operator___int_const___int_const___const(cast720, r722, t723);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r724) {
              struct std___Rb_tree_iterator_int_ __after725;
              struct std___Rb_tree_node_base* t726 = __position660._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after725, t726);
                struct std___Rb_tree_node_base* t727 = __position660._M_node;
                struct std___Rb_tree_node_base** r728 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t663);
                struct std___Rb_tree_node_base* t729 = *r728;
                _Bool c730 = ((t727 == t729)) ? 1 : 0;
                if (c730) {
                  struct std___Rb_tree_node_base* ref_tmp2731;
                  struct std___Rb_tree_node_base* c732 = ((void*)0);
                  ref_tmp2731 = c732;
                  struct std___Rb_tree_node_base** r733 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t663);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &ref_tmp2731, r733);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t734 = __retval662;
                  return t734;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base735 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t663->_M_impl) + 0);
                    struct std__less_int_* cast736 = (struct std__less_int_*)base735;
                    int* t737 = __k661;
                    struct std___Rb_tree_iterator_int_* r738 = std___Rb_tree_iterator_int___operator___2(&__after725);
                    struct std___Rb_tree_node_base* t739 = r738->_M_node;
                    int* r740 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t739);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r741 = std__less_int___operator___int_const___int_const___const(cast736, t737, r740);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r741) {
                        struct std___Rb_tree_node_base* t742 = __position660._M_node;
                        struct std___Rb_tree_node_base* r743 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t742);
                        _Bool cast744 = (_Bool)r743;
                        _Bool u745 = !cast744;
                        if (u745) {
                          struct std___Rb_tree_node_base* ref_tmp3746;
                          struct std___Rb_tree_node_base* c747 = ((void*)0);
                          ref_tmp3746 = c747;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &ref_tmp3746, &__position660._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t748 = __retval662;
                          return t748;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &__after725._M_node, &__after725._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t749 = __retval662;
                          return t749;
                        }
                    } else {
                      int* t750 = __k661;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r751 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t663, t750);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval662 = r751;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t752 = __retval662;
                      return t752;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4753;
              struct std___Rb_tree_node_base* c754 = ((void*)0);
              ref_tmp4753 = c754;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval662, &__position660._M_node, &ref_tmp4753);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t755 = __retval662;
              return t755;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v756, int* v757) {
bb758:
  struct std___Identity_int_* this759;
  int* __x760;
  int* __retval761;
  this759 = v756;
  __x760 = v757;
  struct std___Identity_int_* t762 = this759;
  int* t763 = __x760;
  __retval761 = t763;
  int* t764 = __retval761;
  return t764;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v765) {
bb766:
  struct std____new_allocator_std___Rb_tree_node_int__* this767;
  unsigned long __retval768;
  this767 = v765;
  struct std____new_allocator_std___Rb_tree_node_int__* t769 = this767;
  unsigned long c770 = 9223372036854775807;
  unsigned long c771 = 40;
  unsigned long b772 = c770 / c771;
  __retval768 = b772;
  unsigned long t773 = __retval768;
  return t773;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v774, unsigned long v775, void* v776) {
bb777:
  struct std____new_allocator_std___Rb_tree_node_int__* this778;
  unsigned long __n779;
  void* unnamed780;
  struct std___Rb_tree_node_int_* __retval781;
  this778 = v774;
  __n779 = v775;
  unnamed780 = v776;
  struct std____new_allocator_std___Rb_tree_node_int__* t782 = this778;
    unsigned long t783 = __n779;
    unsigned long r784 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t782);
    _Bool c785 = ((t783 > r784)) ? 1 : 0;
    if (c785) {
        unsigned long t786 = __n779;
        unsigned long c787 = -1;
        unsigned long c788 = 40;
        unsigned long b789 = c787 / c788;
        _Bool c790 = ((t786 > b789)) ? 1 : 0;
        if (c790) {
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
    unsigned long c791 = 8;
    unsigned long c792 = 16;
    _Bool c793 = ((c791 > c792)) ? 1 : 0;
    if (c793) {
      unsigned long __al794;
      unsigned long c795 = 8;
      __al794 = c795;
      unsigned long t796 = __n779;
      unsigned long c797 = 40;
      unsigned long b798 = t796 * c797;
      unsigned long t799 = __al794;
      void* r800 = operator_new_2(b798, t799);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast801 = (struct std___Rb_tree_node_int_*)r800;
      __retval781 = cast801;
      struct std___Rb_tree_node_int_* t802 = __retval781;
      return t802;
    }
  unsigned long t803 = __n779;
  unsigned long c804 = 40;
  unsigned long b805 = t803 * c804;
  void* r806 = operator_new(b805);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast807 = (struct std___Rb_tree_node_int_*)r806;
  __retval781 = cast807;
  struct std___Rb_tree_node_int_* t808 = __retval781;
  return t808;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v809, unsigned long v810) {
bb811:
  struct std__allocator_std___Rb_tree_node_int__* this812;
  unsigned long __n813;
  struct std___Rb_tree_node_int_* __retval814;
  this812 = v809;
  __n813 = v810;
  struct std__allocator_std___Rb_tree_node_int__* t815 = this812;
    _Bool r816 = std____is_constant_evaluated();
    if (r816) {
        unsigned long t817 = __n813;
        unsigned long c818 = 40;
        unsigned long ovr819;
        _Bool ovf820 = __builtin_mul_overflow(t817, c818, &ovr819);
        __n813 = ovr819;
        if (ovf820) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t821 = __n813;
      void* r822 = operator_new(t821);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast823 = (struct std___Rb_tree_node_int_*)r822;
      __retval814 = cast823;
      struct std___Rb_tree_node_int_* t824 = __retval814;
      return t824;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base825 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t815 + 0);
  unsigned long t826 = __n813;
  void* c827 = ((void*)0);
  struct std___Rb_tree_node_int_* r828 = std____new_allocator_std___Rb_tree_node_int_____allocate(base825, t826, c827);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval814 = r828;
  struct std___Rb_tree_node_int_* t829 = __retval814;
  return t829;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v830, unsigned long v831) {
bb832:
  struct std__allocator_std___Rb_tree_node_int__* __a833;
  unsigned long __n834;
  struct std___Rb_tree_node_int_* __retval835;
  __a833 = v830;
  __n834 = v831;
  struct std__allocator_std___Rb_tree_node_int__* t836 = __a833;
  unsigned long t837 = __n834;
  struct std___Rb_tree_node_int_* r838 = std__allocator_std___Rb_tree_node_int_____allocate(t836, t837);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval835 = r838;
  struct std___Rb_tree_node_int_* t839 = __retval835;
  return t839;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v840) {
bb841:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this842;
  struct std___Rb_tree_node_int_* __retval843;
  this842 = v840;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t844 = this842;
  struct std__allocator_std___Rb_tree_node_int__* r845 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t844);
  unsigned long c846 = 1;
  struct std___Rb_tree_node_int_* r847 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r845, c846);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval843 = r847;
  struct std___Rb_tree_node_int_* t848 = __retval843;
  return t848;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v849, int* v850) {
bb851:
  int* __location852;
  int* __args853;
  int* __retval854;
  void* __loc855;
  __location852 = v849;
  __args853 = v850;
  int* t856 = __location852;
  void* cast857 = (void*)t856;
  __loc855 = cast857;
    void* t858 = __loc855;
    int* cast859 = (int*)t858;
    int* t860 = __args853;
    int t861 = *t860;
    *cast859 = t861;
    __retval854 = cast859;
    int* t862 = __retval854;
    return t862;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v863, int* v864, int* v865) {
bb866:
  struct std__allocator_std___Rb_tree_node_int__* __a867;
  int* __p868;
  int* __args869;
  __a867 = v863;
  __p868 = v864;
  __args869 = v865;
  int* t870 = __p868;
  int* t871 = __args869;
  int* r872 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t870, t871);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v873, struct std___Rb_tree_node_int_* v874, int* v875) {
bb876:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this877;
  struct std___Rb_tree_node_int_* __node878;
  int* __args879;
  this877 = v873;
  __node878 = v874;
  __args879 = v875;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t880 = this877;
      struct std__allocator_std___Rb_tree_node_int__* r882 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t880);
      struct std___Rb_tree_node_int_* t883 = __node878;
      int* r884 = std___Rb_tree_node_int____M_valptr(t883);
      if (__cir_exc_active) {
        goto cir_try_dispatch881;
      }
      int* t885 = __args879;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r882, r884, t885);
    cir_try_dispatch881: ;
    if (__cir_exc_active) {
    {
      int ca_tok886 = 0;
      void* ca_exn887 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t888 = __node878;
        struct std___Rb_tree_node_int_* t889 = __node878;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t880, t889);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v890, int* v891) {
bb892:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this893;
  int* __args894;
  struct std___Rb_tree_node_int_* __retval895;
  struct std___Rb_tree_node_int_* __tmp896;
  this893 = v890;
  __args894 = v891;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t897 = this893;
  struct std___Rb_tree_node_int_* r898 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t897);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp896 = r898;
  struct std___Rb_tree_node_int_* t899 = __tmp896;
  int* t900 = __args894;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t897, t899, t900);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t901 = __tmp896;
  __retval895 = t901;
  struct std___Rb_tree_node_int_* t902 = __retval895;
  return t902;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v903, int* v904) {
bb905:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this906;
  int* __arg907;
  struct std___Rb_tree_node_int_* __retval908;
  this906 = v903;
  __arg907 = v904;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t909 = this906;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t910 = t909->_M_t;
  int* t911 = __arg907;
  struct std___Rb_tree_node_int_* r912 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t910, t911);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval908 = r912;
  struct std___Rb_tree_node_int_* t913 = __retval908;
  return t913;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v914, struct std___Rb_tree_node_base* v915, struct std___Rb_tree_node_base* v916, struct std___Rb_tree_node_base* v917) {
bb918:
  _Bool __insert_left919;
  struct std___Rb_tree_node_base* __x920;
  struct std___Rb_tree_node_base* __p921;
  struct std___Rb_tree_node_base* __header922;
  __insert_left919 = v914;
  __x920 = v915;
  __p921 = v916;
  __header922 = v917;
  _Bool t923 = __insert_left919;
  struct std___Rb_tree_node_base* t924 = __x920;
  struct std___Rb_tree_node_base* t925 = __p921;
  struct std___Rb_tree_node_base* t926 = __header922;
  std___Rb_tree_insert_and_rebalance(t923, t924, t925, t926);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v927, struct std___Rb_tree_node_base* v928, struct std___Rb_tree_node_base* v929, int* v930, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v931) {
bb932:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this933;
  struct std___Rb_tree_node_base* __x934;
  struct std___Rb_tree_node_base* __p935;
  int* __v936;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen937;
  struct std___Rb_tree_iterator_int_ __retval938;
  _Bool __insert_left939;
  struct std___Rb_tree_node_base* __z940;
  this933 = v927;
  __x934 = v928;
  __p935 = v929;
  __v936 = v930;
  __node_gen937 = v931;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t941 = this933;
  struct std___Rb_tree_node_base* t942 = __x934;
  _Bool cast943 = (_Bool)t942;
  _Bool ternary944;
  if (cast943) {
    _Bool c945 = 1;
    ternary944 = (_Bool)c945;
  } else {
    struct std___Rb_tree_node_base* t946 = __p935;
    struct std___Rb_tree_node_base* r947 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t941);
    _Bool c948 = ((t946 == r947)) ? 1 : 0;
    ternary944 = (_Bool)c948;
  }
  _Bool ternary949;
  if (ternary944) {
    _Bool c950 = 1;
    ternary949 = (_Bool)c950;
  } else {
    struct std___Identity_int_ ref_tmp0951;
    struct std___Rb_tree_key_compare_std__less_int__* base952 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t941->_M_impl) + 0);
    struct std__less_int_* cast953 = (struct std__less_int_*)base952;
    int* t954 = __v936;
    int* r955 = std___Identity_int___operator___int___const(&ref_tmp0951, t954);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t956 = __p935;
    int* r957 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t956);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r958 = std__less_int___operator___int_const___int_const___const(cast953, r955, r957);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary949 = (_Bool)r958;
  }
  __insert_left939 = ternary949;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t959 = __node_gen937;
  int* t960 = __v936;
  struct std___Rb_tree_node_int_* r961 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t959, t960);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base962 = (struct std___Rb_tree_node_base*)((char *)r961 + 0);
  struct std___Rb_tree_node_base* r963 = std___Rb_tree_node_base___M_base_ptr___const(base962);
  __z940 = r963;
  _Bool t964 = __insert_left939;
  struct std___Rb_tree_node_base* t965 = __z940;
  struct std___Rb_tree_node_base* t966 = __p935;
  struct std___Rb_tree_header* base967 = (struct std___Rb_tree_header*)((char *)&(t941->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t964, t965, t966, &base967->_M_header);
  struct std___Rb_tree_header* base968 = (struct std___Rb_tree_header*)((char *)&(t941->_M_impl) + 8);
  unsigned long t969 = base968->_M_node_count;
  unsigned long u970 = t969 + 1;
  base968->_M_node_count = u970;
  struct std___Rb_tree_node_base* t971 = __z940;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval938, t971);
  struct std___Rb_tree_iterator_int_ t972 = __retval938;
  return t972;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v973, struct std___Rb_tree_node_base* v974) {
bb975:
  struct std___Rb_tree_iterator_int_* this976;
  struct std___Rb_tree_node_base* __x977;
  this976 = v973;
  __x977 = v974;
  struct std___Rb_tree_iterator_int_* t978 = this976;
  struct std___Rb_tree_node_base* t979 = __x977;
  t978->_M_node = t979;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v980, struct std___Rb_tree_const_iterator_int_ v981, int* v982, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v983) {
bb984:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this985;
  struct std___Rb_tree_const_iterator_int_ __position986;
  int* __v987;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen988;
  struct std___Rb_tree_iterator_int_ __retval989;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res990;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0991;
  struct std___Identity_int_ ref_tmp0992;
  this985 = v980;
  __position986 = v981;
  __v987 = v982;
  __node_gen988 = v983;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t993 = this985;
  agg_tmp0991 = __position986; // copy
  int* t994 = __v987;
  int* r995 = std___Identity_int___operator___int___const(&ref_tmp0992, t994);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t996 = agg_tmp0991;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r997 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t993, t996, r995);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res990 = r997;
    struct std___Rb_tree_node_base* t998 = __res990.second;
    _Bool cast999 = (_Bool)t998;
    if (cast999) {
      struct std___Rb_tree_node_base* t1000 = __res990.first;
      struct std___Rb_tree_node_base* t1001 = __res990.second;
      int* t1002 = __v987;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1003 = __node_gen988;
      struct std___Rb_tree_iterator_int_ r1004 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t993, t1000, t1001, t1002, t1003);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval989 = r1004;
      struct std___Rb_tree_iterator_int_ t1005 = __retval989;
      return t1005;
    }
  struct std___Rb_tree_node_base* t1006 = __res990.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval989, t1006);
  struct std___Rb_tree_iterator_int_ t1007 = __retval989;
  return t1007;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1008) {
bb1009:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1010;
  struct std___Rb_tree_iterator_int_ __retval1011;
  this1010 = v1008;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1012 = this1010;
  struct std___Rb_tree_node_base* r1013 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1012);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1011, r1013);
  struct std___Rb_tree_iterator_int_ t1014 = __retval1011;
  return t1014;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1015, struct std___Rb_tree_iterator_int_* v1016) {
bb1017:
  struct std___Rb_tree_const_iterator_int_* this1018;
  struct std___Rb_tree_iterator_int_* __it1019;
  this1018 = v1015;
  __it1019 = v1016;
  struct std___Rb_tree_const_iterator_int_* t1020 = this1018;
  struct std___Rb_tree_iterator_int_* t1021 = __it1019;
  struct std___Rb_tree_node_base* t1022 = t1021->_M_node;
  t1020->_M_node = t1022;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1023, int* v1024, int* v1025) {
bb1026:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1027;
  int* __first1028;
  int* __last1029;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1030;
  this1027 = v1023;
  __first1028 = v1024;
  __last1029 = v1025;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1031 = this1027;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1030, t1031);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01032;
    struct std___Rb_tree_iterator_int_ ref_tmp01033;
    struct std___Rb_tree_iterator_int_ agg_tmp11034;
    while (1) {
      int* t1036 = __first1028;
      int* t1037 = __last1029;
      _Bool c1038 = ((t1036 != t1037)) ? 1 : 0;
      if (!c1038) break;
      struct std___Rb_tree_iterator_int_ r1039 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1031);
      ref_tmp01033 = r1039;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01032, &ref_tmp01033);
      int* t1040 = __first1028;
      struct std___Rb_tree_const_iterator_int_ t1041 = agg_tmp01032;
      struct std___Rb_tree_iterator_int_ r1042 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1031, t1041, t1040, &__an1030);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11034 = r1042;
    for_step1035: ;
      int* t1043 = __first1028;
      int c1044 = 1;
      int* ptr1045 = &(t1043)[c1044];
      __first1028 = ptr1045;
    }
  return;
}

