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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "myset contains:";
char _str_1[18] = "myset.size() == 0";
char _str_2[101] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-clear/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[12] = "*it == 1101";
char _str_4[18] = "myset.size() == 1";
char _str_5[18] = "myset.size() == 2";
char _str_6[12] = "*it == 2202";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__set_int__std__less_int___std__allocator_int_____clear(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
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
bb1: ;
  struct std__set_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__set_int__std__less_int___std__allocator_int__* t3 = this2;
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

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v108, struct std___Rb_tree_iterator_int_* v109) {
bb110: ;
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
bb121: ;
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
bb131: ;
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
bb142: ;
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
bb152: ;
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
bb164: ;
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
bb210: ;
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
bb219: ;
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
bb225: ;
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
bb236: ;
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
bb270: ;
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
bb291: ;
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
bb300: ;
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
bb310: ;
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
bb325: ;
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
bb335: ;
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
bb351: ;
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
bb364: ;
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
bb377: ;
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
bb391: ;
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
bb435: ;
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
bb446: ;
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
bb453: ;
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
bb482: ;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this483;
  struct std___Rb_tree_iterator_int_* __x484;
  _Bool* __y485;
  this483 = v479;
  __x484 = v480;
  __y485 = v481;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t486 = this483;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base487 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t486 + 0);
  struct std___Rb_tree_iterator_int_* t488 = __x484;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t486->first, t488);
  _Bool* t489 = __y485;
  _Bool t490 = *t489;
  t486->second = t490;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v491, int* v492) {
bb493: ;
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v502, int v503) {
bb504: ;
  int __a505;
  int __b506;
  int __retval507;
  __a505 = v502;
  __b506 = v503;
  int t508 = __a505;
  int t509 = __b506;
  int b510 = t508 | t509;
  __retval507 = b510;
  int t511 = __retval507;
  return t511;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v512) {
bb513: ;
  struct std__basic_ios_char__std__char_traits_char__* this514;
  int __retval515;
  this514 = v512;
  struct std__basic_ios_char__std__char_traits_char__* t516 = this514;
  struct std__ios_base* base517 = (struct std__ios_base*)((char *)t516 + 0);
  int t518 = base517->_M_streambuf_state;
  __retval515 = t518;
  int t519 = __retval515;
  return t519;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v520, int v521) {
bb522: ;
  struct std__basic_ios_char__std__char_traits_char__* this523;
  int __state524;
  this523 = v520;
  __state524 = v521;
  struct std__basic_ios_char__std__char_traits_char__* t525 = this523;
  int r526 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t525);
  if (__cir_exc_active) {
    return;
  }
  int t527 = __state524;
  int r528 = std__operator_(r526, t527);
  std__basic_ios_char__std__char_traits_char_____clear(t525, r528);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v529, char* v530) {
bb531: ;
  char* __c1532;
  char* __c2533;
  _Bool __retval534;
  __c1532 = v529;
  __c2533 = v530;
  char* t535 = __c1532;
  char t536 = *t535;
  int cast537 = (int)t536;
  char* t538 = __c2533;
  char t539 = *t538;
  int cast540 = (int)t539;
  _Bool c541 = ((cast537 == cast540)) ? 1 : 0;
  __retval534 = c541;
  _Bool t542 = __retval534;
  return t542;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v543) {
bb544: ;
  char* __p545;
  unsigned long __retval546;
  unsigned long __i547;
  __p545 = v543;
  unsigned long c548 = 0;
  __i547 = c548;
    char ref_tmp0549;
    while (1) {
      unsigned long t550 = __i547;
      char* t551 = __p545;
      char* ptr552 = &(t551)[t550];
      char c553 = 0;
      ref_tmp0549 = c553;
      _Bool r554 = __gnu_cxx__char_traits_char___eq(ptr552, &ref_tmp0549);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u555 = !r554;
      if (!u555) break;
      unsigned long t556 = __i547;
      unsigned long u557 = t556 + 1;
      __i547 = u557;
    }
  unsigned long t558 = __i547;
  __retval546 = t558;
  unsigned long t559 = __retval546;
  return t559;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v560) {
bb561: ;
  char* __s562;
  unsigned long __retval563;
  __s562 = v560;
    _Bool r564 = std____is_constant_evaluated();
    if (r564) {
      char* t565 = __s562;
      unsigned long r566 = __gnu_cxx__char_traits_char___length(t565);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval563 = r566;
      unsigned long t567 = __retval563;
      return t567;
    }
  char* t568 = __s562;
  unsigned long r569 = strlen(t568);
  __retval563 = r569;
  unsigned long t570 = __retval563;
  return t570;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v571, char* v572) {
bb573: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out574;
  char* __s575;
  struct std__basic_ostream_char__std__char_traits_char__* __retval576;
  __out574 = v571;
  __s575 = v572;
    char* t577 = __s575;
    _Bool cast578 = (_Bool)t577;
    _Bool u579 = !cast578;
    if (u579) {
      struct std__basic_ostream_char__std__char_traits_char__* t580 = __out574;
      void** v581 = (void**)t580;
      void* v582 = *((void**)v581);
      unsigned char* cast583 = (unsigned char*)v582;
      long c584 = -24;
      unsigned char* ptr585 = &(cast583)[c584];
      long* cast586 = (long*)ptr585;
      long t587 = *cast586;
      unsigned char* cast588 = (unsigned char*)t580;
      unsigned char* ptr589 = &(cast588)[t587];
      struct std__basic_ostream_char__std__char_traits_char__* cast590 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr589;
      struct std__basic_ios_char__std__char_traits_char__* cast591 = (struct std__basic_ios_char__std__char_traits_char__*)cast590;
      int t592 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast591, t592);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t593 = __out574;
      char* t594 = __s575;
      char* t595 = __s575;
      unsigned long r596 = std__char_traits_char___length(t595);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast597 = (long)r596;
      struct std__basic_ostream_char__std__char_traits_char__* r598 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t593, t594, cast597);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t599 = __out574;
  __retval576 = t599;
  struct std__basic_ostream_char__std__char_traits_char__* t600 = __retval576;
  return t600;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v601, struct std___Rb_tree_node_base* v602) {
bb603: ;
  struct std___Rb_tree_const_iterator_int_* this604;
  struct std___Rb_tree_node_base* __x605;
  this604 = v601;
  __x605 = v602;
  struct std___Rb_tree_const_iterator_int_* t606 = this604;
  struct std___Rb_tree_node_base* t607 = __x605;
  t606->_M_node = t607;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v608) {
bb609: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this610;
  struct std___Rb_tree_const_iterator_int_ __retval611;
  this610 = v608;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t612 = this610;
  struct std___Rb_tree_header* base613 = (struct std___Rb_tree_header*)((char *)&(t612->_M_impl) + 8);
  struct std___Rb_tree_node_base* t614 = base613->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval611, t614);
  struct std___Rb_tree_const_iterator_int_ t615 = __retval611;
  return t615;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v616) {
bb617: ;
  struct std__set_int__std__less_int___std__allocator_int__* this618;
  struct std___Rb_tree_const_iterator_int_ __retval619;
  this618 = v616;
  struct std__set_int__std__less_int___std__allocator_int__* t620 = this618;
  struct std___Rb_tree_const_iterator_int_ r621 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t620->_M_t);
  __retval619 = r621;
  struct std___Rb_tree_const_iterator_int_ t622 = __retval619;
  return t622;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v623, struct std___Rb_tree_const_iterator_int_* v624) {
bb625: ;
  struct std___Rb_tree_const_iterator_int_* this626;
  struct std___Rb_tree_const_iterator_int_* unnamed627;
  struct std___Rb_tree_const_iterator_int_* __retval628;
  this626 = v623;
  unnamed627 = v624;
  struct std___Rb_tree_const_iterator_int_* t629 = this626;
  struct std___Rb_tree_const_iterator_int_* t630 = unnamed627;
  struct std___Rb_tree_node_base* t631 = t630->_M_node;
  t629->_M_node = t631;
  __retval628 = t629;
  struct std___Rb_tree_const_iterator_int_* t632 = __retval628;
  return t632;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v633, struct std___Rb_tree_const_iterator_int_* v634) {
bb635: ;
  struct std___Rb_tree_const_iterator_int_* __x636;
  struct std___Rb_tree_const_iterator_int_* __y637;
  _Bool __retval638;
  __x636 = v633;
  __y637 = v634;
  struct std___Rb_tree_const_iterator_int_* t639 = __x636;
  struct std___Rb_tree_node_base* t640 = t639->_M_node;
  struct std___Rb_tree_const_iterator_int_* t641 = __y637;
  struct std___Rb_tree_node_base* t642 = t641->_M_node;
  _Bool c643 = ((t640 == t642)) ? 1 : 0;
  __retval638 = c643;
  _Bool t644 = __retval638;
  return t644;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v645) {
bb646: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this647;
  struct std___Rb_tree_const_iterator_int_ __retval648;
  this647 = v645;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t649 = this647;
  struct std___Rb_tree_node_base* r650 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t649);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval648, r650);
  struct std___Rb_tree_const_iterator_int_ t651 = __retval648;
  return t651;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v652) {
bb653: ;
  struct std__set_int__std__less_int___std__allocator_int__* this654;
  struct std___Rb_tree_const_iterator_int_ __retval655;
  this654 = v652;
  struct std__set_int__std__less_int___std__allocator_int__* t656 = this654;
  struct std___Rb_tree_const_iterator_int_ r657 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t656->_M_t);
  __retval655 = r657;
  struct std___Rb_tree_const_iterator_int_ t658 = __retval655;
  return t658;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v659) {
bb660: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this661;
  this661 = v659;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t662 = this661;
  struct std___Rb_tree_node_int_* r663 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t662);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t662, r663);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base664 = (struct std___Rb_tree_header*)((char *)&(t662->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base664);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5clearEv
void std__set_int__std__less_int___std__allocator_int_____clear(struct std__set_int__std__less_int___std__allocator_int__* v665) {
bb666: ;
  struct std__set_int__std__less_int___std__allocator_int__* this667;
  this667 = v665;
  struct std__set_int__std__less_int___std__allocator_int__* t668 = this667;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(&t668->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v669) {
bb670: ;
  struct std___Rb_tree_const_iterator_int_* this671;
  struct std___Rb_tree_const_iterator_int_* __retval672;
  this671 = v669;
  struct std___Rb_tree_const_iterator_int_* t673 = this671;
  struct std___Rb_tree_node_base* t674 = t673->_M_node;
  struct std___Rb_tree_node_base* r675 = std___Rb_tree_increment(t674);
  t673->_M_node = r675;
  __retval672 = t673;
  struct std___Rb_tree_const_iterator_int_* t676 = __retval672;
  return t676;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v677) {
bb678: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this679;
  unsigned long __retval680;
  this679 = v677;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t681 = this679;
  struct std___Rb_tree_header* base682 = (struct std___Rb_tree_header*)((char *)&(t681->_M_impl) + 8);
  unsigned long t683 = base682->_M_node_count;
  __retval680 = t683;
  unsigned long t684 = __retval680;
  return t684;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v685) {
bb686: ;
  struct std__set_int__std__less_int___std__allocator_int__* this687;
  unsigned long __retval688;
  this687 = v685;
  struct std__set_int__std__less_int___std__allocator_int__* t689 = this687;
  unsigned long r690 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t689->_M_t);
  __retval688 = r690;
  unsigned long t691 = __retval688;
  return t691;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v692) {
bb693: ;
  struct std___Rb_tree_const_iterator_int_* this694;
  int* __retval695;
  this694 = v692;
  struct std___Rb_tree_const_iterator_int_* t696 = this694;
  struct std___Rb_tree_node_base* t697 = t696->_M_node;
  struct std___Rb_tree_node_int_* derived698 = ((t697) ? (struct std___Rb_tree_node_int_*)((char *)t697 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r699 = std___Rb_tree_node_int____M_valptr___const(derived698);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval695 = r699;
  int* t700 = __retval695;
  return t700;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v701, int v702) {
bb703: ;
  struct std___Rb_tree_const_iterator_int_* this704;
  int unnamed705;
  struct std___Rb_tree_const_iterator_int_ __retval706;
  this704 = v701;
  unnamed705 = v702;
  struct std___Rb_tree_const_iterator_int_* t707 = this704;
  __retval706 = *t707; // copy
  struct std___Rb_tree_node_base* t708 = t707->_M_node;
  struct std___Rb_tree_node_base* r709 = std___Rb_tree_increment(t708);
  t707->_M_node = r709;
  struct std___Rb_tree_const_iterator_int_ t710 = __retval706;
  return t710;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v711, void* v712) {
bb713: ;
  struct std__basic_ostream_char__std__char_traits_char__* this714;
  void* __pf715;
  struct std__basic_ostream_char__std__char_traits_char__* __retval716;
  this714 = v711;
  __pf715 = v712;
  struct std__basic_ostream_char__std__char_traits_char__* t717 = this714;
  void* t718 = __pf715;
  struct std__basic_ostream_char__std__char_traits_char__* r719 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t718)(t717);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval716 = r719;
  struct std__basic_ostream_char__std__char_traits_char__* t720 = __retval716;
  return t720;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v721) {
bb722: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os723;
  struct std__basic_ostream_char__std__char_traits_char__* __retval724;
  __os723 = v721;
  struct std__basic_ostream_char__std__char_traits_char__* t725 = __os723;
  struct std__basic_ostream_char__std__char_traits_char__* r726 = std__ostream__flush(t725);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval724 = r726;
  struct std__basic_ostream_char__std__char_traits_char__* t727 = __retval724;
  return t727;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v728) {
bb729: ;
  struct std__ctype_char_* __f730;
  struct std__ctype_char_* __retval731;
  __f730 = v728;
    struct std__ctype_char_* t732 = __f730;
    _Bool cast733 = (_Bool)t732;
    _Bool u734 = !cast733;
    if (u734) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t735 = __f730;
  __retval731 = t735;
  struct std__ctype_char_* t736 = __retval731;
  return t736;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v737, char v738) {
bb739: ;
  struct std__ctype_char_* this740;
  char __c741;
  char __retval742;
  this740 = v737;
  __c741 = v738;
  struct std__ctype_char_* t743 = this740;
    char t744 = t743->_M_widen_ok;
    _Bool cast745 = (_Bool)t744;
    if (cast745) {
      char t746 = __c741;
      unsigned char cast747 = (unsigned char)t746;
      unsigned long cast748 = (unsigned long)cast747;
      char t749 = t743->_M_widen[cast748];
      __retval742 = t749;
      char t750 = __retval742;
      return t750;
    }
  std__ctype_char____M_widen_init___const(t743);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t751 = __c741;
  void** v752 = (void**)t743;
  void* v753 = *((void**)v752);
  char vcall756 = (char)__VERIFIER_virtual_call_char_char(t743, 6, t751);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval742 = vcall756;
  char t757 = __retval742;
  return t757;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v758, char v759) {
bb760: ;
  struct std__basic_ios_char__std__char_traits_char__* this761;
  char __c762;
  char __retval763;
  this761 = v758;
  __c762 = v759;
  struct std__basic_ios_char__std__char_traits_char__* t764 = this761;
  struct std__ctype_char_* t765 = t764->_M_ctype;
  struct std__ctype_char_* r766 = std__ctype_char__const__std____check_facet_std__ctype_char___(t765);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t767 = __c762;
  char r768 = std__ctype_char___widen_char__const(r766, t767);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval763 = r768;
  char t769 = __retval763;
  return t769;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v770) {
bb771: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os772;
  struct std__basic_ostream_char__std__char_traits_char__* __retval773;
  __os772 = v770;
  struct std__basic_ostream_char__std__char_traits_char__* t774 = __os772;
  struct std__basic_ostream_char__std__char_traits_char__* t775 = __os772;
  void** v776 = (void**)t775;
  void* v777 = *((void**)v776);
  unsigned char* cast778 = (unsigned char*)v777;
  long c779 = -24;
  unsigned char* ptr780 = &(cast778)[c779];
  long* cast781 = (long*)ptr780;
  long t782 = *cast781;
  unsigned char* cast783 = (unsigned char*)t775;
  unsigned char* ptr784 = &(cast783)[t782];
  struct std__basic_ostream_char__std__char_traits_char__* cast785 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr784;
  struct std__basic_ios_char__std__char_traits_char__* cast786 = (struct std__basic_ios_char__std__char_traits_char__*)cast785;
  char c787 = 10;
  char r788 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast786, c787);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r789 = std__ostream__put(t774, r788);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r790 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r789);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval773 = r790;
  struct std__basic_ostream_char__std__char_traits_char__* t791 = __retval773;
  return t791;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v792) {
bb793: ;
  struct std__set_int__std__less_int___std__allocator_int__* this794;
  this794 = v792;
  struct std__set_int__std__less_int___std__allocator_int__* t795 = this794;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t795->_M_t);
  }
  return;
}

