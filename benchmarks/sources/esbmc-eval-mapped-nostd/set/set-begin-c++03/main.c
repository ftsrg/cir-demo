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

int __const_main_mySecondInts[5] = {13, 23, 42, 65, 75};
int __const_main_myints[5] = {75, 23, 65, 42, 13};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 5";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-begin-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
char _str_4[23] = "*it == mySecondInts[i]";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v11) {
bb12: ;
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v18) {
bb19: ;
  struct std___Rb_tree_const_iterator_int_* this20;
  this20 = v18;
  struct std___Rb_tree_const_iterator_int_* t21 = this20;
  struct std___Rb_tree_node_base* c22 = ((void*)0);
  t21->_M_node = c22;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v23, int v24) {
bb25: ;
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
bb34: ;
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
bb43: ;
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
bb52: ;
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
bb65: ;
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
bb82: ;
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
bb94: ;
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
bb124: ;
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
bb133: ;
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
bb140: ;
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
bb150: ;
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
bb171: ;
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
bb182: ;
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
bb205: ;
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
bb211: ;
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

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v218) {
bb219: ;
  struct std__set_int__std__less_int___std__allocator_int__* this220;
  struct std___Rb_tree_const_iterator_int_ __retval221;
  this220 = v218;
  struct std__set_int__std__less_int___std__allocator_int__* t222 = this220;
  struct std___Rb_tree_const_iterator_int_ r223 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t222->_M_t);
  __retval221 = r223;
  struct std___Rb_tree_const_iterator_int_ t224 = __retval221;
  return t224;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v225, struct std___Rb_tree_const_iterator_int_* v226) {
bb227: ;
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
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v235, struct std___Rb_tree_const_iterator_int_* v236) {
bb237: ;
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
bb248: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this249;
  struct std___Rb_tree_const_iterator_int_ __retval250;
  this249 = v247;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t251 = this249;
  struct std___Rb_tree_node_base* r252 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t251);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval250, r252);
  struct std___Rb_tree_const_iterator_int_ t253 = __retval250;
  return t253;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v254) {
bb255: ;
  struct std__set_int__std__less_int___std__allocator_int__* this256;
  struct std___Rb_tree_const_iterator_int_ __retval257;
  this256 = v254;
  struct std__set_int__std__less_int___std__allocator_int__* t258 = this256;
  struct std___Rb_tree_const_iterator_int_ r259 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t258->_M_t);
  __retval257 = r259;
  struct std___Rb_tree_const_iterator_int_ t260 = __retval257;
  return t260;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v261) {
bb262: ;
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
bb272: ;
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

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v280) {
bb281: ;
  struct std__set_int__std__less_int___std__allocator_int__* this282;
  this282 = v280;
  struct std__set_int__std__less_int___std__allocator_int__* t283 = this282;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t283->_M_t);
  }
  return;
}

