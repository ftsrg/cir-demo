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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[13] = "*itlow == 40";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-upper_bound/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*itup == 70";
char _str_3[18] = "myset.size() == 6";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
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
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____upper_bound(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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

// function: _ZNSt8multisetIiSt4lessIiESaIiEEC2Ev
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v0) {
bb1: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__multiset_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v4) {
bb5: ;
  struct std___Rb_tree_const_iterator_int_* this6;
  this6 = v4;
  struct std___Rb_tree_const_iterator_int_* t7 = this6;
  struct std___Rb_tree_node_base* c8 = ((void*)0);
  t7->_M_node = c8;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10: ;
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
bb18: ;
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
bb24: ;
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
bb34: ;
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
bb48: ;
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
bb56: ;
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
bb63: ;
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
bb71: ;
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
bb78: ;
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
bb87: ;
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
bb95: ;
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
bb102: ;
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
bb111: ;
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
bb123: ;
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
bb149: ;
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
bb158: ;
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
bb164: ;
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
bb175: ;
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
bb209: ;
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
bb230: ;
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
bb239: ;
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
bb249: ;
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
bb264: ;
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
bb274: ;
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
bb290: ;
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
bb303: ;
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
bb316: ;
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
bb327: ;
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
bb337: ;
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
bb380: ;
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
bb398: ;
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
bb406: ;
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v415, struct std___Rb_tree_node_base* v416, struct std___Rb_tree_node_base* v417, int* v418) {
bb419: ;
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
        int* t430 = __k423;
        struct std___Rb_tree_node_base* t431 = __x421;
        int* r432 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t431);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r433 = std__less_int___operator___int_const___int_const___const(cast429, t430, r432);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r433) {
          struct std___Rb_tree_node_base* t434 = __x421;
          __y422 = t434;
          struct std___Rb_tree_node_base* t435 = __x421;
          struct std___Rb_tree_node_base* r436 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t435);
          __x421 = r436;
        } else {
          struct std___Rb_tree_node_base* t437 = __x421;
          struct std___Rb_tree_node_base* r438 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t437);
          __x421 = r438;
        }
    }
  struct std___Rb_tree_node_base* t439 = __y422;
  __retval424 = t439;
  struct std___Rb_tree_node_base* t440 = __retval424;
  return t440;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v441, int* v442) {
bb443: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this444;
  int* __k445;
  struct std___Rb_tree_iterator_int_ __retval446;
  this444 = v441;
  __k445 = v442;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t447 = this444;
  struct std___Rb_tree_node_base* r448 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t447);
  struct std___Rb_tree_node_base* r449 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t447);
  int* t450 = __k445;
  struct std___Rb_tree_node_base* r451 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t447, r448, r449, t450);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval446, r451);
  struct std___Rb_tree_iterator_int_ t452 = __retval446;
  return t452;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____upper_bound(struct std__multiset_int__std__less_int___std__allocator_int__* v453, int* v454) {
bb455: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this456;
  int* __x457;
  struct std___Rb_tree_const_iterator_int_ __retval458;
  struct std___Rb_tree_iterator_int_ ref_tmp0459;
  this456 = v453;
  __x457 = v454;
  struct std__multiset_int__std__less_int___std__allocator_int__* t460 = this456;
  int* t461 = __x457;
  struct std___Rb_tree_iterator_int_ r462 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(&t460->_M_t, t461);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0459 = r462;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval458, &ref_tmp0459);
  struct std___Rb_tree_const_iterator_int_ t463 = __retval458;
  return t463;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v464, struct std___Rb_tree_const_iterator_int_* v465) {
bb466: ;
  struct std___Rb_tree_const_iterator_int_* this467;
  struct std___Rb_tree_const_iterator_int_* unnamed468;
  struct std___Rb_tree_const_iterator_int_* __retval469;
  this467 = v464;
  unnamed468 = v465;
  struct std___Rb_tree_const_iterator_int_* t470 = this467;
  struct std___Rb_tree_const_iterator_int_* t471 = unnamed468;
  struct std___Rb_tree_node_base* t472 = t471->_M_node;
  t470->_M_node = t472;
  __retval469 = t470;
  struct std___Rb_tree_const_iterator_int_* t473 = __retval469;
  return t473;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v474) {
bb475: ;
  struct std___Rb_tree_const_iterator_int_* this476;
  int* __retval477;
  this476 = v474;
  struct std___Rb_tree_const_iterator_int_* t478 = this476;
  struct std___Rb_tree_node_base* t479 = t478->_M_node;
  struct std___Rb_tree_node_int_* derived480 = ((t479) ? (struct std___Rb_tree_node_int_*)((char *)t479 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r481 = std___Rb_tree_node_int____M_valptr___const(derived480);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval477 = r481;
  int* t482 = __retval477;
  return t482;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v483) {
bb484: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this485;
  struct std___Rb_tree_iterator_int_ __retval486;
  this485 = v483;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t487 = this485;
  struct std___Rb_tree_header* base488 = (struct std___Rb_tree_header*)((char *)&(t487->_M_impl) + 8);
  struct std___Rb_tree_node_base* t489 = base488->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval486, t489);
  struct std___Rb_tree_iterator_int_ t490 = __retval486;
  return t490;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v491) {
bb492: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this493;
  struct std___Rb_tree_iterator_int_ __retval494;
  this493 = v491;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t495 = this493;
  struct std___Rb_tree_node_base* r496 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t495);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval494, r496);
  struct std___Rb_tree_iterator_int_ t497 = __retval494;
  return t497;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v498) {
bb499: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this500;
  this500 = v498;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t501 = this500;
  struct std___Rb_tree_node_int_* r502 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t501);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t501, r502);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base503 = (struct std___Rb_tree_header*)((char *)&(t501->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base503);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v504, struct std___Rb_tree_node_base* v505) {
bb506: ;
  struct std___Rb_tree_node_base* __z507;
  struct std___Rb_tree_node_base* __header508;
  struct std___Rb_tree_node_base* __retval509;
  __z507 = v504;
  __header508 = v505;
  struct std___Rb_tree_node_base* t510 = __z507;
  struct std___Rb_tree_node_base* t511 = __header508;
  struct std___Rb_tree_node_base* r512 = std___Rb_tree_rebalance_for_erase(t510, t511);
  __retval509 = r512;
  struct std___Rb_tree_node_base* t513 = __retval509;
  return t513;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v514, struct std___Rb_tree_const_iterator_int_ v515) {
bb516: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this517;
  struct std___Rb_tree_const_iterator_int_ __position518;
  struct std___Rb_tree_node_base* __y519;
  this517 = v514;
  __position518 = v515;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t520 = this517;
  struct std___Rb_tree_node_base* t521 = __position518._M_node;
  struct std___Rb_tree_header* base522 = (struct std___Rb_tree_header*)((char *)&(t520->_M_impl) + 8);
  struct std___Rb_tree_node_base* r523 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t521, &base522->_M_header);
  __y519 = r523;
  struct std___Rb_tree_node_base* t524 = __y519;
  struct std___Rb_tree_node_int_* derived525 = (struct std___Rb_tree_node_int_*)((char *)t524 - 0);
  struct std___Rb_tree_node_int_* r526 = std___Rb_tree_node_int____M_node_ptr(derived525);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t520, r526);
  struct std___Rb_tree_header* base527 = (struct std___Rb_tree_header*)((char *)&(t520->_M_impl) + 8);
  unsigned long t528 = base527->_M_node_count;
  unsigned long u529 = t528 - 1;
  base527->_M_node_count = u529;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v530, struct std___Rb_tree_const_iterator_int_ v531, struct std___Rb_tree_const_iterator_int_ v532) {
bb533: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this534;
  struct std___Rb_tree_const_iterator_int_ __first535;
  struct std___Rb_tree_const_iterator_int_ __last536;
  this534 = v530;
  __first535 = v531;
  __last536 = v532;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t537 = this534;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0538;
    struct std___Rb_tree_iterator_int_ ref_tmp1539;
    struct std___Rb_tree_iterator_int_ r540 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t537);
    ref_tmp1539 = r540;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0538, &ref_tmp1539);
    _Bool r541 = std__operator__(&__first535, &ref_tmp0538);
    _Bool ternary542;
    if (r541) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2543;
      struct std___Rb_tree_iterator_int_ ref_tmp3544;
      struct std___Rb_tree_iterator_int_ r545 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t537);
      ref_tmp3544 = r545;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2543, &ref_tmp3544);
      _Bool r546 = std__operator__(&__last536, &ref_tmp2543);
      ternary542 = (_Bool)r546;
    } else {
      _Bool c547 = 0;
      ternary542 = (_Bool)c547;
    }
    if (ternary542) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t537);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0548;
        while (1) {
          _Bool r549 = std__operator__(&__first535, &__last536);
          _Bool u550 = !r549;
          if (!u550) break;
          int c551 = 0;
          struct std___Rb_tree_const_iterator_int_ r552 = std___Rb_tree_const_iterator_int___operator__(&__first535, c551);
          agg_tmp0548 = r552;
          struct std___Rb_tree_const_iterator_int_ t553 = agg_tmp0548;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t537, t553);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v554, struct std___Rb_tree_const_iterator_int_ v555, struct std___Rb_tree_const_iterator_int_ v556) {
bb557: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this558;
  struct std___Rb_tree_const_iterator_int_ __first559;
  struct std___Rb_tree_const_iterator_int_ __last560;
  struct std___Rb_tree_iterator_int_ __retval561;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0562;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1563;
  this558 = v554;
  __first559 = v555;
  __last560 = v556;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t564 = this558;
  agg_tmp0562 = __first559; // copy
  agg_tmp1563 = __last560; // copy
  struct std___Rb_tree_const_iterator_int_ t565 = agg_tmp0562;
  struct std___Rb_tree_const_iterator_int_ t566 = agg_tmp1563;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t564, t565, t566);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t567 = __last560._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval561, t567);
  struct std___Rb_tree_iterator_int_ t568 = __retval561;
  return t568;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v569, struct std___Rb_tree_const_iterator_int_ v570, struct std___Rb_tree_const_iterator_int_ v571) {
bb572: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this573;
  struct std___Rb_tree_const_iterator_int_ __first574;
  struct std___Rb_tree_const_iterator_int_ __last575;
  struct std___Rb_tree_const_iterator_int_ __retval576;
  struct std___Rb_tree_iterator_int_ ref_tmp0577;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0578;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1579;
  this573 = v569;
  __first574 = v570;
  __last575 = v571;
  struct std__multiset_int__std__less_int___std__allocator_int__* t580 = this573;
  agg_tmp0578 = __first574; // copy
  agg_tmp1579 = __last575; // copy
  struct std___Rb_tree_const_iterator_int_ t581 = agg_tmp0578;
  struct std___Rb_tree_const_iterator_int_ t582 = agg_tmp1579;
  struct std___Rb_tree_iterator_int_ r583 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t580->_M_t, t581, t582);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0577 = r583;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval576, &ref_tmp0577);
  struct std___Rb_tree_const_iterator_int_ t584 = __retval576;
  return t584;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v585) {
bb586: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this587;
  unsigned long __retval588;
  this587 = v585;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t589 = this587;
  struct std___Rb_tree_header* base590 = (struct std___Rb_tree_header*)((char *)&(t589->_M_impl) + 8);
  unsigned long t591 = base590->_M_node_count;
  __retval588 = t591;
  unsigned long t592 = __retval588;
  return t592;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v593) {
bb594: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this595;
  unsigned long __retval596;
  this595 = v593;
  struct std__multiset_int__std__less_int___std__allocator_int__* t597 = this595;
  unsigned long r598 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t597->_M_t);
  __retval596 = r598;
  unsigned long t599 = __retval596;
  return t599;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v600, int v601) {
bb602: ;
  int __a603;
  int __b604;
  int __retval605;
  __a603 = v600;
  __b604 = v601;
  int t606 = __a603;
  int t607 = __b604;
  int b608 = t606 | t607;
  __retval605 = b608;
  int t609 = __retval605;
  return t609;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v610) {
bb611: ;
  struct std__basic_ios_char__std__char_traits_char__* this612;
  int __retval613;
  this612 = v610;
  struct std__basic_ios_char__std__char_traits_char__* t614 = this612;
  struct std__ios_base* base615 = (struct std__ios_base*)((char *)t614 + 0);
  int t616 = base615->_M_streambuf_state;
  __retval613 = t616;
  int t617 = __retval613;
  return t617;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v618, int v619) {
bb620: ;
  struct std__basic_ios_char__std__char_traits_char__* this621;
  int __state622;
  this621 = v618;
  __state622 = v619;
  struct std__basic_ios_char__std__char_traits_char__* t623 = this621;
  int r624 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t623);
  if (__cir_exc_active) {
    return;
  }
  int t625 = __state622;
  int r626 = std__operator_(r624, t625);
  std__basic_ios_char__std__char_traits_char_____clear(t623, r626);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v627, char* v628) {
bb629: ;
  char* __c1630;
  char* __c2631;
  _Bool __retval632;
  __c1630 = v627;
  __c2631 = v628;
  char* t633 = __c1630;
  char t634 = *t633;
  int cast635 = (int)t634;
  char* t636 = __c2631;
  char t637 = *t636;
  int cast638 = (int)t637;
  _Bool c639 = ((cast635 == cast638)) ? 1 : 0;
  __retval632 = c639;
  _Bool t640 = __retval632;
  return t640;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v641) {
bb642: ;
  char* __p643;
  unsigned long __retval644;
  unsigned long __i645;
  __p643 = v641;
  unsigned long c646 = 0;
  __i645 = c646;
    char ref_tmp0647;
    while (1) {
      unsigned long t648 = __i645;
      char* t649 = __p643;
      char* ptr650 = &(t649)[t648];
      char c651 = 0;
      ref_tmp0647 = c651;
      _Bool r652 = __gnu_cxx__char_traits_char___eq(ptr650, &ref_tmp0647);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u653 = !r652;
      if (!u653) break;
      unsigned long t654 = __i645;
      unsigned long u655 = t654 + 1;
      __i645 = u655;
    }
  unsigned long t656 = __i645;
  __retval644 = t656;
  unsigned long t657 = __retval644;
  return t657;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v658) {
bb659: ;
  char* __s660;
  unsigned long __retval661;
  __s660 = v658;
    _Bool r662 = std____is_constant_evaluated();
    if (r662) {
      char* t663 = __s660;
      unsigned long r664 = __gnu_cxx__char_traits_char___length(t663);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval661 = r664;
      unsigned long t665 = __retval661;
      return t665;
    }
  char* t666 = __s660;
  unsigned long r667 = strlen(t666);
  __retval661 = r667;
  unsigned long t668 = __retval661;
  return t668;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v669, char* v670) {
bb671: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out672;
  char* __s673;
  struct std__basic_ostream_char__std__char_traits_char__* __retval674;
  __out672 = v669;
  __s673 = v670;
    char* t675 = __s673;
    _Bool cast676 = (_Bool)t675;
    _Bool u677 = !cast676;
    if (u677) {
      struct std__basic_ostream_char__std__char_traits_char__* t678 = __out672;
      void** v679 = (void**)t678;
      void* v680 = *((void**)v679);
      unsigned char* cast681 = (unsigned char*)v680;
      long c682 = -24;
      unsigned char* ptr683 = &(cast681)[c682];
      long* cast684 = (long*)ptr683;
      long t685 = *cast684;
      unsigned char* cast686 = (unsigned char*)t678;
      unsigned char* ptr687 = &(cast686)[t685];
      struct std__basic_ostream_char__std__char_traits_char__* cast688 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr687;
      struct std__basic_ios_char__std__char_traits_char__* cast689 = (struct std__basic_ios_char__std__char_traits_char__*)cast688;
      int t690 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast689, t690);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t691 = __out672;
      char* t692 = __s673;
      char* t693 = __s673;
      unsigned long r694 = std__char_traits_char___length(t693);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast695 = (long)r694;
      struct std__basic_ostream_char__std__char_traits_char__* r696 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t691, t692, cast695);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t697 = __out672;
  __retval674 = t697;
  struct std__basic_ostream_char__std__char_traits_char__* t698 = __retval674;
  return t698;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v699, struct std___Rb_tree_node_base* v700) {
bb701: ;
  struct std___Rb_tree_const_iterator_int_* this702;
  struct std___Rb_tree_node_base* __x703;
  this702 = v699;
  __x703 = v700;
  struct std___Rb_tree_const_iterator_int_* t704 = this702;
  struct std___Rb_tree_node_base* t705 = __x703;
  t704->_M_node = t705;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v706) {
bb707: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this708;
  struct std___Rb_tree_const_iterator_int_ __retval709;
  this708 = v706;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t710 = this708;
  struct std___Rb_tree_header* base711 = (struct std___Rb_tree_header*)((char *)&(t710->_M_impl) + 8);
  struct std___Rb_tree_node_base* t712 = base711->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval709, t712);
  struct std___Rb_tree_const_iterator_int_ t713 = __retval709;
  return t713;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v714) {
bb715: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this716;
  struct std___Rb_tree_const_iterator_int_ __retval717;
  this716 = v714;
  struct std__multiset_int__std__less_int___std__allocator_int__* t718 = this716;
  struct std___Rb_tree_const_iterator_int_ r719 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t718->_M_t);
  __retval717 = r719;
  struct std___Rb_tree_const_iterator_int_ t720 = __retval717;
  return t720;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v721, struct std___Rb_tree_const_iterator_int_* v722) {
bb723: ;
  struct std___Rb_tree_const_iterator_int_* __x724;
  struct std___Rb_tree_const_iterator_int_* __y725;
  _Bool __retval726;
  __x724 = v721;
  __y725 = v722;
  struct std___Rb_tree_const_iterator_int_* t727 = __x724;
  struct std___Rb_tree_node_base* t728 = t727->_M_node;
  struct std___Rb_tree_const_iterator_int_* t729 = __y725;
  struct std___Rb_tree_node_base* t730 = t729->_M_node;
  _Bool c731 = ((t728 == t730)) ? 1 : 0;
  __retval726 = c731;
  _Bool t732 = __retval726;
  return t732;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v733) {
bb734: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this735;
  struct std___Rb_tree_const_iterator_int_ __retval736;
  this735 = v733;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t737 = this735;
  struct std___Rb_tree_node_base* r738 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t737);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval736, r738);
  struct std___Rb_tree_const_iterator_int_ t739 = __retval736;
  return t739;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v740) {
bb741: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this742;
  struct std___Rb_tree_const_iterator_int_ __retval743;
  this742 = v740;
  struct std__multiset_int__std__less_int___std__allocator_int__* t744 = this742;
  struct std___Rb_tree_const_iterator_int_ r745 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t744->_M_t);
  __retval743 = r745;
  struct std___Rb_tree_const_iterator_int_ t746 = __retval743;
  return t746;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v747, int v748) {
bb749: ;
  struct std___Rb_tree_const_iterator_int_* this750;
  int unnamed751;
  struct std___Rb_tree_const_iterator_int_ __retval752;
  this750 = v747;
  unnamed751 = v748;
  struct std___Rb_tree_const_iterator_int_* t753 = this750;
  __retval752 = *t753; // copy
  struct std___Rb_tree_node_base* t754 = t753->_M_node;
  struct std___Rb_tree_node_base* r755 = std___Rb_tree_increment(t754);
  t753->_M_node = r755;
  struct std___Rb_tree_const_iterator_int_ t756 = __retval752;
  return t756;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v757, void* v758) {
bb759: ;
  struct std__basic_ostream_char__std__char_traits_char__* this760;
  void* __pf761;
  struct std__basic_ostream_char__std__char_traits_char__* __retval762;
  this760 = v757;
  __pf761 = v758;
  struct std__basic_ostream_char__std__char_traits_char__* t763 = this760;
  void* t764 = __pf761;
  struct std__basic_ostream_char__std__char_traits_char__* r765 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t764)(t763);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval762 = r765;
  struct std__basic_ostream_char__std__char_traits_char__* t766 = __retval762;
  return t766;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v767) {
bb768: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os769;
  struct std__basic_ostream_char__std__char_traits_char__* __retval770;
  __os769 = v767;
  struct std__basic_ostream_char__std__char_traits_char__* t771 = __os769;
  struct std__basic_ostream_char__std__char_traits_char__* r772 = std__ostream__flush(t771);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval770 = r772;
  struct std__basic_ostream_char__std__char_traits_char__* t773 = __retval770;
  return t773;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v774) {
bb775: ;
  struct std__ctype_char_* __f776;
  struct std__ctype_char_* __retval777;
  __f776 = v774;
    struct std__ctype_char_* t778 = __f776;
    _Bool cast779 = (_Bool)t778;
    _Bool u780 = !cast779;
    if (u780) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t781 = __f776;
  __retval777 = t781;
  struct std__ctype_char_* t782 = __retval777;
  return t782;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v783, char v784) {
bb785: ;
  struct std__ctype_char_* this786;
  char __c787;
  char __retval788;
  this786 = v783;
  __c787 = v784;
  struct std__ctype_char_* t789 = this786;
    char t790 = t789->_M_widen_ok;
    _Bool cast791 = (_Bool)t790;
    if (cast791) {
      char t792 = __c787;
      unsigned char cast793 = (unsigned char)t792;
      unsigned long cast794 = (unsigned long)cast793;
      char t795 = t789->_M_widen[cast794];
      __retval788 = t795;
      char t796 = __retval788;
      return t796;
    }
  std__ctype_char____M_widen_init___const(t789);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t797 = __c787;
  void** v798 = (void**)t789;
  void* v799 = *((void**)v798);
  char vcall802 = (char)__VERIFIER_virtual_call_char_char(t789, 6, t797);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval788 = vcall802;
  char t803 = __retval788;
  return t803;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v804, char v805) {
bb806: ;
  struct std__basic_ios_char__std__char_traits_char__* this807;
  char __c808;
  char __retval809;
  this807 = v804;
  __c808 = v805;
  struct std__basic_ios_char__std__char_traits_char__* t810 = this807;
  struct std__ctype_char_* t811 = t810->_M_ctype;
  struct std__ctype_char_* r812 = std__ctype_char__const__std____check_facet_std__ctype_char___(t811);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t813 = __c808;
  char r814 = std__ctype_char___widen_char__const(r812, t813);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval809 = r814;
  char t815 = __retval809;
  return t815;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v816) {
bb817: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os818;
  struct std__basic_ostream_char__std__char_traits_char__* __retval819;
  __os818 = v816;
  struct std__basic_ostream_char__std__char_traits_char__* t820 = __os818;
  struct std__basic_ostream_char__std__char_traits_char__* t821 = __os818;
  void** v822 = (void**)t821;
  void* v823 = *((void**)v822);
  unsigned char* cast824 = (unsigned char*)v823;
  long c825 = -24;
  unsigned char* ptr826 = &(cast824)[c825];
  long* cast827 = (long*)ptr826;
  long t828 = *cast827;
  unsigned char* cast829 = (unsigned char*)t821;
  unsigned char* ptr830 = &(cast829)[t828];
  struct std__basic_ostream_char__std__char_traits_char__* cast831 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr830;
  struct std__basic_ios_char__std__char_traits_char__* cast832 = (struct std__basic_ios_char__std__char_traits_char__*)cast831;
  char c833 = 10;
  char r834 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast832, c833);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r835 = std__ostream__put(t820, r834);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r836 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r835);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval819 = r836;
  struct std__basic_ostream_char__std__char_traits_char__* t837 = __retval819;
  return t837;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v838) {
bb839: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this840;
  this840 = v838;
  struct std__multiset_int__std__less_int___std__allocator_int__* t841 = this840;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t841->_M_t);
  }
  return;
}

