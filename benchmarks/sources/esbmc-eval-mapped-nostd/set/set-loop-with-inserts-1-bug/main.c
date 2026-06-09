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

int __const_main_mySecondInts[5] = {13, 23, 42, 65, 75};
int __const_main_myints[5] = {75, 23, 65, 42, 13};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 5";
char _str_1[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-loop-with-inserts-1-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = "0";
char _str_4[9] = "*it != 2";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____find(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v0, int* v1, int* v2) {
bb3:
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

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v11) {
bb12:
  struct std__set_int__std__less_int___std__allocator_int__* this13;
  unsigned long __retval14;
  this13 = v11;
  struct std__set_int__std__less_int___std__allocator_int__* t15 = this13;
  unsigned long r16 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t15->_M_t);
  __retval14 = r16;
  unsigned long t17 = __retval14;
  return t17;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v18) {
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

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v203, int* v204) {
bb205:
  int* __location206;
  int* __args207;
  int* __retval208;
  void* __loc209;
  __location206 = v203;
  __args207 = v204;
  int* t210 = __location206;
  void* cast211 = (void*)t210;
  __loc209 = cast211;
    void* t212 = __loc209;
    int* cast213 = (int*)t212;
    int* t214 = __args207;
    int t215 = *t214;
    *cast213 = t215;
    __retval208 = cast213;
    int* t216 = __retval208;
    return t216;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v217, int* v218, int* v219) {
bb220:
  struct std__allocator_std___Rb_tree_node_int__* __a221;
  int* __p222;
  int* __args223;
  __a221 = v217;
  __p222 = v218;
  __args223 = v219;
  int* t224 = __p222;
  int* t225 = __args223;
  int* r226 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t224, t225);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v227, struct std___Rb_tree_node_int_* v228, int* v229) {
bb230:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this231;
  struct std___Rb_tree_node_int_* __node232;
  int* __args233;
  this231 = v227;
  __node232 = v228;
  __args233 = v229;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t234 = this231;
      struct std__allocator_std___Rb_tree_node_int__* r236 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t234);
      struct std___Rb_tree_node_int_* t237 = __node232;
      int* r238 = std___Rb_tree_node_int____M_valptr(t237);
      if (__cir_exc_active) {
        goto cir_try_dispatch235;
      }
      int* t239 = __args233;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r236, r238, t239);
    cir_try_dispatch235: ;
    if (__cir_exc_active) {
    {
      int ca_tok240 = 0;
      void* ca_exn241 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t242 = __node232;
        struct std___Rb_tree_node_int_* t243 = __node232;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t234, t243);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v244, int* v245) {
bb246:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this247;
  int* __args248;
  struct std___Rb_tree_node_int_* __retval249;
  struct std___Rb_tree_node_int_* __tmp250;
  this247 = v244;
  __args248 = v245;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t251 = this247;
  struct std___Rb_tree_node_int_* r252 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t251);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp250 = r252;
  struct std___Rb_tree_node_int_* t253 = __tmp250;
  int* t254 = __args248;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t251, t253, t254);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t255 = __tmp250;
  __retval249 = t255;
  struct std___Rb_tree_node_int_* t256 = __retval249;
  return t256;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v257, int* v258) {
bb259:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this260;
  int* __arg261;
  struct std___Rb_tree_node_int_* __retval262;
  this260 = v257;
  __arg261 = v258;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t263 = this260;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t264 = t263->_M_t;
  int* t265 = __arg261;
  struct std___Rb_tree_node_int_* r266 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t264, t265);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval262 = r266;
  struct std___Rb_tree_node_int_* t267 = __retval262;
  return t267;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSD_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v268, struct std___Rb_tree_node_base* v269, struct std___Rb_tree_node_base* v270, int* v271, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v272) {
bb273:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this274;
  struct std___Rb_tree_node_base* __x275;
  struct std___Rb_tree_node_base* __p276;
  int* __v277;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen278;
  struct std___Rb_tree_iterator_int_ __retval279;
  _Bool __insert_left280;
  struct std___Rb_tree_node_base* __z281;
  this274 = v268;
  __x275 = v269;
  __p276 = v270;
  __v277 = v271;
  __node_gen278 = v272;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t282 = this274;
  struct std___Rb_tree_node_base* t283 = __x275;
  _Bool cast284 = (_Bool)t283;
  _Bool ternary285;
  if (cast284) {
    _Bool c286 = 1;
    ternary285 = (_Bool)c286;
  } else {
    struct std___Rb_tree_node_base* t287 = __p276;
    struct std___Rb_tree_node_base* r288 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t282);
    _Bool c289 = ((t287 == r288)) ? 1 : 0;
    ternary285 = (_Bool)c289;
  }
  _Bool ternary290;
  if (ternary285) {
    _Bool c291 = 1;
    ternary290 = (_Bool)c291;
  } else {
    struct std___Identity_int_ ref_tmp0292;
    struct std___Rb_tree_key_compare_std__less_int__* base293 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t282->_M_impl) + 0);
    struct std__less_int_* cast294 = (struct std__less_int_*)base293;
    int* t295 = __v277;
    int* r296 = std___Identity_int___operator___int_const___const(&ref_tmp0292, t295);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t297 = __p276;
    int* r298 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t297);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r299 = std__less_int___operator___int_const___int_const___const(cast294, r296, r298);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary290 = (_Bool)r299;
  }
  __insert_left280 = ternary290;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t300 = __node_gen278;
  int* t301 = __v277;
  struct std___Rb_tree_node_int_* r302 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t300, t301);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base303 = (struct std___Rb_tree_node_base*)((char *)r302 + 0);
  struct std___Rb_tree_node_base* r304 = std___Rb_tree_node_base___M_base_ptr___const(base303);
  __z281 = r304;
  _Bool t305 = __insert_left280;
  struct std___Rb_tree_node_base* t306 = __z281;
  struct std___Rb_tree_node_base* t307 = __p276;
  struct std___Rb_tree_header* base308 = (struct std___Rb_tree_header*)((char *)&(t282->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t305, t306, t307, &base308->_M_header);
  struct std___Rb_tree_header* base309 = (struct std___Rb_tree_header*)((char *)&(t282->_M_impl) + 8);
  unsigned long t310 = base309->_M_node_count;
  unsigned long u311 = t310 + 1;
  base309->_M_node_count = u311;
  struct std___Rb_tree_node_base* t312 = __z281;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval279, t312);
  struct std___Rb_tree_iterator_int_ t313 = __retval279;
  return t313;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v314, struct std___Rb_tree_iterator_int_* v315, _Bool* v316) {
bb317:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this318;
  struct std___Rb_tree_iterator_int_* __x319;
  _Bool* __y320;
  this318 = v314;
  __x319 = v315;
  __y320 = v316;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t321 = this318;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base322 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t321 + 0);
  struct std___Rb_tree_iterator_int_* t323 = __x319;
  t321->first = *t323; // copy
  _Bool* t324 = __y320;
  _Bool t325 = *t324;
  t321->second = t325;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v326, int* v327) {
bb328:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this329;
  int* __v330;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval331;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res332;
  struct std___Identity_int_ ref_tmp0333;
  struct std___Rb_tree_iterator_int_ ref_tmp3334;
  _Bool ref_tmp4335;
  this329 = v326;
  __v330 = v327;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t336 = this329;
  int* t337 = __v330;
  int* r338 = std___Identity_int___operator___int_const___const(&ref_tmp0333, t337);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r339 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t336, r338);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res332 = r339;
    struct std___Rb_tree_node_base* t340 = __res332.second;
    _Bool cast341 = (_Bool)t340;
    if (cast341) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an342;
      struct std___Rb_tree_iterator_int_ ref_tmp1343;
      _Bool ref_tmp2344;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an342, t336);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t345 = __res332.first;
      struct std___Rb_tree_node_base* t346 = __res332.second;
      int* t347 = __v330;
      struct std___Rb_tree_iterator_int_ r348 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t336, t345, t346, t347, &__an342);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1343 = r348;
      _Bool c349 = 1;
      ref_tmp2344 = c349;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval331, &ref_tmp1343, &ref_tmp2344);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t350 = __retval331;
      return t350;
    }
  struct std___Rb_tree_node_base* t351 = __res332.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3334, t351);
  _Bool c352 = 0;
  ref_tmp4335 = c352;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval331, &ref_tmp3334, &ref_tmp4335);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t353 = __retval331;
  return t353;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v354, struct std___Rb_tree_iterator_int_* v355, _Bool* v356) {
bb357:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this358;
  struct std___Rb_tree_iterator_int_* __x359;
  _Bool* __y360;
  this358 = v354;
  __x359 = v355;
  __y360 = v356;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t361 = this358;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base362 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t361 + 0);
  struct std___Rb_tree_iterator_int_* t363 = __x359;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t361->first, t363);
  _Bool* t364 = __y360;
  _Bool t365 = *t364;
  t361->second = t365;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertERKi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v366, int* v367) {
bb368:
  struct std__set_int__std__less_int___std__allocator_int__* this369;
  int* __x370;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval371;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p372;
  this369 = v366;
  __x370 = v367;
  struct std__set_int__std__less_int___std__allocator_int__* t373 = this369;
  int* t374 = __x370;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r375 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(&t373->_M_t, t374);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p372 = r375;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval371, &__p372.first, &__p372.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t376 = __retval371;
  return t376;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v377, struct std___Rb_tree_node_base* v378, struct std___Rb_tree_node_base* v379, int* v380) {
bb381:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this382;
  struct std___Rb_tree_node_base* __x383;
  struct std___Rb_tree_node_base* __y384;
  int* __k385;
  struct std___Rb_tree_node_base* __retval386;
  this382 = v377;
  __x383 = v378;
  __y384 = v379;
  __k385 = v380;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t387 = this382;
    while (1) {
      struct std___Rb_tree_node_base* t388 = __x383;
      _Bool cast389 = (_Bool)t388;
      if (!cast389) break;
        struct std___Rb_tree_key_compare_std__less_int__* base390 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t387->_M_impl) + 0);
        struct std__less_int_* cast391 = (struct std__less_int_*)base390;
        struct std___Rb_tree_node_base* t392 = __x383;
        int* r393 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t392);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t394 = __k385;
        _Bool r395 = std__less_int___operator___int_const___int_const___const(cast391, r393, t394);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u396 = !r395;
        if (u396) {
          struct std___Rb_tree_node_base* t397 = __x383;
          __y384 = t397;
          struct std___Rb_tree_node_base* t398 = __x383;
          struct std___Rb_tree_node_base* r399 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t398);
          __x383 = r399;
        } else {
          struct std___Rb_tree_node_base* t400 = __x383;
          struct std___Rb_tree_node_base* r401 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t400);
          __x383 = r401;
        }
    }
  struct std___Rb_tree_node_base* t402 = __y384;
  __retval386 = t402;
  struct std___Rb_tree_node_base* t403 = __retval386;
  return t403;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v404, int* v405) {
bb406:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this407;
  int* __k408;
  struct std___Rb_tree_iterator_int_ __retval409;
  struct std___Rb_tree_iterator_int_ __j410;
  struct std___Rb_tree_iterator_int_ ref_tmp0411;
  this407 = v404;
  __k408 = v405;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t412 = this407;
  struct std___Rb_tree_node_base* r413 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t412);
  struct std___Rb_tree_node_base* r414 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t412);
  int* t415 = __k408;
  struct std___Rb_tree_node_base* r416 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t412, r413, r414, t415);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j410, r416);
  struct std___Rb_tree_iterator_int_ r417 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t412);
  ref_tmp0411 = r417;
  _Bool r418 = std__operator__(&__j410, &ref_tmp0411);
  _Bool ternary419;
  if (r418) {
    _Bool c420 = 1;
    ternary419 = (_Bool)c420;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base421 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t412->_M_impl) + 0);
    struct std__less_int_* cast422 = (struct std__less_int_*)base421;
    int* t423 = __k408;
    struct std___Rb_tree_node_base* t424 = __j410._M_node;
    int* r425 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t424);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r426 = std__less_int___operator___int_const___int_const___const(cast422, t423, r425);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary419 = (_Bool)r426;
  }
  if (ternary419) {
    struct std___Rb_tree_iterator_int_ r427 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t412);
    __retval409 = r427;
  } else {
    __retval409 = __j410; // copy
  }
  struct std___Rb_tree_iterator_int_ t428 = __retval409;
  return t428;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____find(struct std__set_int__std__less_int___std__allocator_int__* v429, int* v430) {
bb431:
  struct std__set_int__std__less_int___std__allocator_int__* this432;
  int* __x433;
  struct std___Rb_tree_const_iterator_int_ __retval434;
  struct std___Rb_tree_iterator_int_ ref_tmp0435;
  this432 = v429;
  __x433 = v430;
  struct std__set_int__std__less_int___std__allocator_int__* t436 = this432;
  int* t437 = __x433;
  struct std___Rb_tree_iterator_int_ r438 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(&t436->_M_t, t437);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0435 = r438;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval434, &ref_tmp0435);
  struct std___Rb_tree_const_iterator_int_ t439 = __retval434;
  return t439;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v440, struct std___Rb_tree_const_iterator_int_* v441) {
bb442:
  struct std___Rb_tree_const_iterator_int_* this443;
  struct std___Rb_tree_const_iterator_int_* unnamed444;
  struct std___Rb_tree_const_iterator_int_* __retval445;
  this443 = v440;
  unnamed444 = v441;
  struct std___Rb_tree_const_iterator_int_* t446 = this443;
  struct std___Rb_tree_const_iterator_int_* t447 = unnamed444;
  struct std___Rb_tree_node_base* t448 = t447->_M_node;
  t446->_M_node = t448;
  __retval445 = t446;
  struct std___Rb_tree_const_iterator_int_* t449 = __retval445;
  return t449;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v450) {
bb451:
  struct std___Rb_tree_const_iterator_int_* this452;
  int* __retval453;
  this452 = v450;
  struct std___Rb_tree_const_iterator_int_* t454 = this452;
  struct std___Rb_tree_node_base* t455 = t454->_M_node;
  struct std___Rb_tree_node_int_* derived456 = ((t455) ? (struct std___Rb_tree_node_int_*)((char *)t455 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r457 = std___Rb_tree_node_int____M_valptr___const(derived456);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval453 = r457;
  int* t458 = __retval453;
  return t458;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v459) {
bb460:
  struct std__set_int__std__less_int___std__allocator_int__* this461;
  this461 = v459;
  struct std__set_int__std__less_int___std__allocator_int__* t462 = this461;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t462->_M_t);
  }
  return;
}

