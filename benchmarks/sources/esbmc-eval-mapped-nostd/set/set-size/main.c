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
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
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
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[20] = "myints.size() == 10";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 11";
char _str_7[10] = "3. size: ";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert_2(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p0, struct std___Rb_tree_iterator_int_* p1, struct std___Rb_tree_iterator_int_* p2);
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std__set_int__std__less_int___std__allocator_int_____erase(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v4, int v5) {
bb6:
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
bb15:
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
bb24:
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
bb33:
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
bb46:
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
bb63:
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
bb75:
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
bb104:
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

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v111) {
bb112:
  struct std__set_int__std__less_int___std__allocator_int__* this113;
  unsigned long __retval114;
  this113 = v111;
  struct std__set_int__std__less_int___std__allocator_int__* t115 = this113;
  unsigned long r116 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t115->_M_t);
  __retval114 = r116;
  unsigned long t117 = __retval114;
  return t117;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v118, void* v119) {
bb120:
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
bb129:
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
bb136:
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
bb146:
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
bb167:
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
bb178:
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
bb200:
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
bb208:
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
bb214:
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
bb224:
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
bb237:
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
bb244:
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
bb252:
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
bb259:
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
bb268:
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
bb276:
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
bb283:
  struct std___Rb_tree_node_base* __x284;
  struct std___Rb_tree_node_base* __retval285;
  __x284 = v282;
  struct std___Rb_tree_node_base* t286 = __x284;
  struct std___Rb_tree_node_base* t287 = t286->_M_right;
  __retval285 = t287;
  struct std___Rb_tree_node_base* t288 = __retval285;
  return t288;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v289, struct std___Rb_tree_iterator_int_* v290) {
bb291:
  struct std___Rb_tree_iterator_int_* __x292;
  struct std___Rb_tree_iterator_int_* __y293;
  _Bool __retval294;
  __x292 = v289;
  __y293 = v290;
  struct std___Rb_tree_iterator_int_* t295 = __x292;
  struct std___Rb_tree_node_base* t296 = t295->_M_node;
  struct std___Rb_tree_iterator_int_* t297 = __y293;
  struct std___Rb_tree_node_base* t298 = t297->_M_node;
  _Bool c299 = ((t296 == t298)) ? 1 : 0;
  __retval294 = c299;
  _Bool t300 = __retval294;
  return t300;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v301) {
bb302:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this303;
  struct std___Rb_tree_iterator_int_ __retval304;
  this303 = v301;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t305 = this303;
  struct std___Rb_tree_header* base306 = (struct std___Rb_tree_header*)((char *)&(t305->_M_impl) + 8);
  struct std___Rb_tree_node_base* t307 = base306->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval304, t307);
  struct std___Rb_tree_iterator_int_ t308 = __retval304;
  return t308;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v309, struct std___Rb_tree_node_base** v310, struct std___Rb_tree_node_base** v311) {
bb312:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this313;
  struct std___Rb_tree_node_base** __x314;
  struct std___Rb_tree_node_base** __y315;
  this313 = v309;
  __x314 = v310;
  __y315 = v311;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t316 = this313;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base317 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t316 + 0);
  struct std___Rb_tree_node_base** t318 = __x314;
  struct std___Rb_tree_node_base* t319 = *t318;
  t316->first = t319;
  struct std___Rb_tree_node_base** t320 = __y315;
  struct std___Rb_tree_node_base* t321 = *t320;
  t316->second = t321;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v322) {
bb323:
  struct std___Rb_tree_iterator_int_* this324;
  struct std___Rb_tree_iterator_int_* __retval325;
  this324 = v322;
  struct std___Rb_tree_iterator_int_* t326 = this324;
  struct std___Rb_tree_node_base* t327 = t326->_M_node;
  struct std___Rb_tree_node_base* r328 = std___Rb_tree_decrement(t327);
  t326->_M_node = r328;
  __retval325 = t326;
  struct std___Rb_tree_iterator_int_* t329 = __retval325;
  return t329;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v330, struct std___Rb_tree_node_base** v331, struct std___Rb_tree_node_base** v332) {
bb333:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this334;
  struct std___Rb_tree_node_base** __x335;
  struct std___Rb_tree_node_base** __y336;
  this334 = v330;
  __x335 = v331;
  __y336 = v332;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t337 = this334;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base338 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t337 + 0);
  struct std___Rb_tree_node_base** t339 = __x335;
  struct std___Rb_tree_node_base* t340 = *t339;
  t337->first = t340;
  struct std___Rb_tree_node_base** t341 = __y336;
  struct std___Rb_tree_node_base* t342 = *t341;
  t337->second = t342;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v343, int* v344) {
bb345:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this346;
  int* __k347;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval348;
  struct std___Rb_tree_node_base* __x349;
  struct std___Rb_tree_node_base* __y350;
  _Bool __comp351;
  struct std___Rb_tree_iterator_int_ __j352;
  struct std___Rb_tree_node_base* ref_tmp1353;
  this346 = v343;
  __k347 = v344;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t354 = this346;
  struct std___Rb_tree_node_base* r355 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t354);
  __x349 = r355;
  struct std___Rb_tree_node_base* r356 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t354);
  __y350 = r356;
  _Bool c357 = 1;
  __comp351 = c357;
    while (1) {
      struct std___Rb_tree_node_base* t358 = __x349;
      _Bool cast359 = (_Bool)t358;
      if (!cast359) break;
        struct std___Rb_tree_node_base* t360 = __x349;
        __y350 = t360;
        struct std___Rb_tree_key_compare_std__less_int__* base361 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t354->_M_impl) + 0);
        struct std__less_int_* cast362 = (struct std__less_int_*)base361;
        int* t363 = __k347;
        struct std___Rb_tree_node_base* t364 = __x349;
        int* r365 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t364);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r366 = std__less_int___operator___int_const___int_const___const(cast362, t363, r365);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp351 = r366;
        _Bool t367 = __comp351;
        struct std___Rb_tree_node_base* ternary368;
        if (t367) {
          struct std___Rb_tree_node_base* t369 = __x349;
          struct std___Rb_tree_node_base* r370 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t369);
          ternary368 = (struct std___Rb_tree_node_base*)r370;
        } else {
          struct std___Rb_tree_node_base* t371 = __x349;
          struct std___Rb_tree_node_base* r372 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t371);
          ternary368 = (struct std___Rb_tree_node_base*)r372;
        }
        __x349 = ternary368;
    }
  struct std___Rb_tree_node_base* t373 = __y350;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j352, t373);
    _Bool t374 = __comp351;
    if (t374) {
        struct std___Rb_tree_iterator_int_ ref_tmp0375;
        struct std___Rb_tree_iterator_int_ r376 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t354);
        ref_tmp0375 = r376;
        _Bool r377 = std__operator__(&__j352, &ref_tmp0375);
        if (r377) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval348, &__x349, &__y350);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t378 = __retval348;
          return t378;
        } else {
          struct std___Rb_tree_iterator_int_* r379 = std___Rb_tree_iterator_int___operator__(&__j352);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base380 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t354->_M_impl) + 0);
    struct std__less_int_* cast381 = (struct std__less_int_*)base380;
    struct std___Rb_tree_node_base* t382 = __j352._M_node;
    int* r383 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t382);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t384 = __k347;
    _Bool r385 = std__less_int___operator___int_const___int_const___const(cast381, r383, t384);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r385) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval348, &__x349, &__y350);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t386 = __retval348;
      return t386;
    }
  struct std___Rb_tree_node_base* c387 = ((void*)0);
  ref_tmp1353 = c387;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval348, &__j352._M_node, &ref_tmp1353);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t388 = __retval348;
  return t388;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v389, int* v390) {
bb391:
  struct std___Identity_int_* this392;
  int* __x393;
  int* __retval394;
  this392 = v389;
  __x393 = v390;
  struct std___Identity_int_* t395 = this392;
  int* t396 = __x393;
  __retval394 = t396;
  int* t397 = __retval394;
  return t397;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v398, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v399) {
bb400:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this401;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t402;
  this401 = v398;
  __t402 = v399;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t403 = this401;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t404 = __t402;
  t403->_M_t = t404;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v405) {
bb406:
  struct std____new_allocator_std___Rb_tree_node_int__* this407;
  unsigned long __retval408;
  this407 = v405;
  struct std____new_allocator_std___Rb_tree_node_int__* t409 = this407;
  unsigned long c410 = 9223372036854775807;
  unsigned long c411 = 40;
  unsigned long b412 = c410 / c411;
  __retval408 = b412;
  unsigned long t413 = __retval408;
  return t413;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v414, unsigned long v415, void* v416) {
bb417:
  struct std____new_allocator_std___Rb_tree_node_int__* this418;
  unsigned long __n419;
  void* unnamed420;
  struct std___Rb_tree_node_int_* __retval421;
  this418 = v414;
  __n419 = v415;
  unnamed420 = v416;
  struct std____new_allocator_std___Rb_tree_node_int__* t422 = this418;
    unsigned long t423 = __n419;
    unsigned long r424 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t422);
    _Bool c425 = ((t423 > r424)) ? 1 : 0;
    if (c425) {
        unsigned long t426 = __n419;
        unsigned long c427 = -1;
        unsigned long c428 = 40;
        unsigned long b429 = c427 / c428;
        _Bool c430 = ((t426 > b429)) ? 1 : 0;
        if (c430) {
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
    unsigned long c431 = 8;
    unsigned long c432 = 16;
    _Bool c433 = ((c431 > c432)) ? 1 : 0;
    if (c433) {
      unsigned long __al434;
      unsigned long c435 = 8;
      __al434 = c435;
      unsigned long t436 = __n419;
      unsigned long c437 = 40;
      unsigned long b438 = t436 * c437;
      unsigned long t439 = __al434;
      void* r440 = operator_new_2(b438, t439);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast441 = (struct std___Rb_tree_node_int_*)r440;
      __retval421 = cast441;
      struct std___Rb_tree_node_int_* t442 = __retval421;
      return t442;
    }
  unsigned long t443 = __n419;
  unsigned long c444 = 40;
  unsigned long b445 = t443 * c444;
  void* r446 = operator_new(b445);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast447 = (struct std___Rb_tree_node_int_*)r446;
  __retval421 = cast447;
  struct std___Rb_tree_node_int_* t448 = __retval421;
  return t448;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v449, unsigned long v450) {
bb451:
  struct std__allocator_std___Rb_tree_node_int__* this452;
  unsigned long __n453;
  struct std___Rb_tree_node_int_* __retval454;
  this452 = v449;
  __n453 = v450;
  struct std__allocator_std___Rb_tree_node_int__* t455 = this452;
    _Bool r456 = std____is_constant_evaluated();
    if (r456) {
        unsigned long t457 = __n453;
        unsigned long c458 = 40;
        unsigned long ovr459;
        _Bool ovf460 = __builtin_mul_overflow(t457, c458, &ovr459);
        __n453 = ovr459;
        if (ovf460) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t461 = __n453;
      void* r462 = operator_new(t461);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast463 = (struct std___Rb_tree_node_int_*)r462;
      __retval454 = cast463;
      struct std___Rb_tree_node_int_* t464 = __retval454;
      return t464;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base465 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t455 + 0);
  unsigned long t466 = __n453;
  void* c467 = ((void*)0);
  struct std___Rb_tree_node_int_* r468 = std____new_allocator_std___Rb_tree_node_int_____allocate(base465, t466, c467);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval454 = r468;
  struct std___Rb_tree_node_int_* t469 = __retval454;
  return t469;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v470, unsigned long v471) {
bb472:
  struct std__allocator_std___Rb_tree_node_int__* __a473;
  unsigned long __n474;
  struct std___Rb_tree_node_int_* __retval475;
  __a473 = v470;
  __n474 = v471;
  struct std__allocator_std___Rb_tree_node_int__* t476 = __a473;
  unsigned long t477 = __n474;
  struct std___Rb_tree_node_int_* r478 = std__allocator_std___Rb_tree_node_int_____allocate(t476, t477);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval475 = r478;
  struct std___Rb_tree_node_int_* t479 = __retval475;
  return t479;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v480) {
bb481:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this482;
  struct std___Rb_tree_node_int_* __retval483;
  this482 = v480;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t484 = this482;
  struct std__allocator_std___Rb_tree_node_int__* r485 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t484);
  unsigned long c486 = 1;
  struct std___Rb_tree_node_int_* r487 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r485, c486);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval483 = r487;
  struct std___Rb_tree_node_int_* t488 = __retval483;
  return t488;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v489, int* v490) {
bb491:
  int* __location492;
  int* __args493;
  int* __retval494;
  void* __loc495;
  __location492 = v489;
  __args493 = v490;
  int* t496 = __location492;
  void* cast497 = (void*)t496;
  __loc495 = cast497;
    void* t498 = __loc495;
    int* cast499 = (int*)t498;
    int* t500 = __args493;
    int t501 = *t500;
    *cast499 = t501;
    __retval494 = cast499;
    int* t502 = __retval494;
    return t502;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v503, int* v504, int* v505) {
bb506:
  struct std__allocator_std___Rb_tree_node_int__* __a507;
  int* __p508;
  int* __args509;
  __a507 = v503;
  __p508 = v504;
  __args509 = v505;
  int* t510 = __p508;
  int* t511 = __args509;
  int* r512 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t510, t511);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v513, struct std___Rb_tree_node_int_* v514, int* v515) {
bb516:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this517;
  struct std___Rb_tree_node_int_* __node518;
  int* __args519;
  this517 = v513;
  __node518 = v514;
  __args519 = v515;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t520 = this517;
      struct std__allocator_std___Rb_tree_node_int__* r522 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t520);
      struct std___Rb_tree_node_int_* t523 = __node518;
      int* r524 = std___Rb_tree_node_int____M_valptr(t523);
      if (__cir_exc_active) {
        goto cir_try_dispatch521;
      }
      int* t525 = __args519;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r522, r524, t525);
    cir_try_dispatch521: ;
    if (__cir_exc_active) {
    {
      int ca_tok526 = 0;
      void* ca_exn527 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t528 = __node518;
        struct std___Rb_tree_node_int_* t529 = __node518;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t520, t529);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v530, int* v531) {
bb532:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this533;
  int* __args534;
  struct std___Rb_tree_node_int_* __retval535;
  struct std___Rb_tree_node_int_* __tmp536;
  this533 = v530;
  __args534 = v531;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t537 = this533;
  struct std___Rb_tree_node_int_* r538 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t537);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp536 = r538;
  struct std___Rb_tree_node_int_* t539 = __tmp536;
  int* t540 = __args534;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t537, t539, t540);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t541 = __tmp536;
  __retval535 = t541;
  struct std___Rb_tree_node_int_* t542 = __retval535;
  return t542;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v543, int* v544) {
bb545:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this546;
  int* __arg547;
  struct std___Rb_tree_node_int_* __retval548;
  this546 = v543;
  __arg547 = v544;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t549 = this546;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t550 = t549->_M_t;
  int* t551 = __arg547;
  struct std___Rb_tree_node_int_* r552 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t550, t551);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval548 = r552;
  struct std___Rb_tree_node_int_* t553 = __retval548;
  return t553;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v554, struct std___Rb_tree_node_base* v555, struct std___Rb_tree_node_base* v556, struct std___Rb_tree_node_base* v557) {
bb558:
  _Bool __insert_left559;
  struct std___Rb_tree_node_base* __x560;
  struct std___Rb_tree_node_base* __p561;
  struct std___Rb_tree_node_base* __header562;
  __insert_left559 = v554;
  __x560 = v555;
  __p561 = v556;
  __header562 = v557;
  _Bool t563 = __insert_left559;
  struct std___Rb_tree_node_base* t564 = __x560;
  struct std___Rb_tree_node_base* t565 = __p561;
  struct std___Rb_tree_node_base* t566 = __header562;
  std___Rb_tree_insert_and_rebalance(t563, t564, t565, t566);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSD_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v567, struct std___Rb_tree_node_base* v568, struct std___Rb_tree_node_base* v569, int* v570, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v571) {
bb572:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this573;
  struct std___Rb_tree_node_base* __x574;
  struct std___Rb_tree_node_base* __p575;
  int* __v576;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen577;
  struct std___Rb_tree_iterator_int_ __retval578;
  _Bool __insert_left579;
  struct std___Rb_tree_node_base* __z580;
  this573 = v567;
  __x574 = v568;
  __p575 = v569;
  __v576 = v570;
  __node_gen577 = v571;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t581 = this573;
  struct std___Rb_tree_node_base* t582 = __x574;
  _Bool cast583 = (_Bool)t582;
  _Bool ternary584;
  if (cast583) {
    _Bool c585 = 1;
    ternary584 = (_Bool)c585;
  } else {
    struct std___Rb_tree_node_base* t586 = __p575;
    struct std___Rb_tree_node_base* r587 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t581);
    _Bool c588 = ((t586 == r587)) ? 1 : 0;
    ternary584 = (_Bool)c588;
  }
  _Bool ternary589;
  if (ternary584) {
    _Bool c590 = 1;
    ternary589 = (_Bool)c590;
  } else {
    struct std___Identity_int_ ref_tmp0591;
    struct std___Rb_tree_key_compare_std__less_int__* base592 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t581->_M_impl) + 0);
    struct std__less_int_* cast593 = (struct std__less_int_*)base592;
    int* t594 = __v576;
    int* r595 = std___Identity_int___operator___int_const___const(&ref_tmp0591, t594);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t596 = __p575;
    int* r597 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t596);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r598 = std__less_int___operator___int_const___int_const___const(cast593, r595, r597);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary589 = (_Bool)r598;
  }
  __insert_left579 = ternary589;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t599 = __node_gen577;
  int* t600 = __v576;
  struct std___Rb_tree_node_int_* r601 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t599, t600);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base602 = (struct std___Rb_tree_node_base*)((char *)r601 + 0);
  struct std___Rb_tree_node_base* r603 = std___Rb_tree_node_base___M_base_ptr___const(base602);
  __z580 = r603;
  _Bool t604 = __insert_left579;
  struct std___Rb_tree_node_base* t605 = __z580;
  struct std___Rb_tree_node_base* t606 = __p575;
  struct std___Rb_tree_header* base607 = (struct std___Rb_tree_header*)((char *)&(t581->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t604, t605, t606, &base607->_M_header);
  struct std___Rb_tree_header* base608 = (struct std___Rb_tree_header*)((char *)&(t581->_M_impl) + 8);
  unsigned long t609 = base608->_M_node_count;
  unsigned long u610 = t609 + 1;
  base608->_M_node_count = u610;
  struct std___Rb_tree_node_base* t611 = __z580;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval578, t611);
  struct std___Rb_tree_iterator_int_ t612 = __retval578;
  return t612;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v613, struct std___Rb_tree_iterator_int_* v614, _Bool* v615) {
bb616:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this617;
  struct std___Rb_tree_iterator_int_* __x618;
  _Bool* __y619;
  this617 = v613;
  __x618 = v614;
  __y619 = v615;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t620 = this617;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base621 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t620 + 0);
  struct std___Rb_tree_iterator_int_* t622 = __x618;
  t620->first = *t622; // copy
  _Bool* t623 = __y619;
  _Bool t624 = *t623;
  t620->second = t624;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v625, struct std___Rb_tree_node_base* v626) {
bb627:
  struct std___Rb_tree_iterator_int_* this628;
  struct std___Rb_tree_node_base* __x629;
  this628 = v625;
  __x629 = v626;
  struct std___Rb_tree_iterator_int_* t630 = this628;
  struct std___Rb_tree_node_base* t631 = __x629;
  t630->_M_node = t631;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v632, int* v633) {
bb634:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this635;
  int* __v636;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval637;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res638;
  struct std___Identity_int_ ref_tmp0639;
  struct std___Rb_tree_iterator_int_ ref_tmp3640;
  _Bool ref_tmp4641;
  this635 = v632;
  __v636 = v633;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t642 = this635;
  int* t643 = __v636;
  int* r644 = std___Identity_int___operator___int_const___const(&ref_tmp0639, t643);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r645 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t642, r644);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res638 = r645;
    struct std___Rb_tree_node_base* t646 = __res638.second;
    _Bool cast647 = (_Bool)t646;
    if (cast647) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an648;
      struct std___Rb_tree_iterator_int_ ref_tmp1649;
      _Bool ref_tmp2650;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an648, t642);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t651 = __res638.first;
      struct std___Rb_tree_node_base* t652 = __res638.second;
      int* t653 = __v636;
      struct std___Rb_tree_iterator_int_ r654 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t642, t651, t652, t653, &__an648);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1649 = r654;
      _Bool c655 = 1;
      ref_tmp2650 = c655;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval637, &ref_tmp1649, &ref_tmp2650);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t656 = __retval637;
      return t656;
    }
  struct std___Rb_tree_node_base* t657 = __res638.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3640, t657);
  _Bool c658 = 0;
  ref_tmp4641 = c658;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval637, &ref_tmp3640, &ref_tmp4641);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t659 = __retval637;
  return t659;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v660, struct std___Rb_tree_iterator_int_* v661, _Bool* v662) {
bb663:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this664;
  struct std___Rb_tree_iterator_int_* __x665;
  _Bool* __y666;
  this664 = v660;
  __x665 = v661;
  __y666 = v662;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t667 = this664;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base668 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t667 + 0);
  struct std___Rb_tree_iterator_int_* t669 = __x665;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t667->first, t669);
  _Bool* t670 = __y666;
  _Bool t671 = *t670;
  t667->second = t671;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertERKi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert_2(struct std__set_int__std__less_int___std__allocator_int__* v672, int* v673) {
bb674:
  struct std__set_int__std__less_int___std__allocator_int__* this675;
  int* __x676;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval677;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p678;
  this675 = v672;
  __x676 = v673;
  struct std__set_int__std__less_int___std__allocator_int__* t679 = this675;
  int* t680 = __x676;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r681 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(&t679->_M_t, t680);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p678 = r681;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval677, &__p678.first, &__p678.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t682 = __retval677;
  return t682;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v683, int* v684) {
bb685:
  struct std___Identity_int_* this686;
  int* __x687;
  int* __retval688;
  this686 = v683;
  __x687 = v684;
  struct std___Identity_int_* t689 = this686;
  int* t690 = __x687;
  __retval688 = t690;
  int* t691 = __retval688;
  return t691;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v692, int* v693) {
bb694:
  int* __location695;
  int* __args696;
  int* __retval697;
  void* __loc698;
  __location695 = v692;
  __args696 = v693;
  int* t699 = __location695;
  void* cast700 = (void*)t699;
  __loc698 = cast700;
    void* t701 = __loc698;
    int* cast702 = (int*)t701;
    int* t703 = __args696;
    int t704 = *t703;
    *cast702 = t704;
    __retval697 = cast702;
    int* t705 = __retval697;
    return t705;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v706, int* v707, int* v708) {
bb709:
  struct std__allocator_std___Rb_tree_node_int__* __a710;
  int* __p711;
  int* __args712;
  __a710 = v706;
  __p711 = v707;
  __args712 = v708;
  int* t713 = __p711;
  int* t714 = __args712;
  int* r715 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t713, t714);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v716, struct std___Rb_tree_node_int_* v717, int* v718) {
bb719:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this720;
  struct std___Rb_tree_node_int_* __node721;
  int* __args722;
  this720 = v716;
  __node721 = v717;
  __args722 = v718;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t723 = this720;
      struct std__allocator_std___Rb_tree_node_int__* r725 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t723);
      struct std___Rb_tree_node_int_* t726 = __node721;
      int* r727 = std___Rb_tree_node_int____M_valptr(t726);
      if (__cir_exc_active) {
        goto cir_try_dispatch724;
      }
      int* t728 = __args722;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r725, r727, t728);
    cir_try_dispatch724: ;
    if (__cir_exc_active) {
    {
      int ca_tok729 = 0;
      void* ca_exn730 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t731 = __node721;
        struct std___Rb_tree_node_int_* t732 = __node721;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t723, t732);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v733, int* v734) {
bb735:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this736;
  int* __args737;
  struct std___Rb_tree_node_int_* __retval738;
  struct std___Rb_tree_node_int_* __tmp739;
  this736 = v733;
  __args737 = v734;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t740 = this736;
  struct std___Rb_tree_node_int_* r741 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t740);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp739 = r741;
  struct std___Rb_tree_node_int_* t742 = __tmp739;
  int* t743 = __args737;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t740, t742, t743);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t744 = __tmp739;
  __retval738 = t744;
  struct std___Rb_tree_node_int_* t745 = __retval738;
  return t745;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v746, int* v747) {
bb748:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this749;
  int* __arg750;
  struct std___Rb_tree_node_int_* __retval751;
  this749 = v746;
  __arg750 = v747;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t752 = this749;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t753 = t752->_M_t;
  int* t754 = __arg750;
  struct std___Rb_tree_node_int_* r755 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t753, t754);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval751 = r755;
  struct std___Rb_tree_node_int_* t756 = __retval751;
  return t756;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v757, struct std___Rb_tree_node_base* v758, struct std___Rb_tree_node_base* v759, int* v760, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v761) {
bb762:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this763;
  struct std___Rb_tree_node_base* __x764;
  struct std___Rb_tree_node_base* __p765;
  int* __v766;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen767;
  struct std___Rb_tree_iterator_int_ __retval768;
  _Bool __insert_left769;
  struct std___Rb_tree_node_base* __z770;
  this763 = v757;
  __x764 = v758;
  __p765 = v759;
  __v766 = v760;
  __node_gen767 = v761;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t771 = this763;
  struct std___Rb_tree_node_base* t772 = __x764;
  _Bool cast773 = (_Bool)t772;
  _Bool ternary774;
  if (cast773) {
    _Bool c775 = 1;
    ternary774 = (_Bool)c775;
  } else {
    struct std___Rb_tree_node_base* t776 = __p765;
    struct std___Rb_tree_node_base* r777 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t771);
    _Bool c778 = ((t776 == r777)) ? 1 : 0;
    ternary774 = (_Bool)c778;
  }
  _Bool ternary779;
  if (ternary774) {
    _Bool c780 = 1;
    ternary779 = (_Bool)c780;
  } else {
    struct std___Identity_int_ ref_tmp0781;
    struct std___Rb_tree_key_compare_std__less_int__* base782 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t771->_M_impl) + 0);
    struct std__less_int_* cast783 = (struct std__less_int_*)base782;
    int* t784 = __v766;
    int* r785 = std___Identity_int___operator___int___const(&ref_tmp0781, t784);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t786 = __p765;
    int* r787 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t786);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r788 = std__less_int___operator___int_const___int_const___const(cast783, r785, r787);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary779 = (_Bool)r788;
  }
  __insert_left769 = ternary779;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t789 = __node_gen767;
  int* t790 = __v766;
  struct std___Rb_tree_node_int_* r791 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t789, t790);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base792 = (struct std___Rb_tree_node_base*)((char *)r791 + 0);
  struct std___Rb_tree_node_base* r793 = std___Rb_tree_node_base___M_base_ptr___const(base792);
  __z770 = r793;
  _Bool t794 = __insert_left769;
  struct std___Rb_tree_node_base* t795 = __z770;
  struct std___Rb_tree_node_base* t796 = __p765;
  struct std___Rb_tree_header* base797 = (struct std___Rb_tree_header*)((char *)&(t771->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t794, t795, t796, &base797->_M_header);
  struct std___Rb_tree_header* base798 = (struct std___Rb_tree_header*)((char *)&(t771->_M_impl) + 8);
  unsigned long t799 = base798->_M_node_count;
  unsigned long u800 = t799 + 1;
  base798->_M_node_count = u800;
  struct std___Rb_tree_node_base* t801 = __z770;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval768, t801);
  struct std___Rb_tree_iterator_int_ t802 = __retval768;
  return t802;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v803, int* v804) {
bb805:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this806;
  int* __v807;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval808;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res809;
  struct std___Identity_int_ ref_tmp0810;
  struct std___Rb_tree_iterator_int_ ref_tmp3811;
  _Bool ref_tmp4812;
  this806 = v803;
  __v807 = v804;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t813 = this806;
  int* t814 = __v807;
  int* r815 = std___Identity_int___operator___int___const(&ref_tmp0810, t814);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r816 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t813, r815);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res809 = r816;
    struct std___Rb_tree_node_base* t817 = __res809.second;
    _Bool cast818 = (_Bool)t817;
    if (cast818) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an819;
      struct std___Rb_tree_iterator_int_ ref_tmp1820;
      _Bool ref_tmp2821;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an819, t813);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t822 = __res809.first;
      struct std___Rb_tree_node_base* t823 = __res809.second;
      int* t824 = __v807;
      struct std___Rb_tree_iterator_int_ r825 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t813, t822, t823, t824, &__an819);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1820 = r825;
      _Bool c826 = 1;
      ref_tmp2821 = c826;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval808, &ref_tmp1820, &ref_tmp2821);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t827 = __retval808;
      return t827;
    }
  struct std___Rb_tree_node_base* t828 = __res809.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3811, t828);
  _Bool c829 = 0;
  ref_tmp4812 = c829;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval808, &ref_tmp3811, &ref_tmp4812);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t830 = __retval808;
  return t830;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v831, int* v832) {
bb833:
  struct std__set_int__std__less_int___std__allocator_int__* this834;
  int* __x835;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval836;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p837;
  this834 = v831;
  __x835 = v832;
  struct std__set_int__std__less_int___std__allocator_int__* t838 = this834;
  int* t839 = __x835;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r840 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(&t838->_M_t, t839);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p837 = r840;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval836, &__p837.first, &__p837.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t841 = __retval836;
  return t841;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v842, struct std___Rb_tree_node_base* v843, struct std___Rb_tree_node_base* v844, int* v845) {
bb846:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this847;
  struct std___Rb_tree_node_base* __x848;
  struct std___Rb_tree_node_base* __y849;
  int* __k850;
  struct std___Rb_tree_node_base* __retval851;
  this847 = v842;
  __x848 = v843;
  __y849 = v844;
  __k850 = v845;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t852 = this847;
    while (1) {
      struct std___Rb_tree_node_base* t853 = __x848;
      _Bool cast854 = (_Bool)t853;
      if (!cast854) break;
        struct std___Rb_tree_key_compare_std__less_int__* base855 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t852->_M_impl) + 0);
        struct std__less_int_* cast856 = (struct std__less_int_*)base855;
        struct std___Rb_tree_node_base* t857 = __x848;
        int* r858 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t857);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t859 = __k850;
        _Bool r860 = std__less_int___operator___int_const___int_const___const(cast856, r858, t859);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u861 = !r860;
        if (u861) {
          struct std___Rb_tree_node_base* t862 = __x848;
          __y849 = t862;
          struct std___Rb_tree_node_base* t863 = __x848;
          struct std___Rb_tree_node_base* r864 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t863);
          __x848 = r864;
        } else {
          struct std___Rb_tree_node_base* t865 = __x848;
          struct std___Rb_tree_node_base* r866 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t865);
          __x848 = r866;
        }
    }
  struct std___Rb_tree_node_base* t867 = __y849;
  __retval851 = t867;
  struct std___Rb_tree_node_base* t868 = __retval851;
  return t868;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v869, struct std___Rb_tree_node_base* v870, struct std___Rb_tree_node_base* v871, int* v872) {
bb873:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this874;
  struct std___Rb_tree_node_base* __x875;
  struct std___Rb_tree_node_base* __y876;
  int* __k877;
  struct std___Rb_tree_node_base* __retval878;
  this874 = v869;
  __x875 = v870;
  __y876 = v871;
  __k877 = v872;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t879 = this874;
    while (1) {
      struct std___Rb_tree_node_base* t880 = __x875;
      _Bool cast881 = (_Bool)t880;
      if (!cast881) break;
        struct std___Rb_tree_key_compare_std__less_int__* base882 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t879->_M_impl) + 0);
        struct std__less_int_* cast883 = (struct std__less_int_*)base882;
        int* t884 = __k877;
        struct std___Rb_tree_node_base* t885 = __x875;
        int* r886 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t885);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r887 = std__less_int___operator___int_const___int_const___const(cast883, t884, r886);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r887) {
          struct std___Rb_tree_node_base* t888 = __x875;
          __y876 = t888;
          struct std___Rb_tree_node_base* t889 = __x875;
          struct std___Rb_tree_node_base* r890 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t889);
          __x875 = r890;
        } else {
          struct std___Rb_tree_node_base* t891 = __x875;
          struct std___Rb_tree_node_base* r892 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t891);
          __x875 = r892;
        }
    }
  struct std___Rb_tree_node_base* t893 = __y876;
  __retval878 = t893;
  struct std___Rb_tree_node_base* t894 = __retval878;
  return t894;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v895, struct std___Rb_tree_iterator_int_* v896, struct std___Rb_tree_iterator_int_* v897) {
bb898:
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* this899;
  struct std___Rb_tree_iterator_int_* __x900;
  struct std___Rb_tree_iterator_int_* __y901;
  this899 = v895;
  __x900 = v896;
  __y901 = v897;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t902 = this899;
  struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* base903 = (struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__*)((char *)t902 + 0);
  struct std___Rb_tree_iterator_int_* t904 = __x900;
  t902->first = *t904; // copy
  struct std___Rb_tree_iterator_int_* t905 = __y901;
  t902->second = *t905; // copy
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v906, int* v907) {
bb908:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this909;
  int* __k910;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __retval911;
  struct std___Rb_tree_node_base* __x912;
  struct std___Rb_tree_node_base* __y913;
  struct std___Rb_tree_iterator_int_ ref_tmp2914;
  struct std___Rb_tree_iterator_int_ ref_tmp3915;
  this909 = v906;
  __k910 = v907;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t916 = this909;
  struct std___Rb_tree_node_base* r917 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t916);
  __x912 = r917;
  struct std___Rb_tree_node_base* r918 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t916);
  __y913 = r918;
    while (1) {
      struct std___Rb_tree_node_base* t919 = __x912;
      _Bool cast920 = (_Bool)t919;
      if (!cast920) break;
          struct std___Rb_tree_key_compare_std__less_int__* base921 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t916->_M_impl) + 0);
          struct std__less_int_* cast922 = (struct std__less_int_*)base921;
          struct std___Rb_tree_node_base* t923 = __x912;
          int* r924 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t923);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t925 = __k910;
          _Bool r926 = std__less_int___operator___int_const___int_const___const(cast922, r924, t925);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r926) {
            struct std___Rb_tree_node_base* t927 = __x912;
            struct std___Rb_tree_node_base* r928 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t927);
            __x912 = r928;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base929 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t916->_M_impl) + 0);
              struct std__less_int_* cast930 = (struct std__less_int_*)base929;
              int* t931 = __k910;
              struct std___Rb_tree_node_base* t932 = __x912;
              int* r933 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t932);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r934 = std__less_int___operator___int_const___int_const___const(cast930, t931, r933);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r934) {
                struct std___Rb_tree_node_base* t935 = __x912;
                __y913 = t935;
                struct std___Rb_tree_node_base* t936 = __x912;
                struct std___Rb_tree_node_base* r937 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t936);
                __x912 = r937;
              } else {
                struct std___Rb_tree_node_base* __xu938;
                struct std___Rb_tree_node_base* __yu939;
                struct std___Rb_tree_iterator_int_ ref_tmp0940;
                struct std___Rb_tree_iterator_int_ ref_tmp1941;
                struct std___Rb_tree_node_base* t942 = __x912;
                __xu938 = t942;
                struct std___Rb_tree_node_base* t943 = __y913;
                __yu939 = t943;
                struct std___Rb_tree_node_base* t944 = __x912;
                __y913 = t944;
                struct std___Rb_tree_node_base* t945 = __x912;
                struct std___Rb_tree_node_base* r946 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t945);
                __x912 = r946;
                struct std___Rb_tree_node_base* t947 = __xu938;
                struct std___Rb_tree_node_base* r948 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t947);
                __xu938 = r948;
                struct std___Rb_tree_node_base* t949 = __x912;
                struct std___Rb_tree_node_base* t950 = __y913;
                int* t951 = __k910;
                struct std___Rb_tree_node_base* r952 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t916, t949, t950, t951);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp0940, r952);
                struct std___Rb_tree_node_base* t953 = __xu938;
                struct std___Rb_tree_node_base* t954 = __yu939;
                int* t955 = __k910;
                struct std___Rb_tree_node_base* r956 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t916, t953, t954, t955);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp1941, r956);
                _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval911, &ref_tmp0940, &ref_tmp1941);
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t957 = __retval911;
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ret_val958 = t957;
                return ret_val958;
              }
          }
    }
  struct std___Rb_tree_node_base* t959 = __y913;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp2914, t959);
  struct std___Rb_tree_node_base* t960 = __y913;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3915, t960);
  _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval911, &ref_tmp2914, &ref_tmp3915);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t961 = __retval911;
  return t961;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v962, struct std___Rb_tree_const_iterator_int_* v963) {
bb964:
  struct std___Rb_tree_const_iterator_int_* __x965;
  struct std___Rb_tree_const_iterator_int_* __y966;
  _Bool __retval967;
  __x965 = v962;
  __y966 = v963;
  struct std___Rb_tree_const_iterator_int_* t968 = __x965;
  struct std___Rb_tree_node_base* t969 = t968->_M_node;
  struct std___Rb_tree_const_iterator_int_* t970 = __y966;
  struct std___Rb_tree_node_base* t971 = t970->_M_node;
  _Bool c972 = ((t969 == t971)) ? 1 : 0;
  __retval967 = c972;
  _Bool t973 = __retval967;
  return t973;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v974) {
bb975:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this976;
  struct std___Rb_tree_iterator_int_ __retval977;
  this976 = v974;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t978 = this976;
  struct std___Rb_tree_node_base* r979 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t978);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval977, r979);
  struct std___Rb_tree_iterator_int_ t980 = __retval977;
  return t980;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v981) {
bb982:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this983;
  this983 = v981;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t984 = this983;
  struct std___Rb_tree_node_int_* r985 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t984);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t984, r985);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base986 = (struct std___Rb_tree_header*)((char *)&(t984->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base986);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v987, struct std___Rb_tree_node_base* v988) {
bb989:
  struct std___Rb_tree_node_base* __z990;
  struct std___Rb_tree_node_base* __header991;
  struct std___Rb_tree_node_base* __retval992;
  __z990 = v987;
  __header991 = v988;
  struct std___Rb_tree_node_base* t993 = __z990;
  struct std___Rb_tree_node_base* t994 = __header991;
  struct std___Rb_tree_node_base* r995 = std___Rb_tree_rebalance_for_erase(t993, t994);
  __retval992 = r995;
  struct std___Rb_tree_node_base* t996 = __retval992;
  return t996;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v997, struct std___Rb_tree_const_iterator_int_ v998) {
bb999:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1000;
  struct std___Rb_tree_const_iterator_int_ __position1001;
  struct std___Rb_tree_node_base* __y1002;
  this1000 = v997;
  __position1001 = v998;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1003 = this1000;
  struct std___Rb_tree_node_base* t1004 = __position1001._M_node;
  struct std___Rb_tree_header* base1005 = (struct std___Rb_tree_header*)((char *)&(t1003->_M_impl) + 8);
  struct std___Rb_tree_node_base* r1006 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t1004, &base1005->_M_header);
  __y1002 = r1006;
  struct std___Rb_tree_node_base* t1007 = __y1002;
  struct std___Rb_tree_node_int_* derived1008 = (struct std___Rb_tree_node_int_*)((char *)t1007 - 0);
  struct std___Rb_tree_node_int_* r1009 = std___Rb_tree_node_int____M_node_ptr(derived1008);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1003, r1009);
  struct std___Rb_tree_header* base1010 = (struct std___Rb_tree_header*)((char *)&(t1003->_M_impl) + 8);
  unsigned long t1011 = base1010->_M_node_count;
  unsigned long u1012 = t1011 - 1;
  base1010->_M_node_count = u1012;
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v1013, int v1014) {
bb1015:
  struct std___Rb_tree_const_iterator_int_* this1016;
  int unnamed1017;
  struct std___Rb_tree_const_iterator_int_ __retval1018;
  this1016 = v1013;
  unnamed1017 = v1014;
  struct std___Rb_tree_const_iterator_int_* t1019 = this1016;
  __retval1018 = *t1019; // copy
  struct std___Rb_tree_node_base* t1020 = t1019->_M_node;
  struct std___Rb_tree_node_base* r1021 = std___Rb_tree_increment(t1020);
  t1019->_M_node = r1021;
  struct std___Rb_tree_const_iterator_int_ t1022 = __retval1018;
  return t1022;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1023, struct std___Rb_tree_const_iterator_int_ v1024, struct std___Rb_tree_const_iterator_int_ v1025) {
bb1026:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1027;
  struct std___Rb_tree_const_iterator_int_ __first1028;
  struct std___Rb_tree_const_iterator_int_ __last1029;
  this1027 = v1023;
  __first1028 = v1024;
  __last1029 = v1025;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1030 = this1027;
    struct std___Rb_tree_const_iterator_int_ ref_tmp01031;
    struct std___Rb_tree_iterator_int_ ref_tmp11032;
    struct std___Rb_tree_iterator_int_ r1033 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t1030);
    ref_tmp11032 = r1033;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp01031, &ref_tmp11032);
    _Bool r1034 = std__operator___2(&__first1028, &ref_tmp01031);
    _Bool ternary1035;
    if (r1034) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp21036;
      struct std___Rb_tree_iterator_int_ ref_tmp31037;
      struct std___Rb_tree_iterator_int_ r1038 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1030);
      ref_tmp31037 = r1038;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&ref_tmp21036, &ref_tmp31037);
      _Bool r1039 = std__operator___2(&__last1029, &ref_tmp21036);
      ternary1035 = (_Bool)r1039;
    } else {
      _Bool c1040 = 0;
      ternary1035 = (_Bool)c1040;
    }
    if (ternary1035) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t1030);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp01041;
        while (1) {
          _Bool r1042 = std__operator___2(&__first1028, &__last1029);
          _Bool u1043 = !r1042;
          if (!u1043) break;
          int c1044 = 0;
          struct std___Rb_tree_const_iterator_int_ r1045 = std___Rb_tree_const_iterator_int___operator__(&__first1028, c1044);
          agg_tmp01041 = r1045;
          struct std___Rb_tree_const_iterator_int_ t1046 = agg_tmp01041;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t1030, t1046);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseERKi
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1047, int* v1048) {
bb1049:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1050;
  int* __x1051;
  unsigned long __retval1052;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __p1053;
  unsigned long __old_size1054;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01055;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11056;
  this1050 = v1047;
  __x1051 = v1048;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1057 = this1050;
  int* t1058 = __x1051;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ r1059 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(t1057, t1058);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __p1053 = r1059;
  unsigned long r1060 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1057);
  __old_size1054 = r1060;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&agg_tmp01055, &__p1053.first);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&agg_tmp11056, &__p1053.second);
  struct std___Rb_tree_const_iterator_int_ t1061 = agg_tmp01055;
  struct std___Rb_tree_const_iterator_int_ t1062 = agg_tmp11056;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t1057, t1061, t1062);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1063 = __old_size1054;
  unsigned long r1064 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1057);
  unsigned long b1065 = t1063 - r1064;
  __retval1052 = b1065;
  unsigned long t1066 = __retval1052;
  return t1066;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5eraseERKi
