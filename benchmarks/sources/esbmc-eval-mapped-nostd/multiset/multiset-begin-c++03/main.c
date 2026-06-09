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

int __const_main_mySecondInts[5] = {13, 23, 42, 65, 75};
int __const_main_myints[5] = {75, 23, 65, 42, 13};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 5";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-begin-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
char _str_4[23] = "*it == mySecondInts[i]";
void std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v11) {
bb12:
  struct std__multiset_int__std__less_int___std__allocator_int__* this13;
  unsigned long __retval14;
  this13 = v11;
  struct std__multiset_int__std__less_int___std__allocator_int__* t15 = this13;
  unsigned long r16 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t15->_M_t);
  __retval14 = r16;
  unsigned long t17 = __retval14;
  return t17;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v18) {
bb19:
  struct std___Rb_tree_const_iterator_int_* this20;
  this20 = v18;
  struct std___Rb_tree_const_iterator_int_* t21 = this20;
  struct std___Rb_tree_node_base* c22 = ((void*)0);
  t21->_M_node = c22;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v23, int v24) {
bb25:
  int __a26;
  int __b27;
  int __retval28;
  __a26 = v23;
  __b27 = v24;
  int t29 = __a26;
  int t30 = __b27;
  int b31 = t29 | t30;
  __retval28 = b31;
  int t32 = __retval28;
  return t32;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v33) {
bb34:
  struct std__basic_ios_char__std__char_traits_char__* this35;
  int __retval36;
  this35 = v33;
  struct std__basic_ios_char__std__char_traits_char__* t37 = this35;
  struct std__ios_base* base38 = (struct std__ios_base*)((char *)t37 + 0);
  int t39 = base38->_M_streambuf_state;
  __retval36 = t39;
  int t40 = __retval36;
  return t40;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v41, int v42) {
bb43:
  struct std__basic_ios_char__std__char_traits_char__* this44;
  int __state45;
  this44 = v41;
  __state45 = v42;
  struct std__basic_ios_char__std__char_traits_char__* t46 = this44;
  int r47 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t46);
  if (__cir_exc_active) {
    return;
  }
  int t48 = __state45;
  int r49 = std__operator_(r47, t48);
  std__basic_ios_char__std__char_traits_char_____clear(t46, r49);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v50, char* v51) {
bb52:
  char* __c153;
  char* __c254;
  _Bool __retval55;
  __c153 = v50;
  __c254 = v51;
  char* t56 = __c153;
  char t57 = *t56;
  int cast58 = (int)t57;
  char* t59 = __c254;
  char t60 = *t59;
  int cast61 = (int)t60;
  _Bool c62 = ((cast58 == cast61)) ? 1 : 0;
  __retval55 = c62;
  _Bool t63 = __retval55;
  return t63;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v64) {
bb65:
  char* __p66;
  unsigned long __retval67;
  unsigned long __i68;
  __p66 = v64;
  unsigned long c69 = 0;
  __i68 = c69;
    char ref_tmp070;
    while (1) {
      unsigned long t71 = __i68;
      char* t72 = __p66;
      char* ptr73 = &(t72)[t71];
      char c74 = 0;
      ref_tmp070 = c74;
      _Bool r75 = __gnu_cxx__char_traits_char___eq(ptr73, &ref_tmp070);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u76 = !r75;
      if (!u76) break;
      unsigned long t77 = __i68;
      unsigned long u78 = t77 + 1;
      __i68 = u78;
    }
  unsigned long t79 = __i68;
  __retval67 = t79;
  unsigned long t80 = __retval67;
  return t80;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v81) {
bb82:
  char* __s83;
  unsigned long __retval84;
  __s83 = v81;
    _Bool r85 = std____is_constant_evaluated();
    if (r85) {
      char* t86 = __s83;
      unsigned long r87 = __gnu_cxx__char_traits_char___length(t86);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval84 = r87;
      unsigned long t88 = __retval84;
      return t88;
    }
  char* t89 = __s83;
  unsigned long r90 = strlen(t89);
  __retval84 = r90;
  unsigned long t91 = __retval84;
  return t91;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v92, char* v93) {
bb94:
  struct std__basic_ostream_char__std__char_traits_char__* __out95;
  char* __s96;
  struct std__basic_ostream_char__std__char_traits_char__* __retval97;
  __out95 = v92;
  __s96 = v93;
    char* t98 = __s96;
    _Bool cast99 = (_Bool)t98;
    _Bool u100 = !cast99;
    if (u100) {
      struct std__basic_ostream_char__std__char_traits_char__* t101 = __out95;
      void** v102 = (void**)t101;
      void* v103 = *((void**)v102);
      unsigned char* cast104 = (unsigned char*)v103;
      long c105 = -24;
      unsigned char* ptr106 = &(cast104)[c105];
      long* cast107 = (long*)ptr106;
      long t108 = *cast107;
      unsigned char* cast109 = (unsigned char*)t101;
      unsigned char* ptr110 = &(cast109)[t108];
      struct std__basic_ostream_char__std__char_traits_char__* cast111 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr110;
      struct std__basic_ios_char__std__char_traits_char__* cast112 = (struct std__basic_ios_char__std__char_traits_char__*)cast111;
      int t113 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast112, t113);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t114 = __out95;
      char* t115 = __s96;
      char* t116 = __s96;
      unsigned long r117 = std__char_traits_char___length(t116);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast118 = (long)r117;
      struct std__basic_ostream_char__std__char_traits_char__* r119 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t114, t115, cast118);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t120 = __out95;
  __retval97 = t120;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __retval97;
  return t121;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v122, void* v123) {
bb124:
  struct std__basic_ostream_char__std__char_traits_char__* this125;
  void* __pf126;
  struct std__basic_ostream_char__std__char_traits_char__* __retval127;
  this125 = v122;
  __pf126 = v123;
  struct std__basic_ostream_char__std__char_traits_char__* t128 = this125;
  void* t129 = __pf126;
  struct std__basic_ostream_char__std__char_traits_char__* r130 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t129)(t128);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval127 = r130;
  struct std__basic_ostream_char__std__char_traits_char__* t131 = __retval127;
  return t131;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v132) {
bb133:
  struct std__basic_ostream_char__std__char_traits_char__* __os134;
  struct std__basic_ostream_char__std__char_traits_char__* __retval135;
  __os134 = v132;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = __os134;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__flush(t136);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval135 = r137;
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __retval135;
  return t138;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v139) {
bb140:
  struct std__ctype_char_* __f141;
  struct std__ctype_char_* __retval142;
  __f141 = v139;
    struct std__ctype_char_* t143 = __f141;
    _Bool cast144 = (_Bool)t143;
    _Bool u145 = !cast144;
    if (u145) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t146 = __f141;
  __retval142 = t146;
  struct std__ctype_char_* t147 = __retval142;
  return t147;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v148, char v149) {
bb150:
  struct std__ctype_char_* this151;
  char __c152;
  char __retval153;
  this151 = v148;
  __c152 = v149;
  struct std__ctype_char_* t154 = this151;
    char t155 = t154->_M_widen_ok;
    _Bool cast156 = (_Bool)t155;
    if (cast156) {
      char t157 = __c152;
      unsigned char cast158 = (unsigned char)t157;
      unsigned long cast159 = (unsigned long)cast158;
      char t160 = t154->_M_widen[cast159];
      __retval153 = t160;
      char t161 = __retval153;
      return t161;
    }
  std__ctype_char____M_widen_init___const(t154);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t162 = __c152;
  void** v163 = (void**)t154;
  void* v164 = *((void**)v163);
  char vcall167 = (char)__VERIFIER_virtual_call_char_char(t154, 6, t162);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval153 = vcall167;
  char t168 = __retval153;
  return t168;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v169, char v170) {
bb171:
  struct std__basic_ios_char__std__char_traits_char__* this172;
  char __c173;
  char __retval174;
  this172 = v169;
  __c173 = v170;
  struct std__basic_ios_char__std__char_traits_char__* t175 = this172;
  struct std__ctype_char_* t176 = t175->_M_ctype;
  struct std__ctype_char_* r177 = std__ctype_char__const__std____check_facet_std__ctype_char___(t176);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t178 = __c173;
  char r179 = std__ctype_char___widen_char__const(r177, t178);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval174 = r179;
  char t180 = __retval174;
  return t180;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v181) {
bb182:
  struct std__basic_ostream_char__std__char_traits_char__* __os183;
  struct std__basic_ostream_char__std__char_traits_char__* __retval184;
  __os183 = v181;
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __os183;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __os183;
  void** v187 = (void**)t186;
  void* v188 = *((void**)v187);
  unsigned char* cast189 = (unsigned char*)v188;
  long c190 = -24;
  unsigned char* ptr191 = &(cast189)[c190];
  long* cast192 = (long*)ptr191;
  long t193 = *cast192;
  unsigned char* cast194 = (unsigned char*)t186;
  unsigned char* ptr195 = &(cast194)[t193];
  struct std__basic_ostream_char__std__char_traits_char__* cast196 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr195;
  struct std__basic_ios_char__std__char_traits_char__* cast197 = (struct std__basic_ios_char__std__char_traits_char__*)cast196;
  char c198 = 10;
  char r199 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast197, c198);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r200 = std__ostream__put(t185, r199);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r200);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval184 = r201;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __retval184;
  return t202;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v203, struct std___Rb_tree_node_base* v204) {
bb205:
  struct std___Rb_tree_const_iterator_int_* this206;
  struct std___Rb_tree_node_base* __x207;
  this206 = v203;
  __x207 = v204;
  struct std___Rb_tree_const_iterator_int_* t208 = this206;
  struct std___Rb_tree_node_base* t209 = __x207;
  t208->_M_node = t209;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v210) {
bb211:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this212;
  struct std___Rb_tree_const_iterator_int_ __retval213;
  this212 = v210;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t214 = this212;
  struct std___Rb_tree_header* base215 = (struct std___Rb_tree_header*)((char *)&(t214->_M_impl) + 8);
  struct std___Rb_tree_node_base* t216 = base215->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval213, t216);
  struct std___Rb_tree_const_iterator_int_ t217 = __retval213;
  return t217;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v218) {
bb219:
  struct std__multiset_int__std__less_int___std__allocator_int__* this220;
  struct std___Rb_tree_const_iterator_int_ __retval221;
  this220 = v218;
  struct std__multiset_int__std__less_int___std__allocator_int__* t222 = this220;
  struct std___Rb_tree_const_iterator_int_ r223 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t222->_M_t);
  __retval221 = r223;
  struct std___Rb_tree_const_iterator_int_ t224 = __retval221;
  return t224;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v225, struct std___Rb_tree_const_iterator_int_* v226) {
bb227:
  struct std___Rb_tree_const_iterator_int_* this228;
  struct std___Rb_tree_const_iterator_int_* unnamed229;
  struct std___Rb_tree_const_iterator_int_* __retval230;
  this228 = v225;
  unnamed229 = v226;
  struct std___Rb_tree_const_iterator_int_* t231 = this228;
  struct std___Rb_tree_const_iterator_int_* t232 = unnamed229;
  struct std___Rb_tree_node_base* t233 = t232->_M_node;
  t231->_M_node = t233;
  __retval230 = t231;
  struct std___Rb_tree_const_iterator_int_* t234 = __retval230;
  return t234;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v235, struct std___Rb_tree_const_iterator_int_* v236) {
bb237:
  struct std___Rb_tree_const_iterator_int_* __x238;
  struct std___Rb_tree_const_iterator_int_* __y239;
  _Bool __retval240;
  __x238 = v235;
  __y239 = v236;
  struct std___Rb_tree_const_iterator_int_* t241 = __x238;
  struct std___Rb_tree_node_base* t242 = t241->_M_node;
  struct std___Rb_tree_const_iterator_int_* t243 = __y239;
  struct std___Rb_tree_node_base* t244 = t243->_M_node;
  _Bool c245 = ((t242 == t244)) ? 1 : 0;
  __retval240 = c245;
  _Bool t246 = __retval240;
  return t246;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v247) {
bb248:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this249;
  struct std___Rb_tree_const_iterator_int_ __retval250;
  this249 = v247;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t251 = this249;
  struct std___Rb_tree_node_base* r252 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t251);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval250, r252);
  struct std___Rb_tree_const_iterator_int_ t253 = __retval250;
  return t253;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v254) {
bb255:
  struct std__multiset_int__std__less_int___std__allocator_int__* this256;
  struct std___Rb_tree_const_iterator_int_ __retval257;
  this256 = v254;
  struct std__multiset_int__std__less_int___std__allocator_int__* t258 = this256;
  struct std___Rb_tree_const_iterator_int_ r259 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t258->_M_t);
  __retval257 = r259;
  struct std___Rb_tree_const_iterator_int_ t260 = __retval257;
  return t260;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v261) {
bb262:
  struct std___Rb_tree_const_iterator_int_* this263;
  int* __retval264;
  this263 = v261;
  struct std___Rb_tree_const_iterator_int_* t265 = this263;
  struct std___Rb_tree_node_base* t266 = t265->_M_node;
  struct std___Rb_tree_node_int_* derived267 = ((t266) ? (struct std___Rb_tree_node_int_*)((char *)t266 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r268 = std___Rb_tree_node_int____M_valptr___const(derived267);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval264 = r268;
  int* t269 = __retval264;
  return t269;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v270, int v271) {
bb272:
  struct std___Rb_tree_const_iterator_int_* this273;
  int unnamed274;
  struct std___Rb_tree_const_iterator_int_ __retval275;
  this273 = v270;
  unnamed274 = v271;
  struct std___Rb_tree_const_iterator_int_* t276 = this273;
  __retval275 = *t276; // copy
  struct std___Rb_tree_node_base* t277 = t276->_M_node;
  struct std___Rb_tree_node_base* r278 = std___Rb_tree_increment(t277);
  t276->_M_node = r278;
  struct std___Rb_tree_const_iterator_int_ t279 = __retval275;
  return t279;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v280) {
bb281:
  struct std__multiset_int__std__less_int___std__allocator_int__* this282;
  this282 = v280;
  struct std__multiset_int__std__less_int___std__allocator_int__* t283 = this282;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t283->_M_t);
  }
  return;
}