// function: main
int main() {
bb463:
  int __retval464;
  int myints465[5];
  int mySecondInts466[5];
  int i467;
  struct std__set_int__std__less_int___std__allocator_int__ myset468;
  struct std___Rb_tree_const_iterator_int_ it469;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0470;
  int ref_tmp1471;
  int c472 = 0;
  __retval464 = c472;
  // array copy
  __builtin_memcpy(myints465, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(mySecondInts466, __const_main_mySecondInts, (unsigned long)5 * sizeof(__const_main_mySecondInts[0]));
  int* cast473 = (int*)&(myints465);
  int* cast474 = (int*)&(myints465);
  int c475 = 5;
  int* ptr476 = &(cast474)[c475];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset468, cast473, ptr476);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    unsigned long r477 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset468);
    unsigned long c478 = 5;
    _Bool c479 = ((r477 == c478)) ? 1 : 0;
    if (c479) {
    } else {
      char* cast480 = (char*)&(_str);
      char* c481 = _str_1;
      unsigned int c482 = 19;
      char* cast483 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast480, c481, c482, cast483);
    }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&it469);
    char* cast484 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r485 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast484);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset468);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r486 = std__ostream__operator___std__ostream_____(r485, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset468);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0487;
      int c488 = 0;
      i467 = c488;
      while (1) {
        int t490 = i467;
        int c491 = 5;
        _Bool c492 = ((t490 < c491)) ? 1 : 0;
        if (!c492) break;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r493 = std__set_int__std__less_int___std__allocator_int_____insert(&myset468, &i467);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset468);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0487 = r493;
      for_step489: ;
        int t494 = i467;
        int u495 = t494 + 1;
        i467 = u495;
      }
    char* cast496 = (char*)&(_str_3);
    char* c497 = _str_1;
    unsigned int c498 = 28;
    char* cast499 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast496, c497, c498, cast499);
    int c500 = 2;
    ref_tmp1471 = c500;
    struct std___Rb_tree_const_iterator_int_ r501 = std__set_int__std__less_int___std__allocator_int_____find(&myset468, &ref_tmp1471);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset468);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0470 = r501;
    struct std___Rb_tree_const_iterator_int_* r502 = std___Rb_tree_const_iterator_int___operator_(&it469, &ref_tmp0470);
    int* r503 = std___Rb_tree_const_iterator_int___operator____const(&it469);
    int t504 = *r503;
    int c505 = 2;
    _Bool c506 = ((t504 != c505)) ? 1 : 0;
    if (c506) {
    } else {
      char* cast507 = (char*)&(_str_4);
      char* c508 = _str_1;
      unsigned int c509 = 30;
      char* cast510 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast507, c508, c509, cast510);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r511 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset468);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c512 = 0;
    __retval464 = c512;
    int t513 = __retval464;
    int ret_val514 = t513;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset468);
    }
    return ret_val514;
  int t515 = __retval464;
  return t515;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v516) {
bb517:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this518;
  this518 = v516;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t519 = this518;
    struct std___Rb_tree_node_int_* r520 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t519);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t519, r520);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t519->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t519->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v521) {
bb522:
  struct std___Rb_tree_node_int_* this523;
  struct std___Rb_tree_node_int_* __retval524;
  this523 = v521;
  struct std___Rb_tree_node_int_* t525 = this523;
  __retval524 = t525;
  struct std___Rb_tree_node_int_* t526 = __retval524;
  return t526;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v527) {
bb528:
  struct std___Rb_tree_node_int_* __x529;
  struct std___Rb_tree_node_int_* __retval530;
  __x529 = v527;
  struct std___Rb_tree_node_int_* t531 = __x529;
  struct std___Rb_tree_node_base* base532 = (struct std___Rb_tree_node_base*)((char *)t531 + 0);
  struct std___Rb_tree_node_base* t533 = base532->_M_right;
  _Bool cast534 = (_Bool)t533;
  struct std___Rb_tree_node_int_* ternary535;
  if (cast534) {
    struct std___Rb_tree_node_int_* t536 = __x529;
    struct std___Rb_tree_node_base* base537 = (struct std___Rb_tree_node_base*)((char *)t536 + 0);
    struct std___Rb_tree_node_base* t538 = base537->_M_right;
    struct std___Rb_tree_node_int_* derived539 = (struct std___Rb_tree_node_int_*)((char *)t538 - 0);
    struct std___Rb_tree_node_int_* r540 = std___Rb_tree_node_int____M_node_ptr(derived539);
    ternary535 = (struct std___Rb_tree_node_int_*)r540;
  } else {
    struct std___Rb_tree_node_int_* c541 = ((void*)0);
    ternary535 = (struct std___Rb_tree_node_int_*)c541;
  }
  __retval530 = ternary535;
  struct std___Rb_tree_node_int_* t542 = __retval530;
  return t542;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v543) {
bb544:
  struct std___Rb_tree_node_int_* __x545;
  struct std___Rb_tree_node_int_* __retval546;
  __x545 = v543;
  struct std___Rb_tree_node_int_* t547 = __x545;
  struct std___Rb_tree_node_base* base548 = (struct std___Rb_tree_node_base*)((char *)t547 + 0);
  struct std___Rb_tree_node_base* t549 = base548->_M_left;
  _Bool cast550 = (_Bool)t549;
  struct std___Rb_tree_node_int_* ternary551;
  if (cast550) {
    struct std___Rb_tree_node_int_* t552 = __x545;
    struct std___Rb_tree_node_base* base553 = (struct std___Rb_tree_node_base*)((char *)t552 + 0);
    struct std___Rb_tree_node_base* t554 = base553->_M_left;
    struct std___Rb_tree_node_int_* derived555 = (struct std___Rb_tree_node_int_*)((char *)t554 - 0);
    struct std___Rb_tree_node_int_* r556 = std___Rb_tree_node_int____M_node_ptr(derived555);
    ternary551 = (struct std___Rb_tree_node_int_*)r556;
  } else {
    struct std___Rb_tree_node_int_* c557 = ((void*)0);
    ternary551 = (struct std___Rb_tree_node_int_*)c557;
  }
  __retval546 = ternary551;
  struct std___Rb_tree_node_int_* t558 = __retval546;
  return t558;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v559) {
bb560:
  int* __location561;
  __location561 = v559;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v562, int* v563) {
bb564:
  struct std__allocator_std___Rb_tree_node_int__* __a565;
  int* __p566;
  __a565 = v562;
  __p566 = v563;
  int* t567 = __p566;
  void_std__destroy_at_int_(t567);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v568) {
bb569:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this570;
  struct std__allocator_std___Rb_tree_node_int__* __retval571;
  this570 = v568;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t572 = this570;
  struct std__allocator_std___Rb_tree_node_int__* base573 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t572->_M_impl) + 0);
  __retval571 = base573;
  struct std__allocator_std___Rb_tree_node_int__* t574 = __retval571;
  return t574;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v575) {
bb576:
  struct __gnu_cxx____aligned_membuf_int_* this577;
  void* __retval578;
  this577 = v575;
  struct __gnu_cxx____aligned_membuf_int_* t579 = this577;
  void* cast580 = (void*)&(t579->_M_storage);
  __retval578 = cast580;
  void* t581 = __retval578;
  return t581;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v582) {
bb583:
  struct __gnu_cxx____aligned_membuf_int_* this584;
  int* __retval585;
  this584 = v582;
  struct __gnu_cxx____aligned_membuf_int_* t586 = this584;
  void* r587 = __gnu_cxx____aligned_membuf_int____M_addr(t586);
  int* cast588 = (int*)r587;
  __retval585 = cast588;
  int* t589 = __retval585;
  return t589;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v590) {
bb591:
  struct std___Rb_tree_node_int_* this592;
  int* __retval593;
  this592 = v590;
  struct std___Rb_tree_node_int_* t594 = this592;
  int* r595 = __gnu_cxx____aligned_membuf_int____M_ptr(&t594->_M_storage);
  __retval593 = r595;
  int* t596 = __retval593;
  return t596;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v597, struct std___Rb_tree_node_int_* v598) {
bb599:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this600;
  struct std___Rb_tree_node_int_* __p601;
  this600 = v597;
  __p601 = v598;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t602 = this600;
  struct std__allocator_std___Rb_tree_node_int__* r603 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t602);
  struct std___Rb_tree_node_int_* t604 = __p601;
  int* r605 = std___Rb_tree_node_int____M_valptr(t604);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r603, r605);
  struct std___Rb_tree_node_int_* t606 = __p601;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb607:
  _Bool __retval608;
    _Bool c609 = 0;
    __retval608 = c609;
    _Bool t610 = __retval608;
    return t610;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v611, struct std___Rb_tree_node_int_* v612, unsigned long v613) {
bb614:
  struct std____new_allocator_std___Rb_tree_node_int__* this615;
  struct std___Rb_tree_node_int_* __p616;
  unsigned long __n617;
  this615 = v611;
  __p616 = v612;
  __n617 = v613;
  struct std____new_allocator_std___Rb_tree_node_int__* t618 = this615;
    unsigned long c619 = 8;
    unsigned long c620 = 16;
    _Bool c621 = ((c619 > c620)) ? 1 : 0;
    if (c621) {
      struct std___Rb_tree_node_int_* t622 = __p616;
      void* cast623 = (void*)t622;
      unsigned long t624 = __n617;
      unsigned long c625 = 40;
      unsigned long b626 = t624 * c625;
      unsigned long c627 = 8;
      operator_delete_3(cast623, b626, c627);
      return;
    }
  struct std___Rb_tree_node_int_* t628 = __p616;
  void* cast629 = (void*)t628;
  unsigned long t630 = __n617;
  unsigned long c631 = 40;
  unsigned long b632 = t630 * c631;
  operator_delete_2(cast629, b632);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v633, struct std___Rb_tree_node_int_* v634, unsigned long v635) {
bb636:
  struct std__allocator_std___Rb_tree_node_int__* this637;
  struct std___Rb_tree_node_int_* __p638;
  unsigned long __n639;
  this637 = v633;
  __p638 = v634;
  __n639 = v635;
  struct std__allocator_std___Rb_tree_node_int__* t640 = this637;
    _Bool r641 = std____is_constant_evaluated();
    if (r641) {
      struct std___Rb_tree_node_int_* t642 = __p638;
      void* cast643 = (void*)t642;
      operator_delete(cast643);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base644 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t640 + 0);
  struct std___Rb_tree_node_int_* t645 = __p638;
  unsigned long t646 = __n639;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base644, t645, t646);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v647, struct std___Rb_tree_node_int_* v648, unsigned long v649) {
bb650:
  struct std__allocator_std___Rb_tree_node_int__* __a651;
  struct std___Rb_tree_node_int_* __p652;
  unsigned long __n653;
  __a651 = v647;
  __p652 = v648;
  __n653 = v649;
  struct std__allocator_std___Rb_tree_node_int__* t654 = __a651;
  struct std___Rb_tree_node_int_* t655 = __p652;
  unsigned long t656 = __n653;
  std__allocator_std___Rb_tree_node_int_____deallocate(t654, t655, t656);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v657, struct std___Rb_tree_node_int_* v658) {
bb659:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this660;
  struct std___Rb_tree_node_int_* __p661;
  this660 = v657;
  __p661 = v658;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t662 = this660;
  struct std__allocator_std___Rb_tree_node_int__* r663 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t662);
  struct std___Rb_tree_node_int_* t664 = __p661;
  unsigned long c665 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r663, t664, c665);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v666, struct std___Rb_tree_node_int_* v667) {
bb668:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this669;
  struct std___Rb_tree_node_int_* __p670;
  this669 = v666;
  __p670 = v667;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t671 = this669;
  struct std___Rb_tree_node_int_* t672 = __p670;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t671, t672);
  struct std___Rb_tree_node_int_* t673 = __p670;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t671, t673);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v674, struct std___Rb_tree_node_int_* v675) {
bb676:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this677;
  struct std___Rb_tree_node_int_* __x678;
  this677 = v674;
  __x678 = v675;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t679 = this677;
    while (1) {
      struct std___Rb_tree_node_int_* t680 = __x678;
      _Bool cast681 = (_Bool)t680;
      if (!cast681) break;
        struct std___Rb_tree_node_int_* __y682;
        struct std___Rb_tree_node_int_* t683 = __x678;
        struct std___Rb_tree_node_int_* r684 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t683);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t679, r684);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t685 = __x678;
        struct std___Rb_tree_node_int_* r686 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t685);
        if (__cir_exc_active) {
          return;
        }
        __y682 = r686;
        struct std___Rb_tree_node_int_* t687 = __x678;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t679, t687);
        struct std___Rb_tree_node_int_* t688 = __y682;
        __x678 = t688;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v689) {
bb690:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this691;
  struct std___Rb_tree_node_int_* __retval692;
  struct std___Rb_tree_node_base* __begin693;
  this691 = v689;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t694 = this691;
  struct std___Rb_tree_header* base695 = (struct std___Rb_tree_header*)((char *)&(t694->_M_impl) + 8);
  struct std___Rb_tree_node_base* t696 = base695->_M_header._M_parent;
  __begin693 = t696;
  struct std___Rb_tree_node_base* t697 = __begin693;
  _Bool cast698 = (_Bool)t697;
  struct std___Rb_tree_node_int_* ternary699;
  if (cast698) {
    struct std___Rb_tree_node_base* t700 = __begin693;
    struct std___Rb_tree_node_int_* derived701 = (struct std___Rb_tree_node_int_*)((char *)t700 - 0);
    struct std___Rb_tree_node_int_* r702 = std___Rb_tree_node_int____M_node_ptr(derived701);
    ternary699 = (struct std___Rb_tree_node_int_*)r702;
  } else {
    struct std___Rb_tree_node_int_* c703 = ((void*)0);
    ternary699 = (struct std___Rb_tree_node_int_*)c703;
  }
  __retval692 = ternary699;
  struct std___Rb_tree_node_int_* t704 = __retval692;
  return t704;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v705) {
bb706:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this707;
  this707 = v705;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t708 = this707;
  {
    struct std__allocator_std___Rb_tree_node_int__* base709 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t708 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base709);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v710) {
bb711:
  struct std__allocator_std___Rb_tree_node_int__* this712;
  this712 = v710;
  struct std__allocator_std___Rb_tree_node_int__* t713 = this712;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v714) {
bb715:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this716;
  this716 = v714;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t717 = this716;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t717->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v718, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v719) {
bb720:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this721;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t722;
  this721 = v718;
  __t722 = v719;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t723 = this721;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t724 = __t722;
  t723->_M_t = t724;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v725) {
bb726:
  struct std___Rb_tree_node_base* this727;
  struct std___Rb_tree_node_base* __retval728;
  this727 = v725;
  struct std___Rb_tree_node_base* t729 = this727;
  __retval728 = t729;
  struct std___Rb_tree_node_base* t730 = __retval728;
  return t730;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v731) {
bb732:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this733;
  struct std___Rb_tree_node_base* __retval734;
  this733 = v731;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t735 = this733;
  struct std___Rb_tree_header* base736 = (struct std___Rb_tree_header*)((char *)&(t735->_M_impl) + 8);
  struct std___Rb_tree_node_base* r737 = std___Rb_tree_node_base___M_base_ptr___const(&base736->_M_header);
  __retval734 = r737;
  struct std___Rb_tree_node_base* t738 = __retval734;
  return t738;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v739) {
bb740:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this741;
  unsigned long __retval742;
  this741 = v739;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t743 = this741;
  struct std___Rb_tree_header* base744 = (struct std___Rb_tree_header*)((char *)&(t743->_M_impl) + 8);
  unsigned long t745 = base744->_M_node_count;
  __retval742 = t745;
  unsigned long t746 = __retval742;
  return t746;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v747, int* v748, int* v749) {
bb750:
  struct std__less_int_* this751;
  int* __x752;
  int* __y753;
  _Bool __retval754;
  this751 = v747;
  __x752 = v748;
  __y753 = v749;
  struct std__less_int_* t755 = this751;
  int* t756 = __x752;
  int t757 = *t756;
  int* t758 = __y753;
  int t759 = *t758;
  _Bool c760 = ((t757 < t759)) ? 1 : 0;
  __retval754 = c760;
  _Bool t761 = __retval754;
  return t761;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v762, int* v763) {
bb764:
  struct std___Identity_int_* this765;
  int* __x766;
  int* __retval767;
  this765 = v762;
  __x766 = v763;
  struct std___Identity_int_* t768 = this765;
  int* t769 = __x766;
  __retval767 = t769;
  int* t770 = __retval767;
  return t770;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v771) {
bb772:
  struct __gnu_cxx____aligned_membuf_int_* this773;
  void* __retval774;
  this773 = v771;
  struct __gnu_cxx____aligned_membuf_int_* t775 = this773;
  void* cast776 = (void*)&(t775->_M_storage);
  __retval774 = cast776;
  void* t777 = __retval774;
  return t777;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v778) {
bb779:
  struct __gnu_cxx____aligned_membuf_int_* this780;
  int* __retval781;
  this780 = v778;
  struct __gnu_cxx____aligned_membuf_int_* t782 = this780;
  void* r783 = __gnu_cxx____aligned_membuf_int____M_addr___const(t782);
  int* cast784 = (int*)r783;
  __retval781 = cast784;
  int* t785 = __retval781;
  return t785;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v786) {
bb787:
  struct std___Rb_tree_node_int_* this788;
  int* __retval789;
  this788 = v786;
  struct std___Rb_tree_node_int_* t790 = this788;
  int* r791 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t790->_M_storage);
  __retval789 = r791;
  int* t792 = __retval789;
  return t792;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v793) {
bb794:
  struct std___Rb_tree_node_int_* __node795;
  int* __retval796;
  struct std___Identity_int_ ref_tmp0797;
  __node795 = v793;
  struct std___Rb_tree_node_int_* t798 = __node795;
  int* r799 = std___Rb_tree_node_int____M_valptr___const(t798);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r800 = std___Identity_int___operator___int_const___const(&ref_tmp0797, r799);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval796 = r800;
  int* t801 = __retval796;
  return t801;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v802) {
bb803:
  struct std___Rb_tree_node_base* __x804;
  int* __retval805;
  __x804 = v802;
  struct std___Rb_tree_node_base* t806 = __x804;
  struct std___Rb_tree_node_int_* derived807 = (struct std___Rb_tree_node_int_*)((char *)t806 - 0);
  int* r808 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived807);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval805 = r808;
  int* t809 = __retval805;
  return t809;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v810) {
bb811:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this812;
  struct std___Rb_tree_node_base** __retval813;
  this812 = v810;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t814 = this812;
  struct std___Rb_tree_header* base815 = (struct std___Rb_tree_header*)((char *)&(t814->_M_impl) + 8);
  __retval813 = &base815->_M_header._M_right;
  struct std___Rb_tree_node_base** t816 = __retval813;
  return t816;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v817, struct std___Rb_tree_node_base** v818, struct std___Rb_tree_node_base** v819) {
bb820:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this821;
  struct std___Rb_tree_node_base** __x822;
  struct std___Rb_tree_node_base** __y823;
  this821 = v817;
  __x822 = v818;
  __y823 = v819;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t824 = this821;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base825 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t824 + 0);
  struct std___Rb_tree_node_base** t826 = __x822;
  struct std___Rb_tree_node_base* t827 = *t826;
  t824->first = t827;
  struct std___Rb_tree_node_base** t828 = __y823;
  struct std___Rb_tree_node_base* t829 = *t828;
  t824->second = t829;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v830) {
bb831:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this832;
  struct std___Rb_tree_node_base* __retval833;
  this832 = v830;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t834 = this832;
  struct std___Rb_tree_header* base835 = (struct std___Rb_tree_header*)((char *)&(t834->_M_impl) + 8);
  struct std___Rb_tree_node_base* t836 = base835->_M_header._M_parent;
  __retval833 = t836;
  struct std___Rb_tree_node_base* t837 = __retval833;
  return t837;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v838) {
bb839:
  struct std___Rb_tree_node_base* __x840;
  struct std___Rb_tree_node_base* __retval841;
  __x840 = v838;
  struct std___Rb_tree_node_base* t842 = __x840;
  struct std___Rb_tree_node_base* t843 = t842->_M_left;
  __retval841 = t843;
  struct std___Rb_tree_node_base* t844 = __retval841;
  return t844;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v845, struct std___Rb_tree_iterator_int_* v846) {
bb847:
  struct std___Rb_tree_iterator_int_* __x848;
  struct std___Rb_tree_iterator_int_* __y849;
  _Bool __retval850;
  __x848 = v845;
  __y849 = v846;
  struct std___Rb_tree_iterator_int_* t851 = __x848;
  struct std___Rb_tree_node_base* t852 = t851->_M_node;
  struct std___Rb_tree_iterator_int_* t853 = __y849;
  struct std___Rb_tree_node_base* t854 = t853->_M_node;
  _Bool c855 = ((t852 == t854)) ? 1 : 0;
  __retval850 = c855;
  _Bool t856 = __retval850;
  return t856;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v857) {
bb858:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this859;
  struct std___Rb_tree_iterator_int_ __retval860;
  this859 = v857;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t861 = this859;
  struct std___Rb_tree_header* base862 = (struct std___Rb_tree_header*)((char *)&(t861->_M_impl) + 8);
  struct std___Rb_tree_node_base* t863 = base862->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval860, t863);
  struct std___Rb_tree_iterator_int_ t864 = __retval860;
  return t864;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v865, int* v866) {
bb867:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this868;
  int* __k869;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval870;
  struct std___Rb_tree_node_base* __x871;
  struct std___Rb_tree_node_base* __y872;
  _Bool __comp873;
  struct std___Rb_tree_iterator_int_ __j874;
  struct std___Rb_tree_node_base* ref_tmp1875;
  this868 = v865;
  __k869 = v866;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t876 = this868;
  struct std___Rb_tree_node_base* r877 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t876);
  __x871 = r877;
  struct std___Rb_tree_node_base* r878 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t876);
  __y872 = r878;
  _Bool c879 = 1;
  __comp873 = c879;
    while (1) {
      struct std___Rb_tree_node_base* t880 = __x871;
      _Bool cast881 = (_Bool)t880;
      if (!cast881) break;
        struct std___Rb_tree_node_base* t882 = __x871;
        __y872 = t882;
        struct std___Rb_tree_key_compare_std__less_int__* base883 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t876->_M_impl) + 0);
        struct std__less_int_* cast884 = (struct std__less_int_*)base883;
        int* t885 = __k869;
        struct std___Rb_tree_node_base* t886 = __x871;
        int* r887 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t886);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r888 = std__less_int___operator___int_const___int_const___const(cast884, t885, r887);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp873 = r888;
        _Bool t889 = __comp873;
        struct std___Rb_tree_node_base* ternary890;
        if (t889) {
          struct std___Rb_tree_node_base* t891 = __x871;
          struct std___Rb_tree_node_base* r892 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t891);
          ternary890 = (struct std___Rb_tree_node_base*)r892;
        } else {
          struct std___Rb_tree_node_base* t893 = __x871;
          struct std___Rb_tree_node_base* r894 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t893);
          ternary890 = (struct std___Rb_tree_node_base*)r894;
        }
        __x871 = ternary890;
    }
  struct std___Rb_tree_node_base* t895 = __y872;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j874, t895);
    _Bool t896 = __comp873;
    if (t896) {
        struct std___Rb_tree_iterator_int_ ref_tmp0897;
        struct std___Rb_tree_iterator_int_ r898 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t876);
        ref_tmp0897 = r898;
        _Bool r899 = std__operator__(&__j874, &ref_tmp0897);
        if (r899) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval870, &__x871, &__y872);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t900 = __retval870;
          return t900;
        } else {
          struct std___Rb_tree_iterator_int_* r901 = std___Rb_tree_iterator_int___operator__(&__j874);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base902 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t876->_M_impl) + 0);
    struct std__less_int_* cast903 = (struct std__less_int_*)base902;
    struct std___Rb_tree_node_base* t904 = __j874._M_node;
    int* r905 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t904);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t906 = __k869;
    _Bool r907 = std__less_int___operator___int_const___int_const___const(cast903, r905, t906);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r907) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval870, &__x871, &__y872);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t908 = __retval870;
      return t908;
    }
  struct std___Rb_tree_node_base* c909 = ((void*)0);
  ref_tmp1875 = c909;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval870, &__j874._M_node, &ref_tmp1875);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t910 = __retval870;
  return t910;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v911) {
bb912:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this913;
  struct std___Rb_tree_node_base** __retval914;
  this913 = v911;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t915 = this913;
  struct std___Rb_tree_header* base916 = (struct std___Rb_tree_header*)((char *)&(t915->_M_impl) + 8);
  __retval914 = &base916->_M_header._M_left;
  struct std___Rb_tree_node_base** t917 = __retval914;
  return t917;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v918, struct std___Rb_tree_node_base** v919, struct std___Rb_tree_node_base** v920) {
bb921:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this922;
  struct std___Rb_tree_node_base** __x923;
  struct std___Rb_tree_node_base** __y924;
  this922 = v918;
  __x923 = v919;
  __y924 = v920;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t925 = this922;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base926 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t925 + 0);
  struct std___Rb_tree_node_base** t927 = __x923;
  struct std___Rb_tree_node_base* t928 = *t927;
  t925->first = t928;
  struct std___Rb_tree_node_base** t929 = __y924;
  struct std___Rb_tree_node_base* t930 = *t929;
  t925->second = t930;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v931) {
bb932:
  struct std___Rb_tree_iterator_int_* this933;
  struct std___Rb_tree_iterator_int_* __retval934;
  this933 = v931;
  struct std___Rb_tree_iterator_int_* t935 = this933;
  struct std___Rb_tree_node_base* t936 = t935->_M_node;
  struct std___Rb_tree_node_base* r937 = std___Rb_tree_decrement(t936);
  t935->_M_node = r937;
  __retval934 = t935;
  struct std___Rb_tree_iterator_int_* t938 = __retval934;
  return t938;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v939) {
bb940:
  struct std___Rb_tree_node_base* __x941;
  struct std___Rb_tree_node_base* __retval942;
  __x941 = v939;
  struct std___Rb_tree_node_base* t943 = __x941;
  struct std___Rb_tree_node_base* t944 = t943->_M_right;
  __retval942 = t944;
  struct std___Rb_tree_node_base* t945 = __retval942;
  return t945;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v946) {
bb947:
  struct std___Rb_tree_iterator_int_* this948;
  struct std___Rb_tree_iterator_int_* __retval949;
  this948 = v946;
  struct std___Rb_tree_iterator_int_* t950 = this948;
  struct std___Rb_tree_node_base* t951 = t950->_M_node;
  struct std___Rb_tree_node_base* r952 = std___Rb_tree_increment(t951);
  t950->_M_node = r952;
  __retval949 = t950;
  struct std___Rb_tree_iterator_int_* t953 = __retval949;
  return t953;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v954, struct std___Rb_tree_node_base** v955, struct std___Rb_tree_node_base** v956) {
bb957:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this958;
  struct std___Rb_tree_node_base** __x959;
  struct std___Rb_tree_node_base** __y960;
  this958 = v954;
  __x959 = v955;
  __y960 = v956;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t961 = this958;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base962 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t961 + 0);
  struct std___Rb_tree_node_base** t963 = __x959;
  struct std___Rb_tree_node_base* t964 = *t963;
  t961->first = t964;
  struct std___Rb_tree_node_base** t965 = __y960;
  struct std___Rb_tree_node_base* t966 = *t965;
  t961->second = t966;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v967, struct std___Rb_tree_const_iterator_int_ v968, int* v969) {
bb970:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this971;
  struct std___Rb_tree_const_iterator_int_ __position972;
  int* __k973;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval974;
  this971 = v967;
  __position972 = v968;
  __k973 = v969;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t975 = this971;
    struct std___Rb_tree_node_base* t976 = __position972._M_node;
    struct std___Rb_tree_node_base* r977 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t975);
    _Bool c978 = ((t976 == r977)) ? 1 : 0;
    if (c978) {
        unsigned long r979 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t975);
        unsigned long c980 = 0;
        _Bool c981 = ((r979 > c980)) ? 1 : 0;
        _Bool ternary982;
        if (c981) {
          struct std___Rb_tree_key_compare_std__less_int__* base983 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t975->_M_impl) + 0);
          struct std__less_int_* cast984 = (struct std__less_int_*)base983;
          struct std___Rb_tree_node_base** r985 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t975);
          struct std___Rb_tree_node_base* t986 = *r985;
          int* r987 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t986);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t988 = __k973;
          _Bool r989 = std__less_int___operator___int_const___int_const___const(cast984, r987, t988);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary982 = (_Bool)r989;
        } else {
          _Bool c990 = 0;
          ternary982 = (_Bool)c990;
        }
        if (ternary982) {
          struct std___Rb_tree_node_base* ref_tmp0991;
          struct std___Rb_tree_node_base* c992 = ((void*)0);
          ref_tmp0991 = c992;
          struct std___Rb_tree_node_base** r993 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t975);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &ref_tmp0991, r993);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t994 = __retval974;
          return t994;
        } else {
          int* t995 = __k973;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r996 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t975, t995);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval974 = r996;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t997 = __retval974;
          return t997;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base998 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t975->_M_impl) + 0);
        struct std__less_int_* cast999 = (struct std__less_int_*)base998;
        int* t1000 = __k973;
        struct std___Rb_tree_node_base* t1001 = __position972._M_node;
        int* r1002 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1001);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1003 = std__less_int___operator___int_const___int_const___const(cast999, t1000, r1002);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r1003) {
          struct std___Rb_tree_iterator_int_ __before1004;
          struct std___Rb_tree_node_base* t1005 = __position972._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1004, t1005);
            struct std___Rb_tree_node_base* t1006 = __position972._M_node;
            struct std___Rb_tree_node_base** r1007 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t975);
            struct std___Rb_tree_node_base* t1008 = *r1007;
            _Bool c1009 = ((t1006 == t1008)) ? 1 : 0;
            if (c1009) {
              struct std___Rb_tree_node_base** r1010 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t975);
              struct std___Rb_tree_node_base** r1011 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t975);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, r1010, r1011);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1012 = __retval974;
              return t1012;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1013 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t975->_M_impl) + 0);
                struct std__less_int_* cast1014 = (struct std__less_int_*)base1013;
                struct std___Rb_tree_iterator_int_* r1015 = std___Rb_tree_iterator_int___operator__(&__before1004);
                struct std___Rb_tree_node_base* t1016 = r1015->_M_node;
                int* r1017 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1016);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1018 = __k973;
                _Bool r1019 = std__less_int___operator___int_const___int_const___const(cast1014, r1017, t1018);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r1019) {
                    struct std___Rb_tree_node_base* t1020 = __before1004._M_node;
                    struct std___Rb_tree_node_base* r1021 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1020);
                    _Bool cast1022 = (_Bool)r1021;
                    _Bool u1023 = !cast1022;
                    if (u1023) {
                      struct std___Rb_tree_node_base* ref_tmp11024;
                      struct std___Rb_tree_node_base* c1025 = ((void*)0);
                      ref_tmp11024 = c1025;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &ref_tmp11024, &__before1004._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1026 = __retval974;
                      return t1026;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &__position972._M_node, &__position972._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1027 = __retval974;
                      return t1027;
                    }
                } else {
                  int* t1028 = __k973;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1029 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t975, t1028);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval974 = r1029;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1030 = __retval974;
                  return t1030;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base1031 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t975->_M_impl) + 0);
            struct std__less_int_* cast1032 = (struct std__less_int_*)base1031;
            struct std___Rb_tree_node_base* t1033 = __position972._M_node;
            int* r1034 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1033);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t1035 = __k973;
            _Bool r1036 = std__less_int___operator___int_const___int_const___const(cast1032, r1034, t1035);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r1036) {
              struct std___Rb_tree_iterator_int_ __after1037;
              struct std___Rb_tree_node_base* t1038 = __position972._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1037, t1038);
                struct std___Rb_tree_node_base* t1039 = __position972._M_node;
                struct std___Rb_tree_node_base** r1040 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t975);
                struct std___Rb_tree_node_base* t1041 = *r1040;
                _Bool c1042 = ((t1039 == t1041)) ? 1 : 0;
                if (c1042) {
                  struct std___Rb_tree_node_base* ref_tmp21043;
                  struct std___Rb_tree_node_base* c1044 = ((void*)0);
                  ref_tmp21043 = c1044;
                  struct std___Rb_tree_node_base** r1045 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t975);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &ref_tmp21043, r1045);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1046 = __retval974;
                  return t1046;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base1047 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t975->_M_impl) + 0);
                    struct std__less_int_* cast1048 = (struct std__less_int_*)base1047;
                    int* t1049 = __k973;
                    struct std___Rb_tree_iterator_int_* r1050 = std___Rb_tree_iterator_int___operator___2(&__after1037);
                    struct std___Rb_tree_node_base* t1051 = r1050->_M_node;
                    int* r1052 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1051);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r1053 = std__less_int___operator___int_const___int_const___const(cast1048, t1049, r1052);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r1053) {
                        struct std___Rb_tree_node_base* t1054 = __position972._M_node;
                        struct std___Rb_tree_node_base* r1055 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1054);
                        _Bool cast1056 = (_Bool)r1055;
                        _Bool u1057 = !cast1056;
                        if (u1057) {
                          struct std___Rb_tree_node_base* ref_tmp31058;
                          struct std___Rb_tree_node_base* c1059 = ((void*)0);
                          ref_tmp31058 = c1059;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &ref_tmp31058, &__position972._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1060 = __retval974;
                          return t1060;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &__after1037._M_node, &__after1037._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1061 = __retval974;
                          return t1061;
                        }
                    } else {
                      int* t1062 = __k973;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1063 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t975, t1062);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval974 = r1063;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1064 = __retval974;
                      return t1064;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp41065;
              struct std___Rb_tree_node_base* c1066 = ((void*)0);
              ref_tmp41065 = c1066;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval974, &__position972._M_node, &ref_tmp41065);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1067 = __retval974;
              return t1067;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1068, int* v1069) {
bb1070:
  struct std___Identity_int_* this1071;
  int* __x1072;
  int* __retval1073;
  this1071 = v1068;
  __x1072 = v1069;
  struct std___Identity_int_* t1074 = this1071;
  int* t1075 = __x1072;
  __retval1073 = t1075;
  int* t1076 = __retval1073;
  return t1076;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1077) {
bb1078:
  struct std____new_allocator_std___Rb_tree_node_int__* this1079;
  unsigned long __retval1080;
  this1079 = v1077;
  struct std____new_allocator_std___Rb_tree_node_int__* t1081 = this1079;
  unsigned long c1082 = 9223372036854775807;
  unsigned long c1083 = 40;
  unsigned long b1084 = c1082 / c1083;
  __retval1080 = b1084;
  unsigned long t1085 = __retval1080;
  return t1085;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1086, unsigned long v1087, void* v1088) {
bb1089:
  struct std____new_allocator_std___Rb_tree_node_int__* this1090;
  unsigned long __n1091;
  void* unnamed1092;
  struct std___Rb_tree_node_int_* __retval1093;
  this1090 = v1086;
  __n1091 = v1087;
  unnamed1092 = v1088;
  struct std____new_allocator_std___Rb_tree_node_int__* t1094 = this1090;
    unsigned long t1095 = __n1091;
    unsigned long r1096 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1094);
    _Bool c1097 = ((t1095 > r1096)) ? 1 : 0;
    if (c1097) {
        unsigned long t1098 = __n1091;
        unsigned long c1099 = -1;
        unsigned long c1100 = 40;
        unsigned long b1101 = c1099 / c1100;
        _Bool c1102 = ((t1098 > b1101)) ? 1 : 0;
        if (c1102) {
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
    unsigned long c1103 = 8;
    unsigned long c1104 = 16;
    _Bool c1105 = ((c1103 > c1104)) ? 1 : 0;
    if (c1105) {
      unsigned long __al1106;
      unsigned long c1107 = 8;
      __al1106 = c1107;
      unsigned long t1108 = __n1091;
      unsigned long c1109 = 40;
      unsigned long b1110 = t1108 * c1109;
      unsigned long t1111 = __al1106;
      void* r1112 = operator_new_2(b1110, t1111);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1113 = (struct std___Rb_tree_node_int_*)r1112;
      __retval1093 = cast1113;
      struct std___Rb_tree_node_int_* t1114 = __retval1093;
      return t1114;
    }
  unsigned long t1115 = __n1091;
  unsigned long c1116 = 40;
  unsigned long b1117 = t1115 * c1116;
  void* r1118 = operator_new(b1117);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1119 = (struct std___Rb_tree_node_int_*)r1118;
  __retval1093 = cast1119;
  struct std___Rb_tree_node_int_* t1120 = __retval1093;
  return t1120;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1121, unsigned long v1122) {
bb1123:
  struct std__allocator_std___Rb_tree_node_int__* this1124;
  unsigned long __n1125;
  struct std___Rb_tree_node_int_* __retval1126;
  this1124 = v1121;
  __n1125 = v1122;
  struct std__allocator_std___Rb_tree_node_int__* t1127 = this1124;
    _Bool r1128 = std____is_constant_evaluated();
    if (r1128) {
        unsigned long t1129 = __n1125;
        unsigned long c1130 = 40;
        unsigned long ovr1131;
        _Bool ovf1132 = __builtin_mul_overflow(t1129, c1130, &ovr1131);
        __n1125 = ovr1131;
        if (ovf1132) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1133 = __n1125;
      void* r1134 = operator_new(t1133);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1135 = (struct std___Rb_tree_node_int_*)r1134;
      __retval1126 = cast1135;
      struct std___Rb_tree_node_int_* t1136 = __retval1126;
      return t1136;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1137 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1127 + 0);
  unsigned long t1138 = __n1125;
  void* c1139 = ((void*)0);
  struct std___Rb_tree_node_int_* r1140 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1137, t1138, c1139);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1126 = r1140;
  struct std___Rb_tree_node_int_* t1141 = __retval1126;
  return t1141;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1142, unsigned long v1143) {
bb1144:
  struct std__allocator_std___Rb_tree_node_int__* __a1145;
  unsigned long __n1146;
  struct std___Rb_tree_node_int_* __retval1147;
  __a1145 = v1142;
  __n1146 = v1143;
  struct std__allocator_std___Rb_tree_node_int__* t1148 = __a1145;
  unsigned long t1149 = __n1146;
  struct std___Rb_tree_node_int_* r1150 = std__allocator_std___Rb_tree_node_int_____allocate(t1148, t1149);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1147 = r1150;
  struct std___Rb_tree_node_int_* t1151 = __retval1147;
  return t1151;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1152) {
bb1153:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1154;
  struct std___Rb_tree_node_int_* __retval1155;
  this1154 = v1152;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1156 = this1154;
  struct std__allocator_std___Rb_tree_node_int__* r1157 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1156);
  unsigned long c1158 = 1;
  struct std___Rb_tree_node_int_* r1159 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1157, c1158);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1155 = r1159;
  struct std___Rb_tree_node_int_* t1160 = __retval1155;
  return t1160;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1161, int* v1162) {
bb1163:
  int* __location1164;
  int* __args1165;
  int* __retval1166;
  void* __loc1167;
  __location1164 = v1161;
  __args1165 = v1162;
  int* t1168 = __location1164;
  void* cast1169 = (void*)t1168;
  __loc1167 = cast1169;
    void* t1170 = __loc1167;
    int* cast1171 = (int*)t1170;
    int* t1172 = __args1165;
    int t1173 = *t1172;
    *cast1171 = t1173;
    __retval1166 = cast1171;
    int* t1174 = __retval1166;
    return t1174;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1175, int* v1176, int* v1177) {
bb1178:
  struct std__allocator_std___Rb_tree_node_int__* __a1179;
  int* __p1180;
  int* __args1181;
  __a1179 = v1175;
  __p1180 = v1176;
  __args1181 = v1177;
  int* t1182 = __p1180;
  int* t1183 = __args1181;
  int* r1184 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1182, t1183);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1185, struct std___Rb_tree_node_int_* v1186, int* v1187) {
bb1188:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1189;
  struct std___Rb_tree_node_int_* __node1190;
  int* __args1191;
  this1189 = v1185;
  __node1190 = v1186;
  __args1191 = v1187;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1192 = this1189;
      struct std__allocator_std___Rb_tree_node_int__* r1194 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1192);
      struct std___Rb_tree_node_int_* t1195 = __node1190;
      int* r1196 = std___Rb_tree_node_int____M_valptr(t1195);
      if (__cir_exc_active) {
        goto cir_try_dispatch1193;
      }
      int* t1197 = __args1191;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1194, r1196, t1197);
    cir_try_dispatch1193: ;
    if (__cir_exc_active) {
    {
      int ca_tok1198 = 0;
      void* ca_exn1199 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1200 = __node1190;
        struct std___Rb_tree_node_int_* t1201 = __node1190;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1192, t1201);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1202, int* v1203) {
bb1204:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1205;
  int* __args1206;
  struct std___Rb_tree_node_int_* __retval1207;
  struct std___Rb_tree_node_int_* __tmp1208;
  this1205 = v1202;
  __args1206 = v1203;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1209 = this1205;
  struct std___Rb_tree_node_int_* r1210 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1209);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1208 = r1210;
  struct std___Rb_tree_node_int_* t1211 = __tmp1208;
  int* t1212 = __args1206;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1209, t1211, t1212);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1213 = __tmp1208;
  __retval1207 = t1213;
  struct std___Rb_tree_node_int_* t1214 = __retval1207;
  return t1214;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1215, int* v1216) {
bb1217:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1218;
  int* __arg1219;
  struct std___Rb_tree_node_int_* __retval1220;
  this1218 = v1215;
  __arg1219 = v1216;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1221 = this1218;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1222 = t1221->_M_t;
  int* t1223 = __arg1219;
  struct std___Rb_tree_node_int_* r1224 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1222, t1223);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1220 = r1224;
  struct std___Rb_tree_node_int_* t1225 = __retval1220;
  return t1225;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1226, struct std___Rb_tree_node_base* v1227, struct std___Rb_tree_node_base* v1228, struct std___Rb_tree_node_base* v1229) {
bb1230:
  _Bool __insert_left1231;
  struct std___Rb_tree_node_base* __x1232;
  struct std___Rb_tree_node_base* __p1233;
  struct std___Rb_tree_node_base* __header1234;
  __insert_left1231 = v1226;
  __x1232 = v1227;
  __p1233 = v1228;
  __header1234 = v1229;
  _Bool t1235 = __insert_left1231;
  struct std___Rb_tree_node_base* t1236 = __x1232;
  struct std___Rb_tree_node_base* t1237 = __p1233;
  struct std___Rb_tree_node_base* t1238 = __header1234;
  std___Rb_tree_insert_and_rebalance(t1235, t1236, t1237, t1238);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1239, struct std___Rb_tree_node_base* v1240, struct std___Rb_tree_node_base* v1241, int* v1242, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1243) {
bb1244:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1245;
  struct std___Rb_tree_node_base* __x1246;
  struct std___Rb_tree_node_base* __p1247;
  int* __v1248;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1249;
  struct std___Rb_tree_iterator_int_ __retval1250;
  _Bool __insert_left1251;
  struct std___Rb_tree_node_base* __z1252;
  this1245 = v1239;
  __x1246 = v1240;
  __p1247 = v1241;
  __v1248 = v1242;
  __node_gen1249 = v1243;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1253 = this1245;
  struct std___Rb_tree_node_base* t1254 = __x1246;
  _Bool cast1255 = (_Bool)t1254;
  _Bool ternary1256;
  if (cast1255) {
    _Bool c1257 = 1;
    ternary1256 = (_Bool)c1257;
  } else {
    struct std___Rb_tree_node_base* t1258 = __p1247;
    struct std___Rb_tree_node_base* r1259 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1253);
    _Bool c1260 = ((t1258 == r1259)) ? 1 : 0;
    ternary1256 = (_Bool)c1260;
  }
  _Bool ternary1261;
  if (ternary1256) {
    _Bool c1262 = 1;
    ternary1261 = (_Bool)c1262;
  } else {
    struct std___Identity_int_ ref_tmp01263;
    struct std___Rb_tree_key_compare_std__less_int__* base1264 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1253->_M_impl) + 0);
    struct std__less_int_* cast1265 = (struct std__less_int_*)base1264;
    int* t1266 = __v1248;
    int* r1267 = std___Identity_int___operator___int___const(&ref_tmp01263, t1266);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1268 = __p1247;
    int* r1269 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1268);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1270 = std__less_int___operator___int_const___int_const___const(cast1265, r1267, r1269);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1261 = (_Bool)r1270;
  }
  __insert_left1251 = ternary1261;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1271 = __node_gen1249;
  int* t1272 = __v1248;
  struct std___Rb_tree_node_int_* r1273 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1271, t1272);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1274 = (struct std___Rb_tree_node_base*)((char *)r1273 + 0);
  struct std___Rb_tree_node_base* r1275 = std___Rb_tree_node_base___M_base_ptr___const(base1274);
  __z1252 = r1275;
  _Bool t1276 = __insert_left1251;
  struct std___Rb_tree_node_base* t1277 = __z1252;
  struct std___Rb_tree_node_base* t1278 = __p1247;
  struct std___Rb_tree_header* base1279 = (struct std___Rb_tree_header*)((char *)&(t1253->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1276, t1277, t1278, &base1279->_M_header);
  struct std___Rb_tree_header* base1280 = (struct std___Rb_tree_header*)((char *)&(t1253->_M_impl) + 8);
  unsigned long t1281 = base1280->_M_node_count;
  unsigned long u1282 = t1281 + 1;
  base1280->_M_node_count = u1282;
  struct std___Rb_tree_node_base* t1283 = __z1252;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1250, t1283);
  struct std___Rb_tree_iterator_int_ t1284 = __retval1250;
  return t1284;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1285, struct std___Rb_tree_node_base* v1286) {
bb1287:
  struct std___Rb_tree_iterator_int_* this1288;
  struct std___Rb_tree_node_base* __x1289;
  this1288 = v1285;
  __x1289 = v1286;
  struct std___Rb_tree_iterator_int_* t1290 = this1288;
  struct std___Rb_tree_node_base* t1291 = __x1289;
  t1290->_M_node = t1291;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1292, struct std___Rb_tree_const_iterator_int_ v1293, int* v1294, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1295) {
bb1296:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1297;
  struct std___Rb_tree_const_iterator_int_ __position1298;
  int* __v1299;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1300;
  struct std___Rb_tree_iterator_int_ __retval1301;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1302;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01303;
  struct std___Identity_int_ ref_tmp01304;
  this1297 = v1292;
  __position1298 = v1293;
  __v1299 = v1294;
  __node_gen1300 = v1295;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1305 = this1297;
  agg_tmp01303 = __position1298; // copy
  int* t1306 = __v1299;
  int* r1307 = std___Identity_int___operator___int___const(&ref_tmp01304, t1306);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1308 = agg_tmp01303;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1309 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1305, t1308, r1307);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1302 = r1309;
    struct std___Rb_tree_node_base* t1310 = __res1302.second;
    _Bool cast1311 = (_Bool)t1310;
    if (cast1311) {
      struct std___Rb_tree_node_base* t1312 = __res1302.first;
      struct std___Rb_tree_node_base* t1313 = __res1302.second;
      int* t1314 = __v1299;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1315 = __node_gen1300;
      struct std___Rb_tree_iterator_int_ r1316 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1305, t1312, t1313, t1314, t1315);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1301 = r1316;
      struct std___Rb_tree_iterator_int_ t1317 = __retval1301;
      return t1317;
    }
  struct std___Rb_tree_node_base* t1318 = __res1302.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1301, t1318);
  struct std___Rb_tree_iterator_int_ t1319 = __retval1301;
  return t1319;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1320) {
bb1321:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1322;
  struct std___Rb_tree_iterator_int_ __retval1323;
  this1322 = v1320;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1324 = this1322;
  struct std___Rb_tree_node_base* r1325 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1324);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1323, r1325);
  struct std___Rb_tree_iterator_int_ t1326 = __retval1323;
  return t1326;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v1327, struct std___Rb_tree_iterator_int_* v1328) {
bb1329:
  struct std___Rb_tree_const_iterator_int_* this1330;
  struct std___Rb_tree_iterator_int_* __it1331;
  this1330 = v1327;
  __it1331 = v1328;
  struct std___Rb_tree_const_iterator_int_* t1332 = this1330;
  struct std___Rb_tree_iterator_int_* t1333 = __it1331;
  struct std___Rb_tree_node_base* t1334 = t1333->_M_node;
  t1332->_M_node = t1334;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1335, int* v1336, int* v1337) {
bb1338:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1339;
  int* __first1340;
  int* __last1341;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1342;
  this1339 = v1335;
  __first1340 = v1336;
  __last1341 = v1337;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1343 = this1339;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1342, t1343);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01344;
    struct std___Rb_tree_iterator_int_ ref_tmp01345;
    struct std___Rb_tree_iterator_int_ agg_tmp11346;
    while (1) {
      int* t1348 = __first1340;
      int* t1349 = __last1341;
      _Bool c1350 = ((t1348 != t1349)) ? 1 : 0;
      if (!c1350) break;
      struct std___Rb_tree_iterator_int_ r1351 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1343);
      ref_tmp01345 = r1351;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&agg_tmp01344, &ref_tmp01345);
      int* t1352 = __first1340;
      struct std___Rb_tree_const_iterator_int_ t1353 = agg_tmp01344;
      struct std___Rb_tree_iterator_int_ r1354 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1343, t1353, t1352, &__an1342);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11346 = r1354;
    for_step1347: ;
      int* t1355 = __first1340;
      int c1356 = 1;
      int* ptr1357 = &(t1355)[c1356];
      __first1340 = ptr1357;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1358) {
bb1359:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1360;
  this1360 = v1358;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1361 = this1360;
  struct std__allocator_std___Rb_tree_node_int__* base1362 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1361 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1362);
    struct std___Rb_tree_key_compare_std__less_int__* base1363 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1361 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1363);
    struct std___Rb_tree_header* base1364 = (struct std___Rb_tree_header*)((char *)t1361 + 8);
    std___Rb_tree_header___Rb_tree_header(base1364);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1365) {
bb1366:
  struct std____new_allocator_std___Rb_tree_node_int__* this1367;
  this1367 = v1365;
  struct std____new_allocator_std___Rb_tree_node_int__* t1368 = this1367;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1369) {
bb1370:
  struct std__allocator_std___Rb_tree_node_int__* this1371;
  this1371 = v1369;
  struct std__allocator_std___Rb_tree_node_int__* t1372 = this1371;
  struct std____new_allocator_std___Rb_tree_node_int__* base1373 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1372 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1373);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1374) {
bb1375:
  struct std___Rb_tree_key_compare_std__less_int__* this1376;
  this1376 = v1374;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1377) {
bb1378:
  struct std___Rb_tree_header* this1379;
  this1379 = v1377;
  struct std___Rb_tree_header* t1380 = this1379;
  struct std___Rb_tree_node_base* c1381 = ((void*)0);
  t1380->_M_header._M_parent = c1381;
  t1380->_M_header._M_left = &t1380->_M_header;
  t1380->_M_header._M_right = &t1380->_M_header;
  unsigned long c1382 = 0;
  t1380->_M_node_count = c1382;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1383) {
bb1384:
  struct std___Rb_tree_header* this1385;
  this1385 = v1383;
  struct std___Rb_tree_header* t1386 = this1385;
  unsigned int c1387 = 0;
  t1386->_M_header._M_color = c1387;
  std___Rb_tree_header___M_reset(t1386);
  if (__cir_exc_active) {
    return;
  }
  return;
}

