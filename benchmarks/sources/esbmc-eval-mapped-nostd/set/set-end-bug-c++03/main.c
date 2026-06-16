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
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints[5] = {75, 23, 65, 42, 13};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it != 75";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-end-bug-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
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
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v0, int* v1, int* v2) {
bb3: ;
  struct std__set_int__std__less_int___std__allocator_int__* this4;
  int* __first5;
  int* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std__set_int__std__less_int___std__allocator_int__* t7 = this4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c8 = {0};
  t7->_M_t = c8;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t7->_M_t);
    int* t9 = __first5;
    int* t10 = __last6;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t7->_M_t, t9, t10);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t7->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v11, struct std___Rb_tree_node_base* v12) {
bb13: ;
  struct std___Rb_tree_const_iterator_int_* this14;
  struct std___Rb_tree_node_base* __x15;
  this14 = v11;
  __x15 = v12;
  struct std___Rb_tree_const_iterator_int_* t16 = this14;
  struct std___Rb_tree_node_base* t17 = __x15;
  t16->_M_node = t17;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v18) {
bb19: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this20;
  struct std___Rb_tree_const_iterator_int_ __retval21;
  this20 = v18;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t22 = this20;
  struct std___Rb_tree_node_base* r23 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t22);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval21, r23);
  struct std___Rb_tree_const_iterator_int_ t24 = __retval21;
  return t24;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v25) {
bb26: ;
  struct std__set_int__std__less_int___std__allocator_int__* this27;
  struct std___Rb_tree_const_iterator_int_ __retval28;
  this27 = v25;
  struct std__set_int__std__less_int___std__allocator_int__* t29 = this27;
  struct std___Rb_tree_const_iterator_int_ r30 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t29->_M_t);
  __retval28 = r30;
  struct std___Rb_tree_const_iterator_int_ t31 = __retval28;
  return t31;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v32, int v33) {
bb34: ;
  struct std___Rb_tree_const_iterator_int_* this35;
  int unnamed36;
  struct std___Rb_tree_const_iterator_int_ __retval37;
  this35 = v32;
  unnamed36 = v33;
  struct std___Rb_tree_const_iterator_int_* t38 = this35;
  __retval37 = *t38; // copy
  struct std___Rb_tree_node_base* t39 = t38->_M_node;
  struct std___Rb_tree_node_base* r40 = std___Rb_tree_decrement(t39);
  t38->_M_node = r40;
  struct std___Rb_tree_const_iterator_int_ t41 = __retval37;
  return t41;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v42) {
bb43: ;
  struct std___Rb_tree_const_iterator_int_* this44;
  int* __retval45;
  this44 = v42;
  struct std___Rb_tree_const_iterator_int_* t46 = this44;
  struct std___Rb_tree_node_base* t47 = t46->_M_node;
  struct std___Rb_tree_node_int_* derived48 = ((t47) ? (struct std___Rb_tree_node_int_*)((char *)t47 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r49 = std___Rb_tree_node_int____M_valptr___const(derived48);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval45 = r49;
  int* t50 = __retval45;
  return t50;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v51, int v52) {
bb53: ;
  int __a54;
  int __b55;
  int __retval56;
  __a54 = v51;
  __b55 = v52;
  int t57 = __a54;
  int t58 = __b55;
  int b59 = t57 | t58;
  __retval56 = b59;
  int t60 = __retval56;
  return t60;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v61) {
bb62: ;
  struct std__basic_ios_char__std__char_traits_char__* this63;
  int __retval64;
  this63 = v61;
  struct std__basic_ios_char__std__char_traits_char__* t65 = this63;
  struct std__ios_base* base66 = (struct std__ios_base*)((char *)t65 + 0);
  int t67 = base66->_M_streambuf_state;
  __retval64 = t67;
  int t68 = __retval64;
  return t68;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v69, int v70) {
bb71: ;
  struct std__basic_ios_char__std__char_traits_char__* this72;
  int __state73;
  this72 = v69;
  __state73 = v70;
  struct std__basic_ios_char__std__char_traits_char__* t74 = this72;
  int r75 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t74);
  if (__cir_exc_active) {
    return;
  }
  int t76 = __state73;
  int r77 = std__operator_(r75, t76);
  std__basic_ios_char__std__char_traits_char_____clear(t74, r77);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v78, char* v79) {
bb80: ;
  char* __c181;
  char* __c282;
  _Bool __retval83;
  __c181 = v78;
  __c282 = v79;
  char* t84 = __c181;
  char t85 = *t84;
  int cast86 = (int)t85;
  char* t87 = __c282;
  char t88 = *t87;
  int cast89 = (int)t88;
  _Bool c90 = ((cast86 == cast89)) ? 1 : 0;
  __retval83 = c90;
  _Bool t91 = __retval83;
  return t91;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v92) {
bb93: ;
  char* __p94;
  unsigned long __retval95;
  unsigned long __i96;
  __p94 = v92;
  unsigned long c97 = 0;
  __i96 = c97;
    char ref_tmp098;
    while (1) {
      unsigned long t99 = __i96;
      char* t100 = __p94;
      char* ptr101 = &(t100)[t99];
      char c102 = 0;
      ref_tmp098 = c102;
      _Bool r103 = __gnu_cxx__char_traits_char___eq(ptr101, &ref_tmp098);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u104 = !r103;
      if (!u104) break;
      unsigned long t105 = __i96;
      unsigned long u106 = t105 + 1;
      __i96 = u106;
    }
  unsigned long t107 = __i96;
  __retval95 = t107;
  unsigned long t108 = __retval95;
  return t108;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v109) {
bb110: ;
  char* __s111;
  unsigned long __retval112;
  __s111 = v109;
    _Bool r113 = std____is_constant_evaluated();
    if (r113) {
      char* t114 = __s111;
      unsigned long r115 = __gnu_cxx__char_traits_char___length(t114);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval112 = r115;
      unsigned long t116 = __retval112;
      return t116;
    }
  char* t117 = __s111;
  unsigned long r118 = strlen(t117);
  __retval112 = r118;
  unsigned long t119 = __retval112;
  return t119;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v120, char* v121) {
bb122: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out123;
  char* __s124;
  struct std__basic_ostream_char__std__char_traits_char__* __retval125;
  __out123 = v120;
  __s124 = v121;
    char* t126 = __s124;
    _Bool cast127 = (_Bool)t126;
    _Bool u128 = !cast127;
    if (u128) {
      struct std__basic_ostream_char__std__char_traits_char__* t129 = __out123;
      void** v130 = (void**)t129;
      void* v131 = *((void**)v130);
      unsigned char* cast132 = (unsigned char*)v131;
      long c133 = -24;
      unsigned char* ptr134 = &(cast132)[c133];
      long* cast135 = (long*)ptr134;
      long t136 = *cast135;
      unsigned char* cast137 = (unsigned char*)t129;
      unsigned char* ptr138 = &(cast137)[t136];
      struct std__basic_ostream_char__std__char_traits_char__* cast139 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr138;
      struct std__basic_ios_char__std__char_traits_char__* cast140 = (struct std__basic_ios_char__std__char_traits_char__*)cast139;
      int t141 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast140, t141);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t142 = __out123;
      char* t143 = __s124;
      char* t144 = __s124;
      unsigned long r145 = std__char_traits_char___length(t144);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast146 = (long)r145;
      struct std__basic_ostream_char__std__char_traits_char__* r147 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t142, t143, cast146);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t148 = __out123;
  __retval125 = t148;
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __retval125;
  return t149;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v150) {
bb151: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this152;
  struct std___Rb_tree_const_iterator_int_ __retval153;
  this152 = v150;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t154 = this152;
  struct std___Rb_tree_header* base155 = (struct std___Rb_tree_header*)((char *)&(t154->_M_impl) + 8);
  struct std___Rb_tree_node_base* t156 = base155->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval153, t156);
  struct std___Rb_tree_const_iterator_int_ t157 = __retval153;
  return t157;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v158) {
bb159: ;
  struct std__set_int__std__less_int___std__allocator_int__* this160;
  struct std___Rb_tree_const_iterator_int_ __retval161;
  this160 = v158;
  struct std__set_int__std__less_int___std__allocator_int__* t162 = this160;
  struct std___Rb_tree_const_iterator_int_ r163 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t162->_M_t);
  __retval161 = r163;
  struct std___Rb_tree_const_iterator_int_ t164 = __retval161;
  return t164;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v165, struct std___Rb_tree_const_iterator_int_* v166) {
bb167: ;
  struct std___Rb_tree_const_iterator_int_* this168;
  struct std___Rb_tree_const_iterator_int_* unnamed169;
  struct std___Rb_tree_const_iterator_int_* __retval170;
  this168 = v165;
  unnamed169 = v166;
  struct std___Rb_tree_const_iterator_int_* t171 = this168;
  struct std___Rb_tree_const_iterator_int_* t172 = unnamed169;
  struct std___Rb_tree_node_base* t173 = t172->_M_node;
  t171->_M_node = t173;
  __retval170 = t171;
  struct std___Rb_tree_const_iterator_int_* t174 = __retval170;
  return t174;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v175, struct std___Rb_tree_const_iterator_int_* v176) {
bb177: ;
  struct std___Rb_tree_const_iterator_int_* __x178;
  struct std___Rb_tree_const_iterator_int_* __y179;
  _Bool __retval180;
  __x178 = v175;
  __y179 = v176;
  struct std___Rb_tree_const_iterator_int_* t181 = __x178;
  struct std___Rb_tree_node_base* t182 = t181->_M_node;
  struct std___Rb_tree_const_iterator_int_* t183 = __y179;
  struct std___Rb_tree_node_base* t184 = t183->_M_node;
  _Bool c185 = ((t182 == t184)) ? 1 : 0;
  __retval180 = c185;
  _Bool t186 = __retval180;
  return t186;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v187, int v188) {
bb189: ;
  struct std___Rb_tree_const_iterator_int_* this190;
  int unnamed191;
  struct std___Rb_tree_const_iterator_int_ __retval192;
  this190 = v187;
  unnamed191 = v188;
  struct std___Rb_tree_const_iterator_int_* t193 = this190;
  __retval192 = *t193; // copy
  struct std___Rb_tree_node_base* t194 = t193->_M_node;
  struct std___Rb_tree_node_base* r195 = std___Rb_tree_increment(t194);
  t193->_M_node = r195;
  struct std___Rb_tree_const_iterator_int_ t196 = __retval192;
  return t196;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v197, void* v198) {
bb199: ;
  struct std__basic_ostream_char__std__char_traits_char__* this200;
  void* __pf201;
  struct std__basic_ostream_char__std__char_traits_char__* __retval202;
  this200 = v197;
  __pf201 = v198;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = this200;
  void* t204 = __pf201;
  struct std__basic_ostream_char__std__char_traits_char__* r205 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t204)(t203);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval202 = r205;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __retval202;
  return t206;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v207) {
bb208: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os209;
  struct std__basic_ostream_char__std__char_traits_char__* __retval210;
  __os209 = v207;
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __os209;
  struct std__basic_ostream_char__std__char_traits_char__* r212 = std__ostream__flush(t211);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval210 = r212;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = __retval210;
  return t213;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v214) {
bb215: ;
  struct std__ctype_char_* __f216;
  struct std__ctype_char_* __retval217;
  __f216 = v214;
    struct std__ctype_char_* t218 = __f216;
    _Bool cast219 = (_Bool)t218;
    _Bool u220 = !cast219;
    if (u220) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t221 = __f216;
  __retval217 = t221;
  struct std__ctype_char_* t222 = __retval217;
  return t222;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v223, char v224) {
bb225: ;
  struct std__ctype_char_* this226;
  char __c227;
  char __retval228;
  this226 = v223;
  __c227 = v224;
  struct std__ctype_char_* t229 = this226;
    char t230 = t229->_M_widen_ok;
    _Bool cast231 = (_Bool)t230;
    if (cast231) {
      char t232 = __c227;
      unsigned char cast233 = (unsigned char)t232;
      unsigned long cast234 = (unsigned long)cast233;
      char t235 = t229->_M_widen[cast234];
      __retval228 = t235;
      char t236 = __retval228;
      return t236;
    }
  std__ctype_char____M_widen_init___const(t229);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t237 = __c227;
  void** v238 = (void**)t229;
  void* v239 = *((void**)v238);
  char vcall242 = (char)__VERIFIER_virtual_call_char_char(t229, 6, t237);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval228 = vcall242;
  char t243 = __retval228;
  return t243;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v244, char v245) {
bb246: ;
  struct std__basic_ios_char__std__char_traits_char__* this247;
  char __c248;
  char __retval249;
  this247 = v244;
  __c248 = v245;
  struct std__basic_ios_char__std__char_traits_char__* t250 = this247;
  struct std__ctype_char_* t251 = t250->_M_ctype;
  struct std__ctype_char_* r252 = std__ctype_char__const__std____check_facet_std__ctype_char___(t251);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t253 = __c248;
  char r254 = std__ctype_char___widen_char__const(r252, t253);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval249 = r254;
  char t255 = __retval249;
  return t255;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v256) {
bb257: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os258;
  struct std__basic_ostream_char__std__char_traits_char__* __retval259;
  __os258 = v256;
  struct std__basic_ostream_char__std__char_traits_char__* t260 = __os258;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __os258;
  void** v262 = (void**)t261;
  void* v263 = *((void**)v262);
  unsigned char* cast264 = (unsigned char*)v263;
  long c265 = -24;
  unsigned char* ptr266 = &(cast264)[c265];
  long* cast267 = (long*)ptr266;
  long t268 = *cast267;
  unsigned char* cast269 = (unsigned char*)t261;
  unsigned char* ptr270 = &(cast269)[t268];
  struct std__basic_ostream_char__std__char_traits_char__* cast271 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr270;
  struct std__basic_ios_char__std__char_traits_char__* cast272 = (struct std__basic_ios_char__std__char_traits_char__*)cast271;
  char c273 = 10;
  char r274 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast272, c273);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r275 = std__ostream__put(t260, r274);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r275);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval259 = r276;
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __retval259;
  return t277;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v278) {
bb279: ;
  struct std__set_int__std__less_int___std__allocator_int__* this280;
  this280 = v278;
  struct std__set_int__std__less_int___std__allocator_int__* t281 = this280;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t281->_M_t);
  }
  return;
}

