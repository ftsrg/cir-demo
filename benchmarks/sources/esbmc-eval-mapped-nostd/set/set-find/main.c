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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 0";
char _str_1[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-find/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myset.size() == 5";
char _str_3[9] = "*it == i";
char _str_4[10] = "*it == 20";
char _str_5[10] = "*it == 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[16] = "myset contains:";
char _str_7[2] = " ";
char _str_8[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_9[20] = "__position != end()";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____find(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);

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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v4) {
bb5:
  struct std___Rb_tree_const_iterator_int_* this6;
  this6 = v4;
  struct std___Rb_tree_const_iterator_int_* t7 = this6;
  struct std___Rb_tree_node_base* c8 = ((void*)0);
  t7->_M_node = c8;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this11;
  unsigned long __retval12;
  this11 = v9;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t13 = this11;
  struct std___Rb_tree_header* base14 = (struct std___Rb_tree_header*)((char *)&(t13->_M_impl) + 8);
  unsigned long t15 = base14->_M_node_count;
  __retval12 = t15;
  unsigned long t16 = __retval12;
  return t16;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v17) {
bb18:
  struct std__set_int__std__less_int___std__allocator_int__* this19;
  unsigned long __retval20;
  this19 = v17;
  struct std__set_int__std__less_int___std__allocator_int__* t21 = this19;
  unsigned long r22 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t21->_M_t);
  __retval20 = r22;
  unsigned long t23 = __retval20;
  return t23;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v24) {
bb25:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this26;
  struct std___Rb_tree_node_base* __retval27;
  this26 = v24;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t28 = this26;
  struct std___Rb_tree_header* base29 = (struct std___Rb_tree_header*)((char *)&(t28->_M_impl) + 8);
  struct std___Rb_tree_node_base* t30 = base29->_M_header._M_parent;
  __retval27 = t30;
  struct std___Rb_tree_node_base* t31 = __retval27;
  return t31;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v32) {
bb33:
  struct std___Rb_tree_node_base* this34;
  struct std___Rb_tree_node_base* __retval35;
  this34 = v32;
  struct std___Rb_tree_node_base* t36 = this34;
  __retval35 = t36;
  struct std___Rb_tree_node_base* t37 = __retval35;
  return t37;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v38) {
bb39:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this40;
  struct std___Rb_tree_node_base* __retval41;
  this40 = v38;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t42 = this40;
  struct std___Rb_tree_header* base43 = (struct std___Rb_tree_header*)((char *)&(t42->_M_impl) + 8);
  struct std___Rb_tree_node_base* r44 = std___Rb_tree_node_base___M_base_ptr___const(&base43->_M_header);
  __retval41 = r44;
  struct std___Rb_tree_node_base* t45 = __retval41;
  return t45;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v46, int* v47, int* v48) {
bb49:
  struct std__less_int_* this50;
  int* __x51;
  int* __y52;
  _Bool __retval53;
  this50 = v46;
  __x51 = v47;
  __y52 = v48;
  struct std__less_int_* t54 = this50;
  int* t55 = __x51;
  int t56 = *t55;
  int* t57 = __y52;
  int t58 = *t57;
  _Bool c59 = ((t56 < t58)) ? 1 : 0;
  __retval53 = c59;
  _Bool t60 = __retval53;
  return t60;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v61, int* v62) {
bb63:
  struct std___Identity_int_* this64;
  int* __x65;
  int* __retval66;
  this64 = v61;
  __x65 = v62;
  struct std___Identity_int_* t67 = this64;
  int* t68 = __x65;
  __retval66 = t68;
  int* t69 = __retval66;
  return t69;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v70) {
bb71:
  struct __gnu_cxx____aligned_membuf_int_* this72;
  void* __retval73;
  this72 = v70;
  struct __gnu_cxx____aligned_membuf_int_* t74 = this72;
  void* cast75 = (void*)&(t74->_M_storage);
  __retval73 = cast75;
  void* t76 = __retval73;
  return t76;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v77) {
bb78:
  struct __gnu_cxx____aligned_membuf_int_* this79;
  int* __retval80;
  this79 = v77;
  struct __gnu_cxx____aligned_membuf_int_* t81 = this79;
  void* r82 = __gnu_cxx____aligned_membuf_int____M_addr___const(t81);
  int* cast83 = (int*)r82;
  __retval80 = cast83;
  int* t84 = __retval80;
  return t84;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v85) {
bb86:
  struct std___Rb_tree_node_int_* this87;
  int* __retval88;
  this87 = v85;
  struct std___Rb_tree_node_int_* t89 = this87;
  int* r90 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t89->_M_storage);
  __retval88 = r90;
  int* t91 = __retval88;
  return t91;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v92) {
bb93:
  struct std___Rb_tree_node_int_* __node94;
  int* __retval95;
  struct std___Identity_int_ ref_tmp096;
  __node94 = v92;
  struct std___Rb_tree_node_int_* t97 = __node94;
  int* r98 = std___Rb_tree_node_int____M_valptr___const(t97);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r99 = std___Identity_int___operator___int_const___const(&ref_tmp096, r98);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval95 = r99;
  int* t100 = __retval95;
  return t100;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v101) {
bb102:
  struct std___Rb_tree_node_base* __x103;
  int* __retval104;
  __x103 = v101;
  struct std___Rb_tree_node_base* t105 = __x103;
  struct std___Rb_tree_node_int_* derived106 = (struct std___Rb_tree_node_int_*)((char *)t105 - 0);
  int* r107 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived106);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval104 = r107;
  int* t108 = __retval104;
  return t108;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v109) {
bb110:
  struct std___Rb_tree_node_base* __x111;
  struct std___Rb_tree_node_base* __retval112;
  __x111 = v109;
  struct std___Rb_tree_node_base* t113 = __x111;
  struct std___Rb_tree_node_base* t114 = t113->_M_left;
  __retval112 = t114;
  struct std___Rb_tree_node_base* t115 = __retval112;
  return t115;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v116) {
bb117:
  struct std___Rb_tree_node_base* __x118;
  struct std___Rb_tree_node_base* __retval119;
  __x118 = v116;
  struct std___Rb_tree_node_base* t120 = __x118;
  struct std___Rb_tree_node_base* t121 = t120->_M_right;
  __retval119 = t121;
  struct std___Rb_tree_node_base* t122 = __retval119;
  return t122;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v123, struct std___Rb_tree_iterator_int_* v124) {
bb125:
  struct std___Rb_tree_iterator_int_* __x126;
  struct std___Rb_tree_iterator_int_* __y127;
  _Bool __retval128;
  __x126 = v123;
  __y127 = v124;
  struct std___Rb_tree_iterator_int_* t129 = __x126;
  struct std___Rb_tree_node_base* t130 = t129->_M_node;
  struct std___Rb_tree_iterator_int_* t131 = __y127;
  struct std___Rb_tree_node_base* t132 = t131->_M_node;
  _Bool c133 = ((t130 == t132)) ? 1 : 0;
  __retval128 = c133;
  _Bool t134 = __retval128;
  return t134;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v135) {
bb136:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this137;
  struct std___Rb_tree_iterator_int_ __retval138;
  this137 = v135;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t139 = this137;
  struct std___Rb_tree_header* base140 = (struct std___Rb_tree_header*)((char *)&(t139->_M_impl) + 8);
  struct std___Rb_tree_node_base* t141 = base140->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval138, t141);
  struct std___Rb_tree_iterator_int_ t142 = __retval138;
  return t142;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v143, struct std___Rb_tree_node_base** v144, struct std___Rb_tree_node_base** v145) {
bb146:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this147;
  struct std___Rb_tree_node_base** __x148;
  struct std___Rb_tree_node_base** __y149;
  this147 = v143;
  __x148 = v144;
  __y149 = v145;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t150 = this147;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base151 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t150 + 0);
  struct std___Rb_tree_node_base** t152 = __x148;
  struct std___Rb_tree_node_base* t153 = *t152;
  t150->first = t153;
  struct std___Rb_tree_node_base** t154 = __y149;
  struct std___Rb_tree_node_base* t155 = *t154;
  t150->second = t155;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v156) {
bb157:
  struct std___Rb_tree_iterator_int_* this158;
  struct std___Rb_tree_iterator_int_* __retval159;
  this158 = v156;
  struct std___Rb_tree_iterator_int_* t160 = this158;
  struct std___Rb_tree_node_base* t161 = t160->_M_node;
  struct std___Rb_tree_node_base* r162 = std___Rb_tree_decrement(t161);
  t160->_M_node = r162;
  __retval159 = t160;
  struct std___Rb_tree_iterator_int_* t163 = __retval159;
  return t163;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v164, struct std___Rb_tree_node_base** v165, struct std___Rb_tree_node_base** v166) {
bb167:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this168;
  struct std___Rb_tree_node_base** __x169;
  struct std___Rb_tree_node_base** __y170;
  this168 = v164;
  __x169 = v165;
  __y170 = v166;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t171 = this168;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base172 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t171 + 0);
  struct std___Rb_tree_node_base** t173 = __x169;
  struct std___Rb_tree_node_base* t174 = *t173;
  t171->first = t174;
  struct std___Rb_tree_node_base** t175 = __y170;
  struct std___Rb_tree_node_base* t176 = *t175;
  t171->second = t176;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v177, int* v178) {
bb179:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this180;
  int* __k181;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval182;
  struct std___Rb_tree_node_base* __x183;
  struct std___Rb_tree_node_base* __y184;
  _Bool __comp185;
  struct std___Rb_tree_iterator_int_ __j186;
  struct std___Rb_tree_node_base* ref_tmp1187;
  this180 = v177;
  __k181 = v178;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t188 = this180;
  struct std___Rb_tree_node_base* r189 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t188);
  __x183 = r189;
  struct std___Rb_tree_node_base* r190 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t188);
  __y184 = r190;
  _Bool c191 = 1;
  __comp185 = c191;
    while (1) {
      struct std___Rb_tree_node_base* t192 = __x183;
      _Bool cast193 = (_Bool)t192;
      if (!cast193) break;
        struct std___Rb_tree_node_base* t194 = __x183;
        __y184 = t194;
        struct std___Rb_tree_key_compare_std__less_int__* base195 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t188->_M_impl) + 0);
        struct std__less_int_* cast196 = (struct std__less_int_*)base195;
        int* t197 = __k181;
        struct std___Rb_tree_node_base* t198 = __x183;
        int* r199 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t198);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r200 = std__less_int___operator___int_const___int_const___const(cast196, t197, r199);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp185 = r200;
        _Bool t201 = __comp185;
        struct std___Rb_tree_node_base* ternary202;
        if (t201) {
          struct std___Rb_tree_node_base* t203 = __x183;
          struct std___Rb_tree_node_base* r204 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t203);
          ternary202 = (struct std___Rb_tree_node_base*)r204;
        } else {
          struct std___Rb_tree_node_base* t205 = __x183;
          struct std___Rb_tree_node_base* r206 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t205);
          ternary202 = (struct std___Rb_tree_node_base*)r206;
        }
        __x183 = ternary202;
    }
  struct std___Rb_tree_node_base* t207 = __y184;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j186, t207);
    _Bool t208 = __comp185;
    if (t208) {
        struct std___Rb_tree_iterator_int_ ref_tmp0209;
        struct std___Rb_tree_iterator_int_ r210 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t188);
        ref_tmp0209 = r210;
        _Bool r211 = std__operator__(&__j186, &ref_tmp0209);
        if (r211) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval182, &__x183, &__y184);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t212 = __retval182;
          return t212;
        } else {
          struct std___Rb_tree_iterator_int_* r213 = std___Rb_tree_iterator_int___operator__(&__j186);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base214 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t188->_M_impl) + 0);
    struct std__less_int_* cast215 = (struct std__less_int_*)base214;
    struct std___Rb_tree_node_base* t216 = __j186._M_node;
    int* r217 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t216);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t218 = __k181;
    _Bool r219 = std__less_int___operator___int_const___int_const___const(cast215, r217, t218);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r219) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval182, &__x183, &__y184);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t220 = __retval182;
      return t220;
    }
  struct std___Rb_tree_node_base* c221 = ((void*)0);
  ref_tmp1187 = c221;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval182, &__j186._M_node, &ref_tmp1187);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t222 = __retval182;
  return t222;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v223, int* v224) {
bb225:
  struct std___Identity_int_* this226;
  int* __x227;
  int* __retval228;
  this226 = v223;
  __x227 = v224;
  struct std___Identity_int_* t229 = this226;
  int* t230 = __x227;
  __retval228 = t230;
  int* t231 = __retval228;
  return t231;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v232, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v233) {
bb234:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this235;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t236;
  this235 = v232;
  __t236 = v233;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t237 = this235;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t238 = __t236;
  t237->_M_t = t238;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v239) {
bb240:
  struct std____new_allocator_std___Rb_tree_node_int__* this241;
  unsigned long __retval242;
  this241 = v239;
  struct std____new_allocator_std___Rb_tree_node_int__* t243 = this241;
  unsigned long c244 = 9223372036854775807;
  unsigned long c245 = 40;
  unsigned long b246 = c244 / c245;
  __retval242 = b246;
  unsigned long t247 = __retval242;
  return t247;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v248, unsigned long v249, void* v250) {
bb251:
  struct std____new_allocator_std___Rb_tree_node_int__* this252;
  unsigned long __n253;
  void* unnamed254;
  struct std___Rb_tree_node_int_* __retval255;
  this252 = v248;
  __n253 = v249;
  unnamed254 = v250;
  struct std____new_allocator_std___Rb_tree_node_int__* t256 = this252;
    unsigned long t257 = __n253;
    unsigned long r258 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t256);
    _Bool c259 = ((t257 > r258)) ? 1 : 0;
    if (c259) {
        unsigned long t260 = __n253;
        unsigned long c261 = -1;
        unsigned long c262 = 40;
        unsigned long b263 = c261 / c262;
        _Bool c264 = ((t260 > b263)) ? 1 : 0;
        if (c264) {
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
    unsigned long c265 = 8;
    unsigned long c266 = 16;
    _Bool c267 = ((c265 > c266)) ? 1 : 0;
    if (c267) {
      unsigned long __al268;
      unsigned long c269 = 8;
      __al268 = c269;
      unsigned long t270 = __n253;
      unsigned long c271 = 40;
      unsigned long b272 = t270 * c271;
      unsigned long t273 = __al268;
      void* r274 = operator_new_2(b272, t273);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast275 = (struct std___Rb_tree_node_int_*)r274;
      __retval255 = cast275;
      struct std___Rb_tree_node_int_* t276 = __retval255;
      return t276;
    }
  unsigned long t277 = __n253;
  unsigned long c278 = 40;
  unsigned long b279 = t277 * c278;
  void* r280 = operator_new(b279);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast281 = (struct std___Rb_tree_node_int_*)r280;
  __retval255 = cast281;
  struct std___Rb_tree_node_int_* t282 = __retval255;
  return t282;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v283, unsigned long v284) {
bb285:
  struct std__allocator_std___Rb_tree_node_int__* this286;
  unsigned long __n287;
  struct std___Rb_tree_node_int_* __retval288;
  this286 = v283;
  __n287 = v284;
  struct std__allocator_std___Rb_tree_node_int__* t289 = this286;
    _Bool r290 = std____is_constant_evaluated();
    if (r290) {
        unsigned long t291 = __n287;
        unsigned long c292 = 40;
        unsigned long ovr293;
        _Bool ovf294 = __builtin_mul_overflow(t291, c292, &ovr293);
        __n287 = ovr293;
        if (ovf294) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t295 = __n287;
      void* r296 = operator_new(t295);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast297 = (struct std___Rb_tree_node_int_*)r296;
      __retval288 = cast297;
      struct std___Rb_tree_node_int_* t298 = __retval288;
      return t298;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base299 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t289 + 0);
  unsigned long t300 = __n287;
  void* c301 = ((void*)0);
  struct std___Rb_tree_node_int_* r302 = std____new_allocator_std___Rb_tree_node_int_____allocate(base299, t300, c301);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval288 = r302;
  struct std___Rb_tree_node_int_* t303 = __retval288;
  return t303;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v304, unsigned long v305) {
bb306:
  struct std__allocator_std___Rb_tree_node_int__* __a307;
  unsigned long __n308;
  struct std___Rb_tree_node_int_* __retval309;
  __a307 = v304;
  __n308 = v305;
  struct std__allocator_std___Rb_tree_node_int__* t310 = __a307;
  unsigned long t311 = __n308;
  struct std___Rb_tree_node_int_* r312 = std__allocator_std___Rb_tree_node_int_____allocate(t310, t311);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval309 = r312;
  struct std___Rb_tree_node_int_* t313 = __retval309;
  return t313;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v314) {
bb315:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this316;
  struct std___Rb_tree_node_int_* __retval317;
  this316 = v314;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t318 = this316;
  struct std__allocator_std___Rb_tree_node_int__* r319 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t318);
  unsigned long c320 = 1;
  struct std___Rb_tree_node_int_* r321 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r319, c320);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval317 = r321;
  struct std___Rb_tree_node_int_* t322 = __retval317;
  return t322;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v323, int* v324) {
bb325:
  int* __location326;
  int* __args327;
  int* __retval328;
  void* __loc329;
  __location326 = v323;
  __args327 = v324;
  int* t330 = __location326;
  void* cast331 = (void*)t330;
  __loc329 = cast331;
    void* t332 = __loc329;
    int* cast333 = (int*)t332;
    int* t334 = __args327;
    int t335 = *t334;
    *cast333 = t335;
    __retval328 = cast333;
    int* t336 = __retval328;
    return t336;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v337, int* v338, int* v339) {
bb340:
  struct std__allocator_std___Rb_tree_node_int__* __a341;
  int* __p342;
  int* __args343;
  __a341 = v337;
  __p342 = v338;
  __args343 = v339;
  int* t344 = __p342;
  int* t345 = __args343;
  int* r346 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t344, t345);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v347, struct std___Rb_tree_node_int_* v348, int* v349) {
bb350:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this351;
  struct std___Rb_tree_node_int_* __node352;
  int* __args353;
  this351 = v347;
  __node352 = v348;
  __args353 = v349;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t354 = this351;
      struct std__allocator_std___Rb_tree_node_int__* r356 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t354);
      struct std___Rb_tree_node_int_* t357 = __node352;
      int* r358 = std___Rb_tree_node_int____M_valptr(t357);
      if (__cir_exc_active) {
        goto cir_try_dispatch355;
      }
      int* t359 = __args353;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r356, r358, t359);
    cir_try_dispatch355: ;
    if (__cir_exc_active) {
    {
      int ca_tok360 = 0;
      void* ca_exn361 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t362 = __node352;
        struct std___Rb_tree_node_int_* t363 = __node352;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t354, t363);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v364, int* v365) {
bb366:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this367;
  int* __args368;
  struct std___Rb_tree_node_int_* __retval369;
  struct std___Rb_tree_node_int_* __tmp370;
  this367 = v364;
  __args368 = v365;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t371 = this367;
  struct std___Rb_tree_node_int_* r372 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t371);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp370 = r372;
  struct std___Rb_tree_node_int_* t373 = __tmp370;
  int* t374 = __args368;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t371, t373, t374);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t375 = __tmp370;
  __retval369 = t375;
  struct std___Rb_tree_node_int_* t376 = __retval369;
  return t376;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v377, int* v378) {
bb379:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this380;
  int* __arg381;
  struct std___Rb_tree_node_int_* __retval382;
  this380 = v377;
  __arg381 = v378;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t383 = this380;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t384 = t383->_M_t;
  int* t385 = __arg381;
  struct std___Rb_tree_node_int_* r386 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t384, t385);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval382 = r386;
  struct std___Rb_tree_node_int_* t387 = __retval382;
  return t387;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v388, struct std___Rb_tree_node_base* v389, struct std___Rb_tree_node_base* v390, struct std___Rb_tree_node_base* v391) {
bb392:
  _Bool __insert_left393;
  struct std___Rb_tree_node_base* __x394;
  struct std___Rb_tree_node_base* __p395;
  struct std___Rb_tree_node_base* __header396;
  __insert_left393 = v388;
  __x394 = v389;
  __p395 = v390;
  __header396 = v391;
  _Bool t397 = __insert_left393;
  struct std___Rb_tree_node_base* t398 = __x394;
  struct std___Rb_tree_node_base* t399 = __p395;
  struct std___Rb_tree_node_base* t400 = __header396;
  std___Rb_tree_insert_and_rebalance(t397, t398, t399, t400);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v401, struct std___Rb_tree_node_base* v402, struct std___Rb_tree_node_base* v403, int* v404, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v405) {
bb406:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this407;
  struct std___Rb_tree_node_base* __x408;
  struct std___Rb_tree_node_base* __p409;
  int* __v410;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen411;
  struct std___Rb_tree_iterator_int_ __retval412;
  _Bool __insert_left413;
  struct std___Rb_tree_node_base* __z414;
  this407 = v401;
  __x408 = v402;
  __p409 = v403;
  __v410 = v404;
  __node_gen411 = v405;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t415 = this407;
  struct std___Rb_tree_node_base* t416 = __x408;
  _Bool cast417 = (_Bool)t416;
  _Bool ternary418;
  if (cast417) {
    _Bool c419 = 1;
    ternary418 = (_Bool)c419;
  } else {
    struct std___Rb_tree_node_base* t420 = __p409;
    struct std___Rb_tree_node_base* r421 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t415);
    _Bool c422 = ((t420 == r421)) ? 1 : 0;
    ternary418 = (_Bool)c422;
  }
  _Bool ternary423;
  if (ternary418) {
    _Bool c424 = 1;
    ternary423 = (_Bool)c424;
  } else {
    struct std___Identity_int_ ref_tmp0425;
    struct std___Rb_tree_key_compare_std__less_int__* base426 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t415->_M_impl) + 0);
    struct std__less_int_* cast427 = (struct std__less_int_*)base426;
    int* t428 = __v410;
    int* r429 = std___Identity_int___operator___int___const(&ref_tmp0425, t428);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t430 = __p409;
    int* r431 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t430);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r432 = std__less_int___operator___int_const___int_const___const(cast427, r429, r431);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary423 = (_Bool)r432;
  }
  __insert_left413 = ternary423;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t433 = __node_gen411;
  int* t434 = __v410;
  struct std___Rb_tree_node_int_* r435 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t433, t434);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base436 = (struct std___Rb_tree_node_base*)((char *)r435 + 0);
  struct std___Rb_tree_node_base* r437 = std___Rb_tree_node_base___M_base_ptr___const(base436);
  __z414 = r437;
  _Bool t438 = __insert_left413;
  struct std___Rb_tree_node_base* t439 = __z414;
  struct std___Rb_tree_node_base* t440 = __p409;
  struct std___Rb_tree_header* base441 = (struct std___Rb_tree_header*)((char *)&(t415->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t438, t439, t440, &base441->_M_header);
  struct std___Rb_tree_header* base442 = (struct std___Rb_tree_header*)((char *)&(t415->_M_impl) + 8);
  unsigned long t443 = base442->_M_node_count;
  unsigned long u444 = t443 + 1;
  base442->_M_node_count = u444;
  struct std___Rb_tree_node_base* t445 = __z414;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval412, t445);
  struct std___Rb_tree_iterator_int_ t446 = __retval412;
  return t446;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v447, struct std___Rb_tree_iterator_int_* v448, _Bool* v449) {
bb450:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this451;
  struct std___Rb_tree_iterator_int_* __x452;
  _Bool* __y453;
  this451 = v447;
  __x452 = v448;
  __y453 = v449;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t454 = this451;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base455 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t454 + 0);
  struct std___Rb_tree_iterator_int_* t456 = __x452;
  t454->first = *t456; // copy
  _Bool* t457 = __y453;
  _Bool t458 = *t457;
  t454->second = t458;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v459, struct std___Rb_tree_node_base* v460) {
bb461:
  struct std___Rb_tree_iterator_int_* this462;
  struct std___Rb_tree_node_base* __x463;
  this462 = v459;
  __x463 = v460;
  struct std___Rb_tree_iterator_int_* t464 = this462;
  struct std___Rb_tree_node_base* t465 = __x463;
  t464->_M_node = t465;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v466, int* v467) {
bb468:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this469;
  int* __v470;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval471;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res472;
  struct std___Identity_int_ ref_tmp0473;
  struct std___Rb_tree_iterator_int_ ref_tmp3474;
  _Bool ref_tmp4475;
  this469 = v466;
  __v470 = v467;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t476 = this469;
  int* t477 = __v470;
  int* r478 = std___Identity_int___operator___int___const(&ref_tmp0473, t477);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r479 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t476, r478);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res472 = r479;
    struct std___Rb_tree_node_base* t480 = __res472.second;
    _Bool cast481 = (_Bool)t480;
    if (cast481) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an482;
      struct std___Rb_tree_iterator_int_ ref_tmp1483;
      _Bool ref_tmp2484;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an482, t476);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t485 = __res472.first;
      struct std___Rb_tree_node_base* t486 = __res472.second;
      int* t487 = __v470;
      struct std___Rb_tree_iterator_int_ r488 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t476, t485, t486, t487, &__an482);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1483 = r488;
      _Bool c489 = 1;
      ref_tmp2484 = c489;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval471, &ref_tmp1483, &ref_tmp2484);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t490 = __retval471;
      return t490;
    }
  struct std___Rb_tree_node_base* t491 = __res472.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3474, t491);
  _Bool c492 = 0;
  ref_tmp4475 = c492;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval471, &ref_tmp3474, &ref_tmp4475);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t493 = __retval471;
  return t493;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v494, struct std___Rb_tree_iterator_int_* v495, _Bool* v496) {
bb497:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this498;
  struct std___Rb_tree_iterator_int_* __x499;
  _Bool* __y500;
  this498 = v494;
  __x499 = v495;
  __y500 = v496;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t501 = this498;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base502 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t501 + 0);
  struct std___Rb_tree_iterator_int_* t503 = __x499;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t501->first, t503);
  _Bool* t504 = __y500;
  _Bool t505 = *t504;
  t501->second = t505;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v506, int* v507) {
bb508:
  struct std__set_int__std__less_int___std__allocator_int__* this509;
  int* __x510;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval511;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p512;
  this509 = v506;
  __x510 = v507;
  struct std__set_int__std__less_int___std__allocator_int__* t513 = this509;
  int* t514 = __x510;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r515 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(&t513->_M_t, t514);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p512 = r515;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval511, &__p512.first, &__p512.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t516 = __retval511;
  return t516;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v517, struct std___Rb_tree_node_base* v518) {
bb519:
  struct std___Rb_tree_const_iterator_int_* this520;
  struct std___Rb_tree_node_base* __x521;
  this520 = v517;
  __x521 = v518;
  struct std___Rb_tree_const_iterator_int_* t522 = this520;
  struct std___Rb_tree_node_base* t523 = __x521;
  t522->_M_node = t523;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v524) {
bb525:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this526;
  struct std___Rb_tree_const_iterator_int_ __retval527;
  this526 = v524;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t528 = this526;
  struct std___Rb_tree_header* base529 = (struct std___Rb_tree_header*)((char *)&(t528->_M_impl) + 8);
  struct std___Rb_tree_node_base* t530 = base529->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval527, t530);
  struct std___Rb_tree_const_iterator_int_ t531 = __retval527;
  return t531;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v532) {
bb533:
  struct std__set_int__std__less_int___std__allocator_int__* this534;
  struct std___Rb_tree_const_iterator_int_ __retval535;
  this534 = v532;
  struct std__set_int__std__less_int___std__allocator_int__* t536 = this534;
  struct std___Rb_tree_const_iterator_int_ r537 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t536->_M_t);
  __retval535 = r537;
  struct std___Rb_tree_const_iterator_int_ t538 = __retval535;
  return t538;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v539, struct std___Rb_tree_const_iterator_int_* v540) {
bb541:
  struct std___Rb_tree_const_iterator_int_* this542;
  struct std___Rb_tree_const_iterator_int_* unnamed543;
  struct std___Rb_tree_const_iterator_int_* __retval544;
  this542 = v539;
  unnamed543 = v540;
  struct std___Rb_tree_const_iterator_int_* t545 = this542;
  struct std___Rb_tree_const_iterator_int_* t546 = unnamed543;
  struct std___Rb_tree_node_base* t547 = t546->_M_node;
  t545->_M_node = t547;
  __retval544 = t545;
  struct std___Rb_tree_const_iterator_int_* t548 = __retval544;
  return t548;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v549, struct std___Rb_tree_const_iterator_int_* v550) {
bb551:
  struct std___Rb_tree_const_iterator_int_* __x552;
  struct std___Rb_tree_const_iterator_int_* __y553;
  _Bool __retval554;
  __x552 = v549;
  __y553 = v550;
  struct std___Rb_tree_const_iterator_int_* t555 = __x552;
  struct std___Rb_tree_node_base* t556 = t555->_M_node;
  struct std___Rb_tree_const_iterator_int_* t557 = __y553;
  struct std___Rb_tree_node_base* t558 = t557->_M_node;
  _Bool c559 = ((t556 == t558)) ? 1 : 0;
  __retval554 = c559;
  _Bool t560 = __retval554;
  return t560;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v561) {
bb562:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this563;
  struct std___Rb_tree_const_iterator_int_ __retval564;
  this563 = v561;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t565 = this563;
  struct std___Rb_tree_node_base* r566 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t565);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval564, r566);
  struct std___Rb_tree_const_iterator_int_ t567 = __retval564;
  return t567;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v568) {
bb569:
  struct std__set_int__std__less_int___std__allocator_int__* this570;
  struct std___Rb_tree_const_iterator_int_ __retval571;
  this570 = v568;
  struct std__set_int__std__less_int___std__allocator_int__* t572 = this570;
  struct std___Rb_tree_const_iterator_int_ r573 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t572->_M_t);
  __retval571 = r573;
  struct std___Rb_tree_const_iterator_int_ t574 = __retval571;
  return t574;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v575) {
bb576:
  struct std___Rb_tree_const_iterator_int_* this577;
  int* __retval578;
  this577 = v575;
  struct std___Rb_tree_const_iterator_int_* t579 = this577;
  struct std___Rb_tree_node_base* t580 = t579->_M_node;
  struct std___Rb_tree_node_int_* derived581 = ((t580) ? (struct std___Rb_tree_node_int_*)((char *)t580 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r582 = std___Rb_tree_node_int____M_valptr___const(derived581);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval578 = r582;
  int* t583 = __retval578;
  return t583;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v584, int v585) {
bb586:
  struct std___Rb_tree_const_iterator_int_* this587;
  int unnamed588;
  struct std___Rb_tree_const_iterator_int_ __retval589;
  this587 = v584;
  unnamed588 = v585;
  struct std___Rb_tree_const_iterator_int_* t590 = this587;
  __retval589 = *t590; // copy
  struct std___Rb_tree_node_base* t591 = t590->_M_node;
  struct std___Rb_tree_node_base* r592 = std___Rb_tree_increment(t591);
  t590->_M_node = r592;
  struct std___Rb_tree_const_iterator_int_ t593 = __retval589;
  return t593;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v594, struct std___Rb_tree_node_base* v595, struct std___Rb_tree_node_base* v596, int* v597) {
bb598:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this599;
  struct std___Rb_tree_node_base* __x600;
  struct std___Rb_tree_node_base* __y601;
  int* __k602;
  struct std___Rb_tree_node_base* __retval603;
  this599 = v594;
  __x600 = v595;
  __y601 = v596;
  __k602 = v597;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t604 = this599;
    while (1) {
      struct std___Rb_tree_node_base* t605 = __x600;
      _Bool cast606 = (_Bool)t605;
      if (!cast606) break;
        struct std___Rb_tree_key_compare_std__less_int__* base607 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t604->_M_impl) + 0);
        struct std__less_int_* cast608 = (struct std__less_int_*)base607;
        struct std___Rb_tree_node_base* t609 = __x600;
        int* r610 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t609);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t611 = __k602;
        _Bool r612 = std__less_int___operator___int_const___int_const___const(cast608, r610, t611);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u613 = !r612;
        if (u613) {
          struct std___Rb_tree_node_base* t614 = __x600;
          __y601 = t614;
          struct std___Rb_tree_node_base* t615 = __x600;
          struct std___Rb_tree_node_base* r616 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t615);
          __x600 = r616;
        } else {
          struct std___Rb_tree_node_base* t617 = __x600;
          struct std___Rb_tree_node_base* r618 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t617);
          __x600 = r618;
        }
    }
  struct std___Rb_tree_node_base* t619 = __y601;
  __retval603 = t619;
  struct std___Rb_tree_node_base* t620 = __retval603;
  return t620;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v621) {
bb622:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this623;
  struct std___Rb_tree_iterator_int_ __retval624;
  this623 = v621;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t625 = this623;
  struct std___Rb_tree_node_base* r626 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t625);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval624, r626);
  struct std___Rb_tree_iterator_int_ t627 = __retval624;
  return t627;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v628, int* v629) {
bb630:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this631;
  int* __k632;
  struct std___Rb_tree_iterator_int_ __retval633;
  struct std___Rb_tree_iterator_int_ __j634;
  struct std___Rb_tree_iterator_int_ ref_tmp0635;
  this631 = v628;
  __k632 = v629;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t636 = this631;
  struct std___Rb_tree_node_base* r637 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t636);
  struct std___Rb_tree_node_base* r638 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t636);
  int* t639 = __k632;
  struct std___Rb_tree_node_base* r640 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t636, r637, r638, t639);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j634, r640);
  struct std___Rb_tree_iterator_int_ r641 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t636);
  ref_tmp0635 = r641;
  _Bool r642 = std__operator__(&__j634, &ref_tmp0635);
  _Bool ternary643;
  if (r642) {
    _Bool c644 = 1;
    ternary643 = (_Bool)c644;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base645 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t636->_M_impl) + 0);
    struct std__less_int_* cast646 = (struct std__less_int_*)base645;
    int* t647 = __k632;
    struct std___Rb_tree_node_base* t648 = __j634._M_node;
    int* r649 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t648);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r650 = std__less_int___operator___int_const___int_const___const(cast646, t647, r649);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary643 = (_Bool)r650;
  }
  if (ternary643) {
    struct std___Rb_tree_iterator_int_ r651 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t636);
    __retval633 = r651;
  } else {
    __retval633 = __j634; // copy
  }
  struct std___Rb_tree_iterator_int_ t652 = __retval633;
  return t652;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____find(struct std__set_int__std__less_int___std__allocator_int__* v653, int* v654) {
bb655:
  struct std__set_int__std__less_int___std__allocator_int__* this656;
  int* __x657;
  struct std___Rb_tree_const_iterator_int_ __retval658;
  struct std___Rb_tree_iterator_int_ ref_tmp0659;
  this656 = v653;
  __x657 = v654;
  struct std__set_int__std__less_int___std__allocator_int__* t660 = this656;
  int* t661 = __x657;
  struct std___Rb_tree_iterator_int_ r662 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(&t660->_M_t, t661);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0659 = r662;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval658, &ref_tmp0659);
  struct std___Rb_tree_const_iterator_int_ t663 = __retval658;
  return t663;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v664) {
bb665:
  struct std___Rb_tree_const_iterator_int_* this666;
  struct std___Rb_tree_const_iterator_int_* __retval667;
  this666 = v664;
  struct std___Rb_tree_const_iterator_int_* t668 = this666;
  struct std___Rb_tree_node_base* t669 = t668->_M_node;
  struct std___Rb_tree_node_base* r670 = std___Rb_tree_increment(t669);
  t668->_M_node = r670;
  __retval667 = t668;
  struct std___Rb_tree_const_iterator_int_* t671 = __retval667;
  return t671;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v672, struct std___Rb_tree_node_base* v673) {
bb674:
  struct std___Rb_tree_node_base* __z675;
  struct std___Rb_tree_node_base* __header676;
  struct std___Rb_tree_node_base* __retval677;
  __z675 = v672;
  __header676 = v673;
  struct std___Rb_tree_node_base* t678 = __z675;
  struct std___Rb_tree_node_base* t679 = __header676;
  struct std___Rb_tree_node_base* r680 = std___Rb_tree_rebalance_for_erase(t678, t679);
  __retval677 = r680;
  struct std___Rb_tree_node_base* t681 = __retval677;
  return t681;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v682, struct std___Rb_tree_const_iterator_int_ v683) {
bb684:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this685;
  struct std___Rb_tree_const_iterator_int_ __position686;
  struct std___Rb_tree_node_base* __y687;
  this685 = v682;
  __position686 = v683;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t688 = this685;
  struct std___Rb_tree_node_base* t689 = __position686._M_node;
  struct std___Rb_tree_header* base690 = (struct std___Rb_tree_header*)((char *)&(t688->_M_impl) + 8);
  struct std___Rb_tree_node_base* r691 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t689, &base690->_M_header);
  __y687 = r691;
  struct std___Rb_tree_node_base* t692 = __y687;
  struct std___Rb_tree_node_int_* derived693 = (struct std___Rb_tree_node_int_*)((char *)t692 - 0);
  struct std___Rb_tree_node_int_* r694 = std___Rb_tree_node_int____M_node_ptr(derived693);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t688, r694);
  struct std___Rb_tree_header* base695 = (struct std___Rb_tree_header*)((char *)&(t688->_M_impl) + 8);
  unsigned long t696 = base695->_M_node_count;
  unsigned long u697 = t696 - 1;
  base695->_M_node_count = u697;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v698, struct std___Rb_tree_const_iterator_int_ v699) {
bb700:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this701;
  struct std___Rb_tree_const_iterator_int_ __position702;
  struct std___Rb_tree_iterator_int_ __retval703;
  struct std___Rb_tree_const_iterator_int_ __result704;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0705;
  this701 = v698;
  __position702 = v699;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t706 = this701;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0707;
          struct std___Rb_tree_iterator_int_ ref_tmp1708;
          struct std___Rb_tree_iterator_int_ r709 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t706);
          ref_tmp1708 = r709;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0707, &ref_tmp1708);
          _Bool r710 = std__operator___2(&__position702, &ref_tmp0707);
          if (r710) {
            char* cast711 = (char*)&(_str_8);
            int c712 = 1818;
            char* cast713 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast714 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast711, c712, cast713, cast714);
          }
      _Bool c715 = 0;
      if (!c715) break;
    } while (1);
  __result704 = __position702; // copy
  struct std___Rb_tree_const_iterator_int_* r716 = std___Rb_tree_const_iterator_int___operator___2(&__result704);
  agg_tmp0705 = __position702; // copy
  struct std___Rb_tree_const_iterator_int_ t717 = agg_tmp0705;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t706, t717);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t718 = __result704._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval703, t718);
  struct std___Rb_tree_iterator_int_ t719 = __retval703;
  return t719;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* v720, struct std___Rb_tree_const_iterator_int_ v721) {
bb722:
  struct std__set_int__std__less_int___std__allocator_int__* this723;
  struct std___Rb_tree_const_iterator_int_ __position724;
  struct std___Rb_tree_const_iterator_int_ __retval725;
  struct std___Rb_tree_iterator_int_ ref_tmp0726;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0727;
  this723 = v720;
  __position724 = v721;
  struct std__set_int__std__less_int___std__allocator_int__* t728 = this723;
  agg_tmp0727 = __position724; // copy
  struct std___Rb_tree_const_iterator_int_ t729 = agg_tmp0727;
  struct std___Rb_tree_iterator_int_ r730 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t728->_M_t, t729);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0726 = r730;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval725, &ref_tmp0726);
  struct std___Rb_tree_const_iterator_int_ t731 = __retval725;
  return t731;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v732, int v733) {
bb734:
  int __a735;
  int __b736;
  int __retval737;
  __a735 = v732;
  __b736 = v733;
  int t738 = __a735;
  int t739 = __b736;
  int b740 = t738 | t739;
  __retval737 = b740;
  int t741 = __retval737;
  return t741;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v742) {
bb743:
  struct std__basic_ios_char__std__char_traits_char__* this744;
  int __retval745;
  this744 = v742;
  struct std__basic_ios_char__std__char_traits_char__* t746 = this744;
  struct std__ios_base* base747 = (struct std__ios_base*)((char *)t746 + 0);
  int t748 = base747->_M_streambuf_state;
  __retval745 = t748;
  int t749 = __retval745;
  return t749;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v750, int v751) {
bb752:
  struct std__basic_ios_char__std__char_traits_char__* this753;
  int __state754;
  this753 = v750;
  __state754 = v751;
  struct std__basic_ios_char__std__char_traits_char__* t755 = this753;
  int r756 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t755);
  if (__cir_exc_active) {
    return;
  }
  int t757 = __state754;
  int r758 = std__operator_(r756, t757);
  std__basic_ios_char__std__char_traits_char_____clear(t755, r758);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v759, char* v760) {
bb761:
  char* __c1762;
  char* __c2763;
  _Bool __retval764;
  __c1762 = v759;
  __c2763 = v760;
  char* t765 = __c1762;
  char t766 = *t765;
  int cast767 = (int)t766;
  char* t768 = __c2763;
  char t769 = *t768;
  int cast770 = (int)t769;
  _Bool c771 = ((cast767 == cast770)) ? 1 : 0;
  __retval764 = c771;
  _Bool t772 = __retval764;
  return t772;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v773) {
bb774:
  char* __p775;
  unsigned long __retval776;
  unsigned long __i777;
  __p775 = v773;
  unsigned long c778 = 0;
  __i777 = c778;
    char ref_tmp0779;
    while (1) {
      unsigned long t780 = __i777;
      char* t781 = __p775;
      char* ptr782 = &(t781)[t780];
      char c783 = 0;
      ref_tmp0779 = c783;
      _Bool r784 = __gnu_cxx__char_traits_char___eq(ptr782, &ref_tmp0779);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u785 = !r784;
      if (!u785) break;
      unsigned long t786 = __i777;
      unsigned long u787 = t786 + 1;
      __i777 = u787;
    }
  unsigned long t788 = __i777;
  __retval776 = t788;
  unsigned long t789 = __retval776;
  return t789;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v790) {
bb791:
  char* __s792;
  unsigned long __retval793;
  __s792 = v790;
    _Bool r794 = std____is_constant_evaluated();
    if (r794) {
      char* t795 = __s792;
      unsigned long r796 = __gnu_cxx__char_traits_char___length(t795);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval793 = r796;
      unsigned long t797 = __retval793;
      return t797;
    }
  char* t798 = __s792;
  unsigned long r799 = strlen(t798);
  __retval793 = r799;
  unsigned long t800 = __retval793;
  return t800;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v801, char* v802) {
bb803:
  struct std__basic_ostream_char__std__char_traits_char__* __out804;
  char* __s805;
  struct std__basic_ostream_char__std__char_traits_char__* __retval806;
  __out804 = v801;
  __s805 = v802;
    char* t807 = __s805;
    _Bool cast808 = (_Bool)t807;
    _Bool u809 = !cast808;
    if (u809) {
      struct std__basic_ostream_char__std__char_traits_char__* t810 = __out804;
      void** v811 = (void**)t810;
      void* v812 = *((void**)v811);
      unsigned char* cast813 = (unsigned char*)v812;
      long c814 = -24;
      unsigned char* ptr815 = &(cast813)[c814];
      long* cast816 = (long*)ptr815;
      long t817 = *cast816;
      unsigned char* cast818 = (unsigned char*)t810;
      unsigned char* ptr819 = &(cast818)[t817];
      struct std__basic_ostream_char__std__char_traits_char__* cast820 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr819;
      struct std__basic_ios_char__std__char_traits_char__* cast821 = (struct std__basic_ios_char__std__char_traits_char__*)cast820;
      int t822 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast821, t822);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t823 = __out804;
      char* t824 = __s805;
      char* t825 = __s805;
      unsigned long r826 = std__char_traits_char___length(t825);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast827 = (long)r826;
      struct std__basic_ostream_char__std__char_traits_char__* r828 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t823, t824, cast827);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t829 = __out804;
  __retval806 = t829;
  struct std__basic_ostream_char__std__char_traits_char__* t830 = __retval806;
  return t830;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v831, void* v832) {
bb833:
  struct std__basic_ostream_char__std__char_traits_char__* this834;
  void* __pf835;
  struct std__basic_ostream_char__std__char_traits_char__* __retval836;
  this834 = v831;
  __pf835 = v832;
  struct std__basic_ostream_char__std__char_traits_char__* t837 = this834;
  void* t838 = __pf835;
  struct std__basic_ostream_char__std__char_traits_char__* r839 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t838)(t837);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval836 = r839;
  struct std__basic_ostream_char__std__char_traits_char__* t840 = __retval836;
  return t840;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v841) {
bb842:
  struct std__basic_ostream_char__std__char_traits_char__* __os843;
  struct std__basic_ostream_char__std__char_traits_char__* __retval844;
  __os843 = v841;
  struct std__basic_ostream_char__std__char_traits_char__* t845 = __os843;
  struct std__basic_ostream_char__std__char_traits_char__* r846 = std__ostream__flush(t845);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval844 = r846;
  struct std__basic_ostream_char__std__char_traits_char__* t847 = __retval844;
  return t847;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v848) {
bb849:
  struct std__ctype_char_* __f850;
  struct std__ctype_char_* __retval851;
  __f850 = v848;
    struct std__ctype_char_* t852 = __f850;
    _Bool cast853 = (_Bool)t852;
    _Bool u854 = !cast853;
    if (u854) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t855 = __f850;
  __retval851 = t855;
  struct std__ctype_char_* t856 = __retval851;
  return t856;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v857, char v858) {
bb859:
  struct std__ctype_char_* this860;
  char __c861;
  char __retval862;
  this860 = v857;
  __c861 = v858;
  struct std__ctype_char_* t863 = this860;
    char t864 = t863->_M_widen_ok;
    _Bool cast865 = (_Bool)t864;
    if (cast865) {
      char t866 = __c861;
      unsigned char cast867 = (unsigned char)t866;
      unsigned long cast868 = (unsigned long)cast867;
      char t869 = t863->_M_widen[cast868];
      __retval862 = t869;
      char t870 = __retval862;
      return t870;
    }
  std__ctype_char____M_widen_init___const(t863);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t871 = __c861;
  void** v872 = (void**)t863;
  void* v873 = *((void**)v872);
  char vcall876 = (char)__VERIFIER_virtual_call_char_char(t863, 6, t871);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval862 = vcall876;
  char t877 = __retval862;
  return t877;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v878, char v879) {
bb880:
  struct std__basic_ios_char__std__char_traits_char__* this881;
  char __c882;
  char __retval883;
  this881 = v878;
  __c882 = v879;
  struct std__basic_ios_char__std__char_traits_char__* t884 = this881;
  struct std__ctype_char_* t885 = t884->_M_ctype;
  struct std__ctype_char_* r886 = std__ctype_char__const__std____check_facet_std__ctype_char___(t885);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t887 = __c882;
  char r888 = std__ctype_char___widen_char__const(r886, t887);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval883 = r888;
  char t889 = __retval883;
  return t889;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v890) {
bb891:
  struct std__basic_ostream_char__std__char_traits_char__* __os892;
  struct std__basic_ostream_char__std__char_traits_char__* __retval893;
  __os892 = v890;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __os892;
  struct std__basic_ostream_char__std__char_traits_char__* t895 = __os892;
  void** v896 = (void**)t895;
  void* v897 = *((void**)v896);
  unsigned char* cast898 = (unsigned char*)v897;
  long c899 = -24;
  unsigned char* ptr900 = &(cast898)[c899];
  long* cast901 = (long*)ptr900;
  long t902 = *cast901;
  unsigned char* cast903 = (unsigned char*)t895;
  unsigned char* ptr904 = &(cast903)[t902];
  struct std__basic_ostream_char__std__char_traits_char__* cast905 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr904;
  struct std__basic_ios_char__std__char_traits_char__* cast906 = (struct std__basic_ios_char__std__char_traits_char__*)cast905;
  char c907 = 10;
  char r908 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast906, c907);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r909 = std__ostream__put(t894, r908);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r910 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r909);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval893 = r910;
  struct std__basic_ostream_char__std__char_traits_char__* t911 = __retval893;
  return t911;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v912) {
bb913:
  struct std__set_int__std__less_int___std__allocator_int__* this914;
  this914 = v912;
  struct std__set_int__std__less_int___std__allocator_int__* t915 = this914;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t915->_M_t);
  }
  return;
}

