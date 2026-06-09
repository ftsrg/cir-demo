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
char _str[13] = "*itlow == 40";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-upper_bound/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*itup == 70";
char _str_3[18] = "myset.size() == 6";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
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
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____upper_bound(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t486->first, t488);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v502, struct std___Rb_tree_node_base* v503, struct std___Rb_tree_node_base* v504, int* v505) {
bb506:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this507;
  struct std___Rb_tree_node_base* __x508;
  struct std___Rb_tree_node_base* __y509;
  int* __k510;
  struct std___Rb_tree_node_base* __retval511;
  this507 = v502;
  __x508 = v503;
  __y509 = v504;
  __k510 = v505;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t512 = this507;
    while (1) {
      struct std___Rb_tree_node_base* t513 = __x508;
      _Bool cast514 = (_Bool)t513;
      if (!cast514) break;
        struct std___Rb_tree_key_compare_std__less_int__* base515 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t512->_M_impl) + 0);
        struct std__less_int_* cast516 = (struct std__less_int_*)base515;
        int* t517 = __k510;
        struct std___Rb_tree_node_base* t518 = __x508;
        int* r519 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t518);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r520 = std__less_int___operator___int_const___int_const___const(cast516, t517, r519);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r520) {
          struct std___Rb_tree_node_base* t521 = __x508;
          __y509 = t521;
          struct std___Rb_tree_node_base* t522 = __x508;
          struct std___Rb_tree_node_base* r523 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t522);
          __x508 = r523;
        } else {
          struct std___Rb_tree_node_base* t524 = __x508;
          struct std___Rb_tree_node_base* r525 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t524);
          __x508 = r525;
        }
    }
  struct std___Rb_tree_node_base* t526 = __y509;
  __retval511 = t526;
  struct std___Rb_tree_node_base* t527 = __retval511;
  return t527;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v528, int* v529) {
bb530:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this531;
  int* __k532;
  struct std___Rb_tree_iterator_int_ __retval533;
  this531 = v528;
  __k532 = v529;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t534 = this531;
  struct std___Rb_tree_node_base* r535 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t534);
  struct std___Rb_tree_node_base* r536 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t534);
  int* t537 = __k532;
  struct std___Rb_tree_node_base* r538 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t534, r535, r536, t537);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval533, r538);
  struct std___Rb_tree_iterator_int_ t539 = __retval533;
  return t539;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____upper_bound(struct std__set_int__std__less_int___std__allocator_int__* v540, int* v541) {
bb542:
  struct std__set_int__std__less_int___std__allocator_int__* this543;
  int* __x544;
  struct std___Rb_tree_const_iterator_int_ __retval545;
  struct std___Rb_tree_iterator_int_ ref_tmp0546;
  this543 = v540;
  __x544 = v541;
  struct std__set_int__std__less_int___std__allocator_int__* t547 = this543;
  int* t548 = __x544;
  struct std___Rb_tree_iterator_int_ r549 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(&t547->_M_t, t548);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0546 = r549;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval545, &ref_tmp0546);
  struct std___Rb_tree_const_iterator_int_ t550 = __retval545;
  return t550;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v551, struct std___Rb_tree_const_iterator_int_* v552) {
bb553:
  struct std___Rb_tree_const_iterator_int_* this554;
  struct std___Rb_tree_const_iterator_int_* unnamed555;
  struct std___Rb_tree_const_iterator_int_* __retval556;
  this554 = v551;
  unnamed555 = v552;
  struct std___Rb_tree_const_iterator_int_* t557 = this554;
  struct std___Rb_tree_const_iterator_int_* t558 = unnamed555;
  struct std___Rb_tree_node_base* t559 = t558->_M_node;
  t557->_M_node = t559;
  __retval556 = t557;
  struct std___Rb_tree_const_iterator_int_* t560 = __retval556;
  return t560;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v561) {
bb562:
  struct std___Rb_tree_const_iterator_int_* this563;
  int* __retval564;
  this563 = v561;
  struct std___Rb_tree_const_iterator_int_* t565 = this563;
  struct std___Rb_tree_node_base* t566 = t565->_M_node;
  struct std___Rb_tree_node_int_* derived567 = ((t566) ? (struct std___Rb_tree_node_int_*)((char *)t566 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r568 = std___Rb_tree_node_int____M_valptr___const(derived567);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval564 = r568;
  int* t569 = __retval564;
  return t569;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v570) {
bb571:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this572;
  struct std___Rb_tree_iterator_int_ __retval573;
  this572 = v570;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t574 = this572;
  struct std___Rb_tree_node_base* r575 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t574);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval573, r575);
  struct std___Rb_tree_iterator_int_ t576 = __retval573;
  return t576;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v577) {
bb578:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this579;
  this579 = v577;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t580 = this579;
  struct std___Rb_tree_node_int_* r581 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t580);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t580, r581);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base582 = (struct std___Rb_tree_header*)((char *)&(t580->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base582);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v583, struct std___Rb_tree_node_base* v584) {
bb585:
  struct std___Rb_tree_node_base* __z586;
  struct std___Rb_tree_node_base* __header587;
  struct std___Rb_tree_node_base* __retval588;
  __z586 = v583;
  __header587 = v584;
  struct std___Rb_tree_node_base* t589 = __z586;
  struct std___Rb_tree_node_base* t590 = __header587;
  struct std___Rb_tree_node_base* r591 = std___Rb_tree_rebalance_for_erase(t589, t590);
  __retval588 = r591;
  struct std___Rb_tree_node_base* t592 = __retval588;
  return t592;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v593, struct std___Rb_tree_const_iterator_int_ v594) {
bb595:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this596;
  struct std___Rb_tree_const_iterator_int_ __position597;
  struct std___Rb_tree_node_base* __y598;
  this596 = v593;
  __position597 = v594;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t599 = this596;
  struct std___Rb_tree_node_base* t600 = __position597._M_node;
  struct std___Rb_tree_header* base601 = (struct std___Rb_tree_header*)((char *)&(t599->_M_impl) + 8);
  struct std___Rb_tree_node_base* r602 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t600, &base601->_M_header);
  __y598 = r602;
  struct std___Rb_tree_node_base* t603 = __y598;
  struct std___Rb_tree_node_int_* derived604 = (struct std___Rb_tree_node_int_*)((char *)t603 - 0);
  struct std___Rb_tree_node_int_* r605 = std___Rb_tree_node_int____M_node_ptr(derived604);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t599, r605);
  struct std___Rb_tree_header* base606 = (struct std___Rb_tree_header*)((char *)&(t599->_M_impl) + 8);
  unsigned long t607 = base606->_M_node_count;
  unsigned long u608 = t607 - 1;
  base606->_M_node_count = u608;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v609, struct std___Rb_tree_const_iterator_int_ v610, struct std___Rb_tree_const_iterator_int_ v611) {
bb612:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this613;
  struct std___Rb_tree_const_iterator_int_ __first614;
  struct std___Rb_tree_const_iterator_int_ __last615;
  this613 = v609;
  __first614 = v610;
  __last615 = v611;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t616 = this613;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0617;
    struct std___Rb_tree_iterator_int_ ref_tmp1618;
    struct std___Rb_tree_iterator_int_ r619 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t616);
    ref_tmp1618 = r619;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0617, &ref_tmp1618);
    _Bool r620 = std__operator___2(&__first614, &ref_tmp0617);
    _Bool ternary621;
    if (r620) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2622;
      struct std___Rb_tree_iterator_int_ ref_tmp3623;
      struct std___Rb_tree_iterator_int_ r624 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t616);
      ref_tmp3623 = r624;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2622, &ref_tmp3623);
      _Bool r625 = std__operator___2(&__last615, &ref_tmp2622);
      ternary621 = (_Bool)r625;
    } else {
      _Bool c626 = 0;
      ternary621 = (_Bool)c626;
    }
    if (ternary621) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t616);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0627;
        while (1) {
          _Bool r628 = std__operator___2(&__first614, &__last615);
          _Bool u629 = !r628;
          if (!u629) break;
          int c630 = 0;
          struct std___Rb_tree_const_iterator_int_ r631 = std___Rb_tree_const_iterator_int___operator__(&__first614, c630);
          agg_tmp0627 = r631;
          struct std___Rb_tree_const_iterator_int_ t632 = agg_tmp0627;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t616, t632);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v633, struct std___Rb_tree_const_iterator_int_ v634, struct std___Rb_tree_const_iterator_int_ v635) {
bb636:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this637;
  struct std___Rb_tree_const_iterator_int_ __first638;
  struct std___Rb_tree_const_iterator_int_ __last639;
  struct std___Rb_tree_iterator_int_ __retval640;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0641;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1642;
  this637 = v633;
  __first638 = v634;
  __last639 = v635;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t643 = this637;
  agg_tmp0641 = __first638; // copy
  agg_tmp1642 = __last639; // copy
  struct std___Rb_tree_const_iterator_int_ t644 = agg_tmp0641;
  struct std___Rb_tree_const_iterator_int_ t645 = agg_tmp1642;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t643, t644, t645);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t646 = __last639._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval640, t646);
  struct std___Rb_tree_iterator_int_ t647 = __retval640;
  return t647;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* v648, struct std___Rb_tree_const_iterator_int_ v649, struct std___Rb_tree_const_iterator_int_ v650) {
bb651:
  struct std__set_int__std__less_int___std__allocator_int__* this652;
  struct std___Rb_tree_const_iterator_int_ __first653;
  struct std___Rb_tree_const_iterator_int_ __last654;
  struct std___Rb_tree_const_iterator_int_ __retval655;
  struct std___Rb_tree_iterator_int_ ref_tmp0656;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0657;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1658;
  this652 = v648;
  __first653 = v649;
  __last654 = v650;
  struct std__set_int__std__less_int___std__allocator_int__* t659 = this652;
  agg_tmp0657 = __first653; // copy
  agg_tmp1658 = __last654; // copy
  struct std___Rb_tree_const_iterator_int_ t660 = agg_tmp0657;
  struct std___Rb_tree_const_iterator_int_ t661 = agg_tmp1658;
  struct std___Rb_tree_iterator_int_ r662 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t659->_M_t, t660, t661);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0656 = r662;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval655, &ref_tmp0656);
  struct std___Rb_tree_const_iterator_int_ t663 = __retval655;
  return t663;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v664) {
bb665:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this666;
  unsigned long __retval667;
  this666 = v664;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t668 = this666;
  struct std___Rb_tree_header* base669 = (struct std___Rb_tree_header*)((char *)&(t668->_M_impl) + 8);
  unsigned long t670 = base669->_M_node_count;
  __retval667 = t670;
  unsigned long t671 = __retval667;
  return t671;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v672) {
bb673:
  struct std__set_int__std__less_int___std__allocator_int__* this674;
  unsigned long __retval675;
  this674 = v672;
  struct std__set_int__std__less_int___std__allocator_int__* t676 = this674;
  unsigned long r677 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t676->_M_t);
  __retval675 = r677;
  unsigned long t678 = __retval675;
  return t678;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v679, int v680) {
bb681:
  int __a682;
  int __b683;
  int __retval684;
  __a682 = v679;
  __b683 = v680;
  int t685 = __a682;
  int t686 = __b683;
  int b687 = t685 | t686;
  __retval684 = b687;
  int t688 = __retval684;
  return t688;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v689) {
bb690:
  struct std__basic_ios_char__std__char_traits_char__* this691;
  int __retval692;
  this691 = v689;
  struct std__basic_ios_char__std__char_traits_char__* t693 = this691;
  struct std__ios_base* base694 = (struct std__ios_base*)((char *)t693 + 0);
  int t695 = base694->_M_streambuf_state;
  __retval692 = t695;
  int t696 = __retval692;
  return t696;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v697, int v698) {
bb699:
  struct std__basic_ios_char__std__char_traits_char__* this700;
  int __state701;
  this700 = v697;
  __state701 = v698;
  struct std__basic_ios_char__std__char_traits_char__* t702 = this700;
  int r703 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t702);
  if (__cir_exc_active) {
    return;
  }
  int t704 = __state701;
  int r705 = std__operator_(r703, t704);
  std__basic_ios_char__std__char_traits_char_____clear(t702, r705);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v706, char* v707) {
bb708:
  char* __c1709;
  char* __c2710;
  _Bool __retval711;
  __c1709 = v706;
  __c2710 = v707;
  char* t712 = __c1709;
  char t713 = *t712;
  int cast714 = (int)t713;
  char* t715 = __c2710;
  char t716 = *t715;
  int cast717 = (int)t716;
  _Bool c718 = ((cast714 == cast717)) ? 1 : 0;
  __retval711 = c718;
  _Bool t719 = __retval711;
  return t719;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v720) {
bb721:
  char* __p722;
  unsigned long __retval723;
  unsigned long __i724;
  __p722 = v720;
  unsigned long c725 = 0;
  __i724 = c725;
    char ref_tmp0726;
    while (1) {
      unsigned long t727 = __i724;
      char* t728 = __p722;
      char* ptr729 = &(t728)[t727];
      char c730 = 0;
      ref_tmp0726 = c730;
      _Bool r731 = __gnu_cxx__char_traits_char___eq(ptr729, &ref_tmp0726);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u732 = !r731;
      if (!u732) break;
      unsigned long t733 = __i724;
      unsigned long u734 = t733 + 1;
      __i724 = u734;
    }
  unsigned long t735 = __i724;
  __retval723 = t735;
  unsigned long t736 = __retval723;
  return t736;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v737) {
bb738:
  char* __s739;
  unsigned long __retval740;
  __s739 = v737;
    _Bool r741 = std____is_constant_evaluated();
    if (r741) {
      char* t742 = __s739;
      unsigned long r743 = __gnu_cxx__char_traits_char___length(t742);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval740 = r743;
      unsigned long t744 = __retval740;
      return t744;
    }
  char* t745 = __s739;
  unsigned long r746 = strlen(t745);
  __retval740 = r746;
  unsigned long t747 = __retval740;
  return t747;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v748, char* v749) {
bb750:
  struct std__basic_ostream_char__std__char_traits_char__* __out751;
  char* __s752;
  struct std__basic_ostream_char__std__char_traits_char__* __retval753;
  __out751 = v748;
  __s752 = v749;
    char* t754 = __s752;
    _Bool cast755 = (_Bool)t754;
    _Bool u756 = !cast755;
    if (u756) {
      struct std__basic_ostream_char__std__char_traits_char__* t757 = __out751;
      void** v758 = (void**)t757;
      void* v759 = *((void**)v758);
      unsigned char* cast760 = (unsigned char*)v759;
      long c761 = -24;
      unsigned char* ptr762 = &(cast760)[c761];
      long* cast763 = (long*)ptr762;
      long t764 = *cast763;
      unsigned char* cast765 = (unsigned char*)t757;
      unsigned char* ptr766 = &(cast765)[t764];
      struct std__basic_ostream_char__std__char_traits_char__* cast767 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr766;
      struct std__basic_ios_char__std__char_traits_char__* cast768 = (struct std__basic_ios_char__std__char_traits_char__*)cast767;
      int t769 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast768, t769);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t770 = __out751;
      char* t771 = __s752;
      char* t772 = __s752;
      unsigned long r773 = std__char_traits_char___length(t772);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast774 = (long)r773;
      struct std__basic_ostream_char__std__char_traits_char__* r775 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t770, t771, cast774);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t776 = __out751;
  __retval753 = t776;
  struct std__basic_ostream_char__std__char_traits_char__* t777 = __retval753;
  return t777;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v778, struct std___Rb_tree_node_base* v779) {
bb780:
  struct std___Rb_tree_const_iterator_int_* this781;
  struct std___Rb_tree_node_base* __x782;
  this781 = v778;
  __x782 = v779;
  struct std___Rb_tree_const_iterator_int_* t783 = this781;
  struct std___Rb_tree_node_base* t784 = __x782;
  t783->_M_node = t784;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v785) {
bb786:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this787;
  struct std___Rb_tree_const_iterator_int_ __retval788;
  this787 = v785;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t789 = this787;
  struct std___Rb_tree_header* base790 = (struct std___Rb_tree_header*)((char *)&(t789->_M_impl) + 8);
  struct std___Rb_tree_node_base* t791 = base790->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval788, t791);
  struct std___Rb_tree_const_iterator_int_ t792 = __retval788;
  return t792;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v793) {
bb794:
  struct std__set_int__std__less_int___std__allocator_int__* this795;
  struct std___Rb_tree_const_iterator_int_ __retval796;
  this795 = v793;
  struct std__set_int__std__less_int___std__allocator_int__* t797 = this795;
  struct std___Rb_tree_const_iterator_int_ r798 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t797->_M_t);
  __retval796 = r798;
  struct std___Rb_tree_const_iterator_int_ t799 = __retval796;
  return t799;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v800, struct std___Rb_tree_const_iterator_int_* v801) {
bb802:
  struct std___Rb_tree_const_iterator_int_* __x803;
  struct std___Rb_tree_const_iterator_int_* __y804;
  _Bool __retval805;
  __x803 = v800;
  __y804 = v801;
  struct std___Rb_tree_const_iterator_int_* t806 = __x803;
  struct std___Rb_tree_node_base* t807 = t806->_M_node;
  struct std___Rb_tree_const_iterator_int_* t808 = __y804;
  struct std___Rb_tree_node_base* t809 = t808->_M_node;
  _Bool c810 = ((t807 == t809)) ? 1 : 0;
  __retval805 = c810;
  _Bool t811 = __retval805;
  return t811;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v812) {
bb813:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this814;
  struct std___Rb_tree_const_iterator_int_ __retval815;
  this814 = v812;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t816 = this814;
  struct std___Rb_tree_node_base* r817 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t816);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval815, r817);
  struct std___Rb_tree_const_iterator_int_ t818 = __retval815;
  return t818;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v819) {
bb820:
  struct std__set_int__std__less_int___std__allocator_int__* this821;
  struct std___Rb_tree_const_iterator_int_ __retval822;
  this821 = v819;
  struct std__set_int__std__less_int___std__allocator_int__* t823 = this821;
  struct std___Rb_tree_const_iterator_int_ r824 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t823->_M_t);
  __retval822 = r824;
  struct std___Rb_tree_const_iterator_int_ t825 = __retval822;
  return t825;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v826, int v827) {
bb828:
  struct std___Rb_tree_const_iterator_int_* this829;
  int unnamed830;
  struct std___Rb_tree_const_iterator_int_ __retval831;
  this829 = v826;
  unnamed830 = v827;
  struct std___Rb_tree_const_iterator_int_* t832 = this829;
  __retval831 = *t832; // copy
  struct std___Rb_tree_node_base* t833 = t832->_M_node;
  struct std___Rb_tree_node_base* r834 = std___Rb_tree_increment(t833);
  t832->_M_node = r834;
  struct std___Rb_tree_const_iterator_int_ t835 = __retval831;
  return t835;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v836, void* v837) {
bb838:
  struct std__basic_ostream_char__std__char_traits_char__* this839;
  void* __pf840;
  struct std__basic_ostream_char__std__char_traits_char__* __retval841;
  this839 = v836;
  __pf840 = v837;
  struct std__basic_ostream_char__std__char_traits_char__* t842 = this839;
  void* t843 = __pf840;
  struct std__basic_ostream_char__std__char_traits_char__* r844 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t843)(t842);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval841 = r844;
  struct std__basic_ostream_char__std__char_traits_char__* t845 = __retval841;
  return t845;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v846) {
bb847:
  struct std__basic_ostream_char__std__char_traits_char__* __os848;
  struct std__basic_ostream_char__std__char_traits_char__* __retval849;
  __os848 = v846;
  struct std__basic_ostream_char__std__char_traits_char__* t850 = __os848;
  struct std__basic_ostream_char__std__char_traits_char__* r851 = std__ostream__flush(t850);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval849 = r851;
  struct std__basic_ostream_char__std__char_traits_char__* t852 = __retval849;
  return t852;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v853) {
bb854:
  struct std__ctype_char_* __f855;
  struct std__ctype_char_* __retval856;
  __f855 = v853;
    struct std__ctype_char_* t857 = __f855;
    _Bool cast858 = (_Bool)t857;
    _Bool u859 = !cast858;
    if (u859) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t860 = __f855;
  __retval856 = t860;
  struct std__ctype_char_* t861 = __retval856;
  return t861;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v862, char v863) {
bb864:
  struct std__ctype_char_* this865;
  char __c866;
  char __retval867;
  this865 = v862;
  __c866 = v863;
  struct std__ctype_char_* t868 = this865;
    char t869 = t868->_M_widen_ok;
    _Bool cast870 = (_Bool)t869;
    if (cast870) {
      char t871 = __c866;
      unsigned char cast872 = (unsigned char)t871;
      unsigned long cast873 = (unsigned long)cast872;
      char t874 = t868->_M_widen[cast873];
      __retval867 = t874;
      char t875 = __retval867;
      return t875;
    }
  std__ctype_char____M_widen_init___const(t868);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t876 = __c866;
  void** v877 = (void**)t868;
  void* v878 = *((void**)v877);
  char vcall881 = (char)__VERIFIER_virtual_call_char_char(t868, 6, t876);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval867 = vcall881;
  char t882 = __retval867;
  return t882;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v883, char v884) {
bb885:
  struct std__basic_ios_char__std__char_traits_char__* this886;
  char __c887;
  char __retval888;
  this886 = v883;
  __c887 = v884;
  struct std__basic_ios_char__std__char_traits_char__* t889 = this886;
  struct std__ctype_char_* t890 = t889->_M_ctype;
  struct std__ctype_char_* r891 = std__ctype_char__const__std____check_facet_std__ctype_char___(t890);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t892 = __c887;
  char r893 = std__ctype_char___widen_char__const(r891, t892);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval888 = r893;
  char t894 = __retval888;
  return t894;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v895) {
bb896:
  struct std__basic_ostream_char__std__char_traits_char__* __os897;
  struct std__basic_ostream_char__std__char_traits_char__* __retval898;
  __os897 = v895;
  struct std__basic_ostream_char__std__char_traits_char__* t899 = __os897;
  struct std__basic_ostream_char__std__char_traits_char__* t900 = __os897;
  void** v901 = (void**)t900;
  void* v902 = *((void**)v901);
  unsigned char* cast903 = (unsigned char*)v902;
  long c904 = -24;
  unsigned char* ptr905 = &(cast903)[c904];
  long* cast906 = (long*)ptr905;
  long t907 = *cast906;
  unsigned char* cast908 = (unsigned char*)t900;
  unsigned char* ptr909 = &(cast908)[t907];
  struct std__basic_ostream_char__std__char_traits_char__* cast910 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr909;
  struct std__basic_ios_char__std__char_traits_char__* cast911 = (struct std__basic_ios_char__std__char_traits_char__*)cast910;
  char c912 = 10;
  char r913 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast911, c912);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r914 = std__ostream__put(t899, r913);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r915 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r914);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval898 = r915;
  struct std__basic_ostream_char__std__char_traits_char__* t916 = __retval898;
  return t916;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v917) {
bb918:
  struct std__set_int__std__less_int___std__allocator_int__* this919;
  this919 = v917;
  struct std__set_int__std__less_int___std__allocator_int__* t920 = this919;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t920->_M_t);
  }
  return;
}