// function: main
int main() {
bb282: ;
  int __retval283;
  int myints284[5];
  struct std__set_int__std__less_int___std__allocator_int__ myset285;
  struct std___Rb_tree_const_iterator_int_ it286;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0287;
  int c288 = 0;
  __retval283 = c288;
  // array copy
  __builtin_memcpy(myints284, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast289 = (int*)&(myints284);
  int* cast290 = (int*)&(myints284);
  int c291 = 5;
  int* ptr292 = &(cast290)[c291];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset285, cast289, ptr292);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct std___Rb_tree_const_iterator_int_ r293 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset285);
    it286 = r293;
    int c294 = 0;
    struct std___Rb_tree_const_iterator_int_ r295 = std___Rb_tree_const_iterator_int___operator__(&it286, c294);
    agg_tmp0287 = r295;
    int* r296 = std___Rb_tree_const_iterator_int___operator____const(&it286);
    int t297 = *r296;
    int c298 = 75;
    _Bool c299 = ((t297 != c298)) ? 1 : 0;
    if (c299) {
    } else {
      char* cast300 = (char*)&(_str);
      char* c301 = (char*)_str_1;
      unsigned int c302 = 20;
      char* cast303 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast300, c301, c302, cast303);
    }
    char* cast304 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast304);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset285);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp0306;
      struct std___Rb_tree_const_iterator_int_ ref_tmp1307;
      struct std___Rb_tree_const_iterator_int_ agg_tmp1308;
      struct std___Rb_tree_const_iterator_int_ r309 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset285);
      ref_tmp0306 = r309;
      struct std___Rb_tree_const_iterator_int_* r310 = std___Rb_tree_const_iterator_int___operator_(&it286, &ref_tmp0306);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r312 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset285);
        ref_tmp1307 = r312;
        _Bool r313 = std__operator___2(&it286, &ref_tmp1307);
        _Bool u314 = !r313;
        if (!u314) break;
        char* cast315 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r316 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast315);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset285);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r317 = std___Rb_tree_const_iterator_int___operator____const(&it286);
        int t318 = *r317;
        struct std__basic_ostream_char__std__char_traits_char__* r319 = std__ostream__operator__(r316, t318);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset285);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step311: ;
        int c320 = 0;
        struct std___Rb_tree_const_iterator_int_ r321 = std___Rb_tree_const_iterator_int___operator___2(&it286, c320);
        agg_tmp1308 = r321;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r322 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset285);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c323 = 0;
    __retval283 = c323;
    int t324 = __retval283;
    int ret_val325 = t324;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset285);
    }
    return ret_val325;
  int t326 = __retval283;
  return t326;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v327) {
bb328: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this329;
  this329 = v327;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t330 = this329;
    struct std___Rb_tree_node_int_* r331 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t330);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t330, r331);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t330->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t330->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v332) {
bb333: ;
  struct std___Rb_tree_node_int_* this334;
  struct std___Rb_tree_node_int_* __retval335;
  this334 = v332;
  struct std___Rb_tree_node_int_* t336 = this334;
  __retval335 = t336;
  struct std___Rb_tree_node_int_* t337 = __retval335;
  return t337;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v338) {
bb339: ;
  struct std___Rb_tree_node_int_* __x340;
  struct std___Rb_tree_node_int_* __retval341;
  __x340 = v338;
  struct std___Rb_tree_node_int_* t342 = __x340;
  struct std___Rb_tree_node_base* base343 = (struct std___Rb_tree_node_base*)((char *)t342 + 0);
  struct std___Rb_tree_node_base* t344 = base343->_M_right;
  _Bool cast345 = (_Bool)t344;
  struct std___Rb_tree_node_int_* ternary346;
  if (cast345) {
    struct std___Rb_tree_node_int_* t347 = __x340;
    struct std___Rb_tree_node_base* base348 = (struct std___Rb_tree_node_base*)((char *)t347 + 0);
    struct std___Rb_tree_node_base* t349 = base348->_M_right;
    struct std___Rb_tree_node_int_* derived350 = (struct std___Rb_tree_node_int_*)((char *)t349 - 0);
    struct std___Rb_tree_node_int_* r351 = std___Rb_tree_node_int____M_node_ptr(derived350);
    ternary346 = (struct std___Rb_tree_node_int_*)r351;
  } else {
    struct std___Rb_tree_node_int_* c352 = ((void*)0);
    ternary346 = (struct std___Rb_tree_node_int_*)c352;
  }
  __retval341 = ternary346;
  struct std___Rb_tree_node_int_* t353 = __retval341;
  return t353;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v354) {
bb355: ;
  struct std___Rb_tree_node_int_* __x356;
  struct std___Rb_tree_node_int_* __retval357;
  __x356 = v354;
  struct std___Rb_tree_node_int_* t358 = __x356;
  struct std___Rb_tree_node_base* base359 = (struct std___Rb_tree_node_base*)((char *)t358 + 0);
  struct std___Rb_tree_node_base* t360 = base359->_M_left;
  _Bool cast361 = (_Bool)t360;
  struct std___Rb_tree_node_int_* ternary362;
  if (cast361) {
    struct std___Rb_tree_node_int_* t363 = __x356;
    struct std___Rb_tree_node_base* base364 = (struct std___Rb_tree_node_base*)((char *)t363 + 0);
    struct std___Rb_tree_node_base* t365 = base364->_M_left;
    struct std___Rb_tree_node_int_* derived366 = (struct std___Rb_tree_node_int_*)((char *)t365 - 0);
    struct std___Rb_tree_node_int_* r367 = std___Rb_tree_node_int____M_node_ptr(derived366);
    ternary362 = (struct std___Rb_tree_node_int_*)r367;
  } else {
    struct std___Rb_tree_node_int_* c368 = ((void*)0);
    ternary362 = (struct std___Rb_tree_node_int_*)c368;
  }
  __retval357 = ternary362;
  struct std___Rb_tree_node_int_* t369 = __retval357;
  return t369;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v370) {
bb371: ;
  int* __location372;
  __location372 = v370;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v373, int* v374) {
bb375: ;
  struct std__allocator_std___Rb_tree_node_int__* __a376;
  int* __p377;
  __a376 = v373;
  __p377 = v374;
  int* t378 = __p377;
  void_std__destroy_at_int_(t378);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v379) {
bb380: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this381;
  struct std__allocator_std___Rb_tree_node_int__* __retval382;
  this381 = v379;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t383 = this381;
  struct std__allocator_std___Rb_tree_node_int__* base384 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t383->_M_impl) + 0);
  __retval382 = base384;
  struct std__allocator_std___Rb_tree_node_int__* t385 = __retval382;
  return t385;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v386) {
bb387: ;
  struct __gnu_cxx____aligned_membuf_int_* this388;
  void* __retval389;
  this388 = v386;
  struct __gnu_cxx____aligned_membuf_int_* t390 = this388;
  void* cast391 = (void*)&(t390->_M_storage);
  __retval389 = cast391;
  void* t392 = __retval389;
  return t392;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v393) {
bb394: ;
  struct __gnu_cxx____aligned_membuf_int_* this395;
  int* __retval396;
  this395 = v393;
  struct __gnu_cxx____aligned_membuf_int_* t397 = this395;
  void* r398 = __gnu_cxx____aligned_membuf_int____M_addr(t397);
  int* cast399 = (int*)r398;
  __retval396 = cast399;
  int* t400 = __retval396;
  return t400;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v401) {
bb402: ;
  struct std___Rb_tree_node_int_* this403;
  int* __retval404;
  this403 = v401;
  struct std___Rb_tree_node_int_* t405 = this403;
  int* r406 = __gnu_cxx____aligned_membuf_int____M_ptr(&t405->_M_storage);
  __retval404 = r406;
  int* t407 = __retval404;
  return t407;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v408, struct std___Rb_tree_node_int_* v409) {
bb410: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this411;
  struct std___Rb_tree_node_int_* __p412;
  this411 = v408;
  __p412 = v409;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t413 = this411;
  struct std__allocator_std___Rb_tree_node_int__* r414 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t413);
  struct std___Rb_tree_node_int_* t415 = __p412;
  int* r416 = std___Rb_tree_node_int____M_valptr(t415);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r414, r416);
  struct std___Rb_tree_node_int_* t417 = __p412;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb418: ;
  _Bool __retval419;
    _Bool c420 = 0;
    __retval419 = c420;
    _Bool t421 = __retval419;
    return t421;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v422, struct std___Rb_tree_node_int_* v423, unsigned long v424) {
bb425: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this426;
  struct std___Rb_tree_node_int_* __p427;
  unsigned long __n428;
  this426 = v422;
  __p427 = v423;
  __n428 = v424;
  struct std____new_allocator_std___Rb_tree_node_int__* t429 = this426;
    unsigned long c430 = 8;
    unsigned long c431 = 16;
    _Bool c432 = ((c430 > c431)) ? 1 : 0;
    if (c432) {
      struct std___Rb_tree_node_int_* t433 = __p427;
      void* cast434 = (void*)t433;
      unsigned long t435 = __n428;
      unsigned long c436 = 40;
      unsigned long b437 = t435 * c436;
      unsigned long c438 = 8;
      operator_delete_3(cast434, b437, c438);
      return;
    }
  struct std___Rb_tree_node_int_* t439 = __p427;
  void* cast440 = (void*)t439;
  unsigned long t441 = __n428;
  unsigned long c442 = 40;
  unsigned long b443 = t441 * c442;
  operator_delete_2(cast440, b443);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v444, struct std___Rb_tree_node_int_* v445, unsigned long v446) {
bb447: ;
  struct std__allocator_std___Rb_tree_node_int__* this448;
  struct std___Rb_tree_node_int_* __p449;
  unsigned long __n450;
  this448 = v444;
  __p449 = v445;
  __n450 = v446;
  struct std__allocator_std___Rb_tree_node_int__* t451 = this448;
    _Bool r452 = std____is_constant_evaluated();
    if (r452) {
      struct std___Rb_tree_node_int_* t453 = __p449;
      void* cast454 = (void*)t453;
      operator_delete(cast454);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base455 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t451 + 0);
  struct std___Rb_tree_node_int_* t456 = __p449;
  unsigned long t457 = __n450;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base455, t456, t457);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v458, struct std___Rb_tree_node_int_* v459, unsigned long v460) {
bb461: ;
  struct std__allocator_std___Rb_tree_node_int__* __a462;
  struct std___Rb_tree_node_int_* __p463;
  unsigned long __n464;
  __a462 = v458;
  __p463 = v459;
  __n464 = v460;
  struct std__allocator_std___Rb_tree_node_int__* t465 = __a462;
  struct std___Rb_tree_node_int_* t466 = __p463;
  unsigned long t467 = __n464;
  std__allocator_std___Rb_tree_node_int_____deallocate(t465, t466, t467);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v468, struct std___Rb_tree_node_int_* v469) {
bb470: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this471;
  struct std___Rb_tree_node_int_* __p472;
  this471 = v468;
  __p472 = v469;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t473 = this471;
  struct std__allocator_std___Rb_tree_node_int__* r474 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t473);
  struct std___Rb_tree_node_int_* t475 = __p472;
  unsigned long c476 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r474, t475, c476);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v477, struct std___Rb_tree_node_int_* v478) {
bb479: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this480;
  struct std___Rb_tree_node_int_* __p481;
  this480 = v477;
  __p481 = v478;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t482 = this480;
  struct std___Rb_tree_node_int_* t483 = __p481;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t482, t483);
  struct std___Rb_tree_node_int_* t484 = __p481;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t482, t484);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v485, struct std___Rb_tree_node_int_* v486) {
bb487: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this488;
  struct std___Rb_tree_node_int_* __x489;
  this488 = v485;
  __x489 = v486;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t490 = this488;
    while (1) {
      struct std___Rb_tree_node_int_* t491 = __x489;
      _Bool cast492 = (_Bool)t491;
      if (!cast492) break;
        struct std___Rb_tree_node_int_* __y493;
        struct std___Rb_tree_node_int_* t494 = __x489;
        struct std___Rb_tree_node_int_* r495 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t494);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t490, r495);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t496 = __x489;
        struct std___Rb_tree_node_int_* r497 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t496);
        if (__cir_exc_active) {
          return;
        }
        __y493 = r497;
        struct std___Rb_tree_node_int_* t498 = __x489;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t490, t498);
        struct std___Rb_tree_node_int_* t499 = __y493;
        __x489 = t499;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v500) {
bb501: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this502;
  struct std___Rb_tree_node_int_* __retval503;
  struct std___Rb_tree_node_base* __begin504;
  this502 = v500;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t505 = this502;
  struct std___Rb_tree_header* base506 = (struct std___Rb_tree_header*)((char *)&(t505->_M_impl) + 8);
  struct std___Rb_tree_node_base* t507 = base506->_M_header._M_parent;
  __begin504 = t507;
  struct std___Rb_tree_node_base* t508 = __begin504;
  _Bool cast509 = (_Bool)t508;
  struct std___Rb_tree_node_int_* ternary510;
  if (cast509) {
    struct std___Rb_tree_node_base* t511 = __begin504;
    struct std___Rb_tree_node_int_* derived512 = (struct std___Rb_tree_node_int_*)((char *)t511 - 0);
    struct std___Rb_tree_node_int_* r513 = std___Rb_tree_node_int____M_node_ptr(derived512);
    ternary510 = (struct std___Rb_tree_node_int_*)r513;
  } else {
    struct std___Rb_tree_node_int_* c514 = ((void*)0);
    ternary510 = (struct std___Rb_tree_node_int_*)c514;
  }
  __retval503 = ternary510;
  struct std___Rb_tree_node_int_* t515 = __retval503;
  return t515;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v516) {
bb517: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this518;
  this518 = v516;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t519 = this518;
  {
    struct std__allocator_std___Rb_tree_node_int__* base520 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t519 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base520);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v521) {
bb522: ;
  struct std__allocator_std___Rb_tree_node_int__* this523;
  this523 = v521;
  struct std__allocator_std___Rb_tree_node_int__* t524 = this523;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v525) {
bb526: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this527;
  this527 = v525;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t528 = this527;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t528->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v529, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v530) {
bb531: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this532;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t533;
  this532 = v529;
  __t533 = v530;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t534 = this532;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t535 = __t533;
  t534->_M_t = t535;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v536) {
bb537: ;
  struct std___Rb_tree_node_base* this538;
  struct std___Rb_tree_node_base* __retval539;
  this538 = v536;
  struct std___Rb_tree_node_base* t540 = this538;
  __retval539 = t540;
  struct std___Rb_tree_node_base* t541 = __retval539;
  return t541;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v542) {
bb543: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this544;
  struct std___Rb_tree_node_base* __retval545;
  this544 = v542;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t546 = this544;
  struct std___Rb_tree_header* base547 = (struct std___Rb_tree_header*)((char *)&(t546->_M_impl) + 8);
  struct std___Rb_tree_node_base* r548 = std___Rb_tree_node_base___M_base_ptr___const(&base547->_M_header);
  __retval545 = r548;
  struct std___Rb_tree_node_base* t549 = __retval545;
  return t549;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v550) {
bb551: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this552;
  unsigned long __retval553;
  this552 = v550;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t554 = this552;
  struct std___Rb_tree_header* base555 = (struct std___Rb_tree_header*)((char *)&(t554->_M_impl) + 8);
  unsigned long t556 = base555->_M_node_count;
  __retval553 = t556;
  unsigned long t557 = __retval553;
  return t557;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v558, int* v559, int* v560) {
bb561: ;
  struct std__less_int_* this562;
  int* __x563;
  int* __y564;
  _Bool __retval565;
  this562 = v558;
  __x563 = v559;
  __y564 = v560;
  struct std__less_int_* t566 = this562;
  int* t567 = __x563;
  int t568 = *t567;
  int* t569 = __y564;
  int t570 = *t569;
  _Bool c571 = ((t568 < t570)) ? 1 : 0;
  __retval565 = c571;
  _Bool t572 = __retval565;
  return t572;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v573, int* v574) {
bb575: ;
  struct std___Identity_int_* this576;
  int* __x577;
  int* __retval578;
  this576 = v573;
  __x577 = v574;
  struct std___Identity_int_* t579 = this576;
  int* t580 = __x577;
  __retval578 = t580;
  int* t581 = __retval578;
  return t581;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v582) {
bb583: ;
  struct __gnu_cxx____aligned_membuf_int_* this584;
  void* __retval585;
  this584 = v582;
  struct __gnu_cxx____aligned_membuf_int_* t586 = this584;
  void* cast587 = (void*)&(t586->_M_storage);
  __retval585 = cast587;
  void* t588 = __retval585;
  return t588;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v589) {
bb590: ;
  struct __gnu_cxx____aligned_membuf_int_* this591;
  int* __retval592;
  this591 = v589;
  struct __gnu_cxx____aligned_membuf_int_* t593 = this591;
  void* r594 = __gnu_cxx____aligned_membuf_int____M_addr___const(t593);
  int* cast595 = (int*)r594;
  __retval592 = cast595;
  int* t596 = __retval592;
  return t596;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v597) {
bb598: ;
  struct std___Rb_tree_node_int_* this599;
  int* __retval600;
  this599 = v597;
  struct std___Rb_tree_node_int_* t601 = this599;
  int* r602 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t601->_M_storage);
  __retval600 = r602;
  int* t603 = __retval600;
  return t603;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v604) {
bb605: ;
  struct std___Rb_tree_node_int_* __node606;
  int* __retval607;
  struct std___Identity_int_ ref_tmp0608;
  __node606 = v604;
  struct std___Rb_tree_node_int_* t609 = __node606;
  int* r610 = std___Rb_tree_node_int____M_valptr___const(t609);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r611 = std___Identity_int___operator___int_const___const(&ref_tmp0608, r610);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval607 = r611;
  int* t612 = __retval607;
  return t612;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v613) {
bb614: ;
  struct std___Rb_tree_node_base* __x615;
  int* __retval616;
  __x615 = v613;
  struct std___Rb_tree_node_base* t617 = __x615;
  struct std___Rb_tree_node_int_* derived618 = (struct std___Rb_tree_node_int_*)((char *)t617 - 0);
  int* r619 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived618);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval616 = r619;
  int* t620 = __retval616;
  return t620;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v621) {
bb622: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this623;
  struct std___Rb_tree_node_base** __retval624;
  this623 = v621;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t625 = this623;
  struct std___Rb_tree_header* base626 = (struct std___Rb_tree_header*)((char *)&(t625->_M_impl) + 8);
  __retval624 = &base626->_M_header._M_right;
  struct std___Rb_tree_node_base** t627 = __retval624;
  return t627;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v628, struct std___Rb_tree_node_base** v629, struct std___Rb_tree_node_base** v630) {
bb631: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this632;
  struct std___Rb_tree_node_base** __x633;
  struct std___Rb_tree_node_base** __y634;
  this632 = v628;
  __x633 = v629;
  __y634 = v630;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t635 = this632;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base636 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t635 + 0);
  struct std___Rb_tree_node_base** t637 = __x633;
  struct std___Rb_tree_node_base* t638 = *t637;
  t635->first = t638;
  struct std___Rb_tree_node_base** t639 = __y634;
  struct std___Rb_tree_node_base* t640 = *t639;
  t635->second = t640;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v641) {
bb642: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this643;
  struct std___Rb_tree_node_base* __retval644;
  this643 = v641;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t645 = this643;
  struct std___Rb_tree_header* base646 = (struct std___Rb_tree_header*)((char *)&(t645->_M_impl) + 8);
  struct std___Rb_tree_node_base* t647 = base646->_M_header._M_parent;
  __retval644 = t647;
  struct std___Rb_tree_node_base* t648 = __retval644;
  return t648;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v649) {
bb650: ;
  struct std___Rb_tree_node_base* __x651;
  struct std___Rb_tree_node_base* __retval652;
  __x651 = v649;
  struct std___Rb_tree_node_base* t653 = __x651;
  struct std___Rb_tree_node_base* t654 = t653->_M_left;
  __retval652 = t654;
  struct std___Rb_tree_node_base* t655 = __retval652;
  return t655;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v656, struct std___Rb_tree_iterator_int_* v657) {
bb658: ;
  struct std___Rb_tree_iterator_int_* __x659;
  struct std___Rb_tree_iterator_int_* __y660;
  _Bool __retval661;
  __x659 = v656;
  __y660 = v657;
  struct std___Rb_tree_iterator_int_* t662 = __x659;
  struct std___Rb_tree_node_base* t663 = t662->_M_node;
  struct std___Rb_tree_iterator_int_* t664 = __y660;
  struct std___Rb_tree_node_base* t665 = t664->_M_node;
  _Bool c666 = ((t663 == t665)) ? 1 : 0;
  __retval661 = c666;
  _Bool t667 = __retval661;
  return t667;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v668) {
bb669: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this670;
  struct std___Rb_tree_iterator_int_ __retval671;
  this670 = v668;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t672 = this670;
  struct std___Rb_tree_header* base673 = (struct std___Rb_tree_header*)((char *)&(t672->_M_impl) + 8);
  struct std___Rb_tree_node_base* t674 = base673->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval671, t674);
  struct std___Rb_tree_iterator_int_ t675 = __retval671;
  return t675;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v676, int* v677) {
bb678: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this679;
  int* __k680;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval681;
  struct std___Rb_tree_node_base* __x682;
  struct std___Rb_tree_node_base* __y683;
  _Bool __comp684;
  struct std___Rb_tree_iterator_int_ __j685;
  struct std___Rb_tree_node_base* ref_tmp1686;
  this679 = v676;
  __k680 = v677;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t687 = this679;
  struct std___Rb_tree_node_base* r688 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t687);
  __x682 = r688;
  struct std___Rb_tree_node_base* r689 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t687);
  __y683 = r689;
  _Bool c690 = 1;
  __comp684 = c690;
    while (1) {
      struct std___Rb_tree_node_base* t691 = __x682;
      _Bool cast692 = (_Bool)t691;
      if (!cast692) break;
        struct std___Rb_tree_node_base* t693 = __x682;
        __y683 = t693;
        struct std___Rb_tree_key_compare_std__less_int__* base694 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t687->_M_impl) + 0);
        struct std__less_int_* cast695 = (struct std__less_int_*)base694;
        int* t696 = __k680;
        struct std___Rb_tree_node_base* t697 = __x682;
        int* r698 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t697);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r699 = std__less_int___operator___int_const___int_const___const(cast695, t696, r698);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp684 = r699;
        _Bool t700 = __comp684;
        struct std___Rb_tree_node_base* ternary701;
        if (t700) {
          struct std___Rb_tree_node_base* t702 = __x682;
          struct std___Rb_tree_node_base* r703 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t702);
          ternary701 = (struct std___Rb_tree_node_base*)r703;
        } else {
          struct std___Rb_tree_node_base* t704 = __x682;
          struct std___Rb_tree_node_base* r705 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t704);
          ternary701 = (struct std___Rb_tree_node_base*)r705;
        }
        __x682 = ternary701;
    }
  struct std___Rb_tree_node_base* t706 = __y683;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j685, t706);
    _Bool t707 = __comp684;
    if (t707) {
        struct std___Rb_tree_iterator_int_ ref_tmp0708;
        struct std___Rb_tree_iterator_int_ r709 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t687);
        ref_tmp0708 = r709;
        _Bool r710 = std__operator__(&__j685, &ref_tmp0708);
        if (r710) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval681, &__x682, &__y683);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t711 = __retval681;
          return t711;
        } else {
          struct std___Rb_tree_iterator_int_* r712 = std___Rb_tree_iterator_int___operator__(&__j685);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base713 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t687->_M_impl) + 0);
    struct std__less_int_* cast714 = (struct std__less_int_*)base713;
    struct std___Rb_tree_node_base* t715 = __j685._M_node;
    int* r716 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t715);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t717 = __k680;
    _Bool r718 = std__less_int___operator___int_const___int_const___const(cast714, r716, t717);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r718) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval681, &__x682, &__y683);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t719 = __retval681;
      return t719;
    }
  struct std___Rb_tree_node_base* c720 = ((void*)0);
  ref_tmp1686 = c720;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval681, &__j685._M_node, &ref_tmp1686);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t721 = __retval681;
  return t721;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v722) {
bb723: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this724;
  struct std___Rb_tree_node_base** __retval725;
  this724 = v722;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t726 = this724;
  struct std___Rb_tree_header* base727 = (struct std___Rb_tree_header*)((char *)&(t726->_M_impl) + 8);
  __retval725 = &base727->_M_header._M_left;
  struct std___Rb_tree_node_base** t728 = __retval725;
  return t728;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v729, struct std___Rb_tree_node_base** v730, struct std___Rb_tree_node_base** v731) {
bb732: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this733;
  struct std___Rb_tree_node_base** __x734;
  struct std___Rb_tree_node_base** __y735;
  this733 = v729;
  __x734 = v730;
  __y735 = v731;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t736 = this733;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base737 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t736 + 0);
  struct std___Rb_tree_node_base** t738 = __x734;
  struct std___Rb_tree_node_base* t739 = *t738;
  t736->first = t739;
  struct std___Rb_tree_node_base** t740 = __y735;
  struct std___Rb_tree_node_base* t741 = *t740;
  t736->second = t741;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v742) {
bb743: ;
  struct std___Rb_tree_iterator_int_* this744;
  struct std___Rb_tree_iterator_int_* __retval745;
  this744 = v742;
  struct std___Rb_tree_iterator_int_* t746 = this744;
  struct std___Rb_tree_node_base* t747 = t746->_M_node;
  struct std___Rb_tree_node_base* r748 = std___Rb_tree_decrement(t747);
  t746->_M_node = r748;
  __retval745 = t746;
  struct std___Rb_tree_iterator_int_* t749 = __retval745;
  return t749;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v750) {
bb751: ;
  struct std___Rb_tree_node_base* __x752;
  struct std___Rb_tree_node_base* __retval753;
  __x752 = v750;
  struct std___Rb_tree_node_base* t754 = __x752;
  struct std___Rb_tree_node_base* t755 = t754->_M_right;
  __retval753 = t755;
  struct std___Rb_tree_node_base* t756 = __retval753;
  return t756;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v757) {
bb758: ;
  struct std___Rb_tree_iterator_int_* this759;
  struct std___Rb_tree_iterator_int_* __retval760;
  this759 = v757;
  struct std___Rb_tree_iterator_int_* t761 = this759;
  struct std___Rb_tree_node_base* t762 = t761->_M_node;
  struct std___Rb_tree_node_base* r763 = std___Rb_tree_increment(t762);
  t761->_M_node = r763;
  __retval760 = t761;
  struct std___Rb_tree_iterator_int_* t764 = __retval760;
  return t764;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v765, struct std___Rb_tree_node_base** v766, struct std___Rb_tree_node_base** v767) {
bb768: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this769;
  struct std___Rb_tree_node_base** __x770;
  struct std___Rb_tree_node_base** __y771;
  this769 = v765;
  __x770 = v766;
  __y771 = v767;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t772 = this769;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base773 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t772 + 0);
  struct std___Rb_tree_node_base** t774 = __x770;
  struct std___Rb_tree_node_base* t775 = *t774;
  t772->first = t775;
  struct std___Rb_tree_node_base** t776 = __y771;
  struct std___Rb_tree_node_base* t777 = *t776;
  t772->second = t777;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v778, struct std___Rb_tree_const_iterator_int_ v779, int* v780) {
bb781: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this782;
  struct std___Rb_tree_const_iterator_int_ __position783;
  int* __k784;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval785;
  this782 = v778;
  __position783 = v779;
  __k784 = v780;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t786 = this782;
    struct std___Rb_tree_node_base* t787 = __position783._M_node;
    struct std___Rb_tree_node_base* r788 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t786);
    _Bool c789 = ((t787 == r788)) ? 1 : 0;
    if (c789) {
        unsigned long r790 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t786);
        unsigned long c791 = 0;
        _Bool c792 = ((r790 > c791)) ? 1 : 0;
        _Bool ternary793;
        if (c792) {
          struct std___Rb_tree_key_compare_std__less_int__* base794 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t786->_M_impl) + 0);
          struct std__less_int_* cast795 = (struct std__less_int_*)base794;
          struct std___Rb_tree_node_base** r796 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t786);
          struct std___Rb_tree_node_base* t797 = *r796;
          int* r798 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t797);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t799 = __k784;
          _Bool r800 = std__less_int___operator___int_const___int_const___const(cast795, r798, t799);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary793 = (_Bool)r800;
        } else {
          _Bool c801 = 0;
          ternary793 = (_Bool)c801;
        }
        if (ternary793) {
          struct std___Rb_tree_node_base* ref_tmp0802;
          struct std___Rb_tree_node_base* c803 = ((void*)0);
          ref_tmp0802 = c803;
          struct std___Rb_tree_node_base** r804 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t786);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &ref_tmp0802, r804);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t805 = __retval785;
          return t805;
        } else {
          int* t806 = __k784;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r807 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t786, t806);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval785 = r807;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t808 = __retval785;
          return t808;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base809 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t786->_M_impl) + 0);
        struct std__less_int_* cast810 = (struct std__less_int_*)base809;
        int* t811 = __k784;
        struct std___Rb_tree_node_base* t812 = __position783._M_node;
        int* r813 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t812);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r814 = std__less_int___operator___int_const___int_const___const(cast810, t811, r813);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r814) {
          struct std___Rb_tree_iterator_int_ __before815;
          struct std___Rb_tree_node_base* t816 = __position783._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before815, t816);
            struct std___Rb_tree_node_base* t817 = __position783._M_node;
            struct std___Rb_tree_node_base** r818 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t786);
            struct std___Rb_tree_node_base* t819 = *r818;
            _Bool c820 = ((t817 == t819)) ? 1 : 0;
            if (c820) {
              struct std___Rb_tree_node_base** r821 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t786);
              struct std___Rb_tree_node_base** r822 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t786);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, r821, r822);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t823 = __retval785;
              return t823;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base824 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t786->_M_impl) + 0);
                struct std__less_int_* cast825 = (struct std__less_int_*)base824;
                struct std___Rb_tree_iterator_int_* r826 = std___Rb_tree_iterator_int___operator__(&__before815);
                struct std___Rb_tree_node_base* t827 = r826->_M_node;
                int* r828 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t827);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t829 = __k784;
                _Bool r830 = std__less_int___operator___int_const___int_const___const(cast825, r828, t829);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r830) {
                    struct std___Rb_tree_node_base* t831 = __before815._M_node;
                    struct std___Rb_tree_node_base* r832 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t831);
                    _Bool cast833 = (_Bool)r832;
                    _Bool u834 = !cast833;
                    if (u834) {
                      struct std___Rb_tree_node_base* ref_tmp1835;
                      struct std___Rb_tree_node_base* c836 = ((void*)0);
                      ref_tmp1835 = c836;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &ref_tmp1835, &__before815._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t837 = __retval785;
                      return t837;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &__position783._M_node, &__position783._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t838 = __retval785;
                      return t838;
                    }
                } else {
                  int* t839 = __k784;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r840 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t786, t839);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval785 = r840;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t841 = __retval785;
                  return t841;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base842 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t786->_M_impl) + 0);
            struct std__less_int_* cast843 = (struct std__less_int_*)base842;
            struct std___Rb_tree_node_base* t844 = __position783._M_node;
            int* r845 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t844);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t846 = __k784;
            _Bool r847 = std__less_int___operator___int_const___int_const___const(cast843, r845, t846);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r847) {
              struct std___Rb_tree_iterator_int_ __after848;
              struct std___Rb_tree_node_base* t849 = __position783._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after848, t849);
                struct std___Rb_tree_node_base* t850 = __position783._M_node;
                struct std___Rb_tree_node_base** r851 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t786);
                struct std___Rb_tree_node_base* t852 = *r851;
                _Bool c853 = ((t850 == t852)) ? 1 : 0;
                if (c853) {
                  struct std___Rb_tree_node_base* ref_tmp2854;
                  struct std___Rb_tree_node_base* c855 = ((void*)0);
                  ref_tmp2854 = c855;
                  struct std___Rb_tree_node_base** r856 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t786);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &ref_tmp2854, r856);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t857 = __retval785;
                  return t857;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base858 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t786->_M_impl) + 0);
                    struct std__less_int_* cast859 = (struct std__less_int_*)base858;
                    int* t860 = __k784;
                    struct std___Rb_tree_iterator_int_* r861 = std___Rb_tree_iterator_int___operator___2(&__after848);
                    struct std___Rb_tree_node_base* t862 = r861->_M_node;
                    int* r863 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t862);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r864 = std__less_int___operator___int_const___int_const___const(cast859, t860, r863);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r864) {
                        struct std___Rb_tree_node_base* t865 = __position783._M_node;
                        struct std___Rb_tree_node_base* r866 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t865);
                        _Bool cast867 = (_Bool)r866;
                        _Bool u868 = !cast867;
                        if (u868) {
                          struct std___Rb_tree_node_base* ref_tmp3869;
                          struct std___Rb_tree_node_base* c870 = ((void*)0);
                          ref_tmp3869 = c870;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &ref_tmp3869, &__position783._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t871 = __retval785;
                          return t871;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &__after848._M_node, &__after848._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t872 = __retval785;
                          return t872;
                        }
                    } else {
                      int* t873 = __k784;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r874 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t786, t873);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval785 = r874;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t875 = __retval785;
                      return t875;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4876;
              struct std___Rb_tree_node_base* c877 = ((void*)0);
              ref_tmp4876 = c877;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval785, &__position783._M_node, &ref_tmp4876);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t878 = __retval785;
              return t878;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v879, int* v880) {
bb881: ;
  struct std___Identity_int_* this882;
  int* __x883;
  int* __retval884;
  this882 = v879;
  __x883 = v880;
  struct std___Identity_int_* t885 = this882;
  int* t886 = __x883;
  __retval884 = t886;
  int* t887 = __retval884;
  return t887;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v888) {
bb889: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this890;
  unsigned long __retval891;
  this890 = v888;
  struct std____new_allocator_std___Rb_tree_node_int__* t892 = this890;
  unsigned long c893 = 9223372036854775807;
  unsigned long c894 = 40;
  unsigned long b895 = c893 / c894;
  __retval891 = b895;
  unsigned long t896 = __retval891;
  return t896;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v897, unsigned long v898, void* v899) {
bb900: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this901;
  unsigned long __n902;
  void* unnamed903;
  struct std___Rb_tree_node_int_* __retval904;
  this901 = v897;
  __n902 = v898;
  unnamed903 = v899;
  struct std____new_allocator_std___Rb_tree_node_int__* t905 = this901;
    unsigned long t906 = __n902;
    unsigned long r907 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t905);
    _Bool c908 = ((t906 > r907)) ? 1 : 0;
    if (c908) {
        unsigned long t909 = __n902;
        unsigned long c910 = -1;
        unsigned long c911 = 40;
        unsigned long b912 = c910 / c911;
        _Bool c913 = ((t909 > b912)) ? 1 : 0;
        if (c913) {
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
    unsigned long c914 = 8;
    unsigned long c915 = 16;
    _Bool c916 = ((c914 > c915)) ? 1 : 0;
    if (c916) {
      unsigned long __al917;
      unsigned long c918 = 8;
      __al917 = c918;
      unsigned long t919 = __n902;
      unsigned long c920 = 40;
      unsigned long b921 = t919 * c920;
      unsigned long t922 = __al917;
      void* r923 = operator_new_2(b921, t922);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast924 = (struct std___Rb_tree_node_int_*)r923;
      __retval904 = cast924;
      struct std___Rb_tree_node_int_* t925 = __retval904;
      return t925;
    }
  unsigned long t926 = __n902;
  unsigned long c927 = 40;
  unsigned long b928 = t926 * c927;
  void* r929 = operator_new(b928);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast930 = (struct std___Rb_tree_node_int_*)r929;
  __retval904 = cast930;
  struct std___Rb_tree_node_int_* t931 = __retval904;
  return t931;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v932, unsigned long v933) {
bb934: ;
  struct std__allocator_std___Rb_tree_node_int__* this935;
  unsigned long __n936;
  struct std___Rb_tree_node_int_* __retval937;
  this935 = v932;
  __n936 = v933;
  struct std__allocator_std___Rb_tree_node_int__* t938 = this935;
    _Bool r939 = std____is_constant_evaluated();
    if (r939) {
        unsigned long t940 = __n936;
        unsigned long c941 = 40;
        unsigned long ovr942;
        _Bool ovf943 = __builtin_mul_overflow(t940, c941, &ovr942);
        __n936 = ovr942;
        if (ovf943) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t944 = __n936;
      void* r945 = operator_new(t944);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast946 = (struct std___Rb_tree_node_int_*)r945;
      __retval937 = cast946;
      struct std___Rb_tree_node_int_* t947 = __retval937;
      return t947;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base948 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t938 + 0);
  unsigned long t949 = __n936;
  void* c950 = ((void*)0);
  struct std___Rb_tree_node_int_* r951 = std____new_allocator_std___Rb_tree_node_int_____allocate(base948, t949, c950);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval937 = r951;
  struct std___Rb_tree_node_int_* t952 = __retval937;
  return t952;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v953, unsigned long v954) {
bb955: ;
  struct std__allocator_std___Rb_tree_node_int__* __a956;
  unsigned long __n957;
  struct std___Rb_tree_node_int_* __retval958;
  __a956 = v953;
  __n957 = v954;
  struct std__allocator_std___Rb_tree_node_int__* t959 = __a956;
  unsigned long t960 = __n957;
  struct std___Rb_tree_node_int_* r961 = std__allocator_std___Rb_tree_node_int_____allocate(t959, t960);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval958 = r961;
  struct std___Rb_tree_node_int_* t962 = __retval958;
  return t962;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v963) {
bb964: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this965;
  struct std___Rb_tree_node_int_* __retval966;
  this965 = v963;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t967 = this965;
  struct std__allocator_std___Rb_tree_node_int__* r968 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t967);
  unsigned long c969 = 1;
  struct std___Rb_tree_node_int_* r970 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r968, c969);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval966 = r970;
  struct std___Rb_tree_node_int_* t971 = __retval966;
  return t971;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v972, int* v973) {
bb974: ;
  int* __location975;
  int* __args976;
  int* __retval977;
  void* __loc978;
  __location975 = v972;
  __args976 = v973;
  int* t979 = __location975;
  void* cast980 = (void*)t979;
  __loc978 = cast980;
    void* t981 = __loc978;
    int* cast982 = (int*)t981;
    int* t983 = __args976;
    int t984 = *t983;
    *cast982 = t984;
    __retval977 = cast982;
    int* t985 = __retval977;
    return t985;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v986, int* v987, int* v988) {
bb989: ;
  struct std__allocator_std___Rb_tree_node_int__* __a990;
  int* __p991;
  int* __args992;
  __a990 = v986;
  __p991 = v987;
  __args992 = v988;
  int* t993 = __p991;
  int* t994 = __args992;
  int* r995 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t993, t994);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v996, struct std___Rb_tree_node_int_* v997, int* v998) {
bb999: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1000;
  struct std___Rb_tree_node_int_* __node1001;
  int* __args1002;
  this1000 = v996;
  __node1001 = v997;
  __args1002 = v998;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1003 = this1000;
      struct std__allocator_std___Rb_tree_node_int__* r1005 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1003);
      struct std___Rb_tree_node_int_* t1006 = __node1001;
      int* r1007 = std___Rb_tree_node_int____M_valptr(t1006);
      if (__cir_exc_active) {
        goto cir_try_dispatch1004;
      }
      int* t1008 = __args1002;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1005, r1007, t1008);
    cir_try_dispatch1004: ;
    if (__cir_exc_active) {
    {
      int ca_tok1009 = 0;
      void* ca_exn1010 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1011 = __node1001;
        struct std___Rb_tree_node_int_* t1012 = __node1001;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1003, t1012);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1013, int* v1014) {
bb1015: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1016;
  int* __args1017;
  struct std___Rb_tree_node_int_* __retval1018;
  struct std___Rb_tree_node_int_* __tmp1019;
  this1016 = v1013;
  __args1017 = v1014;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1020 = this1016;
  struct std___Rb_tree_node_int_* r1021 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1020);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1019 = r1021;
  struct std___Rb_tree_node_int_* t1022 = __tmp1019;
  int* t1023 = __args1017;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1020, t1022, t1023);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1024 = __tmp1019;
  __retval1018 = t1024;
  struct std___Rb_tree_node_int_* t1025 = __retval1018;
  return t1025;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1026, int* v1027) {
bb1028: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1029;
  int* __arg1030;
  struct std___Rb_tree_node_int_* __retval1031;
  this1029 = v1026;
  __arg1030 = v1027;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1032 = this1029;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1033 = t1032->_M_t;
  int* t1034 = __arg1030;
  struct std___Rb_tree_node_int_* r1035 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1033, t1034);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1031 = r1035;
  struct std___Rb_tree_node_int_* t1036 = __retval1031;
  return t1036;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1037, struct std___Rb_tree_node_base* v1038, struct std___Rb_tree_node_base* v1039, struct std___Rb_tree_node_base* v1040) {
bb1041: ;
  _Bool __insert_left1042;
  struct std___Rb_tree_node_base* __x1043;
  struct std___Rb_tree_node_base* __p1044;
  struct std___Rb_tree_node_base* __header1045;
  __insert_left1042 = v1037;
  __x1043 = v1038;
  __p1044 = v1039;
  __header1045 = v1040;
  _Bool t1046 = __insert_left1042;
  struct std___Rb_tree_node_base* t1047 = __x1043;
  struct std___Rb_tree_node_base* t1048 = __p1044;
  struct std___Rb_tree_node_base* t1049 = __header1045;
  std___Rb_tree_insert_and_rebalance(t1046, t1047, t1048, t1049);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1050, struct std___Rb_tree_node_base* v1051, struct std___Rb_tree_node_base* v1052, int* v1053, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1054) {
bb1055: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1056;
  struct std___Rb_tree_node_base* __x1057;
  struct std___Rb_tree_node_base* __p1058;
  int* __v1059;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1060;
  struct std___Rb_tree_iterator_int_ __retval1061;
  _Bool __insert_left1062;
  struct std___Rb_tree_node_base* __z1063;
  this1056 = v1050;
  __x1057 = v1051;
  __p1058 = v1052;
  __v1059 = v1053;
  __node_gen1060 = v1054;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1064 = this1056;
  struct std___Rb_tree_node_base* t1065 = __x1057;
  _Bool cast1066 = (_Bool)t1065;
  _Bool ternary1067;
  if (cast1066) {
    _Bool c1068 = 1;
    ternary1067 = (_Bool)c1068;
  } else {
    struct std___Rb_tree_node_base* t1069 = __p1058;
    struct std___Rb_tree_node_base* r1070 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1064);
    _Bool c1071 = ((t1069 == r1070)) ? 1 : 0;
    ternary1067 = (_Bool)c1071;
  }
  _Bool ternary1072;
  if (ternary1067) {
    _Bool c1073 = 1;
    ternary1072 = (_Bool)c1073;
  } else {
    struct std___Identity_int_ ref_tmp01074;
    struct std___Rb_tree_key_compare_std__less_int__* base1075 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1064->_M_impl) + 0);
    struct std__less_int_* cast1076 = (struct std__less_int_*)base1075;
    int* t1077 = __v1059;
    int* r1078 = std___Identity_int___operator___int___const(&ref_tmp01074, t1077);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1079 = __p1058;
    int* r1080 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1079);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1081 = std__less_int___operator___int_const___int_const___const(cast1076, r1078, r1080);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1072 = (_Bool)r1081;
  }
  __insert_left1062 = ternary1072;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1082 = __node_gen1060;
  int* t1083 = __v1059;
  struct std___Rb_tree_node_int_* r1084 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1082, t1083);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1085 = (struct std___Rb_tree_node_base*)((char *)r1084 + 0);
  struct std___Rb_tree_node_base* r1086 = std___Rb_tree_node_base___M_base_ptr___const(base1085);
  __z1063 = r1086;
  _Bool t1087 = __insert_left1062;
  struct std___Rb_tree_node_base* t1088 = __z1063;
  struct std___Rb_tree_node_base* t1089 = __p1058;
  struct std___Rb_tree_header* base1090 = (struct std___Rb_tree_header*)((char *)&(t1064->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1087, t1088, t1089, &base1090->_M_header);
  struct std___Rb_tree_header* base1091 = (struct std___Rb_tree_header*)((char *)&(t1064->_M_impl) + 8);
  unsigned long t1092 = base1091->_M_node_count;
  unsigned long u1093 = t1092 + 1;
  base1091->_M_node_count = u1093;
  struct std___Rb_tree_node_base* t1094 = __z1063;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1061, t1094);
  struct std___Rb_tree_iterator_int_ t1095 = __retval1061;
  return t1095;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1096, struct std___Rb_tree_node_base* v1097) {
bb1098: ;
  struct std___Rb_tree_iterator_int_* this1099;
  struct std___Rb_tree_node_base* __x1100;
  this1099 = v1096;
  __x1100 = v1097;
  struct std___Rb_tree_iterator_int_* t1101 = this1099;
  struct std___Rb_tree_node_base* t1102 = __x1100;
  t1101->_M_node = t1102;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1103, struct std___Rb_tree_const_iterator_int_ v1104, int* v1105, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1106) {
bb1107: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1108;
  struct std___Rb_tree_const_iterator_int_ __position1109;
  int* __v1110;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1111;
  struct std___Rb_tree_iterator_int_ __retval1112;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1113;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01114;
  struct std___Identity_int_ ref_tmp01115;
  this1108 = v1103;
  __position1109 = v1104;
  __v1110 = v1105;
  __node_gen1111 = v1106;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1116 = this1108;
  agg_tmp01114 = __position1109; // copy
  int* t1117 = __v1110;
  int* r1118 = std___Identity_int___operator___int___const(&ref_tmp01115, t1117);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1119 = agg_tmp01114;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1120 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1116, t1119, r1118);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1113 = r1120;
    struct std___Rb_tree_node_base* t1121 = __res1113.second;
    _Bool cast1122 = (_Bool)t1121;
    if (cast1122) {
      struct std___Rb_tree_node_base* t1123 = __res1113.first;
      struct std___Rb_tree_node_base* t1124 = __res1113.second;
      int* t1125 = __v1110;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1126 = __node_gen1111;
      struct std___Rb_tree_iterator_int_ r1127 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1116, t1123, t1124, t1125, t1126);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1112 = r1127;
      struct std___Rb_tree_iterator_int_ t1128 = __retval1112;
      return t1128;
    }
  struct std___Rb_tree_node_base* t1129 = __res1113.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1112, t1129);
  struct std___Rb_tree_iterator_int_ t1130 = __retval1112;
  return t1130;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1131) {
bb1132: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1133;
  struct std___Rb_tree_iterator_int_ __retval1134;
  this1133 = v1131;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1135 = this1133;
  struct std___Rb_tree_node_base* r1136 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1135);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1134, r1136);
  struct std___Rb_tree_iterator_int_ t1137 = __retval1134;
  return t1137;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1138, struct std___Rb_tree_iterator_int_* v1139) {
bb1140: ;
  struct std___Rb_tree_const_iterator_int_* this1141;
  struct std___Rb_tree_iterator_int_* __it1142;
  this1141 = v1138;
  __it1142 = v1139;
  struct std___Rb_tree_const_iterator_int_* t1143 = this1141;
  struct std___Rb_tree_iterator_int_* t1144 = __it1142;
  struct std___Rb_tree_node_base* t1145 = t1144->_M_node;
  t1143->_M_node = t1145;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1146, int* v1147, int* v1148) {
bb1149: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1150;
  int* __first1151;
  int* __last1152;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1153;
  this1150 = v1146;
  __first1151 = v1147;
  __last1152 = v1148;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1154 = this1150;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1153, t1154);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01155;
    struct std___Rb_tree_iterator_int_ ref_tmp01156;
    struct std___Rb_tree_iterator_int_ agg_tmp11157;
    while (1) {
      int* t1159 = __first1151;
      int* t1160 = __last1152;
      _Bool c1161 = ((t1159 != t1160)) ? 1 : 0;
      if (!c1161) break;
      struct std___Rb_tree_iterator_int_ r1162 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1154);
      ref_tmp01156 = r1162;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01155, &ref_tmp01156);
      int* t1163 = __first1151;
      struct std___Rb_tree_const_iterator_int_ t1164 = agg_tmp01155;
      struct std___Rb_tree_iterator_int_ r1165 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1154, t1164, t1163, &__an1153);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11157 = r1165;
    for_step1158: ;
      int* t1166 = __first1151;
      int c1167 = 1;
      int* ptr1168 = &(t1166)[c1167];
      __first1151 = ptr1168;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1169) {
bb1170: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1171;
  this1171 = v1169;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1172 = this1171;
  struct std__allocator_std___Rb_tree_node_int__* base1173 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1172 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1173);
    struct std___Rb_tree_key_compare_std__less_int__* base1174 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1172 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1174);
    struct std___Rb_tree_header* base1175 = (struct std___Rb_tree_header*)((char *)t1172 + 8);
    std___Rb_tree_header___Rb_tree_header(base1175);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1176) {
bb1177: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1178;
  this1178 = v1176;
  struct std____new_allocator_std___Rb_tree_node_int__* t1179 = this1178;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1180) {
bb1181: ;
  struct std__allocator_std___Rb_tree_node_int__* this1182;
  this1182 = v1180;
  struct std__allocator_std___Rb_tree_node_int__* t1183 = this1182;
  struct std____new_allocator_std___Rb_tree_node_int__* base1184 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1183 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1184);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1185) {
bb1186: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1187;
  this1187 = v1185;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1188) {
bb1189: ;
  struct std___Rb_tree_header* this1190;
  this1190 = v1188;
  struct std___Rb_tree_header* t1191 = this1190;
  struct std___Rb_tree_node_base* c1192 = ((void*)0);
  t1191->_M_header._M_parent = c1192;
  t1191->_M_header._M_left = &t1191->_M_header;
  t1191->_M_header._M_right = &t1191->_M_header;
  unsigned long c1193 = 0;
  t1191->_M_node_count = c1193;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1194) {
bb1195: ;
  struct std___Rb_tree_header* this1196;
  this1196 = v1194;
  struct std___Rb_tree_header* t1197 = this1196;
  unsigned int c1198 = 0;
  t1197->_M_header._M_color = c1198;
  std___Rb_tree_header___M_reset(t1197);
  if (__cir_exc_active) {
    return;
  }
  return;
}