// function: main
int main() {
bb796: ;
  int __retval797;
  struct std__set_int__std__less_int___std__allocator_int__ myset798;
  struct std___Rb_tree_const_iterator_int_ it799;
  int ref_tmp0800;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0801;
  int ref_tmp1802;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp1803;
  int ref_tmp2804;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp2805;
  int ref_tmp5806;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp3807;
  struct std___Rb_tree_const_iterator_int_ ref_tmp6808;
  int ref_tmp7809;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp4810;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5811;
  int c812 = 0;
  __retval797 = c812;
  std__set_int__std__less_int___std__allocator_int_____set(&myset798);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it799);
    int c813 = 100;
    ref_tmp0800 = c813;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r814 = std__set_int__std__less_int___std__allocator_int_____insert(&myset798, &ref_tmp0800);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset798);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0801 = r814;
    int c815 = 200;
    ref_tmp1802 = c815;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r816 = std__set_int__std__less_int___std__allocator_int_____insert(&myset798, &ref_tmp1802);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset798);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1803 = r816;
    int c817 = 300;
    ref_tmp2804 = c817;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r818 = std__set_int__std__less_int___std__allocator_int_____insert(&myset798, &ref_tmp2804);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset798);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2805 = r818;
    char* cast819 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r820 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast819);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset798);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp3821;
      struct std___Rb_tree_const_iterator_int_ ref_tmp4822;
      struct std___Rb_tree_const_iterator_int_ r823 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset798);
      ref_tmp3821 = r823;
      struct std___Rb_tree_const_iterator_int_* r824 = std___Rb_tree_const_iterator_int___operator_(&it799, &ref_tmp3821);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r826 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset798);
        ref_tmp4822 = r826;
        _Bool r827 = std__operator___2(&it799, &ref_tmp4822);
        _Bool u828 = !r827;
        if (!u828) break;
        std__set_int__std__less_int___std__allocator_int_____clear(&myset798);
      for_step825: ;
        struct std___Rb_tree_const_iterator_int_* r829 = std___Rb_tree_const_iterator_int___operator___2(&it799);
      }
    unsigned long r830 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset798);
    unsigned long c831 = 0;
    _Bool c832 = ((r830 == c831)) ? 1 : 0;
    if (c832) {
    } else {
      char* cast833 = (char*)&(_str_1);
      char* c834 = (char*)_str_2;
      unsigned int c835 = 27;
      char* cast836 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast833, c834, c835, cast836);
    }
    int c837 = 1101;
    ref_tmp5806 = c837;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r838 = std__set_int__std__less_int___std__allocator_int_____insert(&myset798, &ref_tmp5806);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset798);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3807 = r838;
    struct std___Rb_tree_const_iterator_int_ r839 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset798);
    ref_tmp6808 = r839;
    struct std___Rb_tree_const_iterator_int_* r840 = std___Rb_tree_const_iterator_int___operator_(&it799, &ref_tmp6808);
    int* r841 = std___Rb_tree_const_iterator_int___operator____const(&it799);
    int t842 = *r841;
    int c843 = 1101;
    _Bool c844 = ((t842 == c843)) ? 1 : 0;
    if (c844) {
    } else {
      char* cast845 = (char*)&(_str_3);
      char* c846 = (char*)_str_2;
      unsigned int c847 = 30;
      char* cast848 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast845, c846, c847, cast848);
    }
    unsigned long r849 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset798);
    unsigned long c850 = 1;
    _Bool c851 = ((r849 == c850)) ? 1 : 0;
    if (c851) {
    } else {
      char* cast852 = (char*)&(_str_4);
      char* c853 = (char*)_str_2;
      unsigned int c854 = 31;
      char* cast855 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast852, c853, c854, cast855);
    }
    int c856 = 2202;
    ref_tmp7809 = c856;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r857 = std__set_int__std__less_int___std__allocator_int_____insert(&myset798, &ref_tmp7809);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset798);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp4810 = r857;
    unsigned long r858 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset798);
    unsigned long c859 = 2;
    _Bool c860 = ((r858 == c859)) ? 1 : 0;
    if (c860) {
    } else {
      char* cast861 = (char*)&(_str_5);
      char* c862 = (char*)_str_2;
      unsigned int c863 = 33;
      char* cast864 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast861, c862, c863, cast864);
    }
    int* r865 = std___Rb_tree_const_iterator_int___operator____const(&it799);
    int t866 = *r865;
    int c867 = 1101;
    _Bool c868 = ((t866 == c867)) ? 1 : 0;
    if (c868) {
    } else {
      char* cast869 = (char*)&(_str_3);
      char* c870 = (char*)_str_2;
      unsigned int c871 = 34;
      char* cast872 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast869, c870, c871, cast872);
    }
    int c873 = 0;
    struct std___Rb_tree_const_iterator_int_ r874 = std___Rb_tree_const_iterator_int___operator__(&it799, c873);
    agg_tmp5811 = r874;
    int* r875 = std___Rb_tree_const_iterator_int___operator____const(&it799);
    int t876 = *r875;
    int c877 = 2202;
    _Bool c878 = ((t876 == c877)) ? 1 : 0;
    if (c878) {
    } else {
      char* cast879 = (char*)&(_str_6);
      char* c880 = (char*)_str_2;
      unsigned int c881 = 36;
      char* cast882 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast879, c880, c881, cast882);
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp8883;
      struct std___Rb_tree_const_iterator_int_ ref_tmp9884;
      struct std___Rb_tree_const_iterator_int_ r885 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset798);
      ref_tmp8883 = r885;
      struct std___Rb_tree_const_iterator_int_* r886 = std___Rb_tree_const_iterator_int___operator_(&it799, &ref_tmp8883);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r888 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset798);
        ref_tmp9884 = r888;
        _Bool r889 = std__operator___2(&it799, &ref_tmp9884);
        _Bool u890 = !r889;
        if (!u890) break;
        struct std__basic_ostream_char__std__char_traits_char__* r891 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset798);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step887: ;
        struct std___Rb_tree_const_iterator_int_* r892 = std___Rb_tree_const_iterator_int___operator___2(&it799);
      }
    int c893 = 0;
    __retval797 = c893;
    int t894 = __retval797;
    int ret_val895 = t894;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset798);
    }
    return ret_val895;
  int t896 = __retval797;
  return t896;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v897) {
bb898: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this899;
  this899 = v897;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t900 = this899;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t900->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v901) {
bb902: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this903;
  this903 = v901;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t904 = this903;
    struct std___Rb_tree_node_int_* r905 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t904);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t904, r905);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t904->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t904->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v906) {
bb907: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this908;
  this908 = v906;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t909 = this908;
  struct std__allocator_std___Rb_tree_node_int__* base910 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t909 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base910);
    struct std___Rb_tree_key_compare_std__less_int__* base911 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t909 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base911);
    struct std___Rb_tree_header* base912 = (struct std___Rb_tree_header*)((char *)t909 + 8);
    std___Rb_tree_header___Rb_tree_header(base912);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v913) {
bb914: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this915;
  this915 = v913;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t916 = this915;
  {
    struct std__allocator_std___Rb_tree_node_int__* base917 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t916 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base917);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v918) {
bb919: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this920;
  this920 = v918;
  struct std____new_allocator_std___Rb_tree_node_int__* t921 = this920;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v922) {
bb923: ;
  struct std__allocator_std___Rb_tree_node_int__* this924;
  this924 = v922;
  struct std__allocator_std___Rb_tree_node_int__* t925 = this924;
  struct std____new_allocator_std___Rb_tree_node_int__* base926 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t925 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base926);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v927) {
bb928: ;
  struct std___Rb_tree_key_compare_std__less_int__* this929;
  this929 = v927;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v930) {
bb931: ;
  struct std___Rb_tree_header* this932;
  this932 = v930;
  struct std___Rb_tree_header* t933 = this932;
  struct std___Rb_tree_node_base* c934 = ((void*)0);
  t933->_M_header._M_parent = c934;
  t933->_M_header._M_left = &t933->_M_header;
  t933->_M_header._M_right = &t933->_M_header;
  unsigned long c935 = 0;
  t933->_M_node_count = c935;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v936) {
bb937: ;
  struct std___Rb_tree_header* this938;
  this938 = v936;
  struct std___Rb_tree_header* t939 = this938;
  unsigned int c940 = 0;
  t939->_M_header._M_color = c940;
  std___Rb_tree_header___M_reset(t939);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v941) {
bb942: ;
  struct std__allocator_std___Rb_tree_node_int__* this943;
  this943 = v941;
  struct std__allocator_std___Rb_tree_node_int__* t944 = this943;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v945) {
bb946: ;
  struct std___Rb_tree_node_int_* this947;
  struct std___Rb_tree_node_int_* __retval948;
  this947 = v945;
  struct std___Rb_tree_node_int_* t949 = this947;
  __retval948 = t949;
  struct std___Rb_tree_node_int_* t950 = __retval948;
  return t950;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v951) {
bb952: ;
  struct std___Rb_tree_node_int_* __x953;
  struct std___Rb_tree_node_int_* __retval954;
  __x953 = v951;
  struct std___Rb_tree_node_int_* t955 = __x953;
  struct std___Rb_tree_node_base* base956 = (struct std___Rb_tree_node_base*)((char *)t955 + 0);
  struct std___Rb_tree_node_base* t957 = base956->_M_right;
  _Bool cast958 = (_Bool)t957;
  struct std___Rb_tree_node_int_* ternary959;
  if (cast958) {
    struct std___Rb_tree_node_int_* t960 = __x953;
    struct std___Rb_tree_node_base* base961 = (struct std___Rb_tree_node_base*)((char *)t960 + 0);
    struct std___Rb_tree_node_base* t962 = base961->_M_right;
    struct std___Rb_tree_node_int_* derived963 = (struct std___Rb_tree_node_int_*)((char *)t962 - 0);
    struct std___Rb_tree_node_int_* r964 = std___Rb_tree_node_int____M_node_ptr(derived963);
    ternary959 = (struct std___Rb_tree_node_int_*)r964;
  } else {
    struct std___Rb_tree_node_int_* c965 = ((void*)0);
    ternary959 = (struct std___Rb_tree_node_int_*)c965;
  }
  __retval954 = ternary959;
  struct std___Rb_tree_node_int_* t966 = __retval954;
  return t966;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v967) {
bb968: ;
  struct std___Rb_tree_node_int_* __x969;
  struct std___Rb_tree_node_int_* __retval970;
  __x969 = v967;
  struct std___Rb_tree_node_int_* t971 = __x969;
  struct std___Rb_tree_node_base* base972 = (struct std___Rb_tree_node_base*)((char *)t971 + 0);
  struct std___Rb_tree_node_base* t973 = base972->_M_left;
  _Bool cast974 = (_Bool)t973;
  struct std___Rb_tree_node_int_* ternary975;
  if (cast974) {
    struct std___Rb_tree_node_int_* t976 = __x969;
    struct std___Rb_tree_node_base* base977 = (struct std___Rb_tree_node_base*)((char *)t976 + 0);
    struct std___Rb_tree_node_base* t978 = base977->_M_left;
    struct std___Rb_tree_node_int_* derived979 = (struct std___Rb_tree_node_int_*)((char *)t978 - 0);
    struct std___Rb_tree_node_int_* r980 = std___Rb_tree_node_int____M_node_ptr(derived979);
    ternary975 = (struct std___Rb_tree_node_int_*)r980;
  } else {
    struct std___Rb_tree_node_int_* c981 = ((void*)0);
    ternary975 = (struct std___Rb_tree_node_int_*)c981;
  }
  __retval970 = ternary975;
  struct std___Rb_tree_node_int_* t982 = __retval970;
  return t982;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v983) {
bb984: ;
  int* __location985;
  __location985 = v983;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v986, int* v987) {
bb988: ;
  struct std__allocator_std___Rb_tree_node_int__* __a989;
  int* __p990;
  __a989 = v986;
  __p990 = v987;
  int* t991 = __p990;
  void_std__destroy_at_int_(t991);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v992) {
bb993: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this994;
  struct std__allocator_std___Rb_tree_node_int__* __retval995;
  this994 = v992;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t996 = this994;
  struct std__allocator_std___Rb_tree_node_int__* base997 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t996->_M_impl) + 0);
  __retval995 = base997;
  struct std__allocator_std___Rb_tree_node_int__* t998 = __retval995;
  return t998;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v999) {
bb1000: ;
  struct __gnu_cxx____aligned_membuf_int_* this1001;
  void* __retval1002;
  this1001 = v999;
  struct __gnu_cxx____aligned_membuf_int_* t1003 = this1001;
  void* cast1004 = (void*)&(t1003->_M_storage);
  __retval1002 = cast1004;
  void* t1005 = __retval1002;
  return t1005;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1006) {
bb1007: ;
  struct __gnu_cxx____aligned_membuf_int_* this1008;
  int* __retval1009;
  this1008 = v1006;
  struct __gnu_cxx____aligned_membuf_int_* t1010 = this1008;
  void* r1011 = __gnu_cxx____aligned_membuf_int____M_addr(t1010);
  int* cast1012 = (int*)r1011;
  __retval1009 = cast1012;
  int* t1013 = __retval1009;
  return t1013;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1014) {
bb1015: ;
  struct std___Rb_tree_node_int_* this1016;
  int* __retval1017;
  this1016 = v1014;
  struct std___Rb_tree_node_int_* t1018 = this1016;
  int* r1019 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1018->_M_storage);
  __retval1017 = r1019;
  int* t1020 = __retval1017;
  return t1020;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1021, struct std___Rb_tree_node_int_* v1022) {
bb1023: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1024;
  struct std___Rb_tree_node_int_* __p1025;
  this1024 = v1021;
  __p1025 = v1022;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1026 = this1024;
  struct std__allocator_std___Rb_tree_node_int__* r1027 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1026);
  struct std___Rb_tree_node_int_* t1028 = __p1025;
  int* r1029 = std___Rb_tree_node_int____M_valptr(t1028);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1027, r1029);
  struct std___Rb_tree_node_int_* t1030 = __p1025;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1031: ;
  _Bool __retval1032;
    _Bool c1033 = 0;
    __retval1032 = c1033;
    _Bool t1034 = __retval1032;
    return t1034;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1035, struct std___Rb_tree_node_int_* v1036, unsigned long v1037) {
bb1038: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1039;
  struct std___Rb_tree_node_int_* __p1040;
  unsigned long __n1041;
  this1039 = v1035;
  __p1040 = v1036;
  __n1041 = v1037;
  struct std____new_allocator_std___Rb_tree_node_int__* t1042 = this1039;
    unsigned long c1043 = 8;
    unsigned long c1044 = 16;
    _Bool c1045 = ((c1043 > c1044)) ? 1 : 0;
    if (c1045) {
      struct std___Rb_tree_node_int_* t1046 = __p1040;
      void* cast1047 = (void*)t1046;
      unsigned long t1048 = __n1041;
      unsigned long c1049 = 40;
      unsigned long b1050 = t1048 * c1049;
      unsigned long c1051 = 8;
      operator_delete_3(cast1047, b1050, c1051);
      return;
    }
  struct std___Rb_tree_node_int_* t1052 = __p1040;
  void* cast1053 = (void*)t1052;
  unsigned long t1054 = __n1041;
  unsigned long c1055 = 40;
  unsigned long b1056 = t1054 * c1055;
  operator_delete_2(cast1053, b1056);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1057, struct std___Rb_tree_node_int_* v1058, unsigned long v1059) {
bb1060: ;
  struct std__allocator_std___Rb_tree_node_int__* this1061;
  struct std___Rb_tree_node_int_* __p1062;
  unsigned long __n1063;
  this1061 = v1057;
  __p1062 = v1058;
  __n1063 = v1059;
  struct std__allocator_std___Rb_tree_node_int__* t1064 = this1061;
    _Bool r1065 = std____is_constant_evaluated();
    if (r1065) {
      struct std___Rb_tree_node_int_* t1066 = __p1062;
      void* cast1067 = (void*)t1066;
      operator_delete(cast1067);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1068 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1064 + 0);
  struct std___Rb_tree_node_int_* t1069 = __p1062;
  unsigned long t1070 = __n1063;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1068, t1069, t1070);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1071, struct std___Rb_tree_node_int_* v1072, unsigned long v1073) {
bb1074: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1075;
  struct std___Rb_tree_node_int_* __p1076;
  unsigned long __n1077;
  __a1075 = v1071;
  __p1076 = v1072;
  __n1077 = v1073;
  struct std__allocator_std___Rb_tree_node_int__* t1078 = __a1075;
  struct std___Rb_tree_node_int_* t1079 = __p1076;
  unsigned long t1080 = __n1077;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1078, t1079, t1080);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1081, struct std___Rb_tree_node_int_* v1082) {
bb1083: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1084;
  struct std___Rb_tree_node_int_* __p1085;
  this1084 = v1081;
  __p1085 = v1082;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1086 = this1084;
  struct std__allocator_std___Rb_tree_node_int__* r1087 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1086);
  struct std___Rb_tree_node_int_* t1088 = __p1085;
  unsigned long c1089 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1087, t1088, c1089);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1090, struct std___Rb_tree_node_int_* v1091) {
bb1092: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1093;
  struct std___Rb_tree_node_int_* __p1094;
  this1093 = v1090;
  __p1094 = v1091;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1095 = this1093;
  struct std___Rb_tree_node_int_* t1096 = __p1094;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1095, t1096);
  struct std___Rb_tree_node_int_* t1097 = __p1094;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1095, t1097);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1098, struct std___Rb_tree_node_int_* v1099) {
bb1100: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1101;
  struct std___Rb_tree_node_int_* __x1102;
  this1101 = v1098;
  __x1102 = v1099;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1103 = this1101;
    while (1) {
      struct std___Rb_tree_node_int_* t1104 = __x1102;
      _Bool cast1105 = (_Bool)t1104;
      if (!cast1105) break;
        struct std___Rb_tree_node_int_* __y1106;
        struct std___Rb_tree_node_int_* t1107 = __x1102;
        struct std___Rb_tree_node_int_* r1108 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1107);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1103, r1108);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1109 = __x1102;
        struct std___Rb_tree_node_int_* r1110 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1109);
        if (__cir_exc_active) {
          return;
        }
        __y1106 = r1110;
        struct std___Rb_tree_node_int_* t1111 = __x1102;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1103, t1111);
        struct std___Rb_tree_node_int_* t1112 = __y1106;
        __x1102 = t1112;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1113) {
bb1114: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1115;
  struct std___Rb_tree_node_int_* __retval1116;
  struct std___Rb_tree_node_base* __begin1117;
  this1115 = v1113;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1118 = this1115;
  struct std___Rb_tree_header* base1119 = (struct std___Rb_tree_header*)((char *)&(t1118->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1120 = base1119->_M_header._M_parent;
  __begin1117 = t1120;
  struct std___Rb_tree_node_base* t1121 = __begin1117;
  _Bool cast1122 = (_Bool)t1121;
  struct std___Rb_tree_node_int_* ternary1123;
  if (cast1122) {
    struct std___Rb_tree_node_base* t1124 = __begin1117;
    struct std___Rb_tree_node_int_* derived1125 = (struct std___Rb_tree_node_int_*)((char *)t1124 - 0);
    struct std___Rb_tree_node_int_* r1126 = std___Rb_tree_node_int____M_node_ptr(derived1125);
    ternary1123 = (struct std___Rb_tree_node_int_*)r1126;
  } else {
    struct std___Rb_tree_node_int_* c1127 = ((void*)0);
    ternary1123 = (struct std___Rb_tree_node_int_*)c1127;
  }
  __retval1116 = ternary1123;
  struct std___Rb_tree_node_int_* t1128 = __retval1116;
  return t1128;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1129, struct std___Rb_tree_iterator_int_* v1130) {
bb1131: ;
  struct std___Rb_tree_const_iterator_int_* this1132;
  struct std___Rb_tree_iterator_int_* __it1133;
  this1132 = v1129;
  __it1133 = v1130;
  struct std___Rb_tree_const_iterator_int_* t1134 = this1132;
  struct std___Rb_tree_iterator_int_* t1135 = __it1133;
  struct std___Rb_tree_node_base* t1136 = t1135->_M_node;
  t1134->_M_node = t1136;
  return;
}

