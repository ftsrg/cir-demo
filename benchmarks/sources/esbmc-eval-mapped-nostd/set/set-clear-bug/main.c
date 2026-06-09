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
struct std____pair_base_std___Rb_tree_const_iterator_int___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_iterator_int___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

char _str[18] = "myset.size() != 0";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-clear-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0);
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
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
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
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__set_int__std__less_int___std__allocator_int_____clear(struct std__set_int__std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2Ev
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__set_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__set_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v4) {
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

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v108, struct std___Rb_tree_iterator_int_* v109) {
bb110:
  struct std___Rb_tree_iterator_int_* __x111;
  struct std___Rb_tree_iterator_int_* __y112;
  _Bool __retval113;
  __x111 = v108;
  __y112 = v109;
  struct std___Rb_tree_iterator_int_* t114 = __x111;
  struct std___Rb_tree_node_base* t115 = t114->_M_node;
  struct std___Rb_tree_iterator_int_* t116 = __y112;
  struct std___Rb_tree_node_base* t117 = t116->_M_node;
  _Bool c118 = ((t115 == t117)) ? 1 : 0;
  __retval113 = c118;
  _Bool t119 = __retval113;
  return t119;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v120) {
bb121:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this122;
  struct std___Rb_tree_iterator_int_ __retval123;
  this122 = v120;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t124 = this122;
  struct std___Rb_tree_header* base125 = (struct std___Rb_tree_header*)((char *)&(t124->_M_impl) + 8);
  struct std___Rb_tree_node_base* t126 = base125->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval123, t126);
  struct std___Rb_tree_iterator_int_ t127 = __retval123;
  return t127;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v128, struct std___Rb_tree_node_base** v129, struct std___Rb_tree_node_base** v130) {
bb131:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this132;
  struct std___Rb_tree_node_base** __x133;
  struct std___Rb_tree_node_base** __y134;
  this132 = v128;
  __x133 = v129;
  __y134 = v130;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t135 = this132;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base136 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t135 + 0);
  struct std___Rb_tree_node_base** t137 = __x133;
  struct std___Rb_tree_node_base* t138 = *t137;
  t135->first = t138;
  struct std___Rb_tree_node_base** t139 = __y134;
  struct std___Rb_tree_node_base* t140 = *t139;
  t135->second = t140;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v141) {
bb142:
  struct std___Rb_tree_iterator_int_* this143;
  struct std___Rb_tree_iterator_int_* __retval144;
  this143 = v141;
  struct std___Rb_tree_iterator_int_* t145 = this143;
  struct std___Rb_tree_node_base* t146 = t145->_M_node;
  struct std___Rb_tree_node_base* r147 = std___Rb_tree_decrement(t146);
  t145->_M_node = r147;
  __retval144 = t145;
  struct std___Rb_tree_iterator_int_* t148 = __retval144;
  return t148;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v149, struct std___Rb_tree_node_base** v150, struct std___Rb_tree_node_base** v151) {
bb152:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this153;
  struct std___Rb_tree_node_base** __x154;
  struct std___Rb_tree_node_base** __y155;
  this153 = v149;
  __x154 = v150;
  __y155 = v151;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t156 = this153;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base157 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t156 + 0);
  struct std___Rb_tree_node_base** t158 = __x154;
  struct std___Rb_tree_node_base* t159 = *t158;
  t156->first = t159;
  struct std___Rb_tree_node_base** t160 = __y155;
  struct std___Rb_tree_node_base* t161 = *t160;
  t156->second = t161;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v162, int* v163) {
bb164:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this165;
  int* __k166;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval167;
  struct std___Rb_tree_node_base* __x168;
  struct std___Rb_tree_node_base* __y169;
  _Bool __comp170;
  struct std___Rb_tree_iterator_int_ __j171;
  struct std___Rb_tree_node_base* ref_tmp1172;
  this165 = v162;
  __k166 = v163;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t173 = this165;
  struct std___Rb_tree_node_base* r174 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t173);
  __x168 = r174;
  struct std___Rb_tree_node_base* r175 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t173);
  __y169 = r175;
  _Bool c176 = 1;
  __comp170 = c176;
    while (1) {
      struct std___Rb_tree_node_base* t177 = __x168;
      _Bool cast178 = (_Bool)t177;
      if (!cast178) break;
        struct std___Rb_tree_node_base* t179 = __x168;
        __y169 = t179;
        struct std___Rb_tree_key_compare_std__less_int__* base180 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t173->_M_impl) + 0);
        struct std__less_int_* cast181 = (struct std__less_int_*)base180;
        int* t182 = __k166;
        struct std___Rb_tree_node_base* t183 = __x168;
        int* r184 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t183);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r185 = std__less_int___operator___int_const___int_const___const(cast181, t182, r184);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp170 = r185;
        _Bool t186 = __comp170;
        struct std___Rb_tree_node_base* ternary187;
        if (t186) {
          struct std___Rb_tree_node_base* t188 = __x168;
          struct std___Rb_tree_node_base* r189 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t188);
          ternary187 = (struct std___Rb_tree_node_base*)r189;
        } else {
          struct std___Rb_tree_node_base* t190 = __x168;
          struct std___Rb_tree_node_base* r191 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t190);
          ternary187 = (struct std___Rb_tree_node_base*)r191;
        }
        __x168 = ternary187;
    }
  struct std___Rb_tree_node_base* t192 = __y169;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j171, t192);
    _Bool t193 = __comp170;
    if (t193) {
        struct std___Rb_tree_iterator_int_ ref_tmp0194;
        struct std___Rb_tree_iterator_int_ r195 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t173);
        ref_tmp0194 = r195;
        _Bool r196 = std__operator__(&__j171, &ref_tmp0194);
        if (r196) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval167, &__x168, &__y169);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t197 = __retval167;
          return t197;
        } else {
          struct std___Rb_tree_iterator_int_* r198 = std___Rb_tree_iterator_int___operator__(&__j171);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base199 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t173->_M_impl) + 0);
    struct std__less_int_* cast200 = (struct std__less_int_*)base199;
    struct std___Rb_tree_node_base* t201 = __j171._M_node;
    int* r202 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t201);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t203 = __k166;
    _Bool r204 = std__less_int___operator___int_const___int_const___const(cast200, r202, t203);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r204) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval167, &__x168, &__y169);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t205 = __retval167;
      return t205;
    }
  struct std___Rb_tree_node_base* c206 = ((void*)0);
  ref_tmp1172 = c206;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval167, &__j171._M_node, &ref_tmp1172);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t207 = __retval167;
  return t207;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v208, int* v209) {
bb210:
  struct std___Identity_int_* this211;
  int* __x212;
  int* __retval213;
  this211 = v208;
  __x212 = v209;
  struct std___Identity_int_* t214 = this211;
  int* t215 = __x212;
  __retval213 = t215;
  int* t216 = __retval213;
  return t216;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v217, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v218) {
bb219:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t221;
  this220 = v217;
  __t221 = v218;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t222 = this220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t223 = __t221;
  t222->_M_t = t223;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v224) {
bb225:
  struct std____new_allocator_std___Rb_tree_node_int__* this226;
  unsigned long __retval227;
  this226 = v224;
  struct std____new_allocator_std___Rb_tree_node_int__* t228 = this226;
  unsigned long c229 = 9223372036854775807;
  unsigned long c230 = 40;
  unsigned long b231 = c229 / c230;
  __retval227 = b231;
  unsigned long t232 = __retval227;
  return t232;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v233, unsigned long v234, void* v235) {
bb236:
  struct std____new_allocator_std___Rb_tree_node_int__* this237;
  unsigned long __n238;
  void* unnamed239;
  struct std___Rb_tree_node_int_* __retval240;
  this237 = v233;
  __n238 = v234;
  unnamed239 = v235;
  struct std____new_allocator_std___Rb_tree_node_int__* t241 = this237;
    unsigned long t242 = __n238;
    unsigned long r243 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t241);
    _Bool c244 = ((t242 > r243)) ? 1 : 0;
    if (c244) {
        unsigned long t245 = __n238;
        unsigned long c246 = -1;
        unsigned long c247 = 40;
        unsigned long b248 = c246 / c247;
        _Bool c249 = ((t245 > b248)) ? 1 : 0;
        if (c249) {
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
    unsigned long c250 = 8;
    unsigned long c251 = 16;
    _Bool c252 = ((c250 > c251)) ? 1 : 0;
    if (c252) {
      unsigned long __al253;
      unsigned long c254 = 8;
      __al253 = c254;
      unsigned long t255 = __n238;
      unsigned long c256 = 40;
      unsigned long b257 = t255 * c256;
      unsigned long t258 = __al253;
      void* r259 = operator_new_2(b257, t258);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast260 = (struct std___Rb_tree_node_int_*)r259;
      __retval240 = cast260;
      struct std___Rb_tree_node_int_* t261 = __retval240;
      return t261;
    }
  unsigned long t262 = __n238;
  unsigned long c263 = 40;
  unsigned long b264 = t262 * c263;
  void* r265 = operator_new(b264);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast266 = (struct std___Rb_tree_node_int_*)r265;
  __retval240 = cast266;
  struct std___Rb_tree_node_int_* t267 = __retval240;
  return t267;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v268, unsigned long v269) {
bb270:
  struct std__allocator_std___Rb_tree_node_int__* this271;
  unsigned long __n272;
  struct std___Rb_tree_node_int_* __retval273;
  this271 = v268;
  __n272 = v269;
  struct std__allocator_std___Rb_tree_node_int__* t274 = this271;
    _Bool r275 = std____is_constant_evaluated();
    if (r275) {
        unsigned long t276 = __n272;
        unsigned long c277 = 40;
        unsigned long ovr278;
        _Bool ovf279 = __builtin_mul_overflow(t276, c277, &ovr278);
        __n272 = ovr278;
        if (ovf279) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t280 = __n272;
      void* r281 = operator_new(t280);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast282 = (struct std___Rb_tree_node_int_*)r281;
      __retval273 = cast282;
      struct std___Rb_tree_node_int_* t283 = __retval273;
      return t283;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base284 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t274 + 0);
  unsigned long t285 = __n272;
  void* c286 = ((void*)0);
  struct std___Rb_tree_node_int_* r287 = std____new_allocator_std___Rb_tree_node_int_____allocate(base284, t285, c286);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval273 = r287;
  struct std___Rb_tree_node_int_* t288 = __retval273;
  return t288;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v289, unsigned long v290) {
bb291:
  struct std__allocator_std___Rb_tree_node_int__* __a292;
  unsigned long __n293;
  struct std___Rb_tree_node_int_* __retval294;
  __a292 = v289;
  __n293 = v290;
  struct std__allocator_std___Rb_tree_node_int__* t295 = __a292;
  unsigned long t296 = __n293;
  struct std___Rb_tree_node_int_* r297 = std__allocator_std___Rb_tree_node_int_____allocate(t295, t296);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval294 = r297;
  struct std___Rb_tree_node_int_* t298 = __retval294;
  return t298;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v299) {
bb300:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this301;
  struct std___Rb_tree_node_int_* __retval302;
  this301 = v299;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t303 = this301;
  struct std__allocator_std___Rb_tree_node_int__* r304 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t303);
  unsigned long c305 = 1;
  struct std___Rb_tree_node_int_* r306 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r304, c305);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval302 = r306;
  struct std___Rb_tree_node_int_* t307 = __retval302;
  return t307;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v308, int* v309) {
bb310:
  int* __location311;
  int* __args312;
  int* __retval313;
  void* __loc314;
  __location311 = v308;
  __args312 = v309;
  int* t315 = __location311;
  void* cast316 = (void*)t315;
  __loc314 = cast316;
    void* t317 = __loc314;
    int* cast318 = (int*)t317;
    int* t319 = __args312;
    int t320 = *t319;
    *cast318 = t320;
    __retval313 = cast318;
    int* t321 = __retval313;
    return t321;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v322, int* v323, int* v324) {
bb325:
  struct std__allocator_std___Rb_tree_node_int__* __a326;
  int* __p327;
  int* __args328;
  __a326 = v322;
  __p327 = v323;
  __args328 = v324;
  int* t329 = __p327;
  int* t330 = __args328;
  int* r331 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t329, t330);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v332, struct std___Rb_tree_node_int_* v333, int* v334) {
bb335:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this336;
  struct std___Rb_tree_node_int_* __node337;
  int* __args338;
  this336 = v332;
  __node337 = v333;
  __args338 = v334;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t339 = this336;
      struct std__allocator_std___Rb_tree_node_int__* r341 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t339);
      struct std___Rb_tree_node_int_* t342 = __node337;
      int* r343 = std___Rb_tree_node_int____M_valptr(t342);
      if (__cir_exc_active) {
        goto cir_try_dispatch340;
      }
      int* t344 = __args338;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r341, r343, t344);
    cir_try_dispatch340: ;
    if (__cir_exc_active) {
    {
      int ca_tok345 = 0;
      void* ca_exn346 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t347 = __node337;
        struct std___Rb_tree_node_int_* t348 = __node337;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t339, t348);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v349, int* v350) {
bb351:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this352;
  int* __args353;
  struct std___Rb_tree_node_int_* __retval354;
  struct std___Rb_tree_node_int_* __tmp355;
  this352 = v349;
  __args353 = v350;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t356 = this352;
  struct std___Rb_tree_node_int_* r357 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t356);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp355 = r357;
  struct std___Rb_tree_node_int_* t358 = __tmp355;
  int* t359 = __args353;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t356, t358, t359);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t360 = __tmp355;
  __retval354 = t360;
  struct std___Rb_tree_node_int_* t361 = __retval354;
  return t361;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v362, int* v363) {
bb364:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this365;
  int* __arg366;
  struct std___Rb_tree_node_int_* __retval367;
  this365 = v362;
  __arg366 = v363;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t368 = this365;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t369 = t368->_M_t;
  int* t370 = __arg366;
  struct std___Rb_tree_node_int_* r371 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t369, t370);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval367 = r371;
  struct std___Rb_tree_node_int_* t372 = __retval367;
  return t372;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v373, struct std___Rb_tree_node_base* v374, struct std___Rb_tree_node_base* v375, struct std___Rb_tree_node_base* v376) {
bb377:
  _Bool __insert_left378;
  struct std___Rb_tree_node_base* __x379;
  struct std___Rb_tree_node_base* __p380;
  struct std___Rb_tree_node_base* __header381;
  __insert_left378 = v373;
  __x379 = v374;
  __p380 = v375;
  __header381 = v376;
  _Bool t382 = __insert_left378;
  struct std___Rb_tree_node_base* t383 = __x379;
  struct std___Rb_tree_node_base* t384 = __p380;
  struct std___Rb_tree_node_base* t385 = __header381;
  std___Rb_tree_insert_and_rebalance(t382, t383, t384, t385);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v386, struct std___Rb_tree_node_base* v387, struct std___Rb_tree_node_base* v388, int* v389, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v390) {
bb391:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this392;
  struct std___Rb_tree_node_base* __x393;
  struct std___Rb_tree_node_base* __p394;
  int* __v395;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen396;
  struct std___Rb_tree_iterator_int_ __retval397;
  _Bool __insert_left398;
  struct std___Rb_tree_node_base* __z399;
  this392 = v386;
  __x393 = v387;
  __p394 = v388;
  __v395 = v389;
  __node_gen396 = v390;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t400 = this392;
  struct std___Rb_tree_node_base* t401 = __x393;
  _Bool cast402 = (_Bool)t401;
  _Bool ternary403;
  if (cast402) {
    _Bool c404 = 1;
    ternary403 = (_Bool)c404;
  } else {
    struct std___Rb_tree_node_base* t405 = __p394;
    struct std___Rb_tree_node_base* r406 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t400);
    _Bool c407 = ((t405 == r406)) ? 1 : 0;
    ternary403 = (_Bool)c407;
  }
  _Bool ternary408;
  if (ternary403) {
    _Bool c409 = 1;
    ternary408 = (_Bool)c409;
  } else {
    struct std___Identity_int_ ref_tmp0410;
    struct std___Rb_tree_key_compare_std__less_int__* base411 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t400->_M_impl) + 0);
    struct std__less_int_* cast412 = (struct std__less_int_*)base411;
    int* t413 = __v395;
    int* r414 = std___Identity_int___operator___int___const(&ref_tmp0410, t413);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t415 = __p394;
    int* r416 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t415);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r417 = std__less_int___operator___int_const___int_const___const(cast412, r414, r416);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary408 = (_Bool)r417;
  }
  __insert_left398 = ternary408;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t418 = __node_gen396;
  int* t419 = __v395;
  struct std___Rb_tree_node_int_* r420 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t418, t419);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base421 = (struct std___Rb_tree_node_base*)((char *)r420 + 0);
  struct std___Rb_tree_node_base* r422 = std___Rb_tree_node_base___M_base_ptr___const(base421);
  __z399 = r422;
  _Bool t423 = __insert_left398;
  struct std___Rb_tree_node_base* t424 = __z399;
  struct std___Rb_tree_node_base* t425 = __p394;
  struct std___Rb_tree_header* base426 = (struct std___Rb_tree_header*)((char *)&(t400->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t423, t424, t425, &base426->_M_header);
  struct std___Rb_tree_header* base427 = (struct std___Rb_tree_header*)((char *)&(t400->_M_impl) + 8);
  unsigned long t428 = base427->_M_node_count;
  unsigned long u429 = t428 + 1;
  base427->_M_node_count = u429;
  struct std___Rb_tree_node_base* t430 = __z399;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval397, t430);
  struct std___Rb_tree_iterator_int_ t431 = __retval397;
  return t431;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v432, struct std___Rb_tree_iterator_int_* v433, _Bool* v434) {
bb435:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this436;
  struct std___Rb_tree_iterator_int_* __x437;
  _Bool* __y438;
  this436 = v432;
  __x437 = v433;
  __y438 = v434;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t439 = this436;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base440 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t439 + 0);
  struct std___Rb_tree_iterator_int_* t441 = __x437;
  t439->first = *t441; // copy
  _Bool* t442 = __y438;
  _Bool t443 = *t442;
  t439->second = t443;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v444, struct std___Rb_tree_node_base* v445) {
bb446:
  struct std___Rb_tree_iterator_int_* this447;
  struct std___Rb_tree_node_base* __x448;
  this447 = v444;
  __x448 = v445;
  struct std___Rb_tree_iterator_int_* t449 = this447;
  struct std___Rb_tree_node_base* t450 = __x448;
  t449->_M_node = t450;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v451, int* v452) {
bb453:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this454;
  int* __v455;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval456;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res457;
  struct std___Identity_int_ ref_tmp0458;
  struct std___Rb_tree_iterator_int_ ref_tmp3459;
  _Bool ref_tmp4460;
  this454 = v451;
  __v455 = v452;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t461 = this454;
  int* t462 = __v455;
  int* r463 = std___Identity_int___operator___int___const(&ref_tmp0458, t462);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r464 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t461, r463);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res457 = r464;
    struct std___Rb_tree_node_base* t465 = __res457.second;
    _Bool cast466 = (_Bool)t465;
    if (cast466) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an467;
      struct std___Rb_tree_iterator_int_ ref_tmp1468;
      _Bool ref_tmp2469;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an467, t461);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t470 = __res457.first;
      struct std___Rb_tree_node_base* t471 = __res457.second;
      int* t472 = __v455;
      struct std___Rb_tree_iterator_int_ r473 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t461, t470, t471, t472, &__an467);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1468 = r473;
      _Bool c474 = 1;
      ref_tmp2469 = c474;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval456, &ref_tmp1468, &ref_tmp2469);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t475 = __retval456;
      return t475;
    }
  struct std___Rb_tree_node_base* t476 = __res457.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3459, t476);
  _Bool c477 = 0;
  ref_tmp4460 = c477;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval456, &ref_tmp3459, &ref_tmp4460);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t478 = __retval456;
  return t478;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v479, struct std___Rb_tree_iterator_int_* v480, _Bool* v481) {
bb482:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this483;
  struct std___Rb_tree_iterator_int_* __x484;
  _Bool* __y485;
  this483 = v479;
  __x484 = v480;
  __y485 = v481;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t486 = this483;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base487 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t486 + 0);
  struct std___Rb_tree_iterator_int_* t488 = __x484;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t486->first, t488);
  _Bool* t489 = __y485;
  _Bool t490 = *t489;
  t486->second = t490;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v491, int* v492) {
bb493:
  struct std__set_int__std__less_int___std__allocator_int__* this494;
  int* __x495;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval496;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p497;
  this494 = v491;
  __x495 = v492;
  struct std__set_int__std__less_int___std__allocator_int__* t498 = this494;
  int* t499 = __x495;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r500 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(&t498->_M_t, t499);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p497 = r500;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval496, &__p497.first, &__p497.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t501 = __retval496;
  return t501;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v502) {
bb503:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this504;
  this504 = v502;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t505 = this504;
  struct std___Rb_tree_node_int_* r506 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t505);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t505, r506);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base507 = (struct std___Rb_tree_header*)((char *)&(t505->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base507);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5clearEv
void std__set_int__std__less_int___std__allocator_int_____clear(struct std__set_int__std__less_int___std__allocator_int__* v508) {
bb509:
  struct std__set_int__std__less_int___std__allocator_int__* this510;
  this510 = v508;
  struct std__set_int__std__less_int___std__allocator_int__* t511 = this510;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(&t511->_M_t);
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v512) {
bb513:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this514;
  unsigned long __retval515;
  this514 = v512;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t516 = this514;
  struct std___Rb_tree_header* base517 = (struct std___Rb_tree_header*)((char *)&(t516->_M_impl) + 8);
  unsigned long t518 = base517->_M_node_count;
  __retval515 = t518;
  unsigned long t519 = __retval515;
  return t519;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v520) {
bb521:
  struct std__set_int__std__less_int___std__allocator_int__* this522;
  unsigned long __retval523;
  this522 = v520;
  struct std__set_int__std__less_int___std__allocator_int__* t524 = this522;
  unsigned long r525 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t524->_M_t);
  __retval523 = r525;
  unsigned long t526 = __retval523;
  return t526;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v527) {
bb528:
  struct std__set_int__std__less_int___std__allocator_int__* this529;
  this529 = v527;
  struct std__set_int__std__less_int___std__allocator_int__* t530 = this529;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t530->_M_t);
  }
  return;
}