unsigned long std__set_int__std__less_int___std__allocator_int_____erase(struct std__set_int__std__less_int___std__allocator_int__* v1067, int* v1068) {
bb1069:
  struct std__set_int__std__less_int___std__allocator_int__* this1070;
  int* __x1071;
  unsigned long __retval1072;
  this1070 = v1067;
  __x1071 = v1068;
  struct std__set_int__std__less_int___std__allocator_int__* t1073 = this1070;
  int* t1074 = __x1071;
  unsigned long r1075 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(&t1073->_M_t, t1074);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1072 = r1075;
  unsigned long t1076 = __retval1072;
  return t1076;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v1077) {
bb1078:
  struct std__set_int__std__less_int___std__allocator_int__* this1079;
  this1079 = v1077;
  struct std__set_int__std__less_int___std__allocator_int__* t1080 = this1079;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t1080->_M_t);
  }
  return;
}

// function: main
int main() {
bb1081:
  int __retval1082;
  struct std__set_int__std__less_int___std__allocator_int__ myints1083;
  int ref_tmp01084;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp11085;
  int ref_tmp11086;
  int c1087 = 0;
  __retval1082 = c1087;
  std__set_int__std__less_int___std__allocator_int_____set(&myints1083);
    char* cast1088 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1089 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1088);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1090 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    int cast1091 = (int)r1090;
    struct std__basic_ostream_char__std__char_traits_char__* r1092 = std__ostream__operator__(r1089, cast1091);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1093 = std__ostream__operator___std__ostream_____(r1092, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1094 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    unsigned long c1095 = 0;
    _Bool c1096 = ((r1094 == c1095)) ? 1 : 0;
    if (c1096) {
    } else {
      char* cast1097 = (char*)&(_str_1);
      char* c1098 = _str_2;
      unsigned int c1099 = 17;
      char* cast1100 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1097, c1098, c1099, cast1100);
    }
      int i1101;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp01102;
      int c1103 = 0;
      i1101 = c1103;
      while (1) {
        int t1105 = i1101;
        int c1106 = 10;
        _Bool c1107 = ((t1105 < c1106)) ? 1 : 0;
        if (!c1107) break;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r1108 = std__set_int__std__less_int___std__allocator_int_____insert_2(&myints1083, &i1101);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myints1083);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp01102 = r1108;
      for_step1104: ;
        int t1109 = i1101;
        int u1110 = t1109 + 1;
        i1101 = u1110;
      }
    char* cast1111 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1112 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1111);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1113 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    int cast1114 = (int)r1113;
    struct std__basic_ostream_char__std__char_traits_char__* r1115 = std__ostream__operator__(r1112, cast1114);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1116 = std__ostream__operator___std__ostream_____(r1115, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1117 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    unsigned long c1118 = 10;
    _Bool c1119 = ((r1117 == c1118)) ? 1 : 0;
    if (c1119) {
    } else {
      char* cast1120 = (char*)&(_str_4);
      char* c1121 = _str_2;
      unsigned int c1122 = 20;
      char* cast1123 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1120, c1121, c1122, cast1123);
    }
    int c1124 = 100;
    ref_tmp01084 = c1124;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r1125 = std__set_int__std__less_int___std__allocator_int_____insert(&myints1083, &ref_tmp01084);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp11085 = r1125;
    char* cast1126 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1127 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1126);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1128 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    int cast1129 = (int)r1128;
    struct std__basic_ostream_char__std__char_traits_char__* r1130 = std__ostream__operator__(r1127, cast1129);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1131 = std__ostream__operator___std__ostream_____(r1130, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1132 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    unsigned long c1133 = 11;
    _Bool c1134 = ((r1132 == c1133)) ? 1 : 0;
    if (c1134) {
    } else {
      char* cast1135 = (char*)&(_str_6);
      char* c1136 = _str_2;
      unsigned int c1137 = 23;
      char* cast1138 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1135, c1136, c1137, cast1138);
    }
    int c1139 = 5;
    ref_tmp11086 = c1139;
    unsigned long r1140 = std__set_int__std__less_int___std__allocator_int_____erase(&myints1083, &ref_tmp11086);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1141 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r1142 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1141);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1143 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    int cast1144 = (int)r1143;
    struct std__basic_ostream_char__std__char_traits_char__* r1145 = std__ostream__operator__(r1142, cast1144);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1146 = std__ostream__operator___std__ostream_____(r1145, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myints1083);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1147 = std__set_int__std__less_int___std__allocator_int_____size___const(&myints1083);
    unsigned long c1148 = 10;
    _Bool c1149 = ((r1147 == c1148)) ? 1 : 0;
    if (c1149) {
    } else {
      char* cast1150 = (char*)&(_str_4);
      char* c1151 = _str_2;
      unsigned int c1152 = 26;
      char* cast1153 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1150, c1151, c1152, cast1153);
    }
    int c1154 = 0;
    __retval1082 = c1154;
    int t1155 = __retval1082;
    int ret_val1156 = t1155;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myints1083);
    }
    return ret_val1156;
  int t1157 = __retval1082;
  return t1157;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1158) {
bb1159:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1160;
  this1160 = v1158;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1161 = this1160;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1161->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1162) {
bb1163:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1164;
  this1164 = v1162;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1165 = this1164;
    struct std___Rb_tree_node_int_* r1166 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1165);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1165, r1166);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1165->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1165->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1167) {
bb1168:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1169;
  this1169 = v1167;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1170 = this1169;
  struct std__allocator_std___Rb_tree_node_int__* base1171 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1170 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1171);
    struct std___Rb_tree_key_compare_std__less_int__* base1172 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1170 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1172);
    struct std___Rb_tree_header* base1173 = (struct std___Rb_tree_header*)((char *)t1170 + 8);
    std___Rb_tree_header___Rb_tree_header(base1173);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1174) {
bb1175:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1176;
  this1176 = v1174;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1177 = this1176;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1178 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1177 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1178);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1179) {
bb1180:
  struct std____new_allocator_std___Rb_tree_node_int__* this1181;
  this1181 = v1179;
  struct std____new_allocator_std___Rb_tree_node_int__* t1182 = this1181;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1183) {
bb1184:
  struct std__allocator_std___Rb_tree_node_int__* this1185;
  this1185 = v1183;
  struct std__allocator_std___Rb_tree_node_int__* t1186 = this1185;
  struct std____new_allocator_std___Rb_tree_node_int__* base1187 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1186 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1187);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1188) {
bb1189:
  struct std___Rb_tree_key_compare_std__less_int__* this1190;
  this1190 = v1188;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1191) {
bb1192:
  struct std___Rb_tree_header* this1193;
  this1193 = v1191;
  struct std___Rb_tree_header* t1194 = this1193;
  struct std___Rb_tree_node_base* c1195 = ((void*)0);
  t1194->_M_header._M_parent = c1195;
  t1194->_M_header._M_left = &t1194->_M_header;
  t1194->_M_header._M_right = &t1194->_M_header;
  unsigned long c1196 = 0;
  t1194->_M_node_count = c1196;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1197) {
bb1198:
  struct std___Rb_tree_header* this1199;
  this1199 = v1197;
  struct std___Rb_tree_header* t1200 = this1199;
  unsigned int c1201 = 0;
  t1200->_M_header._M_color = c1201;
  std___Rb_tree_header___M_reset(t1200);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1202) {
bb1203:
  struct std__allocator_std___Rb_tree_node_int__* this1204;
  this1204 = v1202;
  struct std__allocator_std___Rb_tree_node_int__* t1205 = this1204;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1206) {
bb1207:
  struct std___Rb_tree_node_int_* this1208;
  struct std___Rb_tree_node_int_* __retval1209;
  this1208 = v1206;
  struct std___Rb_tree_node_int_* t1210 = this1208;
  __retval1209 = t1210;
  struct std___Rb_tree_node_int_* t1211 = __retval1209;
  return t1211;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1212) {
bb1213:
  struct std___Rb_tree_node_int_* __x1214;
  struct std___Rb_tree_node_int_* __retval1215;
  __x1214 = v1212;
  struct std___Rb_tree_node_int_* t1216 = __x1214;
  struct std___Rb_tree_node_base* base1217 = (struct std___Rb_tree_node_base*)((char *)t1216 + 0);
  struct std___Rb_tree_node_base* t1218 = base1217->_M_right;
  _Bool cast1219 = (_Bool)t1218;
  struct std___Rb_tree_node_int_* ternary1220;
  if (cast1219) {
    struct std___Rb_tree_node_int_* t1221 = __x1214;
    struct std___Rb_tree_node_base* base1222 = (struct std___Rb_tree_node_base*)((char *)t1221 + 0);
    struct std___Rb_tree_node_base* t1223 = base1222->_M_right;
    struct std___Rb_tree_node_int_* derived1224 = (struct std___Rb_tree_node_int_*)((char *)t1223 - 0);
    struct std___Rb_tree_node_int_* r1225 = std___Rb_tree_node_int____M_node_ptr(derived1224);
    ternary1220 = (struct std___Rb_tree_node_int_*)r1225;
  } else {
    struct std___Rb_tree_node_int_* c1226 = ((void*)0);
    ternary1220 = (struct std___Rb_tree_node_int_*)c1226;
  }
  __retval1215 = ternary1220;
  struct std___Rb_tree_node_int_* t1227 = __retval1215;
  return t1227;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1228) {
bb1229:
  struct std___Rb_tree_node_int_* __x1230;
  struct std___Rb_tree_node_int_* __retval1231;
  __x1230 = v1228;
  struct std___Rb_tree_node_int_* t1232 = __x1230;
  struct std___Rb_tree_node_base* base1233 = (struct std___Rb_tree_node_base*)((char *)t1232 + 0);
  struct std___Rb_tree_node_base* t1234 = base1233->_M_left;
  _Bool cast1235 = (_Bool)t1234;
  struct std___Rb_tree_node_int_* ternary1236;
  if (cast1235) {
    struct std___Rb_tree_node_int_* t1237 = __x1230;
    struct std___Rb_tree_node_base* base1238 = (struct std___Rb_tree_node_base*)((char *)t1237 + 0);
    struct std___Rb_tree_node_base* t1239 = base1238->_M_left;
    struct std___Rb_tree_node_int_* derived1240 = (struct std___Rb_tree_node_int_*)((char *)t1239 - 0);
    struct std___Rb_tree_node_int_* r1241 = std___Rb_tree_node_int____M_node_ptr(derived1240);
    ternary1236 = (struct std___Rb_tree_node_int_*)r1241;
  } else {
    struct std___Rb_tree_node_int_* c1242 = ((void*)0);
    ternary1236 = (struct std___Rb_tree_node_int_*)c1242;
  }
  __retval1231 = ternary1236;
  struct std___Rb_tree_node_int_* t1243 = __retval1231;
  return t1243;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1244) {
bb1245:
  int* __location1246;
  __location1246 = v1244;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1247, int* v1248) {
bb1249:
  struct std__allocator_std___Rb_tree_node_int__* __a1250;
  int* __p1251;
  __a1250 = v1247;
  __p1251 = v1248;
  int* t1252 = __p1251;
  void_std__destroy_at_int_(t1252);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1253) {
bb1254:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1255;
  struct std__allocator_std___Rb_tree_node_int__* __retval1256;
  this1255 = v1253;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1257 = this1255;
  struct std__allocator_std___Rb_tree_node_int__* base1258 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1257->_M_impl) + 0);
  __retval1256 = base1258;
  struct std__allocator_std___Rb_tree_node_int__* t1259 = __retval1256;
  return t1259;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1260) {
bb1261:
  struct __gnu_cxx____aligned_membuf_int_* this1262;
  void* __retval1263;
  this1262 = v1260;
  struct __gnu_cxx____aligned_membuf_int_* t1264 = this1262;
  void* cast1265 = (void*)&(t1264->_M_storage);
  __retval1263 = cast1265;
  void* t1266 = __retval1263;
  return t1266;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1267) {
bb1268:
  struct __gnu_cxx____aligned_membuf_int_* this1269;
  int* __retval1270;
  this1269 = v1267;
  struct __gnu_cxx____aligned_membuf_int_* t1271 = this1269;
  void* r1272 = __gnu_cxx____aligned_membuf_int____M_addr(t1271);
  int* cast1273 = (int*)r1272;
  __retval1270 = cast1273;
  int* t1274 = __retval1270;
  return t1274;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1275) {
bb1276:
  struct std___Rb_tree_node_int_* this1277;
  int* __retval1278;
  this1277 = v1275;
  struct std___Rb_tree_node_int_* t1279 = this1277;
  int* r1280 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1279->_M_storage);
  __retval1278 = r1280;
  int* t1281 = __retval1278;
  return t1281;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1282, struct std___Rb_tree_node_int_* v1283) {
bb1284:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1285;
  struct std___Rb_tree_node_int_* __p1286;
  this1285 = v1282;
  __p1286 = v1283;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1287 = this1285;
  struct std__allocator_std___Rb_tree_node_int__* r1288 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1287);
  struct std___Rb_tree_node_int_* t1289 = __p1286;
  int* r1290 = std___Rb_tree_node_int____M_valptr(t1289);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1288, r1290);
  struct std___Rb_tree_node_int_* t1291 = __p1286;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1292:
  _Bool __retval1293;
    _Bool c1294 = 0;
    __retval1293 = c1294;
    _Bool t1295 = __retval1293;
    return t1295;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1296, struct std___Rb_tree_node_int_* v1297, unsigned long v1298) {
bb1299:
  struct std____new_allocator_std___Rb_tree_node_int__* this1300;
  struct std___Rb_tree_node_int_* __p1301;
  unsigned long __n1302;
  this1300 = v1296;
  __p1301 = v1297;
  __n1302 = v1298;
  struct std____new_allocator_std___Rb_tree_node_int__* t1303 = this1300;
    unsigned long c1304 = 8;
    unsigned long c1305 = 16;
    _Bool c1306 = ((c1304 > c1305)) ? 1 : 0;
    if (c1306) {
      struct std___Rb_tree_node_int_* t1307 = __p1301;
      void* cast1308 = (void*)t1307;
      unsigned long t1309 = __n1302;
      unsigned long c1310 = 40;
      unsigned long b1311 = t1309 * c1310;
      unsigned long c1312 = 8;
      operator_delete_3(cast1308, b1311, c1312);
      return;
    }
  struct std___Rb_tree_node_int_* t1313 = __p1301;
  void* cast1314 = (void*)t1313;
  unsigned long t1315 = __n1302;
  unsigned long c1316 = 40;
  unsigned long b1317 = t1315 * c1316;
  operator_delete_2(cast1314, b1317);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1318, struct std___Rb_tree_node_int_* v1319, unsigned long v1320) {
bb1321:
  struct std__allocator_std___Rb_tree_node_int__* this1322;
  struct std___Rb_tree_node_int_* __p1323;
  unsigned long __n1324;
  this1322 = v1318;
  __p1323 = v1319;
  __n1324 = v1320;
  struct std__allocator_std___Rb_tree_node_int__* t1325 = this1322;
    _Bool r1326 = std____is_constant_evaluated();
    if (r1326) {
      struct std___Rb_tree_node_int_* t1327 = __p1323;
      void* cast1328 = (void*)t1327;
      operator_delete(cast1328);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1329 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1325 + 0);
  struct std___Rb_tree_node_int_* t1330 = __p1323;
  unsigned long t1331 = __n1324;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1329, t1330, t1331);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1332, struct std___Rb_tree_node_int_* v1333, unsigned long v1334) {
bb1335:
  struct std__allocator_std___Rb_tree_node_int__* __a1336;
  struct std___Rb_tree_node_int_* __p1337;
  unsigned long __n1338;
  __a1336 = v1332;
  __p1337 = v1333;
  __n1338 = v1334;
  struct std__allocator_std___Rb_tree_node_int__* t1339 = __a1336;
  struct std___Rb_tree_node_int_* t1340 = __p1337;
  unsigned long t1341 = __n1338;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1339, t1340, t1341);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1342, struct std___Rb_tree_node_int_* v1343) {
bb1344:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1345;
  struct std___Rb_tree_node_int_* __p1346;
  this1345 = v1342;
  __p1346 = v1343;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1347 = this1345;
  struct std__allocator_std___Rb_tree_node_int__* r1348 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1347);
  struct std___Rb_tree_node_int_* t1349 = __p1346;
  unsigned long c1350 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1348, t1349, c1350);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1351, struct std___Rb_tree_node_int_* v1352) {
bb1353:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1354;
  struct std___Rb_tree_node_int_* __p1355;
  this1354 = v1351;
  __p1355 = v1352;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1356 = this1354;
  struct std___Rb_tree_node_int_* t1357 = __p1355;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1356, t1357);
  struct std___Rb_tree_node_int_* t1358 = __p1355;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1356, t1358);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1359, struct std___Rb_tree_node_int_* v1360) {
bb1361:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1362;
  struct std___Rb_tree_node_int_* __x1363;
  this1362 = v1359;
  __x1363 = v1360;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1364 = this1362;
    while (1) {
      struct std___Rb_tree_node_int_* t1365 = __x1363;
      _Bool cast1366 = (_Bool)t1365;
      if (!cast1366) break;
        struct std___Rb_tree_node_int_* __y1367;
        struct std___Rb_tree_node_int_* t1368 = __x1363;
        struct std___Rb_tree_node_int_* r1369 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1368);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1364, r1369);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1370 = __x1363;
        struct std___Rb_tree_node_int_* r1371 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1370);
        if (__cir_exc_active) {
          return;
        }
        __y1367 = r1371;
        struct std___Rb_tree_node_int_* t1372 = __x1363;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1364, t1372);
        struct std___Rb_tree_node_int_* t1373 = __y1367;
        __x1363 = t1373;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1374) {
bb1375:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1376;
  struct std___Rb_tree_node_int_* __retval1377;
  struct std___Rb_tree_node_base* __begin1378;
  this1376 = v1374;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1379 = this1376;
  struct std___Rb_tree_header* base1380 = (struct std___Rb_tree_header*)((char *)&(t1379->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1381 = base1380->_M_header._M_parent;
  __begin1378 = t1381;
  struct std___Rb_tree_node_base* t1382 = __begin1378;
  _Bool cast1383 = (_Bool)t1382;
  struct std___Rb_tree_node_int_* ternary1384;
  if (cast1383) {
    struct std___Rb_tree_node_base* t1385 = __begin1378;
    struct std___Rb_tree_node_int_* derived1386 = (struct std___Rb_tree_node_int_*)((char *)t1385 - 0);
    struct std___Rb_tree_node_int_* r1387 = std___Rb_tree_node_int____M_node_ptr(derived1386);
    ternary1384 = (struct std___Rb_tree_node_int_*)r1387;
  } else {
    struct std___Rb_tree_node_int_* c1388 = ((void*)0);
    ternary1384 = (struct std___Rb_tree_node_int_*)c1388;
  }
  __retval1377 = ternary1384;
  struct std___Rb_tree_node_int_* t1389 = __retval1377;
  return t1389;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v1390, struct std___Rb_tree_iterator_int_* v1391) {
bb1392:
  struct std___Rb_tree_const_iterator_int_* this1393;
  struct std___Rb_tree_iterator_int_* __it1394;
  this1393 = v1390;
  __it1394 = v1391;
  struct std___Rb_tree_const_iterator_int_* t1395 = this1393;
  struct std___Rb_tree_iterator_int_* t1396 = __it1394;
  struct std___Rb_tree_node_base* t1397 = t1396->_M_node;
  t1395->_M_node = t1397;
  return;
}