// function: main
int main() {
bb284:
  int __retval285;
  int myints286[5];
  int mySecondInts287[5];
  int i288;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset289;
  struct std___Rb_tree_const_iterator_int_ it290;
  int c291 = 0;
  __retval285 = c291;
  // array copy
  __builtin_memcpy(myints286, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(mySecondInts287, __const_main_mySecondInts, (unsigned long)5 * sizeof(__const_main_mySecondInts[0]));
  int* cast292 = (int*)&(myints286);
  int* cast293 = (int*)&(myints286);
  int c294 = 5;
  int* ptr295 = &(cast293)[c294];
  std__multiset_int__std__less_int___std__allocator_int_____multiset_int__(&myset289, cast292, ptr295);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    unsigned long r296 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset289);
    unsigned long c297 = 5;
    _Bool c298 = ((r296 == c297)) ? 1 : 0;
    if (c298) {
    } else {
      char* cast299 = (char*)&(_str);
      char* c300 = _str_1;
      unsigned int c301 = 19;
      char* cast302 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast299, c300, c301, cast302);
    }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it290);
    char* cast303 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r304 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast303);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset289);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r305 = std__ostream__operator___std__ostream_____(r304, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset289);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp0306;
      struct std___Rb_tree_const_iterator_int_ ref_tmp1307;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0308;
      struct std___Rb_tree_const_iterator_int_ r309 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset289);
      ref_tmp0306 = r309;
      struct std___Rb_tree_const_iterator_int_* r310 = std___Rb_tree_const_iterator_int___operator_(&it290, &ref_tmp0306);
      int c311 = 0;
      i288 = c311;
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r313 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset289);
        ref_tmp1307 = r313;
        _Bool r314 = std__operator__(&it290, &ref_tmp1307);
        _Bool u315 = !r314;
        if (!u315) break;
          char* cast316 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast316);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset289);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r318 = std___Rb_tree_const_iterator_int___operator____const(&it290);
          int t319 = *r318;
          struct std__basic_ostream_char__std__char_traits_char__* r320 = std__ostream__operator__(r317, t319);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset289);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r321 = std___Rb_tree_const_iterator_int___operator____const(&it290);
          int t322 = *r321;
          int t323 = i288;
          long cast324 = (long)t323;
          int t325 = mySecondInts287[cast324];
          _Bool c326 = ((t322 == t325)) ? 1 : 0;
          if (c326) {
          } else {
            char* cast327 = (char*)&(_str_4);
            char* c328 = _str_1;
            unsigned int c329 = 25;
            char* cast330 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast327, c328, c329, cast330);
          }
      for_step312: ;
        int c331 = 0;
        struct std___Rb_tree_const_iterator_int_ r332 = std___Rb_tree_const_iterator_int___operator__(&it290, c331);
        agg_tmp0308 = r332;
        int t333 = i288;
        int u334 = t333 + 1;
        i288 = u334;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r335 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset289);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c336 = 0;
    __retval285 = c336;
    int t337 = __retval285;
    int ret_val338 = t337;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset289);
    }
    return ret_val338;
  int t339 = __retval285;
  return t339;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v340) {
bb341:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this342;
  this342 = v340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t343 = this342;
    struct std___Rb_tree_node_int_* r344 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t343);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t343, r344);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t343->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t343->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v345) {
bb346:
  struct std___Rb_tree_node_int_* this347;
  struct std___Rb_tree_node_int_* __retval348;
  this347 = v345;
  struct std___Rb_tree_node_int_* t349 = this347;
  __retval348 = t349;
  struct std___Rb_tree_node_int_* t350 = __retval348;
  return t350;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v351) {
bb352:
  struct std___Rb_tree_node_int_* __x353;
  struct std___Rb_tree_node_int_* __retval354;
  __x353 = v351;
  struct std___Rb_tree_node_int_* t355 = __x353;
  struct std___Rb_tree_node_base* base356 = (struct std___Rb_tree_node_base*)((char *)t355 + 0);
  struct std___Rb_tree_node_base* t357 = base356->_M_right;
  _Bool cast358 = (_Bool)t357;
  struct std___Rb_tree_node_int_* ternary359;
  if (cast358) {
    struct std___Rb_tree_node_int_* t360 = __x353;
    struct std___Rb_tree_node_base* base361 = (struct std___Rb_tree_node_base*)((char *)t360 + 0);
    struct std___Rb_tree_node_base* t362 = base361->_M_right;
    struct std___Rb_tree_node_int_* derived363 = (struct std___Rb_tree_node_int_*)((char *)t362 - 0);
    struct std___Rb_tree_node_int_* r364 = std___Rb_tree_node_int____M_node_ptr(derived363);
    ternary359 = (struct std___Rb_tree_node_int_*)r364;
  } else {
    struct std___Rb_tree_node_int_* c365 = ((void*)0);
    ternary359 = (struct std___Rb_tree_node_int_*)c365;
  }
  __retval354 = ternary359;
  struct std___Rb_tree_node_int_* t366 = __retval354;
  return t366;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v367) {
bb368:
  struct std___Rb_tree_node_int_* __x369;
  struct std___Rb_tree_node_int_* __retval370;
  __x369 = v367;
  struct std___Rb_tree_node_int_* t371 = __x369;
  struct std___Rb_tree_node_base* base372 = (struct std___Rb_tree_node_base*)((char *)t371 + 0);
  struct std___Rb_tree_node_base* t373 = base372->_M_left;
  _Bool cast374 = (_Bool)t373;
  struct std___Rb_tree_node_int_* ternary375;
  if (cast374) {
    struct std___Rb_tree_node_int_* t376 = __x369;
    struct std___Rb_tree_node_base* base377 = (struct std___Rb_tree_node_base*)((char *)t376 + 0);
    struct std___Rb_tree_node_base* t378 = base377->_M_left;
    struct std___Rb_tree_node_int_* derived379 = (struct std___Rb_tree_node_int_*)((char *)t378 - 0);
    struct std___Rb_tree_node_int_* r380 = std___Rb_tree_node_int____M_node_ptr(derived379);
    ternary375 = (struct std___Rb_tree_node_int_*)r380;
  } else {
    struct std___Rb_tree_node_int_* c381 = ((void*)0);
    ternary375 = (struct std___Rb_tree_node_int_*)c381;
  }
  __retval370 = ternary375;
  struct std___Rb_tree_node_int_* t382 = __retval370;
  return t382;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v383) {
bb384:
  int* __location385;
  __location385 = v383;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v386, int* v387) {
bb388:
  struct std__allocator_std___Rb_tree_node_int__* __a389;
  int* __p390;
  __a389 = v386;
  __p390 = v387;
  int* t391 = __p390;
  void_std__destroy_at_int_(t391);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v392) {
bb393:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this394;
  struct std__allocator_std___Rb_tree_node_int__* __retval395;
  this394 = v392;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t396 = this394;
  struct std__allocator_std___Rb_tree_node_int__* base397 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t396->_M_impl) + 0);
  __retval395 = base397;
  struct std__allocator_std___Rb_tree_node_int__* t398 = __retval395;
  return t398;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v399) {
bb400:
  struct __gnu_cxx____aligned_membuf_int_* this401;
  void* __retval402;
  this401 = v399;
  struct __gnu_cxx____aligned_membuf_int_* t403 = this401;
  void* cast404 = (void*)&(t403->_M_storage);
  __retval402 = cast404;
  void* t405 = __retval402;
  return t405;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v406) {
bb407:
  struct __gnu_cxx____aligned_membuf_int_* this408;
  int* __retval409;
  this408 = v406;
  struct __gnu_cxx____aligned_membuf_int_* t410 = this408;
  void* r411 = __gnu_cxx____aligned_membuf_int____M_addr(t410);
  int* cast412 = (int*)r411;
  __retval409 = cast412;
  int* t413 = __retval409;
  return t413;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v414) {
bb415:
  struct std___Rb_tree_node_int_* this416;
  int* __retval417;
  this416 = v414;
  struct std___Rb_tree_node_int_* t418 = this416;
  int* r419 = __gnu_cxx____aligned_membuf_int____M_ptr(&t418->_M_storage);
  __retval417 = r419;
  int* t420 = __retval417;
  return t420;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v421, struct std___Rb_tree_node_int_* v422) {
bb423:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this424;
  struct std___Rb_tree_node_int_* __p425;
  this424 = v421;
  __p425 = v422;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t426 = this424;
  struct std__allocator_std___Rb_tree_node_int__* r427 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t426);
  struct std___Rb_tree_node_int_* t428 = __p425;
  int* r429 = std___Rb_tree_node_int____M_valptr(t428);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r427, r429);
  struct std___Rb_tree_node_int_* t430 = __p425;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb431:
  _Bool __retval432;
    _Bool c433 = 0;
    __retval432 = c433;
    _Bool t434 = __retval432;
    return t434;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v435, struct std___Rb_tree_node_int_* v436, unsigned long v437) {
bb438:
  struct std____new_allocator_std___Rb_tree_node_int__* this439;
  struct std___Rb_tree_node_int_* __p440;
  unsigned long __n441;
  this439 = v435;
  __p440 = v436;
  __n441 = v437;
  struct std____new_allocator_std___Rb_tree_node_int__* t442 = this439;
    unsigned long c443 = 8;
    unsigned long c444 = 16;
    _Bool c445 = ((c443 > c444)) ? 1 : 0;
    if (c445) {
      struct std___Rb_tree_node_int_* t446 = __p440;
      void* cast447 = (void*)t446;
      unsigned long t448 = __n441;
      unsigned long c449 = 40;
      unsigned long b450 = t448 * c449;
      unsigned long c451 = 8;
      operator_delete_3(cast447, b450, c451);
      return;
    }
  struct std___Rb_tree_node_int_* t452 = __p440;
  void* cast453 = (void*)t452;
  unsigned long t454 = __n441;
  unsigned long c455 = 40;
  unsigned long b456 = t454 * c455;
  operator_delete_2(cast453, b456);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v457, struct std___Rb_tree_node_int_* v458, unsigned long v459) {
bb460:
  struct std__allocator_std___Rb_tree_node_int__* this461;
  struct std___Rb_tree_node_int_* __p462;
  unsigned long __n463;
  this461 = v457;
  __p462 = v458;
  __n463 = v459;
  struct std__allocator_std___Rb_tree_node_int__* t464 = this461;
    _Bool r465 = std____is_constant_evaluated();
    if (r465) {
      struct std___Rb_tree_node_int_* t466 = __p462;
      void* cast467 = (void*)t466;
      operator_delete(cast467);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base468 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t464 + 0);
  struct std___Rb_tree_node_int_* t469 = __p462;
  unsigned long t470 = __n463;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base468, t469, t470);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v471, struct std___Rb_tree_node_int_* v472, unsigned long v473) {
bb474:
  struct std__allocator_std___Rb_tree_node_int__* __a475;
  struct std___Rb_tree_node_int_* __p476;
  unsigned long __n477;
  __a475 = v471;
  __p476 = v472;
  __n477 = v473;
  struct std__allocator_std___Rb_tree_node_int__* t478 = __a475;
  struct std___Rb_tree_node_int_* t479 = __p476;
  unsigned long t480 = __n477;
  std__allocator_std___Rb_tree_node_int_____deallocate(t478, t479, t480);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v481, struct std___Rb_tree_node_int_* v482) {
bb483:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this484;
  struct std___Rb_tree_node_int_* __p485;
  this484 = v481;
  __p485 = v482;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t486 = this484;
  struct std__allocator_std___Rb_tree_node_int__* r487 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t486);
  struct std___Rb_tree_node_int_* t488 = __p485;
  unsigned long c489 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r487, t488, c489);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v490, struct std___Rb_tree_node_int_* v491) {
bb492:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this493;
  struct std___Rb_tree_node_int_* __p494;
  this493 = v490;
  __p494 = v491;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t495 = this493;
  struct std___Rb_tree_node_int_* t496 = __p494;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t495, t496);
  struct std___Rb_tree_node_int_* t497 = __p494;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t495, t497);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v498, struct std___Rb_tree_node_int_* v499) {
bb500:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this501;
  struct std___Rb_tree_node_int_* __x502;
  this501 = v498;
  __x502 = v499;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t503 = this501;
    while (1) {
      struct std___Rb_tree_node_int_* t504 = __x502;
      _Bool cast505 = (_Bool)t504;
      if (!cast505) break;
        struct std___Rb_tree_node_int_* __y506;
        struct std___Rb_tree_node_int_* t507 = __x502;
        struct std___Rb_tree_node_int_* r508 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t507);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t503, r508);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t509 = __x502;
        struct std___Rb_tree_node_int_* r510 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t509);
        if (__cir_exc_active) {
          return;
        }
        __y506 = r510;
        struct std___Rb_tree_node_int_* t511 = __x502;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t503, t511);
        struct std___Rb_tree_node_int_* t512 = __y506;
        __x502 = t512;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v513) {
bb514:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this515;
  struct std___Rb_tree_node_int_* __retval516;
  struct std___Rb_tree_node_base* __begin517;
  this515 = v513;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t518 = this515;
  struct std___Rb_tree_header* base519 = (struct std___Rb_tree_header*)((char *)&(t518->_M_impl) + 8);
  struct std___Rb_tree_node_base* t520 = base519->_M_header._M_parent;
  __begin517 = t520;
  struct std___Rb_tree_node_base* t521 = __begin517;
  _Bool cast522 = (_Bool)t521;
  struct std___Rb_tree_node_int_* ternary523;
  if (cast522) {
    struct std___Rb_tree_node_base* t524 = __begin517;
    struct std___Rb_tree_node_int_* derived525 = (struct std___Rb_tree_node_int_*)((char *)t524 - 0);
    struct std___Rb_tree_node_int_* r526 = std___Rb_tree_node_int____M_node_ptr(derived525);
    ternary523 = (struct std___Rb_tree_node_int_*)r526;
  } else {
    struct std___Rb_tree_node_int_* c527 = ((void*)0);
    ternary523 = (struct std___Rb_tree_node_int_*)c527;
  }
  __retval516 = ternary523;
  struct std___Rb_tree_node_int_* t528 = __retval516;
  return t528;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v529) {
bb530:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this531;
  this531 = v529;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t532 = this531;
  {
    struct std__allocator_std___Rb_tree_node_int__* base533 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t532 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base533);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v534) {
bb535:
  struct std__allocator_std___Rb_tree_node_int__* this536;
  this536 = v534;
  struct std__allocator_std___Rb_tree_node_int__* t537 = this536;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v538) {
bb539:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this540;
  this540 = v538;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t541 = this540;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t541->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v542, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v543) {
bb544:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this545;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t546;
  this545 = v542;
  __t546 = v543;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t547 = this545;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t548 = __t546;
  t547->_M_t = t548;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v549) {
bb550:
  struct std___Rb_tree_node_base* this551;
  struct std___Rb_tree_node_base* __retval552;
  this551 = v549;
  struct std___Rb_tree_node_base* t553 = this551;
  __retval552 = t553;
  struct std___Rb_tree_node_base* t554 = __retval552;
  return t554;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v555) {
bb556:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this557;
  struct std___Rb_tree_node_base* __retval558;
  this557 = v555;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t559 = this557;
  struct std___Rb_tree_header* base560 = (struct std___Rb_tree_header*)((char *)&(t559->_M_impl) + 8);
  struct std___Rb_tree_node_base* r561 = std___Rb_tree_node_base___M_base_ptr___const(&base560->_M_header);
  __retval558 = r561;
  struct std___Rb_tree_node_base* t562 = __retval558;
  return t562;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v563) {
bb564:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this565;
  unsigned long __retval566;
  this565 = v563;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t567 = this565;
  struct std___Rb_tree_header* base568 = (struct std___Rb_tree_header*)((char *)&(t567->_M_impl) + 8);
  unsigned long t569 = base568->_M_node_count;
  __retval566 = t569;
  unsigned long t570 = __retval566;
  return t570;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v571, int* v572, int* v573) {
bb574:
  struct std__less_int_* this575;
  int* __x576;
  int* __y577;
  _Bool __retval578;
  this575 = v571;
  __x576 = v572;
  __y577 = v573;
  struct std__less_int_* t579 = this575;
  int* t580 = __x576;
  int t581 = *t580;
  int* t582 = __y577;
  int t583 = *t582;
  _Bool c584 = ((t581 < t583)) ? 1 : 0;
  __retval578 = c584;
  _Bool t585 = __retval578;
  return t585;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v586, int* v587) {
bb588:
  struct std___Identity_int_* this589;
  int* __x590;
  int* __retval591;
  this589 = v586;
  __x590 = v587;
  struct std___Identity_int_* t592 = this589;
  int* t593 = __x590;
  __retval591 = t593;
  int* t594 = __retval591;
  return t594;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v595) {
bb596:
  struct __gnu_cxx____aligned_membuf_int_* this597;
  void* __retval598;
  this597 = v595;
  struct __gnu_cxx____aligned_membuf_int_* t599 = this597;
  void* cast600 = (void*)&(t599->_M_storage);
  __retval598 = cast600;
  void* t601 = __retval598;
  return t601;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v602) {
bb603:
  struct __gnu_cxx____aligned_membuf_int_* this604;
  int* __retval605;
  this604 = v602;
  struct __gnu_cxx____aligned_membuf_int_* t606 = this604;
  void* r607 = __gnu_cxx____aligned_membuf_int____M_addr___const(t606);
  int* cast608 = (int*)r607;
  __retval605 = cast608;
  int* t609 = __retval605;
  return t609;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v610) {
bb611:
  struct std___Rb_tree_node_int_* this612;
  int* __retval613;
  this612 = v610;
  struct std___Rb_tree_node_int_* t614 = this612;
  int* r615 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t614->_M_storage);
  __retval613 = r615;
  int* t616 = __retval613;
  return t616;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v617) {
bb618:
  struct std___Rb_tree_node_int_* __node619;
  int* __retval620;
  struct std___Identity_int_ ref_tmp0621;
  __node619 = v617;
  struct std___Rb_tree_node_int_* t622 = __node619;
  int* r623 = std___Rb_tree_node_int____M_valptr___const(t622);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r624 = std___Identity_int___operator___int_const___const(&ref_tmp0621, r623);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval620 = r624;
  int* t625 = __retval620;
  return t625;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v626) {
bb627:
  struct std___Rb_tree_node_base* __x628;
  int* __retval629;
  __x628 = v626;
  struct std___Rb_tree_node_base* t630 = __x628;
  struct std___Rb_tree_node_int_* derived631 = (struct std___Rb_tree_node_int_*)((char *)t630 - 0);
  int* r632 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived631);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval629 = r632;
  int* t633 = __retval629;
  return t633;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v634) {
bb635:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this636;
  struct std___Rb_tree_node_base** __retval637;
  this636 = v634;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t638 = this636;
  struct std___Rb_tree_header* base639 = (struct std___Rb_tree_header*)((char *)&(t638->_M_impl) + 8);
  __retval637 = &base639->_M_header._M_right;
  struct std___Rb_tree_node_base** t640 = __retval637;
  return t640;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v641, struct std___Rb_tree_node_base** v642, struct std___Rb_tree_node_base** v643) {
bb644:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this645;
  struct std___Rb_tree_node_base** __x646;
  struct std___Rb_tree_node_base** __y647;
  this645 = v641;
  __x646 = v642;
  __y647 = v643;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t648 = this645;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base649 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t648 + 0);
  struct std___Rb_tree_node_base** t650 = __x646;
  struct std___Rb_tree_node_base* t651 = *t650;
  t648->first = t651;
  struct std___Rb_tree_node_base** t652 = __y647;
  struct std___Rb_tree_node_base* t653 = *t652;
  t648->second = t653;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v654) {
bb655:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this656;
  struct std___Rb_tree_node_base* __retval657;
  this656 = v654;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t658 = this656;
  struct std___Rb_tree_header* base659 = (struct std___Rb_tree_header*)((char *)&(t658->_M_impl) + 8);
  struct std___Rb_tree_node_base* t660 = base659->_M_header._M_parent;
  __retval657 = t660;
  struct std___Rb_tree_node_base* t661 = __retval657;
  return t661;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v662) {
bb663:
  struct std___Rb_tree_node_base* __x664;
  struct std___Rb_tree_node_base* __retval665;
  __x664 = v662;
  struct std___Rb_tree_node_base* t666 = __x664;
  struct std___Rb_tree_node_base* t667 = t666->_M_left;
  __retval665 = t667;
  struct std___Rb_tree_node_base* t668 = __retval665;
  return t668;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v669, int* v670) {
bb671:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this672;
  int* __k673;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval674;
  struct std___Rb_tree_node_base* __x675;
  struct std___Rb_tree_node_base* __y676;
  this672 = v669;
  __k673 = v670;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t677 = this672;
  struct std___Rb_tree_node_base* r678 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t677);
  __x675 = r678;
  struct std___Rb_tree_node_base* r679 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t677);
  __y676 = r679;
    while (1) {
      struct std___Rb_tree_node_base* t680 = __x675;
      _Bool cast681 = (_Bool)t680;
      if (!cast681) break;
        struct std___Rb_tree_node_base* t682 = __x675;
        __y676 = t682;
        struct std___Rb_tree_key_compare_std__less_int__* base683 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t677->_M_impl) + 0);
        struct std__less_int_* cast684 = (struct std__less_int_*)base683;
        int* t685 = __k673;
        struct std___Rb_tree_node_base* t686 = __x675;
        int* r687 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t686);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r688 = std__less_int___operator___int_const___int_const___const(cast684, t685, r687);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary689;
        if (r688) {
          struct std___Rb_tree_node_base* t690 = __x675;
          struct std___Rb_tree_node_base* r691 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t690);
          ternary689 = (struct std___Rb_tree_node_base*)r691;
        } else {
          struct std___Rb_tree_node_base* t692 = __x675;
          struct std___Rb_tree_node_base* r693 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t692);
          ternary689 = (struct std___Rb_tree_node_base*)r693;
        }
        __x675 = ternary689;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval674, &__x675, &__y676);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t694 = __retval674;
  return t694;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v695, struct std___Rb_tree_node_base* v696) {
bb697:
  struct std___Rb_tree_iterator_int_* this698;
  struct std___Rb_tree_node_base* __x699;
  this698 = v695;
  __x699 = v696;
  struct std___Rb_tree_iterator_int_* t700 = this698;
  struct std___Rb_tree_node_base* t701 = __x699;
  t700->_M_node = t701;
  return;
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

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v709, struct std___Rb_tree_node_base** v710, struct std___Rb_tree_node_base** v711) {
bb712:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this713;
  struct std___Rb_tree_node_base** __x714;
  struct std___Rb_tree_node_base** __y715;
  this713 = v709;
  __x714 = v710;
  __y715 = v711;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t716 = this713;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base717 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t716 + 0);
  struct std___Rb_tree_node_base** t718 = __x714;
  struct std___Rb_tree_node_base* t719 = *t718;
  t716->first = t719;
  struct std___Rb_tree_node_base** t720 = __y715;
  struct std___Rb_tree_node_base* t721 = *t720;
  t716->second = t721;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v722) {
bb723:
  struct std___Rb_tree_iterator_int_* this724;
  struct std___Rb_tree_iterator_int_* __retval725;
  this724 = v722;
  struct std___Rb_tree_iterator_int_* t726 = this724;
  struct std___Rb_tree_node_base* t727 = t726->_M_node;
  struct std___Rb_tree_node_base* r728 = std___Rb_tree_decrement(t727);
  t726->_M_node = r728;
  __retval725 = t726;
  struct std___Rb_tree_iterator_int_* t729 = __retval725;
  return t729;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v730) {
bb731:
  struct std___Rb_tree_node_base* __x732;
  struct std___Rb_tree_node_base* __retval733;
  __x732 = v730;
  struct std___Rb_tree_node_base* t734 = __x732;
  struct std___Rb_tree_node_base* t735 = t734->_M_right;
  __retval733 = t735;
  struct std___Rb_tree_node_base* t736 = __retval733;
  return t736;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v737) {
bb738:
  struct std___Rb_tree_iterator_int_* this739;
  struct std___Rb_tree_iterator_int_* __retval740;
  this739 = v737;
  struct std___Rb_tree_iterator_int_* t741 = this739;
  struct std___Rb_tree_node_base* t742 = t741->_M_node;
  struct std___Rb_tree_node_base* r743 = std___Rb_tree_increment(t742);
  t741->_M_node = r743;
  __retval740 = t741;
  struct std___Rb_tree_iterator_int_* t744 = __retval740;
  return t744;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v745, struct std___Rb_tree_node_base** v746, struct std___Rb_tree_node_base** v747) {
bb748:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this749;
  struct std___Rb_tree_node_base** __x750;
  struct std___Rb_tree_node_base** __y751;
  this749 = v745;
  __x750 = v746;
  __y751 = v747;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t752 = this749;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base753 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t752 + 0);
  struct std___Rb_tree_node_base** t754 = __x750;
  struct std___Rb_tree_node_base* t755 = *t754;
  t752->first = t755;
  struct std___Rb_tree_node_base** t756 = __y751;
  struct std___Rb_tree_node_base* t757 = *t756;
  t752->second = t757;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v758, struct std___Rb_tree_const_iterator_int_ v759, int* v760) {
bb761:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this762;
  struct std___Rb_tree_const_iterator_int_ __position763;
  int* __k764;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval765;
  this762 = v758;
  __position763 = v759;
  __k764 = v760;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t766 = this762;
    struct std___Rb_tree_node_base* t767 = __position763._M_node;
    struct std___Rb_tree_node_base* r768 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t766);
    _Bool c769 = ((t767 == r768)) ? 1 : 0;
    if (c769) {
        unsigned long r770 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t766);
        unsigned long c771 = 0;
        _Bool c772 = ((r770 > c771)) ? 1 : 0;
        _Bool ternary773;
        if (c772) {
          struct std___Rb_tree_key_compare_std__less_int__* base774 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t766->_M_impl) + 0);
          struct std__less_int_* cast775 = (struct std__less_int_*)base774;
          int* t776 = __k764;
          struct std___Rb_tree_node_base** r777 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t766);
          struct std___Rb_tree_node_base* t778 = *r777;
          int* r779 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t778);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r780 = std__less_int___operator___int_const___int_const___const(cast775, t776, r779);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u781 = !r780;
          ternary773 = (_Bool)u781;
        } else {
          _Bool c782 = 0;
          ternary773 = (_Bool)c782;
        }
        if (ternary773) {
          struct std___Rb_tree_node_base* ref_tmp0783;
          struct std___Rb_tree_node_base* c784 = ((void*)0);
          ref_tmp0783 = c784;
          struct std___Rb_tree_node_base** r785 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t766);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, &ref_tmp0783, r785);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t786 = __retval765;
          return t786;
        } else {
          int* t787 = __k764;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r788 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t766, t787);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval765 = r788;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t789 = __retval765;
          return t789;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base790 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t766->_M_impl) + 0);
        struct std__less_int_* cast791 = (struct std__less_int_*)base790;
        struct std___Rb_tree_node_base* t792 = __position763._M_node;
        int* r793 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t792);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t794 = __k764;
        _Bool r795 = std__less_int___operator___int_const___int_const___const(cast791, r793, t794);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u796 = !r795;
        if (u796) {
          struct std___Rb_tree_iterator_int_ __before797;
          struct std___Rb_tree_node_base* t798 = __position763._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before797, t798);
            struct std___Rb_tree_node_base* t799 = __position763._M_node;
            struct std___Rb_tree_node_base** r800 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t766);
            struct std___Rb_tree_node_base* t801 = *r800;
            _Bool c802 = ((t799 == t801)) ? 1 : 0;
            if (c802) {
              struct std___Rb_tree_node_base** r803 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t766);
              struct std___Rb_tree_node_base** r804 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t766);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, r803, r804);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t805 = __retval765;
              return t805;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base806 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t766->_M_impl) + 0);
                struct std__less_int_* cast807 = (struct std__less_int_*)base806;
                int* t808 = __k764;
                struct std___Rb_tree_iterator_int_* r809 = std___Rb_tree_iterator_int___operator__(&__before797);
                struct std___Rb_tree_node_base* t810 = r809->_M_node;
                int* r811 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t810);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r812 = std__less_int___operator___int_const___int_const___const(cast807, t808, r811);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u813 = !r812;
                if (u813) {
                    struct std___Rb_tree_node_base* t814 = __before797._M_node;
                    struct std___Rb_tree_node_base* r815 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t814);
                    _Bool cast816 = (_Bool)r815;
                    _Bool u817 = !cast816;
                    if (u817) {
                      struct std___Rb_tree_node_base* ref_tmp1818;
                      struct std___Rb_tree_node_base* c819 = ((void*)0);
                      ref_tmp1818 = c819;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, &ref_tmp1818, &__before797._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t820 = __retval765;
                      return t820;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, &__position763._M_node, &__position763._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t821 = __retval765;
                      return t821;
                    }
                } else {
                  int* t822 = __k764;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r823 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t766, t822);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval765 = r823;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t824 = __retval765;
                  return t824;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after825;
          struct std___Rb_tree_node_base* t826 = __position763._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after825, t826);
            struct std___Rb_tree_node_base* t827 = __position763._M_node;
            struct std___Rb_tree_node_base** r828 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t766);
            struct std___Rb_tree_node_base* t829 = *r828;
            _Bool c830 = ((t827 == t829)) ? 1 : 0;
            if (c830) {
              struct std___Rb_tree_node_base* ref_tmp2831;
              struct std___Rb_tree_node_base* c832 = ((void*)0);
              ref_tmp2831 = c832;
              struct std___Rb_tree_node_base** r833 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t766);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, &ref_tmp2831, r833);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t834 = __retval765;
              return t834;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base835 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t766->_M_impl) + 0);
                struct std__less_int_* cast836 = (struct std__less_int_*)base835;
                struct std___Rb_tree_iterator_int_* r837 = std___Rb_tree_iterator_int___operator___2(&__after825);
                struct std___Rb_tree_node_base* t838 = r837->_M_node;
                int* r839 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t838);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t840 = __k764;
                _Bool r841 = std__less_int___operator___int_const___int_const___const(cast836, r839, t840);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u842 = !r841;
                if (u842) {
                    struct std___Rb_tree_node_base* t843 = __position763._M_node;
                    struct std___Rb_tree_node_base* r844 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t843);
                    _Bool cast845 = (_Bool)r844;
                    _Bool u846 = !cast845;
                    if (u846) {
                      struct std___Rb_tree_node_base* ref_tmp3847;
                      struct std___Rb_tree_node_base* c848 = ((void*)0);
                      ref_tmp3847 = c848;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, &ref_tmp3847, &__position763._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t849 = __retval765;
                      return t849;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval765, &__after825._M_node, &__after825._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t850 = __retval765;
                      return t850;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp4851;
                  struct std___Rb_tree_node_base* ref_tmp5852;
                  struct std___Rb_tree_node_base* c853 = ((void*)0);
                  ref_tmp4851 = c853;
                  struct std___Rb_tree_node_base* c854 = ((void*)0);
                  ref_tmp5852 = c854;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval765, &ref_tmp4851, &ref_tmp5852);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t855 = __retval765;
                  return t855;
                }
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v856, int* v857) {
bb858:
  struct std___Identity_int_* this859;
  int* __x860;
  int* __retval861;
  this859 = v856;
  __x860 = v857;
  struct std___Identity_int_* t862 = this859;
  int* t863 = __x860;
  __retval861 = t863;
  int* t864 = __retval861;
  return t864;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v865) {
bb866:
  struct std____new_allocator_std___Rb_tree_node_int__* this867;
  unsigned long __retval868;
  this867 = v865;
  struct std____new_allocator_std___Rb_tree_node_int__* t869 = this867;
  unsigned long c870 = 9223372036854775807;
  unsigned long c871 = 40;
  unsigned long b872 = c870 / c871;
  __retval868 = b872;
  unsigned long t873 = __retval868;
  return t873;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v874, unsigned long v875, void* v876) {
bb877:
  struct std____new_allocator_std___Rb_tree_node_int__* this878;
  unsigned long __n879;
  void* unnamed880;
  struct std___Rb_tree_node_int_* __retval881;
  this878 = v874;
  __n879 = v875;
  unnamed880 = v876;
  struct std____new_allocator_std___Rb_tree_node_int__* t882 = this878;
    unsigned long t883 = __n879;
    unsigned long r884 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t882);
    _Bool c885 = ((t883 > r884)) ? 1 : 0;
    if (c885) {
        unsigned long t886 = __n879;
        unsigned long c887 = -1;
        unsigned long c888 = 40;
        unsigned long b889 = c887 / c888;
        _Bool c890 = ((t886 > b889)) ? 1 : 0;
        if (c890) {
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
    unsigned long c891 = 8;
    unsigned long c892 = 16;
    _Bool c893 = ((c891 > c892)) ? 1 : 0;
    if (c893) {
      unsigned long __al894;
      unsigned long c895 = 8;
      __al894 = c895;
      unsigned long t896 = __n879;
      unsigned long c897 = 40;
      unsigned long b898 = t896 * c897;
      unsigned long t899 = __al894;
      void* r900 = operator_new_2(b898, t899);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast901 = (struct std___Rb_tree_node_int_*)r900;
      __retval881 = cast901;
      struct std___Rb_tree_node_int_* t902 = __retval881;
      return t902;
    }
  unsigned long t903 = __n879;
  unsigned long c904 = 40;
  unsigned long b905 = t903 * c904;
  void* r906 = operator_new(b905);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast907 = (struct std___Rb_tree_node_int_*)r906;
  __retval881 = cast907;
  struct std___Rb_tree_node_int_* t908 = __retval881;
  return t908;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v909, unsigned long v910) {
bb911:
  struct std__allocator_std___Rb_tree_node_int__* this912;
  unsigned long __n913;
  struct std___Rb_tree_node_int_* __retval914;
  this912 = v909;
  __n913 = v910;
  struct std__allocator_std___Rb_tree_node_int__* t915 = this912;
    _Bool r916 = std____is_constant_evaluated();
    if (r916) {
        unsigned long t917 = __n913;
        unsigned long c918 = 40;
        unsigned long ovr919;
        _Bool ovf920 = __builtin_mul_overflow(t917, c918, &ovr919);
        __n913 = ovr919;
        if (ovf920) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t921 = __n913;
      void* r922 = operator_new(t921);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast923 = (struct std___Rb_tree_node_int_*)r922;
      __retval914 = cast923;
      struct std___Rb_tree_node_int_* t924 = __retval914;
      return t924;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base925 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t915 + 0);
  unsigned long t926 = __n913;
  void* c927 = ((void*)0);
  struct std___Rb_tree_node_int_* r928 = std____new_allocator_std___Rb_tree_node_int_____allocate(base925, t926, c927);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval914 = r928;
  struct std___Rb_tree_node_int_* t929 = __retval914;
  return t929;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v930, unsigned long v931) {
bb932:
  struct std__allocator_std___Rb_tree_node_int__* __a933;
  unsigned long __n934;
  struct std___Rb_tree_node_int_* __retval935;
  __a933 = v930;
  __n934 = v931;
  struct std__allocator_std___Rb_tree_node_int__* t936 = __a933;
  unsigned long t937 = __n934;
  struct std___Rb_tree_node_int_* r938 = std__allocator_std___Rb_tree_node_int_____allocate(t936, t937);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval935 = r938;
  struct std___Rb_tree_node_int_* t939 = __retval935;
  return t939;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v940) {
bb941:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this942;
  struct std___Rb_tree_node_int_* __retval943;
  this942 = v940;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t944 = this942;
  struct std__allocator_std___Rb_tree_node_int__* r945 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t944);
  unsigned long c946 = 1;
  struct std___Rb_tree_node_int_* r947 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r945, c946);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval943 = r947;
  struct std___Rb_tree_node_int_* t948 = __retval943;
  return t948;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v949, int* v950) {
bb951:
  int* __location952;
  int* __args953;
  int* __retval954;
  void* __loc955;
  __location952 = v949;
  __args953 = v950;
  int* t956 = __location952;
  void* cast957 = (void*)t956;
  __loc955 = cast957;
    void* t958 = __loc955;
    int* cast959 = (int*)t958;
    int* t960 = __args953;
    int t961 = *t960;
    *cast959 = t961;
    __retval954 = cast959;
    int* t962 = __retval954;
    return t962;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v963, int* v964, int* v965) {
bb966:
  struct std__allocator_std___Rb_tree_node_int__* __a967;
  int* __p968;
  int* __args969;
  __a967 = v963;
  __p968 = v964;
  __args969 = v965;
  int* t970 = __p968;
  int* t971 = __args969;
  int* r972 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t970, t971);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v973, struct std___Rb_tree_node_int_* v974, int* v975) {
bb976:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this977;
  struct std___Rb_tree_node_int_* __node978;
  int* __args979;
  this977 = v973;
  __node978 = v974;
  __args979 = v975;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t980 = this977;
      struct std__allocator_std___Rb_tree_node_int__* r982 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t980);
      struct std___Rb_tree_node_int_* t983 = __node978;
      int* r984 = std___Rb_tree_node_int____M_valptr(t983);
      if (__cir_exc_active) {
        goto cir_try_dispatch981;
      }
      int* t985 = __args979;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r982, r984, t985);
    cir_try_dispatch981: ;
    if (__cir_exc_active) {
    {
      int ca_tok986 = 0;
      void* ca_exn987 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t988 = __node978;
        struct std___Rb_tree_node_int_* t989 = __node978;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t980, t989);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v990, int* v991) {
bb992:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this993;
  int* __args994;
  struct std___Rb_tree_node_int_* __retval995;
  struct std___Rb_tree_node_int_* __tmp996;
  this993 = v990;
  __args994 = v991;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t997 = this993;
  struct std___Rb_tree_node_int_* r998 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t997);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp996 = r998;
  struct std___Rb_tree_node_int_* t999 = __tmp996;
  int* t1000 = __args994;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t997, t999, t1000);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1001 = __tmp996;
  __retval995 = t1001;
  struct std___Rb_tree_node_int_* t1002 = __retval995;
  return t1002;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1003, int* v1004) {
bb1005:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1006;
  int* __arg1007;
  struct std___Rb_tree_node_int_* __retval1008;
  this1006 = v1003;
  __arg1007 = v1004;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1009 = this1006;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1010 = t1009->_M_t;
  int* t1011 = __arg1007;
  struct std___Rb_tree_node_int_* r1012 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1010, t1011);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1008 = r1012;
  struct std___Rb_tree_node_int_* t1013 = __retval1008;
  return t1013;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1014, struct std___Rb_tree_node_base* v1015, struct std___Rb_tree_node_base* v1016, struct std___Rb_tree_node_base* v1017) {
bb1018:
  _Bool __insert_left1019;
  struct std___Rb_tree_node_base* __x1020;
  struct std___Rb_tree_node_base* __p1021;
  struct std___Rb_tree_node_base* __header1022;
  __insert_left1019 = v1014;
  __x1020 = v1015;
  __p1021 = v1016;
  __header1022 = v1017;
  _Bool t1023 = __insert_left1019;
  struct std___Rb_tree_node_base* t1024 = __x1020;
  struct std___Rb_tree_node_base* t1025 = __p1021;
  struct std___Rb_tree_node_base* t1026 = __header1022;
  std___Rb_tree_insert_and_rebalance(t1023, t1024, t1025, t1026);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1027, struct std___Rb_tree_node_base* v1028, struct std___Rb_tree_node_base* v1029, int* v1030, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1031) {
bb1032:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1033;
  struct std___Rb_tree_node_base* __x1034;
  struct std___Rb_tree_node_base* __p1035;
  int* __v1036;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1037;
  struct std___Rb_tree_iterator_int_ __retval1038;
  _Bool __insert_left1039;
  struct std___Rb_tree_node_base* __z1040;
  this1033 = v1027;
  __x1034 = v1028;
  __p1035 = v1029;
  __v1036 = v1030;
  __node_gen1037 = v1031;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1041 = this1033;
  struct std___Rb_tree_node_base* t1042 = __x1034;
  _Bool cast1043 = (_Bool)t1042;
  _Bool ternary1044;
  if (cast1043) {
    _Bool c1045 = 1;
    ternary1044 = (_Bool)c1045;
  } else {
    struct std___Rb_tree_node_base* t1046 = __p1035;
    struct std___Rb_tree_node_base* r1047 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1041);
    _Bool c1048 = ((t1046 == r1047)) ? 1 : 0;
    ternary1044 = (_Bool)c1048;
  }
  _Bool ternary1049;
  if (ternary1044) {
    _Bool c1050 = 1;
    ternary1049 = (_Bool)c1050;
  } else {
    struct std___Identity_int_ ref_tmp01051;
    struct std___Rb_tree_key_compare_std__less_int__* base1052 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1041->_M_impl) + 0);
    struct std__less_int_* cast1053 = (struct std__less_int_*)base1052;
    int* t1054 = __v1036;
    int* r1055 = std___Identity_int___operator___int___const(&ref_tmp01051, t1054);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1056 = __p1035;
    int* r1057 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1056);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1058 = std__less_int___operator___int_const___int_const___const(cast1053, r1055, r1057);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1049 = (_Bool)r1058;
  }
  __insert_left1039 = ternary1049;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1059 = __node_gen1037;
  int* t1060 = __v1036;
  struct std___Rb_tree_node_int_* r1061 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1059, t1060);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1062 = (struct std___Rb_tree_node_base*)((char *)r1061 + 0);
  struct std___Rb_tree_node_base* r1063 = std___Rb_tree_node_base___M_base_ptr___const(base1062);
  __z1040 = r1063;
  _Bool t1064 = __insert_left1039;
  struct std___Rb_tree_node_base* t1065 = __z1040;
  struct std___Rb_tree_node_base* t1066 = __p1035;
  struct std___Rb_tree_header* base1067 = (struct std___Rb_tree_header*)((char *)&(t1041->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1064, t1065, t1066, &base1067->_M_header);
  struct std___Rb_tree_header* base1068 = (struct std___Rb_tree_header*)((char *)&(t1041->_M_impl) + 8);
  unsigned long t1069 = base1068->_M_node_count;
  unsigned long u1070 = t1069 + 1;
  base1068->_M_node_count = u1070;
  struct std___Rb_tree_node_base* t1071 = __z1040;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1038, t1071);
  struct std___Rb_tree_iterator_int_ t1072 = __retval1038;
  return t1072;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1073, struct std___Rb_tree_node_base* v1074, int* v1075) {
bb1076:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1077;
  struct std___Rb_tree_node_base* __p1078;
  int* __v1079;
  struct std___Rb_tree_iterator_int_ __retval1080;
  _Bool __insert_left1081;
  struct std___Rb_tree_node_base* __z1082;
  this1077 = v1073;
  __p1078 = v1074;
  __v1079 = v1075;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1083 = this1077;
  struct std___Rb_tree_node_base* t1084 = __p1078;
  struct std___Rb_tree_node_base* r1085 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1083);
  _Bool c1086 = ((t1084 == r1085)) ? 1 : 0;
  _Bool ternary1087;
  if (c1086) {
    _Bool c1088 = 1;
    ternary1087 = (_Bool)c1088;
  } else {
    struct std___Identity_int_ ref_tmp01089;
    struct std___Rb_tree_key_compare_std__less_int__* base1090 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1083->_M_impl) + 0);
    struct std__less_int_* cast1091 = (struct std__less_int_*)base1090;
    struct std___Rb_tree_node_base* t1092 = __p1078;
    int* r1093 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1092);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t1094 = __v1079;
    int* r1095 = std___Identity_int___operator___int___const(&ref_tmp01089, t1094);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1096 = std__less_int___operator___int_const___int_const___const(cast1091, r1093, r1095);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u1097 = !r1096;
    ternary1087 = (_Bool)u1097;
  }
  __insert_left1081 = ternary1087;
  int* t1098 = __v1079;
  struct std___Rb_tree_node_int_* r1099 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1083, t1098);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1100 = (struct std___Rb_tree_node_base*)((char *)r1099 + 0);
  struct std___Rb_tree_node_base* r1101 = std___Rb_tree_node_base___M_base_ptr___const(base1100);
  __z1082 = r1101;
  _Bool t1102 = __insert_left1081;
  struct std___Rb_tree_node_base* t1103 = __z1082;
  struct std___Rb_tree_node_base* t1104 = __p1078;
  struct std___Rb_tree_header* base1105 = (struct std___Rb_tree_header*)((char *)&(t1083->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1102, t1103, t1104, &base1105->_M_header);
  struct std___Rb_tree_header* base1106 = (struct std___Rb_tree_header*)((char *)&(t1083->_M_impl) + 8);
  unsigned long t1107 = base1106->_M_node_count;
  unsigned long u1108 = t1107 + 1;
  base1106->_M_node_count = u1108;
  struct std___Rb_tree_node_base* t1109 = __z1082;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1080, t1109);
  struct std___Rb_tree_iterator_int_ t1110 = __retval1080;
  return t1110;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1111, int* v1112) {
bb1113:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1114;
  int* __v1115;
  struct std___Rb_tree_iterator_int_ __retval1116;
  struct std___Rb_tree_node_base* __x1117;
  struct std___Rb_tree_node_base* __y1118;
  this1114 = v1111;
  __v1115 = v1112;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1119 = this1114;
  struct std___Rb_tree_node_base* r1120 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t1119);
  __x1117 = r1120;
  struct std___Rb_tree_node_base* r1121 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1119);
  __y1118 = r1121;
    while (1) {
      struct std___Rb_tree_node_base* t1122 = __x1117;
      _Bool cast1123 = (_Bool)t1122;
      if (!cast1123) break;
        struct std___Identity_int_ ref_tmp01124;
        struct std___Rb_tree_node_base** tmp_exprcleanup1125;
        struct std___Rb_tree_node_base* t1126 = __x1117;
        __y1118 = t1126;
        struct std___Rb_tree_key_compare_std__less_int__* base1127 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1119->_M_impl) + 0);
        struct std__less_int_* cast1128 = (struct std__less_int_*)base1127;
        struct std___Rb_tree_node_base* t1129 = __x1117;
        int* r1130 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1129);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t1131 = __v1115;
        int* r1132 = std___Identity_int___operator___int___const(&ref_tmp01124, t1131);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1133 = std__less_int___operator___int_const___int_const___const(cast1128, r1130, r1132);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1134 = !r1133;
        struct std___Rb_tree_node_base* ternary1135;
        if (u1134) {
          struct std___Rb_tree_node_base* t1136 = __x1117;
          struct std___Rb_tree_node_base* r1137 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t1136);
          ternary1135 = (struct std___Rb_tree_node_base*)r1137;
        } else {
          struct std___Rb_tree_node_base* t1138 = __x1117;
          struct std___Rb_tree_node_base* r1139 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1138);
          ternary1135 = (struct std___Rb_tree_node_base*)r1139;
        }
        __x1117 = ternary1135;
        tmp_exprcleanup1125 = &__x1117;
        struct std___Rb_tree_node_base** t1140 = tmp_exprcleanup1125;
    }
  struct std___Rb_tree_node_base* t1141 = __y1118;
  int* t1142 = __v1115;
  struct std___Rb_tree_iterator_int_ r1143 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t1119, t1141, t1142);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1116 = r1143;
  struct std___Rb_tree_iterator_int_ t1144 = __retval1116;
  return t1144;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1145, struct std___Rb_tree_const_iterator_int_ v1146, int* v1147, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1148) {
bb1149:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1150;
  struct std___Rb_tree_const_iterator_int_ __position1151;
  int* __v1152;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1153;
  struct std___Rb_tree_iterator_int_ __retval1154;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1155;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01156;
  struct std___Identity_int_ ref_tmp01157;
  this1150 = v1145;
  __position1151 = v1146;
  __v1152 = v1147;
  __node_gen1153 = v1148;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1158 = this1150;
  agg_tmp01156 = __position1151; // copy
  int* t1159 = __v1152;
  int* r1160 = std___Identity_int___operator___int___const(&ref_tmp01157, t1159);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1161 = agg_tmp01156;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1162 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t1158, t1161, r1160);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1155 = r1162;
    struct std___Rb_tree_node_base* t1163 = __res1155.second;
    _Bool cast1164 = (_Bool)t1163;
    if (cast1164) {
      struct std___Rb_tree_node_base* t1165 = __res1155.first;
      struct std___Rb_tree_node_base* t1166 = __res1155.second;
      int* t1167 = __v1152;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1168 = __node_gen1153;
      struct std___Rb_tree_iterator_int_ r1169 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1158, t1165, t1166, t1167, t1168);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1154 = r1169;
      struct std___Rb_tree_iterator_int_ t1170 = __retval1154;
      return t1170;
    }
  int* t1171 = __v1152;
  struct std___Rb_tree_iterator_int_ r1172 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t1158, t1171);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1154 = r1172;
  struct std___Rb_tree_iterator_int_ t1173 = __retval1154;
  return t1173;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1174) {
bb1175:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1176;
  struct std___Rb_tree_iterator_int_ __retval1177;
  this1176 = v1174;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1178 = this1176;
  struct std___Rb_tree_node_base* r1179 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1178);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1177, r1179);
  struct std___Rb_tree_iterator_int_ t1180 = __retval1177;
  return t1180;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1181, struct std___Rb_tree_iterator_int_* v1182) {
bb1183:
  struct std___Rb_tree_const_iterator_int_* this1184;
  struct std___Rb_tree_iterator_int_* __it1185;
  this1184 = v1181;
  __it1185 = v1182;
  struct std___Rb_tree_const_iterator_int_* t1186 = this1184;
  struct std___Rb_tree_iterator_int_* t1187 = __it1185;
  struct std___Rb_tree_node_base* t1188 = t1187->_M_node;
  t1186->_M_node = t1188;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1189, int* v1190, int* v1191) {
bb1192:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1193;
  int* __first1194;
  int* __last1195;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1196;
  this1193 = v1189;
  __first1194 = v1190;
  __last1195 = v1191;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1197 = this1193;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1196, t1197);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01198;
    struct std___Rb_tree_iterator_int_ ref_tmp01199;
    struct std___Rb_tree_iterator_int_ agg_tmp11200;
    while (1) {
      int* t1202 = __first1194;
      int* t1203 = __last1195;
      _Bool c1204 = ((t1202 != t1203)) ? 1 : 0;
      if (!c1204) break;
      struct std___Rb_tree_iterator_int_ r1205 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1197);
      ref_tmp01199 = r1205;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01198, &ref_tmp01199);
      int* t1206 = __first1194;
      struct std___Rb_tree_const_iterator_int_ t1207 = agg_tmp01198;
      struct std___Rb_tree_iterator_int_ r1208 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1197, t1207, t1206, &__an1196);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11200 = r1208;
    for_step1201: ;
      int* t1209 = __first1194;
      int c1210 = 1;
      int* ptr1211 = &(t1209)[c1210];
      __first1194 = ptr1211;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1212) {
bb1213:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1214;
  this1214 = v1212;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1215 = this1214;
  struct std__allocator_std___Rb_tree_node_int__* base1216 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1215 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1216);
    struct std___Rb_tree_key_compare_std__less_int__* base1217 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1215 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1217);
    struct std___Rb_tree_header* base1218 = (struct std___Rb_tree_header*)((char *)t1215 + 8);
    std___Rb_tree_header___Rb_tree_header(base1218);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1219) {
bb1220:
  struct std____new_allocator_std___Rb_tree_node_int__* this1221;
  this1221 = v1219;
  struct std____new_allocator_std___Rb_tree_node_int__* t1222 = this1221;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1223) {
bb1224:
  struct std__allocator_std___Rb_tree_node_int__* this1225;
  this1225 = v1223;
  struct std__allocator_std___Rb_tree_node_int__* t1226 = this1225;
  struct std____new_allocator_std___Rb_tree_node_int__* base1227 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1226 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1227);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1228) {
bb1229:
  struct std___Rb_tree_key_compare_std__less_int__* this1230;
  this1230 = v1228;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1231) {
bb1232:
  struct std___Rb_tree_header* this1233;
  this1233 = v1231;
  struct std___Rb_tree_header* t1234 = this1233;
  struct std___Rb_tree_node_base* c1235 = ((void*)0);
  t1234->_M_header._M_parent = c1235;
  t1234->_M_header._M_left = &t1234->_M_header;
  t1234->_M_header._M_right = &t1234->_M_header;
  unsigned long c1236 = 0;
  t1234->_M_node_count = c1236;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1237) {
bb1238:
  struct std___Rb_tree_header* this1239;
  this1239 = v1237;
  struct std___Rb_tree_header* t1240 = this1239;
  unsigned int c1241 = 0;
  t1240->_M_header._M_color = c1241;
  std___Rb_tree_header___M_reset(t1240);
  if (__cir_exc_active) {
    return;
  }
  return;
}