// function: main
int main() {
bb842: ;
  int __retval843;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset844;
  struct std___Rb_tree_const_iterator_int_ it845;
  struct std___Rb_tree_const_iterator_int_ itlow846;
  struct std___Rb_tree_const_iterator_int_ itup847;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1848;
  int ref_tmp2849;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3850;
  int ref_tmp4851;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1852;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2853;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3854;
  int c855 = 0;
  __retval843 = c855;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset844);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it845);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itlow846);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itup847);
      int i856;
      int ref_tmp0857;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0858;
      int c859 = 1;
      i856 = c859;
      while (1) {
        int t861 = i856;
        int c862 = 10;
        _Bool c863 = ((t861 < c862)) ? 1 : 0;
        if (!c863) break;
        int t864 = i856;
        int c865 = 10;
        int b866 = t864 * c865;
        ref_tmp0857 = b866;
        struct std___Rb_tree_const_iterator_int_ r867 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset844, &ref_tmp0857);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0858 = r867;
      for_step860: ;
        int t868 = i856;
        int u869 = t868 + 1;
        i856 = u869;
      }
    int c870 = 30;
    ref_tmp2849 = c870;
    struct std___Rb_tree_const_iterator_int_ r871 = std__multiset_int__std__less_int___std__allocator_int_____upper_bound(&myset844, &ref_tmp2849);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1848 = r871;
    struct std___Rb_tree_const_iterator_int_* r872 = std___Rb_tree_const_iterator_int___operator_(&itlow846, &ref_tmp1848);
    int* r873 = std___Rb_tree_const_iterator_int___operator____const(&itlow846);
    int t874 = *r873;
    int c875 = 40;
    _Bool c876 = ((t874 == c875)) ? 1 : 0;
    if (c876) {
    } else {
      char* cast877 = (char*)&(_str);
      char* c878 = (char*)_str_1;
      unsigned int c879 = 21;
      char* cast880 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast877, c878, c879, cast880);
    }
    int c881 = 60;
    ref_tmp4851 = c881;
    struct std___Rb_tree_const_iterator_int_ r882 = std__multiset_int__std__less_int___std__allocator_int_____upper_bound(&myset844, &ref_tmp4851);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp3850 = r882;
    struct std___Rb_tree_const_iterator_int_* r883 = std___Rb_tree_const_iterator_int___operator_(&itup847, &ref_tmp3850);
    int* r884 = std___Rb_tree_const_iterator_int___operator____const(&itup847);
    int t885 = *r884;
    int c886 = 70;
    _Bool c887 = ((t885 == c886)) ? 1 : 0;
    if (c887) {
    } else {
      char* cast888 = (char*)&(_str_2);
      char* c889 = (char*)_str_1;
      unsigned int c890 = 23;
      char* cast891 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast888, c889, c890, cast891);
    }
    agg_tmp1852 = itlow846; // copy
    agg_tmp2853 = itup847; // copy
    struct std___Rb_tree_const_iterator_int_ t892 = agg_tmp1852;
    struct std___Rb_tree_const_iterator_int_ t893 = agg_tmp2853;
    struct std___Rb_tree_const_iterator_int_ r894 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset844, t892, t893);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3854 = r894;
    unsigned long r895 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset844);
    unsigned long c896 = 6;
    _Bool c897 = ((r895 == c896)) ? 1 : 0;
    if (c897) {
    } else {
      char* cast898 = (char*)&(_str_3);
      char* c899 = (char*)_str_1;
      unsigned int c900 = 26;
      char* cast901 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast898, c899, c900, cast901);
    }
    char* cast902 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r903 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast902);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp5904;
      struct std___Rb_tree_const_iterator_int_ ref_tmp6905;
      struct std___Rb_tree_const_iterator_int_ agg_tmp4906;
      struct std___Rb_tree_const_iterator_int_ r907 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset844);
      ref_tmp5904 = r907;
      struct std___Rb_tree_const_iterator_int_* r908 = std___Rb_tree_const_iterator_int___operator_(&it845, &ref_tmp5904);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r910 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset844);
        ref_tmp6905 = r910;
        _Bool r911 = std__operator__(&it845, &ref_tmp6905);
        _Bool u912 = !r911;
        if (!u912) break;
        char* cast913 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r914 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast913);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r915 = std___Rb_tree_const_iterator_int___operator____const(&it845);
        int t916 = *r915;
        struct std__basic_ostream_char__std__char_traits_char__* r917 = std__ostream__operator__(r914, t916);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step909: ;
        int c918 = 0;
        struct std___Rb_tree_const_iterator_int_ r919 = std___Rb_tree_const_iterator_int___operator__(&it845, c918);
        agg_tmp4906 = r919;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r920 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c921 = 0;
    __retval843 = c921;
    int t922 = __retval843;
    int ret_val923 = t922;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset844);
    }
    return ret_val923;
  int t924 = __retval843;
  return t924;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v925) {
bb926: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this927;
  this927 = v925;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t928 = this927;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t928->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v929) {
bb930: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this931;
  this931 = v929;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t932 = this931;
    struct std___Rb_tree_node_int_* r933 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t932);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t932, r933);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t932->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t932->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v934) {
bb935: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this936;
  this936 = v934;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t937 = this936;
  struct std__allocator_std___Rb_tree_node_int__* base938 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t937 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base938);
    struct std___Rb_tree_key_compare_std__less_int__* base939 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t937 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base939);
    struct std___Rb_tree_header* base940 = (struct std___Rb_tree_header*)((char *)t937 + 8);
    std___Rb_tree_header___Rb_tree_header(base940);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v941) {
bb942: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this943;
  this943 = v941;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t944 = this943;
  {
    struct std__allocator_std___Rb_tree_node_int__* base945 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t944 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base945);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v946) {
bb947: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this948;
  this948 = v946;
  struct std____new_allocator_std___Rb_tree_node_int__* t949 = this948;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v950) {
bb951: ;
  struct std__allocator_std___Rb_tree_node_int__* this952;
  this952 = v950;
  struct std__allocator_std___Rb_tree_node_int__* t953 = this952;
  struct std____new_allocator_std___Rb_tree_node_int__* base954 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t953 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base954);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v955) {
bb956: ;
  struct std___Rb_tree_key_compare_std__less_int__* this957;
  this957 = v955;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v958) {
bb959: ;
  struct std___Rb_tree_header* this960;
  this960 = v958;
  struct std___Rb_tree_header* t961 = this960;
  struct std___Rb_tree_node_base* c962 = ((void*)0);
  t961->_M_header._M_parent = c962;
  t961->_M_header._M_left = &t961->_M_header;
  t961->_M_header._M_right = &t961->_M_header;
  unsigned long c963 = 0;
  t961->_M_node_count = c963;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v964) {
bb965: ;
  struct std___Rb_tree_header* this966;
  this966 = v964;
  struct std___Rb_tree_header* t967 = this966;
  unsigned int c968 = 0;
  t967->_M_header._M_color = c968;
  std___Rb_tree_header___M_reset(t967);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v969) {
bb970: ;
  struct std__allocator_std___Rb_tree_node_int__* this971;
  this971 = v969;
  struct std__allocator_std___Rb_tree_node_int__* t972 = this971;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v973) {
bb974: ;
  struct std___Rb_tree_node_int_* this975;
  struct std___Rb_tree_node_int_* __retval976;
  this975 = v973;
  struct std___Rb_tree_node_int_* t977 = this975;
  __retval976 = t977;
  struct std___Rb_tree_node_int_* t978 = __retval976;
  return t978;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v979) {
bb980: ;
  struct std___Rb_tree_node_int_* __x981;
  struct std___Rb_tree_node_int_* __retval982;
  __x981 = v979;
  struct std___Rb_tree_node_int_* t983 = __x981;
  struct std___Rb_tree_node_base* base984 = (struct std___Rb_tree_node_base*)((char *)t983 + 0);
  struct std___Rb_tree_node_base* t985 = base984->_M_right;
  _Bool cast986 = (_Bool)t985;
  struct std___Rb_tree_node_int_* ternary987;
  if (cast986) {
    struct std___Rb_tree_node_int_* t988 = __x981;
    struct std___Rb_tree_node_base* base989 = (struct std___Rb_tree_node_base*)((char *)t988 + 0);
    struct std___Rb_tree_node_base* t990 = base989->_M_right;
    struct std___Rb_tree_node_int_* derived991 = (struct std___Rb_tree_node_int_*)((char *)t990 - 0);
    struct std___Rb_tree_node_int_* r992 = std___Rb_tree_node_int____M_node_ptr(derived991);
    ternary987 = (struct std___Rb_tree_node_int_*)r992;
  } else {
    struct std___Rb_tree_node_int_* c993 = ((void*)0);
    ternary987 = (struct std___Rb_tree_node_int_*)c993;
  }
  __retval982 = ternary987;
  struct std___Rb_tree_node_int_* t994 = __retval982;
  return t994;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v995) {
bb996: ;
  struct std___Rb_tree_node_int_* __x997;
  struct std___Rb_tree_node_int_* __retval998;
  __x997 = v995;
  struct std___Rb_tree_node_int_* t999 = __x997;
  struct std___Rb_tree_node_base* base1000 = (struct std___Rb_tree_node_base*)((char *)t999 + 0);
  struct std___Rb_tree_node_base* t1001 = base1000->_M_left;
  _Bool cast1002 = (_Bool)t1001;
  struct std___Rb_tree_node_int_* ternary1003;
  if (cast1002) {
    struct std___Rb_tree_node_int_* t1004 = __x997;
    struct std___Rb_tree_node_base* base1005 = (struct std___Rb_tree_node_base*)((char *)t1004 + 0);
    struct std___Rb_tree_node_base* t1006 = base1005->_M_left;
    struct std___Rb_tree_node_int_* derived1007 = (struct std___Rb_tree_node_int_*)((char *)t1006 - 0);
    struct std___Rb_tree_node_int_* r1008 = std___Rb_tree_node_int____M_node_ptr(derived1007);
    ternary1003 = (struct std___Rb_tree_node_int_*)r1008;
  } else {
    struct std___Rb_tree_node_int_* c1009 = ((void*)0);
    ternary1003 = (struct std___Rb_tree_node_int_*)c1009;
  }
  __retval998 = ternary1003;
  struct std___Rb_tree_node_int_* t1010 = __retval998;
  return t1010;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1011) {
bb1012: ;
  int* __location1013;
  __location1013 = v1011;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1014, int* v1015) {
bb1016: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1017;
  int* __p1018;
  __a1017 = v1014;
  __p1018 = v1015;
  int* t1019 = __p1018;
  void_std__destroy_at_int_(t1019);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1020) {
bb1021: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1022;
  struct std__allocator_std___Rb_tree_node_int__* __retval1023;
  this1022 = v1020;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1024 = this1022;
  struct std__allocator_std___Rb_tree_node_int__* base1025 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1024->_M_impl) + 0);
  __retval1023 = base1025;
  struct std__allocator_std___Rb_tree_node_int__* t1026 = __retval1023;
  return t1026;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1027) {
bb1028: ;
  struct __gnu_cxx____aligned_membuf_int_* this1029;
  void* __retval1030;
  this1029 = v1027;
  struct __gnu_cxx____aligned_membuf_int_* t1031 = this1029;
  void* cast1032 = (void*)&(t1031->_M_storage);
  __retval1030 = cast1032;
  void* t1033 = __retval1030;
  return t1033;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1034) {
bb1035: ;
  struct __gnu_cxx____aligned_membuf_int_* this1036;
  int* __retval1037;
  this1036 = v1034;
  struct __gnu_cxx____aligned_membuf_int_* t1038 = this1036;
  void* r1039 = __gnu_cxx____aligned_membuf_int____M_addr(t1038);
  int* cast1040 = (int*)r1039;
  __retval1037 = cast1040;
  int* t1041 = __retval1037;
  return t1041;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1042) {
bb1043: ;
  struct std___Rb_tree_node_int_* this1044;
  int* __retval1045;
  this1044 = v1042;
  struct std___Rb_tree_node_int_* t1046 = this1044;
  int* r1047 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1046->_M_storage);
  __retval1045 = r1047;
  int* t1048 = __retval1045;
  return t1048;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1049, struct std___Rb_tree_node_int_* v1050) {
bb1051: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1052;
  struct std___Rb_tree_node_int_* __p1053;
  this1052 = v1049;
  __p1053 = v1050;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1054 = this1052;
  struct std__allocator_std___Rb_tree_node_int__* r1055 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1054);
  struct std___Rb_tree_node_int_* t1056 = __p1053;
  int* r1057 = std___Rb_tree_node_int____M_valptr(t1056);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1055, r1057);
  struct std___Rb_tree_node_int_* t1058 = __p1053;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1059: ;
  _Bool __retval1060;
    _Bool c1061 = 0;
    __retval1060 = c1061;
    _Bool t1062 = __retval1060;
    return t1062;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1063, struct std___Rb_tree_node_int_* v1064, unsigned long v1065) {
bb1066: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1067;
  struct std___Rb_tree_node_int_* __p1068;
  unsigned long __n1069;
  this1067 = v1063;
  __p1068 = v1064;
  __n1069 = v1065;
  struct std____new_allocator_std___Rb_tree_node_int__* t1070 = this1067;
    unsigned long c1071 = 8;
    unsigned long c1072 = 16;
    _Bool c1073 = ((c1071 > c1072)) ? 1 : 0;
    if (c1073) {
      struct std___Rb_tree_node_int_* t1074 = __p1068;
      void* cast1075 = (void*)t1074;
      unsigned long t1076 = __n1069;
      unsigned long c1077 = 40;
      unsigned long b1078 = t1076 * c1077;
      unsigned long c1079 = 8;
      operator_delete_3(cast1075, b1078, c1079);
      return;
    }
  struct std___Rb_tree_node_int_* t1080 = __p1068;
  void* cast1081 = (void*)t1080;
  unsigned long t1082 = __n1069;
  unsigned long c1083 = 40;
  unsigned long b1084 = t1082 * c1083;
  operator_delete_2(cast1081, b1084);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1085, struct std___Rb_tree_node_int_* v1086, unsigned long v1087) {
bb1088: ;
  struct std__allocator_std___Rb_tree_node_int__* this1089;
  struct std___Rb_tree_node_int_* __p1090;
  unsigned long __n1091;
  this1089 = v1085;
  __p1090 = v1086;
  __n1091 = v1087;
  struct std__allocator_std___Rb_tree_node_int__* t1092 = this1089;
    _Bool r1093 = std____is_constant_evaluated();
    if (r1093) {
      struct std___Rb_tree_node_int_* t1094 = __p1090;
      void* cast1095 = (void*)t1094;
      operator_delete(cast1095);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1096 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1092 + 0);
  struct std___Rb_tree_node_int_* t1097 = __p1090;
  unsigned long t1098 = __n1091;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1096, t1097, t1098);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1099, struct std___Rb_tree_node_int_* v1100, unsigned long v1101) {
bb1102: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1103;
  struct std___Rb_tree_node_int_* __p1104;
  unsigned long __n1105;
  __a1103 = v1099;
  __p1104 = v1100;
  __n1105 = v1101;
  struct std__allocator_std___Rb_tree_node_int__* t1106 = __a1103;
  struct std___Rb_tree_node_int_* t1107 = __p1104;
  unsigned long t1108 = __n1105;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1106, t1107, t1108);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1109, struct std___Rb_tree_node_int_* v1110) {
bb1111: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1112;
  struct std___Rb_tree_node_int_* __p1113;
  this1112 = v1109;
  __p1113 = v1110;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1114 = this1112;
  struct std__allocator_std___Rb_tree_node_int__* r1115 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1114);
  struct std___Rb_tree_node_int_* t1116 = __p1113;
  unsigned long c1117 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1115, t1116, c1117);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1118, struct std___Rb_tree_node_int_* v1119) {
bb1120: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1121;
  struct std___Rb_tree_node_int_* __p1122;
  this1121 = v1118;
  __p1122 = v1119;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1123 = this1121;
  struct std___Rb_tree_node_int_* t1124 = __p1122;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1123, t1124);
  struct std___Rb_tree_node_int_* t1125 = __p1122;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1123, t1125);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1126, struct std___Rb_tree_node_int_* v1127) {
bb1128: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1129;
  struct std___Rb_tree_node_int_* __x1130;
  this1129 = v1126;
  __x1130 = v1127;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1131 = this1129;
    while (1) {
      struct std___Rb_tree_node_int_* t1132 = __x1130;
      _Bool cast1133 = (_Bool)t1132;
      if (!cast1133) break;
        struct std___Rb_tree_node_int_* __y1134;
        struct std___Rb_tree_node_int_* t1135 = __x1130;
        struct std___Rb_tree_node_int_* r1136 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1135);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1131, r1136);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1137 = __x1130;
        struct std___Rb_tree_node_int_* r1138 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1137);
        if (__cir_exc_active) {
          return;
        }
        __y1134 = r1138;
        struct std___Rb_tree_node_int_* t1139 = __x1130;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1131, t1139);
        struct std___Rb_tree_node_int_* t1140 = __y1134;
        __x1130 = t1140;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1141) {
bb1142: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1143;
  struct std___Rb_tree_node_int_* __retval1144;
  struct std___Rb_tree_node_base* __begin1145;
  this1143 = v1141;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1146 = this1143;
  struct std___Rb_tree_header* base1147 = (struct std___Rb_tree_header*)((char *)&(t1146->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1148 = base1147->_M_header._M_parent;
  __begin1145 = t1148;
  struct std___Rb_tree_node_base* t1149 = __begin1145;
  _Bool cast1150 = (_Bool)t1149;
  struct std___Rb_tree_node_int_* ternary1151;
  if (cast1150) {
    struct std___Rb_tree_node_base* t1152 = __begin1145;
    struct std___Rb_tree_node_int_* derived1153 = (struct std___Rb_tree_node_int_*)((char *)t1152 - 0);
    struct std___Rb_tree_node_int_* r1154 = std___Rb_tree_node_int____M_node_ptr(derived1153);
    ternary1151 = (struct std___Rb_tree_node_int_*)r1154;
  } else {
    struct std___Rb_tree_node_int_* c1155 = ((void*)0);
    ternary1151 = (struct std___Rb_tree_node_int_*)c1155;
  }
  __retval1144 = ternary1151;
  struct std___Rb_tree_node_int_* t1156 = __retval1144;
  return t1156;
}

