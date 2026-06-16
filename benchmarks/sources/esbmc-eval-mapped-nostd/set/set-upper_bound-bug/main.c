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

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[13] = "*itlow != 30";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-upper_bound-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*itup != 70";
char _str_3[18] = "myset.size() == 6";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____upper_bound(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
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

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v11) {
bb12: ;
  struct std___Rb_tree_const_iterator_int_* this13;
  this13 = v11;
  struct std___Rb_tree_const_iterator_int_* t14 = this13;
  struct std___Rb_tree_node_base* c15 = ((void*)0);
  t14->_M_node = c15;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v16, struct std___Rb_tree_node_base* v17, struct std___Rb_tree_node_base* v18, int* v19) {
bb20: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this21;
  struct std___Rb_tree_node_base* __x22;
  struct std___Rb_tree_node_base* __y23;
  int* __k24;
  struct std___Rb_tree_node_base* __retval25;
  this21 = v16;
  __x22 = v17;
  __y23 = v18;
  __k24 = v19;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t26 = this21;
    while (1) {
      struct std___Rb_tree_node_base* t27 = __x22;
      _Bool cast28 = (_Bool)t27;
      if (!cast28) break;
        struct std___Rb_tree_key_compare_std__less_int__* base29 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t26->_M_impl) + 0);
        struct std__less_int_* cast30 = (struct std__less_int_*)base29;
        int* t31 = __k24;
        struct std___Rb_tree_node_base* t32 = __x22;
        int* r33 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t32);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r34 = std__less_int___operator___int_const___int_const___const(cast30, t31, r33);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r34) {
          struct std___Rb_tree_node_base* t35 = __x22;
          __y23 = t35;
          struct std___Rb_tree_node_base* t36 = __x22;
          struct std___Rb_tree_node_base* r37 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t36);
          __x22 = r37;
        } else {
          struct std___Rb_tree_node_base* t38 = __x22;
          struct std___Rb_tree_node_base* r39 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t38);
          __x22 = r39;
        }
    }
  struct std___Rb_tree_node_base* t40 = __y23;
  __retval25 = t40;
  struct std___Rb_tree_node_base* t41 = __retval25;
  return t41;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v42, int* v43) {
bb44: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this45;
  int* __k46;
  struct std___Rb_tree_iterator_int_ __retval47;
  this45 = v42;
  __k46 = v43;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t48 = this45;
  struct std___Rb_tree_node_base* r49 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t48);
  struct std___Rb_tree_node_base* r50 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t48);
  int* t51 = __k46;
  struct std___Rb_tree_node_base* r52 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t48, r49, r50, t51);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval47, r52);
  struct std___Rb_tree_iterator_int_ t53 = __retval47;
  return t53;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____upper_bound(struct std__set_int__std__less_int___std__allocator_int__* v54, int* v55) {
bb56: ;
  struct std__set_int__std__less_int___std__allocator_int__* this57;
  int* __x58;
  struct std___Rb_tree_const_iterator_int_ __retval59;
  struct std___Rb_tree_iterator_int_ ref_tmp060;
  this57 = v54;
  __x58 = v55;
  struct std__set_int__std__less_int___std__allocator_int__* t61 = this57;
  int* t62 = __x58;
  struct std___Rb_tree_iterator_int_ r63 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(&t61->_M_t, t62);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp060 = r63;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval59, &ref_tmp060);
  struct std___Rb_tree_const_iterator_int_ t64 = __retval59;
  return t64;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v65, struct std___Rb_tree_const_iterator_int_* v66) {
bb67: ;
  struct std___Rb_tree_const_iterator_int_* this68;
  struct std___Rb_tree_const_iterator_int_* unnamed69;
  struct std___Rb_tree_const_iterator_int_* __retval70;
  this68 = v65;
  unnamed69 = v66;
  struct std___Rb_tree_const_iterator_int_* t71 = this68;
  struct std___Rb_tree_const_iterator_int_* t72 = unnamed69;
  struct std___Rb_tree_node_base* t73 = t72->_M_node;
  t71->_M_node = t73;
  __retval70 = t71;
  struct std___Rb_tree_const_iterator_int_* t74 = __retval70;
  return t74;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v75) {
bb76: ;
  struct std___Rb_tree_const_iterator_int_* this77;
  int* __retval78;
  this77 = v75;
  struct std___Rb_tree_const_iterator_int_* t79 = this77;
  struct std___Rb_tree_node_base* t80 = t79->_M_node;
  struct std___Rb_tree_node_int_* derived81 = ((t80) ? (struct std___Rb_tree_node_int_*)((char *)t80 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r82 = std___Rb_tree_node_int____M_valptr___const(derived81);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval78 = r82;
  int* t83 = __retval78;
  return t83;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v84) {
bb85: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this86;
  this86 = v84;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t87 = this86;
  struct std___Rb_tree_node_int_* r88 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t87);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t87, r88);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base89 = (struct std___Rb_tree_header*)((char *)&(t87->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base89);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v90, struct std___Rb_tree_node_base* v91) {
bb92: ;
  struct std___Rb_tree_node_base* __z93;
  struct std___Rb_tree_node_base* __header94;
  struct std___Rb_tree_node_base* __retval95;
  __z93 = v90;
  __header94 = v91;
  struct std___Rb_tree_node_base* t96 = __z93;
  struct std___Rb_tree_node_base* t97 = __header94;
  struct std___Rb_tree_node_base* r98 = std___Rb_tree_rebalance_for_erase(t96, t97);
  __retval95 = r98;
  struct std___Rb_tree_node_base* t99 = __retval95;
  return t99;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v100, struct std___Rb_tree_const_iterator_int_ v101) {
bb102: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this103;
  struct std___Rb_tree_const_iterator_int_ __position104;
  struct std___Rb_tree_node_base* __y105;
  this103 = v100;
  __position104 = v101;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t106 = this103;
  struct std___Rb_tree_node_base* t107 = __position104._M_node;
  struct std___Rb_tree_header* base108 = (struct std___Rb_tree_header*)((char *)&(t106->_M_impl) + 8);
  struct std___Rb_tree_node_base* r109 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t107, &base108->_M_header);
  __y105 = r109;
  struct std___Rb_tree_node_base* t110 = __y105;
  struct std___Rb_tree_node_int_* derived111 = (struct std___Rb_tree_node_int_*)((char *)t110 - 0);
  struct std___Rb_tree_node_int_* r112 = std___Rb_tree_node_int____M_node_ptr(derived111);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t106, r112);
  struct std___Rb_tree_header* base113 = (struct std___Rb_tree_header*)((char *)&(t106->_M_impl) + 8);
  unsigned long t114 = base113->_M_node_count;
  unsigned long u115 = t114 - 1;
  base113->_M_node_count = u115;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v116, struct std___Rb_tree_const_iterator_int_ v117, struct std___Rb_tree_const_iterator_int_ v118) {
bb119: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this120;
  struct std___Rb_tree_const_iterator_int_ __first121;
  struct std___Rb_tree_const_iterator_int_ __last122;
  this120 = v116;
  __first121 = v117;
  __last122 = v118;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t123 = this120;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0124;
    struct std___Rb_tree_iterator_int_ ref_tmp1125;
    struct std___Rb_tree_iterator_int_ r126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t123);
    ref_tmp1125 = r126;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0124, &ref_tmp1125);
    _Bool r127 = std__operator___2(&__first121, &ref_tmp0124);
    _Bool ternary128;
    if (r127) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2129;
      struct std___Rb_tree_iterator_int_ ref_tmp3130;
      struct std___Rb_tree_iterator_int_ r131 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t123);
      ref_tmp3130 = r131;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2129, &ref_tmp3130);
      _Bool r132 = std__operator___2(&__last122, &ref_tmp2129);
      ternary128 = (_Bool)r132;
    } else {
      _Bool c133 = 0;
      ternary128 = (_Bool)c133;
    }
    if (ternary128) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t123);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0134;
        while (1) {
          _Bool r135 = std__operator___2(&__first121, &__last122);
          _Bool u136 = !r135;
          if (!u136) break;
          int c137 = 0;
          struct std___Rb_tree_const_iterator_int_ r138 = std___Rb_tree_const_iterator_int___operator__(&__first121, c137);
          agg_tmp0134 = r138;
          struct std___Rb_tree_const_iterator_int_ t139 = agg_tmp0134;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t123, t139);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v140, struct std___Rb_tree_const_iterator_int_ v141, struct std___Rb_tree_const_iterator_int_ v142) {
bb143: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this144;
  struct std___Rb_tree_const_iterator_int_ __first145;
  struct std___Rb_tree_const_iterator_int_ __last146;
  struct std___Rb_tree_iterator_int_ __retval147;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0148;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1149;
  this144 = v140;
  __first145 = v141;
  __last146 = v142;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t150 = this144;
  agg_tmp0148 = __first145; // copy
  agg_tmp1149 = __last146; // copy
  struct std___Rb_tree_const_iterator_int_ t151 = agg_tmp0148;
  struct std___Rb_tree_const_iterator_int_ t152 = agg_tmp1149;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t150, t151, t152);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t153 = __last146._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval147, t153);
  struct std___Rb_tree_iterator_int_ t154 = __retval147;
  return t154;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* v155, struct std___Rb_tree_const_iterator_int_ v156, struct std___Rb_tree_const_iterator_int_ v157) {
bb158: ;
  struct std__set_int__std__less_int___std__allocator_int__* this159;
  struct std___Rb_tree_const_iterator_int_ __first160;
  struct std___Rb_tree_const_iterator_int_ __last161;
  struct std___Rb_tree_const_iterator_int_ __retval162;
  struct std___Rb_tree_iterator_int_ ref_tmp0163;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0164;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1165;
  this159 = v155;
  __first160 = v156;
  __last161 = v157;
  struct std__set_int__std__less_int___std__allocator_int__* t166 = this159;
  agg_tmp0164 = __first160; // copy
  agg_tmp1165 = __last161; // copy
  struct std___Rb_tree_const_iterator_int_ t167 = agg_tmp0164;
  struct std___Rb_tree_const_iterator_int_ t168 = agg_tmp1165;
  struct std___Rb_tree_iterator_int_ r169 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t166->_M_t, t167, t168);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0163 = r169;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval162, &ref_tmp0163);
  struct std___Rb_tree_const_iterator_int_ t170 = __retval162;
  return t170;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v171) {
bb172: ;
  struct std__set_int__std__less_int___std__allocator_int__* this173;
  unsigned long __retval174;
  this173 = v171;
  struct std__set_int__std__less_int___std__allocator_int__* t175 = this173;
  unsigned long r176 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t175->_M_t);
  __retval174 = r176;
  unsigned long t177 = __retval174;
  return t177;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v178, int v179) {
bb180: ;
  int __a181;
  int __b182;
  int __retval183;
  __a181 = v178;
  __b182 = v179;
  int t184 = __a181;
  int t185 = __b182;
  int b186 = t184 | t185;
  __retval183 = b186;
  int t187 = __retval183;
  return t187;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v188) {
bb189: ;
  struct std__basic_ios_char__std__char_traits_char__* this190;
  int __retval191;
  this190 = v188;
  struct std__basic_ios_char__std__char_traits_char__* t192 = this190;
  struct std__ios_base* base193 = (struct std__ios_base*)((char *)t192 + 0);
  int t194 = base193->_M_streambuf_state;
  __retval191 = t194;
  int t195 = __retval191;
  return t195;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v196, int v197) {
bb198: ;
  struct std__basic_ios_char__std__char_traits_char__* this199;
  int __state200;
  this199 = v196;
  __state200 = v197;
  struct std__basic_ios_char__std__char_traits_char__* t201 = this199;
  int r202 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t201);
  if (__cir_exc_active) {
    return;
  }
  int t203 = __state200;
  int r204 = std__operator_(r202, t203);
  std__basic_ios_char__std__char_traits_char_____clear(t201, r204);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v205, char* v206) {
bb207: ;
  char* __c1208;
  char* __c2209;
  _Bool __retval210;
  __c1208 = v205;
  __c2209 = v206;
  char* t211 = __c1208;
  char t212 = *t211;
  int cast213 = (int)t212;
  char* t214 = __c2209;
  char t215 = *t214;
  int cast216 = (int)t215;
  _Bool c217 = ((cast213 == cast216)) ? 1 : 0;
  __retval210 = c217;
  _Bool t218 = __retval210;
  return t218;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v219) {
bb220: ;
  char* __p221;
  unsigned long __retval222;
  unsigned long __i223;
  __p221 = v219;
  unsigned long c224 = 0;
  __i223 = c224;
    char ref_tmp0225;
    while (1) {
      unsigned long t226 = __i223;
      char* t227 = __p221;
      char* ptr228 = &(t227)[t226];
      char c229 = 0;
      ref_tmp0225 = c229;
      _Bool r230 = __gnu_cxx__char_traits_char___eq(ptr228, &ref_tmp0225);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u231 = !r230;
      if (!u231) break;
      unsigned long t232 = __i223;
      unsigned long u233 = t232 + 1;
      __i223 = u233;
    }
  unsigned long t234 = __i223;
  __retval222 = t234;
  unsigned long t235 = __retval222;
  return t235;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v236) {
bb237: ;
  char* __s238;
  unsigned long __retval239;
  __s238 = v236;
    _Bool r240 = std____is_constant_evaluated();
    if (r240) {
      char* t241 = __s238;
      unsigned long r242 = __gnu_cxx__char_traits_char___length(t241);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval239 = r242;
      unsigned long t243 = __retval239;
      return t243;
    }
  char* t244 = __s238;
  unsigned long r245 = strlen(t244);
  __retval239 = r245;
  unsigned long t246 = __retval239;
  return t246;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v247, char* v248) {
bb249: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out250;
  char* __s251;
  struct std__basic_ostream_char__std__char_traits_char__* __retval252;
  __out250 = v247;
  __s251 = v248;
    char* t253 = __s251;
    _Bool cast254 = (_Bool)t253;
    _Bool u255 = !cast254;
    if (u255) {
      struct std__basic_ostream_char__std__char_traits_char__* t256 = __out250;
      void** v257 = (void**)t256;
      void* v258 = *((void**)v257);
      unsigned char* cast259 = (unsigned char*)v258;
      long c260 = -24;
      unsigned char* ptr261 = &(cast259)[c260];
      long* cast262 = (long*)ptr261;
      long t263 = *cast262;
      unsigned char* cast264 = (unsigned char*)t256;
      unsigned char* ptr265 = &(cast264)[t263];
      struct std__basic_ostream_char__std__char_traits_char__* cast266 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr265;
      struct std__basic_ios_char__std__char_traits_char__* cast267 = (struct std__basic_ios_char__std__char_traits_char__*)cast266;
      int t268 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast267, t268);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t269 = __out250;
      char* t270 = __s251;
      char* t271 = __s251;
      unsigned long r272 = std__char_traits_char___length(t271);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast273 = (long)r272;
      struct std__basic_ostream_char__std__char_traits_char__* r274 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t269, t270, cast273);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t275 = __out250;
  __retval252 = t275;
  struct std__basic_ostream_char__std__char_traits_char__* t276 = __retval252;
  return t276;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v277, struct std___Rb_tree_node_base* v278) {
bb279: ;
  struct std___Rb_tree_const_iterator_int_* this280;
  struct std___Rb_tree_node_base* __x281;
  this280 = v277;
  __x281 = v278;
  struct std___Rb_tree_const_iterator_int_* t282 = this280;
  struct std___Rb_tree_node_base* t283 = __x281;
  t282->_M_node = t283;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v284) {
bb285: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this286;
  struct std___Rb_tree_const_iterator_int_ __retval287;
  this286 = v284;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t288 = this286;
  struct std___Rb_tree_header* base289 = (struct std___Rb_tree_header*)((char *)&(t288->_M_impl) + 8);
  struct std___Rb_tree_node_base* t290 = base289->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval287, t290);
  struct std___Rb_tree_const_iterator_int_ t291 = __retval287;
  return t291;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v292) {
bb293: ;
  struct std__set_int__std__less_int___std__allocator_int__* this294;
  struct std___Rb_tree_const_iterator_int_ __retval295;
  this294 = v292;
  struct std__set_int__std__less_int___std__allocator_int__* t296 = this294;
  struct std___Rb_tree_const_iterator_int_ r297 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t296->_M_t);
  __retval295 = r297;
  struct std___Rb_tree_const_iterator_int_ t298 = __retval295;
  return t298;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v299, struct std___Rb_tree_const_iterator_int_* v300) {
bb301: ;
  struct std___Rb_tree_const_iterator_int_* __x302;
  struct std___Rb_tree_const_iterator_int_* __y303;
  _Bool __retval304;
  __x302 = v299;
  __y303 = v300;
  struct std___Rb_tree_const_iterator_int_* t305 = __x302;
  struct std___Rb_tree_node_base* t306 = t305->_M_node;
  struct std___Rb_tree_const_iterator_int_* t307 = __y303;
  struct std___Rb_tree_node_base* t308 = t307->_M_node;
  _Bool c309 = ((t306 == t308)) ? 1 : 0;
  __retval304 = c309;
  _Bool t310 = __retval304;
  return t310;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v311) {
bb312: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this313;
  struct std___Rb_tree_const_iterator_int_ __retval314;
  this313 = v311;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t315 = this313;
  struct std___Rb_tree_node_base* r316 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t315);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval314, r316);
  struct std___Rb_tree_const_iterator_int_ t317 = __retval314;
  return t317;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v318) {
bb319: ;
  struct std__set_int__std__less_int___std__allocator_int__* this320;
  struct std___Rb_tree_const_iterator_int_ __retval321;
  this320 = v318;
  struct std__set_int__std__less_int___std__allocator_int__* t322 = this320;
  struct std___Rb_tree_const_iterator_int_ r323 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t322->_M_t);
  __retval321 = r323;
  struct std___Rb_tree_const_iterator_int_ t324 = __retval321;
  return t324;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v325, int v326) {
bb327: ;
  struct std___Rb_tree_const_iterator_int_* this328;
  int unnamed329;
  struct std___Rb_tree_const_iterator_int_ __retval330;
  this328 = v325;
  unnamed329 = v326;
  struct std___Rb_tree_const_iterator_int_* t331 = this328;
  __retval330 = *t331; // copy
  struct std___Rb_tree_node_base* t332 = t331->_M_node;
  struct std___Rb_tree_node_base* r333 = std___Rb_tree_increment(t332);
  t331->_M_node = r333;
  struct std___Rb_tree_const_iterator_int_ t334 = __retval330;
  return t334;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v335, void* v336) {
bb337: ;
  struct std__basic_ostream_char__std__char_traits_char__* this338;
  void* __pf339;
  struct std__basic_ostream_char__std__char_traits_char__* __retval340;
  this338 = v335;
  __pf339 = v336;
  struct std__basic_ostream_char__std__char_traits_char__* t341 = this338;
  void* t342 = __pf339;
  struct std__basic_ostream_char__std__char_traits_char__* r343 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t342)(t341);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval340 = r343;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __retval340;
  return t344;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v345) {
bb346: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os347;
  struct std__basic_ostream_char__std__char_traits_char__* __retval348;
  __os347 = v345;
  struct std__basic_ostream_char__std__char_traits_char__* t349 = __os347;
  struct std__basic_ostream_char__std__char_traits_char__* r350 = std__ostream__flush(t349);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval348 = r350;
  struct std__basic_ostream_char__std__char_traits_char__* t351 = __retval348;
  return t351;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v352) {
bb353: ;
  struct std__ctype_char_* __f354;
  struct std__ctype_char_* __retval355;
  __f354 = v352;
    struct std__ctype_char_* t356 = __f354;
    _Bool cast357 = (_Bool)t356;
    _Bool u358 = !cast357;
    if (u358) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t359 = __f354;
  __retval355 = t359;
  struct std__ctype_char_* t360 = __retval355;
  return t360;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v361, char v362) {
bb363: ;
  struct std__ctype_char_* this364;
  char __c365;
  char __retval366;
  this364 = v361;
  __c365 = v362;
  struct std__ctype_char_* t367 = this364;
    char t368 = t367->_M_widen_ok;
    _Bool cast369 = (_Bool)t368;
    if (cast369) {
      char t370 = __c365;
      unsigned char cast371 = (unsigned char)t370;
      unsigned long cast372 = (unsigned long)cast371;
      char t373 = t367->_M_widen[cast372];
      __retval366 = t373;
      char t374 = __retval366;
      return t374;
    }
  std__ctype_char____M_widen_init___const(t367);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t375 = __c365;
  void** v376 = (void**)t367;
  void* v377 = *((void**)v376);
  char vcall380 = (char)__VERIFIER_virtual_call_char_char(t367, 6, t375);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval366 = vcall380;
  char t381 = __retval366;
  return t381;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v382, char v383) {
bb384: ;
  struct std__basic_ios_char__std__char_traits_char__* this385;
  char __c386;
  char __retval387;
  this385 = v382;
  __c386 = v383;
  struct std__basic_ios_char__std__char_traits_char__* t388 = this385;
  struct std__ctype_char_* t389 = t388->_M_ctype;
  struct std__ctype_char_* r390 = std__ctype_char__const__std____check_facet_std__ctype_char___(t389);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t391 = __c386;
  char r392 = std__ctype_char___widen_char__const(r390, t391);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval387 = r392;
  char t393 = __retval387;
  return t393;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v394) {
bb395: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os396;
  struct std__basic_ostream_char__std__char_traits_char__* __retval397;
  __os396 = v394;
  struct std__basic_ostream_char__std__char_traits_char__* t398 = __os396;
  struct std__basic_ostream_char__std__char_traits_char__* t399 = __os396;
  void** v400 = (void**)t399;
  void* v401 = *((void**)v400);
  unsigned char* cast402 = (unsigned char*)v401;
  long c403 = -24;
  unsigned char* ptr404 = &(cast402)[c403];
  long* cast405 = (long*)ptr404;
  long t406 = *cast405;
  unsigned char* cast407 = (unsigned char*)t399;
  unsigned char* ptr408 = &(cast407)[t406];
  struct std__basic_ostream_char__std__char_traits_char__* cast409 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr408;
  struct std__basic_ios_char__std__char_traits_char__* cast410 = (struct std__basic_ios_char__std__char_traits_char__*)cast409;
  char c411 = 10;
  char r412 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast410, c411);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r413 = std__ostream__put(t398, r412);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r414 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r413);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval397 = r414;
  struct std__basic_ostream_char__std__char_traits_char__* t415 = __retval397;
  return t415;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v416) {
bb417: ;
  struct std__set_int__std__less_int___std__allocator_int__* this418;
  this418 = v416;
  struct std__set_int__std__less_int___std__allocator_int__* t419 = this418;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t419->_M_t);
  }
  return;
}

