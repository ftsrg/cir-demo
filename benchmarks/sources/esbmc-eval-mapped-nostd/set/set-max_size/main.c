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
struct std____pair_base_std___Rb_tree_const_iterator_int___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_iterator_int___bool_ { unsigned char __field0; };
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
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[33] = "The set contains 1000 elements.\n";
char _str_1[39] = "The set could not hold 1000 elements.\n";
char _str_2[21] = "myset.size() == 1000";
char _str_3[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-max_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
unsigned long std__allocator_traits_std__allocator_std___Rb_tree_node_int_______max_size(struct std__allocator_std___Rb_tree_node_int__* p0);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____max_size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____max_size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
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
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
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

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8max_sizeERKS2_
unsigned long std__allocator_traits_std__allocator_std___Rb_tree_node_int_______max_size(struct std__allocator_std___Rb_tree_node_int__* v4) {
bb5:
  struct std__allocator_std___Rb_tree_node_int__* __a6;
  unsigned long __retval7;
  __a6 = v4;
  unsigned long c8 = -1;
  unsigned long c9 = 40;
  unsigned long b10 = c8 / c9;
  __retval7 = b10;
  unsigned long t11 = __retval7;
  return t11;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v12) {
bb13:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this14;
  struct std__allocator_std___Rb_tree_node_int__* __retval15;
  this14 = v12;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t16 = this14;
  struct std__allocator_std___Rb_tree_node_int__* base17 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t16->_M_impl) + 0);
  __retval15 = base17;
  struct std__allocator_std___Rb_tree_node_int__* t18 = __retval15;
  return t18;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8max_sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____max_size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v19) {
bb20:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this21;
  unsigned long __retval22;
  this21 = v19;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t23 = this21;
  struct std__allocator_std___Rb_tree_node_int__* r24 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator___const(t23);
  unsigned long r25 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______max_size(r24);
  __retval22 = r25;
  unsigned long t26 = __retval22;
  return t26;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE8max_sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____max_size___const(struct std__set_int__std__less_int___std__allocator_int__* v27) {
bb28:
  struct std__set_int__std__less_int___std__allocator_int__* this29;
  unsigned long __retval30;
  this29 = v27;
  struct std__set_int__std__less_int___std__allocator_int__* t31 = this29;
  unsigned long r32 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____max_size___const(&t31->_M_t);
  __retval30 = r32;
  unsigned long t33 = __retval30;
  return t33;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v34) {
bb35:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this36;
  struct std___Rb_tree_node_base* __retval37;
  this36 = v34;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t38 = this36;
  struct std___Rb_tree_header* base39 = (struct std___Rb_tree_header*)((char *)&(t38->_M_impl) + 8);
  struct std___Rb_tree_node_base* t40 = base39->_M_header._M_parent;
  __retval37 = t40;
  struct std___Rb_tree_node_base* t41 = __retval37;
  return t41;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v42) {
bb43:
  struct std___Rb_tree_node_base* this44;
  struct std___Rb_tree_node_base* __retval45;
  this44 = v42;
  struct std___Rb_tree_node_base* t46 = this44;
  __retval45 = t46;
  struct std___Rb_tree_node_base* t47 = __retval45;
  return t47;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v48) {
bb49:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this50;
  struct std___Rb_tree_node_base* __retval51;
  this50 = v48;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t52 = this50;
  struct std___Rb_tree_header* base53 = (struct std___Rb_tree_header*)((char *)&(t52->_M_impl) + 8);
  struct std___Rb_tree_node_base* r54 = std___Rb_tree_node_base___M_base_ptr___const(&base53->_M_header);
  __retval51 = r54;
  struct std___Rb_tree_node_base* t55 = __retval51;
  return t55;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v56, int* v57, int* v58) {
bb59:
  struct std__less_int_* this60;
  int* __x61;
  int* __y62;
  _Bool __retval63;
  this60 = v56;
  __x61 = v57;
  __y62 = v58;
  struct std__less_int_* t64 = this60;
  int* t65 = __x61;
  int t66 = *t65;
  int* t67 = __y62;
  int t68 = *t67;
  _Bool c69 = ((t66 < t68)) ? 1 : 0;
  __retval63 = c69;
  _Bool t70 = __retval63;
  return t70;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v71) {
bb72:
  struct __gnu_cxx____aligned_membuf_int_* this73;
  void* __retval74;
  this73 = v71;
  struct __gnu_cxx____aligned_membuf_int_* t75 = this73;
  void* cast76 = (void*)&(t75->_M_storage);
  __retval74 = cast76;
  void* t77 = __retval74;
  return t77;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v78) {
bb79:
  struct __gnu_cxx____aligned_membuf_int_* this80;
  int* __retval81;
  this80 = v78;
  struct __gnu_cxx____aligned_membuf_int_* t82 = this80;
  void* r83 = __gnu_cxx____aligned_membuf_int____M_addr___const(t82);
  int* cast84 = (int*)r83;
  __retval81 = cast84;
  int* t85 = __retval81;
  return t85;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v86) {
bb87:
  struct std___Rb_tree_node_int_* this88;
  int* __retval89;
  this88 = v86;
  struct std___Rb_tree_node_int_* t90 = this88;
  int* r91 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t90->_M_storage);
  __retval89 = r91;
  int* t92 = __retval89;
  return t92;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v93) {
bb94:
  struct std___Rb_tree_node_int_* __node95;
  int* __retval96;
  struct std___Identity_int_ ref_tmp097;
  __node95 = v93;
  struct std___Rb_tree_node_int_* t98 = __node95;
  int* r99 = std___Rb_tree_node_int____M_valptr___const(t98);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r100 = std___Identity_int___operator___int_const___const(&ref_tmp097, r99);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval96 = r100;
  int* t101 = __retval96;
  return t101;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v102) {
bb103:
  struct std___Rb_tree_node_base* __x104;
  int* __retval105;
  __x104 = v102;
  struct std___Rb_tree_node_base* t106 = __x104;
  struct std___Rb_tree_node_int_* derived107 = (struct std___Rb_tree_node_int_*)((char *)t106 - 0);
  int* r108 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived107);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval105 = r108;
  int* t109 = __retval105;
  return t109;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v110) {
bb111:
  struct std___Rb_tree_node_base* __x112;
  struct std___Rb_tree_node_base* __retval113;
  __x112 = v110;
  struct std___Rb_tree_node_base* t114 = __x112;
  struct std___Rb_tree_node_base* t115 = t114->_M_left;
  __retval113 = t115;
  struct std___Rb_tree_node_base* t116 = __retval113;
  return t116;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v117) {
bb118:
  struct std___Rb_tree_node_base* __x119;
  struct std___Rb_tree_node_base* __retval120;
  __x119 = v117;
  struct std___Rb_tree_node_base* t121 = __x119;
  struct std___Rb_tree_node_base* t122 = t121->_M_right;
  __retval120 = t122;
  struct std___Rb_tree_node_base* t123 = __retval120;
  return t123;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v124, struct std___Rb_tree_iterator_int_* v125) {
bb126:
  struct std___Rb_tree_iterator_int_* __x127;
  struct std___Rb_tree_iterator_int_* __y128;
  _Bool __retval129;
  __x127 = v124;
  __y128 = v125;
  struct std___Rb_tree_iterator_int_* t130 = __x127;
  struct std___Rb_tree_node_base* t131 = t130->_M_node;
  struct std___Rb_tree_iterator_int_* t132 = __y128;
  struct std___Rb_tree_node_base* t133 = t132->_M_node;
  _Bool c134 = ((t131 == t133)) ? 1 : 0;
  __retval129 = c134;
  _Bool t135 = __retval129;
  return t135;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v136) {
bb137:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this138;
  struct std___Rb_tree_iterator_int_ __retval139;
  this138 = v136;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t140 = this138;
  struct std___Rb_tree_header* base141 = (struct std___Rb_tree_header*)((char *)&(t140->_M_impl) + 8);
  struct std___Rb_tree_node_base* t142 = base141->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval139, t142);
  struct std___Rb_tree_iterator_int_ t143 = __retval139;
  return t143;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v144, struct std___Rb_tree_node_base** v145, struct std___Rb_tree_node_base** v146) {
bb147:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this148;
  struct std___Rb_tree_node_base** __x149;
  struct std___Rb_tree_node_base** __y150;
  this148 = v144;
  __x149 = v145;
  __y150 = v146;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t151 = this148;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base152 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t151 + 0);
  struct std___Rb_tree_node_base** t153 = __x149;
  struct std___Rb_tree_node_base* t154 = *t153;
  t151->first = t154;
  struct std___Rb_tree_node_base** t155 = __y150;
  struct std___Rb_tree_node_base* t156 = *t155;
  t151->second = t156;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v157) {
bb158:
  struct std___Rb_tree_iterator_int_* this159;
  struct std___Rb_tree_iterator_int_* __retval160;
  this159 = v157;
  struct std___Rb_tree_iterator_int_* t161 = this159;
  struct std___Rb_tree_node_base* t162 = t161->_M_node;
  struct std___Rb_tree_node_base* r163 = std___Rb_tree_decrement(t162);
  t161->_M_node = r163;
  __retval160 = t161;
  struct std___Rb_tree_iterator_int_* t164 = __retval160;
  return t164;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v165, struct std___Rb_tree_node_base** v166, struct std___Rb_tree_node_base** v167) {
bb168:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this169;
  struct std___Rb_tree_node_base** __x170;
  struct std___Rb_tree_node_base** __y171;
  this169 = v165;
  __x170 = v166;
  __y171 = v167;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t172 = this169;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base173 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t172 + 0);
  struct std___Rb_tree_node_base** t174 = __x170;
  struct std___Rb_tree_node_base* t175 = *t174;
  t172->first = t175;
  struct std___Rb_tree_node_base** t176 = __y171;
  struct std___Rb_tree_node_base* t177 = *t176;
  t172->second = t177;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v178, int* v179) {
bb180:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this181;
  int* __k182;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval183;
  struct std___Rb_tree_node_base* __x184;
  struct std___Rb_tree_node_base* __y185;
  _Bool __comp186;
  struct std___Rb_tree_iterator_int_ __j187;
  struct std___Rb_tree_node_base* ref_tmp1188;
  this181 = v178;
  __k182 = v179;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t189 = this181;
  struct std___Rb_tree_node_base* r190 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t189);
  __x184 = r190;
  struct std___Rb_tree_node_base* r191 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t189);
  __y185 = r191;
  _Bool c192 = 1;
  __comp186 = c192;
    while (1) {
      struct std___Rb_tree_node_base* t193 = __x184;
      _Bool cast194 = (_Bool)t193;
      if (!cast194) break;
        struct std___Rb_tree_node_base* t195 = __x184;
        __y185 = t195;
        struct std___Rb_tree_key_compare_std__less_int__* base196 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t189->_M_impl) + 0);
        struct std__less_int_* cast197 = (struct std__less_int_*)base196;
        int* t198 = __k182;
        struct std___Rb_tree_node_base* t199 = __x184;
        int* r200 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t199);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r201 = std__less_int___operator___int_const___int_const___const(cast197, t198, r200);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp186 = r201;
        _Bool t202 = __comp186;
        struct std___Rb_tree_node_base* ternary203;
        if (t202) {
          struct std___Rb_tree_node_base* t204 = __x184;
          struct std___Rb_tree_node_base* r205 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t204);
          ternary203 = (struct std___Rb_tree_node_base*)r205;
        } else {
          struct std___Rb_tree_node_base* t206 = __x184;
          struct std___Rb_tree_node_base* r207 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t206);
          ternary203 = (struct std___Rb_tree_node_base*)r207;
        }
        __x184 = ternary203;
    }
  struct std___Rb_tree_node_base* t208 = __y185;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j187, t208);
    _Bool t209 = __comp186;
    if (t209) {
        struct std___Rb_tree_iterator_int_ ref_tmp0210;
        struct std___Rb_tree_iterator_int_ r211 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t189);
        ref_tmp0210 = r211;
        _Bool r212 = std__operator__(&__j187, &ref_tmp0210);
        if (r212) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval183, &__x184, &__y185);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t213 = __retval183;
          return t213;
        } else {
          struct std___Rb_tree_iterator_int_* r214 = std___Rb_tree_iterator_int___operator__(&__j187);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base215 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t189->_M_impl) + 0);
    struct std__less_int_* cast216 = (struct std__less_int_*)base215;
    struct std___Rb_tree_node_base* t217 = __j187._M_node;
    int* r218 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t217);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t219 = __k182;
    _Bool r220 = std__less_int___operator___int_const___int_const___const(cast216, r218, t219);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r220) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval183, &__x184, &__y185);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t221 = __retval183;
      return t221;
    }
  struct std___Rb_tree_node_base* c222 = ((void*)0);
  ref_tmp1188 = c222;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval183, &__j187._M_node, &ref_tmp1188);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t223 = __retval183;
  return t223;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v224, int* v225) {
bb226:
  struct std___Identity_int_* this227;
  int* __x228;
  int* __retval229;
  this227 = v224;
  __x228 = v225;
  struct std___Identity_int_* t230 = this227;
  int* t231 = __x228;
  __retval229 = t231;
  int* t232 = __retval229;
  return t232;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v233, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v234) {
bb235:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this236;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t237;
  this236 = v233;
  __t237 = v234;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t238 = this236;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t239 = __t237;
  t238->_M_t = t239;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v240) {
bb241:
  struct std____new_allocator_std___Rb_tree_node_int__* this242;
  unsigned long __retval243;
  this242 = v240;
  struct std____new_allocator_std___Rb_tree_node_int__* t244 = this242;
  unsigned long c245 = 9223372036854775807;
  unsigned long c246 = 40;
  unsigned long b247 = c245 / c246;
  __retval243 = b247;
  unsigned long t248 = __retval243;
  return t248;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v249, unsigned long v250, void* v251) {
bb252:
  struct std____new_allocator_std___Rb_tree_node_int__* this253;
  unsigned long __n254;
  void* unnamed255;
  struct std___Rb_tree_node_int_* __retval256;
  this253 = v249;
  __n254 = v250;
  unnamed255 = v251;
  struct std____new_allocator_std___Rb_tree_node_int__* t257 = this253;
    unsigned long t258 = __n254;
    unsigned long r259 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t257);
    _Bool c260 = ((t258 > r259)) ? 1 : 0;
    if (c260) {
        unsigned long t261 = __n254;
        unsigned long c262 = -1;
        unsigned long c263 = 40;
        unsigned long b264 = c262 / c263;
        _Bool c265 = ((t261 > b264)) ? 1 : 0;
        if (c265) {
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
    unsigned long c266 = 8;
    unsigned long c267 = 16;
    _Bool c268 = ((c266 > c267)) ? 1 : 0;
    if (c268) {
      unsigned long __al269;
      unsigned long c270 = 8;
      __al269 = c270;
      unsigned long t271 = __n254;
      unsigned long c272 = 40;
      unsigned long b273 = t271 * c272;
      unsigned long t274 = __al269;
      void* r275 = operator_new_2(b273, t274);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast276 = (struct std___Rb_tree_node_int_*)r275;
      __retval256 = cast276;
      struct std___Rb_tree_node_int_* t277 = __retval256;
      return t277;
    }
  unsigned long t278 = __n254;
  unsigned long c279 = 40;
  unsigned long b280 = t278 * c279;
  void* r281 = operator_new(b280);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast282 = (struct std___Rb_tree_node_int_*)r281;
  __retval256 = cast282;
  struct std___Rb_tree_node_int_* t283 = __retval256;
  return t283;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v284, unsigned long v285) {
bb286:
  struct std__allocator_std___Rb_tree_node_int__* this287;
  unsigned long __n288;
  struct std___Rb_tree_node_int_* __retval289;
  this287 = v284;
  __n288 = v285;
  struct std__allocator_std___Rb_tree_node_int__* t290 = this287;
    _Bool r291 = std____is_constant_evaluated();
    if (r291) {
        unsigned long t292 = __n288;
        unsigned long c293 = 40;
        unsigned long ovr294;
        _Bool ovf295 = __builtin_mul_overflow(t292, c293, &ovr294);
        __n288 = ovr294;
        if (ovf295) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t296 = __n288;
      void* r297 = operator_new(t296);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast298 = (struct std___Rb_tree_node_int_*)r297;
      __retval289 = cast298;
      struct std___Rb_tree_node_int_* t299 = __retval289;
      return t299;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base300 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t290 + 0);
  unsigned long t301 = __n288;
  void* c302 = ((void*)0);
  struct std___Rb_tree_node_int_* r303 = std____new_allocator_std___Rb_tree_node_int_____allocate(base300, t301, c302);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval289 = r303;
  struct std___Rb_tree_node_int_* t304 = __retval289;
  return t304;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v305, unsigned long v306) {
bb307:
  struct std__allocator_std___Rb_tree_node_int__* __a308;
  unsigned long __n309;
  struct std___Rb_tree_node_int_* __retval310;
  __a308 = v305;
  __n309 = v306;
  struct std__allocator_std___Rb_tree_node_int__* t311 = __a308;
  unsigned long t312 = __n309;
  struct std___Rb_tree_node_int_* r313 = std__allocator_std___Rb_tree_node_int_____allocate(t311, t312);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval310 = r313;
  struct std___Rb_tree_node_int_* t314 = __retval310;
  return t314;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v315) {
bb316:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this317;
  struct std___Rb_tree_node_int_* __retval318;
  this317 = v315;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t319 = this317;
  struct std__allocator_std___Rb_tree_node_int__* r320 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t319);
  unsigned long c321 = 1;
  struct std___Rb_tree_node_int_* r322 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r320, c321);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval318 = r322;
  struct std___Rb_tree_node_int_* t323 = __retval318;
  return t323;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v324, int* v325) {
bb326:
  int* __location327;
  int* __args328;
  int* __retval329;
  void* __loc330;
  __location327 = v324;
  __args328 = v325;
  int* t331 = __location327;
  void* cast332 = (void*)t331;
  __loc330 = cast332;
    void* t333 = __loc330;
    int* cast334 = (int*)t333;
    int* t335 = __args328;
    int t336 = *t335;
    *cast334 = t336;
    __retval329 = cast334;
    int* t337 = __retval329;
    return t337;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v338, int* v339, int* v340) {
bb341:
  struct std__allocator_std___Rb_tree_node_int__* __a342;
  int* __p343;
  int* __args344;
  __a342 = v338;
  __p343 = v339;
  __args344 = v340;
  int* t345 = __p343;
  int* t346 = __args344;
  int* r347 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t345, t346);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v348, struct std___Rb_tree_node_int_* v349, int* v350) {
bb351:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this352;
  struct std___Rb_tree_node_int_* __node353;
  int* __args354;
  this352 = v348;
  __node353 = v349;
  __args354 = v350;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t355 = this352;
      struct std__allocator_std___Rb_tree_node_int__* r357 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t355);
      struct std___Rb_tree_node_int_* t358 = __node353;
      int* r359 = std___Rb_tree_node_int____M_valptr(t358);
      if (__cir_exc_active) {
        goto cir_try_dispatch356;
      }
      int* t360 = __args354;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r357, r359, t360);
    cir_try_dispatch356: ;
    if (__cir_exc_active) {
    {
      int ca_tok361 = 0;
      void* ca_exn362 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t363 = __node353;
        struct std___Rb_tree_node_int_* t364 = __node353;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t355, t364);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v365, int* v366) {
bb367:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this368;
  int* __args369;
  struct std___Rb_tree_node_int_* __retval370;
  struct std___Rb_tree_node_int_* __tmp371;
  this368 = v365;
  __args369 = v366;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t372 = this368;
  struct std___Rb_tree_node_int_* r373 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t372);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp371 = r373;
  struct std___Rb_tree_node_int_* t374 = __tmp371;
  int* t375 = __args369;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t372, t374, t375);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t376 = __tmp371;
  __retval370 = t376;
  struct std___Rb_tree_node_int_* t377 = __retval370;
  return t377;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v378, int* v379) {
bb380:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this381;
  int* __arg382;
  struct std___Rb_tree_node_int_* __retval383;
  this381 = v378;
  __arg382 = v379;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t384 = this381;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t385 = t384->_M_t;
  int* t386 = __arg382;
  struct std___Rb_tree_node_int_* r387 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t385, t386);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval383 = r387;
  struct std___Rb_tree_node_int_* t388 = __retval383;
  return t388;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v389, struct std___Rb_tree_node_base* v390, struct std___Rb_tree_node_base* v391, struct std___Rb_tree_node_base* v392) {
bb393:
  _Bool __insert_left394;
  struct std___Rb_tree_node_base* __x395;
  struct std___Rb_tree_node_base* __p396;
  struct std___Rb_tree_node_base* __header397;
  __insert_left394 = v389;
  __x395 = v390;
  __p396 = v391;
  __header397 = v392;
  _Bool t398 = __insert_left394;
  struct std___Rb_tree_node_base* t399 = __x395;
  struct std___Rb_tree_node_base* t400 = __p396;
  struct std___Rb_tree_node_base* t401 = __header397;
  std___Rb_tree_insert_and_rebalance(t398, t399, t400, t401);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSD_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v402, struct std___Rb_tree_node_base* v403, struct std___Rb_tree_node_base* v404, int* v405, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v406) {
bb407:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this408;
  struct std___Rb_tree_node_base* __x409;
  struct std___Rb_tree_node_base* __p410;
  int* __v411;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen412;
  struct std___Rb_tree_iterator_int_ __retval413;
  _Bool __insert_left414;
  struct std___Rb_tree_node_base* __z415;
  this408 = v402;
  __x409 = v403;
  __p410 = v404;
  __v411 = v405;
  __node_gen412 = v406;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t416 = this408;
  struct std___Rb_tree_node_base* t417 = __x409;
  _Bool cast418 = (_Bool)t417;
  _Bool ternary419;
  if (cast418) {
    _Bool c420 = 1;
    ternary419 = (_Bool)c420;
  } else {
    struct std___Rb_tree_node_base* t421 = __p410;
    struct std___Rb_tree_node_base* r422 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t416);
    _Bool c423 = ((t421 == r422)) ? 1 : 0;
    ternary419 = (_Bool)c423;
  }
  _Bool ternary424;
  if (ternary419) {
    _Bool c425 = 1;
    ternary424 = (_Bool)c425;
  } else {
    struct std___Identity_int_ ref_tmp0426;
    struct std___Rb_tree_key_compare_std__less_int__* base427 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t416->_M_impl) + 0);
    struct std__less_int_* cast428 = (struct std__less_int_*)base427;
    int* t429 = __v411;
    int* r430 = std___Identity_int___operator___int_const___const(&ref_tmp0426, t429);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t431 = __p410;
    int* r432 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t431);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r433 = std__less_int___operator___int_const___int_const___const(cast428, r430, r432);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary424 = (_Bool)r433;
  }
  __insert_left414 = ternary424;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t434 = __node_gen412;
  int* t435 = __v411;
  struct std___Rb_tree_node_int_* r436 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t434, t435);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base437 = (struct std___Rb_tree_node_base*)((char *)r436 + 0);
  struct std___Rb_tree_node_base* r438 = std___Rb_tree_node_base___M_base_ptr___const(base437);
  __z415 = r438;
  _Bool t439 = __insert_left414;
  struct std___Rb_tree_node_base* t440 = __z415;
  struct std___Rb_tree_node_base* t441 = __p410;
  struct std___Rb_tree_header* base442 = (struct std___Rb_tree_header*)((char *)&(t416->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t439, t440, t441, &base442->_M_header);
  struct std___Rb_tree_header* base443 = (struct std___Rb_tree_header*)((char *)&(t416->_M_impl) + 8);
  unsigned long t444 = base443->_M_node_count;
  unsigned long u445 = t444 + 1;
  base443->_M_node_count = u445;
  struct std___Rb_tree_node_base* t446 = __z415;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval413, t446);
  struct std___Rb_tree_iterator_int_ t447 = __retval413;
  return t447;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v448, struct std___Rb_tree_iterator_int_* v449, _Bool* v450) {
bb451:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this452;
  struct std___Rb_tree_iterator_int_* __x453;
  _Bool* __y454;
  this452 = v448;
  __x453 = v449;
  __y454 = v450;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t455 = this452;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base456 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t455 + 0);
  struct std___Rb_tree_iterator_int_* t457 = __x453;
  t455->first = *t457; // copy
  _Bool* t458 = __y454;
  _Bool t459 = *t458;
  t455->second = t459;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v460, struct std___Rb_tree_node_base* v461) {
bb462:
  struct std___Rb_tree_iterator_int_* this463;
  struct std___Rb_tree_node_base* __x464;
  this463 = v460;
  __x464 = v461;
  struct std___Rb_tree_iterator_int_* t465 = this463;
  struct std___Rb_tree_node_base* t466 = __x464;
  t465->_M_node = t466;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v467, int* v468) {
bb469:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this470;
  int* __v471;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval472;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res473;
  struct std___Identity_int_ ref_tmp0474;
  struct std___Rb_tree_iterator_int_ ref_tmp3475;
  _Bool ref_tmp4476;
  this470 = v467;
  __v471 = v468;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t477 = this470;
  int* t478 = __v471;
  int* r479 = std___Identity_int___operator___int_const___const(&ref_tmp0474, t478);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r480 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t477, r479);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res473 = r480;
    struct std___Rb_tree_node_base* t481 = __res473.second;
    _Bool cast482 = (_Bool)t481;
    if (cast482) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an483;
      struct std___Rb_tree_iterator_int_ ref_tmp1484;
      _Bool ref_tmp2485;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an483, t477);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t486 = __res473.first;
      struct std___Rb_tree_node_base* t487 = __res473.second;
      int* t488 = __v471;
      struct std___Rb_tree_iterator_int_ r489 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t477, t486, t487, t488, &__an483);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1484 = r489;
      _Bool c490 = 1;
      ref_tmp2485 = c490;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval472, &ref_tmp1484, &ref_tmp2485);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t491 = __retval472;
      return t491;
    }
  struct std___Rb_tree_node_base* t492 = __res473.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3475, t492);
  _Bool c493 = 0;
  ref_tmp4476 = c493;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval472, &ref_tmp3475, &ref_tmp4476);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t494 = __retval472;
  return t494;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v495, struct std___Rb_tree_iterator_int_* v496, _Bool* v497) {
bb498:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this499;
  struct std___Rb_tree_iterator_int_* __x500;
  _Bool* __y501;
  this499 = v495;
  __x500 = v496;
  __y501 = v497;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t502 = this499;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base503 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t502 + 0);
  struct std___Rb_tree_iterator_int_* t504 = __x500;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t502->first, t504);
  _Bool* t505 = __y501;
  _Bool t506 = *t505;
  t502->second = t506;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertERKi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v507, int* v508) {
bb509:
  struct std__set_int__std__less_int___std__allocator_int__* this510;
  int* __x511;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval512;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p513;
  this510 = v507;
  __x511 = v508;
  struct std__set_int__std__less_int___std__allocator_int__* t514 = this510;
  int* t515 = __x511;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r516 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(&t514->_M_t, t515);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p513 = r516;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval512, &__p513.first, &__p513.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t517 = __retval512;
  return t517;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v518, int v519) {
bb520:
  int __a521;
  int __b522;
  int __retval523;
  __a521 = v518;
  __b522 = v519;
  int t524 = __a521;
  int t525 = __b522;
  int b526 = t524 | t525;
  __retval523 = b526;
  int t527 = __retval523;
  return t527;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v528) {
bb529:
  struct std__basic_ios_char__std__char_traits_char__* this530;
  int __retval531;
  this530 = v528;
  struct std__basic_ios_char__std__char_traits_char__* t532 = this530;
  struct std__ios_base* base533 = (struct std__ios_base*)((char *)t532 + 0);
  int t534 = base533->_M_streambuf_state;
  __retval531 = t534;
  int t535 = __retval531;
  return t535;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v536, int v537) {
bb538:
  struct std__basic_ios_char__std__char_traits_char__* this539;
  int __state540;
  this539 = v536;
  __state540 = v537;
  struct std__basic_ios_char__std__char_traits_char__* t541 = this539;
  int r542 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t541);
  if (__cir_exc_active) {
    return;
  }
  int t543 = __state540;
  int r544 = std__operator_(r542, t543);
  std__basic_ios_char__std__char_traits_char_____clear(t541, r544);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v545, char* v546) {
bb547:
  char* __c1548;
  char* __c2549;
  _Bool __retval550;
  __c1548 = v545;
  __c2549 = v546;
  char* t551 = __c1548;
  char t552 = *t551;
  int cast553 = (int)t552;
  char* t554 = __c2549;
  char t555 = *t554;
  int cast556 = (int)t555;
  _Bool c557 = ((cast553 == cast556)) ? 1 : 0;
  __retval550 = c557;
  _Bool t558 = __retval550;
  return t558;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v559) {
bb560:
  char* __p561;
  unsigned long __retval562;
  unsigned long __i563;
  __p561 = v559;
  unsigned long c564 = 0;
  __i563 = c564;
    char ref_tmp0565;
    while (1) {
      unsigned long t566 = __i563;
      char* t567 = __p561;
      char* ptr568 = &(t567)[t566];
      char c569 = 0;
      ref_tmp0565 = c569;
      _Bool r570 = __gnu_cxx__char_traits_char___eq(ptr568, &ref_tmp0565);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u571 = !r570;
      if (!u571) break;
      unsigned long t572 = __i563;
      unsigned long u573 = t572 + 1;
      __i563 = u573;
    }
  unsigned long t574 = __i563;
  __retval562 = t574;
  unsigned long t575 = __retval562;
  return t575;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v576) {
bb577:
  char* __s578;
  unsigned long __retval579;
  __s578 = v576;
    _Bool r580 = std____is_constant_evaluated();
    if (r580) {
      char* t581 = __s578;
      unsigned long r582 = __gnu_cxx__char_traits_char___length(t581);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval579 = r582;
      unsigned long t583 = __retval579;
      return t583;
    }
  char* t584 = __s578;
  unsigned long r585 = strlen(t584);
  __retval579 = r585;
  unsigned long t586 = __retval579;
  return t586;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v587, char* v588) {
bb589:
  struct std__basic_ostream_char__std__char_traits_char__* __out590;
  char* __s591;
  struct std__basic_ostream_char__std__char_traits_char__* __retval592;
  __out590 = v587;
  __s591 = v588;
    char* t593 = __s591;
    _Bool cast594 = (_Bool)t593;
    _Bool u595 = !cast594;
    if (u595) {
      struct std__basic_ostream_char__std__char_traits_char__* t596 = __out590;
      void** v597 = (void**)t596;
      void* v598 = *((void**)v597);
      unsigned char* cast599 = (unsigned char*)v598;
      long c600 = -24;
      unsigned char* ptr601 = &(cast599)[c600];
      long* cast602 = (long*)ptr601;
      long t603 = *cast602;
      unsigned char* cast604 = (unsigned char*)t596;
      unsigned char* ptr605 = &(cast604)[t603];
      struct std__basic_ostream_char__std__char_traits_char__* cast606 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr605;
      struct std__basic_ios_char__std__char_traits_char__* cast607 = (struct std__basic_ios_char__std__char_traits_char__*)cast606;
      int t608 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast607, t608);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t609 = __out590;
      char* t610 = __s591;
      char* t611 = __s591;
      unsigned long r612 = std__char_traits_char___length(t611);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast613 = (long)r612;
      struct std__basic_ostream_char__std__char_traits_char__* r614 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t609, t610, cast613);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t615 = __out590;
  __retval592 = t615;
  struct std__basic_ostream_char__std__char_traits_char__* t616 = __retval592;
  return t616;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v617) {
bb618:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this619;
  unsigned long __retval620;
  this619 = v617;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t621 = this619;
  struct std___Rb_tree_header* base622 = (struct std___Rb_tree_header*)((char *)&(t621->_M_impl) + 8);
  unsigned long t623 = base622->_M_node_count;
  __retval620 = t623;
  unsigned long t624 = __retval620;
  return t624;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v625) {
bb626:
  struct std__set_int__std__less_int___std__allocator_int__* this627;
  unsigned long __retval628;
  this627 = v625;
  struct std__set_int__std__less_int___std__allocator_int__* t629 = this627;
  unsigned long r630 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t629->_M_t);
  __retval628 = r630;
  unsigned long t631 = __retval628;
  return t631;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v632) {
bb633:
  struct std__set_int__std__less_int___std__allocator_int__* this634;
  this634 = v632;
  struct std__set_int__std__less_int___std__allocator_int__* t635 = this634;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t635->_M_t);
  }
  return;
}