// function: main
int main() {
bb531:
  int __retval532;
  struct std__set_int__std__less_int___std__allocator_int__ myset533;
  struct std___Rb_tree_const_iterator_int_ it534;
  int ref_tmp0535;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0536;
  int c537 = 0;
  __retval532 = c537;
  std__set_int__std__less_int___std__allocator_int_____set(&myset533);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&it534);
    int c538 = 100;
    ref_tmp0535 = c538;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r539 = std__set_int__std__less_int___std__allocator_int_____insert(&myset533, &ref_tmp0535);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset533);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0536 = r539;
    std__set_int__std__less_int___std__allocator_int_____clear(&myset533);
    unsigned long r540 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset533);
    unsigned long c541 = 0;
    _Bool c542 = ((r540 != c541)) ? 1 : 0;
    if (c542) {
    } else {
      char* cast543 = (char*)&(_str);
      char* c544 = _str_1;
      unsigned int c545 = 20;
      char* cast546 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast543, c544, c545, cast546);
    }
    int c547 = 0;
    __retval532 = c547;
    int t548 = __retval532;
    int ret_val549 = t548;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset533);
    }
    return ret_val549;
  int t550 = __retval532;
  return t550;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v551) {
bb552:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this553;
  this553 = v551;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t554 = this553;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t554->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v555) {
bb556:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this557;
  this557 = v555;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t558 = this557;
    struct std___Rb_tree_node_int_* r559 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t558);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t558, r559);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t558->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t558->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v560) {
bb561:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this562;
  this562 = v560;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t563 = this562;
  struct std__allocator_std___Rb_tree_node_int__* base564 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t563 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base564);
    struct std___Rb_tree_key_compare_std__less_int__* base565 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t563 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base565);
    struct std___Rb_tree_header* base566 = (struct std___Rb_tree_header*)((char *)t563 + 8);
    std___Rb_tree_header___Rb_tree_header(base566);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v567) {
bb568:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this569;
  this569 = v567;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t570 = this569;
  {
    struct std__allocator_std___Rb_tree_node_int__* base571 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t570 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base571);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v572) {
bb573:
  struct std____new_allocator_std___Rb_tree_node_int__* this574;
  this574 = v572;
  struct std____new_allocator_std___Rb_tree_node_int__* t575 = this574;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v576) {
bb577:
  struct std__allocator_std___Rb_tree_node_int__* this578;
  this578 = v576;
  struct std__allocator_std___Rb_tree_node_int__* t579 = this578;
  struct std____new_allocator_std___Rb_tree_node_int__* base580 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t579 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base580);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v581) {
bb582:
  struct std___Rb_tree_key_compare_std__less_int__* this583;
  this583 = v581;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v584) {
bb585:
  struct std___Rb_tree_header* this586;
  this586 = v584;
  struct std___Rb_tree_header* t587 = this586;
  struct std___Rb_tree_node_base* c588 = ((void*)0);
  t587->_M_header._M_parent = c588;
  t587->_M_header._M_left = &t587->_M_header;
  t587->_M_header._M_right = &t587->_M_header;
  unsigned long c589 = 0;
  t587->_M_node_count = c589;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v590) {
bb591:
  struct std___Rb_tree_header* this592;
  this592 = v590;
  struct std___Rb_tree_header* t593 = this592;
  unsigned int c594 = 0;
  t593->_M_header._M_color = c594;
  std___Rb_tree_header___M_reset(t593);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v595) {
bb596:
  struct std__allocator_std___Rb_tree_node_int__* this597;
  this597 = v595;
  struct std__allocator_std___Rb_tree_node_int__* t598 = this597;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v599) {
bb600:
  struct std___Rb_tree_node_int_* this601;
  struct std___Rb_tree_node_int_* __retval602;
  this601 = v599;
  struct std___Rb_tree_node_int_* t603 = this601;
  __retval602 = t603;
  struct std___Rb_tree_node_int_* t604 = __retval602;
  return t604;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v605) {
bb606:
  struct std___Rb_tree_node_int_* __x607;
  struct std___Rb_tree_node_int_* __retval608;
  __x607 = v605;
  struct std___Rb_tree_node_int_* t609 = __x607;
  struct std___Rb_tree_node_base* base610 = (struct std___Rb_tree_node_base*)((char *)t609 + 0);
  struct std___Rb_tree_node_base* t611 = base610->_M_right;
  _Bool cast612 = (_Bool)t611;
  struct std___Rb_tree_node_int_* ternary613;
  if (cast612) {
    struct std___Rb_tree_node_int_* t614 = __x607;
    struct std___Rb_tree_node_base* base615 = (struct std___Rb_tree_node_base*)((char *)t614 + 0);
    struct std___Rb_tree_node_base* t616 = base615->_M_right;
    struct std___Rb_tree_node_int_* derived617 = (struct std___Rb_tree_node_int_*)((char *)t616 - 0);
    struct std___Rb_tree_node_int_* r618 = std___Rb_tree_node_int____M_node_ptr(derived617);
    ternary613 = (struct std___Rb_tree_node_int_*)r618;
  } else {
    struct std___Rb_tree_node_int_* c619 = ((void*)0);
    ternary613 = (struct std___Rb_tree_node_int_*)c619;
  }
  __retval608 = ternary613;
  struct std___Rb_tree_node_int_* t620 = __retval608;
  return t620;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v621) {
bb622:
  struct std___Rb_tree_node_int_* __x623;
  struct std___Rb_tree_node_int_* __retval624;
  __x623 = v621;
  struct std___Rb_tree_node_int_* t625 = __x623;
  struct std___Rb_tree_node_base* base626 = (struct std___Rb_tree_node_base*)((char *)t625 + 0);
  struct std___Rb_tree_node_base* t627 = base626->_M_left;
  _Bool cast628 = (_Bool)t627;
  struct std___Rb_tree_node_int_* ternary629;
  if (cast628) {
    struct std___Rb_tree_node_int_* t630 = __x623;
    struct std___Rb_tree_node_base* base631 = (struct std___Rb_tree_node_base*)((char *)t630 + 0);
    struct std___Rb_tree_node_base* t632 = base631->_M_left;
    struct std___Rb_tree_node_int_* derived633 = (struct std___Rb_tree_node_int_*)((char *)t632 - 0);
    struct std___Rb_tree_node_int_* r634 = std___Rb_tree_node_int____M_node_ptr(derived633);
    ternary629 = (struct std___Rb_tree_node_int_*)r634;
  } else {
    struct std___Rb_tree_node_int_* c635 = ((void*)0);
    ternary629 = (struct std___Rb_tree_node_int_*)c635;
  }
  __retval624 = ternary629;
  struct std___Rb_tree_node_int_* t636 = __retval624;
  return t636;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v637) {
bb638:
  int* __location639;
  __location639 = v637;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v640, int* v641) {
bb642:
  struct std__allocator_std___Rb_tree_node_int__* __a643;
  int* __p644;
  __a643 = v640;
  __p644 = v641;
  int* t645 = __p644;
  void_std__destroy_at_int_(t645);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v646) {
bb647:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this648;
  struct std__allocator_std___Rb_tree_node_int__* __retval649;
  this648 = v646;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t650 = this648;
  struct std__allocator_std___Rb_tree_node_int__* base651 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t650->_M_impl) + 0);
  __retval649 = base651;
  struct std__allocator_std___Rb_tree_node_int__* t652 = __retval649;
  return t652;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v653) {
bb654:
  struct __gnu_cxx____aligned_membuf_int_* this655;
  void* __retval656;
  this655 = v653;
  struct __gnu_cxx____aligned_membuf_int_* t657 = this655;
  void* cast658 = (void*)&(t657->_M_storage);
  __retval656 = cast658;
  void* t659 = __retval656;
  return t659;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v660) {
bb661:
  struct __gnu_cxx____aligned_membuf_int_* this662;
  int* __retval663;
  this662 = v660;
  struct __gnu_cxx____aligned_membuf_int_* t664 = this662;
  void* r665 = __gnu_cxx____aligned_membuf_int____M_addr(t664);
  int* cast666 = (int*)r665;
  __retval663 = cast666;
  int* t667 = __retval663;
  return t667;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v668) {
bb669:
  struct std___Rb_tree_node_int_* this670;
  int* __retval671;
  this670 = v668;
  struct std___Rb_tree_node_int_* t672 = this670;
  int* r673 = __gnu_cxx____aligned_membuf_int____M_ptr(&t672->_M_storage);
  __retval671 = r673;
  int* t674 = __retval671;
  return t674;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v675, struct std___Rb_tree_node_int_* v676) {
bb677:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this678;
  struct std___Rb_tree_node_int_* __p679;
  this678 = v675;
  __p679 = v676;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t680 = this678;
  struct std__allocator_std___Rb_tree_node_int__* r681 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t680);
  struct std___Rb_tree_node_int_* t682 = __p679;
  int* r683 = std___Rb_tree_node_int____M_valptr(t682);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r681, r683);
  struct std___Rb_tree_node_int_* t684 = __p679;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb685:
  _Bool __retval686;
    _Bool c687 = 0;
    __retval686 = c687;
    _Bool t688 = __retval686;
    return t688;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v689, struct std___Rb_tree_node_int_* v690, unsigned long v691) {
bb692:
  struct std____new_allocator_std___Rb_tree_node_int__* this693;
  struct std___Rb_tree_node_int_* __p694;
  unsigned long __n695;
  this693 = v689;
  __p694 = v690;
  __n695 = v691;
  struct std____new_allocator_std___Rb_tree_node_int__* t696 = this693;
    unsigned long c697 = 8;
    unsigned long c698 = 16;
    _Bool c699 = ((c697 > c698)) ? 1 : 0;
    if (c699) {
      struct std___Rb_tree_node_int_* t700 = __p694;
      void* cast701 = (void*)t700;
      unsigned long t702 = __n695;
      unsigned long c703 = 40;
      unsigned long b704 = t702 * c703;
      unsigned long c705 = 8;
      operator_delete_3(cast701, b704, c705);
      return;
    }
  struct std___Rb_tree_node_int_* t706 = __p694;
  void* cast707 = (void*)t706;
  unsigned long t708 = __n695;
  unsigned long c709 = 40;
  unsigned long b710 = t708 * c709;
  operator_delete_2(cast707, b710);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v711, struct std___Rb_tree_node_int_* v712, unsigned long v713) {
bb714:
  struct std__allocator_std___Rb_tree_node_int__* this715;
  struct std___Rb_tree_node_int_* __p716;
  unsigned long __n717;
  this715 = v711;
  __p716 = v712;
  __n717 = v713;
  struct std__allocator_std___Rb_tree_node_int__* t718 = this715;
    _Bool r719 = std____is_constant_evaluated();
    if (r719) {
      struct std___Rb_tree_node_int_* t720 = __p716;
      void* cast721 = (void*)t720;
      operator_delete(cast721);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base722 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t718 + 0);
  struct std___Rb_tree_node_int_* t723 = __p716;
  unsigned long t724 = __n717;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base722, t723, t724);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v725, struct std___Rb_tree_node_int_* v726, unsigned long v727) {
bb728:
  struct std__allocator_std___Rb_tree_node_int__* __a729;
  struct std___Rb_tree_node_int_* __p730;
  unsigned long __n731;
  __a729 = v725;
  __p730 = v726;
  __n731 = v727;
  struct std__allocator_std___Rb_tree_node_int__* t732 = __a729;
  struct std___Rb_tree_node_int_* t733 = __p730;
  unsigned long t734 = __n731;
  std__allocator_std___Rb_tree_node_int_____deallocate(t732, t733, t734);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v735, struct std___Rb_tree_node_int_* v736) {
bb737:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this738;
  struct std___Rb_tree_node_int_* __p739;
  this738 = v735;
  __p739 = v736;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t740 = this738;
  struct std__allocator_std___Rb_tree_node_int__* r741 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t740);
  struct std___Rb_tree_node_int_* t742 = __p739;
  unsigned long c743 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r741, t742, c743);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v744, struct std___Rb_tree_node_int_* v745) {
bb746:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this747;
  struct std___Rb_tree_node_int_* __p748;
  this747 = v744;
  __p748 = v745;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t749 = this747;
  struct std___Rb_tree_node_int_* t750 = __p748;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t749, t750);
  struct std___Rb_tree_node_int_* t751 = __p748;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t749, t751);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v752, struct std___Rb_tree_node_int_* v753) {
bb754:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this755;
  struct std___Rb_tree_node_int_* __x756;
  this755 = v752;
  __x756 = v753;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t757 = this755;
    while (1) {
      struct std___Rb_tree_node_int_* t758 = __x756;
      _Bool cast759 = (_Bool)t758;
      if (!cast759) break;
        struct std___Rb_tree_node_int_* __y760;
        struct std___Rb_tree_node_int_* t761 = __x756;
        struct std___Rb_tree_node_int_* r762 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t761);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t757, r762);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t763 = __x756;
        struct std___Rb_tree_node_int_* r764 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t763);
        if (__cir_exc_active) {
          return;
        }
        __y760 = r764;
        struct std___Rb_tree_node_int_* t765 = __x756;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t757, t765);
        struct std___Rb_tree_node_int_* t766 = __y760;
        __x756 = t766;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v767) {
bb768:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this769;
  struct std___Rb_tree_node_int_* __retval770;
  struct std___Rb_tree_node_base* __begin771;
  this769 = v767;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t772 = this769;
  struct std___Rb_tree_header* base773 = (struct std___Rb_tree_header*)((char *)&(t772->_M_impl) + 8);
  struct std___Rb_tree_node_base* t774 = base773->_M_header._M_parent;
  __begin771 = t774;
  struct std___Rb_tree_node_base* t775 = __begin771;
  _Bool cast776 = (_Bool)t775;
  struct std___Rb_tree_node_int_* ternary777;
  if (cast776) {
    struct std___Rb_tree_node_base* t778 = __begin771;
    struct std___Rb_tree_node_int_* derived779 = (struct std___Rb_tree_node_int_*)((char *)t778 - 0);
    struct std___Rb_tree_node_int_* r780 = std___Rb_tree_node_int____M_node_ptr(derived779);
    ternary777 = (struct std___Rb_tree_node_int_*)r780;
  } else {
    struct std___Rb_tree_node_int_* c781 = ((void*)0);
    ternary777 = (struct std___Rb_tree_node_int_*)c781;
  }
  __retval770 = ternary777;
  struct std___Rb_tree_node_int_* t782 = __retval770;
  return t782;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v783, struct std___Rb_tree_iterator_int_* v784) {
bb785:
  struct std___Rb_tree_const_iterator_int_* this786;
  struct std___Rb_tree_iterator_int_* __it787;
  this786 = v783;
  __it787 = v784;
  struct std___Rb_tree_const_iterator_int_* t788 = this786;
  struct std___Rb_tree_iterator_int_* t789 = __it787;
  struct std___Rb_tree_node_base* t790 = t789->_M_node;
  t788->_M_node = t790;
  return;
}