// function: main
int main() {
bb420: ;
  int __retval421;
  int b422[9];
  struct std__set_int__std__less_int___std__allocator_int__ myset423;
  struct std___Rb_tree_const_iterator_int_ it424;
  struct std___Rb_tree_const_iterator_int_ itlow425;
  struct std___Rb_tree_const_iterator_int_ itup426;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0427;
  int ref_tmp1428;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2429;
  int ref_tmp3430;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0431;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1432;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2433;
  int c434 = 0;
  __retval421 = c434;
  // array copy
  __builtin_memcpy(b422, __const_main_b, (unsigned long)9 * sizeof(__const_main_b[0]));
  int* cast435 = (int*)&(b422);
  int* cast436 = (int*)&(b422);
  int c437 = 9;
  int* ptr438 = &(cast436)[c437];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset423, cast435, ptr438);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it424);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itlow425);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itup426);
    int c439 = 30;
    ref_tmp1428 = c439;
    struct std___Rb_tree_const_iterator_int_ r440 = std__set_int__std__less_int___std__allocator_int_____upper_bound(&myset423, &ref_tmp1428);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset423);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0427 = r440;
    struct std___Rb_tree_const_iterator_int_* r441 = std___Rb_tree_const_iterator_int___operator_(&itlow425, &ref_tmp0427);
    int* r442 = std___Rb_tree_const_iterator_int___operator____const(&itlow425);
    int t443 = *r442;
    int c444 = 30;
    _Bool c445 = ((t443 != c444)) ? 1 : 0;
    if (c445) {
    } else {
      char* cast446 = (char*)&(_str);
      char* c447 = (char*)_str_1;
      unsigned int c448 = 21;
      char* cast449 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast446, c447, c448, cast449);
    }
    int c450 = 60;
    ref_tmp3430 = c450;
    struct std___Rb_tree_const_iterator_int_ r451 = std__set_int__std__less_int___std__allocator_int_____upper_bound(&myset423, &ref_tmp3430);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset423);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp2429 = r451;
    struct std___Rb_tree_const_iterator_int_* r452 = std___Rb_tree_const_iterator_int___operator_(&itup426, &ref_tmp2429);
    int* r453 = std___Rb_tree_const_iterator_int___operator____const(&itup426);
    int t454 = *r453;
    int c455 = 70;
    _Bool c456 = ((t454 != c455)) ? 1 : 0;
    if (c456) {
    } else {
      char* cast457 = (char*)&(_str_2);
      char* c458 = (char*)_str_1;
      unsigned int c459 = 23;
      char* cast460 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast457, c458, c459, cast460);
    }
    agg_tmp0431 = itlow425; // copy
    agg_tmp1432 = itup426; // copy
    struct std___Rb_tree_const_iterator_int_ t461 = agg_tmp0431;
    struct std___Rb_tree_const_iterator_int_ t462 = agg_tmp1432;
    struct std___Rb_tree_const_iterator_int_ r463 = std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset423, t461, t462);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset423);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2433 = r463;
    unsigned long r464 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset423);
    unsigned long c465 = 6;
    _Bool c466 = ((r464 == c465)) ? 1 : 0;
    if (c466) {
    } else {
      char* cast467 = (char*)&(_str_3);
      char* c468 = (char*)_str_1;
      unsigned int c469 = 26;
      char* cast470 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast467, c468, c469, cast470);
    }
    char* cast471 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast471);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset423);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp4473;
      struct std___Rb_tree_const_iterator_int_ ref_tmp5474;
      struct std___Rb_tree_const_iterator_int_ agg_tmp3475;
      struct std___Rb_tree_const_iterator_int_ r476 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset423);
      ref_tmp4473 = r476;
      struct std___Rb_tree_const_iterator_int_* r477 = std___Rb_tree_const_iterator_int___operator_(&it424, &ref_tmp4473);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r479 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset423);
        ref_tmp5474 = r479;
        _Bool r480 = std__operator___2(&it424, &ref_tmp5474);
        _Bool u481 = !r480;
        if (!u481) break;
        char* cast482 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r483 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast482);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset423);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r484 = std___Rb_tree_const_iterator_int___operator____const(&it424);
        int t485 = *r484;
        struct std__basic_ostream_char__std__char_traits_char__* r486 = std__ostream__operator__(r483, t485);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset423);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step478: ;
        int c487 = 0;
        struct std___Rb_tree_const_iterator_int_ r488 = std___Rb_tree_const_iterator_int___operator__(&it424, c487);
        agg_tmp3475 = r488;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r489 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset423);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c490 = 0;
    __retval421 = c490;
    int t491 = __retval421;
    int ret_val492 = t491;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset423);
    }
    return ret_val492;
  int t493 = __retval421;
  return t493;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v494) {
bb495: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this496;
  this496 = v494;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t497 = this496;
    struct std___Rb_tree_node_int_* r498 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t497);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t497, r498);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t497->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t497->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v499) {
bb500: ;
  struct std___Rb_tree_node_int_* this501;
  struct std___Rb_tree_node_int_* __retval502;
  this501 = v499;
  struct std___Rb_tree_node_int_* t503 = this501;
  __retval502 = t503;
  struct std___Rb_tree_node_int_* t504 = __retval502;
  return t504;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v505) {
bb506: ;
  struct std___Rb_tree_node_int_* __x507;
  struct std___Rb_tree_node_int_* __retval508;
  __x507 = v505;
  struct std___Rb_tree_node_int_* t509 = __x507;
  struct std___Rb_tree_node_base* base510 = (struct std___Rb_tree_node_base*)((char *)t509 + 0);
  struct std___Rb_tree_node_base* t511 = base510->_M_right;
  _Bool cast512 = (_Bool)t511;
  struct std___Rb_tree_node_int_* ternary513;
  if (cast512) {
    struct std___Rb_tree_node_int_* t514 = __x507;
    struct std___Rb_tree_node_base* base515 = (struct std___Rb_tree_node_base*)((char *)t514 + 0);
    struct std___Rb_tree_node_base* t516 = base515->_M_right;
    struct std___Rb_tree_node_int_* derived517 = (struct std___Rb_tree_node_int_*)((char *)t516 - 0);
    struct std___Rb_tree_node_int_* r518 = std___Rb_tree_node_int____M_node_ptr(derived517);
    ternary513 = (struct std___Rb_tree_node_int_*)r518;
  } else {
    struct std___Rb_tree_node_int_* c519 = ((void*)0);
    ternary513 = (struct std___Rb_tree_node_int_*)c519;
  }
  __retval508 = ternary513;
  struct std___Rb_tree_node_int_* t520 = __retval508;
  return t520;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v521) {
bb522: ;
  struct std___Rb_tree_node_int_* __x523;
  struct std___Rb_tree_node_int_* __retval524;
  __x523 = v521;
  struct std___Rb_tree_node_int_* t525 = __x523;
  struct std___Rb_tree_node_base* base526 = (struct std___Rb_tree_node_base*)((char *)t525 + 0);
  struct std___Rb_tree_node_base* t527 = base526->_M_left;
  _Bool cast528 = (_Bool)t527;
  struct std___Rb_tree_node_int_* ternary529;
  if (cast528) {
    struct std___Rb_tree_node_int_* t530 = __x523;
    struct std___Rb_tree_node_base* base531 = (struct std___Rb_tree_node_base*)((char *)t530 + 0);
    struct std___Rb_tree_node_base* t532 = base531->_M_left;
    struct std___Rb_tree_node_int_* derived533 = (struct std___Rb_tree_node_int_*)((char *)t532 - 0);
    struct std___Rb_tree_node_int_* r534 = std___Rb_tree_node_int____M_node_ptr(derived533);
    ternary529 = (struct std___Rb_tree_node_int_*)r534;
  } else {
    struct std___Rb_tree_node_int_* c535 = ((void*)0);
    ternary529 = (struct std___Rb_tree_node_int_*)c535;
  }
  __retval524 = ternary529;
  struct std___Rb_tree_node_int_* t536 = __retval524;
  return t536;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v537) {
bb538: ;
  int* __location539;
  __location539 = v537;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v540, int* v541) {
bb542: ;
  struct std__allocator_std___Rb_tree_node_int__* __a543;
  int* __p544;
  __a543 = v540;
  __p544 = v541;
  int* t545 = __p544;
  void_std__destroy_at_int_(t545);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v546) {
bb547: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this548;
  struct std__allocator_std___Rb_tree_node_int__* __retval549;
  this548 = v546;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t550 = this548;
  struct std__allocator_std___Rb_tree_node_int__* base551 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t550->_M_impl) + 0);
  __retval549 = base551;
  struct std__allocator_std___Rb_tree_node_int__* t552 = __retval549;
  return t552;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v553) {
bb554: ;
  struct __gnu_cxx____aligned_membuf_int_* this555;
  void* __retval556;
  this555 = v553;
  struct __gnu_cxx____aligned_membuf_int_* t557 = this555;
  void* cast558 = (void*)&(t557->_M_storage);
  __retval556 = cast558;
  void* t559 = __retval556;
  return t559;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v560) {
bb561: ;
  struct __gnu_cxx____aligned_membuf_int_* this562;
  int* __retval563;
  this562 = v560;
  struct __gnu_cxx____aligned_membuf_int_* t564 = this562;
  void* r565 = __gnu_cxx____aligned_membuf_int____M_addr(t564);
  int* cast566 = (int*)r565;
  __retval563 = cast566;
  int* t567 = __retval563;
  return t567;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v568) {
bb569: ;
  struct std___Rb_tree_node_int_* this570;
  int* __retval571;
  this570 = v568;
  struct std___Rb_tree_node_int_* t572 = this570;
  int* r573 = __gnu_cxx____aligned_membuf_int____M_ptr(&t572->_M_storage);
  __retval571 = r573;
  int* t574 = __retval571;
  return t574;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v575, struct std___Rb_tree_node_int_* v576) {
bb577: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this578;
  struct std___Rb_tree_node_int_* __p579;
  this578 = v575;
  __p579 = v576;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t580 = this578;
  struct std__allocator_std___Rb_tree_node_int__* r581 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t580);
  struct std___Rb_tree_node_int_* t582 = __p579;
  int* r583 = std___Rb_tree_node_int____M_valptr(t582);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r581, r583);
  struct std___Rb_tree_node_int_* t584 = __p579;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb585: ;
  _Bool __retval586;
    _Bool c587 = 0;
    __retval586 = c587;
    _Bool t588 = __retval586;
    return t588;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v589, struct std___Rb_tree_node_int_* v590, unsigned long v591) {
bb592: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this593;
  struct std___Rb_tree_node_int_* __p594;
  unsigned long __n595;
  this593 = v589;
  __p594 = v590;
  __n595 = v591;
  struct std____new_allocator_std___Rb_tree_node_int__* t596 = this593;
    unsigned long c597 = 8;
    unsigned long c598 = 16;
    _Bool c599 = ((c597 > c598)) ? 1 : 0;
    if (c599) {
      struct std___Rb_tree_node_int_* t600 = __p594;
      void* cast601 = (void*)t600;
      unsigned long t602 = __n595;
      unsigned long c603 = 40;
      unsigned long b604 = t602 * c603;
      unsigned long c605 = 8;
      operator_delete_3(cast601, b604, c605);
      return;
    }
  struct std___Rb_tree_node_int_* t606 = __p594;
  void* cast607 = (void*)t606;
  unsigned long t608 = __n595;
  unsigned long c609 = 40;
  unsigned long b610 = t608 * c609;
  operator_delete_2(cast607, b610);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v611, struct std___Rb_tree_node_int_* v612, unsigned long v613) {
bb614: ;
  struct std__allocator_std___Rb_tree_node_int__* this615;
  struct std___Rb_tree_node_int_* __p616;
  unsigned long __n617;
  this615 = v611;
  __p616 = v612;
  __n617 = v613;
  struct std__allocator_std___Rb_tree_node_int__* t618 = this615;
    _Bool r619 = std____is_constant_evaluated();
    if (r619) {
      struct std___Rb_tree_node_int_* t620 = __p616;
      void* cast621 = (void*)t620;
      operator_delete(cast621);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base622 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t618 + 0);
  struct std___Rb_tree_node_int_* t623 = __p616;
  unsigned long t624 = __n617;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base622, t623, t624);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v625, struct std___Rb_tree_node_int_* v626, unsigned long v627) {
bb628: ;
  struct std__allocator_std___Rb_tree_node_int__* __a629;
  struct std___Rb_tree_node_int_* __p630;
  unsigned long __n631;
  __a629 = v625;
  __p630 = v626;
  __n631 = v627;
  struct std__allocator_std___Rb_tree_node_int__* t632 = __a629;
  struct std___Rb_tree_node_int_* t633 = __p630;
  unsigned long t634 = __n631;
  std__allocator_std___Rb_tree_node_int_____deallocate(t632, t633, t634);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v635, struct std___Rb_tree_node_int_* v636) {
bb637: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this638;
  struct std___Rb_tree_node_int_* __p639;
  this638 = v635;
  __p639 = v636;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t640 = this638;
  struct std__allocator_std___Rb_tree_node_int__* r641 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t640);
  struct std___Rb_tree_node_int_* t642 = __p639;
  unsigned long c643 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r641, t642, c643);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v644, struct std___Rb_tree_node_int_* v645) {
bb646: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this647;
  struct std___Rb_tree_node_int_* __p648;
  this647 = v644;
  __p648 = v645;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t649 = this647;
  struct std___Rb_tree_node_int_* t650 = __p648;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t649, t650);
  struct std___Rb_tree_node_int_* t651 = __p648;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t649, t651);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v652, struct std___Rb_tree_node_int_* v653) {
bb654: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this655;
  struct std___Rb_tree_node_int_* __x656;
  this655 = v652;
  __x656 = v653;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t657 = this655;
    while (1) {
      struct std___Rb_tree_node_int_* t658 = __x656;
      _Bool cast659 = (_Bool)t658;
      if (!cast659) break;
        struct std___Rb_tree_node_int_* __y660;
        struct std___Rb_tree_node_int_* t661 = __x656;
        struct std___Rb_tree_node_int_* r662 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t661);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t657, r662);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t663 = __x656;
        struct std___Rb_tree_node_int_* r664 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t663);
        if (__cir_exc_active) {
          return;
        }
        __y660 = r664;
        struct std___Rb_tree_node_int_* t665 = __x656;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t657, t665);
        struct std___Rb_tree_node_int_* t666 = __y660;
        __x656 = t666;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v667) {
bb668: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this669;
  struct std___Rb_tree_node_int_* __retval670;
  struct std___Rb_tree_node_base* __begin671;
  this669 = v667;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t672 = this669;
  struct std___Rb_tree_header* base673 = (struct std___Rb_tree_header*)((char *)&(t672->_M_impl) + 8);
  struct std___Rb_tree_node_base* t674 = base673->_M_header._M_parent;
  __begin671 = t674;
  struct std___Rb_tree_node_base* t675 = __begin671;
  _Bool cast676 = (_Bool)t675;
  struct std___Rb_tree_node_int_* ternary677;
  if (cast676) {
    struct std___Rb_tree_node_base* t678 = __begin671;
    struct std___Rb_tree_node_int_* derived679 = (struct std___Rb_tree_node_int_*)((char *)t678 - 0);
    struct std___Rb_tree_node_int_* r680 = std___Rb_tree_node_int____M_node_ptr(derived679);
    ternary677 = (struct std___Rb_tree_node_int_*)r680;
  } else {
    struct std___Rb_tree_node_int_* c681 = ((void*)0);
    ternary677 = (struct std___Rb_tree_node_int_*)c681;
  }
  __retval670 = ternary677;
  struct std___Rb_tree_node_int_* t682 = __retval670;
  return t682;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v683) {
bb684: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this685;
  this685 = v683;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t686 = this685;
  {
    struct std__allocator_std___Rb_tree_node_int__* base687 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t686 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base687);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v688) {
bb689: ;
  struct std__allocator_std___Rb_tree_node_int__* this690;
  this690 = v688;
  struct std__allocator_std___Rb_tree_node_int__* t691 = this690;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v692) {
bb693: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this694;
  this694 = v692;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t695 = this694;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t695->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v696, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v697) {
bb698: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this699;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t700;
  this699 = v696;
  __t700 = v697;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t701 = this699;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t702 = __t700;
  t701->_M_t = t702;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v703) {
bb704: ;
  struct std___Rb_tree_node_base* this705;
  struct std___Rb_tree_node_base* __retval706;
  this705 = v703;
  struct std___Rb_tree_node_base* t707 = this705;
  __retval706 = t707;
  struct std___Rb_tree_node_base* t708 = __retval706;
  return t708;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v709) {
bb710: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this711;
  struct std___Rb_tree_node_base* __retval712;
  this711 = v709;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t713 = this711;
  struct std___Rb_tree_header* base714 = (struct std___Rb_tree_header*)((char *)&(t713->_M_impl) + 8);
  struct std___Rb_tree_node_base* r715 = std___Rb_tree_node_base___M_base_ptr___const(&base714->_M_header);
  __retval712 = r715;
  struct std___Rb_tree_node_base* t716 = __retval712;
  return t716;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v717) {
bb718: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this719;
  unsigned long __retval720;
  this719 = v717;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t721 = this719;
  struct std___Rb_tree_header* base722 = (struct std___Rb_tree_header*)((char *)&(t721->_M_impl) + 8);
  unsigned long t723 = base722->_M_node_count;
  __retval720 = t723;
  unsigned long t724 = __retval720;
  return t724;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v725, int* v726, int* v727) {
bb728: ;
  struct std__less_int_* this729;
  int* __x730;
  int* __y731;
  _Bool __retval732;
  this729 = v725;
  __x730 = v726;
  __y731 = v727;
  struct std__less_int_* t733 = this729;
  int* t734 = __x730;
  int t735 = *t734;
  int* t736 = __y731;
  int t737 = *t736;
  _Bool c738 = ((t735 < t737)) ? 1 : 0;
  __retval732 = c738;
  _Bool t739 = __retval732;
  return t739;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v740, int* v741) {
bb742: ;
  struct std___Identity_int_* this743;
  int* __x744;
  int* __retval745;
  this743 = v740;
  __x744 = v741;
  struct std___Identity_int_* t746 = this743;
  int* t747 = __x744;
  __retval745 = t747;
  int* t748 = __retval745;
  return t748;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v749) {
bb750: ;
  struct __gnu_cxx____aligned_membuf_int_* this751;
  void* __retval752;
  this751 = v749;
  struct __gnu_cxx____aligned_membuf_int_* t753 = this751;
  void* cast754 = (void*)&(t753->_M_storage);
  __retval752 = cast754;
  void* t755 = __retval752;
  return t755;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v756) {
bb757: ;
  struct __gnu_cxx____aligned_membuf_int_* this758;
  int* __retval759;
  this758 = v756;
  struct __gnu_cxx____aligned_membuf_int_* t760 = this758;
  void* r761 = __gnu_cxx____aligned_membuf_int____M_addr___const(t760);
  int* cast762 = (int*)r761;
  __retval759 = cast762;
  int* t763 = __retval759;
  return t763;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v764) {
bb765: ;
  struct std___Rb_tree_node_int_* this766;
  int* __retval767;
  this766 = v764;
  struct std___Rb_tree_node_int_* t768 = this766;
  int* r769 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t768->_M_storage);
  __retval767 = r769;
  int* t770 = __retval767;
  return t770;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v771) {
bb772: ;
  struct std___Rb_tree_node_int_* __node773;
  int* __retval774;
  struct std___Identity_int_ ref_tmp0775;
  __node773 = v771;
  struct std___Rb_tree_node_int_* t776 = __node773;
  int* r777 = std___Rb_tree_node_int____M_valptr___const(t776);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r778 = std___Identity_int___operator___int_const___const(&ref_tmp0775, r777);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval774 = r778;
  int* t779 = __retval774;
  return t779;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v780) {
bb781: ;
  struct std___Rb_tree_node_base* __x782;
  int* __retval783;
  __x782 = v780;
  struct std___Rb_tree_node_base* t784 = __x782;
  struct std___Rb_tree_node_int_* derived785 = (struct std___Rb_tree_node_int_*)((char *)t784 - 0);
  int* r786 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived785);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval783 = r786;
  int* t787 = __retval783;
  return t787;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v788) {
bb789: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this790;
  struct std___Rb_tree_node_base** __retval791;
  this790 = v788;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t792 = this790;
  struct std___Rb_tree_header* base793 = (struct std___Rb_tree_header*)((char *)&(t792->_M_impl) + 8);
  __retval791 = &base793->_M_header._M_right;
  struct std___Rb_tree_node_base** t794 = __retval791;
  return t794;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v795, struct std___Rb_tree_node_base** v796, struct std___Rb_tree_node_base** v797) {
bb798: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this799;
  struct std___Rb_tree_node_base** __x800;
  struct std___Rb_tree_node_base** __y801;
  this799 = v795;
  __x800 = v796;
  __y801 = v797;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t802 = this799;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base803 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t802 + 0);
  struct std___Rb_tree_node_base** t804 = __x800;
  struct std___Rb_tree_node_base* t805 = *t804;
  t802->first = t805;
  struct std___Rb_tree_node_base** t806 = __y801;
  struct std___Rb_tree_node_base* t807 = *t806;
  t802->second = t807;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v808) {
bb809: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this810;
  struct std___Rb_tree_node_base* __retval811;
  this810 = v808;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t812 = this810;
  struct std___Rb_tree_header* base813 = (struct std___Rb_tree_header*)((char *)&(t812->_M_impl) + 8);
  struct std___Rb_tree_node_base* t814 = base813->_M_header._M_parent;
  __retval811 = t814;
  struct std___Rb_tree_node_base* t815 = __retval811;
  return t815;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v816) {
bb817: ;
  struct std___Rb_tree_node_base* __x818;
  struct std___Rb_tree_node_base* __retval819;
  __x818 = v816;
  struct std___Rb_tree_node_base* t820 = __x818;
  struct std___Rb_tree_node_base* t821 = t820->_M_left;
  __retval819 = t821;
  struct std___Rb_tree_node_base* t822 = __retval819;
  return t822;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v823, struct std___Rb_tree_iterator_int_* v824) {
bb825: ;
  struct std___Rb_tree_iterator_int_* __x826;
  struct std___Rb_tree_iterator_int_* __y827;
  _Bool __retval828;
  __x826 = v823;
  __y827 = v824;
  struct std___Rb_tree_iterator_int_* t829 = __x826;
  struct std___Rb_tree_node_base* t830 = t829->_M_node;
  struct std___Rb_tree_iterator_int_* t831 = __y827;
  struct std___Rb_tree_node_base* t832 = t831->_M_node;
  _Bool c833 = ((t830 == t832)) ? 1 : 0;
  __retval828 = c833;
  _Bool t834 = __retval828;
  return t834;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v835) {
bb836: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this837;
  struct std___Rb_tree_iterator_int_ __retval838;
  this837 = v835;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t839 = this837;
  struct std___Rb_tree_header* base840 = (struct std___Rb_tree_header*)((char *)&(t839->_M_impl) + 8);
  struct std___Rb_tree_node_base* t841 = base840->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval838, t841);
  struct std___Rb_tree_iterator_int_ t842 = __retval838;
  return t842;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v843, int* v844) {
bb845: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this846;
  int* __k847;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval848;
  struct std___Rb_tree_node_base* __x849;
  struct std___Rb_tree_node_base* __y850;
  _Bool __comp851;
  struct std___Rb_tree_iterator_int_ __j852;
  struct std___Rb_tree_node_base* ref_tmp1853;
  this846 = v843;
  __k847 = v844;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t854 = this846;
  struct std___Rb_tree_node_base* r855 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t854);
  __x849 = r855;
  struct std___Rb_tree_node_base* r856 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t854);
  __y850 = r856;
  _Bool c857 = 1;
  __comp851 = c857;
    while (1) {
      struct std___Rb_tree_node_base* t858 = __x849;
      _Bool cast859 = (_Bool)t858;
      if (!cast859) break;
        struct std___Rb_tree_node_base* t860 = __x849;
        __y850 = t860;
        struct std___Rb_tree_key_compare_std__less_int__* base861 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t854->_M_impl) + 0);
        struct std__less_int_* cast862 = (struct std__less_int_*)base861;
        int* t863 = __k847;
        struct std___Rb_tree_node_base* t864 = __x849;
        int* r865 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t864);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r866 = std__less_int___operator___int_const___int_const___const(cast862, t863, r865);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp851 = r866;
        _Bool t867 = __comp851;
        struct std___Rb_tree_node_base* ternary868;
        if (t867) {
          struct std___Rb_tree_node_base* t869 = __x849;
          struct std___Rb_tree_node_base* r870 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t869);
          ternary868 = (struct std___Rb_tree_node_base*)r870;
        } else {
          struct std___Rb_tree_node_base* t871 = __x849;
          struct std___Rb_tree_node_base* r872 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t871);
          ternary868 = (struct std___Rb_tree_node_base*)r872;
        }
        __x849 = ternary868;
    }
  struct std___Rb_tree_node_base* t873 = __y850;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j852, t873);
    _Bool t874 = __comp851;
    if (t874) {
        struct std___Rb_tree_iterator_int_ ref_tmp0875;
        struct std___Rb_tree_iterator_int_ r876 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t854);
        ref_tmp0875 = r876;
        _Bool r877 = std__operator__(&__j852, &ref_tmp0875);
        if (r877) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval848, &__x849, &__y850);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t878 = __retval848;
          return t878;
        } else {
          struct std___Rb_tree_iterator_int_* r879 = std___Rb_tree_iterator_int___operator__(&__j852);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base880 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t854->_M_impl) + 0);
    struct std__less_int_* cast881 = (struct std__less_int_*)base880;
    struct std___Rb_tree_node_base* t882 = __j852._M_node;
    int* r883 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t882);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t884 = __k847;
    _Bool r885 = std__less_int___operator___int_const___int_const___const(cast881, r883, t884);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r885) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval848, &__x849, &__y850);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t886 = __retval848;
      return t886;
    }
  struct std___Rb_tree_node_base* c887 = ((void*)0);
  ref_tmp1853 = c887;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval848, &__j852._M_node, &ref_tmp1853);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t888 = __retval848;
  return t888;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v889) {
bb890: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this891;
  struct std___Rb_tree_node_base** __retval892;
  this891 = v889;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t893 = this891;
  struct std___Rb_tree_header* base894 = (struct std___Rb_tree_header*)((char *)&(t893->_M_impl) + 8);
  __retval892 = &base894->_M_header._M_left;
  struct std___Rb_tree_node_base** t895 = __retval892;
  return t895;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v896, struct std___Rb_tree_node_base** v897, struct std___Rb_tree_node_base** v898) {
bb899: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this900;
  struct std___Rb_tree_node_base** __x901;
  struct std___Rb_tree_node_base** __y902;
  this900 = v896;
  __x901 = v897;
  __y902 = v898;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t903 = this900;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base904 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t903 + 0);
  struct std___Rb_tree_node_base** t905 = __x901;
  struct std___Rb_tree_node_base* t906 = *t905;
  t903->first = t906;
  struct std___Rb_tree_node_base** t907 = __y902;
  struct std___Rb_tree_node_base* t908 = *t907;
  t903->second = t908;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v909) {
bb910: ;
  struct std___Rb_tree_iterator_int_* this911;
  struct std___Rb_tree_iterator_int_* __retval912;
  this911 = v909;
  struct std___Rb_tree_iterator_int_* t913 = this911;
  struct std___Rb_tree_node_base* t914 = t913->_M_node;
  struct std___Rb_tree_node_base* r915 = std___Rb_tree_decrement(t914);
  t913->_M_node = r915;
  __retval912 = t913;
  struct std___Rb_tree_iterator_int_* t916 = __retval912;
  return t916;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v917) {
bb918: ;
  struct std___Rb_tree_node_base* __x919;
  struct std___Rb_tree_node_base* __retval920;
  __x919 = v917;
  struct std___Rb_tree_node_base* t921 = __x919;
  struct std___Rb_tree_node_base* t922 = t921->_M_right;
  __retval920 = t922;
  struct std___Rb_tree_node_base* t923 = __retval920;
  return t923;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v924) {
bb925: ;
  struct std___Rb_tree_iterator_int_* this926;
  struct std___Rb_tree_iterator_int_* __retval927;
  this926 = v924;
  struct std___Rb_tree_iterator_int_* t928 = this926;
  struct std___Rb_tree_node_base* t929 = t928->_M_node;
  struct std___Rb_tree_node_base* r930 = std___Rb_tree_increment(t929);
  t928->_M_node = r930;
  __retval927 = t928;
  struct std___Rb_tree_iterator_int_* t931 = __retval927;
  return t931;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v932, struct std___Rb_tree_node_base** v933, struct std___Rb_tree_node_base** v934) {
bb935: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this936;
  struct std___Rb_tree_node_base** __x937;
  struct std___Rb_tree_node_base** __y938;
  this936 = v932;
  __x937 = v933;
  __y938 = v934;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t939 = this936;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base940 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t939 + 0);
  struct std___Rb_tree_node_base** t941 = __x937;
  struct std___Rb_tree_node_base* t942 = *t941;
  t939->first = t942;
  struct std___Rb_tree_node_base** t943 = __y938;
  struct std___Rb_tree_node_base* t944 = *t943;
  t939->second = t944;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v945, struct std___Rb_tree_const_iterator_int_ v946, int* v947) {
bb948: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this949;
  struct std___Rb_tree_const_iterator_int_ __position950;
  int* __k951;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval952;
  this949 = v945;
  __position950 = v946;
  __k951 = v947;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t953 = this949;
    struct std___Rb_tree_node_base* t954 = __position950._M_node;
    struct std___Rb_tree_node_base* r955 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t953);
    _Bool c956 = ((t954 == r955)) ? 1 : 0;
    if (c956) {
        unsigned long r957 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t953);
        unsigned long c958 = 0;
        _Bool c959 = ((r957 > c958)) ? 1 : 0;
        _Bool ternary960;
        if (c959) {
          struct std___Rb_tree_key_compare_std__less_int__* base961 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t953->_M_impl) + 0);
          struct std__less_int_* cast962 = (struct std__less_int_*)base961;
          struct std___Rb_tree_node_base** r963 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t953);
          struct std___Rb_tree_node_base* t964 = *r963;
          int* r965 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t964);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t966 = __k951;
          _Bool r967 = std__less_int___operator___int_const___int_const___const(cast962, r965, t966);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary960 = (_Bool)r967;
        } else {
          _Bool c968 = 0;
          ternary960 = (_Bool)c968;
        }
        if (ternary960) {
          struct std___Rb_tree_node_base* ref_tmp0969;
          struct std___Rb_tree_node_base* c970 = ((void*)0);
          ref_tmp0969 = c970;
          struct std___Rb_tree_node_base** r971 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t953);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &ref_tmp0969, r971);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t972 = __retval952;
          return t972;
        } else {
          int* t973 = __k951;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r974 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t953, t973);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval952 = r974;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t975 = __retval952;
          return t975;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base976 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t953->_M_impl) + 0);
        struct std__less_int_* cast977 = (struct std__less_int_*)base976;
        int* t978 = __k951;
        struct std___Rb_tree_node_base* t979 = __position950._M_node;
        int* r980 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t979);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r981 = std__less_int___operator___int_const___int_const___const(cast977, t978, r980);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r981) {
          struct std___Rb_tree_iterator_int_ __before982;
          struct std___Rb_tree_node_base* t983 = __position950._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before982, t983);
            struct std___Rb_tree_node_base* t984 = __position950._M_node;
            struct std___Rb_tree_node_base** r985 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t953);
            struct std___Rb_tree_node_base* t986 = *r985;
            _Bool c987 = ((t984 == t986)) ? 1 : 0;
            if (c987) {
              struct std___Rb_tree_node_base** r988 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t953);
              struct std___Rb_tree_node_base** r989 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t953);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, r988, r989);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t990 = __retval952;
              return t990;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base991 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t953->_M_impl) + 0);
                struct std__less_int_* cast992 = (struct std__less_int_*)base991;
                struct std___Rb_tree_iterator_int_* r993 = std___Rb_tree_iterator_int___operator__(&__before982);
                struct std___Rb_tree_node_base* t994 = r993->_M_node;
                int* r995 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t994);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t996 = __k951;
                _Bool r997 = std__less_int___operator___int_const___int_const___const(cast992, r995, t996);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r997) {
                    struct std___Rb_tree_node_base* t998 = __before982._M_node;
                    struct std___Rb_tree_node_base* r999 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t998);
                    _Bool cast1000 = (_Bool)r999;
                    _Bool u1001 = !cast1000;
                    if (u1001) {
                      struct std___Rb_tree_node_base* ref_tmp11002;
                      struct std___Rb_tree_node_base* c1003 = ((void*)0);
                      ref_tmp11002 = c1003;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &ref_tmp11002, &__before982._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1004 = __retval952;
                      return t1004;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &__position950._M_node, &__position950._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1005 = __retval952;
                      return t1005;
                    }
                } else {
                  int* t1006 = __k951;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1007 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t953, t1006);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval952 = r1007;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1008 = __retval952;
                  return t1008;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base1009 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t953->_M_impl) + 0);
            struct std__less_int_* cast1010 = (struct std__less_int_*)base1009;
            struct std___Rb_tree_node_base* t1011 = __position950._M_node;
            int* r1012 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1011);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t1013 = __k951;
            _Bool r1014 = std__less_int___operator___int_const___int_const___const(cast1010, r1012, t1013);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r1014) {
              struct std___Rb_tree_iterator_int_ __after1015;
              struct std___Rb_tree_node_base* t1016 = __position950._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1015, t1016);
                struct std___Rb_tree_node_base* t1017 = __position950._M_node;
                struct std___Rb_tree_node_base** r1018 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t953);
                struct std___Rb_tree_node_base* t1019 = *r1018;
                _Bool c1020 = ((t1017 == t1019)) ? 1 : 0;
                if (c1020) {
                  struct std___Rb_tree_node_base* ref_tmp21021;
                  struct std___Rb_tree_node_base* c1022 = ((void*)0);
                  ref_tmp21021 = c1022;
                  struct std___Rb_tree_node_base** r1023 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t953);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &ref_tmp21021, r1023);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1024 = __retval952;
                  return t1024;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base1025 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t953->_M_impl) + 0);
                    struct std__less_int_* cast1026 = (struct std__less_int_*)base1025;
                    int* t1027 = __k951;
                    struct std___Rb_tree_iterator_int_* r1028 = std___Rb_tree_iterator_int___operator___2(&__after1015);
                    struct std___Rb_tree_node_base* t1029 = r1028->_M_node;
                    int* r1030 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1029);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r1031 = std__less_int___operator___int_const___int_const___const(cast1026, t1027, r1030);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r1031) {
                        struct std___Rb_tree_node_base* t1032 = __position950._M_node;
                        struct std___Rb_tree_node_base* r1033 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1032);
                        _Bool cast1034 = (_Bool)r1033;
                        _Bool u1035 = !cast1034;
                        if (u1035) {
                          struct std___Rb_tree_node_base* ref_tmp31036;
                          struct std___Rb_tree_node_base* c1037 = ((void*)0);
                          ref_tmp31036 = c1037;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &ref_tmp31036, &__position950._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1038 = __retval952;
                          return t1038;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &__after1015._M_node, &__after1015._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1039 = __retval952;
                          return t1039;
                        }
                    } else {
                      int* t1040 = __k951;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1041 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t953, t1040);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval952 = r1041;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1042 = __retval952;
                      return t1042;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp41043;
              struct std___Rb_tree_node_base* c1044 = ((void*)0);
              ref_tmp41043 = c1044;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval952, &__position950._M_node, &ref_tmp41043);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1045 = __retval952;
              return t1045;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1046, int* v1047) {
bb1048: ;
  struct std___Identity_int_* this1049;
  int* __x1050;
  int* __retval1051;
  this1049 = v1046;
  __x1050 = v1047;
  struct std___Identity_int_* t1052 = this1049;
  int* t1053 = __x1050;
  __retval1051 = t1053;
  int* t1054 = __retval1051;
  return t1054;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1055) {
bb1056: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1057;
  unsigned long __retval1058;
  this1057 = v1055;
  struct std____new_allocator_std___Rb_tree_node_int__* t1059 = this1057;
  unsigned long c1060 = 9223372036854775807;
  unsigned long c1061 = 40;
  unsigned long b1062 = c1060 / c1061;
  __retval1058 = b1062;
  unsigned long t1063 = __retval1058;
  return t1063;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1064, unsigned long v1065, void* v1066) {
bb1067: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1068;
  unsigned long __n1069;
  void* unnamed1070;
  struct std___Rb_tree_node_int_* __retval1071;
  this1068 = v1064;
  __n1069 = v1065;
  unnamed1070 = v1066;
  struct std____new_allocator_std___Rb_tree_node_int__* t1072 = this1068;
    unsigned long t1073 = __n1069;
    unsigned long r1074 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1072);
    _Bool c1075 = ((t1073 > r1074)) ? 1 : 0;
    if (c1075) {
        unsigned long t1076 = __n1069;
        unsigned long c1077 = -1;
        unsigned long c1078 = 40;
        unsigned long b1079 = c1077 / c1078;
        _Bool c1080 = ((t1076 > b1079)) ? 1 : 0;
        if (c1080) {
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
    unsigned long c1081 = 8;
    unsigned long c1082 = 16;
    _Bool c1083 = ((c1081 > c1082)) ? 1 : 0;
    if (c1083) {
      unsigned long __al1084;
      unsigned long c1085 = 8;
      __al1084 = c1085;
      unsigned long t1086 = __n1069;
      unsigned long c1087 = 40;
      unsigned long b1088 = t1086 * c1087;
      unsigned long t1089 = __al1084;
      void* r1090 = operator_new_2(b1088, t1089);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1091 = (struct std___Rb_tree_node_int_*)r1090;
      __retval1071 = cast1091;
      struct std___Rb_tree_node_int_* t1092 = __retval1071;
      return t1092;
    }
  unsigned long t1093 = __n1069;
  unsigned long c1094 = 40;
  unsigned long b1095 = t1093 * c1094;
  void* r1096 = operator_new(b1095);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1097 = (struct std___Rb_tree_node_int_*)r1096;
  __retval1071 = cast1097;
  struct std___Rb_tree_node_int_* t1098 = __retval1071;
  return t1098;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1099, unsigned long v1100) {
bb1101: ;
  struct std__allocator_std___Rb_tree_node_int__* this1102;
  unsigned long __n1103;
  struct std___Rb_tree_node_int_* __retval1104;
  this1102 = v1099;
  __n1103 = v1100;
  struct std__allocator_std___Rb_tree_node_int__* t1105 = this1102;
    _Bool r1106 = std____is_constant_evaluated();
    if (r1106) {
        unsigned long t1107 = __n1103;
        unsigned long c1108 = 40;
        unsigned long ovr1109;
        _Bool ovf1110 = __builtin_mul_overflow(t1107, c1108, &ovr1109);
        __n1103 = ovr1109;
        if (ovf1110) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1111 = __n1103;
      void* r1112 = operator_new(t1111);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1113 = (struct std___Rb_tree_node_int_*)r1112;
      __retval1104 = cast1113;
      struct std___Rb_tree_node_int_* t1114 = __retval1104;
      return t1114;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1115 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1105 + 0);
  unsigned long t1116 = __n1103;
  void* c1117 = ((void*)0);
  struct std___Rb_tree_node_int_* r1118 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1115, t1116, c1117);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1104 = r1118;
  struct std___Rb_tree_node_int_* t1119 = __retval1104;
  return t1119;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1120, unsigned long v1121) {
bb1122: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1123;
  unsigned long __n1124;
  struct std___Rb_tree_node_int_* __retval1125;
  __a1123 = v1120;
  __n1124 = v1121;
  struct std__allocator_std___Rb_tree_node_int__* t1126 = __a1123;
  unsigned long t1127 = __n1124;
  struct std___Rb_tree_node_int_* r1128 = std__allocator_std___Rb_tree_node_int_____allocate(t1126, t1127);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1125 = r1128;
  struct std___Rb_tree_node_int_* t1129 = __retval1125;
  return t1129;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1130) {
bb1131: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1132;
  struct std___Rb_tree_node_int_* __retval1133;
  this1132 = v1130;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1134 = this1132;
  struct std__allocator_std___Rb_tree_node_int__* r1135 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1134);
  unsigned long c1136 = 1;
  struct std___Rb_tree_node_int_* r1137 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1135, c1136);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1133 = r1137;
  struct std___Rb_tree_node_int_* t1138 = __retval1133;
  return t1138;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1139, int* v1140) {
bb1141: ;
  int* __location1142;
  int* __args1143;
  int* __retval1144;
  void* __loc1145;
  __location1142 = v1139;
  __args1143 = v1140;
  int* t1146 = __location1142;
  void* cast1147 = (void*)t1146;
  __loc1145 = cast1147;
    void* t1148 = __loc1145;
    int* cast1149 = (int*)t1148;
    int* t1150 = __args1143;
    int t1151 = *t1150;
    *cast1149 = t1151;
    __retval1144 = cast1149;
    int* t1152 = __retval1144;
    return t1152;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1153, int* v1154, int* v1155) {
bb1156: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1157;
  int* __p1158;
  int* __args1159;
  __a1157 = v1153;
  __p1158 = v1154;
  __args1159 = v1155;
  int* t1160 = __p1158;
  int* t1161 = __args1159;
  int* r1162 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1160, t1161);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1163, struct std___Rb_tree_node_int_* v1164, int* v1165) {
bb1166: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1167;
  struct std___Rb_tree_node_int_* __node1168;
  int* __args1169;
  this1167 = v1163;
  __node1168 = v1164;
  __args1169 = v1165;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1170 = this1167;
      struct std__allocator_std___Rb_tree_node_int__* r1172 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1170);
      struct std___Rb_tree_node_int_* t1173 = __node1168;
      int* r1174 = std___Rb_tree_node_int____M_valptr(t1173);
      if (__cir_exc_active) {
        goto cir_try_dispatch1171;
      }
      int* t1175 = __args1169;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1172, r1174, t1175);
    cir_try_dispatch1171: ;
    if (__cir_exc_active) {
    {
      int ca_tok1176 = 0;
      void* ca_exn1177 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1178 = __node1168;
        struct std___Rb_tree_node_int_* t1179 = __node1168;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1170, t1179);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1180, int* v1181) {
bb1182: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1183;
  int* __args1184;
  struct std___Rb_tree_node_int_* __retval1185;
  struct std___Rb_tree_node_int_* __tmp1186;
  this1183 = v1180;
  __args1184 = v1181;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1187 = this1183;
  struct std___Rb_tree_node_int_* r1188 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1187);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1186 = r1188;
  struct std___Rb_tree_node_int_* t1189 = __tmp1186;
  int* t1190 = __args1184;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1187, t1189, t1190);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1191 = __tmp1186;
  __retval1185 = t1191;
  struct std___Rb_tree_node_int_* t1192 = __retval1185;
  return t1192;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1193, int* v1194) {
bb1195: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1196;
  int* __arg1197;
  struct std___Rb_tree_node_int_* __retval1198;
  this1196 = v1193;
  __arg1197 = v1194;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1199 = this1196;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1200 = t1199->_M_t;
  int* t1201 = __arg1197;
  struct std___Rb_tree_node_int_* r1202 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1200, t1201);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1198 = r1202;
  struct std___Rb_tree_node_int_* t1203 = __retval1198;
  return t1203;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1204, struct std___Rb_tree_node_base* v1205, struct std___Rb_tree_node_base* v1206, struct std___Rb_tree_node_base* v1207) {
bb1208: ;
  _Bool __insert_left1209;
  struct std___Rb_tree_node_base* __x1210;
  struct std___Rb_tree_node_base* __p1211;
  struct std___Rb_tree_node_base* __header1212;
  __insert_left1209 = v1204;
  __x1210 = v1205;
  __p1211 = v1206;
  __header1212 = v1207;
  _Bool t1213 = __insert_left1209;
  struct std___Rb_tree_node_base* t1214 = __x1210;
  struct std___Rb_tree_node_base* t1215 = __p1211;
  struct std___Rb_tree_node_base* t1216 = __header1212;
  std___Rb_tree_insert_and_rebalance(t1213, t1214, t1215, t1216);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1217, struct std___Rb_tree_node_base* v1218, struct std___Rb_tree_node_base* v1219, int* v1220, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1221) {
bb1222: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1223;
  struct std___Rb_tree_node_base* __x1224;
  struct std___Rb_tree_node_base* __p1225;
  int* __v1226;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1227;
  struct std___Rb_tree_iterator_int_ __retval1228;
  _Bool __insert_left1229;
  struct std___Rb_tree_node_base* __z1230;
  this1223 = v1217;
  __x1224 = v1218;
  __p1225 = v1219;
  __v1226 = v1220;
  __node_gen1227 = v1221;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1231 = this1223;
  struct std___Rb_tree_node_base* t1232 = __x1224;
  _Bool cast1233 = (_Bool)t1232;
  _Bool ternary1234;
  if (cast1233) {
    _Bool c1235 = 1;
    ternary1234 = (_Bool)c1235;
  } else {
    struct std___Rb_tree_node_base* t1236 = __p1225;
    struct std___Rb_tree_node_base* r1237 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1231);
    _Bool c1238 = ((t1236 == r1237)) ? 1 : 0;
    ternary1234 = (_Bool)c1238;
  }
  _Bool ternary1239;
  if (ternary1234) {
    _Bool c1240 = 1;
    ternary1239 = (_Bool)c1240;
  } else {
    struct std___Identity_int_ ref_tmp01241;
    struct std___Rb_tree_key_compare_std__less_int__* base1242 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1231->_M_impl) + 0);
    struct std__less_int_* cast1243 = (struct std__less_int_*)base1242;
    int* t1244 = __v1226;
    int* r1245 = std___Identity_int___operator___int___const(&ref_tmp01241, t1244);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1246 = __p1225;
    int* r1247 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1246);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1248 = std__less_int___operator___int_const___int_const___const(cast1243, r1245, r1247);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1239 = (_Bool)r1248;
  }
  __insert_left1229 = ternary1239;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1249 = __node_gen1227;
  int* t1250 = __v1226;
  struct std___Rb_tree_node_int_* r1251 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1249, t1250);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1252 = (struct std___Rb_tree_node_base*)((char *)r1251 + 0);
  struct std___Rb_tree_node_base* r1253 = std___Rb_tree_node_base___M_base_ptr___const(base1252);
  __z1230 = r1253;
  _Bool t1254 = __insert_left1229;
  struct std___Rb_tree_node_base* t1255 = __z1230;
  struct std___Rb_tree_node_base* t1256 = __p1225;
  struct std___Rb_tree_header* base1257 = (struct std___Rb_tree_header*)((char *)&(t1231->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1254, t1255, t1256, &base1257->_M_header);
  struct std___Rb_tree_header* base1258 = (struct std___Rb_tree_header*)((char *)&(t1231->_M_impl) + 8);
  unsigned long t1259 = base1258->_M_node_count;
  unsigned long u1260 = t1259 + 1;
  base1258->_M_node_count = u1260;
  struct std___Rb_tree_node_base* t1261 = __z1230;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1228, t1261);
  struct std___Rb_tree_iterator_int_ t1262 = __retval1228;
  return t1262;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1263, struct std___Rb_tree_node_base* v1264) {
bb1265: ;
  struct std___Rb_tree_iterator_int_* this1266;
  struct std___Rb_tree_node_base* __x1267;
  this1266 = v1263;
  __x1267 = v1264;
  struct std___Rb_tree_iterator_int_* t1268 = this1266;
  struct std___Rb_tree_node_base* t1269 = __x1267;
  t1268->_M_node = t1269;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1270, struct std___Rb_tree_const_iterator_int_ v1271, int* v1272, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1273) {
bb1274: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1275;
  struct std___Rb_tree_const_iterator_int_ __position1276;
  int* __v1277;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1278;
  struct std___Rb_tree_iterator_int_ __retval1279;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1280;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01281;
  struct std___Identity_int_ ref_tmp01282;
  this1275 = v1270;
  __position1276 = v1271;
  __v1277 = v1272;
  __node_gen1278 = v1273;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1283 = this1275;
  agg_tmp01281 = __position1276; // copy
  int* t1284 = __v1277;
  int* r1285 = std___Identity_int___operator___int___const(&ref_tmp01282, t1284);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1286 = agg_tmp01281;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1287 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1283, t1286, r1285);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1280 = r1287;
    struct std___Rb_tree_node_base* t1288 = __res1280.second;
    _Bool cast1289 = (_Bool)t1288;
    if (cast1289) {
      struct std___Rb_tree_node_base* t1290 = __res1280.first;
      struct std___Rb_tree_node_base* t1291 = __res1280.second;
      int* t1292 = __v1277;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1293 = __node_gen1278;
      struct std___Rb_tree_iterator_int_ r1294 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1283, t1290, t1291, t1292, t1293);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1279 = r1294;
      struct std___Rb_tree_iterator_int_ t1295 = __retval1279;
      return t1295;
    }
  struct std___Rb_tree_node_base* t1296 = __res1280.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1279, t1296);
  struct std___Rb_tree_iterator_int_ t1297 = __retval1279;
  return t1297;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1298) {
bb1299: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1300;
  struct std___Rb_tree_iterator_int_ __retval1301;
  this1300 = v1298;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1302 = this1300;
  struct std___Rb_tree_node_base* r1303 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1302);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1301, r1303);
  struct std___Rb_tree_iterator_int_ t1304 = __retval1301;
  return t1304;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1305, struct std___Rb_tree_iterator_int_* v1306) {
bb1307: ;
  struct std___Rb_tree_const_iterator_int_* this1308;
  struct std___Rb_tree_iterator_int_* __it1309;
  this1308 = v1305;
  __it1309 = v1306;
  struct std___Rb_tree_const_iterator_int_* t1310 = this1308;
  struct std___Rb_tree_iterator_int_* t1311 = __it1309;
  struct std___Rb_tree_node_base* t1312 = t1311->_M_node;
  t1310->_M_node = t1312;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1313, int* v1314, int* v1315) {
bb1316: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1317;
  int* __first1318;
  int* __last1319;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1320;
  this1317 = v1313;
  __first1318 = v1314;
  __last1319 = v1315;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1321 = this1317;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1320, t1321);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01322;
    struct std___Rb_tree_iterator_int_ ref_tmp01323;
    struct std___Rb_tree_iterator_int_ agg_tmp11324;
    while (1) {
      int* t1326 = __first1318;
      int* t1327 = __last1319;
      _Bool c1328 = ((t1326 != t1327)) ? 1 : 0;
      if (!c1328) break;
      struct std___Rb_tree_iterator_int_ r1329 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1321);
      ref_tmp01323 = r1329;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01322, &ref_tmp01323);
      int* t1330 = __first1318;
      struct std___Rb_tree_const_iterator_int_ t1331 = agg_tmp01322;
      struct std___Rb_tree_iterator_int_ r1332 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1321, t1331, t1330, &__an1320);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11324 = r1332;
    for_step1325: ;
      int* t1333 = __first1318;
      int c1334 = 1;
      int* ptr1335 = &(t1333)[c1334];
      __first1318 = ptr1335;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1336) {
bb1337: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1338;
  this1338 = v1336;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1339 = this1338;
  struct std__allocator_std___Rb_tree_node_int__* base1340 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1339 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1340);
    struct std___Rb_tree_key_compare_std__less_int__* base1341 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1339 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1341);
    struct std___Rb_tree_header* base1342 = (struct std___Rb_tree_header*)((char *)t1339 + 8);
    std___Rb_tree_header___Rb_tree_header(base1342);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1343) {
bb1344: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1345;
  this1345 = v1343;
  struct std____new_allocator_std___Rb_tree_node_int__* t1346 = this1345;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1347) {
bb1348: ;
  struct std__allocator_std___Rb_tree_node_int__* this1349;
  this1349 = v1347;
  struct std__allocator_std___Rb_tree_node_int__* t1350 = this1349;
  struct std____new_allocator_std___Rb_tree_node_int__* base1351 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1350 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1351);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1352) {
bb1353: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1354;
  this1354 = v1352;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1355) {
bb1356: ;
  struct std___Rb_tree_header* this1357;
  this1357 = v1355;
  struct std___Rb_tree_header* t1358 = this1357;
  struct std___Rb_tree_node_base* c1359 = ((void*)0);
  t1358->_M_header._M_parent = c1359;
  t1358->_M_header._M_left = &t1358->_M_header;
  t1358->_M_header._M_right = &t1358->_M_header;
  unsigned long c1360 = 0;
  t1358->_M_node_count = c1360;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1361) {
bb1362: ;
  struct std___Rb_tree_header* this1363;
  this1363 = v1361;
  struct std___Rb_tree_header* t1364 = this1363;
  unsigned int c1365 = 0;
  t1364->_M_header._M_color = c1365;
  std___Rb_tree_header___M_reset(t1364);
  if (__cir_exc_active) {
    return;
  }
  return;
}