// function: main
int main() {
bb636:
  int __retval637;
  int i638;
  struct std__set_int__std__less_int___std__allocator_int__ myset639;
  int c640 = 0;
  __retval637 = c640;
  std__set_int__std__less_int___std__allocator_int_____set(&myset639);
      unsigned long r641 = std__set_int__std__less_int___std__allocator_int_____max_size___const(&myset639);
      unsigned long c642 = 1000;
      _Bool c643 = ((r641 > c642)) ? 1 : 0;
      if (c643) {
          struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0644;
          int c645 = 0;
          i638 = c645;
          while (1) {
            int t647 = i638;
            int c648 = 1000;
            _Bool c649 = ((t647 < c648)) ? 1 : 0;
            if (!c649) break;
            struct std__pair_std___Rb_tree_const_iterator_int___bool_ r650 = std__set_int__std__less_int___std__allocator_int_____insert(&myset639, &i638);
            if (__cir_exc_active) {
              {
                std__set_int__std__less_int___std__allocator_int______set(&myset639);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            agg_tmp0644 = r650;
          for_step646: ;
            int t651 = i638;
            int u652 = t651 + 1;
            i638 = u652;
          }
        char* cast653 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r654 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast653);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset639);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      } else {
        char* cast655 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r656 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast655);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset639);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      }
    unsigned long r657 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset639);
    unsigned long c658 = 1000;
    _Bool c659 = ((r657 == c658)) ? 1 : 0;
    if (c659) {
    } else {
      char* cast660 = (char*)&(_str_2);
      char* c661 = _str_3;
      unsigned int c662 = 23;
      char* cast663 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast660, c661, c662, cast663);
    }
    int c664 = 0;
    __retval637 = c664;
    int t665 = __retval637;
    int ret_val666 = t665;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset639);
    }
    return ret_val666;
  int t667 = __retval637;
  return t667;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v668) {
bb669:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this670;
  this670 = v668;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t671 = this670;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t671->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v672) {
bb673:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this674;
  this674 = v672;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t675 = this674;
    struct std___Rb_tree_node_int_* r676 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t675);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t675, r676);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t675->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t675->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v677) {
bb678:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this679;
  this679 = v677;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t680 = this679;
  struct std__allocator_std___Rb_tree_node_int__* base681 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t680 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base681);
    struct std___Rb_tree_key_compare_std__less_int__* base682 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t680 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base682);
    struct std___Rb_tree_header* base683 = (struct std___Rb_tree_header*)((char *)t680 + 8);
    std___Rb_tree_header___Rb_tree_header(base683);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v684) {
bb685:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this686;
  this686 = v684;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t687 = this686;
  {
    struct std__allocator_std___Rb_tree_node_int__* base688 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t687 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base688);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v689) {
bb690:
  struct std____new_allocator_std___Rb_tree_node_int__* this691;
  this691 = v689;
  struct std____new_allocator_std___Rb_tree_node_int__* t692 = this691;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v693) {
bb694:
  struct std__allocator_std___Rb_tree_node_int__* this695;
  this695 = v693;
  struct std__allocator_std___Rb_tree_node_int__* t696 = this695;
  struct std____new_allocator_std___Rb_tree_node_int__* base697 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t696 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base697);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v698) {
bb699:
  struct std___Rb_tree_key_compare_std__less_int__* this700;
  this700 = v698;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v701) {
bb702:
  struct std___Rb_tree_header* this703;
  this703 = v701;
  struct std___Rb_tree_header* t704 = this703;
  struct std___Rb_tree_node_base* c705 = ((void*)0);
  t704->_M_header._M_parent = c705;
  t704->_M_header._M_left = &t704->_M_header;
  t704->_M_header._M_right = &t704->_M_header;
  unsigned long c706 = 0;
  t704->_M_node_count = c706;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v707) {
bb708:
  struct std___Rb_tree_header* this709;
  this709 = v707;
  struct std___Rb_tree_header* t710 = this709;
  unsigned int c711 = 0;
  t710->_M_header._M_color = c711;
  std___Rb_tree_header___M_reset(t710);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v712) {
bb713:
  struct std__allocator_std___Rb_tree_node_int__* this714;
  this714 = v712;
  struct std__allocator_std___Rb_tree_node_int__* t715 = this714;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v716) {
bb717:
  struct std___Rb_tree_node_int_* this718;
  struct std___Rb_tree_node_int_* __retval719;
  this718 = v716;
  struct std___Rb_tree_node_int_* t720 = this718;
  __retval719 = t720;
  struct std___Rb_tree_node_int_* t721 = __retval719;
  return t721;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v722) {
bb723:
  struct std___Rb_tree_node_int_* __x724;
  struct std___Rb_tree_node_int_* __retval725;
  __x724 = v722;
  struct std___Rb_tree_node_int_* t726 = __x724;
  struct std___Rb_tree_node_base* base727 = (struct std___Rb_tree_node_base*)((char *)t726 + 0);
  struct std___Rb_tree_node_base* t728 = base727->_M_right;
  _Bool cast729 = (_Bool)t728;
  struct std___Rb_tree_node_int_* ternary730;
  if (cast729) {
    struct std___Rb_tree_node_int_* t731 = __x724;
    struct std___Rb_tree_node_base* base732 = (struct std___Rb_tree_node_base*)((char *)t731 + 0);
    struct std___Rb_tree_node_base* t733 = base732->_M_right;
    struct std___Rb_tree_node_int_* derived734 = (struct std___Rb_tree_node_int_*)((char *)t733 - 0);
    struct std___Rb_tree_node_int_* r735 = std___Rb_tree_node_int____M_node_ptr(derived734);
    ternary730 = (struct std___Rb_tree_node_int_*)r735;
  } else {
    struct std___Rb_tree_node_int_* c736 = ((void*)0);
    ternary730 = (struct std___Rb_tree_node_int_*)c736;
  }
  __retval725 = ternary730;
  struct std___Rb_tree_node_int_* t737 = __retval725;
  return t737;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v738) {
bb739:
  struct std___Rb_tree_node_int_* __x740;
  struct std___Rb_tree_node_int_* __retval741;
  __x740 = v738;
  struct std___Rb_tree_node_int_* t742 = __x740;
  struct std___Rb_tree_node_base* base743 = (struct std___Rb_tree_node_base*)((char *)t742 + 0);
  struct std___Rb_tree_node_base* t744 = base743->_M_left;
  _Bool cast745 = (_Bool)t744;
  struct std___Rb_tree_node_int_* ternary746;
  if (cast745) {
    struct std___Rb_tree_node_int_* t747 = __x740;
    struct std___Rb_tree_node_base* base748 = (struct std___Rb_tree_node_base*)((char *)t747 + 0);
    struct std___Rb_tree_node_base* t749 = base748->_M_left;
    struct std___Rb_tree_node_int_* derived750 = (struct std___Rb_tree_node_int_*)((char *)t749 - 0);
    struct std___Rb_tree_node_int_* r751 = std___Rb_tree_node_int____M_node_ptr(derived750);
    ternary746 = (struct std___Rb_tree_node_int_*)r751;
  } else {
    struct std___Rb_tree_node_int_* c752 = ((void*)0);
    ternary746 = (struct std___Rb_tree_node_int_*)c752;
  }
  __retval741 = ternary746;
  struct std___Rb_tree_node_int_* t753 = __retval741;
  return t753;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v754) {
bb755:
  int* __location756;
  __location756 = v754;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v757, int* v758) {
bb759:
  struct std__allocator_std___Rb_tree_node_int__* __a760;
  int* __p761;
  __a760 = v757;
  __p761 = v758;
  int* t762 = __p761;
  void_std__destroy_at_int_(t762);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v763) {
bb764:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this765;
  struct std__allocator_std___Rb_tree_node_int__* __retval766;
  this765 = v763;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t767 = this765;
  struct std__allocator_std___Rb_tree_node_int__* base768 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t767->_M_impl) + 0);
  __retval766 = base768;
  struct std__allocator_std___Rb_tree_node_int__* t769 = __retval766;
  return t769;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v770) {
bb771:
  struct __gnu_cxx____aligned_membuf_int_* this772;
  void* __retval773;
  this772 = v770;
  struct __gnu_cxx____aligned_membuf_int_* t774 = this772;
  void* cast775 = (void*)&(t774->_M_storage);
  __retval773 = cast775;
  void* t776 = __retval773;
  return t776;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v777) {
bb778:
  struct __gnu_cxx____aligned_membuf_int_* this779;
  int* __retval780;
  this779 = v777;
  struct __gnu_cxx____aligned_membuf_int_* t781 = this779;
  void* r782 = __gnu_cxx____aligned_membuf_int____M_addr(t781);
  int* cast783 = (int*)r782;
  __retval780 = cast783;
  int* t784 = __retval780;
  return t784;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v785) {
bb786:
  struct std___Rb_tree_node_int_* this787;
  int* __retval788;
  this787 = v785;
  struct std___Rb_tree_node_int_* t789 = this787;
  int* r790 = __gnu_cxx____aligned_membuf_int____M_ptr(&t789->_M_storage);
  __retval788 = r790;
  int* t791 = __retval788;
  return t791;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v792, struct std___Rb_tree_node_int_* v793) {
bb794:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this795;
  struct std___Rb_tree_node_int_* __p796;
  this795 = v792;
  __p796 = v793;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t797 = this795;
  struct std__allocator_std___Rb_tree_node_int__* r798 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t797);
  struct std___Rb_tree_node_int_* t799 = __p796;
  int* r800 = std___Rb_tree_node_int____M_valptr(t799);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r798, r800);
  struct std___Rb_tree_node_int_* t801 = __p796;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb802:
  _Bool __retval803;
    _Bool c804 = 0;
    __retval803 = c804;
    _Bool t805 = __retval803;
    return t805;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v806, struct std___Rb_tree_node_int_* v807, unsigned long v808) {
bb809:
  struct std____new_allocator_std___Rb_tree_node_int__* this810;
  struct std___Rb_tree_node_int_* __p811;
  unsigned long __n812;
  this810 = v806;
  __p811 = v807;
  __n812 = v808;
  struct std____new_allocator_std___Rb_tree_node_int__* t813 = this810;
    unsigned long c814 = 8;
    unsigned long c815 = 16;
    _Bool c816 = ((c814 > c815)) ? 1 : 0;
    if (c816) {
      struct std___Rb_tree_node_int_* t817 = __p811;
      void* cast818 = (void*)t817;
      unsigned long t819 = __n812;
      unsigned long c820 = 40;
      unsigned long b821 = t819 * c820;
      unsigned long c822 = 8;
      operator_delete_3(cast818, b821, c822);
      return;
    }
  struct std___Rb_tree_node_int_* t823 = __p811;
  void* cast824 = (void*)t823;
  unsigned long t825 = __n812;
  unsigned long c826 = 40;
  unsigned long b827 = t825 * c826;
  operator_delete_2(cast824, b827);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v828, struct std___Rb_tree_node_int_* v829, unsigned long v830) {
bb831:
  struct std__allocator_std___Rb_tree_node_int__* this832;
  struct std___Rb_tree_node_int_* __p833;
  unsigned long __n834;
  this832 = v828;
  __p833 = v829;
  __n834 = v830;
  struct std__allocator_std___Rb_tree_node_int__* t835 = this832;
    _Bool r836 = std____is_constant_evaluated();
    if (r836) {
      struct std___Rb_tree_node_int_* t837 = __p833;
      void* cast838 = (void*)t837;
      operator_delete(cast838);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base839 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t835 + 0);
  struct std___Rb_tree_node_int_* t840 = __p833;
  unsigned long t841 = __n834;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base839, t840, t841);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v842, struct std___Rb_tree_node_int_* v843, unsigned long v844) {
bb845:
  struct std__allocator_std___Rb_tree_node_int__* __a846;
  struct std___Rb_tree_node_int_* __p847;
  unsigned long __n848;
  __a846 = v842;
  __p847 = v843;
  __n848 = v844;
  struct std__allocator_std___Rb_tree_node_int__* t849 = __a846;
  struct std___Rb_tree_node_int_* t850 = __p847;
  unsigned long t851 = __n848;
  std__allocator_std___Rb_tree_node_int_____deallocate(t849, t850, t851);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v852, struct std___Rb_tree_node_int_* v853) {
bb854:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this855;
  struct std___Rb_tree_node_int_* __p856;
  this855 = v852;
  __p856 = v853;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t857 = this855;
  struct std__allocator_std___Rb_tree_node_int__* r858 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t857);
  struct std___Rb_tree_node_int_* t859 = __p856;
  unsigned long c860 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r858, t859, c860);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v861, struct std___Rb_tree_node_int_* v862) {
bb863:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this864;
  struct std___Rb_tree_node_int_* __p865;
  this864 = v861;
  __p865 = v862;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t866 = this864;
  struct std___Rb_tree_node_int_* t867 = __p865;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t866, t867);
  struct std___Rb_tree_node_int_* t868 = __p865;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t866, t868);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v869, struct std___Rb_tree_node_int_* v870) {
bb871:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this872;
  struct std___Rb_tree_node_int_* __x873;
  this872 = v869;
  __x873 = v870;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t874 = this872;
    while (1) {
      struct std___Rb_tree_node_int_* t875 = __x873;
      _Bool cast876 = (_Bool)t875;
      if (!cast876) break;
        struct std___Rb_tree_node_int_* __y877;
        struct std___Rb_tree_node_int_* t878 = __x873;
        struct std___Rb_tree_node_int_* r879 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t878);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t874, r879);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t880 = __x873;
        struct std___Rb_tree_node_int_* r881 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t880);
        if (__cir_exc_active) {
          return;
        }
        __y877 = r881;
        struct std___Rb_tree_node_int_* t882 = __x873;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t874, t882);
        struct std___Rb_tree_node_int_* t883 = __y877;
        __x873 = t883;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v884) {
bb885:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this886;
  struct std___Rb_tree_node_int_* __retval887;
  struct std___Rb_tree_node_base* __begin888;
  this886 = v884;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t889 = this886;
  struct std___Rb_tree_header* base890 = (struct std___Rb_tree_header*)((char *)&(t889->_M_impl) + 8);
  struct std___Rb_tree_node_base* t891 = base890->_M_header._M_parent;
  __begin888 = t891;
  struct std___Rb_tree_node_base* t892 = __begin888;
  _Bool cast893 = (_Bool)t892;
  struct std___Rb_tree_node_int_* ternary894;
  if (cast893) {
    struct std___Rb_tree_node_base* t895 = __begin888;
    struct std___Rb_tree_node_int_* derived896 = (struct std___Rb_tree_node_int_*)((char *)t895 - 0);
    struct std___Rb_tree_node_int_* r897 = std___Rb_tree_node_int____M_node_ptr(derived896);
    ternary894 = (struct std___Rb_tree_node_int_*)r897;
  } else {
    struct std___Rb_tree_node_int_* c898 = ((void*)0);
    ternary894 = (struct std___Rb_tree_node_int_*)c898;
  }
  __retval887 = ternary894;
  struct std___Rb_tree_node_int_* t899 = __retval887;
  return t899;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v900, struct std___Rb_tree_iterator_int_* v901) {
bb902:
  struct std___Rb_tree_const_iterator_int_* this903;
  struct std___Rb_tree_iterator_int_* __it904;
  this903 = v900;
  __it904 = v901;
  struct std___Rb_tree_const_iterator_int_* t905 = this903;
  struct std___Rb_tree_iterator_int_* t906 = __it904;
  struct std___Rb_tree_node_base* t907 = t906->_M_node;
  t905->_M_node = t907;
  return;
}