// function: main
int main() {
bb921:
  int __retval922;
  struct std__set_int__std__less_int___std__allocator_int__ myset923;
  struct std___Rb_tree_const_iterator_int_ it924;
  struct std___Rb_tree_const_iterator_int_ itlow925;
  struct std___Rb_tree_const_iterator_int_ itup926;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1927;
  int ref_tmp2928;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3929;
  int ref_tmp4930;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1931;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2932;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3933;
  int c934 = 0;
  __retval922 = c934;
  std__set_int__std__less_int___std__allocator_int_____set(&myset923);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it924);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itlow925);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itup926);
      int i935;
      int ref_tmp0936;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0937;
      int c938 = 1;
      i935 = c938;
      while (1) {
        int t940 = i935;
        int c941 = 10;
        _Bool c942 = ((t940 < c941)) ? 1 : 0;
        if (!c942) break;
        int t943 = i935;
        int c944 = 10;
        int b945 = t943 * c944;
        ref_tmp0936 = b945;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r946 = std__set_int__std__less_int___std__allocator_int_____insert(&myset923, &ref_tmp0936);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset923);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0937 = r946;
      for_step939: ;
        int t947 = i935;
        int u948 = t947 + 1;
        i935 = u948;
      }
    int c949 = 30;
    ref_tmp2928 = c949;
    struct std___Rb_tree_const_iterator_int_ r950 = std__set_int__std__less_int___std__allocator_int_____upper_bound(&myset923, &ref_tmp2928);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset923);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1927 = r950;
    struct std___Rb_tree_const_iterator_int_* r951 = std___Rb_tree_const_iterator_int___operator_(&itlow925, &ref_tmp1927);
    int* r952 = std___Rb_tree_const_iterator_int___operator____const(&itlow925);
    int t953 = *r952;
    int c954 = 40;
    _Bool c955 = ((t953 == c954)) ? 1 : 0;
    if (c955) {
    } else {
      char* cast956 = (char*)&(_str);
      char* c957 = _str_1;
      unsigned int c958 = 21;
      char* cast959 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast956, c957, c958, cast959);
    }
    int c960 = 60;
    ref_tmp4930 = c960;
    struct std___Rb_tree_const_iterator_int_ r961 = std__set_int__std__less_int___std__allocator_int_____upper_bound(&myset923, &ref_tmp4930);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset923);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp3929 = r961;
    struct std___Rb_tree_const_iterator_int_* r962 = std___Rb_tree_const_iterator_int___operator_(&itup926, &ref_tmp3929);
    int* r963 = std___Rb_tree_const_iterator_int___operator____const(&itup926);
    int t964 = *r963;
    int c965 = 70;
    _Bool c966 = ((t964 == c965)) ? 1 : 0;
    if (c966) {
    } else {
      char* cast967 = (char*)&(_str_2);
      char* c968 = _str_1;
      unsigned int c969 = 23;
      char* cast970 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast967, c968, c969, cast970);
    }
    agg_tmp1931 = itlow925; // copy
    agg_tmp2932 = itup926; // copy
    struct std___Rb_tree_const_iterator_int_ t971 = agg_tmp1931;
    struct std___Rb_tree_const_iterator_int_ t972 = agg_tmp2932;
    struct std___Rb_tree_const_iterator_int_ r973 = std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset923, t971, t972);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset923);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3933 = r973;
    unsigned long r974 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset923);
    unsigned long c975 = 6;
    _Bool c976 = ((r974 == c975)) ? 1 : 0;
    if (c976) {
    } else {
      char* cast977 = (char*)&(_str_3);
      char* c978 = _str_1;
      unsigned int c979 = 26;
      char* cast980 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast977, c978, c979, cast980);
    }
    char* cast981 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r982 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast981);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset923);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp5983;
      struct std___Rb_tree_const_iterator_int_ ref_tmp6984;
      struct std___Rb_tree_const_iterator_int_ agg_tmp4985;
      struct std___Rb_tree_const_iterator_int_ r986 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset923);
      ref_tmp5983 = r986;
      struct std___Rb_tree_const_iterator_int_* r987 = std___Rb_tree_const_iterator_int___operator_(&it924, &ref_tmp5983);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r989 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset923);
        ref_tmp6984 = r989;
        _Bool r990 = std__operator___2(&it924, &ref_tmp6984);
        _Bool u991 = !r990;
        if (!u991) break;
        char* cast992 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r993 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast992);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset923);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r994 = std___Rb_tree_const_iterator_int___operator____const(&it924);
        int t995 = *r994;
        struct std__basic_ostream_char__std__char_traits_char__* r996 = std__ostream__operator__(r993, t995);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset923);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step988: ;
        int c997 = 0;
        struct std___Rb_tree_const_iterator_int_ r998 = std___Rb_tree_const_iterator_int___operator__(&it924, c997);
        agg_tmp4985 = r998;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r999 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset923);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1000 = 0;
    __retval922 = c1000;
    int t1001 = __retval922;
    int ret_val1002 = t1001;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset923);
    }
    return ret_val1002;
  int t1003 = __retval922;
  return t1003;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1004) {
bb1005:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1006;
  this1006 = v1004;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1007 = this1006;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1007->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1008) {
bb1009:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1010;
  this1010 = v1008;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1011 = this1010;
    struct std___Rb_tree_node_int_* r1012 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1011);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1011, r1012);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1011->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1011->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1013) {
bb1014:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1015;
  this1015 = v1013;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1016 = this1015;
  struct std__allocator_std___Rb_tree_node_int__* base1017 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1016 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1017);
    struct std___Rb_tree_key_compare_std__less_int__* base1018 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1016 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1018);
    struct std___Rb_tree_header* base1019 = (struct std___Rb_tree_header*)((char *)t1016 + 8);
    std___Rb_tree_header___Rb_tree_header(base1019);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1020) {
bb1021:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1022;
  this1022 = v1020;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1023 = this1022;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1024 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1023 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1024);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1025) {
bb1026:
  struct std____new_allocator_std___Rb_tree_node_int__* this1027;
  this1027 = v1025;
  struct std____new_allocator_std___Rb_tree_node_int__* t1028 = this1027;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1029) {
bb1030:
  struct std__allocator_std___Rb_tree_node_int__* this1031;
  this1031 = v1029;
  struct std__allocator_std___Rb_tree_node_int__* t1032 = this1031;
  struct std____new_allocator_std___Rb_tree_node_int__* base1033 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1032 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1033);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1034) {
bb1035:
  struct std___Rb_tree_key_compare_std__less_int__* this1036;
  this1036 = v1034;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1037) {
bb1038:
  struct std___Rb_tree_header* this1039;
  this1039 = v1037;
  struct std___Rb_tree_header* t1040 = this1039;
  struct std___Rb_tree_node_base* c1041 = ((void*)0);
  t1040->_M_header._M_parent = c1041;
  t1040->_M_header._M_left = &t1040->_M_header;
  t1040->_M_header._M_right = &t1040->_M_header;
  unsigned long c1042 = 0;
  t1040->_M_node_count = c1042;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1043) {
bb1044:
  struct std___Rb_tree_header* this1045;
  this1045 = v1043;
  struct std___Rb_tree_header* t1046 = this1045;
  unsigned int c1047 = 0;
  t1046->_M_header._M_color = c1047;
  std___Rb_tree_header___M_reset(t1046);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1048) {
bb1049:
  struct std__allocator_std___Rb_tree_node_int__* this1050;
  this1050 = v1048;
  struct std__allocator_std___Rb_tree_node_int__* t1051 = this1050;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1052) {
bb1053:
  struct std___Rb_tree_node_int_* this1054;
  struct std___Rb_tree_node_int_* __retval1055;
  this1054 = v1052;
  struct std___Rb_tree_node_int_* t1056 = this1054;
  __retval1055 = t1056;
  struct std___Rb_tree_node_int_* t1057 = __retval1055;
  return t1057;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1058) {
bb1059:
  struct std___Rb_tree_node_int_* __x1060;
  struct std___Rb_tree_node_int_* __retval1061;
  __x1060 = v1058;
  struct std___Rb_tree_node_int_* t1062 = __x1060;
  struct std___Rb_tree_node_base* base1063 = (struct std___Rb_tree_node_base*)((char *)t1062 + 0);
  struct std___Rb_tree_node_base* t1064 = base1063->_M_right;
  _Bool cast1065 = (_Bool)t1064;
  struct std___Rb_tree_node_int_* ternary1066;
  if (cast1065) {
    struct std___Rb_tree_node_int_* t1067 = __x1060;
    struct std___Rb_tree_node_base* base1068 = (struct std___Rb_tree_node_base*)((char *)t1067 + 0);
    struct std___Rb_tree_node_base* t1069 = base1068->_M_right;
    struct std___Rb_tree_node_int_* derived1070 = (struct std___Rb_tree_node_int_*)((char *)t1069 - 0);
    struct std___Rb_tree_node_int_* r1071 = std___Rb_tree_node_int____M_node_ptr(derived1070);
    ternary1066 = (struct std___Rb_tree_node_int_*)r1071;
  } else {
    struct std___Rb_tree_node_int_* c1072 = ((void*)0);
    ternary1066 = (struct std___Rb_tree_node_int_*)c1072;
  }
  __retval1061 = ternary1066;
  struct std___Rb_tree_node_int_* t1073 = __retval1061;
  return t1073;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1074) {
bb1075:
  struct std___Rb_tree_node_int_* __x1076;
  struct std___Rb_tree_node_int_* __retval1077;
  __x1076 = v1074;
  struct std___Rb_tree_node_int_* t1078 = __x1076;
  struct std___Rb_tree_node_base* base1079 = (struct std___Rb_tree_node_base*)((char *)t1078 + 0);
  struct std___Rb_tree_node_base* t1080 = base1079->_M_left;
  _Bool cast1081 = (_Bool)t1080;
  struct std___Rb_tree_node_int_* ternary1082;
  if (cast1081) {
    struct std___Rb_tree_node_int_* t1083 = __x1076;
    struct std___Rb_tree_node_base* base1084 = (struct std___Rb_tree_node_base*)((char *)t1083 + 0);
    struct std___Rb_tree_node_base* t1085 = base1084->_M_left;
    struct std___Rb_tree_node_int_* derived1086 = (struct std___Rb_tree_node_int_*)((char *)t1085 - 0);
    struct std___Rb_tree_node_int_* r1087 = std___Rb_tree_node_int____M_node_ptr(derived1086);
    ternary1082 = (struct std___Rb_tree_node_int_*)r1087;
  } else {
    struct std___Rb_tree_node_int_* c1088 = ((void*)0);
    ternary1082 = (struct std___Rb_tree_node_int_*)c1088;
  }
  __retval1077 = ternary1082;
  struct std___Rb_tree_node_int_* t1089 = __retval1077;
  return t1089;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1090) {
bb1091:
  int* __location1092;
  __location1092 = v1090;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1093, int* v1094) {
bb1095:
  struct std__allocator_std___Rb_tree_node_int__* __a1096;
  int* __p1097;
  __a1096 = v1093;
  __p1097 = v1094;
  int* t1098 = __p1097;
  void_std__destroy_at_int_(t1098);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1099) {
bb1100:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1101;
  struct std__allocator_std___Rb_tree_node_int__* __retval1102;
  this1101 = v1099;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1103 = this1101;
  struct std__allocator_std___Rb_tree_node_int__* base1104 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1103->_M_impl) + 0);
  __retval1102 = base1104;
  struct std__allocator_std___Rb_tree_node_int__* t1105 = __retval1102;
  return t1105;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1106) {
bb1107:
  struct __gnu_cxx____aligned_membuf_int_* this1108;
  void* __retval1109;
  this1108 = v1106;
  struct __gnu_cxx____aligned_membuf_int_* t1110 = this1108;
  void* cast1111 = (void*)&(t1110->_M_storage);
  __retval1109 = cast1111;
  void* t1112 = __retval1109;
  return t1112;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1113) {
bb1114:
  struct __gnu_cxx____aligned_membuf_int_* this1115;
  int* __retval1116;
  this1115 = v1113;
  struct __gnu_cxx____aligned_membuf_int_* t1117 = this1115;
  void* r1118 = __gnu_cxx____aligned_membuf_int____M_addr(t1117);
  int* cast1119 = (int*)r1118;
  __retval1116 = cast1119;
  int* t1120 = __retval1116;
  return t1120;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1121) {
bb1122:
  struct std___Rb_tree_node_int_* this1123;
  int* __retval1124;
  this1123 = v1121;
  struct std___Rb_tree_node_int_* t1125 = this1123;
  int* r1126 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1125->_M_storage);
  __retval1124 = r1126;
  int* t1127 = __retval1124;
  return t1127;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1128, struct std___Rb_tree_node_int_* v1129) {
bb1130:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1131;
  struct std___Rb_tree_node_int_* __p1132;
  this1131 = v1128;
  __p1132 = v1129;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1133 = this1131;
  struct std__allocator_std___Rb_tree_node_int__* r1134 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1133);
  struct std___Rb_tree_node_int_* t1135 = __p1132;
  int* r1136 = std___Rb_tree_node_int____M_valptr(t1135);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1134, r1136);
  struct std___Rb_tree_node_int_* t1137 = __p1132;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1138:
  _Bool __retval1139;
    _Bool c1140 = 0;
    __retval1139 = c1140;
    _Bool t1141 = __retval1139;
    return t1141;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1142, struct std___Rb_tree_node_int_* v1143, unsigned long v1144) {
bb1145:
  struct std____new_allocator_std___Rb_tree_node_int__* this1146;
  struct std___Rb_tree_node_int_* __p1147;
  unsigned long __n1148;
  this1146 = v1142;
  __p1147 = v1143;
  __n1148 = v1144;
  struct std____new_allocator_std___Rb_tree_node_int__* t1149 = this1146;
    unsigned long c1150 = 8;
    unsigned long c1151 = 16;
    _Bool c1152 = ((c1150 > c1151)) ? 1 : 0;
    if (c1152) {
      struct std___Rb_tree_node_int_* t1153 = __p1147;
      void* cast1154 = (void*)t1153;
      unsigned long t1155 = __n1148;
      unsigned long c1156 = 40;
      unsigned long b1157 = t1155 * c1156;
      unsigned long c1158 = 8;
      operator_delete_3(cast1154, b1157, c1158);
      return;
    }
  struct std___Rb_tree_node_int_* t1159 = __p1147;
  void* cast1160 = (void*)t1159;
  unsigned long t1161 = __n1148;
  unsigned long c1162 = 40;
  unsigned long b1163 = t1161 * c1162;
  operator_delete_2(cast1160, b1163);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1164, struct std___Rb_tree_node_int_* v1165, unsigned long v1166) {
bb1167:
  struct std__allocator_std___Rb_tree_node_int__* this1168;
  struct std___Rb_tree_node_int_* __p1169;
  unsigned long __n1170;
  this1168 = v1164;
  __p1169 = v1165;
  __n1170 = v1166;
  struct std__allocator_std___Rb_tree_node_int__* t1171 = this1168;
    _Bool r1172 = std____is_constant_evaluated();
    if (r1172) {
      struct std___Rb_tree_node_int_* t1173 = __p1169;
      void* cast1174 = (void*)t1173;
      operator_delete(cast1174);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1175 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1171 + 0);
  struct std___Rb_tree_node_int_* t1176 = __p1169;
  unsigned long t1177 = __n1170;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1175, t1176, t1177);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1178, struct std___Rb_tree_node_int_* v1179, unsigned long v1180) {
bb1181:
  struct std__allocator_std___Rb_tree_node_int__* __a1182;
  struct std___Rb_tree_node_int_* __p1183;
  unsigned long __n1184;
  __a1182 = v1178;
  __p1183 = v1179;
  __n1184 = v1180;
  struct std__allocator_std___Rb_tree_node_int__* t1185 = __a1182;
  struct std___Rb_tree_node_int_* t1186 = __p1183;
  unsigned long t1187 = __n1184;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1185, t1186, t1187);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1188, struct std___Rb_tree_node_int_* v1189) {
bb1190:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1191;
  struct std___Rb_tree_node_int_* __p1192;
  this1191 = v1188;
  __p1192 = v1189;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1193 = this1191;
  struct std__allocator_std___Rb_tree_node_int__* r1194 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1193);
  struct std___Rb_tree_node_int_* t1195 = __p1192;
  unsigned long c1196 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1194, t1195, c1196);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1197, struct std___Rb_tree_node_int_* v1198) {
bb1199:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1200;
  struct std___Rb_tree_node_int_* __p1201;
  this1200 = v1197;
  __p1201 = v1198;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1202 = this1200;
  struct std___Rb_tree_node_int_* t1203 = __p1201;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1202, t1203);
  struct std___Rb_tree_node_int_* t1204 = __p1201;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1202, t1204);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1205, struct std___Rb_tree_node_int_* v1206) {
bb1207:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1208;
  struct std___Rb_tree_node_int_* __x1209;
  this1208 = v1205;
  __x1209 = v1206;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1210 = this1208;
    while (1) {
      struct std___Rb_tree_node_int_* t1211 = __x1209;
      _Bool cast1212 = (_Bool)t1211;
      if (!cast1212) break;
        struct std___Rb_tree_node_int_* __y1213;
        struct std___Rb_tree_node_int_* t1214 = __x1209;
        struct std___Rb_tree_node_int_* r1215 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1214);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1210, r1215);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1216 = __x1209;
        struct std___Rb_tree_node_int_* r1217 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1216);
        if (__cir_exc_active) {
          return;
        }
        __y1213 = r1217;
        struct std___Rb_tree_node_int_* t1218 = __x1209;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1210, t1218);
        struct std___Rb_tree_node_int_* t1219 = __y1213;
        __x1209 = t1219;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1220) {
bb1221:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1222;
  struct std___Rb_tree_node_int_* __retval1223;
  struct std___Rb_tree_node_base* __begin1224;
  this1222 = v1220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1225 = this1222;
  struct std___Rb_tree_header* base1226 = (struct std___Rb_tree_header*)((char *)&(t1225->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1227 = base1226->_M_header._M_parent;
  __begin1224 = t1227;
  struct std___Rb_tree_node_base* t1228 = __begin1224;
  _Bool cast1229 = (_Bool)t1228;
  struct std___Rb_tree_node_int_* ternary1230;
  if (cast1229) {
    struct std___Rb_tree_node_base* t1231 = __begin1224;
    struct std___Rb_tree_node_int_* derived1232 = (struct std___Rb_tree_node_int_*)((char *)t1231 - 0);
    struct std___Rb_tree_node_int_* r1233 = std___Rb_tree_node_int____M_node_ptr(derived1232);
    ternary1230 = (struct std___Rb_tree_node_int_*)r1233;
  } else {
    struct std___Rb_tree_node_int_* c1234 = ((void*)0);
    ternary1230 = (struct std___Rb_tree_node_int_*)c1234;
  }
  __retval1223 = ternary1230;
  struct std___Rb_tree_node_int_* t1235 = __retval1223;
  return t1235;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1236, struct std___Rb_tree_iterator_int_* v1237) {
bb1238:
  struct std___Rb_tree_const_iterator_int_* this1239;
  struct std___Rb_tree_iterator_int_* __it1240;
  this1239 = v1236;
  __it1240 = v1237;
  struct std___Rb_tree_const_iterator_int_* t1241 = this1239;
  struct std___Rb_tree_iterator_int_* t1242 = __it1240;
  struct std___Rb_tree_node_base* t1243 = t1242->_M_node;
  t1241->_M_node = t1243;
  return;
}