// function: main
int main() {
bb916:
  int __retval917;
  struct std__set_int__std__less_int___std__allocator_int__ myset918;
  struct std___Rb_tree_const_iterator_int_ it919;
  int i920;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3921;
  int ref_tmp4922;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2923;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3924;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4925;
  int ref_tmp5926;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5927;
  struct std___Rb_tree_const_iterator_int_ ref_tmp6928;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6929;
  struct std___Rb_tree_const_iterator_int_ agg_tmp7930;
  int c931 = 0;
  __retval917 = c931;
  std__set_int__std__less_int___std__allocator_int_____set(&myset918);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it919);
    unsigned long r932 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset918);
    unsigned long c933 = 0;
    _Bool c934 = ((r932 == c933)) ? 1 : 0;
    if (c934) {
    } else {
      char* cast935 = (char*)&(_str);
      char* c936 = _str_1;
      unsigned int c937 = 18;
      char* cast938 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast935, c936, c937, cast938);
    }
      int ref_tmp0939;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0940;
      int c941 = 1;
      i920 = c941;
      while (1) {
        int t943 = i920;
        int c944 = 5;
        _Bool c945 = ((t943 <= c944)) ? 1 : 0;
        if (!c945) break;
        int t946 = i920;
        int c947 = 10;
        int b948 = t946 * c947;
        ref_tmp0939 = b948;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r949 = std__set_int__std__less_int___std__allocator_int_____insert(&myset918, &ref_tmp0939);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset918);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0940 = r949;
      for_step942: ;
        int t950 = i920;
        int u951 = t950 + 1;
        i920 = u951;
      }
    unsigned long r952 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset918);
    unsigned long c953 = 5;
    _Bool c954 = ((r952 == c953)) ? 1 : 0;
    if (c954) {
    } else {
      char* cast955 = (char*)&(_str_2);
      char* c956 = _str_1;
      unsigned int c957 = 21;
      char* cast958 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast955, c956, c957, cast958);
    }
    int c959 = 10;
    i920 = c959;
      struct std___Rb_tree_const_iterator_int_ ref_tmp1960;
      struct std___Rb_tree_const_iterator_int_ ref_tmp2961;
      struct std___Rb_tree_const_iterator_int_ agg_tmp1962;
      struct std___Rb_tree_const_iterator_int_ r963 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset918);
      ref_tmp1960 = r963;
      struct std___Rb_tree_const_iterator_int_* r964 = std___Rb_tree_const_iterator_int___operator_(&it919, &ref_tmp1960);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r966 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset918);
        ref_tmp2961 = r966;
        _Bool r967 = std__operator___2(&it919, &ref_tmp2961);
        _Bool u968 = !r967;
        if (!u968) break;
          int* r969 = std___Rb_tree_const_iterator_int___operator____const(&it919);
          int t970 = *r969;
          int t971 = i920;
          _Bool c972 = ((t970 == t971)) ? 1 : 0;
          if (c972) {
          } else {
            char* cast973 = (char*)&(_str_3);
            char* c974 = _str_1;
            unsigned int c975 = 25;
            char* cast976 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast973, c974, c975, cast976);
          }
          int c977 = 10;
          int t978 = i920;
          int b979 = t978 + c977;
          i920 = b979;
      for_step965: ;
        int c980 = 0;
        struct std___Rb_tree_const_iterator_int_ r981 = std___Rb_tree_const_iterator_int___operator__(&it919, c980);
        agg_tmp1962 = r981;
      }
    int c982 = 20;
    ref_tmp4922 = c982;
    struct std___Rb_tree_const_iterator_int_ r983 = std__set_int__std__less_int___std__allocator_int_____find(&myset918, &ref_tmp4922);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset918);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp3921 = r983;
    struct std___Rb_tree_const_iterator_int_* r984 = std___Rb_tree_const_iterator_int___operator_(&it919, &ref_tmp3921);
    int* r985 = std___Rb_tree_const_iterator_int___operator____const(&it919);
    int t986 = *r985;
    int c987 = 20;
    _Bool c988 = ((t986 == c987)) ? 1 : 0;
    if (c988) {
    } else {
      char* cast989 = (char*)&(_str_4);
      char* c990 = _str_1;
      unsigned int c991 = 29;
      char* cast992 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast989, c990, c991, cast992);
    }
    agg_tmp2923 = it919; // copy
    struct std___Rb_tree_const_iterator_int_ t993 = agg_tmp2923;
    struct std___Rb_tree_const_iterator_int_ r994 = std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset918, t993);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset918);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3924 = r994;
    int c995 = 40;
    ref_tmp5926 = c995;
    struct std___Rb_tree_const_iterator_int_ r996 = std__set_int__std__less_int___std__allocator_int_____find(&myset918, &ref_tmp5926);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset918);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp4925 = r996;
    struct std___Rb_tree_const_iterator_int_ t997 = agg_tmp4925;
    struct std___Rb_tree_const_iterator_int_ r998 = std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset918, t997);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset918);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp5927 = r998;
    struct std___Rb_tree_const_iterator_int_ r999 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset918);
    ref_tmp6928 = r999;
    struct std___Rb_tree_const_iterator_int_* r1000 = std___Rb_tree_const_iterator_int___operator_(&it919, &ref_tmp6928);
    int c1001 = 0;
    struct std___Rb_tree_const_iterator_int_ r1002 = std___Rb_tree_const_iterator_int___operator__(&it919, c1001);
    agg_tmp6929 = r1002;
    int c1003 = 0;
    struct std___Rb_tree_const_iterator_int_ r1004 = std___Rb_tree_const_iterator_int___operator__(&it919, c1003);
    agg_tmp7930 = r1004;
    int* r1005 = std___Rb_tree_const_iterator_int___operator____const(&it919);
    int t1006 = *r1005;
    int c1007 = 50;
    _Bool c1008 = ((t1006 == c1007)) ? 1 : 0;
    if (c1008) {
    } else {
      char* cast1009 = (char*)&(_str_5);
      char* c1010 = _str_1;
      unsigned int c1011 = 34;
      char* cast1012 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1009, c1010, c1011, cast1012);
    }
    char* cast1013 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1014 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1013);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset918);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp71015;
      struct std___Rb_tree_const_iterator_int_ ref_tmp81016;
      struct std___Rb_tree_const_iterator_int_ agg_tmp81017;
      struct std___Rb_tree_const_iterator_int_ r1018 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset918);
      ref_tmp71015 = r1018;
      struct std___Rb_tree_const_iterator_int_* r1019 = std___Rb_tree_const_iterator_int___operator_(&it919, &ref_tmp71015);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r1021 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset918);
        ref_tmp81016 = r1021;
        _Bool r1022 = std__operator___2(&it919, &ref_tmp81016);
        _Bool u1023 = !r1022;
        if (!u1023) break;
        char* cast1024 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r1025 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1024);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset918);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r1026 = std___Rb_tree_const_iterator_int___operator____const(&it919);
        int t1027 = *r1026;
        struct std__basic_ostream_char__std__char_traits_char__* r1028 = std__ostream__operator__(r1025, t1027);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset918);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1020: ;
        int c1029 = 0;
        struct std___Rb_tree_const_iterator_int_ r1030 = std___Rb_tree_const_iterator_int___operator__(&it919, c1029);
        agg_tmp81017 = r1030;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1031 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset918);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1032 = 0;
    __retval917 = c1032;
    int t1033 = __retval917;
    int ret_val1034 = t1033;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset918);
    }
    return ret_val1034;
  int t1035 = __retval917;
  return t1035;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1036) {
bb1037:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1038;
  this1038 = v1036;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1039 = this1038;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1039->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1040) {
bb1041:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1042;
  this1042 = v1040;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1043 = this1042;
    struct std___Rb_tree_node_int_* r1044 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1043);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1043, r1044);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1043->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1043->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1045) {
bb1046:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1047;
  this1047 = v1045;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1048 = this1047;
  struct std__allocator_std___Rb_tree_node_int__* base1049 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1048 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1049);
    struct std___Rb_tree_key_compare_std__less_int__* base1050 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1048 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1050);
    struct std___Rb_tree_header* base1051 = (struct std___Rb_tree_header*)((char *)t1048 + 8);
    std___Rb_tree_header___Rb_tree_header(base1051);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1052) {
bb1053:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1054;
  this1054 = v1052;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1055 = this1054;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1056 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1055 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1056);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1057) {
bb1058:
  struct std____new_allocator_std___Rb_tree_node_int__* this1059;
  this1059 = v1057;
  struct std____new_allocator_std___Rb_tree_node_int__* t1060 = this1059;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1061) {
bb1062:
  struct std__allocator_std___Rb_tree_node_int__* this1063;
  this1063 = v1061;
  struct std__allocator_std___Rb_tree_node_int__* t1064 = this1063;
  struct std____new_allocator_std___Rb_tree_node_int__* base1065 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1064 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1065);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1066) {
bb1067:
  struct std___Rb_tree_key_compare_std__less_int__* this1068;
  this1068 = v1066;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1069) {
bb1070:
  struct std___Rb_tree_header* this1071;
  this1071 = v1069;
  struct std___Rb_tree_header* t1072 = this1071;
  struct std___Rb_tree_node_base* c1073 = ((void*)0);
  t1072->_M_header._M_parent = c1073;
  t1072->_M_header._M_left = &t1072->_M_header;
  t1072->_M_header._M_right = &t1072->_M_header;
  unsigned long c1074 = 0;
  t1072->_M_node_count = c1074;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1075) {
bb1076:
  struct std___Rb_tree_header* this1077;
  this1077 = v1075;
  struct std___Rb_tree_header* t1078 = this1077;
  unsigned int c1079 = 0;
  t1078->_M_header._M_color = c1079;
  std___Rb_tree_header___M_reset(t1078);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1080) {
bb1081:
  struct std__allocator_std___Rb_tree_node_int__* this1082;
  this1082 = v1080;
  struct std__allocator_std___Rb_tree_node_int__* t1083 = this1082;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1084) {
bb1085:
  struct std___Rb_tree_node_int_* this1086;
  struct std___Rb_tree_node_int_* __retval1087;
  this1086 = v1084;
  struct std___Rb_tree_node_int_* t1088 = this1086;
  __retval1087 = t1088;
  struct std___Rb_tree_node_int_* t1089 = __retval1087;
  return t1089;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1090) {
bb1091:
  struct std___Rb_tree_node_int_* __x1092;
  struct std___Rb_tree_node_int_* __retval1093;
  __x1092 = v1090;
  struct std___Rb_tree_node_int_* t1094 = __x1092;
  struct std___Rb_tree_node_base* base1095 = (struct std___Rb_tree_node_base*)((char *)t1094 + 0);
  struct std___Rb_tree_node_base* t1096 = base1095->_M_right;
  _Bool cast1097 = (_Bool)t1096;
  struct std___Rb_tree_node_int_* ternary1098;
  if (cast1097) {
    struct std___Rb_tree_node_int_* t1099 = __x1092;
    struct std___Rb_tree_node_base* base1100 = (struct std___Rb_tree_node_base*)((char *)t1099 + 0);
    struct std___Rb_tree_node_base* t1101 = base1100->_M_right;
    struct std___Rb_tree_node_int_* derived1102 = (struct std___Rb_tree_node_int_*)((char *)t1101 - 0);
    struct std___Rb_tree_node_int_* r1103 = std___Rb_tree_node_int____M_node_ptr(derived1102);
    ternary1098 = (struct std___Rb_tree_node_int_*)r1103;
  } else {
    struct std___Rb_tree_node_int_* c1104 = ((void*)0);
    ternary1098 = (struct std___Rb_tree_node_int_*)c1104;
  }
  __retval1093 = ternary1098;
  struct std___Rb_tree_node_int_* t1105 = __retval1093;
  return t1105;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1106) {
bb1107:
  struct std___Rb_tree_node_int_* __x1108;
  struct std___Rb_tree_node_int_* __retval1109;
  __x1108 = v1106;
  struct std___Rb_tree_node_int_* t1110 = __x1108;
  struct std___Rb_tree_node_base* base1111 = (struct std___Rb_tree_node_base*)((char *)t1110 + 0);
  struct std___Rb_tree_node_base* t1112 = base1111->_M_left;
  _Bool cast1113 = (_Bool)t1112;
  struct std___Rb_tree_node_int_* ternary1114;
  if (cast1113) {
    struct std___Rb_tree_node_int_* t1115 = __x1108;
    struct std___Rb_tree_node_base* base1116 = (struct std___Rb_tree_node_base*)((char *)t1115 + 0);
    struct std___Rb_tree_node_base* t1117 = base1116->_M_left;
    struct std___Rb_tree_node_int_* derived1118 = (struct std___Rb_tree_node_int_*)((char *)t1117 - 0);
    struct std___Rb_tree_node_int_* r1119 = std___Rb_tree_node_int____M_node_ptr(derived1118);
    ternary1114 = (struct std___Rb_tree_node_int_*)r1119;
  } else {
    struct std___Rb_tree_node_int_* c1120 = ((void*)0);
    ternary1114 = (struct std___Rb_tree_node_int_*)c1120;
  }
  __retval1109 = ternary1114;
  struct std___Rb_tree_node_int_* t1121 = __retval1109;
  return t1121;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1122) {
bb1123:
  int* __location1124;
  __location1124 = v1122;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1125, int* v1126) {
bb1127:
  struct std__allocator_std___Rb_tree_node_int__* __a1128;
  int* __p1129;
  __a1128 = v1125;
  __p1129 = v1126;
  int* t1130 = __p1129;
  void_std__destroy_at_int_(t1130);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1131) {
bb1132:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1133;
  struct std__allocator_std___Rb_tree_node_int__* __retval1134;
  this1133 = v1131;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1135 = this1133;
  struct std__allocator_std___Rb_tree_node_int__* base1136 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1135->_M_impl) + 0);
  __retval1134 = base1136;
  struct std__allocator_std___Rb_tree_node_int__* t1137 = __retval1134;
  return t1137;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1138) {
bb1139:
  struct __gnu_cxx____aligned_membuf_int_* this1140;
  void* __retval1141;
  this1140 = v1138;
  struct __gnu_cxx____aligned_membuf_int_* t1142 = this1140;
  void* cast1143 = (void*)&(t1142->_M_storage);
  __retval1141 = cast1143;
  void* t1144 = __retval1141;
  return t1144;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1145) {
bb1146:
  struct __gnu_cxx____aligned_membuf_int_* this1147;
  int* __retval1148;
  this1147 = v1145;
  struct __gnu_cxx____aligned_membuf_int_* t1149 = this1147;
  void* r1150 = __gnu_cxx____aligned_membuf_int____M_addr(t1149);
  int* cast1151 = (int*)r1150;
  __retval1148 = cast1151;
  int* t1152 = __retval1148;
  return t1152;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1153) {
bb1154:
  struct std___Rb_tree_node_int_* this1155;
  int* __retval1156;
  this1155 = v1153;
  struct std___Rb_tree_node_int_* t1157 = this1155;
  int* r1158 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1157->_M_storage);
  __retval1156 = r1158;
  int* t1159 = __retval1156;
  return t1159;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1160, struct std___Rb_tree_node_int_* v1161) {
bb1162:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1163;
  struct std___Rb_tree_node_int_* __p1164;
  this1163 = v1160;
  __p1164 = v1161;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1165 = this1163;
  struct std__allocator_std___Rb_tree_node_int__* r1166 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1165);
  struct std___Rb_tree_node_int_* t1167 = __p1164;
  int* r1168 = std___Rb_tree_node_int____M_valptr(t1167);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1166, r1168);
  struct std___Rb_tree_node_int_* t1169 = __p1164;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1170:
  _Bool __retval1171;
    _Bool c1172 = 0;
    __retval1171 = c1172;
    _Bool t1173 = __retval1171;
    return t1173;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1174, struct std___Rb_tree_node_int_* v1175, unsigned long v1176) {
bb1177:
  struct std____new_allocator_std___Rb_tree_node_int__* this1178;
  struct std___Rb_tree_node_int_* __p1179;
  unsigned long __n1180;
  this1178 = v1174;
  __p1179 = v1175;
  __n1180 = v1176;
  struct std____new_allocator_std___Rb_tree_node_int__* t1181 = this1178;
    unsigned long c1182 = 8;
    unsigned long c1183 = 16;
    _Bool c1184 = ((c1182 > c1183)) ? 1 : 0;
    if (c1184) {
      struct std___Rb_tree_node_int_* t1185 = __p1179;
      void* cast1186 = (void*)t1185;
      unsigned long t1187 = __n1180;
      unsigned long c1188 = 40;
      unsigned long b1189 = t1187 * c1188;
      unsigned long c1190 = 8;
      operator_delete_3(cast1186, b1189, c1190);
      return;
    }
  struct std___Rb_tree_node_int_* t1191 = __p1179;
  void* cast1192 = (void*)t1191;
  unsigned long t1193 = __n1180;
  unsigned long c1194 = 40;
  unsigned long b1195 = t1193 * c1194;
  operator_delete_2(cast1192, b1195);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1196, struct std___Rb_tree_node_int_* v1197, unsigned long v1198) {
bb1199:
  struct std__allocator_std___Rb_tree_node_int__* this1200;
  struct std___Rb_tree_node_int_* __p1201;
  unsigned long __n1202;
  this1200 = v1196;
  __p1201 = v1197;
  __n1202 = v1198;
  struct std__allocator_std___Rb_tree_node_int__* t1203 = this1200;
    _Bool r1204 = std____is_constant_evaluated();
    if (r1204) {
      struct std___Rb_tree_node_int_* t1205 = __p1201;
      void* cast1206 = (void*)t1205;
      operator_delete(cast1206);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1207 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1203 + 0);
  struct std___Rb_tree_node_int_* t1208 = __p1201;
  unsigned long t1209 = __n1202;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1207, t1208, t1209);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1210, struct std___Rb_tree_node_int_* v1211, unsigned long v1212) {
bb1213:
  struct std__allocator_std___Rb_tree_node_int__* __a1214;
  struct std___Rb_tree_node_int_* __p1215;
  unsigned long __n1216;
  __a1214 = v1210;
  __p1215 = v1211;
  __n1216 = v1212;
  struct std__allocator_std___Rb_tree_node_int__* t1217 = __a1214;
  struct std___Rb_tree_node_int_* t1218 = __p1215;
  unsigned long t1219 = __n1216;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1217, t1218, t1219);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1220, struct std___Rb_tree_node_int_* v1221) {
bb1222:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1223;
  struct std___Rb_tree_node_int_* __p1224;
  this1223 = v1220;
  __p1224 = v1221;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1225 = this1223;
  struct std__allocator_std___Rb_tree_node_int__* r1226 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1225);
  struct std___Rb_tree_node_int_* t1227 = __p1224;
  unsigned long c1228 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1226, t1227, c1228);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1229, struct std___Rb_tree_node_int_* v1230) {
bb1231:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1232;
  struct std___Rb_tree_node_int_* __p1233;
  this1232 = v1229;
  __p1233 = v1230;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1234 = this1232;
  struct std___Rb_tree_node_int_* t1235 = __p1233;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1234, t1235);
  struct std___Rb_tree_node_int_* t1236 = __p1233;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1234, t1236);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1237, struct std___Rb_tree_node_int_* v1238) {
bb1239:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1240;
  struct std___Rb_tree_node_int_* __x1241;
  this1240 = v1237;
  __x1241 = v1238;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1242 = this1240;
    while (1) {
      struct std___Rb_tree_node_int_* t1243 = __x1241;
      _Bool cast1244 = (_Bool)t1243;
      if (!cast1244) break;
        struct std___Rb_tree_node_int_* __y1245;
        struct std___Rb_tree_node_int_* t1246 = __x1241;
        struct std___Rb_tree_node_int_* r1247 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1246);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1242, r1247);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1248 = __x1241;
        struct std___Rb_tree_node_int_* r1249 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1248);
        if (__cir_exc_active) {
          return;
        }
        __y1245 = r1249;
        struct std___Rb_tree_node_int_* t1250 = __x1241;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1242, t1250);
        struct std___Rb_tree_node_int_* t1251 = __y1245;
        __x1241 = t1251;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1252) {
bb1253:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1254;
  struct std___Rb_tree_node_int_* __retval1255;
  struct std___Rb_tree_node_base* __begin1256;
  this1254 = v1252;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1257 = this1254;
  struct std___Rb_tree_header* base1258 = (struct std___Rb_tree_header*)((char *)&(t1257->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1259 = base1258->_M_header._M_parent;
  __begin1256 = t1259;
  struct std___Rb_tree_node_base* t1260 = __begin1256;
  _Bool cast1261 = (_Bool)t1260;
  struct std___Rb_tree_node_int_* ternary1262;
  if (cast1261) {
    struct std___Rb_tree_node_base* t1263 = __begin1256;
    struct std___Rb_tree_node_int_* derived1264 = (struct std___Rb_tree_node_int_*)((char *)t1263 - 0);
    struct std___Rb_tree_node_int_* r1265 = std___Rb_tree_node_int____M_node_ptr(derived1264);
    ternary1262 = (struct std___Rb_tree_node_int_*)r1265;
  } else {
    struct std___Rb_tree_node_int_* c1266 = ((void*)0);
    ternary1262 = (struct std___Rb_tree_node_int_*)c1266;
  }
  __retval1255 = ternary1262;
  struct std___Rb_tree_node_int_* t1267 = __retval1255;
  return t1267;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1268, struct std___Rb_tree_iterator_int_* v1269) {
bb1270:
  struct std___Rb_tree_const_iterator_int_* this1271;
  struct std___Rb_tree_iterator_int_* __it1272;
  this1271 = v1268;
  __it1272 = v1269;
  struct std___Rb_tree_const_iterator_int_* t1273 = this1271;
  struct std___Rb_tree_iterator_int_* t1274 = __it1272;
  struct std___Rb_tree_node_base* t1275 = t1274->_M_node;
  t1273->_M_node = t1275;
  return;
}