// function: main
int main() {
bb284: ;
  int __retval285;
  int myints286[5];
  int mySecondInts287[5];
  int i288;
  struct std__set_int__std__less_int___std__allocator_int__ myset289;
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
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset289, cast292, ptr295);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    unsigned long r296 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset289);
    unsigned long c297 = 5;
    _Bool c298 = ((r296 == c297)) ? 1 : 0;
    if (c298) {
    } else {
      char* cast299 = (char*)&(_str);
      char* c300 = (char*)_str_1;
      unsigned int c301 = 19;
      char* cast302 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast299, c300, c301, cast302);
    }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it290);
    char* cast303 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r304 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast303);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset289);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r305 = std__ostream__operator___std__ostream_____(r304, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset289);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp0306;
      struct std___Rb_tree_const_iterator_int_ ref_tmp1307;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0308;
      struct std___Rb_tree_const_iterator_int_ r309 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset289);
      ref_tmp0306 = r309;
      struct std___Rb_tree_const_iterator_int_* r310 = std___Rb_tree_const_iterator_int___operator_(&it290, &ref_tmp0306);
      int c311 = 0;
      i288 = c311;
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r313 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset289);
        ref_tmp1307 = r313;
        _Bool r314 = std__operator___2(&it290, &ref_tmp1307);
        _Bool u315 = !r314;
        if (!u315) break;
          char* cast316 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast316);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset289);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r318 = std___Rb_tree_const_iterator_int___operator____const(&it290);
          int t319 = *r318;
          struct std__basic_ostream_char__std__char_traits_char__* r320 = std__ostream__operator__(r317, t319);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset289);
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
            char* c328 = (char*)_str_1;
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
        std__set_int__std__less_int___std__allocator_int______set(&myset289);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c336 = 0;
    __retval285 = c336;
    int t337 = __retval285;
    int ret_val338 = t337;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset289);
    }
    return ret_val338;
  int t339 = __retval285;
  return t339;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v340) {
bb341: ;
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
bb346: ;
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
bb352: ;
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
bb368: ;
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
bb384: ;
  int* __location385;
  __location385 = v383;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v386, int* v387) {
bb388: ;
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
bb393: ;
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
bb400: ;
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
bb407: ;
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
bb415: ;
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
bb423: ;
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
bb431: ;
  _Bool __retval432;
    _Bool c433 = 0;
    __retval432 = c433;
    _Bool t434 = __retval432;
    return t434;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v435, struct std___Rb_tree_node_int_* v436, unsigned long v437) {
bb438: ;
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
bb460: ;
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
bb474: ;
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
bb483: ;
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
bb492: ;
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
bb500: ;
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
bb514: ;
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
bb530: ;
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
bb535: ;
  struct std__allocator_std___Rb_tree_node_int__* this536;
  this536 = v534;
  struct std__allocator_std___Rb_tree_node_int__* t537 = this536;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v538) {
bb539: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this540;
  this540 = v538;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t541 = this540;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t541->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v542, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v543) {
bb544: ;
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
bb550: ;
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
bb556: ;
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
bb564: ;
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
bb574: ;
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
bb588: ;
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
bb596: ;
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
bb603: ;
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
bb611: ;
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
bb618: ;
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
bb627: ;
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
bb635: ;
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
bb644: ;
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
bb655: ;
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
bb663: ;
  struct std___Rb_tree_node_base* __x664;
  struct std___Rb_tree_node_base* __retval665;
  __x664 = v662;
  struct std___Rb_tree_node_base* t666 = __x664;
  struct std___Rb_tree_node_base* t667 = t666->_M_left;
  __retval665 = t667;
  struct std___Rb_tree_node_base* t668 = __retval665;
  return t668;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v669, struct std___Rb_tree_iterator_int_* v670) {
bb671: ;
  struct std___Rb_tree_iterator_int_* __x672;
  struct std___Rb_tree_iterator_int_* __y673;
  _Bool __retval674;
  __x672 = v669;
  __y673 = v670;
  struct std___Rb_tree_iterator_int_* t675 = __x672;
  struct std___Rb_tree_node_base* t676 = t675->_M_node;
  struct std___Rb_tree_iterator_int_* t677 = __y673;
  struct std___Rb_tree_node_base* t678 = t677->_M_node;
  _Bool c679 = ((t676 == t678)) ? 1 : 0;
  __retval674 = c679;
  _Bool t680 = __retval674;
  return t680;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v681) {
bb682: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this683;
  struct std___Rb_tree_iterator_int_ __retval684;
  this683 = v681;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t685 = this683;
  struct std___Rb_tree_header* base686 = (struct std___Rb_tree_header*)((char *)&(t685->_M_impl) + 8);
  struct std___Rb_tree_node_base* t687 = base686->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval684, t687);
  struct std___Rb_tree_iterator_int_ t688 = __retval684;
  return t688;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v689, int* v690) {
bb691: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this692;
  int* __k693;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval694;
  struct std___Rb_tree_node_base* __x695;
  struct std___Rb_tree_node_base* __y696;
  _Bool __comp697;
  struct std___Rb_tree_iterator_int_ __j698;
  struct std___Rb_tree_node_base* ref_tmp1699;
  this692 = v689;
  __k693 = v690;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t700 = this692;
  struct std___Rb_tree_node_base* r701 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t700);
  __x695 = r701;
  struct std___Rb_tree_node_base* r702 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t700);
  __y696 = r702;
  _Bool c703 = 1;
  __comp697 = c703;
    while (1) {
      struct std___Rb_tree_node_base* t704 = __x695;
      _Bool cast705 = (_Bool)t704;
      if (!cast705) break;
        struct std___Rb_tree_node_base* t706 = __x695;
        __y696 = t706;
        struct std___Rb_tree_key_compare_std__less_int__* base707 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t700->_M_impl) + 0);
        struct std__less_int_* cast708 = (struct std__less_int_*)base707;
        int* t709 = __k693;
        struct std___Rb_tree_node_base* t710 = __x695;
        int* r711 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t710);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r712 = std__less_int___operator___int_const___int_const___const(cast708, t709, r711);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp697 = r712;
        _Bool t713 = __comp697;
        struct std___Rb_tree_node_base* ternary714;
        if (t713) {
          struct std___Rb_tree_node_base* t715 = __x695;
          struct std___Rb_tree_node_base* r716 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t715);
          ternary714 = (struct std___Rb_tree_node_base*)r716;
        } else {
          struct std___Rb_tree_node_base* t717 = __x695;
          struct std___Rb_tree_node_base* r718 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t717);
          ternary714 = (struct std___Rb_tree_node_base*)r718;
        }
        __x695 = ternary714;
    }
  struct std___Rb_tree_node_base* t719 = __y696;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j698, t719);
    _Bool t720 = __comp697;
    if (t720) {
        struct std___Rb_tree_iterator_int_ ref_tmp0721;
        struct std___Rb_tree_iterator_int_ r722 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t700);
        ref_tmp0721 = r722;
        _Bool r723 = std__operator__(&__j698, &ref_tmp0721);
        if (r723) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval694, &__x695, &__y696);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t724 = __retval694;
          return t724;
        } else {
          struct std___Rb_tree_iterator_int_* r725 = std___Rb_tree_iterator_int___operator__(&__j698);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base726 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t700->_M_impl) + 0);
    struct std__less_int_* cast727 = (struct std__less_int_*)base726;
    struct std___Rb_tree_node_base* t728 = __j698._M_node;
    int* r729 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t728);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t730 = __k693;
    _Bool r731 = std__less_int___operator___int_const___int_const___const(cast727, r729, t730);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r731) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval694, &__x695, &__y696);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t732 = __retval694;
      return t732;
    }
  struct std___Rb_tree_node_base* c733 = ((void*)0);
  ref_tmp1699 = c733;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval694, &__j698._M_node, &ref_tmp1699);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t734 = __retval694;
  return t734;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v735) {
bb736: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this737;
  struct std___Rb_tree_node_base** __retval738;
  this737 = v735;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t739 = this737;
  struct std___Rb_tree_header* base740 = (struct std___Rb_tree_header*)((char *)&(t739->_M_impl) + 8);
  __retval738 = &base740->_M_header._M_left;
  struct std___Rb_tree_node_base** t741 = __retval738;
  return t741;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v742, struct std___Rb_tree_node_base** v743, struct std___Rb_tree_node_base** v744) {
bb745: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this746;
  struct std___Rb_tree_node_base** __x747;
  struct std___Rb_tree_node_base** __y748;
  this746 = v742;
  __x747 = v743;
  __y748 = v744;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t749 = this746;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base750 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t749 + 0);
  struct std___Rb_tree_node_base** t751 = __x747;
  struct std___Rb_tree_node_base* t752 = *t751;
  t749->first = t752;
  struct std___Rb_tree_node_base** t753 = __y748;
  struct std___Rb_tree_node_base* t754 = *t753;
  t749->second = t754;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v755) {
bb756: ;
  struct std___Rb_tree_iterator_int_* this757;
  struct std___Rb_tree_iterator_int_* __retval758;
  this757 = v755;
  struct std___Rb_tree_iterator_int_* t759 = this757;
  struct std___Rb_tree_node_base* t760 = t759->_M_node;
  struct std___Rb_tree_node_base* r761 = std___Rb_tree_decrement(t760);
  t759->_M_node = r761;
  __retval758 = t759;
  struct std___Rb_tree_iterator_int_* t762 = __retval758;
  return t762;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v763) {
bb764: ;
  struct std___Rb_tree_node_base* __x765;
  struct std___Rb_tree_node_base* __retval766;
  __x765 = v763;
  struct std___Rb_tree_node_base* t767 = __x765;
  struct std___Rb_tree_node_base* t768 = t767->_M_right;
  __retval766 = t768;
  struct std___Rb_tree_node_base* t769 = __retval766;
  return t769;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v770) {
bb771: ;
  struct std___Rb_tree_iterator_int_* this772;
  struct std___Rb_tree_iterator_int_* __retval773;
  this772 = v770;
  struct std___Rb_tree_iterator_int_* t774 = this772;
  struct std___Rb_tree_node_base* t775 = t774->_M_node;
  struct std___Rb_tree_node_base* r776 = std___Rb_tree_increment(t775);
  t774->_M_node = r776;
  __retval773 = t774;
  struct std___Rb_tree_iterator_int_* t777 = __retval773;
  return t777;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v778, struct std___Rb_tree_node_base** v779, struct std___Rb_tree_node_base** v780) {
bb781: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this782;
  struct std___Rb_tree_node_base** __x783;
  struct std___Rb_tree_node_base** __y784;
  this782 = v778;
  __x783 = v779;
  __y784 = v780;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t785 = this782;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base786 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t785 + 0);
  struct std___Rb_tree_node_base** t787 = __x783;
  struct std___Rb_tree_node_base* t788 = *t787;
  t785->first = t788;
  struct std___Rb_tree_node_base** t789 = __y784;
  struct std___Rb_tree_node_base* t790 = *t789;
  t785->second = t790;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v791, struct std___Rb_tree_const_iterator_int_ v792, int* v793) {
bb794: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this795;
  struct std___Rb_tree_const_iterator_int_ __position796;
  int* __k797;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval798;
  this795 = v791;
  __position796 = v792;
  __k797 = v793;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t799 = this795;
    struct std___Rb_tree_node_base* t800 = __position796._M_node;
    struct std___Rb_tree_node_base* r801 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t799);
    _Bool c802 = ((t800 == r801)) ? 1 : 0;
    if (c802) {
        unsigned long r803 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t799);
        unsigned long c804 = 0;
        _Bool c805 = ((r803 > c804)) ? 1 : 0;
        _Bool ternary806;
        if (c805) {
          struct std___Rb_tree_key_compare_std__less_int__* base807 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t799->_M_impl) + 0);
          struct std__less_int_* cast808 = (struct std__less_int_*)base807;
          struct std___Rb_tree_node_base** r809 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t799);
          struct std___Rb_tree_node_base* t810 = *r809;
          int* r811 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t810);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t812 = __k797;
          _Bool r813 = std__less_int___operator___int_const___int_const___const(cast808, r811, t812);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary806 = (_Bool)r813;
        } else {
          _Bool c814 = 0;
          ternary806 = (_Bool)c814;
        }
        if (ternary806) {
          struct std___Rb_tree_node_base* ref_tmp0815;
          struct std___Rb_tree_node_base* c816 = ((void*)0);
          ref_tmp0815 = c816;
          struct std___Rb_tree_node_base** r817 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t799);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &ref_tmp0815, r817);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t818 = __retval798;
          return t818;
        } else {
          int* t819 = __k797;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r820 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t799, t819);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval798 = r820;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t821 = __retval798;
          return t821;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base822 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t799->_M_impl) + 0);
        struct std__less_int_* cast823 = (struct std__less_int_*)base822;
        int* t824 = __k797;
        struct std___Rb_tree_node_base* t825 = __position796._M_node;
        int* r826 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t825);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r827 = std__less_int___operator___int_const___int_const___const(cast823, t824, r826);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r827) {
          struct std___Rb_tree_iterator_int_ __before828;
          struct std___Rb_tree_node_base* t829 = __position796._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before828, t829);
            struct std___Rb_tree_node_base* t830 = __position796._M_node;
            struct std___Rb_tree_node_base** r831 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t799);
            struct std___Rb_tree_node_base* t832 = *r831;
            _Bool c833 = ((t830 == t832)) ? 1 : 0;
            if (c833) {
              struct std___Rb_tree_node_base** r834 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t799);
              struct std___Rb_tree_node_base** r835 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t799);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, r834, r835);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t836 = __retval798;
              return t836;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base837 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t799->_M_impl) + 0);
                struct std__less_int_* cast838 = (struct std__less_int_*)base837;
                struct std___Rb_tree_iterator_int_* r839 = std___Rb_tree_iterator_int___operator__(&__before828);
                struct std___Rb_tree_node_base* t840 = r839->_M_node;
                int* r841 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t840);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t842 = __k797;
                _Bool r843 = std__less_int___operator___int_const___int_const___const(cast838, r841, t842);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r843) {
                    struct std___Rb_tree_node_base* t844 = __before828._M_node;
                    struct std___Rb_tree_node_base* r845 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t844);
                    _Bool cast846 = (_Bool)r845;
                    _Bool u847 = !cast846;
                    if (u847) {
                      struct std___Rb_tree_node_base* ref_tmp1848;
                      struct std___Rb_tree_node_base* c849 = ((void*)0);
                      ref_tmp1848 = c849;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &ref_tmp1848, &__before828._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t850 = __retval798;
                      return t850;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &__position796._M_node, &__position796._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t851 = __retval798;
                      return t851;
                    }
                } else {
                  int* t852 = __k797;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r853 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t799, t852);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval798 = r853;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t854 = __retval798;
                  return t854;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base855 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t799->_M_impl) + 0);
            struct std__less_int_* cast856 = (struct std__less_int_*)base855;
            struct std___Rb_tree_node_base* t857 = __position796._M_node;
            int* r858 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t857);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t859 = __k797;
            _Bool r860 = std__less_int___operator___int_const___int_const___const(cast856, r858, t859);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r860) {
              struct std___Rb_tree_iterator_int_ __after861;
              struct std___Rb_tree_node_base* t862 = __position796._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after861, t862);
                struct std___Rb_tree_node_base* t863 = __position796._M_node;
                struct std___Rb_tree_node_base** r864 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t799);
                struct std___Rb_tree_node_base* t865 = *r864;
                _Bool c866 = ((t863 == t865)) ? 1 : 0;
                if (c866) {
                  struct std___Rb_tree_node_base* ref_tmp2867;
                  struct std___Rb_tree_node_base* c868 = ((void*)0);
                  ref_tmp2867 = c868;
                  struct std___Rb_tree_node_base** r869 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t799);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &ref_tmp2867, r869);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t870 = __retval798;
                  return t870;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base871 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t799->_M_impl) + 0);
                    struct std__less_int_* cast872 = (struct std__less_int_*)base871;
                    int* t873 = __k797;
                    struct std___Rb_tree_iterator_int_* r874 = std___Rb_tree_iterator_int___operator___2(&__after861);
                    struct std___Rb_tree_node_base* t875 = r874->_M_node;
                    int* r876 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t875);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r877 = std__less_int___operator___int_const___int_const___const(cast872, t873, r876);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r877) {
                        struct std___Rb_tree_node_base* t878 = __position796._M_node;
                        struct std___Rb_tree_node_base* r879 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t878);
                        _Bool cast880 = (_Bool)r879;
                        _Bool u881 = !cast880;
                        if (u881) {
                          struct std___Rb_tree_node_base* ref_tmp3882;
                          struct std___Rb_tree_node_base* c883 = ((void*)0);
                          ref_tmp3882 = c883;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &ref_tmp3882, &__position796._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t884 = __retval798;
                          return t884;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &__after861._M_node, &__after861._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t885 = __retval798;
                          return t885;
                        }
                    } else {
                      int* t886 = __k797;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r887 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t799, t886);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval798 = r887;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t888 = __retval798;
                      return t888;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4889;
              struct std___Rb_tree_node_base* c890 = ((void*)0);
              ref_tmp4889 = c890;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval798, &__position796._M_node, &ref_tmp4889);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t891 = __retval798;
              return t891;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v892, int* v893) {
bb894: ;
  struct std___Identity_int_* this895;
  int* __x896;
  int* __retval897;
  this895 = v892;
  __x896 = v893;
  struct std___Identity_int_* t898 = this895;
  int* t899 = __x896;
  __retval897 = t899;
  int* t900 = __retval897;
  return t900;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v901) {
bb902: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this903;
  unsigned long __retval904;
  this903 = v901;
  struct std____new_allocator_std___Rb_tree_node_int__* t905 = this903;
  unsigned long c906 = 9223372036854775807;
  unsigned long c907 = 40;
  unsigned long b908 = c906 / c907;
  __retval904 = b908;
  unsigned long t909 = __retval904;
  return t909;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v910, unsigned long v911, void* v912) {
bb913: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this914;
  unsigned long __n915;
  void* unnamed916;
  struct std___Rb_tree_node_int_* __retval917;
  this914 = v910;
  __n915 = v911;
  unnamed916 = v912;
  struct std____new_allocator_std___Rb_tree_node_int__* t918 = this914;
    unsigned long t919 = __n915;
    unsigned long r920 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t918);
    _Bool c921 = ((t919 > r920)) ? 1 : 0;
    if (c921) {
        unsigned long t922 = __n915;
        unsigned long c923 = -1;
        unsigned long c924 = 40;
        unsigned long b925 = c923 / c924;
        _Bool c926 = ((t922 > b925)) ? 1 : 0;
        if (c926) {
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
    unsigned long c927 = 8;
    unsigned long c928 = 16;
    _Bool c929 = ((c927 > c928)) ? 1 : 0;
    if (c929) {
      unsigned long __al930;
      unsigned long c931 = 8;
      __al930 = c931;
      unsigned long t932 = __n915;
      unsigned long c933 = 40;
      unsigned long b934 = t932 * c933;
      unsigned long t935 = __al930;
      void* r936 = operator_new_2(b934, t935);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast937 = (struct std___Rb_tree_node_int_*)r936;
      __retval917 = cast937;
      struct std___Rb_tree_node_int_* t938 = __retval917;
      return t938;
    }
  unsigned long t939 = __n915;
  unsigned long c940 = 40;
  unsigned long b941 = t939 * c940;
  void* r942 = operator_new(b941);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast943 = (struct std___Rb_tree_node_int_*)r942;
  __retval917 = cast943;
  struct std___Rb_tree_node_int_* t944 = __retval917;
  return t944;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v945, unsigned long v946) {
bb947: ;
  struct std__allocator_std___Rb_tree_node_int__* this948;
  unsigned long __n949;
  struct std___Rb_tree_node_int_* __retval950;
  this948 = v945;
  __n949 = v946;
  struct std__allocator_std___Rb_tree_node_int__* t951 = this948;
    _Bool r952 = std____is_constant_evaluated();
    if (r952) {
        unsigned long t953 = __n949;
        unsigned long c954 = 40;
        unsigned long ovr955;
        _Bool ovf956 = __builtin_mul_overflow(t953, c954, &ovr955);
        __n949 = ovr955;
        if (ovf956) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t957 = __n949;
      void* r958 = operator_new(t957);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast959 = (struct std___Rb_tree_node_int_*)r958;
      __retval950 = cast959;
      struct std___Rb_tree_node_int_* t960 = __retval950;
      return t960;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base961 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t951 + 0);
  unsigned long t962 = __n949;
  void* c963 = ((void*)0);
  struct std___Rb_tree_node_int_* r964 = std____new_allocator_std___Rb_tree_node_int_____allocate(base961, t962, c963);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval950 = r964;
  struct std___Rb_tree_node_int_* t965 = __retval950;
  return t965;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v966, unsigned long v967) {
bb968: ;
  struct std__allocator_std___Rb_tree_node_int__* __a969;
  unsigned long __n970;
  struct std___Rb_tree_node_int_* __retval971;
  __a969 = v966;
  __n970 = v967;
  struct std__allocator_std___Rb_tree_node_int__* t972 = __a969;
  unsigned long t973 = __n970;
  struct std___Rb_tree_node_int_* r974 = std__allocator_std___Rb_tree_node_int_____allocate(t972, t973);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval971 = r974;
  struct std___Rb_tree_node_int_* t975 = __retval971;
  return t975;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v976) {
bb977: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this978;
  struct std___Rb_tree_node_int_* __retval979;
  this978 = v976;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t980 = this978;
  struct std__allocator_std___Rb_tree_node_int__* r981 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t980);
  unsigned long c982 = 1;
  struct std___Rb_tree_node_int_* r983 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r981, c982);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval979 = r983;
  struct std___Rb_tree_node_int_* t984 = __retval979;
  return t984;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v985, int* v986) {
bb987: ;
  int* __location988;
  int* __args989;
  int* __retval990;
  void* __loc991;
  __location988 = v985;
  __args989 = v986;
  int* t992 = __location988;
  void* cast993 = (void*)t992;
  __loc991 = cast993;
    void* t994 = __loc991;
    int* cast995 = (int*)t994;
    int* t996 = __args989;
    int t997 = *t996;
    *cast995 = t997;
    __retval990 = cast995;
    int* t998 = __retval990;
    return t998;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v999, int* v1000, int* v1001) {
bb1002: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1003;
  int* __p1004;
  int* __args1005;
  __a1003 = v999;
  __p1004 = v1000;
  __args1005 = v1001;
  int* t1006 = __p1004;
  int* t1007 = __args1005;
  int* r1008 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1006, t1007);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1009, struct std___Rb_tree_node_int_* v1010, int* v1011) {
bb1012: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1013;
  struct std___Rb_tree_node_int_* __node1014;
  int* __args1015;
  this1013 = v1009;
  __node1014 = v1010;
  __args1015 = v1011;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1016 = this1013;
      struct std__allocator_std___Rb_tree_node_int__* r1018 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1016);
      struct std___Rb_tree_node_int_* t1019 = __node1014;
      int* r1020 = std___Rb_tree_node_int____M_valptr(t1019);
      if (__cir_exc_active) {
        goto cir_try_dispatch1017;
      }
      int* t1021 = __args1015;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1018, r1020, t1021);
    cir_try_dispatch1017: ;
    if (__cir_exc_active) {
    {
      int ca_tok1022 = 0;
      void* ca_exn1023 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1024 = __node1014;
        struct std___Rb_tree_node_int_* t1025 = __node1014;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1016, t1025);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1026, int* v1027) {
bb1028: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1029;
  int* __args1030;
  struct std___Rb_tree_node_int_* __retval1031;
  struct std___Rb_tree_node_int_* __tmp1032;
  this1029 = v1026;
  __args1030 = v1027;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1033 = this1029;
  struct std___Rb_tree_node_int_* r1034 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1033);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1032 = r1034;
  struct std___Rb_tree_node_int_* t1035 = __tmp1032;
  int* t1036 = __args1030;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1033, t1035, t1036);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1037 = __tmp1032;
  __retval1031 = t1037;
  struct std___Rb_tree_node_int_* t1038 = __retval1031;
  return t1038;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1039, int* v1040) {
bb1041: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1042;
  int* __arg1043;
  struct std___Rb_tree_node_int_* __retval1044;
  this1042 = v1039;
  __arg1043 = v1040;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1045 = this1042;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1046 = t1045->_M_t;
  int* t1047 = __arg1043;
  struct std___Rb_tree_node_int_* r1048 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1046, t1047);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1044 = r1048;
  struct std___Rb_tree_node_int_* t1049 = __retval1044;
  return t1049;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1050, struct std___Rb_tree_node_base* v1051, struct std___Rb_tree_node_base* v1052, struct std___Rb_tree_node_base* v1053) {
bb1054: ;
  _Bool __insert_left1055;
  struct std___Rb_tree_node_base* __x1056;
  struct std___Rb_tree_node_base* __p1057;
  struct std___Rb_tree_node_base* __header1058;
  __insert_left1055 = v1050;
  __x1056 = v1051;
  __p1057 = v1052;
  __header1058 = v1053;
  _Bool t1059 = __insert_left1055;
  struct std___Rb_tree_node_base* t1060 = __x1056;
  struct std___Rb_tree_node_base* t1061 = __p1057;
  struct std___Rb_tree_node_base* t1062 = __header1058;
  std___Rb_tree_insert_and_rebalance(t1059, t1060, t1061, t1062);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1063, struct std___Rb_tree_node_base* v1064, struct std___Rb_tree_node_base* v1065, int* v1066, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1067) {
bb1068: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1069;
  struct std___Rb_tree_node_base* __x1070;
  struct std___Rb_tree_node_base* __p1071;
  int* __v1072;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1073;
  struct std___Rb_tree_iterator_int_ __retval1074;
  _Bool __insert_left1075;
  struct std___Rb_tree_node_base* __z1076;
  this1069 = v1063;
  __x1070 = v1064;
  __p1071 = v1065;
  __v1072 = v1066;
  __node_gen1073 = v1067;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1077 = this1069;
  struct std___Rb_tree_node_base* t1078 = __x1070;
  _Bool cast1079 = (_Bool)t1078;
  _Bool ternary1080;
  if (cast1079) {
    _Bool c1081 = 1;
    ternary1080 = (_Bool)c1081;
  } else {
    struct std___Rb_tree_node_base* t1082 = __p1071;
    struct std___Rb_tree_node_base* r1083 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1077);
    _Bool c1084 = ((t1082 == r1083)) ? 1 : 0;
    ternary1080 = (_Bool)c1084;
  }
  _Bool ternary1085;
  if (ternary1080) {
    _Bool c1086 = 1;
    ternary1085 = (_Bool)c1086;
  } else {
    struct std___Identity_int_ ref_tmp01087;
    struct std___Rb_tree_key_compare_std__less_int__* base1088 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1077->_M_impl) + 0);
    struct std__less_int_* cast1089 = (struct std__less_int_*)base1088;
    int* t1090 = __v1072;
    int* r1091 = std___Identity_int___operator___int___const(&ref_tmp01087, t1090);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1092 = __p1071;
    int* r1093 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1092);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1094 = std__less_int___operator___int_const___int_const___const(cast1089, r1091, r1093);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1085 = (_Bool)r1094;
  }
  __insert_left1075 = ternary1085;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1095 = __node_gen1073;
  int* t1096 = __v1072;
  struct std___Rb_tree_node_int_* r1097 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1095, t1096);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1098 = (struct std___Rb_tree_node_base*)((char *)r1097 + 0);
  struct std___Rb_tree_node_base* r1099 = std___Rb_tree_node_base___M_base_ptr___const(base1098);
  __z1076 = r1099;
  _Bool t1100 = __insert_left1075;
  struct std___Rb_tree_node_base* t1101 = __z1076;
  struct std___Rb_tree_node_base* t1102 = __p1071;
  struct std___Rb_tree_header* base1103 = (struct std___Rb_tree_header*)((char *)&(t1077->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1100, t1101, t1102, &base1103->_M_header);
  struct std___Rb_tree_header* base1104 = (struct std___Rb_tree_header*)((char *)&(t1077->_M_impl) + 8);
  unsigned long t1105 = base1104->_M_node_count;
  unsigned long u1106 = t1105 + 1;
  base1104->_M_node_count = u1106;
  struct std___Rb_tree_node_base* t1107 = __z1076;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1074, t1107);
  struct std___Rb_tree_iterator_int_ t1108 = __retval1074;
  return t1108;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1109, struct std___Rb_tree_node_base* v1110) {
bb1111: ;
  struct std___Rb_tree_iterator_int_* this1112;
  struct std___Rb_tree_node_base* __x1113;
  this1112 = v1109;
  __x1113 = v1110;
  struct std___Rb_tree_iterator_int_* t1114 = this1112;
  struct std___Rb_tree_node_base* t1115 = __x1113;
  t1114->_M_node = t1115;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1116, struct std___Rb_tree_const_iterator_int_ v1117, int* v1118, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1119) {
bb1120: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1121;
  struct std___Rb_tree_const_iterator_int_ __position1122;
  int* __v1123;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1124;
  struct std___Rb_tree_iterator_int_ __retval1125;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1126;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01127;
  struct std___Identity_int_ ref_tmp01128;
  this1121 = v1116;
  __position1122 = v1117;
  __v1123 = v1118;
  __node_gen1124 = v1119;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1129 = this1121;
  agg_tmp01127 = __position1122; // copy
  int* t1130 = __v1123;
  int* r1131 = std___Identity_int___operator___int___const(&ref_tmp01128, t1130);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1132 = agg_tmp01127;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1133 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1129, t1132, r1131);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1126 = r1133;
    struct std___Rb_tree_node_base* t1134 = __res1126.second;
    _Bool cast1135 = (_Bool)t1134;
    if (cast1135) {
      struct std___Rb_tree_node_base* t1136 = __res1126.first;
      struct std___Rb_tree_node_base* t1137 = __res1126.second;
      int* t1138 = __v1123;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1139 = __node_gen1124;
      struct std___Rb_tree_iterator_int_ r1140 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1129, t1136, t1137, t1138, t1139);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1125 = r1140;
      struct std___Rb_tree_iterator_int_ t1141 = __retval1125;
      return t1141;
    }
  struct std___Rb_tree_node_base* t1142 = __res1126.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1125, t1142);
  struct std___Rb_tree_iterator_int_ t1143 = __retval1125;
  return t1143;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1144) {
bb1145: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1146;
  struct std___Rb_tree_iterator_int_ __retval1147;
  this1146 = v1144;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1148 = this1146;
  struct std___Rb_tree_node_base* r1149 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1148);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1147, r1149);
  struct std___Rb_tree_iterator_int_ t1150 = __retval1147;
  return t1150;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1151, struct std___Rb_tree_iterator_int_* v1152) {
bb1153: ;
  struct std___Rb_tree_const_iterator_int_* this1154;
  struct std___Rb_tree_iterator_int_* __it1155;
  this1154 = v1151;
  __it1155 = v1152;
  struct std___Rb_tree_const_iterator_int_* t1156 = this1154;
  struct std___Rb_tree_iterator_int_* t1157 = __it1155;
  struct std___Rb_tree_node_base* t1158 = t1157->_M_node;
  t1156->_M_node = t1158;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1159, int* v1160, int* v1161) {
bb1162: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1163;
  int* __first1164;
  int* __last1165;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1166;
  this1163 = v1159;
  __first1164 = v1160;
  __last1165 = v1161;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1167 = this1163;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1166, t1167);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01168;
    struct std___Rb_tree_iterator_int_ ref_tmp01169;
    struct std___Rb_tree_iterator_int_ agg_tmp11170;
    while (1) {
      int* t1172 = __first1164;
      int* t1173 = __last1165;
      _Bool c1174 = ((t1172 != t1173)) ? 1 : 0;
      if (!c1174) break;
      struct std___Rb_tree_iterator_int_ r1175 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1167);
      ref_tmp01169 = r1175;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01168, &ref_tmp01169);
      int* t1176 = __first1164;
      struct std___Rb_tree_const_iterator_int_ t1177 = agg_tmp01168;
      struct std___Rb_tree_iterator_int_ r1178 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1167, t1177, t1176, &__an1166);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11170 = r1178;
    for_step1171: ;
      int* t1179 = __first1164;
      int c1180 = 1;
      int* ptr1181 = &(t1179)[c1180];
      __first1164 = ptr1181;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1182) {
bb1183: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1184;
  this1184 = v1182;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1185 = this1184;
  struct std__allocator_std___Rb_tree_node_int__* base1186 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1185 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1186);
    struct std___Rb_tree_key_compare_std__less_int__* base1187 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1185 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1187);
    struct std___Rb_tree_header* base1188 = (struct std___Rb_tree_header*)((char *)t1185 + 8);
    std___Rb_tree_header___Rb_tree_header(base1188);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1189) {
bb1190: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1191;
  this1191 = v1189;
  struct std____new_allocator_std___Rb_tree_node_int__* t1192 = this1191;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1193) {
bb1194: ;
  struct std__allocator_std___Rb_tree_node_int__* this1195;
  this1195 = v1193;
  struct std__allocator_std___Rb_tree_node_int__* t1196 = this1195;
  struct std____new_allocator_std___Rb_tree_node_int__* base1197 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1196 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1197);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1198) {
bb1199: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1200;
  this1200 = v1198;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1201) {
bb1202: ;
  struct std___Rb_tree_header* this1203;
  this1203 = v1201;
  struct std___Rb_tree_header* t1204 = this1203;
  struct std___Rb_tree_node_base* c1205 = ((void*)0);
  t1204->_M_header._M_parent = c1205;
  t1204->_M_header._M_left = &t1204->_M_header;
  t1204->_M_header._M_right = &t1204->_M_header;
  unsigned long c1206 = 0;
  t1204->_M_node_count = c1206;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1207) {
bb1208: ;
  struct std___Rb_tree_header* this1209;
  this1209 = v1207;
  struct std___Rb_tree_header* t1210 = this1209;
  unsigned int c1211 = 0;
  t1210->_M_header._M_color = c1211;
  std___Rb_tree_header___M_reset(t1210);
  if (__cir_exc_active) {
    return;
  }
  return;
}

