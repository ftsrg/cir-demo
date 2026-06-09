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
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { unsigned char __field0; };
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
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "*ret.first == 30";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-equal_range/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "*ret.second == 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[24] = "lower bound points to: ";
char _str_4[24] = "upper bound points to: ";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p0, struct std___Rb_tree_iterator_int_* p1, struct std___Rb_tree_iterator_int_* p2);
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0, struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p1);
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std__multiset_int__std__less_int___std__allocator_int_____equal_range(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0, struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0);

// function: _ZNSt8multisetIiSt4lessIiESaIiEEC2Ev
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__multiset_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__multiset_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v4) {
bb5:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this6;
  this6 = v4;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t7 = this6;
  struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* base8 = (struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__*)((char *)t7 + 0);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t7->first);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t7->second);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v396, struct std___Rb_tree_iterator_int_* v397) {
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
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval409, &ref_tmp0410);
  struct std___Rb_tree_const_iterator_int_ t414 = __retval409;
  return t414;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v415, struct std___Rb_tree_node_base* v416, struct std___Rb_tree_node_base* v417, int* v418) {
bb419:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this420;
  struct std___Rb_tree_node_base* __x421;
  struct std___Rb_tree_node_base* __y422;
  int* __k423;
  struct std___Rb_tree_node_base* __retval424;
  this420 = v415;
  __x421 = v416;
  __y422 = v417;
  __k423 = v418;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t425 = this420;
    while (1) {
      struct std___Rb_tree_node_base* t426 = __x421;
      _Bool cast427 = (_Bool)t426;
      if (!cast427) break;
        struct std___Rb_tree_key_compare_std__less_int__* base428 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t425->_M_impl) + 0);
        struct std__less_int_* cast429 = (struct std__less_int_*)base428;
        struct std___Rb_tree_node_base* t430 = __x421;
        int* r431 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t430);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t432 = __k423;
        _Bool r433 = std__less_int___operator___int_const___int_const___const(cast429, r431, t432);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u434 = !r433;
        if (u434) {
          struct std___Rb_tree_node_base* t435 = __x421;
          __y422 = t435;
          struct std___Rb_tree_node_base* t436 = __x421;
          struct std___Rb_tree_node_base* r437 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t436);
          __x421 = r437;
        } else {
          struct std___Rb_tree_node_base* t438 = __x421;
          struct std___Rb_tree_node_base* r439 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t438);
          __x421 = r439;
        }
    }
  struct std___Rb_tree_node_base* t440 = __y422;
  __retval424 = t440;
  struct std___Rb_tree_node_base* t441 = __retval424;
  return t441;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v442, struct std___Rb_tree_node_base* v443, struct std___Rb_tree_node_base* v444, int* v445) {
bb446:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this447;
  struct std___Rb_tree_node_base* __x448;
  struct std___Rb_tree_node_base* __y449;
  int* __k450;
  struct std___Rb_tree_node_base* __retval451;
  this447 = v442;
  __x448 = v443;
  __y449 = v444;
  __k450 = v445;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t452 = this447;
    while (1) {
      struct std___Rb_tree_node_base* t453 = __x448;
      _Bool cast454 = (_Bool)t453;
      if (!cast454) break;
        struct std___Rb_tree_key_compare_std__less_int__* base455 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t452->_M_impl) + 0);
        struct std__less_int_* cast456 = (struct std__less_int_*)base455;
        int* t457 = __k450;
        struct std___Rb_tree_node_base* t458 = __x448;
        int* r459 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t458);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r460 = std__less_int___operator___int_const___int_const___const(cast456, t457, r459);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r460) {
          struct std___Rb_tree_node_base* t461 = __x448;
          __y449 = t461;
          struct std___Rb_tree_node_base* t462 = __x448;
          struct std___Rb_tree_node_base* r463 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t462);
          __x448 = r463;
        } else {
          struct std___Rb_tree_node_base* t464 = __x448;
          struct std___Rb_tree_node_base* r465 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t464);
          __x448 = r465;
        }
    }
  struct std___Rb_tree_node_base* t466 = __y449;
  __retval451 = t466;
  struct std___Rb_tree_node_base* t467 = __retval451;
  return t467;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v468, struct std___Rb_tree_iterator_int_* v469, struct std___Rb_tree_iterator_int_* v470) {
bb471:
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* this472;
  struct std___Rb_tree_iterator_int_* __x473;
  struct std___Rb_tree_iterator_int_* __y474;
  this472 = v468;
  __x473 = v469;
  __y474 = v470;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t475 = this472;
  struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* base476 = (struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__*)((char *)t475 + 0);
  struct std___Rb_tree_iterator_int_* t477 = __x473;
  t475->first = *t477; // copy
  struct std___Rb_tree_iterator_int_* t478 = __y474;
  t475->second = *t478; // copy
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v479, int* v480) {
bb481:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this482;
  int* __k483;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __retval484;
  struct std___Rb_tree_node_base* __x485;
  struct std___Rb_tree_node_base* __y486;
  struct std___Rb_tree_iterator_int_ ref_tmp2487;
  struct std___Rb_tree_iterator_int_ ref_tmp3488;
  this482 = v479;
  __k483 = v480;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t489 = this482;
  struct std___Rb_tree_node_base* r490 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t489);
  __x485 = r490;
  struct std___Rb_tree_node_base* r491 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t489);
  __y486 = r491;
    while (1) {
      struct std___Rb_tree_node_base* t492 = __x485;
      _Bool cast493 = (_Bool)t492;
      if (!cast493) break;
          struct std___Rb_tree_key_compare_std__less_int__* base494 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t489->_M_impl) + 0);
          struct std__less_int_* cast495 = (struct std__less_int_*)base494;
          struct std___Rb_tree_node_base* t496 = __x485;
          int* r497 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t496);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t498 = __k483;
          _Bool r499 = std__less_int___operator___int_const___int_const___const(cast495, r497, t498);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r499) {
            struct std___Rb_tree_node_base* t500 = __x485;
            struct std___Rb_tree_node_base* r501 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t500);
            __x485 = r501;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base502 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t489->_M_impl) + 0);
              struct std__less_int_* cast503 = (struct std__less_int_*)base502;
              int* t504 = __k483;
              struct std___Rb_tree_node_base* t505 = __x485;
              int* r506 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t505);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r507 = std__less_int___operator___int_const___int_const___const(cast503, t504, r506);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r507) {
                struct std___Rb_tree_node_base* t508 = __x485;
                __y486 = t508;
                struct std___Rb_tree_node_base* t509 = __x485;
                struct std___Rb_tree_node_base* r510 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t509);
                __x485 = r510;
              } else {
                struct std___Rb_tree_node_base* __xu511;
                struct std___Rb_tree_node_base* __yu512;
                struct std___Rb_tree_iterator_int_ ref_tmp0513;
                struct std___Rb_tree_iterator_int_ ref_tmp1514;
                struct std___Rb_tree_node_base* t515 = __x485;
                __xu511 = t515;
                struct std___Rb_tree_node_base* t516 = __y486;
                __yu512 = t516;
                struct std___Rb_tree_node_base* t517 = __x485;
                __y486 = t517;
                struct std___Rb_tree_node_base* t518 = __x485;
                struct std___Rb_tree_node_base* r519 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t518);
                __x485 = r519;
                struct std___Rb_tree_node_base* t520 = __xu511;
                struct std___Rb_tree_node_base* r521 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t520);
                __xu511 = r521;
                struct std___Rb_tree_node_base* t522 = __x485;
                struct std___Rb_tree_node_base* t523 = __y486;
                int* t524 = __k483;
                struct std___Rb_tree_node_base* r525 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t489, t522, t523, t524);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp0513, r525);
                struct std___Rb_tree_node_base* t526 = __xu511;
                struct std___Rb_tree_node_base* t527 = __yu512;
                int* t528 = __k483;
                struct std___Rb_tree_node_base* r529 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t489, t526, t527, t528);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp1514, r529);
                _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval484, &ref_tmp0513, &ref_tmp1514);
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t530 = __retval484;
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ret_val531 = t530;
                return ret_val531;
              }
          }
    }
  struct std___Rb_tree_node_base* t532 = __y486;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp2487, t532);
  struct std___Rb_tree_node_base* t533 = __y486;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3488, t533);
  _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval484, &ref_tmp2487, &ref_tmp3488);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t534 = __retval484;
  return t534;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v535, struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v536) {
bb537:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this538;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* __p539;
  this538 = v535;
  __p539 = v536;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t540 = this538;
  struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* base541 = (struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__*)((char *)t540 + 0);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t542 = __p539;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t540->first, &t542->first);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t543 = __p539;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t540->second, &t543->second);
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std__multiset_int__std__less_int___std__allocator_int_____equal_range(struct std__multiset_int__std__less_int___std__allocator_int__* v544, int* v545) {
bb546:
  struct std__multiset_int__std__less_int___std__allocator_int__* this547;
  int* __x548;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __retval549;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ref_tmp0550;
  this547 = v544;
  __x548 = v545;
  struct std__multiset_int__std__less_int___std__allocator_int__* t551 = this547;
  int* t552 = __x548;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ r553 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(&t551->_M_t, t552);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0550 = r553;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E(&__retval549, &ref_tmp0550);
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ t554 = __retval549;
  return t554;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v555, struct std___Rb_tree_const_iterator_int_* v556) {
bb557:
  struct std___Rb_tree_const_iterator_int_* this558;
  struct std___Rb_tree_const_iterator_int_* unnamed559;
  struct std___Rb_tree_const_iterator_int_* __retval560;
  this558 = v555;
  unnamed559 = v556;
  struct std___Rb_tree_const_iterator_int_* t561 = this558;
  struct std___Rb_tree_const_iterator_int_* t562 = unnamed559;
  struct std___Rb_tree_node_base* t563 = t562->_M_node;
  t561->_M_node = t563;
  __retval560 = t561;
  struct std___Rb_tree_const_iterator_int_* t564 = __retval560;
  return t564;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v565, struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v566) {
bb567:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this568;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* __p569;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* __retval570;
  this568 = v565;
  __p569 = v566;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t571 = this568;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t572 = __p569;
  struct std___Rb_tree_const_iterator_int_* r573 = std___Rb_tree_const_iterator_int___operator_(&t571->first, &t572->first);
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t574 = __p569;
  struct std___Rb_tree_const_iterator_int_* r575 = std___Rb_tree_const_iterator_int___operator_(&t571->second, &t574->second);
  __retval570 = t571;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t576 = __retval570;
  return t576;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v577) {
bb578:
  struct std___Rb_tree_const_iterator_int_* this579;
  int* __retval580;
  this579 = v577;
  struct std___Rb_tree_const_iterator_int_* t581 = this579;
  struct std___Rb_tree_node_base* t582 = t581->_M_node;
  struct std___Rb_tree_node_int_* derived583 = ((t582) ? (struct std___Rb_tree_node_int_*)((char *)t582 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r584 = std___Rb_tree_node_int____M_valptr___const(derived583);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval580 = r584;
  int* t585 = __retval580;
  return t585;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v586, int v587) {
bb588:
  int __a589;
  int __b590;
  int __retval591;
  __a589 = v586;
  __b590 = v587;
  int t592 = __a589;
  int t593 = __b590;
  int b594 = t592 | t593;
  __retval591 = b594;
  int t595 = __retval591;
  return t595;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v596) {
bb597:
  struct std__basic_ios_char__std__char_traits_char__* this598;
  int __retval599;
  this598 = v596;
  struct std__basic_ios_char__std__char_traits_char__* t600 = this598;
  struct std__ios_base* base601 = (struct std__ios_base*)((char *)t600 + 0);
  int t602 = base601->_M_streambuf_state;
  __retval599 = t602;
  int t603 = __retval599;
  return t603;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v604, int v605) {
bb606:
  struct std__basic_ios_char__std__char_traits_char__* this607;
  int __state608;
  this607 = v604;
  __state608 = v605;
  struct std__basic_ios_char__std__char_traits_char__* t609 = this607;
  int r610 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t609);
  if (__cir_exc_active) {
    return;
  }
  int t611 = __state608;
  int r612 = std__operator_(r610, t611);
  std__basic_ios_char__std__char_traits_char_____clear(t609, r612);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v613, char* v614) {
bb615:
  char* __c1616;
  char* __c2617;
  _Bool __retval618;
  __c1616 = v613;
  __c2617 = v614;
  char* t619 = __c1616;
  char t620 = *t619;
  int cast621 = (int)t620;
  char* t622 = __c2617;
  char t623 = *t622;
  int cast624 = (int)t623;
  _Bool c625 = ((cast621 == cast624)) ? 1 : 0;
  __retval618 = c625;
  _Bool t626 = __retval618;
  return t626;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v627) {
bb628:
  char* __p629;
  unsigned long __retval630;
  unsigned long __i631;
  __p629 = v627;
  unsigned long c632 = 0;
  __i631 = c632;
    char ref_tmp0633;
    while (1) {
      unsigned long t634 = __i631;
      char* t635 = __p629;
      char* ptr636 = &(t635)[t634];
      char c637 = 0;
      ref_tmp0633 = c637;
      _Bool r638 = __gnu_cxx__char_traits_char___eq(ptr636, &ref_tmp0633);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u639 = !r638;
      if (!u639) break;
      unsigned long t640 = __i631;
      unsigned long u641 = t640 + 1;
      __i631 = u641;
    }
  unsigned long t642 = __i631;
  __retval630 = t642;
  unsigned long t643 = __retval630;
  return t643;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v644) {
bb645:
  char* __s646;
  unsigned long __retval647;
  __s646 = v644;
    _Bool r648 = std____is_constant_evaluated();
    if (r648) {
      char* t649 = __s646;
      unsigned long r650 = __gnu_cxx__char_traits_char___length(t649);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval647 = r650;
      unsigned long t651 = __retval647;
      return t651;
    }
  char* t652 = __s646;
  unsigned long r653 = strlen(t652);
  __retval647 = r653;
  unsigned long t654 = __retval647;
  return t654;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v655, char* v656) {
bb657:
  struct std__basic_ostream_char__std__char_traits_char__* __out658;
  char* __s659;
  struct std__basic_ostream_char__std__char_traits_char__* __retval660;
  __out658 = v655;
  __s659 = v656;
    char* t661 = __s659;
    _Bool cast662 = (_Bool)t661;
    _Bool u663 = !cast662;
    if (u663) {
      struct std__basic_ostream_char__std__char_traits_char__* t664 = __out658;
      void** v665 = (void**)t664;
      void* v666 = *((void**)v665);
      unsigned char* cast667 = (unsigned char*)v666;
      long c668 = -24;
      unsigned char* ptr669 = &(cast667)[c668];
      long* cast670 = (long*)ptr669;
      long t671 = *cast670;
      unsigned char* cast672 = (unsigned char*)t664;
      unsigned char* ptr673 = &(cast672)[t671];
      struct std__basic_ostream_char__std__char_traits_char__* cast674 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr673;
      struct std__basic_ios_char__std__char_traits_char__* cast675 = (struct std__basic_ios_char__std__char_traits_char__*)cast674;
      int t676 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast675, t676);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t677 = __out658;
      char* t678 = __s659;
      char* t679 = __s659;
      unsigned long r680 = std__char_traits_char___length(t679);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast681 = (long)r680;
      struct std__basic_ostream_char__std__char_traits_char__* r682 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t677, t678, cast681);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t683 = __out658;
  __retval660 = t683;
  struct std__basic_ostream_char__std__char_traits_char__* t684 = __retval660;
  return t684;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v685, void* v686) {
bb687:
  struct std__basic_ostream_char__std__char_traits_char__* this688;
  void* __pf689;
  struct std__basic_ostream_char__std__char_traits_char__* __retval690;
  this688 = v685;
  __pf689 = v686;
  struct std__basic_ostream_char__std__char_traits_char__* t691 = this688;
  void* t692 = __pf689;
  struct std__basic_ostream_char__std__char_traits_char__* r693 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t692)(t691);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval690 = r693;
  struct std__basic_ostream_char__std__char_traits_char__* t694 = __retval690;
  return t694;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v695) {
bb696:
  struct std__basic_ostream_char__std__char_traits_char__* __os697;
  struct std__basic_ostream_char__std__char_traits_char__* __retval698;
  __os697 = v695;
  struct std__basic_ostream_char__std__char_traits_char__* t699 = __os697;
  struct std__basic_ostream_char__std__char_traits_char__* r700 = std__ostream__flush(t699);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval698 = r700;
  struct std__basic_ostream_char__std__char_traits_char__* t701 = __retval698;
  return t701;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v702) {
bb703:
  struct std__ctype_char_* __f704;
  struct std__ctype_char_* __retval705;
  __f704 = v702;
    struct std__ctype_char_* t706 = __f704;
    _Bool cast707 = (_Bool)t706;
    _Bool u708 = !cast707;
    if (u708) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t709 = __f704;
  __retval705 = t709;
  struct std__ctype_char_* t710 = __retval705;
  return t710;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v711, char v712) {
bb713:
  struct std__ctype_char_* this714;
  char __c715;
  char __retval716;
  this714 = v711;
  __c715 = v712;
  struct std__ctype_char_* t717 = this714;
    char t718 = t717->_M_widen_ok;
    _Bool cast719 = (_Bool)t718;
    if (cast719) {
      char t720 = __c715;
      unsigned char cast721 = (unsigned char)t720;
      unsigned long cast722 = (unsigned long)cast721;
      char t723 = t717->_M_widen[cast722];
      __retval716 = t723;
      char t724 = __retval716;
      return t724;
    }
  std__ctype_char____M_widen_init___const(t717);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t725 = __c715;
  void** v726 = (void**)t717;
  void* v727 = *((void**)v726);
  char vcall730 = (char)__VERIFIER_virtual_call_char_char(t717, 6, t725);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval716 = vcall730;
  char t731 = __retval716;
  return t731;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v732, char v733) {
bb734:
  struct std__basic_ios_char__std__char_traits_char__* this735;
  char __c736;
  char __retval737;
  this735 = v732;
  __c736 = v733;
  struct std__basic_ios_char__std__char_traits_char__* t738 = this735;
  struct std__ctype_char_* t739 = t738->_M_ctype;
  struct std__ctype_char_* r740 = std__ctype_char__const__std____check_facet_std__ctype_char___(t739);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t741 = __c736;
  char r742 = std__ctype_char___widen_char__const(r740, t741);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval737 = r742;
  char t743 = __retval737;
  return t743;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v744) {
bb745:
  struct std__basic_ostream_char__std__char_traits_char__* __os746;
  struct std__basic_ostream_char__std__char_traits_char__* __retval747;
  __os746 = v744;
  struct std__basic_ostream_char__std__char_traits_char__* t748 = __os746;
  struct std__basic_ostream_char__std__char_traits_char__* t749 = __os746;
  void** v750 = (void**)t749;
  void* v751 = *((void**)v750);
  unsigned char* cast752 = (unsigned char*)v751;
  long c753 = -24;
  unsigned char* ptr754 = &(cast752)[c753];
  long* cast755 = (long*)ptr754;
  long t756 = *cast755;
  unsigned char* cast757 = (unsigned char*)t749;
  unsigned char* ptr758 = &(cast757)[t756];
  struct std__basic_ostream_char__std__char_traits_char__* cast759 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr758;
  struct std__basic_ios_char__std__char_traits_char__* cast760 = (struct std__basic_ios_char__std__char_traits_char__*)cast759;
  char c761 = 10;
  char r762 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast760, c761);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r763 = std__ostream__put(t748, r762);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r764 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r763);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval747 = r764;
  struct std__basic_ostream_char__std__char_traits_char__* t765 = __retval747;
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
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ret773;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ref_tmp1774;
  int ref_tmp2775;
  int c776 = 0;
  __retval771 = c776;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset772);
    _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&ret773);
      int i777;
      int ref_tmp0778;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0779;
      int c780 = 1;
      i777 = c780;
      while (1) {
        int t782 = i777;
        int c783 = 5;
        _Bool c784 = ((t782 <= c783)) ? 1 : 0;
        if (!c784) break;
        int t785 = i777;
        int c786 = 10;
        int b787 = t785 * c786;
        ref_tmp0778 = b787;
        struct std___Rb_tree_const_iterator_int_ r788 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset772, &ref_tmp0778);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0779 = r788;
      for_step781: ;
        int t789 = i777;
        int u790 = t789 + 1;
        i777 = u790;
      }
    int c791 = 30;
    ref_tmp2775 = c791;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ r792 = std__multiset_int__std__less_int___std__allocator_int_____equal_range(&myset772, &ref_tmp2775);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1774 = r792;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* r793 = _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE(&ret773, &ref_tmp1774);
    int* r794 = std___Rb_tree_const_iterator_int___operator____const(&ret773.first);
    int t795 = *r794;
    int c796 = 30;
    _Bool c797 = ((t795 == c796)) ? 1 : 0;
    if (c797) {
    } else {
      char* cast798 = (char*)&(_str);
      char* c799 = _str_1;
      unsigned int c800 = 20;
      char* cast801 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast798, c799, c800, cast801);
    }
    int* r802 = std___Rb_tree_const_iterator_int___operator____const(&ret773.second);
    int t803 = *r802;
    int c804 = 40;
    _Bool c805 = ((t803 == c804)) ? 1 : 0;
    if (c805) {
    } else {
      char* cast806 = (char*)&(_str_2);
      char* c807 = _str_1;
      unsigned int c808 = 21;
      char* cast809 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast806, c807, c808, cast809);
    }
    char* cast810 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r811 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast810);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r812 = std___Rb_tree_const_iterator_int___operator____const(&ret773.first);
    int t813 = *r812;
    struct std__basic_ostream_char__std__char_traits_char__* r814 = std__ostream__operator__(r811, t813);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r815 = std__ostream__operator___std__ostream_____(r814, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast816 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r817 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast816);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r818 = std___Rb_tree_const_iterator_int___operator____const(&ret773.second);
    int t819 = *r818;
    struct std__basic_ostream_char__std__char_traits_char__* r820 = std__ostream__operator__(r817, t819);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r821 = std__ostream__operator___std__ostream_____(r820, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c822 = 0;
    __retval771 = c822;
    int t823 = __retval771;
    int ret_val824 = t823;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset772);
    }
    return ret_val824;
  int t825 = __retval771;
  return t825;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v826) {
bb827:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this828;
  this828 = v826;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t829 = this828;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t829->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v830) {
bb831:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this832;
  this832 = v830;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t833 = this832;
    struct std___Rb_tree_node_int_* r834 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t833);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t833, r834);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t833->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t833->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v835) {
bb836:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this837;
  this837 = v835;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t838 = this837;
  struct std__allocator_std___Rb_tree_node_int__* base839 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t838 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base839);
    struct std___Rb_tree_key_compare_std__less_int__* base840 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t838 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base840);
    struct std___Rb_tree_header* base841 = (struct std___Rb_tree_header*)((char *)t838 + 8);
    std___Rb_tree_header___Rb_tree_header(base841);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v842) {
bb843:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this844;
  this844 = v842;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t845 = this844;
  {
    struct std__allocator_std___Rb_tree_node_int__* base846 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t845 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base846);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v847) {
bb848:
  struct std____new_allocator_std___Rb_tree_node_int__* this849;
  this849 = v847;
  struct std____new_allocator_std___Rb_tree_node_int__* t850 = this849;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v851) {
bb852:
  struct std__allocator_std___Rb_tree_node_int__* this853;
  this853 = v851;
  struct std__allocator_std___Rb_tree_node_int__* t854 = this853;
  struct std____new_allocator_std___Rb_tree_node_int__* base855 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t854 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base855);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v856) {
bb857:
  struct std___Rb_tree_key_compare_std__less_int__* this858;
  this858 = v856;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v859) {
bb860:
  struct std___Rb_tree_header* this861;
  this861 = v859;
  struct std___Rb_tree_header* t862 = this861;
  struct std___Rb_tree_node_base* c863 = ((void*)0);
  t862->_M_header._M_parent = c863;
  t862->_M_header._M_left = &t862->_M_header;
  t862->_M_header._M_right = &t862->_M_header;
  unsigned long c864 = 0;
  t862->_M_node_count = c864;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v865) {
bb866:
  struct std___Rb_tree_header* this867;
  this867 = v865;
  struct std___Rb_tree_header* t868 = this867;
  unsigned int c869 = 0;
  t868->_M_header._M_color = c869;
  std___Rb_tree_header___M_reset(t868);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v870) {
bb871:
  struct std__allocator_std___Rb_tree_node_int__* this872;
  this872 = v870;
  struct std__allocator_std___Rb_tree_node_int__* t873 = this872;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v874) {
bb875:
  struct std___Rb_tree_node_int_* this876;
  struct std___Rb_tree_node_int_* __retval877;
  this876 = v874;
  struct std___Rb_tree_node_int_* t878 = this876;
  __retval877 = t878;
  struct std___Rb_tree_node_int_* t879 = __retval877;
  return t879;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v880) {
bb881:
  struct std___Rb_tree_node_int_* __x882;
  struct std___Rb_tree_node_int_* __retval883;
  __x882 = v880;
  struct std___Rb_tree_node_int_* t884 = __x882;
  struct std___Rb_tree_node_base* base885 = (struct std___Rb_tree_node_base*)((char *)t884 + 0);
  struct std___Rb_tree_node_base* t886 = base885->_M_right;
  _Bool cast887 = (_Bool)t886;
  struct std___Rb_tree_node_int_* ternary888;
  if (cast887) {
    struct std___Rb_tree_node_int_* t889 = __x882;
    struct std___Rb_tree_node_base* base890 = (struct std___Rb_tree_node_base*)((char *)t889 + 0);
    struct std___Rb_tree_node_base* t891 = base890->_M_right;
    struct std___Rb_tree_node_int_* derived892 = (struct std___Rb_tree_node_int_*)((char *)t891 - 0);
    struct std___Rb_tree_node_int_* r893 = std___Rb_tree_node_int____M_node_ptr(derived892);
    ternary888 = (struct std___Rb_tree_node_int_*)r893;
  } else {
    struct std___Rb_tree_node_int_* c894 = ((void*)0);
    ternary888 = (struct std___Rb_tree_node_int_*)c894;
  }
  __retval883 = ternary888;
  struct std___Rb_tree_node_int_* t895 = __retval883;
  return t895;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v896) {
bb897:
  struct std___Rb_tree_node_int_* __x898;
  struct std___Rb_tree_node_int_* __retval899;
  __x898 = v896;
  struct std___Rb_tree_node_int_* t900 = __x898;
  struct std___Rb_tree_node_base* base901 = (struct std___Rb_tree_node_base*)((char *)t900 + 0);
  struct std___Rb_tree_node_base* t902 = base901->_M_left;
  _Bool cast903 = (_Bool)t902;
  struct std___Rb_tree_node_int_* ternary904;
  if (cast903) {
    struct std___Rb_tree_node_int_* t905 = __x898;
    struct std___Rb_tree_node_base* base906 = (struct std___Rb_tree_node_base*)((char *)t905 + 0);
    struct std___Rb_tree_node_base* t907 = base906->_M_left;
    struct std___Rb_tree_node_int_* derived908 = (struct std___Rb_tree_node_int_*)((char *)t907 - 0);
    struct std___Rb_tree_node_int_* r909 = std___Rb_tree_node_int____M_node_ptr(derived908);
    ternary904 = (struct std___Rb_tree_node_int_*)r909;
  } else {
    struct std___Rb_tree_node_int_* c910 = ((void*)0);
    ternary904 = (struct std___Rb_tree_node_int_*)c910;
  }
  __retval899 = ternary904;
  struct std___Rb_tree_node_int_* t911 = __retval899;
  return t911;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v912) {
bb913:
  int* __location914;
  __location914 = v912;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v915, int* v916) {
bb917:
  struct std__allocator_std___Rb_tree_node_int__* __a918;
  int* __p919;
  __a918 = v915;
  __p919 = v916;
  int* t920 = __p919;
  void_std__destroy_at_int_(t920);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v921) {
bb922:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this923;
  struct std__allocator_std___Rb_tree_node_int__* __retval924;
  this923 = v921;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t925 = this923;
  struct std__allocator_std___Rb_tree_node_int__* base926 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t925->_M_impl) + 0);
  __retval924 = base926;
  struct std__allocator_std___Rb_tree_node_int__* t927 = __retval924;
  return t927;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v928) {
bb929:
  struct __gnu_cxx____aligned_membuf_int_* this930;
  void* __retval931;
  this930 = v928;
  struct __gnu_cxx____aligned_membuf_int_* t932 = this930;
  void* cast933 = (void*)&(t932->_M_storage);
  __retval931 = cast933;
  void* t934 = __retval931;
  return t934;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v935) {
bb936:
  struct __gnu_cxx____aligned_membuf_int_* this937;
  int* __retval938;
  this937 = v935;
  struct __gnu_cxx____aligned_membuf_int_* t939 = this937;
  void* r940 = __gnu_cxx____aligned_membuf_int____M_addr(t939);
  int* cast941 = (int*)r940;
  __retval938 = cast941;
  int* t942 = __retval938;
  return t942;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v943) {
bb944:
  struct std___Rb_tree_node_int_* this945;
  int* __retval946;
  this945 = v943;
  struct std___Rb_tree_node_int_* t947 = this945;
  int* r948 = __gnu_cxx____aligned_membuf_int____M_ptr(&t947->_M_storage);
  __retval946 = r948;
  int* t949 = __retval946;
  return t949;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v950, struct std___Rb_tree_node_int_* v951) {
bb952:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this953;
  struct std___Rb_tree_node_int_* __p954;
  this953 = v950;
  __p954 = v951;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t955 = this953;
  struct std__allocator_std___Rb_tree_node_int__* r956 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t955);
  struct std___Rb_tree_node_int_* t957 = __p954;
  int* r958 = std___Rb_tree_node_int____M_valptr(t957);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r956, r958);
  struct std___Rb_tree_node_int_* t959 = __p954;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb960:
  _Bool __retval961;
    _Bool c962 = 0;
    __retval961 = c962;
    _Bool t963 = __retval961;
    return t963;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v964, struct std___Rb_tree_node_int_* v965, unsigned long v966) {
bb967:
  struct std____new_allocator_std___Rb_tree_node_int__* this968;
  struct std___Rb_tree_node_int_* __p969;
  unsigned long __n970;
  this968 = v964;
  __p969 = v965;
  __n970 = v966;
  struct std____new_allocator_std___Rb_tree_node_int__* t971 = this968;
    unsigned long c972 = 8;
    unsigned long c973 = 16;
    _Bool c974 = ((c972 > c973)) ? 1 : 0;
    if (c974) {
      struct std___Rb_tree_node_int_* t975 = __p969;
      void* cast976 = (void*)t975;
      unsigned long t977 = __n970;
      unsigned long c978 = 40;
      unsigned long b979 = t977 * c978;
      unsigned long c980 = 8;
      operator_delete_3(cast976, b979, c980);
      return;
    }
  struct std___Rb_tree_node_int_* t981 = __p969;
  void* cast982 = (void*)t981;
  unsigned long t983 = __n970;
  unsigned long c984 = 40;
  unsigned long b985 = t983 * c984;
  operator_delete_2(cast982, b985);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v986, struct std___Rb_tree_node_int_* v987, unsigned long v988) {
bb989:
  struct std__allocator_std___Rb_tree_node_int__* this990;
  struct std___Rb_tree_node_int_* __p991;
  unsigned long __n992;
  this990 = v986;
  __p991 = v987;
  __n992 = v988;
  struct std__allocator_std___Rb_tree_node_int__* t993 = this990;
    _Bool r994 = std____is_constant_evaluated();
    if (r994) {
      struct std___Rb_tree_node_int_* t995 = __p991;
      void* cast996 = (void*)t995;
      operator_delete(cast996);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base997 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t993 + 0);
  struct std___Rb_tree_node_int_* t998 = __p991;
  unsigned long t999 = __n992;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base997, t998, t999);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1000, struct std___Rb_tree_node_int_* v1001, unsigned long v1002) {
bb1003:
  struct std__allocator_std___Rb_tree_node_int__* __a1004;
  struct std___Rb_tree_node_int_* __p1005;
  unsigned long __n1006;
  __a1004 = v1000;
  __p1005 = v1001;
  __n1006 = v1002;
  struct std__allocator_std___Rb_tree_node_int__* t1007 = __a1004;
  struct std___Rb_tree_node_int_* t1008 = __p1005;
  unsigned long t1009 = __n1006;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1007, t1008, t1009);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1010, struct std___Rb_tree_node_int_* v1011) {
bb1012:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1013;
  struct std___Rb_tree_node_int_* __p1014;
  this1013 = v1010;
  __p1014 = v1011;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1015 = this1013;
  struct std__allocator_std___Rb_tree_node_int__* r1016 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1015);
  struct std___Rb_tree_node_int_* t1017 = __p1014;
  unsigned long c1018 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1016, t1017, c1018);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1019, struct std___Rb_tree_node_int_* v1020) {
bb1021:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1022;
  struct std___Rb_tree_node_int_* __p1023;
  this1022 = v1019;
  __p1023 = v1020;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1024 = this1022;
  struct std___Rb_tree_node_int_* t1025 = __p1023;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1024, t1025);
  struct std___Rb_tree_node_int_* t1026 = __p1023;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1024, t1026);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1027, struct std___Rb_tree_node_int_* v1028) {
bb1029:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1030;
  struct std___Rb_tree_node_int_* __x1031;
  this1030 = v1027;
  __x1031 = v1028;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1032 = this1030;
    while (1) {
      struct std___Rb_tree_node_int_* t1033 = __x1031;
      _Bool cast1034 = (_Bool)t1033;
      if (!cast1034) break;
        struct std___Rb_tree_node_int_* __y1035;
        struct std___Rb_tree_node_int_* t1036 = __x1031;
        struct std___Rb_tree_node_int_* r1037 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1036);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1032, r1037);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1038 = __x1031;
        struct std___Rb_tree_node_int_* r1039 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1038);
        if (__cir_exc_active) {
          return;
        }
        __y1035 = r1039;
        struct std___Rb_tree_node_int_* t1040 = __x1031;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1032, t1040);
        struct std___Rb_tree_node_int_* t1041 = __y1035;
        __x1031 = t1041;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1042) {
bb1043:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1044;
  struct std___Rb_tree_node_int_* __retval1045;
  struct std___Rb_tree_node_base* __begin1046;
  this1044 = v1042;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1047 = this1044;
  struct std___Rb_tree_header* base1048 = (struct std___Rb_tree_header*)((char *)&(t1047->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1049 = base1048->_M_header._M_parent;
  __begin1046 = t1049;
  struct std___Rb_tree_node_base* t1050 = __begin1046;
  _Bool cast1051 = (_Bool)t1050;
  struct std___Rb_tree_node_int_* ternary1052;
  if (cast1051) {
    struct std___Rb_tree_node_base* t1053 = __begin1046;
    struct std___Rb_tree_node_int_* derived1054 = (struct std___Rb_tree_node_int_*)((char *)t1053 - 0);
    struct std___Rb_tree_node_int_* r1055 = std___Rb_tree_node_int____M_node_ptr(derived1054);
    ternary1052 = (struct std___Rb_tree_node_int_*)r1055;
  } else {
    struct std___Rb_tree_node_int_* c1056 = ((void*)0);
    ternary1052 = (struct std___Rb_tree_node_int_*)c1056;
  }
  __retval1045 = ternary1052;
  struct std___Rb_tree_node_int_* t1057 = __retval1045;
  return t1057;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1058) {
bb1059:
  struct std___Rb_tree_const_iterator_int_* this1060;
  this1060 = v1058;
  struct std___Rb_tree_const_iterator_int_* t1061 = this1060;
  struct std___Rb_tree_node_base* c1062 = ((void*)0);
  t1061->_M_node = c1062;
  return;
}

