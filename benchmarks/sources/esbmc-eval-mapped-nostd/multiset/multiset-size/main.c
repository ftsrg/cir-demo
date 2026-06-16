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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[20] = "myints.size() == 10";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 11";
char _str_7[10] = "3. size: ";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
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
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert_2(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p0, struct std___Rb_tree_iterator_int_* p1, struct std___Rb_tree_iterator_int_* p2);
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____erase(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v4, int v5) {
bb6: ;
  int __a7;
  int __b8;
  int __retval9;
  __a7 = v4;
  __b8 = v5;
  int t10 = __a7;
  int t11 = __b8;
  int b12 = t10 | t11;
  __retval9 = b12;
  int t13 = __retval9;
  return t13;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v14) {
bb15: ;
  struct std__basic_ios_char__std__char_traits_char__* this16;
  int __retval17;
  this16 = v14;
  struct std__basic_ios_char__std__char_traits_char__* t18 = this16;
  struct std__ios_base* base19 = (struct std__ios_base*)((char *)t18 + 0);
  int t20 = base19->_M_streambuf_state;
  __retval17 = t20;
  int t21 = __retval17;
  return t21;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v22, int v23) {
bb24: ;
  struct std__basic_ios_char__std__char_traits_char__* this25;
  int __state26;
  this25 = v22;
  __state26 = v23;
  struct std__basic_ios_char__std__char_traits_char__* t27 = this25;
  int r28 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t27);
  if (__cir_exc_active) {
    return;
  }
  int t29 = __state26;
  int r30 = std__operator_(r28, t29);
  std__basic_ios_char__std__char_traits_char_____clear(t27, r30);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33: ;
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46: ;
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63: ;
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v103) {
bb104: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this105;
  unsigned long __retval106;
  this105 = v103;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t107 = this105;
  struct std___Rb_tree_header* base108 = (struct std___Rb_tree_header*)((char *)&(t107->_M_impl) + 8);
  unsigned long t109 = base108->_M_node_count;
  __retval106 = t109;
  unsigned long t110 = __retval106;
  return t110;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v111) {
bb112: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this113;
  unsigned long __retval114;
  this113 = v111;
  struct std__multiset_int__std__less_int___std__allocator_int__* t115 = this113;
  unsigned long r116 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t115->_M_t);
  __retval114 = r116;
  unsigned long t117 = __retval114;
  return t117;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v118, void* v119) {
bb120: ;
  struct std__basic_ostream_char__std__char_traits_char__* this121;
  void* __pf122;
  struct std__basic_ostream_char__std__char_traits_char__* __retval123;
  this121 = v118;
  __pf122 = v119;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = this121;
  void* t125 = __pf122;
  struct std__basic_ostream_char__std__char_traits_char__* r126 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t125)(t124);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval123 = r126;
  struct std__basic_ostream_char__std__char_traits_char__* t127 = __retval123;
  return t127;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v128) {
bb129: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os130;
  struct std__basic_ostream_char__std__char_traits_char__* __retval131;
  __os130 = v128;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __os130;
  struct std__basic_ostream_char__std__char_traits_char__* r133 = std__ostream__flush(t132);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval131 = r133;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval131;
  return t134;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v135) {
bb136: ;
  struct std__ctype_char_* __f137;
  struct std__ctype_char_* __retval138;
  __f137 = v135;
    struct std__ctype_char_* t139 = __f137;
    _Bool cast140 = (_Bool)t139;
    _Bool u141 = !cast140;
    if (u141) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t142 = __f137;
  __retval138 = t142;
  struct std__ctype_char_* t143 = __retval138;
  return t143;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v144, char v145) {
bb146: ;
  struct std__ctype_char_* this147;
  char __c148;
  char __retval149;
  this147 = v144;
  __c148 = v145;
  struct std__ctype_char_* t150 = this147;
    char t151 = t150->_M_widen_ok;
    _Bool cast152 = (_Bool)t151;
    if (cast152) {
      char t153 = __c148;
      unsigned char cast154 = (unsigned char)t153;
      unsigned long cast155 = (unsigned long)cast154;
      char t156 = t150->_M_widen[cast155];
      __retval149 = t156;
      char t157 = __retval149;
      return t157;
    }
  std__ctype_char____M_widen_init___const(t150);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t158 = __c148;
  void** v159 = (void**)t150;
  void* v160 = *((void**)v159);
  char vcall163 = (char)__VERIFIER_virtual_call_char_char(t150, 6, t158);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval149 = vcall163;
  char t164 = __retval149;
  return t164;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v165, char v166) {
bb167: ;
  struct std__basic_ios_char__std__char_traits_char__* this168;
  char __c169;
  char __retval170;
  this168 = v165;
  __c169 = v166;
  struct std__basic_ios_char__std__char_traits_char__* t171 = this168;
  struct std__ctype_char_* t172 = t171->_M_ctype;
  struct std__ctype_char_* r173 = std__ctype_char__const__std____check_facet_std__ctype_char___(t172);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t174 = __c169;
  char r175 = std__ctype_char___widen_char__const(r173, t174);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval170 = r175;
  char t176 = __retval170;
  return t176;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v177) {
bb178: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os179;
  struct std__basic_ostream_char__std__char_traits_char__* __retval180;
  __os179 = v177;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __os179;
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __os179;
  void** v183 = (void**)t182;
  void* v184 = *((void**)v183);
  unsigned char* cast185 = (unsigned char*)v184;
  long c186 = -24;
  unsigned char* ptr187 = &(cast185)[c186];
  long* cast188 = (long*)ptr187;
  long t189 = *cast188;
  unsigned char* cast190 = (unsigned char*)t182;
  unsigned char* ptr191 = &(cast190)[t189];
  struct std__basic_ostream_char__std__char_traits_char__* cast192 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr191;
  struct std__basic_ios_char__std__char_traits_char__* cast193 = (struct std__basic_ios_char__std__char_traits_char__*)cast192;
  char c194 = 10;
  char r195 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast193, c194);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__ostream__put(t181, r195);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r197 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r196);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval180 = r197;
  struct std__basic_ostream_char__std__char_traits_char__* t198 = __retval180;
  return t198;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v199) {
bb200: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this201;
  struct std___Rb_tree_node_base* __retval202;
  this201 = v199;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t203 = this201;
  struct std___Rb_tree_header* base204 = (struct std___Rb_tree_header*)((char *)&(t203->_M_impl) + 8);
  struct std___Rb_tree_node_base* t205 = base204->_M_header._M_parent;
  __retval202 = t205;
  struct std___Rb_tree_node_base* t206 = __retval202;
  return t206;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v207) {
bb208: ;
  struct std___Rb_tree_node_base* this209;
  struct std___Rb_tree_node_base* __retval210;
  this209 = v207;
  struct std___Rb_tree_node_base* t211 = this209;
  __retval210 = t211;
  struct std___Rb_tree_node_base* t212 = __retval210;
  return t212;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v213) {
bb214: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this215;
  struct std___Rb_tree_node_base* __retval216;
  this215 = v213;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t217 = this215;
  struct std___Rb_tree_header* base218 = (struct std___Rb_tree_header*)((char *)&(t217->_M_impl) + 8);
  struct std___Rb_tree_node_base* r219 = std___Rb_tree_node_base___M_base_ptr___const(&base218->_M_header);
  __retval216 = r219;
  struct std___Rb_tree_node_base* t220 = __retval216;
  return t220;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v221, int* v222, int* v223) {
bb224: ;
  struct std__less_int_* this225;
  int* __x226;
  int* __y227;
  _Bool __retval228;
  this225 = v221;
  __x226 = v222;
  __y227 = v223;
  struct std__less_int_* t229 = this225;
  int* t230 = __x226;
  int t231 = *t230;
  int* t232 = __y227;
  int t233 = *t232;
  _Bool c234 = ((t231 < t233)) ? 1 : 0;
  __retval228 = c234;
  _Bool t235 = __retval228;
  return t235;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v236) {
bb237: ;
  struct __gnu_cxx____aligned_membuf_int_* this238;
  void* __retval239;
  this238 = v236;
  struct __gnu_cxx____aligned_membuf_int_* t240 = this238;
  void* cast241 = (void*)&(t240->_M_storage);
  __retval239 = cast241;
  void* t242 = __retval239;
  return t242;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v243) {
bb244: ;
  struct __gnu_cxx____aligned_membuf_int_* this245;
  int* __retval246;
  this245 = v243;
  struct __gnu_cxx____aligned_membuf_int_* t247 = this245;
  void* r248 = __gnu_cxx____aligned_membuf_int____M_addr___const(t247);
  int* cast249 = (int*)r248;
  __retval246 = cast249;
  int* t250 = __retval246;
  return t250;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v251) {
bb252: ;
  struct std___Rb_tree_node_int_* this253;
  int* __retval254;
  this253 = v251;
  struct std___Rb_tree_node_int_* t255 = this253;
  int* r256 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t255->_M_storage);
  __retval254 = r256;
  int* t257 = __retval254;
  return t257;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v258) {
bb259: ;
  struct std___Rb_tree_node_int_* __node260;
  int* __retval261;
  struct std___Identity_int_ ref_tmp0262;
  __node260 = v258;
  struct std___Rb_tree_node_int_* t263 = __node260;
  int* r264 = std___Rb_tree_node_int____M_valptr___const(t263);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r265 = std___Identity_int___operator___int_const___const(&ref_tmp0262, r264);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval261 = r265;
  int* t266 = __retval261;
  return t266;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v267) {
bb268: ;
  struct std___Rb_tree_node_base* __x269;
  int* __retval270;
  __x269 = v267;
  struct std___Rb_tree_node_base* t271 = __x269;
  struct std___Rb_tree_node_int_* derived272 = (struct std___Rb_tree_node_int_*)((char *)t271 - 0);
  int* r273 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived272);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval270 = r273;
  int* t274 = __retval270;
  return t274;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v275) {
bb276: ;
  struct std___Rb_tree_node_base* __x277;
  struct std___Rb_tree_node_base* __retval278;
  __x277 = v275;
  struct std___Rb_tree_node_base* t279 = __x277;
  struct std___Rb_tree_node_base* t280 = t279->_M_left;
  __retval278 = t280;
  struct std___Rb_tree_node_base* t281 = __retval278;
  return t281;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v282) {
bb283: ;
  struct std___Rb_tree_node_base* __x284;
  struct std___Rb_tree_node_base* __retval285;
  __x284 = v282;
  struct std___Rb_tree_node_base* t286 = __x284;
  struct std___Rb_tree_node_base* t287 = t286->_M_right;
  __retval285 = t287;
  struct std___Rb_tree_node_base* t288 = __retval285;
  return t288;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v289, struct std___Rb_tree_node_base** v290, struct std___Rb_tree_node_base** v291) {
bb292: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this293;
  struct std___Rb_tree_node_base** __x294;
  struct std___Rb_tree_node_base** __y295;
  this293 = v289;
  __x294 = v290;
  __y295 = v291;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t296 = this293;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base297 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t296 + 0);
  struct std___Rb_tree_node_base** t298 = __x294;
  struct std___Rb_tree_node_base* t299 = *t298;
  t296->first = t299;
  struct std___Rb_tree_node_base** t300 = __y295;
  struct std___Rb_tree_node_base* t301 = *t300;
  t296->second = t301;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v302, int* v303) {
bb304: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this305;
  int* __k306;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval307;
  struct std___Rb_tree_node_base* __x308;
  struct std___Rb_tree_node_base* __y309;
  this305 = v302;
  __k306 = v303;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t310 = this305;
  struct std___Rb_tree_node_base* r311 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t310);
  __x308 = r311;
  struct std___Rb_tree_node_base* r312 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t310);
  __y309 = r312;
    while (1) {
      struct std___Rb_tree_node_base* t313 = __x308;
      _Bool cast314 = (_Bool)t313;
      if (!cast314) break;
        struct std___Rb_tree_node_base* t315 = __x308;
        __y309 = t315;
        struct std___Rb_tree_key_compare_std__less_int__* base316 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t310->_M_impl) + 0);
        struct std__less_int_* cast317 = (struct std__less_int_*)base316;
        int* t318 = __k306;
        struct std___Rb_tree_node_base* t319 = __x308;
        int* r320 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t319);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r321 = std__less_int___operator___int_const___int_const___const(cast317, t318, r320);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary322;
        if (r321) {
          struct std___Rb_tree_node_base* t323 = __x308;
          struct std___Rb_tree_node_base* r324 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t323);
          ternary322 = (struct std___Rb_tree_node_base*)r324;
        } else {
          struct std___Rb_tree_node_base* t325 = __x308;
          struct std___Rb_tree_node_base* r326 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t325);
          ternary322 = (struct std___Rb_tree_node_base*)r326;
        }
        __x308 = ternary322;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval307, &__x308, &__y309);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t327 = __retval307;
  return t327;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v328, int* v329) {
bb330: ;
  struct std___Identity_int_* this331;
  int* __x332;
  int* __retval333;
  this331 = v328;
  __x332 = v329;
  struct std___Identity_int_* t334 = this331;
  int* t335 = __x332;
  __retval333 = t335;
  int* t336 = __retval333;
  return t336;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v337, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v338) {
bb339: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t341;
  this340 = v337;
  __t341 = v338;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t342 = this340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t343 = __t341;
  t342->_M_t = t343;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v344) {
bb345: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this346;
  unsigned long __retval347;
  this346 = v344;
  struct std____new_allocator_std___Rb_tree_node_int__* t348 = this346;
  unsigned long c349 = 9223372036854775807;
  unsigned long c350 = 40;
  unsigned long b351 = c349 / c350;
  __retval347 = b351;
  unsigned long t352 = __retval347;
  return t352;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v353, unsigned long v354, void* v355) {
bb356: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this357;
  unsigned long __n358;
  void* unnamed359;
  struct std___Rb_tree_node_int_* __retval360;
  this357 = v353;
  __n358 = v354;
  unnamed359 = v355;
  struct std____new_allocator_std___Rb_tree_node_int__* t361 = this357;
    unsigned long t362 = __n358;
    unsigned long r363 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t361);
    _Bool c364 = ((t362 > r363)) ? 1 : 0;
    if (c364) {
        unsigned long t365 = __n358;
        unsigned long c366 = -1;
        unsigned long c367 = 40;
        unsigned long b368 = c366 / c367;
        _Bool c369 = ((t365 > b368)) ? 1 : 0;
        if (c369) {
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
    unsigned long c370 = 8;
    unsigned long c371 = 16;
    _Bool c372 = ((c370 > c371)) ? 1 : 0;
    if (c372) {
      unsigned long __al373;
      unsigned long c374 = 8;
      __al373 = c374;
      unsigned long t375 = __n358;
      unsigned long c376 = 40;
      unsigned long b377 = t375 * c376;
      unsigned long t378 = __al373;
      void* r379 = operator_new_2(b377, t378);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast380 = (struct std___Rb_tree_node_int_*)r379;
      __retval360 = cast380;
      struct std___Rb_tree_node_int_* t381 = __retval360;
      return t381;
    }
  unsigned long t382 = __n358;
  unsigned long c383 = 40;
  unsigned long b384 = t382 * c383;
  void* r385 = operator_new(b384);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast386 = (struct std___Rb_tree_node_int_*)r385;
  __retval360 = cast386;
  struct std___Rb_tree_node_int_* t387 = __retval360;
  return t387;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v388, unsigned long v389) {
bb390: ;
  struct std__allocator_std___Rb_tree_node_int__* this391;
  unsigned long __n392;
  struct std___Rb_tree_node_int_* __retval393;
  this391 = v388;
  __n392 = v389;
  struct std__allocator_std___Rb_tree_node_int__* t394 = this391;
    _Bool r395 = std____is_constant_evaluated();
    if (r395) {
        unsigned long t396 = __n392;
        unsigned long c397 = 40;
        unsigned long ovr398;
        _Bool ovf399 = __builtin_mul_overflow(t396, c397, &ovr398);
        __n392 = ovr398;
        if (ovf399) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t400 = __n392;
      void* r401 = operator_new(t400);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast402 = (struct std___Rb_tree_node_int_*)r401;
      __retval393 = cast402;
      struct std___Rb_tree_node_int_* t403 = __retval393;
      return t403;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base404 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t394 + 0);
  unsigned long t405 = __n392;
  void* c406 = ((void*)0);
  struct std___Rb_tree_node_int_* r407 = std____new_allocator_std___Rb_tree_node_int_____allocate(base404, t405, c406);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval393 = r407;
  struct std___Rb_tree_node_int_* t408 = __retval393;
  return t408;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v409, unsigned long v410) {
bb411: ;
  struct std__allocator_std___Rb_tree_node_int__* __a412;
  unsigned long __n413;
  struct std___Rb_tree_node_int_* __retval414;
  __a412 = v409;
  __n413 = v410;
  struct std__allocator_std___Rb_tree_node_int__* t415 = __a412;
  unsigned long t416 = __n413;
  struct std___Rb_tree_node_int_* r417 = std__allocator_std___Rb_tree_node_int_____allocate(t415, t416);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval414 = r417;
  struct std___Rb_tree_node_int_* t418 = __retval414;
  return t418;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v419) {
bb420: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this421;
  struct std___Rb_tree_node_int_* __retval422;
  this421 = v419;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t423 = this421;
  struct std__allocator_std___Rb_tree_node_int__* r424 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t423);
  unsigned long c425 = 1;
  struct std___Rb_tree_node_int_* r426 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r424, c425);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval422 = r426;
  struct std___Rb_tree_node_int_* t427 = __retval422;
  return t427;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v428, int* v429) {
bb430: ;
  int* __location431;
  int* __args432;
  int* __retval433;
  void* __loc434;
  __location431 = v428;
  __args432 = v429;
  int* t435 = __location431;
  void* cast436 = (void*)t435;
  __loc434 = cast436;
    void* t437 = __loc434;
    int* cast438 = (int*)t437;
    int* t439 = __args432;
    int t440 = *t439;
    *cast438 = t440;
    __retval433 = cast438;
    int* t441 = __retval433;
    return t441;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v442, int* v443, int* v444) {
bb445: ;
  struct std__allocator_std___Rb_tree_node_int__* __a446;
  int* __p447;
  int* __args448;
  __a446 = v442;
  __p447 = v443;
  __args448 = v444;
  int* t449 = __p447;
  int* t450 = __args448;
  int* r451 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t449, t450);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v452, struct std___Rb_tree_node_int_* v453, int* v454) {
bb455: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this456;
  struct std___Rb_tree_node_int_* __node457;
  int* __args458;
  this456 = v452;
  __node457 = v453;
  __args458 = v454;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t459 = this456;
      struct std__allocator_std___Rb_tree_node_int__* r461 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t459);
      struct std___Rb_tree_node_int_* t462 = __node457;
      int* r463 = std___Rb_tree_node_int____M_valptr(t462);
      if (__cir_exc_active) {
        goto cir_try_dispatch460;
      }
      int* t464 = __args458;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r461, r463, t464);
    cir_try_dispatch460: ;
    if (__cir_exc_active) {
    {
      int ca_tok465 = 0;
      void* ca_exn466 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t467 = __node457;
        struct std___Rb_tree_node_int_* t468 = __node457;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t459, t468);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v469, int* v470) {
bb471: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this472;
  int* __args473;
  struct std___Rb_tree_node_int_* __retval474;
  struct std___Rb_tree_node_int_* __tmp475;
  this472 = v469;
  __args473 = v470;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t476 = this472;
  struct std___Rb_tree_node_int_* r477 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t476);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp475 = r477;
  struct std___Rb_tree_node_int_* t478 = __tmp475;
  int* t479 = __args473;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t476, t478, t479);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t480 = __tmp475;
  __retval474 = t480;
  struct std___Rb_tree_node_int_* t481 = __retval474;
  return t481;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v482, int* v483) {
bb484: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this485;
  int* __arg486;
  struct std___Rb_tree_node_int_* __retval487;
  this485 = v482;
  __arg486 = v483;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t488 = this485;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t489 = t488->_M_t;
  int* t490 = __arg486;
  struct std___Rb_tree_node_int_* r491 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t489, t490);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval487 = r491;
  struct std___Rb_tree_node_int_* t492 = __retval487;
  return t492;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v493, struct std___Rb_tree_node_base* v494, struct std___Rb_tree_node_base* v495, struct std___Rb_tree_node_base* v496) {
bb497: ;
  _Bool __insert_left498;
  struct std___Rb_tree_node_base* __x499;
  struct std___Rb_tree_node_base* __p500;
  struct std___Rb_tree_node_base* __header501;
  __insert_left498 = v493;
  __x499 = v494;
  __p500 = v495;
  __header501 = v496;
  _Bool t502 = __insert_left498;
  struct std___Rb_tree_node_base* t503 = __x499;
  struct std___Rb_tree_node_base* t504 = __p500;
  struct std___Rb_tree_node_base* t505 = __header501;
  std___Rb_tree_insert_and_rebalance(t502, t503, t504, t505);
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v506, struct std___Rb_tree_node_base* v507) {
bb508: ;
  struct std___Rb_tree_iterator_int_* this509;
  struct std___Rb_tree_node_base* __x510;
  this509 = v506;
  __x510 = v507;
  struct std___Rb_tree_iterator_int_* t511 = this509;
  struct std___Rb_tree_node_base* t512 = __x510;
  t511->_M_node = t512;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSD_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v513, struct std___Rb_tree_node_base* v514, struct std___Rb_tree_node_base* v515, int* v516, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v517) {
bb518: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this519;
  struct std___Rb_tree_node_base* __x520;
  struct std___Rb_tree_node_base* __p521;
  int* __v522;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen523;
  struct std___Rb_tree_iterator_int_ __retval524;
  _Bool __insert_left525;
  struct std___Rb_tree_node_base* __z526;
  this519 = v513;
  __x520 = v514;
  __p521 = v515;
  __v522 = v516;
  __node_gen523 = v517;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t527 = this519;
  struct std___Rb_tree_node_base* t528 = __x520;
  _Bool cast529 = (_Bool)t528;
  _Bool ternary530;
  if (cast529) {
    _Bool c531 = 1;
    ternary530 = (_Bool)c531;
  } else {
    struct std___Rb_tree_node_base* t532 = __p521;
    struct std___Rb_tree_node_base* r533 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t527);
    _Bool c534 = ((t532 == r533)) ? 1 : 0;
    ternary530 = (_Bool)c534;
  }
  _Bool ternary535;
  if (ternary530) {
    _Bool c536 = 1;
    ternary535 = (_Bool)c536;
  } else {
    struct std___Identity_int_ ref_tmp0537;
    struct std___Rb_tree_key_compare_std__less_int__* base538 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t527->_M_impl) + 0);
    struct std__less_int_* cast539 = (struct std__less_int_*)base538;
    int* t540 = __v522;
    int* r541 = std___Identity_int___operator___int_const___const(&ref_tmp0537, t540);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t542 = __p521;
    int* r543 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t542);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r544 = std__less_int___operator___int_const___int_const___const(cast539, r541, r543);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary535 = (_Bool)r544;
  }
  __insert_left525 = ternary535;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t545 = __node_gen523;
  int* t546 = __v522;
  struct std___Rb_tree_node_int_* r547 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t545, t546);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base548 = (struct std___Rb_tree_node_base*)((char *)r547 + 0);
  struct std___Rb_tree_node_base* r549 = std___Rb_tree_node_base___M_base_ptr___const(base548);
  __z526 = r549;
  _Bool t550 = __insert_left525;
  struct std___Rb_tree_node_base* t551 = __z526;
  struct std___Rb_tree_node_base* t552 = __p521;
  struct std___Rb_tree_header* base553 = (struct std___Rb_tree_header*)((char *)&(t527->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t550, t551, t552, &base553->_M_header);
  struct std___Rb_tree_header* base554 = (struct std___Rb_tree_header*)((char *)&(t527->_M_impl) + 8);
  unsigned long t555 = base554->_M_node_count;
  unsigned long u556 = t555 + 1;
  base554->_M_node_count = u556;
  struct std___Rb_tree_node_base* t557 = __z526;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval524, t557);
  struct std___Rb_tree_iterator_int_ t558 = __retval524;
  return t558;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIRKiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v559, int* v560) {
bb561: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this562;
  int* __v563;
  struct std___Rb_tree_iterator_int_ __retval564;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res565;
  struct std___Identity_int_ ref_tmp0566;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an567;
  this562 = v559;
  __v563 = v560;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t568 = this562;
  int* t569 = __v563;
  int* r570 = std___Identity_int___operator___int_const___const(&ref_tmp0566, t569);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r571 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t568, r570);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res565 = r571;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an567, t568);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t572 = __res565.first;
  struct std___Rb_tree_node_base* t573 = __res565.second;
  int* t574 = __v563;
  struct std___Rb_tree_iterator_int_ r575 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t568, t572, t573, t574, &__an567);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval564 = r575;
  struct std___Rb_tree_iterator_int_ t576 = __retval564;
  return t576;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v577, struct std___Rb_tree_iterator_int_* v578) {
bb579: ;
  struct std___Rb_tree_const_iterator_int_* this580;
  struct std___Rb_tree_iterator_int_* __it581;
  this580 = v577;
  __it581 = v578;
  struct std___Rb_tree_const_iterator_int_* t582 = this580;
  struct std___Rb_tree_iterator_int_* t583 = __it581;
  struct std___Rb_tree_node_base* t584 = t583->_M_node;
  t582->_M_node = t584;
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert_2(struct std__multiset_int__std__less_int___std__allocator_int__* v585, int* v586) {
bb587: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this588;
  int* __x589;
  struct std___Rb_tree_const_iterator_int_ __retval590;
  struct std___Rb_tree_iterator_int_ ref_tmp0591;
  this588 = v585;
  __x589 = v586;
  struct std__multiset_int__std__less_int___std__allocator_int__* t592 = this588;
  int* t593 = __x589;
  struct std___Rb_tree_iterator_int_ r594 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_const__(&t592->_M_t, t593);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0591 = r594;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval590, &ref_tmp0591);
  struct std___Rb_tree_const_iterator_int_ t595 = __retval590;
  return t595;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v596, int* v597) {
bb598: ;
  struct std___Identity_int_* this599;
  int* __x600;
  int* __retval601;
  this599 = v596;
  __x600 = v597;
  struct std___Identity_int_* t602 = this599;
  int* t603 = __x600;
  __retval601 = t603;
  int* t604 = __retval601;
  return t604;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v605, int* v606) {
bb607: ;
  int* __location608;
  int* __args609;
  int* __retval610;
  void* __loc611;
  __location608 = v605;
  __args609 = v606;
  int* t612 = __location608;
  void* cast613 = (void*)t612;
  __loc611 = cast613;
    void* t614 = __loc611;
    int* cast615 = (int*)t614;
    int* t616 = __args609;
    int t617 = *t616;
    *cast615 = t617;
    __retval610 = cast615;
    int* t618 = __retval610;
    return t618;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v619, int* v620, int* v621) {
bb622: ;
  struct std__allocator_std___Rb_tree_node_int__* __a623;
  int* __p624;
  int* __args625;
  __a623 = v619;
  __p624 = v620;
  __args625 = v621;
  int* t626 = __p624;
  int* t627 = __args625;
  int* r628 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t626, t627);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v629, struct std___Rb_tree_node_int_* v630, int* v631) {
bb632: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this633;
  struct std___Rb_tree_node_int_* __node634;
  int* __args635;
  this633 = v629;
  __node634 = v630;
  __args635 = v631;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t636 = this633;
      struct std__allocator_std___Rb_tree_node_int__* r638 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t636);
      struct std___Rb_tree_node_int_* t639 = __node634;
      int* r640 = std___Rb_tree_node_int____M_valptr(t639);
      if (__cir_exc_active) {
        goto cir_try_dispatch637;
      }
      int* t641 = __args635;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r638, r640, t641);
    cir_try_dispatch637: ;
    if (__cir_exc_active) {
    {
      int ca_tok642 = 0;
      void* ca_exn643 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t644 = __node634;
        struct std___Rb_tree_node_int_* t645 = __node634;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t636, t645);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v646, int* v647) {
bb648: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this649;
  int* __args650;
  struct std___Rb_tree_node_int_* __retval651;
  struct std___Rb_tree_node_int_* __tmp652;
  this649 = v646;
  __args650 = v647;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t653 = this649;
  struct std___Rb_tree_node_int_* r654 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t653);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp652 = r654;
  struct std___Rb_tree_node_int_* t655 = __tmp652;
  int* t656 = __args650;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t653, t655, t656);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t657 = __tmp652;
  __retval651 = t657;
  struct std___Rb_tree_node_int_* t658 = __retval651;
  return t658;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v659, int* v660) {
bb661: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this662;
  int* __arg663;
  struct std___Rb_tree_node_int_* __retval664;
  this662 = v659;
  __arg663 = v660;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t665 = this662;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t666 = t665->_M_t;
  int* t667 = __arg663;
  struct std___Rb_tree_node_int_* r668 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t666, t667);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval664 = r668;
  struct std___Rb_tree_node_int_* t669 = __retval664;
  return t669;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v670, struct std___Rb_tree_node_base* v671, struct std___Rb_tree_node_base* v672, int* v673, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v674) {
bb675: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this676;
  struct std___Rb_tree_node_base* __x677;
  struct std___Rb_tree_node_base* __p678;
  int* __v679;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen680;
  struct std___Rb_tree_iterator_int_ __retval681;
  _Bool __insert_left682;
  struct std___Rb_tree_node_base* __z683;
  this676 = v670;
  __x677 = v671;
  __p678 = v672;
  __v679 = v673;
  __node_gen680 = v674;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t684 = this676;
  struct std___Rb_tree_node_base* t685 = __x677;
  _Bool cast686 = (_Bool)t685;
  _Bool ternary687;
  if (cast686) {
    _Bool c688 = 1;
    ternary687 = (_Bool)c688;
  } else {
    struct std___Rb_tree_node_base* t689 = __p678;
    struct std___Rb_tree_node_base* r690 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t684);
    _Bool c691 = ((t689 == r690)) ? 1 : 0;
    ternary687 = (_Bool)c691;
  }
  _Bool ternary692;
  if (ternary687) {
    _Bool c693 = 1;
    ternary692 = (_Bool)c693;
  } else {
    struct std___Identity_int_ ref_tmp0694;
    struct std___Rb_tree_key_compare_std__less_int__* base695 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t684->_M_impl) + 0);
    struct std__less_int_* cast696 = (struct std__less_int_*)base695;
    int* t697 = __v679;
    int* r698 = std___Identity_int___operator___int___const(&ref_tmp0694, t697);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t699 = __p678;
    int* r700 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t699);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r701 = std__less_int___operator___int_const___int_const___const(cast696, r698, r700);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary692 = (_Bool)r701;
  }
  __insert_left682 = ternary692;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t702 = __node_gen680;
  int* t703 = __v679;
  struct std___Rb_tree_node_int_* r704 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t702, t703);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base705 = (struct std___Rb_tree_node_base*)((char *)r704 + 0);
  struct std___Rb_tree_node_base* r706 = std___Rb_tree_node_base___M_base_ptr___const(base705);
  __z683 = r706;
  _Bool t707 = __insert_left682;
  struct std___Rb_tree_node_base* t708 = __z683;
  struct std___Rb_tree_node_base* t709 = __p678;
  struct std___Rb_tree_header* base710 = (struct std___Rb_tree_header*)((char *)&(t684->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t707, t708, t709, &base710->_M_header);
  struct std___Rb_tree_header* base711 = (struct std___Rb_tree_header*)((char *)&(t684->_M_impl) + 8);
  unsigned long t712 = base711->_M_node_count;
  unsigned long u713 = t712 + 1;
  base711->_M_node_count = u713;
  struct std___Rb_tree_node_base* t714 = __z683;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval681, t714);
  struct std___Rb_tree_iterator_int_ t715 = __retval681;
  return t715;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v716, int* v717) {
bb718: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this719;
  int* __v720;
  struct std___Rb_tree_iterator_int_ __retval721;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res722;
  struct std___Identity_int_ ref_tmp0723;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an724;
  this719 = v716;
  __v720 = v717;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t725 = this719;
  int* t726 = __v720;
  int* r727 = std___Identity_int___operator___int___const(&ref_tmp0723, t726);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r728 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t725, r727);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res722 = r728;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an724, t725);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t729 = __res722.first;
  struct std___Rb_tree_node_base* t730 = __res722.second;
  int* t731 = __v720;
  struct std___Rb_tree_iterator_int_ r732 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t725, t729, t730, t731, &__an724);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval721 = r732;
  struct std___Rb_tree_iterator_int_ t733 = __retval721;
  return t733;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* v734, int* v735) {
bb736: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this737;
  int* __x738;
  struct std___Rb_tree_const_iterator_int_ __retval739;
  struct std___Rb_tree_iterator_int_ ref_tmp0740;
  this737 = v734;
  __x738 = v735;
  struct std__multiset_int__std__less_int___std__allocator_int__* t741 = this737;
  int* t742 = __x738;
  struct std___Rb_tree_iterator_int_ r743 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(&t741->_M_t, t742);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0740 = r743;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval739, &ref_tmp0740);
  struct std___Rb_tree_const_iterator_int_ t744 = __retval739;
  return t744;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v745, struct std___Rb_tree_node_base* v746, struct std___Rb_tree_node_base* v747, int* v748) {
bb749: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this750;
  struct std___Rb_tree_node_base* __x751;
  struct std___Rb_tree_node_base* __y752;
  int* __k753;
  struct std___Rb_tree_node_base* __retval754;
  this750 = v745;
  __x751 = v746;
  __y752 = v747;
  __k753 = v748;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t755 = this750;
    while (1) {
      struct std___Rb_tree_node_base* t756 = __x751;
      _Bool cast757 = (_Bool)t756;
      if (!cast757) break;
        struct std___Rb_tree_key_compare_std__less_int__* base758 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t755->_M_impl) + 0);
        struct std__less_int_* cast759 = (struct std__less_int_*)base758;
        struct std___Rb_tree_node_base* t760 = __x751;
        int* r761 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t760);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t762 = __k753;
        _Bool r763 = std__less_int___operator___int_const___int_const___const(cast759, r761, t762);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u764 = !r763;
        if (u764) {
          struct std___Rb_tree_node_base* t765 = __x751;
          __y752 = t765;
          struct std___Rb_tree_node_base* t766 = __x751;
          struct std___Rb_tree_node_base* r767 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t766);
          __x751 = r767;
        } else {
          struct std___Rb_tree_node_base* t768 = __x751;
          struct std___Rb_tree_node_base* r769 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t768);
          __x751 = r769;
        }
    }
  struct std___Rb_tree_node_base* t770 = __y752;
  __retval754 = t770;
  struct std___Rb_tree_node_base* t771 = __retval754;
  return t771;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v772, struct std___Rb_tree_node_base* v773, struct std___Rb_tree_node_base* v774, int* v775) {
bb776: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this777;
  struct std___Rb_tree_node_base* __x778;
  struct std___Rb_tree_node_base* __y779;
  int* __k780;
  struct std___Rb_tree_node_base* __retval781;
  this777 = v772;
  __x778 = v773;
  __y779 = v774;
  __k780 = v775;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t782 = this777;
    while (1) {
      struct std___Rb_tree_node_base* t783 = __x778;
      _Bool cast784 = (_Bool)t783;
      if (!cast784) break;
        struct std___Rb_tree_key_compare_std__less_int__* base785 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t782->_M_impl) + 0);
        struct std__less_int_* cast786 = (struct std__less_int_*)base785;
        int* t787 = __k780;
        struct std___Rb_tree_node_base* t788 = __x778;
        int* r789 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t788);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r790 = std__less_int___operator___int_const___int_const___const(cast786, t787, r789);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r790) {
          struct std___Rb_tree_node_base* t791 = __x778;
          __y779 = t791;
          struct std___Rb_tree_node_base* t792 = __x778;
          struct std___Rb_tree_node_base* r793 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t792);
          __x778 = r793;
        } else {
          struct std___Rb_tree_node_base* t794 = __x778;
          struct std___Rb_tree_node_base* r795 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t794);
          __x778 = r795;
        }
    }
  struct std___Rb_tree_node_base* t796 = __y779;
  __retval781 = t796;
  struct std___Rb_tree_node_base* t797 = __retval781;
  return t797;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v798, struct std___Rb_tree_iterator_int_* v799, struct std___Rb_tree_iterator_int_* v800) {
bb801: ;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* this802;
  struct std___Rb_tree_iterator_int_* __x803;
  struct std___Rb_tree_iterator_int_* __y804;
  this802 = v798;
  __x803 = v799;
  __y804 = v800;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t805 = this802;
  struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* base806 = (struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__*)((char *)t805 + 0);
  struct std___Rb_tree_iterator_int_* t807 = __x803;
  t805->first = *t807; // copy
  struct std___Rb_tree_iterator_int_* t808 = __y804;
  t805->second = *t808; // copy
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v809, int* v810) {
bb811: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this812;
  int* __k813;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __retval814;
  struct std___Rb_tree_node_base* __x815;
  struct std___Rb_tree_node_base* __y816;
  struct std___Rb_tree_iterator_int_ ref_tmp2817;
  struct std___Rb_tree_iterator_int_ ref_tmp3818;
  this812 = v809;
  __k813 = v810;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t819 = this812;
  struct std___Rb_tree_node_base* r820 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t819);
  __x815 = r820;
  struct std___Rb_tree_node_base* r821 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t819);
  __y816 = r821;
    while (1) {
      struct std___Rb_tree_node_base* t822 = __x815;
      _Bool cast823 = (_Bool)t822;
      if (!cast823) break;
          struct std___Rb_tree_key_compare_std__less_int__* base824 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t819->_M_impl) + 0);
          struct std__less_int_* cast825 = (struct std__less_int_*)base824;
          struct std___Rb_tree_node_base* t826 = __x815;
          int* r827 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t826);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t828 = __k813;
          _Bool r829 = std__less_int___operator___int_const___int_const___const(cast825, r827, t828);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r829) {
            struct std___Rb_tree_node_base* t830 = __x815;
            struct std___Rb_tree_node_base* r831 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t830);
            __x815 = r831;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base832 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t819->_M_impl) + 0);
              struct std__less_int_* cast833 = (struct std__less_int_*)base832;
              int* t834 = __k813;
              struct std___Rb_tree_node_base* t835 = __x815;
              int* r836 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t835);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r837 = std__less_int___operator___int_const___int_const___const(cast833, t834, r836);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r837) {
                struct std___Rb_tree_node_base* t838 = __x815;
                __y816 = t838;
                struct std___Rb_tree_node_base* t839 = __x815;
                struct std___Rb_tree_node_base* r840 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t839);
                __x815 = r840;
              } else {
                struct std___Rb_tree_node_base* __xu841;
                struct std___Rb_tree_node_base* __yu842;
                struct std___Rb_tree_iterator_int_ ref_tmp0843;
                struct std___Rb_tree_iterator_int_ ref_tmp1844;
                struct std___Rb_tree_node_base* t845 = __x815;
                __xu841 = t845;
                struct std___Rb_tree_node_base* t846 = __y816;
                __yu842 = t846;
                struct std___Rb_tree_node_base* t847 = __x815;
                __y816 = t847;
                struct std___Rb_tree_node_base* t848 = __x815;
                struct std___Rb_tree_node_base* r849 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t848);
                __x815 = r849;
                struct std___Rb_tree_node_base* t850 = __xu841;
                struct std___Rb_tree_node_base* r851 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t850);
                __xu841 = r851;
                struct std___Rb_tree_node_base* t852 = __x815;
                struct std___Rb_tree_node_base* t853 = __y816;
                int* t854 = __k813;
                struct std___Rb_tree_node_base* r855 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t819, t852, t853, t854);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp0843, r855);
                struct std___Rb_tree_node_base* t856 = __xu841;
                struct std___Rb_tree_node_base* t857 = __yu842;
                int* t858 = __k813;
                struct std___Rb_tree_node_base* r859 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t819, t856, t857, t858);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp1844, r859);
                _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval814, &ref_tmp0843, &ref_tmp1844);
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t860 = __retval814;
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ret_val861 = t860;
                return ret_val861;
              }
          }
    }
  struct std___Rb_tree_node_base* t862 = __y816;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp2817, t862);
  struct std___Rb_tree_node_base* t863 = __y816;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3818, t863);
  _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval814, &ref_tmp2817, &ref_tmp3818);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t864 = __retval814;
  return t864;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v865, struct std___Rb_tree_const_iterator_int_* v866) {
bb867: ;
  struct std___Rb_tree_const_iterator_int_* __x868;
  struct std___Rb_tree_const_iterator_int_* __y869;
  _Bool __retval870;
  __x868 = v865;
  __y869 = v866;
  struct std___Rb_tree_const_iterator_int_* t871 = __x868;
  struct std___Rb_tree_node_base* t872 = t871->_M_node;
  struct std___Rb_tree_const_iterator_int_* t873 = __y869;
  struct std___Rb_tree_node_base* t874 = t873->_M_node;
  _Bool c875 = ((t872 == t874)) ? 1 : 0;
  __retval870 = c875;
  _Bool t876 = __retval870;
  return t876;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v877) {
bb878: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this879;
  struct std___Rb_tree_iterator_int_ __retval880;
  this879 = v877;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t881 = this879;
  struct std___Rb_tree_header* base882 = (struct std___Rb_tree_header*)((char *)&(t881->_M_impl) + 8);
  struct std___Rb_tree_node_base* t883 = base882->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval880, t883);
  struct std___Rb_tree_iterator_int_ t884 = __retval880;
  return t884;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v885) {
bb886: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this887;
  struct std___Rb_tree_iterator_int_ __retval888;
  this887 = v885;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t889 = this887;
  struct std___Rb_tree_node_base* r890 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t889);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval888, r890);
  struct std___Rb_tree_iterator_int_ t891 = __retval888;
  return t891;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v892) {
bb893: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this894;
  this894 = v892;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t895 = this894;
  struct std___Rb_tree_node_int_* r896 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t895);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t895, r896);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base897 = (struct std___Rb_tree_header*)((char *)&(t895->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base897);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v898, struct std___Rb_tree_node_base* v899) {
bb900: ;
  struct std___Rb_tree_node_base* __z901;
  struct std___Rb_tree_node_base* __header902;
  struct std___Rb_tree_node_base* __retval903;
  __z901 = v898;
  __header902 = v899;
  struct std___Rb_tree_node_base* t904 = __z901;
  struct std___Rb_tree_node_base* t905 = __header902;
  struct std___Rb_tree_node_base* r906 = std___Rb_tree_rebalance_for_erase(t904, t905);
  __retval903 = r906;
  struct std___Rb_tree_node_base* t907 = __retval903;
  return t907;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v908, struct std___Rb_tree_const_iterator_int_ v909) {
bb910: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this911;
  struct std___Rb_tree_const_iterator_int_ __position912;
  struct std___Rb_tree_node_base* __y913;
  this911 = v908;
  __position912 = v909;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t914 = this911;
  struct std___Rb_tree_node_base* t915 = __position912._M_node;
  struct std___Rb_tree_header* base916 = (struct std___Rb_tree_header*)((char *)&(t914->_M_impl) + 8);
  struct std___Rb_tree_node_base* r917 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t915, &base916->_M_header);
  __y913 = r917;
  struct std___Rb_tree_node_base* t918 = __y913;
  struct std___Rb_tree_node_int_* derived919 = (struct std___Rb_tree_node_int_*)((char *)t918 - 0);
  struct std___Rb_tree_node_int_* r920 = std___Rb_tree_node_int____M_node_ptr(derived919);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t914, r920);
  struct std___Rb_tree_header* base921 = (struct std___Rb_tree_header*)((char *)&(t914->_M_impl) + 8);
  unsigned long t922 = base921->_M_node_count;
  unsigned long u923 = t922 - 1;
  base921->_M_node_count = u923;
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v924, int v925) {
bb926: ;
  struct std___Rb_tree_const_iterator_int_* this927;
  int unnamed928;
  struct std___Rb_tree_const_iterator_int_ __retval929;
  this927 = v924;
  unnamed928 = v925;
  struct std___Rb_tree_const_iterator_int_* t930 = this927;
  __retval929 = *t930; // copy
  struct std___Rb_tree_node_base* t931 = t930->_M_node;
  struct std___Rb_tree_node_base* r932 = std___Rb_tree_increment(t931);
  t930->_M_node = r932;
  struct std___Rb_tree_const_iterator_int_ t933 = __retval929;
  return t933;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v934, struct std___Rb_tree_const_iterator_int_ v935, struct std___Rb_tree_const_iterator_int_ v936) {
bb937: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this938;
  struct std___Rb_tree_const_iterator_int_ __first939;
  struct std___Rb_tree_const_iterator_int_ __last940;
  this938 = v934;
  __first939 = v935;
  __last940 = v936;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t941 = this938;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0942;
    struct std___Rb_tree_iterator_int_ ref_tmp1943;
    struct std___Rb_tree_iterator_int_ r944 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t941);
    ref_tmp1943 = r944;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp0942, &ref_tmp1943);
    _Bool r945 = std__operator__(&__first939, &ref_tmp0942);
    _Bool ternary946;
    if (r945) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2947;
      struct std___Rb_tree_iterator_int_ ref_tmp3948;
      struct std___Rb_tree_iterator_int_ r949 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t941);
      ref_tmp3948 = r949;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp2947, &ref_tmp3948);
      _Bool r950 = std__operator__(&__last940, &ref_tmp2947);
      ternary946 = (_Bool)r950;
    } else {
      _Bool c951 = 0;
      ternary946 = (_Bool)c951;
    }
    if (ternary946) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t941);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0952;
        while (1) {
          _Bool r953 = std__operator__(&__first939, &__last940);
          _Bool u954 = !r953;
          if (!u954) break;
          int c955 = 0;
          struct std___Rb_tree_const_iterator_int_ r956 = std___Rb_tree_const_iterator_int___operator__(&__first939, c955);
          agg_tmp0952 = r956;
          struct std___Rb_tree_const_iterator_int_ t957 = agg_tmp0952;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t941, t957);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseERKi
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v958, int* v959) {
bb960: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this961;
  int* __x962;
  unsigned long __retval963;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __p964;
  unsigned long __old_size965;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0966;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1967;
  this961 = v958;
  __x962 = v959;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t968 = this961;
  int* t969 = __x962;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ r970 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(t968, t969);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __p964 = r970;
  unsigned long r971 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t968);
  __old_size965 = r971;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&agg_tmp0966, &__p964.first);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&agg_tmp1967, &__p964.second);
  struct std___Rb_tree_const_iterator_int_ t972 = agg_tmp0966;
  struct std___Rb_tree_const_iterator_int_ t973 = agg_tmp1967;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t968, t972, t973);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t974 = __old_size965;
  unsigned long r975 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t968);
  unsigned long b976 = t974 - r975;
  __retval963 = b976;
  unsigned long t977 = __retval963;
  return t977;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseERKi
unsigned long std__multiset_int__std__less_int___std__allocator_int_____erase(struct std__multiset_int__std__less_int___std__allocator_int__* v978, int* v979) {
bb980: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this981;
  int* __x982;
  unsigned long __retval983;
  this981 = v978;
  __x982 = v979;
  struct std__multiset_int__std__less_int___std__allocator_int__* t984 = this981;
  int* t985 = __x982;
  unsigned long r986 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(&t984->_M_t, t985);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval983 = r986;
  unsigned long t987 = __retval983;
  return t987;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v988) {
bb989: ;
  struct std__multiset_int__std__less_int___std__allocator_int__* this990;
  this990 = v988;
  struct std__multiset_int__std__less_int___std__allocator_int__* t991 = this990;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t991->_M_t);
  }
  return;
}

// function: main
int main() {
bb992: ;
  int __retval993;
  struct std__multiset_int__std__less_int___std__allocator_int__ myints994;
  int ref_tmp0995;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1996;
  int ref_tmp1997;
  int c998 = 0;
  __retval993 = c998;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myints994);
    char* cast999 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1000 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast999);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1001 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    int cast1002 = (int)r1001;
    struct std__basic_ostream_char__std__char_traits_char__* r1003 = std__ostream__operator__(r1000, cast1002);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1004 = std__ostream__operator___std__ostream_____(r1003, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1005 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    unsigned long c1006 = 0;
    _Bool c1007 = ((r1005 == c1006)) ? 1 : 0;
    if (c1007) {
    } else {
      char* cast1008 = (char*)&(_str_1);
      char* c1009 = (char*)_str_2;
      unsigned int c1010 = 17;
      char* cast1011 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1008, c1009, c1010, cast1011);
    }
      int i1012;
      struct std___Rb_tree_const_iterator_int_ agg_tmp01013;
      int c1014 = 0;
      i1012 = c1014;
      while (1) {
        int t1016 = i1012;
        int c1017 = 10;
        _Bool c1018 = ((t1016 < c1017)) ? 1 : 0;
        if (!c1018) break;
        struct std___Rb_tree_const_iterator_int_ r1019 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myints994, &i1012);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp01013 = r1019;
      for_step1015: ;
        int t1020 = i1012;
        int u1021 = t1020 + 1;
        i1012 = u1021;
      }
    char* cast1022 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1023 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1022);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1024 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    int cast1025 = (int)r1024;
    struct std__basic_ostream_char__std__char_traits_char__* r1026 = std__ostream__operator__(r1023, cast1025);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1027 = std__ostream__operator___std__ostream_____(r1026, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1028 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    unsigned long c1029 = 10;
    _Bool c1030 = ((r1028 == c1029)) ? 1 : 0;
    if (c1030) {
    } else {
      char* cast1031 = (char*)&(_str_4);
      char* c1032 = (char*)_str_2;
      unsigned int c1033 = 20;
      char* cast1034 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1031, c1032, c1033, cast1034);
    }
    int c1035 = 100;
    ref_tmp0995 = c1035;
    struct std___Rb_tree_const_iterator_int_ r1036 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myints994, &ref_tmp0995);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1996 = r1036;
    char* cast1037 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1038 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1037);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1039 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    int cast1040 = (int)r1039;
    struct std__basic_ostream_char__std__char_traits_char__* r1041 = std__ostream__operator__(r1038, cast1040);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1042 = std__ostream__operator___std__ostream_____(r1041, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1043 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    unsigned long c1044 = 11;
    _Bool c1045 = ((r1043 == c1044)) ? 1 : 0;
    if (c1045) {
    } else {
      char* cast1046 = (char*)&(_str_6);
      char* c1047 = (char*)_str_2;
      unsigned int c1048 = 23;
      char* cast1049 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1046, c1047, c1048, cast1049);
    }
    int c1050 = 5;
    ref_tmp1997 = c1050;
    unsigned long r1051 = std__multiset_int__std__less_int___std__allocator_int_____erase(&myints994, &ref_tmp1997);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1052 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r1053 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1052);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1054 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    int cast1055 = (int)r1054;
    struct std__basic_ostream_char__std__char_traits_char__* r1056 = std__ostream__operator__(r1053, cast1055);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1057 = std__ostream__operator___std__ostream_____(r1056, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1058 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myints994);
    unsigned long c1059 = 10;
    _Bool c1060 = ((r1058 == c1059)) ? 1 : 0;
    if (c1060) {
    } else {
      char* cast1061 = (char*)&(_str_4);
      char* c1062 = (char*)_str_2;
      unsigned int c1063 = 26;
      char* cast1064 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1061, c1062, c1063, cast1064);
    }
    int c1065 = 0;
    __retval993 = c1065;
    int t1066 = __retval993;
    int ret_val1067 = t1066;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myints994);
    }
    return ret_val1067;
  int t1068 = __retval993;
  return t1068;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1069) {
bb1070: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1071;
  this1071 = v1069;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1072 = this1071;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1072->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1073) {
bb1074: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1075;
  this1075 = v1073;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1076 = this1075;
    struct std___Rb_tree_node_int_* r1077 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1076);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1076, r1077);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1076->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1076->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1078) {
bb1079: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1080;
  this1080 = v1078;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1081 = this1080;
  struct std__allocator_std___Rb_tree_node_int__* base1082 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1081 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1082);
    struct std___Rb_tree_key_compare_std__less_int__* base1083 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1081 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1083);
    struct std___Rb_tree_header* base1084 = (struct std___Rb_tree_header*)((char *)t1081 + 8);
    std___Rb_tree_header___Rb_tree_header(base1084);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1085) {
bb1086: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1087;
  this1087 = v1085;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1088 = this1087;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1089 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1088 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1089);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1090) {
bb1091: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1092;
  this1092 = v1090;
  struct std____new_allocator_std___Rb_tree_node_int__* t1093 = this1092;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1094) {
bb1095: ;
  struct std__allocator_std___Rb_tree_node_int__* this1096;
  this1096 = v1094;
  struct std__allocator_std___Rb_tree_node_int__* t1097 = this1096;
  struct std____new_allocator_std___Rb_tree_node_int__* base1098 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1097 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1098);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1099) {
bb1100: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1101;
  this1101 = v1099;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1102) {
bb1103: ;
  struct std___Rb_tree_header* this1104;
  this1104 = v1102;
  struct std___Rb_tree_header* t1105 = this1104;
  struct std___Rb_tree_node_base* c1106 = ((void*)0);
  t1105->_M_header._M_parent = c1106;
  t1105->_M_header._M_left = &t1105->_M_header;
  t1105->_M_header._M_right = &t1105->_M_header;
  unsigned long c1107 = 0;
  t1105->_M_node_count = c1107;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1108) {
bb1109: ;
  struct std___Rb_tree_header* this1110;
  this1110 = v1108;
  struct std___Rb_tree_header* t1111 = this1110;
  unsigned int c1112 = 0;
  t1111->_M_header._M_color = c1112;
  std___Rb_tree_header___M_reset(t1111);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1113) {
bb1114: ;
  struct std__allocator_std___Rb_tree_node_int__* this1115;
  this1115 = v1113;
  struct std__allocator_std___Rb_tree_node_int__* t1116 = this1115;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1117) {
bb1118: ;
  struct std___Rb_tree_node_int_* this1119;
  struct std___Rb_tree_node_int_* __retval1120;
  this1119 = v1117;
  struct std___Rb_tree_node_int_* t1121 = this1119;
  __retval1120 = t1121;
  struct std___Rb_tree_node_int_* t1122 = __retval1120;
  return t1122;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1123) {
bb1124: ;
  struct std___Rb_tree_node_int_* __x1125;
  struct std___Rb_tree_node_int_* __retval1126;
  __x1125 = v1123;
  struct std___Rb_tree_node_int_* t1127 = __x1125;
  struct std___Rb_tree_node_base* base1128 = (struct std___Rb_tree_node_base*)((char *)t1127 + 0);
  struct std___Rb_tree_node_base* t1129 = base1128->_M_right;
  _Bool cast1130 = (_Bool)t1129;
  struct std___Rb_tree_node_int_* ternary1131;
  if (cast1130) {
    struct std___Rb_tree_node_int_* t1132 = __x1125;
    struct std___Rb_tree_node_base* base1133 = (struct std___Rb_tree_node_base*)((char *)t1132 + 0);
    struct std___Rb_tree_node_base* t1134 = base1133->_M_right;
    struct std___Rb_tree_node_int_* derived1135 = (struct std___Rb_tree_node_int_*)((char *)t1134 - 0);
    struct std___Rb_tree_node_int_* r1136 = std___Rb_tree_node_int____M_node_ptr(derived1135);
    ternary1131 = (struct std___Rb_tree_node_int_*)r1136;
  } else {
    struct std___Rb_tree_node_int_* c1137 = ((void*)0);
    ternary1131 = (struct std___Rb_tree_node_int_*)c1137;
  }
  __retval1126 = ternary1131;
  struct std___Rb_tree_node_int_* t1138 = __retval1126;
  return t1138;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1139) {
bb1140: ;
  struct std___Rb_tree_node_int_* __x1141;
  struct std___Rb_tree_node_int_* __retval1142;
  __x1141 = v1139;
  struct std___Rb_tree_node_int_* t1143 = __x1141;
  struct std___Rb_tree_node_base* base1144 = (struct std___Rb_tree_node_base*)((char *)t1143 + 0);
  struct std___Rb_tree_node_base* t1145 = base1144->_M_left;
  _Bool cast1146 = (_Bool)t1145;
  struct std___Rb_tree_node_int_* ternary1147;
  if (cast1146) {
    struct std___Rb_tree_node_int_* t1148 = __x1141;
    struct std___Rb_tree_node_base* base1149 = (struct std___Rb_tree_node_base*)((char *)t1148 + 0);
    struct std___Rb_tree_node_base* t1150 = base1149->_M_left;
    struct std___Rb_tree_node_int_* derived1151 = (struct std___Rb_tree_node_int_*)((char *)t1150 - 0);
    struct std___Rb_tree_node_int_* r1152 = std___Rb_tree_node_int____M_node_ptr(derived1151);
    ternary1147 = (struct std___Rb_tree_node_int_*)r1152;
  } else {
    struct std___Rb_tree_node_int_* c1153 = ((void*)0);
    ternary1147 = (struct std___Rb_tree_node_int_*)c1153;
  }
  __retval1142 = ternary1147;
  struct std___Rb_tree_node_int_* t1154 = __retval1142;
  return t1154;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1155) {
bb1156: ;
  int* __location1157;
  __location1157 = v1155;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1158, int* v1159) {
bb1160: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1161;
  int* __p1162;
  __a1161 = v1158;
  __p1162 = v1159;
  int* t1163 = __p1162;
  void_std__destroy_at_int_(t1163);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1164) {
bb1165: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1166;
  struct std__allocator_std___Rb_tree_node_int__* __retval1167;
  this1166 = v1164;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1168 = this1166;
  struct std__allocator_std___Rb_tree_node_int__* base1169 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1168->_M_impl) + 0);
  __retval1167 = base1169;
  struct std__allocator_std___Rb_tree_node_int__* t1170 = __retval1167;
  return t1170;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1171) {
bb1172: ;
  struct __gnu_cxx____aligned_membuf_int_* this1173;
  void* __retval1174;
  this1173 = v1171;
  struct __gnu_cxx____aligned_membuf_int_* t1175 = this1173;
  void* cast1176 = (void*)&(t1175->_M_storage);
  __retval1174 = cast1176;
  void* t1177 = __retval1174;
  return t1177;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1178) {
bb1179: ;
  struct __gnu_cxx____aligned_membuf_int_* this1180;
  int* __retval1181;
  this1180 = v1178;
  struct __gnu_cxx____aligned_membuf_int_* t1182 = this1180;
  void* r1183 = __gnu_cxx____aligned_membuf_int____M_addr(t1182);
  int* cast1184 = (int*)r1183;
  __retval1181 = cast1184;
  int* t1185 = __retval1181;
  return t1185;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1186) {
bb1187: ;
  struct std___Rb_tree_node_int_* this1188;
  int* __retval1189;
  this1188 = v1186;
  struct std___Rb_tree_node_int_* t1190 = this1188;
  int* r1191 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1190->_M_storage);
  __retval1189 = r1191;
  int* t1192 = __retval1189;
  return t1192;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1193, struct std___Rb_tree_node_int_* v1194) {
bb1195: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1196;
  struct std___Rb_tree_node_int_* __p1197;
  this1196 = v1193;
  __p1197 = v1194;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1198 = this1196;
  struct std__allocator_std___Rb_tree_node_int__* r1199 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1198);
  struct std___Rb_tree_node_int_* t1200 = __p1197;
  int* r1201 = std___Rb_tree_node_int____M_valptr(t1200);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1199, r1201);
  struct std___Rb_tree_node_int_* t1202 = __p1197;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1203: ;
  _Bool __retval1204;
    _Bool c1205 = 0;
    __retval1204 = c1205;
    _Bool t1206 = __retval1204;
    return t1206;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1207, struct std___Rb_tree_node_int_* v1208, unsigned long v1209) {
bb1210: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1211;
  struct std___Rb_tree_node_int_* __p1212;
  unsigned long __n1213;
  this1211 = v1207;
  __p1212 = v1208;
  __n1213 = v1209;
  struct std____new_allocator_std___Rb_tree_node_int__* t1214 = this1211;
    unsigned long c1215 = 8;
    unsigned long c1216 = 16;
    _Bool c1217 = ((c1215 > c1216)) ? 1 : 0;
    if (c1217) {
      struct std___Rb_tree_node_int_* t1218 = __p1212;
      void* cast1219 = (void*)t1218;
      unsigned long t1220 = __n1213;
      unsigned long c1221 = 40;
      unsigned long b1222 = t1220 * c1221;
      unsigned long c1223 = 8;
      operator_delete_3(cast1219, b1222, c1223);
      return;
    }
  struct std___Rb_tree_node_int_* t1224 = __p1212;
  void* cast1225 = (void*)t1224;
  unsigned long t1226 = __n1213;
  unsigned long c1227 = 40;
  unsigned long b1228 = t1226 * c1227;
  operator_delete_2(cast1225, b1228);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1229, struct std___Rb_tree_node_int_* v1230, unsigned long v1231) {
bb1232: ;
  struct std__allocator_std___Rb_tree_node_int__* this1233;
  struct std___Rb_tree_node_int_* __p1234;
  unsigned long __n1235;
  this1233 = v1229;
  __p1234 = v1230;
  __n1235 = v1231;
  struct std__allocator_std___Rb_tree_node_int__* t1236 = this1233;
    _Bool r1237 = std____is_constant_evaluated();
    if (r1237) {
      struct std___Rb_tree_node_int_* t1238 = __p1234;
      void* cast1239 = (void*)t1238;
      operator_delete(cast1239);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1240 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1236 + 0);
  struct std___Rb_tree_node_int_* t1241 = __p1234;
  unsigned long t1242 = __n1235;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1240, t1241, t1242);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1243, struct std___Rb_tree_node_int_* v1244, unsigned long v1245) {
bb1246: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1247;
  struct std___Rb_tree_node_int_* __p1248;
  unsigned long __n1249;
  __a1247 = v1243;
  __p1248 = v1244;
  __n1249 = v1245;
  struct std__allocator_std___Rb_tree_node_int__* t1250 = __a1247;
  struct std___Rb_tree_node_int_* t1251 = __p1248;
  unsigned long t1252 = __n1249;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1250, t1251, t1252);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1253, struct std___Rb_tree_node_int_* v1254) {
bb1255: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1256;
  struct std___Rb_tree_node_int_* __p1257;
  this1256 = v1253;
  __p1257 = v1254;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1258 = this1256;
  struct std__allocator_std___Rb_tree_node_int__* r1259 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1258);
  struct std___Rb_tree_node_int_* t1260 = __p1257;
  unsigned long c1261 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1259, t1260, c1261);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1262, struct std___Rb_tree_node_int_* v1263) {
bb1264: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1265;
  struct std___Rb_tree_node_int_* __p1266;
  this1265 = v1262;
  __p1266 = v1263;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1267 = this1265;
  struct std___Rb_tree_node_int_* t1268 = __p1266;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1267, t1268);
  struct std___Rb_tree_node_int_* t1269 = __p1266;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1267, t1269);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1270, struct std___Rb_tree_node_int_* v1271) {
bb1272: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1273;
  struct std___Rb_tree_node_int_* __x1274;
  this1273 = v1270;
  __x1274 = v1271;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1275 = this1273;
    while (1) {
      struct std___Rb_tree_node_int_* t1276 = __x1274;
      _Bool cast1277 = (_Bool)t1276;
      if (!cast1277) break;
        struct std___Rb_tree_node_int_* __y1278;
        struct std___Rb_tree_node_int_* t1279 = __x1274;
        struct std___Rb_tree_node_int_* r1280 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1279);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1275, r1280);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1281 = __x1274;
        struct std___Rb_tree_node_int_* r1282 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1281);
        if (__cir_exc_active) {
          return;
        }
        __y1278 = r1282;
        struct std___Rb_tree_node_int_* t1283 = __x1274;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1275, t1283);
        struct std___Rb_tree_node_int_* t1284 = __y1278;
        __x1274 = t1284;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1285) {
bb1286: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1287;
  struct std___Rb_tree_node_int_* __retval1288;
  struct std___Rb_tree_node_base* __begin1289;
  this1287 = v1285;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1290 = this1287;
  struct std___Rb_tree_header* base1291 = (struct std___Rb_tree_header*)((char *)&(t1290->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1292 = base1291->_M_header._M_parent;
  __begin1289 = t1292;
  struct std___Rb_tree_node_base* t1293 = __begin1289;
  _Bool cast1294 = (_Bool)t1293;
  struct std___Rb_tree_node_int_* ternary1295;
  if (cast1294) {
    struct std___Rb_tree_node_base* t1296 = __begin1289;
    struct std___Rb_tree_node_int_* derived1297 = (struct std___Rb_tree_node_int_*)((char *)t1296 - 0);
    struct std___Rb_tree_node_int_* r1298 = std___Rb_tree_node_int____M_node_ptr(derived1297);
    ternary1295 = (struct std___Rb_tree_node_int_*)r1298;
  } else {
    struct std___Rb_tree_node_int_* c1299 = ((void*)0);
    ternary1295 = (struct std___Rb_tree_node_int_*)c1299;
  }
  __retval1288 = ternary1295;
  struct std___Rb_tree_node_int_* t1300 = __retval1288;
  return t1300;
}

